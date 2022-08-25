#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;


//std::string dMu = "1.8e-18";

void DrawFit(TGraphErrors *gr, string config, string title, string fname, double ymin, double ymax, double x1, double y1, double x2, double y2) {

	cout<<"\nDrawing"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// 0.47 wide, 0.15 high. 0.06 seperation from borders
	TLegend *l = new TLegend(x1, y1, x2, y2); 
	// Bottom right (shifted up by 0.1)
/*	if(dMu == "5.4e-18") {

	if(config == "trackReco_AAR_500MeV_AQ") l = new TLegend(0.36, 0.27, 0.83, 0.42); 
	// Top right
	else if(config == "truth_AAR_500MeV_AQ") l = new TLegend(0.36, 0.68, 0.83, 0.83); 
	// Top left
	else if(config == "truthAllDecays_AAR_500MeV_AQ") l = new TLegend(0.17, 0.68, 0.64, 0.83); 
	// Bottom centre
	else l = new TLegend(0.30, 0.27, 0.70, 0.42); 

	} else if(dMu == "1.8e-18") {

	if(config == "trackReco_AAR_500MeV_AQ") l = new TLegend(0.36, 0.27, 0.83, 0.42); 
	// Top right
	else if(config == "truth_AAR_500MeV_AQ") l = new TLegend(0.36, 0.68, 0.83, 0.83); 
	// Top centre
	else if(config == "truthAllDecays_AAR_500MeV_AQ") l = new TLegend(0.30, 0.68, 0.70, 0.83); 
	// Bottom centre
	else l = new TLegend(0.30, 0.27, 0.70, 0.42); 

	}*/

	l->SetBorderSize(0);

	TString fitRes = Round(gr->GetFunction("pol0")->GetParameter(0), 3.);
	TString fitResErr = Round(gr->GetFunction("pol0")->GetParError(0), 1.);

	l->AddEntry(gr, "Sim: reco vertices");
	l->AddEntry(gr->GetFunction("pol0"), "#LT#delta'#GT = "+fitRes+"#pm"+fitResErr+" mrad");

	gr->SetTitle(title.c_str());
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->SetTitleOffset(1.1);
	gr->GetYaxis()->SetTitleOffset(1.1);
	gr->GetXaxis()->CenterTitle(true);
	gr->GetYaxis()->CenterTitle(true);
	gr->GetYaxis()->SetMaxDigits(4);
	gr->GetYaxis()->SetRangeUser(ymin,ymax);

	gr->SetMarkerStyle(20);

	gr->Draw("AP");

	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

double ParabolaFunc(double *x, double *par) {
   return par[0] * pow(x[0],2) + par[1] * x[0] + par[2];
}


void ParabolaFit(TGraphErrors *graph, string config, bool corr, double xmin, double xmax) { // double p0, double p1, double p2, 
  
   TF1 *fnc = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);

     if(config == "Tracks") {
      fnc->SetParameter(0, -6e-8);
      fnc->SetParameter(1, 2.0e-4);
      fnc->SetParameter(2, 0.05);
     }  else if(config == "Decays") { 
      fnc->SetParameter(0, -5.5e-8);
      fnc->SetParameter(1, 8.0e-5);
      fnc->SetParameter(2, 2.5e-1);
     } 

  graph->Fit(fnc, "R");    

  return;

}

