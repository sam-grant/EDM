/*TGraphErrors *GetDeltaPrimeFit(TGraphErrors *gr_A, TF1 *dilutionFunc, TH1D *weightingHist = 0, string plusMinus = "") {  // TH1D *weightingHist = 0 for sim

    TGraphErrors *gr_delta_prime = new TGraphErrors();

    int count = 0;

    for(int i = 0; i<gr_A->GetN(); i++) { 

      double x = gr_A->GetX()[i]; 
      double y = gr_A->GetY()[i]; 
      double ey = gr_A->GetEY()[i];

      if(x < xmin || x > xmax) continue;

      double d_EDM = dilutionFunc->Eval(x);

      // Acceptance weighting
      double weighting = 1.0; 
      double weighting_err = 0.0;

      if(weightingHist!=0) {
        weighting = weightingHist->GetBinContent(weightingHist->FindBin(x));
        weighting_err = weightingHist->GetBinError(weightingHist->FindBin(x));
      }

      if(plusMinus=="plus") weighting = weighting + weighting_err;
      if(plusMinus=="minus") weighting = weighting - weighting_err;

      d_EDM = d_EDM*weighting; 

      cout<<"d_EDM = "<<d_EDM<<endl;

      double delta_prime = y/d_EDM;

      double delta_prime_err = ey/d_EDM;

      //double delta_prime_err = delta_prime * sqrt( pow(ey/y,2) + pow(weighting_err/weighting,2) );

      gr_delta_prime->SetPoint(count, x, delta_prime);
      gr_delta_prime->SetPointError(count, 0., delta_prime_err);

      count++;

    } 

    TF1 *fit = new TF1("pol0", "pol0", xmin,xmax);
    
    // Now fit
    gr_delta_prime->Fit("pol0","QR");

    return gr_delta_prime;

}*/


void GetDilutionWeightings() { 

  	TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.exact.root";
  	TFile *dilution_file  = TFile::Open(dilution_fileName);

  	TString acceptance_fileName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV.root"; // _dataAccCorr_"+datasetLabel+".root";
  	TFile *acceptance_file = TFile::Open(acceptance_fileName);

  	TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/allDecays");
  	TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("DilutionFunc");

  	cout<<"----> Opened "<<dilution_fileName<<", "<<dilution_file<<endl;
  	cout<<"----> Opened "<<acceptance_fileName<<", "<<acceptance_file<<endl;


  	vector<string> stn_ = {"S12", "S18", "S12S18"};

  	for(auto& stn : stn_) { 

  		TString acceptanceHistName = "hists/"+stn+"_ratio_main";
  		TH1D *acceptanceHist = (TH1D*)acceptance_file->Get(acceptanceHistName);

  		cout<<"----> Got "<<acceptanceHistName<<", "<<acceptanceHist<<endl;

  		// Loop through 

  	}
	
      //if(stn != "S12" || stn != "S18") acceptanceHistName = "hists/S12S18_ratio_main";
 
      
  	dilution_file->Close();
  	acceptance_file->Close();


	//TGraphErrors *gr_delta_prime = GetDeltaPrimeFit(A_gr, dilutionFunc, acceptanceHist);

	return;

}