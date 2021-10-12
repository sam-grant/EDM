const double xmin = 1000;//750;
const double xmax = 2250;//2500;

const int step = 250;

#include "Utils.h"

void DrawCorrectedTiltGraph(TGraphErrors *delta_prime_gr, string title, string fname, double ymin, double ymax, double x1, double y1, double x2, double y2) {

	cout<<"\nDrawing"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// 0.47 wide, 0.15 high. 0.06 seperation from borders
	TLegend *l = new TLegend(x1, y1, x2, y2); 

	l->SetBorderSize(0);

	TString delta_prime = Round(delta_prime_gr->GetFunction("pol0")->GetParameter(0), 2.);
	TString delta_prime_err = Round(delta_prime_gr->GetFunction("pol0")->GetParError(0), 1.);

	string label = "reco vertices"; // GetLabel();

	l->AddEntry(delta_prime_gr, ("Sim: "+label).c_str());
	l->AddEntry(delta_prime_gr->GetFunction("pol0"), "#LT#delta'#GT = "+delta_prime+"#pm"+delta_prime_err+" mrad");

	delta_prime_gr->SetTitle(title.c_str());
	delta_prime_gr->GetXaxis()->SetTitleSize(.04);
	delta_prime_gr->GetYaxis()->SetTitleSize(.04);
	delta_prime_gr->GetXaxis()->SetTitleOffset(1.1);
	delta_prime_gr->GetYaxis()->SetTitleOffset(1.1);
	delta_prime_gr->GetXaxis()->CenterTitle(true);
	delta_prime_gr->GetYaxis()->CenterTitle(true);
	delta_prime_gr->GetYaxis()->SetMaxDigits(4);
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

void DilutionCorrectionData() { 

	cout<<"\n***************************** Getting data *****************************\n"<<endl;

	TString A_fileName = "../Plots/Data/dMu/Run-1a/Fits/dMuFits_Run-1a_250MeV_BQ.root";
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

	TString output_fileName = "../Plots/Data/dMu/Run-1a/Fits/DilutionCorrectedFits_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"_Run-1a_250MeV_BQ.root";
	TFile *output = new TFile(output_fileName, "RECREATE");
	output->mkdir("Ag2"); output->cd("Ag2");

	cout<<", delta_prime, , Bz/By, ,"<<endl;
	cout<<"Station, value, error, value, error"<<endl;

	for(int i = 0; i<gr_.size(); i++) {

		TGraphErrors *gr_delta_prime = CorrectedTiltGraphFit(gr_.at(i), dilutionFunc);
		gr_delta_prime->SetName((stn_.at(i)+"_delta_prime_vs_p").c_str());
		gr_delta_prime->Write();

		//DrawCorrectedTiltGraph(gr_delta_prime, stn_.at(i)+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'_{g-2} [mrad];", "../Images/Data/Bz/Run-1a/"+stn_.at(i)+"_delta_prime_vs_p", -1.5, 2, 0.11, 0.75, 0.59, 0.89);

		double delta_prime = gr_delta_prime->GetFunction("pol0")->GetParameter(0);
		double err_delta_prime = gr_delta_prime->GetFunction("pol0")->GetParError(0);

		double Bz = delta_prime*1e3;
		double eBz = err_delta_prime*1e3;

		cout<<stn_.at(i)<<", "<<delta_prime<<", "<<err_delta_prime<<", "<<Bz<<", "<<eBz<<endl;


	}

	cout<<"Output written to ROOT file "<<output_fileName<<", "<<output<<endl;

	A_file->Close();
	dilution_file->Close();
	output->Close();


	return; 

}

void DilutionCorrectionSim() { 

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
		DrawCorrectedTiltGraph(gr_delta_prime, stn_.at(i)+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'_{g-2} [mrad];", "../Images/MC/BzSim/1700ppm/DilutionCorrection/"+stn_.at(i)+"_delta_prime_vs_p", 0.5, 4.25, 0.11, 0.75, 0.59, 0.89);


	}

	cout<<"Output written to ROOT file "<<output_fileName<<", "<<output<<endl;

	A_file->Close();
	dilution_file->Close();
	output->Close();

	return; 

}

void DilutionCorrection() { 

	DilutionCorrectionData();
	//DilutionCorrectionSim();

	return;

}