TGraphErrors *GetDeltaGraph(string config, string dMu, double xmin, double xmax) {

	double delta_prime = 0;
	if(dMu=="5.4e-18") delta_prime = 1.7;
	else cerr<<"Limit not programmed";

	TFile *A_EDM_file = TFile::Open(("../Plots/MC/dMu/"+dMu+"/fits/dMuSim_unblinded_"+config+".root").c_str());
	TFile *d_EDM_file = TFile::Open("../Plots/MC/dMu/Dilution/dilutionCurves.root");

	// Get graph
	TGraphErrors *A_EDM_gr = (TGraphErrors*)A_EDM_file->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_A_vs_p");
	// Get function 
	TGraphErrors *d_EDM_gr = (TGraphErrors*)d_EDM_file->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");
	// TF1 *d_EDM_fit = (TF1*)d_EDM_gr->GetFunction("ParabolaFunc");

	// Refit?
	TF1 *fit = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);
    fit->SetParameter(0, -6e-8);
    fit->SetParameter(1, 2.0e-4);
    fit->SetParameter(2, 0.05);

	// Get fit result pointer
	TFitResultPtr fitRes = d_EDM_gr->Fit(fit,"SR");//NQ");

	TMatrixD cor = fitRes->GetCorrelationMatrix();
	TMatrixD cov = fitRes->GetCovarianceMatrix();

	cor.Print();
	cov.Print();

	double var = fitRes->GetCovarianceMatrix()(0,0) + fitRes->GetCovarianceMatrix()(1,1) + fitRes->GetCovarianceMatrix()(2,2);

	cout<<"Varience\t"<<var<<endl;

	int n = A_EDM_gr->GetN();

	TGraphErrors *delta_gr = new TGraphErrors(); 

	bool sysUp = false; bool sysDown = false;

	for(int i = 0; i<n; i++) {

		for(int i_sys = 0; i_sys < 3; i_sys++) { 

			if(i_sys==0) {
				sysUp = false;
				sysDown= false;
			}
			if(i_sys==1) {
				sysUp = true;
				sysDown= false;
			}
			if(i_sys==2) {
				sysUp = false;
				sysDown= true;
			}		


			double p = A_EDM_gr->GetX()[i];
			double ep = A_EDM_gr->GetEX()[i];

			if( p < xmin) continue;
			if( p > xmax) continue;

			double d_EDM = fit->Eval(p);


			if( sysUp ) d_EDM += 4.64787e-02;
			if( sysDown ) d_EDM -= 4.64787e-02;

			double A_EDM = A_EDM_gr->GetY()[i];
			double eA_EDM = A_EDM_gr->GetEY()[i];

			double delta = A_EDM/d_EDM;

			double err_delta = 0;//delta * sqrt( pow((A_EDM/eA_EDM),2) + pow((var/d_EDM),2) );

			delta_gr->SetPoint(delta_gr->GetN(), p, delta);
			delta_gr->SetPointError(delta_gr->GetN()-1, ep, sqrt(err_delta));

			cout<<"For momentum "<<p<<": i_sys = "<<i_sys<<", delta = "<<delta<<endl;

		//counter++;
	
		}
	}

	return delta_gr;

}


void WeightedDeltaFit(string config, string dMu, double xmin, double xmax, double ymin, double ymax, double x1, double y1, double x2, double y2) { //, TFile *output) {

	// Get file 
	string fname = "../Plots/MC/dMu/"+dMu+"/fits/dMuSim_unblinded_"+config+".root";
	TFile *fin = TFile::Open(fname.c_str());

	cout<<"\nOpened input file "<<fname<<", "<<fin<<endl;

	// Get graph
	string grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/delta_A_vs_p"; 
	TGraphErrors *gr = (TGraphErrors*)fin->Get(grn.c_str());

	cout<<"\nGot graph "<<grn<<", "<<gr<<endl;
	TF1 *fit = new TF1("pol0", "pol0",xmin,xmax);
	fit->SetParameter(0,1.7);
	// Now fit
	gr->Fit("pol0","R");

	cout<<"\nFitted with function "<<fit<<endl;//gr->GetFunction("pol0")<<endl;

	gr->GetXaxis()->SetRangeUser(xmin,xmax);

	DrawFit(gr, config, "", "../Images/MC/Dilution/dMu/"+dMu+"/WeightedFit_"+config, ymin, ymax, x1, y1, x2, y2);

	return; 
}

