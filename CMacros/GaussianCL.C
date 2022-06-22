#include "FancyDraw.h"


void GaussianCL() { 



    // BNL traceback
	//double mu = -0.04e-19;
	//double sigma = 1.6e-19;//1.05057e-19;

	// BNL tot 
	double mu = -0.1e-19;
	double sigma = 0.9e-19;//1.05057e-19;

	// McNabb
	//double mu = -0.14772727e-19;//-0.1e-19;
	//double sigma = 1.3522988e-19;//1.4e-19;
	//double mu = -0.1e-19;//-0.14772727e-19;//;
	//double sigma = 1.4e-19;//1.3522988e-19;//1.4e-19;

    // FNAL (prelim)
   //double mu = 0.00e-19;
   //double sigma = 1.04e-19;

 	//double mu = 2.47117e-19;
	//double sigma = 2.50084e-19;

	//double mu = -1.56777e-19;
	//double sigma = 2.57213e-19;
    // ACME electron 2018
    //mu = 4.3e-30;
    //sigma = sqrt(pow(3.1e-30,2)+pow(2.6e-30,2));// * 1e-30;// // ± 3.1stat ± 2.6syst) × 10−30

    // Generate a PDF
	cout<<"---> Generating PDF"<<endl;
	
	TRandom3 *rnd = new TRandom3(12345);

	int nBins = 1e3;

	TH1D *h_pdf = new TH1D("h_pdf", ";d_{#mu} [e#upointcm];Trials", nBins, mu-5e-18, mu+5e-18);

	int int_tot = 1e6;

	for (int i(0); i<int_tot; i++) {
		double dMu = rnd->Gaus(mu, sigma);
		h_pdf->Fill(dMu);
	}

	DrawTH1(h_pdf, "", "../Images/LimitPDF");

	// Integrate symmetrically outward from the central value until 95% of Gaussian is in range
	// Seems like a slight under estimation?

	cout<<"---> Symmetrical limit"<<endl;

	int cent_bin = h_pdf->FindBin(mu);
	int int_sum = h_pdf->GetBinContent(cent_bin);

	double upper_limit = 0.0;
	double lower_limit = 0.0;

	for(int i(1); i<nBins; i++) {

		int_sum = h_pdf->GetBinContent(cent_bin+i) + h_pdf->GetBinContent(cent_bin-i) + int_sum; 

		if(int_sum >= int_tot - 0.05*int_tot) {
			upper_limit = h_pdf->GetXaxis()->GetBinUpEdge(cent_bin+i);
			lower_limit = h_pdf->GetXaxis()->GetBinLowEdge(cent_bin-i);
			break;
		}

	}

	cout<<"Limit: "<<lower_limit<<" < dMu < "<<upper_limit<<endl;
	
	// Integrate outward from zero until 95% of Gaussian is in range
	cout<<"---> Asymmetrical limit"<<endl;

	cent_bin = h_pdf->FindBin(0);
	int_sum = h_pdf->GetBinContent(cent_bin);		

	for(int i(1); i<nBins; i++) {

		//int_sum =  + h_pdf->GetBinContent(cent_bin-i) + int_sum; 
		int_sum = h_pdf->GetBinContent(cent_bin+i) + h_pdf->GetBinContent(cent_bin-i) + int_sum; 

		if(int_sum >= int_tot - 0.05*int_tot) {
			upper_limit = h_pdf->GetXaxis()->GetBinUpEdge(cent_bin+i);
			lower_limit = h_pdf->GetXaxis()->GetBinLowEdge(cent_bin-i);
			break;
		}

	}

	//cout<<"Limit: "<<lower_limit<<" < dMu < "<<upper_limit<<endl;

	cout<<"---> Limit: |dMu| < "<<upper_limit<<endl;

	cout<<"---> Z-score method"<<endl;

  	//double Z = 1.645; // 90%
  	double Z = 1.960; // 95% 

  	int i = 0;
	while ( (h_pdf->GetXaxis()->GetBinCenter(i+1) / sigma) < Z ) i++;
  	upper_limit = h_pdf->GetBinCenter(i+1);

  	cout<<"Limit: |dMu| < "<<upper_limit<<endl;

  	// Point at which dmu = (2.3\pm0.3)\times10^{-19} 
  	cent_bin = h_pdf->FindBin(0);
	int_sum = h_pdf->GetBinContent(cent_bin);		

	// ±2.39(0.36) × 10−19 e·cm
	for(int i(1); i<nBins; i++) {

		//int_sum =  + h_pdf->GetBinContent(cent_bin-i) + int_sum; 
		int_sum = h_pdf->GetBinContent(cent_bin+i) + h_pdf->GetBinContent(cent_bin-i) + int_sum; 

		upper_limit = h_pdf->GetXaxis()->GetBinUpEdge(cent_bin+i);

		if(upper_limit >= 2e-19) { //2e-19) { //int_sum >= int_tot - 0.05*int_tot) {
			cout<<"int_tot "<<int_tot<<endl;
			cout<<"int_sum "<<int_sum<<endl;
			cout<<"Liklihood = "<<100*(double(int_tot) - double(int_sum))/double(int_tot)<<endl;;//0.05*int_tot
			break;
		}

	}

	return;

}