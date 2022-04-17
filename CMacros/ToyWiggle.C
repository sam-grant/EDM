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
  double A         = 0.25;              // Amplitude
  double omega     = 2 * TMath::Pi() / 4.2;   // Time of a single wiggle ~ 4.2 us
  double phase     = TMath::Pi()/2;     //Phase angle 
                      
  double Npositrons = N * exp( - time / (tau * gamma)) * (1 + A * cos ( (omega * time) + phase)) ;
  //  double Npositrons =  N * exp(- time / (tau * gamma) ) * (1 + A * (cos ( (omega * time) + phase ) +  0.1 * (cos ( (omega2 * time) + phase))));
 return Npositrons;

}

void ToyWiggle() { 

	double totalTime = 205; 

	TH1D *h_wiggle = new TH1D("h_wiggle", ";Time [#mus];Decay e^{+} / 149.2 ns" , 1374, 0, 205); 
  	TF1 *f_wiggle = new TF1("f_wiggle", Wiggle , 0 , totalTime, 1); // Book ideal wiggle plot
  	f_wiggle->SetParameter(0, 1);
  	f_wiggle->SetNpx(10000); // Prevent undersampling

	double nEvents = 1e7;

	for(int i(0); i<nEvents; i++) h_wiggle->Fill(f_wiggle->GetRandom(0, totalTime));

	f_wiggle->SetRange(30, 205);
	h_wiggle->Fit(f_wiggle, "R");


	TCanvas *c = new TCanvas("c", "c", 800, 600);

	f_wiggle->SetLineWidth(3);
	h_wiggle->SetMarkerColor(kBlack);
	h_wiggle->SetLineColor(kBlack);
	h_wiggle->SetStats(0);

	h_wiggle->GetXaxis()->SetTitleSize(.04);
	h_wiggle->GetYaxis()->SetTitleSize(.04);
	h_wiggle->GetXaxis()->SetTitleOffset(1.1);
	h_wiggle->GetYaxis()->SetTitleOffset(1.1);
	h_wiggle->GetXaxis()->CenterTitle(1);
	h_wiggle->GetYaxis()->CenterTitle(1);
	h_wiggle->GetYaxis()->SetMaxDigits(4);

	h_wiggle->Draw("E");
	f_wiggle->Draw("SAME");

	c->SaveAs("../Images/MC/ToyWiggle.png");

	return;

}