/*// For testing

/////////////////////////////////////////////////////////////////////////////////////////////////
    // Pick 1 sigma points!
    /////////////////////////////////////////////////////////////////////////////////////////////////
    // Mean values
    TVectorD meanVals(nPars);
    for(int n = 0; n < nPars; n++){
      meanVals[n] = freqPhaseDiff->GetParameter(n);
    }
    // Covariance matrix
    TMatrixD covMatrix = fitResult->GetCovarianceMatrix();
    TDecompChol decompCholCov(covMatrix);
    decompCholCov.Decompose();
    TMatrixD matrixCovI = decompCholCov.GetU();
    TMatrixD matrixCov(nPars,nPars);
    matrixCov.Transpose(matrixCovI);
    // Calculate Mahalanobis distance for one sigma CL
    //    double CL = 0.317311; // 1 - 68% (one sigma)
    double CL = 1.-0.999999426697; // 5 sigma
    double r2 = 0; // r^2 (see https://upload.wikimedia.org/wikipedia/commons/a/a2/Cumulative_function_n_dimensional_Gaussians_12.2013.pdf)
    while(TMath::Prob(r2,nPars) > CL){
      r2 += 0.00001;
    }
    double r = sqrt(r2); // This is the Mahalanobis distance threshold under which CL % of points fall below
    cout << “Mahalanobis distance = ” << r << endl;
    // Calculate some one sigma points in 3D
    TCanvas* trialVals = new TCanvas();
    freqPhaseDiff->GetXaxis()->SetLimits(0,500);
    freqPhaseDiff->GetXaxis()->SetRangeUser(0,500);
    freqPhaseDiff->GetYaxis()->SetRangeUser(2.03,2.35);
    freqPhaseDiff->Draw();
    //    trialVals->SaveAs(Form(“FreqShapeConstPhaseImages/Station%d_TrialValues_Mean.png”,stat));
    //    freqPhaseDiff->GetXaxis()->SetRangeUser(0,100);
    //    trialVals->SaveAs(Form(“FreqShapeConstPhaseImages/Station%d_TrialValues_Mean_0_100us.png”,stat));
    //    freqPhaseDiff->GetXaxis()->UnZoom();
    //    freqPhaseDiff->GetYaxis()->SetRangeUser(2.28,2.34);
    //    trialVals->SaveAs(Form(“FreqShapeConstPhaseImages/Station%d_TrialValues_Mean_2.25_2.35.png”,stat));
    for(int i = -1; i < 2; i++){
      for(int j = -1; j < 2; j++){
	for(int k = -1; k < 2; k++){
	  for(int l = -1; l < 2; l++){
	    for(int m = -1; m < 2; m++){
	      for(int n = -1; n < 2; n++){
	 
		TVectorD u(nPars);
		u[0] = i;
		u[1] = j;
		u[2] = k;
		u[3] = l;
		u[4] = m;
		u[5] = n;
	
		double scale = u.Norm2Sqr() > 0 ? r/sqrt(u.Norm2Sqr()) : 1; // SUM{ v[i]^2 } 
		for(int par = 0; par < nPars; par++) u[par] *= scale;
		
		// z = r*u*M + mean
		TVectorD z = matrixCov*u + meanVals;
		for(int par = 0; par < nPars; par++) cout << z[par] << ” “;
		cout << endl;
		TF1* freqTrial = new TF1(Form(“freqTrial_%d_%d_%d_%d_%d_%d”,i,j,k,l,m,n),“[0] * (1 + [1]*x + [2]*exp(-x/[3]) + [4]*exp(-x/[5]))“, 0, 500);
		freqTrial->SetNpx(1000);
		for(int par = 0; par < nPars; par++) freqTrial->SetParameter(par,z[par]);
		freqTrial->SetLineWidth(1);
		freqTrial->SetLineColor(1);
		freqTrial->Draw(“SAME”);
	      }
	    }
	  }
	}
      }
    }*/

