void slopeTest(){

	TFile *input = TFile::Open("../Plots/MC/slopeTest/muonBeamAna_XppmBz.root");

	TGraph *poly_t = (TGraph*)input->Get("MRF/poly_t");

	poly_t->GetXaxis()->SetRangeUser(0,50000);

	TF1 *fit = new TF1("fit", "[0]*cos([1]*x+[2])+[3]");

	fit->FixParameter(1, 0.00143934);

	fit->SetParName(0,"A_{poly} [#murad]");
	fit->SetParName(1,"#omega_{a} (fixed) [kHz]");
	fit->SetParName(2,"#phi [rad?]");
	fit->SetParName(3,"C [#murad]");

	fit->SetNpx(1000);

	poly_t->Fit(fit);

	gStyle->SetOptFit(2020);

	poly_t->SetTitle(";Time [ns];Polarisation Y");
	poly_t->GetYaxis()->CenterTitle(1);
	poly_t->GetXaxis()->CenterTitle(1);
	poly_t->Draw("AP*");

	return;


}