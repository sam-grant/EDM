void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	//hist->SetStats(2210);
	gStyle->SetOptStat(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(kDarkBodyRadiator);
	//c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	//c->SetLogz();
	
	//c->SaveAs((fname+".C").c_str());
	//c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

TGraph2D *ConvertToTGraph2D(TH2D *h) { 

  TGraph2D *gr = new TGraph2D();

  int nBinsX = h->GetNbinsX();
  int nBinsY = h->GetNbinsY();

  int n = 0;

  for(int i(0); i < nBinsX; i++) {

  	for(int j(0); j < nBinsY; j++) {

  		double x = h->GetXaxis()->GetBinCenter(i+1);
    	double y = h->GetYaxis()->GetBinCenter(j+1);
    	double z = h->GetBinContent(i+1, j+1);

    	if(z==0) continue;

    	gr->SetPoint(n, x, y, z);

	    n++;
	    
		}	

  }

  return gr;

}

void DrawTGraph2D(TGraph2D *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.2);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	//graph->SetMarkerStyle(20); //  Full circle
	graph->Draw();
	//c->SetGridx();

	//c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());


	delete c;

	return;

}

void LinearInterpolation() { 

	TFile *fin = TFile::Open("../Plots/MC/Acceptance/Plots/acceptanceWeightingPlots.thetaYvsY.truth.root");
	TH2D *h1 = (TH2D*)fin->Get("AcceptanceWeighting/AllMom/S12S18_WeightMapY");

	h1->GetXaxis()->SetRangeUser(-100, 100);
	h1->GetYaxis()->SetRangeUser(-100, 100);

	DrawTH2(h1, "", "../Images/MC/Acceptance/Interpolation/h1");

	// Convert to 2D graph
	//double ymin = -100; double ymax = 100; double xmin = -60; double xmax = 60;
	TGraph2D *gr = ConvertToTGraph2D(h1);//, xmin, xmax, ymin, ymax);

	DrawTGraph2D(gr, "", "../Images/MC/Acceptance/Interpolation/gr");

	//double y = 32.8;
	//double theta_y = -10.1; 

	cout<<h1->GetBinContent(0, 0)<<endl;

	double y = 17.52;
	double theta_y = -12.5;

	// these count from zero with zero being the underflow bin... 
	int a = h1->GetXaxis()->FindBin(y);
  int b = h1->GetYaxis()->FindBin(theta_y);

  double weighting2 = h1->GetBinContent(a, b);

  cout<<h1->GetXaxis()->GetBinCenter(a)<<endl;
  cout<<h1->GetYaxis()->GetBinCenter(b)<<endl;

  cout<<"a "<<a<<", b "<<b<<endl;

  cout<<weighting2<<endl;

	// Try to access the bins

	int i = gr->GetXaxis()->FindBin(y);
  int j = gr->GetYaxis()->FindBin(theta_y);

  cout<<"i "<<i<<", j "<<j<<endl;

  double weighting = gr->GetZ()[i, j];

  // Should just be at the bin centre? 
  cout<<gr->Interpolate(y, theta_y)<<endl;


	// Fine bins
/*	int thetaY_nBins = 200;
	double thetaY_min = -100;
	double thetaY_max = 100;

	int y_nBins = 120;
	double y_min = -60;
	double y_max = 60;

    TH2D *h2 = new TH2D("ThetaY_vs_Y_1000_2500MeV", ";Decay y-position [mm]; #theta_{y} [mrad]", y_nBins, y_min, y_max, thetaY_nBins, thetaY_min, thetaY_max); 

    DrawTH2(h2, "", "../Images/MC/Acceptance/Interpolation/h2");*/



/*    for(int i(0); i<h2->GetNbinsX(); i++) {

    	for(int j(0); j<h2->GetNbinsY(); j++) {

			// double weighting = map->GetBinContent(i, j);
    		// Get coordinates in theta_y vs y

    		double y = h2->GetXaxis()->GetBinCenter(i+1);
    		double theta_y = h2->GetYaxis()->GetBinCenter(j+1);
    		
    		cout<<i<<", "<<j<<endl;
    		cout<<y<<", "<<theta_y<<endl;

    		// Find bin in original histogram
    		int a = h2->GetXaxis()->FindBin(y);
  			int b = h2->GetYaxis()->FindBin(theta_y);

  			// Get contents of that bin
  			double cont = h1->GetBinContent(a, b);

  			// Get plus/minus bins in both directions



      		// Find the value in h1 bin

    	}

    }*/

	fin->Close();

	return;

}