void DrawMahalanobisFunctions(TGraphErrors* gr, vector<TF1*> funcs_, std::string title, std::string fname, double xmin, double xmax, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	//c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	//TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	//l->SetBorderSize(0);

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
	gr->GetYaxis()->SetRangeUser(ymin,ymax);

	gr->Draw("AP");

	gStyle->SetPalette(kRainBow);

	int i_colour = 0; 
	for(auto& func : funcs_) {
		//func->SetLineStyle(kDashed);
		func->SetLineColor(kRainBow+i_colour*1.5);
		i_colour++;//=i_colour+2;//++;
		func->Draw("SAME");
	}

	gr->Draw("P SAME");
	gr->GetFunction("ParabolaFunc")->SetLineWidth(3);
	gr->GetFunction("ParabolaFunc")->Draw("SAME");//SetLineWidth(3);

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

vector<TF1*> MahalanobisFunctions() { 

	// Fit ranges
	double xmin = 750; double xmax = 2500;

	vector<TF1*> mahalanobisFunctions_;

	// Get dilution curve
	TFile *d_EDM_file = TFile::Open("../Plots/MC/dMu/Dilution/dilutionCurves.root");

	// Get relevant graph
	TGraphErrors *d_EDM_gr = (TGraphErrors*)d_EDM_file->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");

	// Define a new fit function
	TF1 *fit = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);

	// Set params as defined in Dilution.C
    fit->SetParameter(0, -6e-8);
    fit->SetParameter(1, 2.0e-4);
    fit->SetParameter(2, 0.05);

	// Get fit result pointer
	TFitResultPtr fitResult = d_EDM_gr->Fit(fit,"SR");

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
    //double CL = .317311; // 1 - 68% (one sigma)
    double CL = 0.80125; // 1 unit of chi^2
    double r2 = 0; // r^2 (see https://upload.wikimedia.org/wikipedia/commons/a/a2/Cumulative_function_n_dimensional_Gaussians_12.2013.pdf)

	// TMath::Prob(r2,nPars)
	// Computation of the probability for a certain Chi-squared (r2)
 	// and number of degrees of freedom (nPars).

    while(TMath::Prob(r2,nPars) > CL){
      r2 += 0.00001; // why 0.00001?
      cout<<"r2 = "<<r2<<endl;
    }

    double r = sqrt(r2); // This is the Mahalanobis distance threshold under which CL % of points fall below

    // cout << "\nMahalanobis distance = " << r << endl;
    cout << "\n" << r <<" is it This is the Mahalanobis distance threshold within which "<< 1-CL <<"% of the points reside\n"<<endl;

    // Now we start varying parameters according to this distance in 3D space
    cout<<"Parameter shifts:"<<endl;

    // Can also try to define a TH3
    // TH3D (const char *name, const char *title, Int_t nbinsx, Double_t xlow, Double_t xup, Int_t nbinsy, Double_t ylow, Double_t yup, Int_t nbinsz, Double_t zlow, Double_t zup)
    TH3D *hist3D = new TH3D("hist3D", ";a [MeV^{-2}];b [MeV^{-1}];d_{0}", 27, -8.93E-08, -2.28E-08, 27, 5.25E-05, 0.000272258, 27, -0.113345, 0.0541603);
    //TH3D *hist3D = new TH3D("hist3D",";x;y;z",10, -1e-9, -1e-8, 10, 1e-7, 1e-3, 10, -1e-3, 1e-3);

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

				cout<<i <<", "<<j<<", "<<k<<endl;

				for(int par = 0; par < nPars; par++) cout << z[par] << ", ";
				cout << endl;

				// Define shifted function
				TF1 *trial = new TF1(Form("trial_%d_%d_%d",i,j,k), ParabolaFunc, xmin, xmax, 3);
				for(int par = 0; par < nPars; par++) trial->SetParameter(par,z[par]);

				hist3D->Fill(z[0],z[1],z[2]);

				mahalanobisFunctions_.push_back(trial);
			}
		}
	}
    
    DrawMahalanobisFunctions(d_EDM_gr, mahalanobisFunctions_, "", "../Images/MC/Dilution/dMu/5.4e-18/MahalanobisFunctionsOverlay", xmin, xmax, 0, 0.12);

    DrawTH3(hist3D, "", "../Images/MC/Dilution/dMu/5.4e-18/OneSigmaMahalanobisPoints3D");

	return mahalanobisFunctions_;

}

