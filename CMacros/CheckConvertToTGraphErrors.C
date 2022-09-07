TGraphErrors *ConvertToTGraphErrors(TH1D *hist) {

  TGraphErrors *gr = new TGraphErrors();

  int nBin = hist->GetNbinsX();

  int counter = 0;

  for(int i = 0; i < nBin; i++) {

    double x = hist->GetBinCenter(i+1); 
    double ex = 0; 
    double y = hist->GetBinContent(i+1); 
    double ey = hist->GetBinError(i+1); 

    // Avoid filling empty bins as "zeros".
    // x-axis still increments so we won't go out of sync

    if(y==0) continue;

    gr->SetPoint(counter, x, y);
    gr->SetPointError(counter, ex, ey);

    counter++;


  }

  return gr;//  new TGraphErrors(n, x, y, ex, ey);

}


void CheckConvertToTGraphErrors() { 

	TFile *fin = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_AQ_noVertCorr_full.root");

	TH2D *h2 = (TH2D*)fin->Get("SimultaneousAnalysis/ThetaY_vs_Time_Modulo");

	TH1D *h1 = h2->ProfileX();

	TGraphErrors *gr = ConvertToTGraphErrors(h1);

	for(int i(0); i<h1->GetNbinsX(); i++) { 

		cout<<"bin "<<i<<", "<<h1->GetBinContent(i)<<", "<<gr->GetY()[i-1]<<endl;

	}

	fin->Close();

	return;

}