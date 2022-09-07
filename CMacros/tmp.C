void DrawManyTH1(vector<TH1D*> h_, string title, string fname, double xmin = 0, double xmax = 1, double ymin = 0, double ymax = 1) {

	TCanvas *c = new TCanvas("c","c",800,600);

	Double_t red = 0.00;
	Double_t green = 0.0;//0.25;
	Double_t blue = 1.00;

	for (int i(0); i<h_.size(); i++) { 

		Int_t ci = TColor::GetFreeColorIndex();
		TColor *color = new TColor(ci, red+i*0.03, green, blue-i*0.025);
		
		h_.at(i)->SetLineWidth(1);
		h_.at(i)->SetLineColor(ci);

		gPad->Update();


      	if(i==0) {

			h_.at(i)->SetTitle(title.c_str());
			h_.at(i)->GetXaxis()->SetTitleSize(.04);
			h_.at(i)->GetYaxis()->SetTitleSize(.04);
			h_.at(i)->GetXaxis()->SetTitleOffset(1.1);
			h_.at(i)->GetYaxis()->SetTitleOffset(1.1);
			h_.at(i)->GetXaxis()->CenterTitle(true);
			h_.at(i)->GetYaxis()->CenterTitle(true);
			h_.at(i)->GetYaxis()->SetMaxDigits(4);
			h_.at(i)->SetStats(0);
			h_.at(i)->GetXaxis()->SetRangeUser(xmin,xmax);
			h_.at(i)->GetYaxis()->SetRangeUser(ymin,ymax);
      		h_.at(i)->Draw("HIST");

      	} else {

      		h_.at(i)->Draw("HIST SAME");

      	}
  	}

	//c->SetLogy();	

	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".pdf").c_str());

	delete c;

	return;

}


void tmp(){ 

	string finNameSimAllDecays = "../Plots/MC/dMu/5.4e-18/Plots/thetaYvsMomentum_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TFile *finSimAllDecays = TFile::Open(finNameSimAllDecays.c_str());
	TH2D *h_simAllDecays = (TH2D*)finSimAllDecays->Get("SanityPlots/ThetaY_vs_Momentum");

	h_simAllDecays->RebinX(2);
	h_simAllDecays->Scale(1./h_simAllDecays->GetMaximum());

	vector<TH1D*> h_simAllDecays_projY_; 

	int count = 0;

	for(int i_bin(0); i_bin<h_simAllDecays->GetNbinsX(); i_bin++) { 

		TH1D *h_simAllDecays_projY = (TH1D*)h_simAllDecays->ProjectionY(Form("py_simAllDecays_%d",i_bin+1), i_bin+1, i_bin+1); // first and last bin

		if(h_simAllDecays_projY->GetEntries() != 0) {
			h_simAllDecays_projY_.push_back(h_simAllDecays_projY);
			count++;
		}

	}

	DrawManyTH1(h_simAllDecays_projY_, ";#theta_{y} [mrad];Normalised units", "../Images/VerticalAngleDists/Projections/thetaY_100MeVslices_allDecays_WORLD_250MeV_AQ_noVertCorr", -200, 200, 0, 1.1);

	cout<<count<<"\n";


}