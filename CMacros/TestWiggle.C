void TestWiggle() { 

	TFile *fin = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_AQ_noVertCorr_full.root");
	TH1D *h_mom = (TH1D*)fin->Get("SimultaneousAnalysis/Momentum");

	h_mom->GetXaxis()->SetLimits(0, 1.01);

	//h_mom->Draw("HIST");

	//TF1 *f1 = new TF1("f1", "[0]*(TMath::Power(x,4)-3*TMath::Power(x,3)-5*x)", 0.4, 0.6);
	TF1 *f1 = new TF1("f1", "[0]*(1-x)*(5+5*x-4*x*x)", .35, .8);
	f1->SetParameter(0, 1000);
	h_mom->Fit(f1, "R");

	h_mom->Draw(); 

	return;

}