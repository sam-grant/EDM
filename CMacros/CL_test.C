#include "FancyDraw.h"


/*def folded_norm(x,bin_width,mu,sigma):
    upbranch = exp(-1*(x-mu)*(x-mu)/(2*sigma*sigma))
    downbranch = exp(-1*(x+mu)*(x+mu)/(2*sigma*sigma))
    
    return (upbranch+downbranch)*1/(sigma*sqrt(2*pi))*bin_width

def one_sided_limit(mean,sigma,x_bins,alpha=0.9):
    
    xwidth = (max(x_bins)-min(x_bins))/len(x_bins)
    
    psum = 0
    uplim = 0
    for i in x_bins:
        pv = folded_norm(i,xwidth,mean,sigma)
        #pv = norm.pdf(i,mean,sigma)*xwidth
        psum += pv
        
        if psum >= alpha:
            uplim = i
            break
        
    return uplim*/


void CL_test() { 

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