double GetResidualsSqr(TGraphErrors* data, TF1* fit) { 

  int n = data->GetN();

  double res = 0; 

  for (int i(0); i < n; i++) {

  	double xData = data->GetX()[i];
  	double yData = data->GetY()[i];
  	double yFit = fit->Eval(xData);
  	res += (yFit - yData);// + res;

  }

  return pow(res,2);

}

double GetChiSquare2(TGraphErrors* data, TF1* fit) { 

  int n = data->GetN();

  double chi = 0; 

  for (int i(0); i < n; i++) {

  	double xData = data->GetX()[i];
  	double yData = data->GetY()[i];

  	if(xData < 750 || xData > 2500) continue;

  	double yFit = fit->Eval(xData);

  	chi += pow( (yData-yFit)/data->GetEY()[i], 2);

  }

  return chi;

}

void GetChiSquare(vector<TF1*> mahalanobisFunctions_) {

	// Fit ranges
	double xmin = 750; double xmax = 2500;

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

		double resSqr = GetResidualsSqr(d_EDM_gr, fit);
		
		double chiSqr2 = 0;
		chiSqr2 = GetChiSquare2(d_EDM_gr, fit);

		cout<<""<<i<<"\t|\t"<<fit->GetChisquare()<<"\t|\t"<<fit->GetChisquare()-min_chi_sqr<<endl;

	}

	return;
}

int main() { 

	vector<TF1*> mahalanobisFunctions_ = MahalanobisFunctions();

	GetChiSquare(mahalanobisFunctions_);
	// DrawM

	// TGraphErrors *gr = GetDeltaGraph("trackReco_AAR_250MeV_BQ", "5.4e-18", 750, 2500);
	// DrawTGraphErrors(gr,"","../Images/tmp");



	//Fit("trackReco_AAR_250MeV_BQ", "5.4e-18", 750, 2500, 1.0, 2.4, 0.11, 0.75, 0.59, 0.89); 

/*	// All decays, 30x BNL, 500 MeV, AQ
	Fit("truthAllDecays_AAR_500MeV_AQ", "5.4e-18", 1.4, 2.2, 0.11, 0.75, 0.59, 0.89); 
	// Accepted decays, 30x BNL, 500 MeV, AQ
	Fit("truth_AAR_500MeV_AQ", "5.4e-18", 1.55, 1.95, 0.41, 0.75, 0.89, 0.89);  

	// Track reco, 30x BNL, 500 MeV, AQ
	Fit("trackReco_AAR_500MeV_AQ", "5.4e-18", 0.6, 2.6, 0.11, 0.75, 0.59, 0.89); 
	// Track truth, 30x BNL, 500 MeV, AQ
	Fit("trackTruth_AAR_500MeV_AQ", "5.4e-18", 0.8, 2.5, 0.11, 0.75, 0.59, 0.89);  

	// Track reco, 30x BNL, 500 MeV, BQ
	Fit("trackReco_AAR_500MeV_BQ", "5.4e-18", -3.5, 5., 0.11, 0.75, 0.59, 0.89); 
	// Track truth, 30x BNL, 500 MeV, BQ
	Fit("trackTruth_AAR_500MeV_BQ", "5.4e-18", -3, 5., 0.11, 0.75, 0.59, 0.89); 

	// All decays, 30x BNL, 500 MeV, AQ
	Fit("truthAllDecays_AAR_500MeV_AQ", "1.8e-18", 0.4, 0.9, 0.25, 0.70, 0.75, 0.85); */

	return 0;
}