#include "FancyDraw.h"


void GaussianCL() { 

	TRandom3 *rnd = new TRandom3(12345);

	TH1D *h1 = new TH1D("h1", ";d_{#mu} [e#upointcm];Trials", 100, -1e-18, +1e-18);

    // BNL 
	// double mu = -0.04e-19;
	// double sigma = 1.6e-19;//1.05057e-19;

    // FNAL (prelim)
    double mu = 0;
    double sigma = 1.060207e-19;

	for (int i(0); i<1e3; i++) {

		double dMu = rnd->Gaus(mu, sigma);

		h1->Fill(dMu);
	}

	DrawTH1(h1, "", "../Images/h1");

  	//double Z = 1.645; // 90%
    double Z = 1.960; // 95% 
  	int i = 0;

  	while ( (h1->GetXaxis()->GetBinCenter(i+1) / sigma) < Z ) i++;
  	double limit = h1->GetBinCenter(i+1);

    cout<<"dMu = "<<mu<<"±"<<sigma<<" ecm"<<endl;
  	cout<<"95% CL = "<<limit<<endl;

	return;

}