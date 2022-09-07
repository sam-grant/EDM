{

	TFile *fin = TFile::Open("../Plots/MC/Acceptance/Plots/acceptanceWeightingPlots.thetaYvsY.truth.root");

	TH2D *h2 = (TH2D*)fin->Get("AcceptanceWeighting/AllMom/S12S18_WeightMapY");
	TGraph2D *gr = (TGraph2D*)fin->Get("AcceptanceWeighting/AllMom/S12S18_WeightGraphY");

	cout<<h2<<", "<<gr<<endl;

  	for(int i(0); i < h2->GetNbinsX(); i++) {

   		for(int j(0); j < h2->GetNbinsY(); j++) {

   			double x1 = h2->GetXaxis()->GetBinCenter(i+1);
  			double y1 = h2->GetYaxis()->GetBinCenter(j+1);
  			double z1 = h2->GetBinContent(i+1, j+1);

  			double z2 = gr->Interpolate(x1, y1);

  			// Sometimes you get an empty bin on the edge and it interpolates to a non-zero bin, this is ok

  			if((z1!=0) && (z1-z2)>=1e-10) {
  				cerr<<"Test failed!"<<endl;
  				return;
  			}

   		}

   	}

   	cout<<"Test passed"<<endl;

	fin->Close();

}