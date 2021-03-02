void slopeTest(){

	TFile *input = TFile::Open("../Plots/MC/slopeTest/muonBeamAna_1700ppmBz.root");
	//TFile *input = TFile::Open("../Plots/MC/slopeTest/muonBeamAna_5.4e-18.root");

	TGraph *poly_t = (TGraph*)input->Get("MRF/poly_t");

	poly_t->GetXaxis()->SetRangeUser(0,50000);

	TF1 *fit = new TF1("fit", "[0]*cos([1]*x+[2])+[3]");


	fit->FixParameter(1, 0.00143934);

	fit->SetParName(0,"A_{poly} [#murad]");
	fit->SetParName(1,"#omega_{a}^{FIXED} [kHz]");
	fit->SetParName(2,"#phi [rad]");
	fit->SetParName(3,"c [#murad]");

	fit->SetNpx(1000);

	poly_t->Fit(fit);


	double A_poly = fit->GetParameter(0);
	double gamma = 29.3; 
	double Bz = A_poly * gamma * 0.1;

	cout<<"Max poly\t"<<gamma*1700e-6<<endl;

	cout<<"Bz\t"<<Bz<<" ppm"<<endl;

	gStyle->SetOptFit(220);

	TCanvas *c = new TCanvas("c","c", 800, 600);


	poly_t->SetTitle(";Time [ns];Polarisation Y");
	poly_t->GetYaxis()->CenterTitle(1);
	poly_t->GetXaxis()->CenterTitle(1);
	poly_t->GetYaxis()->SetTitleOffset(1.1);
	poly_t->GetXaxis()->SetTitleOffset(1.1);
	poly_t->Draw("AP*");

	c->SaveAs("../Images/MC/slopeTest/polyY_1700ppmBz.pdf");
	//c->SaveAs("../Images/MC/slopeTest/polyY_5.4e-18.pdf");

	return;


}