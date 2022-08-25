const double xmin = 750;
const double xmax = 2500;

const int step = 250;

#include "Utils.h"

// root DilutionCorrection.C -b | tail -n 6 >> ../Sheets/Run-1a/MomBinnedEDMFitResults_250MeV_BQ.csv

void DrawCorrectedTiltGraph(TGraphErrors *delta_prime_gr, string label, string title, string fname, double x1, double y1, double x2, double y2) {

	cout<<"\nDrawing"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// 0.47 wide, 0.15 high. 0.06 seperation from borders
	TLegend *l = new TLegend(x1, y1, x2, y2); 

	l->SetBorderSize(0);

	TString delta_prime = Round(delta_prime_gr->GetFunction("pol0")->GetParameter(0), 2.);
	TString delta_prime_err = Round(delta_prime_gr->GetFunction("pol0")->GetParError(0), 1.);

	l->AddEntry(delta_prime_gr, (label).c_str());
	l->AddEntry(delta_prime_gr->GetFunction("pol0"), "#LT#delta'#GT = "+delta_prime+"#pm"+delta_prime_err+" mrad");

	delta_prime_gr->SetTitle(title.c_str());
	delta_prime_gr->GetXaxis()->SetTitleSize(.04);
	delta_prime_gr->GetYaxis()->SetTitleSize(.04);
	delta_prime_gr->GetXaxis()->SetTitleOffset(1.1);
	delta_prime_gr->GetYaxis()->SetTitleOffset(1.1);
	delta_prime_gr->GetXaxis()->CenterTitle(true);
	delta_prime_gr->GetYaxis()->CenterTitle(true);
	delta_prime_gr->GetYaxis()->SetMaxDigits(4);


	// Set y-range
	double scale = 2.75;
	double ymin = delta_prime_gr->GetY()[0] - scale*delta_prime_gr->GetEY()[0];
	double ymax = delta_prime_gr->GetY()[0] + scale*delta_prime_gr->GetEY()[0];

	for(int i = 1; i<delta_prime_gr->GetN(); i++) {

		double a = delta_prime_gr->GetY()[i] + 1.25*delta_prime_gr->GetEY()[i];
		double b = delta_prime_gr->GetY()[i] - 1.25*delta_prime_gr->GetEY()[i];

		if(ymax < a) ymax = a;
		if(ymin > b) ymin = b;

	}

	delta_prime_gr->GetYaxis()->SetRangeUser(ymin,ymax);

	delta_prime_gr->SetMarkerStyle(20);

	delta_prime_gr->Draw("AP");

	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

TGraphErrors *CorrectedTiltGraphFit(TGraphErrors *gr_A, TF1 *dilutionFunc) { 	

		TGraphErrors *gr_delta_prime = new TGraphErrors();

		int count = 0;

		for(int i = 0; i<gr_A->GetN(); i++) { 

			double x = gr_A->GetX()[i]; 
			double y = gr_A->GetY()[i]; 
			double ey = gr_A->GetEY()[i];

			if(x < xmin || x > xmax) continue;

			double d_EDM = dilutionFunc->Eval(x);
			double delta_prime = y/d_EDM;

			double delta_prime_err = ey/d_EDM;

			gr_delta_prime->SetPoint(count, x, delta_prime);
			gr_delta_prime->SetPointError(count, 0., delta_prime_err);

			count++;

		}

		TF1 *fit = new TF1("pol0", "pol0",xmin,xmax);
		
		// Now fit
		gr_delta_prime->Fit("pol0","QR");

		return gr_delta_prime;

}

double GetLimit(double delta_prime) { 

	// CODATA 2018
	double pi = 3.14159265358979323846;
	double h = 6.62607015e-34; // Js
	double c = 299792458; // m/s
	double e = 1.602176634e-19; // C

	// Conversions
	double Mev2J = e*1e6;
	double MeV2kg = Mev2J / pow(c,2);
	double m2cm = 1e-2;
	double mrad2rad = 1e-3;

	double m_mu = M_MU * MeV2kg;
	double beta = sqrt(1-(1/pow(GMAGIC,2)));
	double hbar = h/(2*pi);

	// Calculate dMu in SI units
	double dMu = (e*hbar*A_MU*GMAGIC)/(2*m_mu*c*beta) * atan(delta_prime*mrad2rad); // Cm

	// Convert to ecm
	dMu = dMu / (m2cm * e);

	return dMu;

}

void DilutionCorrectionData(string dataset, string fit) { 

	cout<<"\n***************************** Getting data *****************************\n"<<endl;

	TString A_fileName = "../Plots/Data/dMu/"+dataset+"/Fits/dMuFits_"+dataset+"_250MeV_BQ.root";
	TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.root";

	TFile *A_file = TFile::Open(A_fileName);
	TFile *dilution_file  = TFile::Open(dilution_fileName);

	cout<<"Got files:\n"<<A_fileName<<", "<<A_file<<"\n"<<dilution_fileName<<", "<<dilution_file<<endl;

	// Get dilution curve
	TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");

	cout<<"Got dilution graph "<<d_gr<<endl;

	TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("ParabolaFunc");

	cout<<"Got dilution function "<<dilutionFunc<<endl;

	/// Get A_EDM vs p graph
	vector<string> stn_ = {"S12", "S18", "S12S18"};

	vector<TGraphErrors*> gr_; 

	for(auto& stn : stn_) {

		TString A_grName = "MomentumBinnedAnalysis/ParameterScans/MomSlices/"+stn+"_A"+fit+"_vs_p";

		TGraphErrors *A_gr = (TGraphErrors*)A_file->Get(A_grName);

		cout<<"Got graph "<<A_grName<<", "<<A_gr<<endl;

		CorrectedTiltGraphFit(A_gr, dilutionFunc);

		gr_.push_back(A_gr);

	}

	cout<<"\n***************************** Running analysis *****************************\n"<<endl;

	TString output_fileName = "../Plots/Data/dMu/"+dataset+"/Fits/"+fit+"_dilutionCorrectedFits_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"_"+dataset+"_250MeV_BQ.root";
	TFile *output = new TFile(output_fileName, "RECREATE");
	output->mkdir(("A"+fit).c_str()); output->cd(("A"+fit).c_str());

	string subscript = "";
	if(fit=="g2") subscript = "g#minus2";
	else if(fit=="EDM") subscript = fit;

	vector<TGraphErrors*> gr_results_;

	for(int i = 0; i<gr_.size(); i++) {

		TGraphErrors *gr_delta_prime = CorrectedTiltGraphFit(gr_.at(i), dilutionFunc);
		gr_delta_prime->SetName((stn_.at(i)+"_delta_prime_vs_p").c_str());
		gr_delta_prime->Write();

		gr_results_.push_back(gr_delta_prime);

		DrawCorrectedTiltGraph(gr_delta_prime, "Data: "+dataset, stn_.at(i)+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'_{"+subscript+"} [mrad];", "../Images/Data/dMu/"+dataset+"/"+stn_.at(i)+"_"+fit+"_delta_prime_vs_p", 0.11, 0.75, 0.59, 0.89);

	}

	cout<<"Output written to ROOT file "<<output_fileName<<", "<<output<<endl;

	A_file->Close();
	dilution_file->Close();
	output->Close();

	// Result print out loop

	std::cout<<"\n******* Results ******* "<<endl;

	if(fit=="g2") cout<<", delta_prime, , Bz/By [ppm], ,"<<endl;
	else if(fit=="EDM") cout<<", delta_prime, , dMu [ecm], ,"<<endl;
	cout<<"Station, value, error, value, error"<<endl;

	for(int i = 0; i<gr_results_.size(); i++) {

		double delta_prime = gr_results_.at(i)->GetFunction("pol0")->GetParameter(0);
		double err_delta_prime = gr_results_.at(i)->GetFunction("pol0")->GetParError(0);

		double result = delta_prime;
		double error = err_delta_prime;

		if(fit == "g2") { 
			result = result*1e3;
			error = error*1e3;
		} else if(fit == "EDM") {
			result = GetLimit(result);
			error = GetLimit(error);
		}

		cout<<stn_.at(i)<<", "<<delta_prime<<", "<<err_delta_prime<<", "<<result<<", "<<error<<endl;

	}


	return; 

}

void DilutionCorrectionBzSim() { 

	cout<<"\n***************************** Getting data *****************************\n"<<endl;

	TString A_fileName = "../Plots/MC/BzSim/1700ppm/fits/BzSim_unblinded_trackReco_AAR_250MeV_BQ.root";
	TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.root";

	TFile *A_file = TFile::Open(A_fileName);
	TFile *dilution_file  = TFile::Open(dilution_fileName);

	cout<<"Got files:\n"<<A_fileName<<", "<<A_file<<"\n"<<dilution_fileName<<", "<<dilution_file<<endl;

	// Get dilution curve
	TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");

	cout<<"Got dilution graph "<<d_gr<<endl;

	TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("ParabolaFunc");

	cout<<"Got dilution function "<<dilutionFunc<<endl;

	/// Get A_EDM vs p graph
	vector<string> stn_ = {"S12", "S18", "S12S18"};

	vector<TGraphErrors*> gr_; 

	for(auto& stn : stn_) {

		TString A_grName = "MomentumBinnedAnalysis/ParameterScans/MomSlices/"+stn+"_Ag2_vs_p";

		TGraphErrors *A_gr = (TGraphErrors*)A_file->Get(A_grName);

		cout<<"Got graph "<<A_grName<<", "<<A_gr<<endl;

		//CorrectedTiltGraphFit(A_gr, dilutionFunc);

		gr_.push_back(A_gr);

	}

	cout<<"\n***************************** Running analysis *****************************\n"<<endl;

	TString output_fileName = "../Plots/MC/BzSim/1700ppm/fits/DilutionCorrectedFits_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_AAR_250MeV_BQ.root";
	TFile *output = new TFile(output_fileName, "RECREATE");
	output->mkdir("Ag2"); output->cd("Ag2");

	for(int i = 0; i<gr_.size(); i++) {

		TGraphErrors *gr_delta_prime = CorrectedTiltGraphFit(gr_.at(i), dilutionFunc);
		gr_delta_prime->SetName((stn_.at(i)+"_delta_prime_vs_p").c_str());
		gr_delta_prime->Write();

		// Draw 
		// Range 1
		// DrawCorrectedTiltGraph(gr_delta_prime, stn_.at(i)+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'_{g-2} [mrad];", "../Images/MC/BzSim/1700ppm/DilutionCorrection/"+stn_.at(i)+"_delta_prime_vs_p", 0, 7, 0.11, 0.75, 0.59, 0.89);
		// Range 2
		DrawCorrectedTiltGraph(gr_delta_prime, "Sim: reco vertices", stn_.at(i)+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'_{g-2} [mrad];", "../Images/MC/BzSim/1700ppm/DilutionCorrection/"+stn_.at(i)+"_delta_prime_vs_p", 0.11, 0.75, 0.59, 0.89);


	}

	cout<<"Output written to ROOT file "<<output_fileName<<", "<<output<<endl;

	A_file->Close();
	dilution_file->Close();
	output->Close();

	return; 

}

void DilutionCorrection() { 

	//DilutionCorrectionData("Run-1a", "g2");
	//DilutionCorrectionData("Run-1a", "EDM");
	//DilutionCorrectionData("Run-1b", "g2");
	//DilutionCorrectionData("Run-1b", "EDM");
	//DilutionCorrectionData("Run-1c", "g2");
	DilutionCorrectionData("Run-1c", "EDM");
	//DilutionCorrectionData("Run-1d", "g2");
	//DilutionCorrectionData("Run-1d", "EDM");
	//DilutionCorrectionBzSim();

	return;

}