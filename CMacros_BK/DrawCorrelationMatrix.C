void DrawCorrelationMatrix() {


/*     |      0    |      1    |      2    |
--------------------------------------------
   0 |          1       -0.99      0.9504
   1 |      -0.99           1      -0.983
   2 |     0.9504      -0.983           1
*/

	TH2D *corHist = new TH2D("corHist", "", 3, 0, 2, 3, 0, 2);

	vector<string> labels_ = {"a", "b", "d_{0}"};

	for(int i = 0; i<labels_.size(); i++) corHist->GetXaxis()->SetBinLabel(i+1, (labels_.at(i)).c_str());

	corHist->GetYaxis()->SetBinLabel(3, (labels_.at(0)).c_str());
	corHist->GetYaxis()->SetBinLabel(2, (labels_.at(1)).c_str());
	corHist->GetYaxis()->SetBinLabel(1, (labels_.at(2)).c_str());

	// 750-2500 MeV		
/*	corHist->SetBinContent(1,3,1.); corHist->SetBinContent(2,3,-0.9912); corHist->SetBinContent(3,3,0.9563);
	corHist->SetBinContent(1,2,-0.9912); corHist->SetBinContent(2,2,1.); corHist->SetBinContent(3,2,-0.9853);
	corHist->SetBinContent(1,1,0.9563); corHist->SetBinContent(2,1,-0.9853); corHist->SetBinContent(3,1,1.);*/

	// 750-2750 MeV
	corHist->SetBinContent(1,3,1.); corHist->SetBinContent(2,3,-0.99); corHist->SetBinContent(3,3,0.9504);
	corHist->SetBinContent(1,2,-0.99); corHist->SetBinContent(2,2,1.); corHist->SetBinContent(3,2,-0.983);
	corHist->SetBinContent(1,1,0.9505); corHist->SetBinContent(2,1,-0.983); corHist->SetBinContent(3,1,1.);

		
	corHist->SetMarkerSize(2);
	corHist->SetMarkerColor(kWhite);
	//corHist->Set

	string title = ""; 

	string fname = "../Images/MC/Dilution/dMu/5.4e-18/CorrelationMatrix_trackReco_250MeV_BQ";

	TCanvas *c = new TCanvas("c","c",800,600);

	corHist->SetTitle(title.c_str());
	corHist->SetStats(0);
	corHist->GetXaxis()->SetLabelSize(0.075);
	corHist->GetYaxis()->SetLabelSize(0.075);
	corHist->GetXaxis()->SetTitleSize(.04);
	corHist->GetYaxis()->SetTitleSize(.04);
	corHist->GetXaxis()->SetTitleOffset(1.1);
	corHist->GetYaxis()->SetTitleOffset(1.1);
	corHist->GetXaxis()->CenterTitle(1);
	corHist->GetYaxis()->CenterTitle(1);
	corHist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);
	//c->SetRightMargin(0.13);

	corHist->Draw("TEXT COL");

	c->SetGrid();

	//c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

