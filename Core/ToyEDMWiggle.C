double OMEGA_A = 0.00143934; // kHz from gm2const
double G2PERIOD = (2 * TMath::Pi() / OMEGA_A) * 1e-3; // us
double M_MU = 105.6583715; // MeV
double A_MU = 11659208.9e-10; 
double GMAGIC = std::sqrt( 1.+1./A_MU );
double PMAX = 1.01 * M_MU * GMAGIC; // 3127.1144
double T_c = 149.2 * 1e-3; // cyclotron period [us]


//Wiggle fit function
double Fit(double *x, double *par) {
  return ( par[0] * TMath::Sin(par[1] * x[0]) ) + par[2];
}

// Wiggle function
double Wiggle(double *x, double *par){
  
  double AEDM = par[0];    
  double time = x[0];             // Leave time values free
  double omega = OMEGA_A * 1e3;   // Time of a single wiggle ~ 4.2 us
  double phase = 0;//TMath::Pi()/2;     //Phase angle 
  double c = 100;
                      
  double theta_y = AEDM * TMath::Sin((omega * x[0]) + phase) + c;
  //  double Npositrons =  N * exp(- time / (tau * gamma) ) * (1 + A * (cos ( (omega * time) + phase ) +  0.1 * (cos ( (omega2 * time) + phase))));
 return theta_y;

}

void ToyEDMWiggle() { 

	TH1D *h_wiggle = new TH1D("h_wiggle", ";Time [#mus];Decay e^{+}#LT#theta_{y}#GT [mrad]" , G2PERIOD/T_c, 0, G2PERIOD); 
  TF1 *f_wiggle = new TF1("f_wiggle", Wiggle , 0 , G2PERIOD, 1); // Book ideal wiggle plot

  TGraphErrors *gr_wiggle = new TGraphErrors();

  f_wiggle->SetParameter(0, 1.7);
  f_wiggle->SetNpx(10000); // Prevent undersampling
  f_wiggle->SetRange(0, G2PERIOD);

  double nEvents = 5e7;

	for(int i(0); i<nEvents; i++) h_wiggle->Fill(f_wiggle->GetRandom(0, G2PERIOD));

	for(int i(0); i<h_wiggle->GetNbinsX(); i++) {
		gr_wiggle->SetPoint(i, h_wiggle->GetBinCenter(i+1), );
		gr_wiggle->SetPointError(i, 0, h_wiggle->GetBinError(i+1));

	}

/*TGraphErrors *ConvertToTGraphErrors(TH1D *hist) {

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

}*/

	gr_wiggle->GetYaxis()->SetLimits(-5, 5);

	gr_wiggle->Fit(f_wiggle, "R");

	TCanvas *c = new TCanvas("c", "c", 800, 600);

	f_wiggle->SetLineWidth(3);
	gr_wiggle->SetLineWidth(2);
	gr_wiggle->SetMarkerColor(kBlack);
	gr_wiggle->SetLineColor(kBlack);
	//gr_wiggle->SetStats(0);

	gr_wiggle->GetXaxis()->SetTitleSize(.04);
	gr_wiggle->GetYaxis()->SetTitleSize(.04);
	gr_wiggle->GetXaxis()->SetTitleOffset(1.1);
	gr_wiggle->GetYaxis()->SetTitleOffset(1.1);
	gr_wiggle->GetXaxis()->CenterTitle(1);
	gr_wiggle->GetYaxis()->CenterTitle(1);
	gr_wiggle->GetYaxis()->SetMaxDigits(4);

	gr_wiggle->Draw("AP");
	f_wiggle->Draw("SAME");

	c->SaveAs("../Images/MC/ToyEDMWiggle.png");

	return;

}