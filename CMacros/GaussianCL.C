#include "FancyDraw.h"


void GaussianCL() { 

	TRandom3 *rnd = new TRandom3(12345);

	TH1D *h1 = new TH1D("h1", ";d_{#mu} [e#upointcm];Trials", 100, -1e-18, +1e-18);

    // BNL traceback
	//double mu = -0.04e-19;
	//double sigma = 1.6e-19;//1.05057e-19;

	// BNL tot 
	//double mu = -0.1e-19;
	//double sigma = 0.9e-19;//1.05057e-19;

    // FNAL (prelim)
    //double mu = 0;
    //double sigma = 1.07117e-19;

 	//double mu = 2.47117e-19;
	//double sigma = 2.50084e-19;

double mu = -1.56777e-19;
double sigma = 2.57213e-19;
    // ACME electron 2018
    //mu = 4.3e-30;
    //sigma = sqrt(pow(3.1e-30,2)+pow(2.6e-30,2));// * 1e-30;// // ± 3.1stat ± 2.6syst) × 10−30

	for (int i(0); i<1e6; i++) {
		double dMu = rnd->Gaus(mu, sigma);
		h1->Fill(dMu);
	}

	//DrawTH1(h1, "", "../Images/h1");

  	//double Z = 1.645; // 90%
    double Z = 1.960; // 95% 

  	int i = 0;

  	while ( (h1->GetXaxis()->GetBinCenter(i+1) / sigma) < Z ) i++;
  	double limit = h1->GetBinCenter(i+1);

    cout<<"dMu = "<<mu<<"±"<<sigma<<" ecm"<<endl;
  	cout<<"CL = "<<limit<<endl;

	return;

}