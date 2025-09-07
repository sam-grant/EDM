
double OMEGA_A = 0.00143934; // kHz from gm2const
double G2PERIOD = (2 * TMath::Pi() / OMEGA_A) * 1e-3; // us
double M_MU = 105.6583715; // MeV
double A_MU = 11659208.9e-10; 
double GMAGIC = std::sqrt( 1.+1./A_MU );
double PMAX = 1.01 * M_MU * GMAGIC; // 3127.1144
double T_c = 149.2 * 1e-3; // cyclotron period [us]

//Wiggle fit function
double Fit(double *v, double *par) {
  return par[0]*TMath::Exp(v[0]*par[1]) * (1+par[2]*TMath::Cos(par[3]*v[0]+par[4]));
 }

// Wiggle function
double Wiggle(double *x, double *par){
  
  double N = par[0];    
  double time     = x[0];             // Leave time values free
  double tau       = 2.2;              // Lifetime of the muon at rest (us)
  double gamma     = 29.3;              // Magic gamma
  double A         = 0.25;//1.0;              // Amplitude
  double omega     = OMEGA_A * 1e3; // kHz --> MHz 2 * TMath::Pi() / 4.2;  // Time of a single wiggle ~ 4.2 us
  double phase     = TMath::Pi()/2;     //Phase angle 
                      
  double Npositrons = N * exp( - time / (tau * gamma)) * (1 + A * cos ( (omega * time) + phase)) ;
  //  double Npositrons =  N * exp(- time / (tau * gamma) ) * (1 + A * (cos ( (omega * time) + phase ) +  0.1 * (cos ( (omega2 * time) + phase))));
 return Npositrons;

}

void ToyWiggle() { 

	double totalTime = 205; 

	TH1D *h_wiggle = new TH1D("h_wiggle", ";Time [#mus];Decay e^{+}" , 1374, 0, 205); 
  TF1 *f_wiggle = new TF1("f_wiggle", Wiggle , 0 , totalTime, 1); // Book ideal wiggle plot
  	f_wiggle->SetParameter(0, 1);
  	f_wiggle->SetNpx(10000); // Prevent undersampling

	double nEvents = 1e7;

	for(int i(0); i<nEvents; i++) h_wiggle->Fill(f_wiggle->GetRandom(0, totalTime));

	f_wiggle->SetRange(G2PERIOD*7, 205);
	h_wiggle->Fit(f_wiggle, "R");


	TCanvas *c = new TCanvas("c", "c", 800, 600);

	f_wiggle->SetLineWidth(3);
	h_wiggle->SetMarkerColor(kBlack);
	h_wiggle->SetLineColor(kBlack);
	h_wiggle->SetStats(0);
	h_wiggle->SetLineWidth(2);

	h_wiggle->GetXaxis()->SetTitleSize(.04);
	h_wiggle->GetYaxis()->SetTitleSize(.04);
	h_wiggle->GetXaxis()->SetTitleOffset(1.1);
	h_wiggle->GetYaxis()->SetTitleOffset(1.1);
	h_wiggle->GetXaxis()->CenterTitle(1);
	h_wiggle->GetYaxis()->CenterTitle(1);
	h_wiggle->GetYaxis()->SetMaxDigits(4);

	h_wiggle->Draw("HIST");
	f_wiggle->Draw("SAME");

	c->SaveAs("../Images/MC/ToyWiggle.pdf");

	return;

}