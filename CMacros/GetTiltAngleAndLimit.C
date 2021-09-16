/*- Re-fit dilution curve 
- Handle the uncertainties from the dilution
- Correct the dilution and produce and value for the boosted tilt angle with an error that makes sense.*/

#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

string input = "truthAllDecays_AAR_500MeV_AQ";
//string input = "truth_AAR_250MeV_AQ";
//string input = "trackTruth_AAR_250MeV_BQ";
// string input = "trackReco_AAR_250MeV_BQ";

string limit = "5.4e-18";
//string limit = "1.8e-18"; // only works for "truthAllDecays_AAR_500MeV_AQ"


// Do you want to shift by one unit of chi^2 or one unit of sigma?
bool chiSqrShift = true;

// Global momentum cuts
double xmin = 750; double xmax = 2500;

int GetStep(string input) {

  int step = 0;

  string key1 = "200MeV";
  string key2 = "500MeV";
  string key3 = "250MeV";

  if(input.find(key1) != std::string::npos) { 
    step = 200;
  } else if(input.find(key2) != std::string::npos) { 
    step = 500;
  } else if(input.find(key3) != std::string::npos) { 
    step = 250;
  } else {
    cerr<<"Step size is unknown";
  }

  return step;

}

string GetQual(string input) {

  int step = 0;

  string key1 = "AQ";
  string key2 = "BQ";

  if(input.find(key1) != std::string::npos) { 
    return "A";//key1;
  } else if(input.find(key2) != std::string::npos) { 
    return "B";//key2;
  } else { 
    cerr<<"Quality string unknown";
    return "ERROR";
  }

}

string GetConfig(string input) {

  string key1 = "trackReco";
  string key2 = "trackTruth";
  string key3 = "truth_";
  string key4 = "truthAllDecays";

  if(input.find(key1) != std::string::npos) { 
    return key1;
  } else if(input.find(key2) != std::string::npos) { 
    return key2;
  } else if(input.find(key3) != std::string::npos) { 
    return "truth";//key4;
  } else if(input.find(key4) != std::string::npos) { 
    return key4;
  } else { 
    cerr<<"Config string unknown";
    return "ERROR";
  }

}

string GetTracksOrDecays(string input) { 

  string key1 = "trackReco";
  string key2 = "trackTruth";
  string key3 = "truth_";
  string key4 = "truthAllDecays_";

  if(input.find(key1) != std::string::npos) { 
    return "Tracks";
  } else if(input.find(key2) != std::string::npos) { 
    return "Tracks";
  } else if(input.find(key3) != std::string::npos) { 
    return "Decays";
  } else if(input.find(key4) != std::string::npos) { 
    return "Decays";
  } else { 
    cerr<<"Config string unknown";
    return "ERROR";
  }

}

string GetLabel(string input) { 

  string key1 = "trackReco";
  string key2 = "trackTruth";
  string key3 = "truth_";
  string key4 = "truthAllDecays_";

  if(input.find(key1) != std::string::npos) { 
    return "reco vertices";
  } else if(input.find(key2) != std::string::npos) { 
    return "truth vertices";
  } else if(input.find(key3) != std::string::npos) { 
    return "accepted decays";
  } else if(input.find(key4) != std::string::npos) { 
    return "all decays";
  } else { 
    cerr<<"Config string unknown";
    return "ERROR";
  }

}

// Standard quadratic fit
double ParabolaFunc(double *x, double *par) {
   return par[0] * pow(x[0],2) + par[1] * x[0] + par[2];
}

