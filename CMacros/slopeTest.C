double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic); // 4365.3239 ns
double mMu = 105.6583715; // MeV
double aMu = 11659208.9e-10; 
double gmagic = std::sqrt( 1.+1./aMu );
double pmax = 1.01 * mMu * gmagic;

void run_dMu() {



	TFile *input = TFile::Open("../Plots/MC/slopeTest/muonBeamAna_dMu.root");
	//TFile *input = TFile::Open("../Plots/MC/slopeTest/muonBeamAna_5.4e-18.root");

	TGraph *mod_poly_t = (TGraph*)input->Get("MRF/poly_t");

	mod_poly_t->GetXaxis()->SetRangeUser(0,g2Period);

	TF1 *fit = new TF1("fit", "[0]*cos([1]*x+[2])+[3]",0,g2Period);

	fit->FixParameter(1, omegaAMagic);
	fit->SetParameter(2, -1.5);

	fit->SetParName(0,"A_{poly} [rad]");
	fit->SetParName(1,"#omega_{a}^{FIXED} [kHz]");
	fit->SetParName(2,"#phi [rad]");
	fit->SetParName(3,"c [#murad]");

	fit->SetNpx(1000);

	mod_poly_t->Fit(fit, "R");

	mod_poly_t->Draw();
	gPad->Update();
	gStyle->SetFitFormat();


	double A_poly = fit->GetParameter(0);
	double gamma = 29.3; 
	double Bz = A_poly * gamma * 0.1;

	// cout<<"Max poly\t"<<gamma*1700e-6<<endl;

	//cout<<"Bz\t"<<Bz<<" ppm"<<endl;

	gStyle->SetOptFit(220);

	TCanvas *c = new TCanvas("c","c", 800, 600);


	mod_poly_t->SetTitle(";t_{g#minus2}^{mod} [ns];Spin polarisation Y");
	mod_poly_t->GetYaxis()->CenterTitle(1);
	mod_poly_t->GetXaxis()->CenterTitle(1);
	mod_poly_t->GetYaxis()->SetTitleOffset(1.25);
	mod_poly_t->GetXaxis()->SetTitleOffset(1.2);
	mod_poly_t->Draw("AP*");

	c->SaveAs("../Images/MC/slopeTest/mod_polyY_dMu.pdf");

	return;

}


void run_Bz()  { 

	TFile *input = TFile::Open("../Plots/MC/slopeTest/muonBeamAna_1700ppmBz.root");
	//TFile *input = TFile::Open("../Plots/MC/slopeTest/muonBeamAna_5.4e-18.root");

	TGraph *poly_t = (TGraph*)input->Get("MRF/poly_t");

	poly_t->GetXaxis()->SetRangeUser(0,50000);

	TF1 *fit = new TF1("fit", "[0]*cos([1]*x+[2])+[3]");


	fit->FixParameter(1, 0.00143934);

	fit->SetParName(0,"A_{poly} [rad]");
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

	return;


}


void slopeTest(){

	run_dMu();
	//run_Bz();

	return;


}