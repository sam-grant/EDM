double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us
double mMu = 105.6583715; // MeV
double aMu = 11659208.9e-10; 
double gmagic = std::sqrt( 1.+1./aMu );
double pmax = 1.01 * mMu * gmagic; // 3127.1144
double T_c = 149.2 * 1e-3; // cyclotron period [us]

void DrawTF1(TF1 *func, std::string title, std::string fname) {

	func->SetNpx(1e4);

	TCanvas *c = new TCanvas("c","c",800,600);

	func->SetTitle(title.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
	func->GetXaxis()->SetTitleSize(.04);
	func->GetYaxis()->SetTitleSize(.04);
	func->GetXaxis()->SetTitleOffset(1.1);
	func->GetYaxis()->SetTitleOffset(1.1);
	func->GetXaxis()->CenterTitle(1);
	func->GetYaxis()->CenterTitle(1);
	func->GetYaxis()->SetMaxDigits(4);
	func->SetLineWidth(3);
	func->SetLineColor(kRed);

	//c->SetRightMargin(0.13);

	func->Draw();

	c->SetGrid();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}


void Run1() {

	TF1 *f1 = new TF1("", "[0]*cos([1]*x)+[2]*sin([1]*x)+[3]", 7*g2Period*sqrt(2), 8*g2Period*sqrt(2));

	f1->SetParameters(0, 0.00143934*1e3/sqrt(2), 1, 0);

	DrawTF1(f1, "", "../tmp1");

	return;

}

void Run2() {

	TF1 *f1 = new TF1("", "[0]*cos([1]*x)+[2]*sin([1]*x)+[3]", 7*g2Period, 8*g2Period);

	f1->SetParameters(0, 0.00143934*1e3, 1, 0);

	DrawTF1(f1, "", "../tmp2");

	return;

}


void ZeroCrossing() { 

	Run1();

	Run2();

	return;

}