void DrawMahalanobisFunctions(TGraphErrors* gr, vector<TF1*> funcs_, std::string title, std::string fname, double xmin, double xmax, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.125);

	TLegend *l = new TLegend(0.89,0.15,0.99,0.85);
	l->SetHeader("i, j, k", "C");
	l->SetBorderSize(0);

	gr->SetTitle(title.c_str());
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->SetTitleOffset(1.1);
	gr->GetYaxis()->SetTitleOffset(1.1);
	gr->GetXaxis()->CenterTitle(true);
	gr->GetYaxis()->CenterTitle(true);
	gr->GetYaxis()->SetMaxDigits(4);
	gr->SetMarkerStyle(20);
	
	gr->GetXaxis()->SetRangeUser(xmin,xmax);
	//gr->GetYaxis()->SetRangeUser(ymin,ymax);

	gr->Draw("AP");

	gStyle->SetPalette(kRainBow);
	vector<float> colours_ = { 55, 56.5, 58, 59.5, 61, 62.5, 64, 65.5, 67, 68.5, 70, 71.5, 73, 74.5, 76, 77.5, 79, 80.5, 82, 83.5, 85, 86.5, 88, 89.5, 91, 92.5};
//	int i_colour = 0; 
///	for(auto& func : funcs_) {
	for(int i = 0; i<funcs_.size(); i++) {
		//func->SetLineStyle(kDashed);
		funcs_.at(i)->SetLineWidth(3);
		// Can draw each line a different colour but it look like sick
		funcs_.at(i)->SetLineColor(colours_.at(i));//RainBow+i_colour*1.5)
//		i_colour++;//=i_colour+2;//++;
		funcs_.at(i)->Draw("SAME");
		l->AddEntry(funcs_.at(i));//, (names_.at(i)).c_str());
	}

	gr->Draw("P SAME");

	l->Draw("SAME");

	// // Currently do not draw primary fit, maybe it would be helpful? Just looks so messy.
	gr->GetFunction("d_EDM_refit")->SetLineWidth(0);
	gr->GetFunction("d_EDM_refit")->SetLineColor(kRed);
	gr->GetFunction("d_EDM_refit")->Draw("SAME");//SetLineWidth(3);

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawAllDeltaFits(vector<TGraphErrors*> graphs_, vector<string> names_, std::string title, std::string fname, double ymin, double ymax) { 

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.125);

	graphs_.at(0)->SetTitle(title.c_str());
	graphs_.at(0)->GetXaxis()->SetTitleSize(.04);
	graphs_.at(0)->GetYaxis()->SetTitleSize(.04);
	graphs_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	graphs_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	graphs_.at(0)->GetXaxis()->CenterTitle(true);
	graphs_.at(0)->GetYaxis()->CenterTitle(true);
	graphs_.at(0)->GetYaxis()->SetMaxDigits(4);
	//graphs.at(0)->SetMarkerStyle(20); //  Full circle
	graphs_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	TLegend *l = new TLegend(0.89,0.15,0.99,0.85);
	// if(chiSqrShift) l->SetHeader("#Delta#chi^{2}", "C");
	// else if(!chiSqrShift) l->SetHeader("#Delta#sigma", "C");
	l->SetHeader("i, j, k", "C");

	l->SetBorderSize(0);

	vector<float> colours_ = { 55, 56.5, 58, 59.5, 61, 62.5, 64, 65.5, 67, 68.5, 70, 71.5, 73, 74.5, 76, 77.5, 79, 80.5, 82, 83.5, 85, 86.5, 88, 89.5, 91, 92.5};

	for(int i = 0; i < graphs_.size(); i++) {


		TF1 *fit = graphs_.at(i)->GetFunction("pol0");
		fit->SetLineColor(colours_.at(i));
		
		graphs_.at(i)->SetMarkerStyle(20);
		graphs_.at(i)->SetMarkerColor(colours_.at(i));//kRainBow+i*1.5);
		graphs_.at(i)->SetLineColor(colours_.at(i));//kRainBow+i*1.5);

		l->AddEntry(graphs_.at(i), (names_.at(i)).c_str());

		if(i==0) graphs_.at(i)->Draw("AP");
		else graphs_.at(i)->Draw("P SAME");
		fit->Draw("same");
	}

	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawTH3(TH3D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);//222222);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetZaxis()->SetTitleSize(.04);

	hist->GetXaxis()->SetTitleOffset(2);
	hist->GetYaxis()->SetTitleOffset(2);
	hist->GetZaxis()->SetTitleOffset(1.65);

	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetZaxis()->CenterTitle(1);

	hist->GetXaxis()->SetMaxDigits(4);
	hist->GetYaxis()->SetMaxDigits(4);	
	hist->GetZaxis()->SetMaxDigits(4);

	//gStyle->SetPalette(55);
	c->SetLeftMargin(0.13);

	hist->SetMarkerStyle(20);
	hist->SetLineColor(kBlack);

	hist->SetFillColor(kBlue);
	//hist->Draw("LEGO");//ISO");//SCAT L");
	hist->Draw("BOX");//ISO");//SCAT L");
	//hist->Draw("ISO");//ISO");//SCAT L");

	//c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}
 
