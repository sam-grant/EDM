

// Reset graph range (can't use SetRangeUser because sometimes I like to plot with "L" option)
TGraphErrors *ResetGraph(TGraphErrors *grIn, double xmin, double xmax) {

	TGraphErrors *grOut = new TGraphErrors();
	int count = 0;
	
	for(int i(0); i<grIn->GetN(); i++) { 

		double x = grIn->GetX()[i];
		double y = grIn->GetY()[i];
		double ey = grIn->GetEY()[i];   

    	if(x<xmin || x>xmax) continue;

    	grOut->SetPoint(count, x, y);
    	grOut->SetPointError(count, 0., ey);  

    	count++;

	}


	return grOut;

}

void CalculateAcceptanceFractionChiSqr() {

	// Turns out I don't know how to do this

	// Use standard deviations instead 

	double xmin = 1000;
	double xmax = 2500;

	TString f1Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr.root";

	TFile *f1 = TFile::Open(f1Name);

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	vector<double> chi2ndf_;

	for(auto& stn : stn_) {

		TString f2Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+".root";

		TFile *f2 = TFile::Open(f2Name);

		TGraphErrors *gr1 = ResetGraph( (TGraphErrors*)f1->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str()), xmin, xmax); 
		TGraphErrors *gr2 = ResetGraph( (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"), xmin, xmax); 

		cout<<gr1<<", "<<gr2<<endl;

		double var_tot = 0; 

		double n = gr1->GetN();

		for(int i(0); i<n; i++) {

			double y1 = gr1->GetY()[i]; // truth
			double y2 = gr2->GetY()[i]; // weighted
			double ey1 = gr1->GetEY()[i]; // truth
			double ey2 = gr2->GetEY()[i]; // weighted

			double sigma = abs(y1-y2) / sqrt( pow(ey1, 2) + pow(ey2, 2) );

			var_tot += pow(sigma,2);

		}

		double sigma = sqrt(var_tot / n); 

		cout<<"stn "<<stn<<"; sigma = "<<sigma<<endl;

		f2->Close();
	}

	f1->Close();

	return;
}