void DrawSingleDeltaPrimeFit(TGraphErrors *delta_prime_gr, string title, string fname, double ymin, double ymax, double x1, double y1, double x2, double y2) {

	cout<<"\nDrawing"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// 0.47 wide, 0.15 high. 0.06 seperation from borders
	TLegend *l = new TLegend(x1, y1, x2, y2); 

	l->SetBorderSize(0);

	TString delta_prime = Round(delta_prime_gr->GetFunction("pol0")->GetParameter(0), 3.);
	TString delta_prime_err = Round(delta_prime_gr->GetFunction("pol0")->GetParError(0), 1.);

	string label = GetLabel(input);

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
	// delta_prime_gr->GetYaxis()->SetRangeUser(ymin,ymax);

	delta_prime_gr->SetMarkerStyle(20);

	delta_prime_gr->Draw("AP");

	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

void GetChiSquare(vector<TF1*> mahalanobisFunctions_) {

	// Fit ranges

	// Get dilution curve
	TFile *d_EDM_file = TFile::Open("../Plots/MC/dMu/Dilution/dilutionCurves.root");

	// Get relevant graph
	TGraphErrors *d_EDM_gr = (TGraphErrors*)d_EDM_file->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");

	double min_chi_sqr = d_EDM_gr->GetFunction("ParabolaFunc")->GetChisquare();
	int NDF = d_EDM_gr->GetFunction("ParabolaFunc")->GetNDF();

	cout<<"***********************"<<endl;
	cout<<"Minimum chi square\t"<<min_chi_sqr<<endl;
	cout<<"NDF\t"<<NDF<<endl;
	cout<<"Minimum chi square / NDF\t"<<min_chi_sqr/NDF<<endl;
	cout<<"***********************"<<endl;

	cout<<"\nTrial\t|\tChi^2\t|\tDelta Chi^2"<<endl;

	for(int i = 0; i<mahalanobisFunctions_.size(); i++) { 

		TF1 *func = mahalanobisFunctions_.at(i);

		TF1 *fit = new TF1(Form("chiSqrTest_%d",i), ParabolaFunc, xmin, xmax, 3);
		fit->FixParameter(0, func->GetParameter(0));
		fit->FixParameter(1, func->GetParameter(1));
		fit->FixParameter(2, func->GetParameter(2));

		d_EDM_gr->Fit(fit,"QR");

		cout<<""<<i<<"\t|\t"<<fit->GetChisquare()<<"\t|\t"<<fit->GetChisquare()-min_chi_sqr<<endl;

	}

	d_EDM_file->Close();

	return;
}


vector<TF1*> MahalanobisFunctions(double confidenceLimit, TGraphErrors *d_EDM_gr, TF1* fit, TFitResultPtr fitResult) {

	vector<TF1*> mahalanobisFunctions_;

    // Get parameters from converged fit
 		int nPars = 3;
    TVectorD meanVals(nPars);
    for(int n = 0; n < nPars; n++){
      meanVals[n] = fit->GetParameter(n);
    }

    // Covariance matrix
    TMatrixD covMatrix = fitResult->GetCovarianceMatrix();

    // I do not understand any of the below code
    // Cholesky decomposition (why?)
    TDecompChol decompCholCov(covMatrix);
    decompCholCov.Decompose();
    // What is GetU()?
    TMatrixD matrixCovI = decompCholCov.GetU();
    // What is this?
    TMatrixD matrixCov(nPars,nPars);
    // Transpose...
    matrixCov.Transpose(matrixCovI);

    // Calculate Mahalanobis distance for one sigma CL
    double CL = confidenceLimit; // .317311; // 1 - 68% (one sigma)
    //double CL = 0.80125; // 1 unit of chi^2
    double r2 = 0; // r^2 (see https://upload.wikimedia.org/wikipedia/commons/a/a2/Cumulative_function_n_dimensional_Gaussians_12.2013.pdf)

	// TMath::Prob(r2,nPars)
	// Computation of the probability for a certain Chi-squared (r2)
 	// and number of degrees of freedom (nPars).

    while(TMath::Prob(r2,nPars) > CL){
      r2 += 0.00001; // why 0.00001?
      //cout<<"r2 = "<<r2<<endl;
    }

    double r = sqrt(r2); // This is the Mahalanobis distance threshold under which CL % of points fall below

    // cout << "\nMahalanobis distance = " << r << endl;
    cout << "\n" << r <<" units of chi is the Mahalanobis distance threshold beneath which "<< 1-CL <<"% of the points reside\n"<<endl;

    // Now we start varying parameters according to this distance in 3D space
    cout<<"Parameter shifts:"<<endl;

		// 3D ellipse
		TH3D *ellipse3D = new TH3D("ellipse3D", ";a [MeV^{-2}];b [MeV^{-1}];d_{0}", 27, -8.93E-08, -2.28E-08, 27, 5.25E-05, 0.000272258, 27, -0.113345, 0.0541603);
		TH3D *cube3D = new TH3D("cube3D", ";i;j;k", 24, -1.2, 1.2, 24, -1.2, 1.2, 24, -1.2, 1.2); // 22, -1.1, 1.1, 22, -1.1, 1.1, 22, -1.1, 1.1);
		TString sphereTitle = "";
		if(chiSqrShift) sphereTitle = ";#chi^{2}_{i};#chi^{2}_{j};#chi^{2}_{k}";
		else if(!chiSqrShift) sphereTitle = ";#sigma_{i};#sigma_{j};#sigma_{k}";
		TH3D *sphere3D = new TH3D("sphere3D", sphereTitle, 24, -1.2, 1.2, 24, -1.2, 1.2, 24, -1.2, 1.2); // 22, -1.1, 1.1, 22, -1.1, 1.1, 22, -1.1, 1.1);

    for(int i = -1; i < 2; i++) {
    	for(int j = -1; j < 2; j++) {
			for(int k = -1; k < 2; k++) {

				// Skip the minimum chi^2
				if(i==0 && j==0 && k==0) continue;

				TVectorD u(nPars); 
				u[0] = i;
				u[1] = j;
				u[2] = k;

				// Determine the scale factor required to move 1 sigma
				double scale = u.Norm2Sqr() > 0 ? r/sqrt(u.Norm2Sqr()) : 1; // Norm2Sqr() is SUM{ v[i]^2 } 

				for(int par = 0; par < nPars; par++) u[par] *= scale;

				TVectorD z = matrixCov*u + meanVals;

				// cout<<u[0]<<", "<<u[1]<<", "<<u[2]<<endl;
				// cout<<i <<", "<<j<<", "<<k<<endl;

				for(int par = 0; par < nPars; par++) cout << z[par] << ", ";
				cout << endl;

				// Define shifted function
				// TF1 *trial = new TF1(Form("trial_%d_%d_%d",i,j,k), ParabolaFunc, xmin, xmax, 3);
				TF1 *trial = new TF1(Form("%d, %d, %d",i,j,k), ParabolaFunc, xmin, xmax, 3);
				for(int par = 0; par < nPars; par++) trial->SetParameter(par,z[par]);

				cube3D->Fill(i, j, k);
				ellipse3D->Fill(z[0],z[1],z[2]);
				if(chiSqrShift) sphere3D->Fill(u[0], u[1], u[2]);
				else if(!chiSqrShift) sphere3D->Fill(u[0]/r, u[1]/r, u[2]/r);

				mahalanobisFunctions_.push_back(trial);
			}
		}
	}
    
  DrawMahalanobisFunctions(d_EDM_gr, mahalanobisFunctions_, "", "../Images/MC/Dilution/dMu/"+limit+"/MahalanobisFunctionsOverlay_"+input, xmin, xmax, 0, 0.12);

  DrawTH3(ellipse3D, "", "../Images/MC/Dilution/dMu/"+limit+"/MahalanobisEllipse3D_"+input);
  DrawTH3(cube3D, "", "../Images/MC/Dilution/dMu/"+limit+"/MahalanobisCube3D_"+input);
  DrawTH3(sphere3D, "", "../Images/MC/Dilution/dMu/"+limit+"/MahalanobisSphere3D_"+input);

  GetChiSquare(mahalanobisFunctions_);

	return mahalanobisFunctions_;

}

TGraphErrors *GetDeltaPrimeGraph(TGraphErrors *gr_A_EDM, TF1 *dilutionFunc) { // , double xmin, double xmax) { 

		cout<<gr_A_EDM<<endl;
		cout<<dilutionFunc<<endl;		

		TGraphErrors *gr_delta_prime = new TGraphErrors();

		cout<<endl;

		int count = 0;

		for(int i = 0; i<gr_A_EDM->GetN(); i++) { 

			double x = gr_A_EDM->GetX()[i]; 
			double y = gr_A_EDM->GetY()[i]; 
			double ey = gr_A_EDM->GetEY()[i];

			if(x < xmin || x > xmax) continue;

			double d_EDM = dilutionFunc->Eval(x);
			double delta_prime = y/d_EDM;

			double delta_prime_err = ey/d_EDM;

			gr_delta_prime->SetPoint(count, x, delta_prime);
			gr_delta_prime->SetPointError(count, 0., delta_prime_err);

			cout<<"x : "<<x<<", y : "<<delta_prime<<"±"<<delta_prime_err<<endl;

			count++;

		}

		// Fit 

		TF1 *fit = new TF1("pol0", "pol0",xmin,xmax);
		
		// Now fit
		gr_delta_prime->Fit("pol0","QR");

		return gr_delta_prime;

}


vector<TGraphErrors*> GetDeltaPrimeFits(vector<TF1*> mahalanobisFunctions_, TGraphErrors *gr_A_EDM) { 

	vector<TGraphErrors*> deltaPrimeFits_;

	for(TF1 *mf : mahalanobisFunctions_) { 

		TGraphErrors *gr_delta_prime = GetDeltaPrimeGraph(gr_A_EDM, mf); // , xmin, xmax);//new TGraphErrors();

		deltaPrimeFits_.push_back(gr_delta_prime);

	}

	return deltaPrimeFits_;
}


TH1D *GetDeltaPrimeHist(vector<TGraphErrors*> deltaPrimeFits_, double h_min, double h_max, double binWidth) { 

	// We want 0.05 bin width
	int nBins = (h_max-h_min)/binWidth;

	TH1D *h = new TH1D("h", "h", nBins, h_min, h_max);

	for(auto& gr : deltaPrimeFits_) { 

		TF1 *fit = gr->GetFunction("pol0");

		double delta_prime = fit->GetParameter(0);

		h->Fill(delta_prime);

	}

	return h;

}

void DrawDeltaPrimeHist(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
	//gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(3);
	hist->SetLineColor(1);

	TPaveText *names = new TPaveText(0.57,0.75,0.69,0.89,"NDC");

	names->SetTextAlign(13);
	names->AddText("#LT#delta'#GT [mrad]"); // +SciNotation(double(N))); 
	names->AddText("#sigma_{#delta'} [mrad]"); //+SciNotation(chi2ndf));

	TPaveText *values = new TPaveText(0.72,0.75,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(Round(hist->GetMean(),4)+"#pm"+Round(hist->GetMeanError(),1)); 
	values->AddText(Round(hist->GetRMS(),2)+"#pm"+Round(hist->GetRMSError(),1)); 

	names->SetTextSize(24);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(24);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");
	names->Draw("SAME");
	values->Draw("SAME");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

// When ready transer to FancyDraw.h

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


int main() { 

	cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

	string config = GetConfig(input);
	int step = GetStep(input);
	string qual = GetQual(input);
	string tracksOrDecays = GetTracksOrDecays(input);

	cout<<"Running "<<input<<" with...\nconfig : "<<config<<"\nstep : "<<step<<"\nqual : "<<qual<<"\ntype : "<<tracksOrDecays<<endl;

	cout<<"\n***************************** Getting data *****************************\n"<<endl;

	TString A_EDM_fileName = "../Plots/MC/dMu/"+limit+"/fits/dMuSim_unblinded_"+config+"_AAR_"+to_string(step)+"MeV_"+qual+"Q.root";
	TFile *A_EDM_file = TFile::Open(A_EDM_fileName);

	// Get A_EDM vs p graph
	TString A_EDM_grName = "MomentumBinnedAnalysis/ParameterScans/MomSlices/";
	if(tracksOrDecays=="Tracks") A_EDM_grName += "S0S12S18_A_vs_p"; 
	else if(tracksOrDecays=="Decays") A_EDM_grName += "A_vs_p"; 

	TGraphErrors *A_EDM_gr= (TGraphErrors*)A_EDM_file->Get(A_EDM_grName);

	// Get dilution curve
	TString d_EDM_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.root";
	TFile *d_EDM_file = TFile::Open(d_EDM_fileName);
	TString d_EDM_grName = "DilutionFits/"+qual+"/"+tracksOrDecays+"/"+to_string(step)+"MeV/d_vs_p/"+config;
	TGraphErrors *d_EDM_gr = (TGraphErrors*)d_EDM_file->Get(d_EDM_grName);
	TF1 *d_EDM_fit = d_EDM_gr->GetFunction("ParabolaFunc");

	double chiSqrNDF = d_EDM_fit->GetChisquare() / d_EDM_fit->GetNDF();
	double a = d_EDM_fit->GetParameter(0);	double a_err = d_EDM_fit->GetParError(0);
	double b = d_EDM_fit->GetParameter(1);	double b_err = d_EDM_fit->GetParError(1);
	double d0 = d_EDM_fit->GetParameter(2); 	double d0_err = d_EDM_fit->GetParError(2);

	cout<<"\nA_EDM file "<<A_EDM_fileName<<", "<<A_EDM_file<<endl;
	cout<<"A_EDM graph "<<A_EDM_grName<<", "<<A_EDM_gr<<endl;
	cout<<"d_EDM file "<<d_EDM_fileName<<", "<<d_EDM_file<<endl;
	cout<<"d_EDM graph "<<d_EDM_grName<<", "<<d_EDM_gr<<endl;
	cout<<"d_EDM function "<<d_EDM_fit<<endl;

	cout<<"\n *** Original dilution fit *** \n"<<endl;
	cout<<"chi^2/ndf = "<<chiSqrNDF<<"\n";
	cout<<"a = "<<a<<"±"<<a_err<<" MeV^-2\n";
	cout<<"a = "<<b<<"±"<<b_err<<" MeV^-2\n";
	cout<<"d0 = "<<d0<<"±"<<d0_err<<"\n";


	// Re-assert fit
	TF1 *d_EDM_refit = new TF1("d_EDM_refit", ParabolaFunc, xmin, xmax, 3);
	d_EDM_refit->SetParameter(0, a);
	d_EDM_refit->SetParameter(1, b);
	d_EDM_refit->SetParameter(2, d0);
/*	d_EDM_fit = new TF1("d_EDM_fit", "ParabolaFunc", xmin, xmax, 3);
	d_EDM_fit->SetParameter(0, a);
	d_EDM_fit->SetParameter(1, b);
	d_EDM_fit->SetParameter(2, d0);*/

	// Get fit result pointer
	cout<<"\n *** Getting fit result pointer *** \n"<<endl;
	TFitResultPtr d_EDM_fitResult = d_EDM_gr->Fit(d_EDM_refit,"SR");

	cout<<"\n***************************** Getting main delta prime fit *****************************\n"<<endl;

	TGraphErrors *main_delta_prime_gr = GetDeltaPrimeGraph(A_EDM_gr, d_EDM_refit);
	DrawSingleDeltaPrimeFit(main_delta_prime_gr, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta' [mrad];#delta' [mrad]", "../Images/MC/Dilution/dMu/"+limit+"/MainDeltaFit_"+input, 1.0, 2.4, 0.11, 0.75, 0.59, 0.89);

	cout<<"\n***************************** Calculating Mahalanobis distances *****************************\n"<<endl;

	// double CL = .317311; // 1 sigma
	double CL = 0; 
	if(chiSqrShift) CL = 0.80125; // 1 chi^2
	else if(!chiSqrShift) CL = .317311;

	vector<TF1*> mahalanobisFunctions_ = MahalanobisFunctions(CL, d_EDM_gr, d_EDM_refit, d_EDM_fitResult);

	cout<<"\n*****************************  Generating delta prime fits *****************************"<<endl;

	vector<string> names_; 
	for(int i = 0; i<mahalanobisFunctions_.size(); i++) names_.push_back(mahalanobisFunctions_.at(i)->GetName());

	vector<TGraphErrors*> deltaPrimeFits_ = GetDeltaPrimeFits(mahalanobisFunctions_, A_EDM_gr);

	DrawAllDeltaFits(deltaPrimeFits_, names_, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta' [mrad]", "../Images/MC/Dilution/dMu/"+limit+"/DeltaPrimeFits_"+input, 0, 3.5);
	
	cout<<"\n***************************** Generating histogram of delta primes *****************************"<<endl;

	// Find histogram range
	double lastVal; double h_min; double h_max; 
	for(auto& deltaPrimeFit : deltaPrimeFits_) { 
		double val = deltaPrimeFit->GetFunction("pol0")->GetParameter(0);
		if(val < lastVal) h_min = val; 
		if(val > lastVal) h_max = val;
		lastVal = val;
	}

	h_min = h_min-0.2; h_max = h_max+0.2;

	double binWidth = 0.02;

	TH1D *h_deltaPrime = GetDeltaPrimeHist(deltaPrimeFits_, h_min, h_max, binWidth);

	DrawDeltaPrimeHist(h_deltaPrime, ";#delta' [mrad];Mahalanobis distances", "../Images/MC/Dilution/dMu/"+limit+"/DeltaPrimeHist_"+input);

	double delta_prime_mean = h_deltaPrime->GetMean();
	double delta_prime_rms = h_deltaPrime->GetRMS(); 
	double delta_prime_rms_err = h_deltaPrime->GetRMSError();

	cout<<"RMS of delta primes = "<<delta_prime_rms<<"±"<<delta_prime_rms_err<<" mrad"<<endl;

	cout<<"\n***************************** Calculating limit *****************************"<<endl;

	double d_mu_1 = GetLimit(main_delta_prime_gr->GetFunction("pol0")->GetParameter(0));
	double d_mu_err_1 = GetLimit(main_delta_prime_gr->GetFunction("pol0")->GetParError(0));//(0)delta_prime_rms);

	double d_mu_2 = GetLimit(delta_prime_mean);
	double d_mu_err_2 = GetLimit(delta_prime_rms);//main_delta_prime_gr->GetFunction("pol0")->GetParError(0));

	cout<<"\n *** Limits ***"<<endl;

	cout<<"dMu = "<<d_mu_1<<"±"<<d_mu_err_2<<endl;

/*	cout<<"dMu as the mean of fits distributed by the Mahalanobis distance = "<<d_mu_1<<" ecm"<<endl;
	cout<<"dMu from the minimum chi^2 = "<<d_mu_2<<endl;

	cout<<"Uncertainty Limit from fit alone *** d_Mu = "<<d_mu_1<<"±"<<d_mu_err_1<<" ecm\n"<<endl;
	cout<<"Limit from distribution *** d_Mu = "<<d_mu_2<<"±"<<d_mu_err_2<<" ecm\n"<<endl;*/

	cout<<"\n***************************** Done *****************************"<<endl;

	return 0;
}