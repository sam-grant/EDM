void DrawCovMatrix() {

/*|      0    |      1    |      2    |
--------------------------------------------
   0 |  3.129e-16  -1.035e-12   7.893e-10
   1 | -1.035e-12   3.487e-09  -2.714e-06
   2 |  7.893e-10  -2.714e-06    0.002177*/


	TH2D *covHist = new TH2D("covHist", "", 3, 0, 2, 3, 0, 2);

	//covHist->SetBinContent(1,3,3.129e-16); covHist->SetBinContent(2,3,-1.035e-12); covHist->SetBinContent(3,3,7.893e-10);
	//covHist->SetBinContent(1,2,-1.035e-12); covHist->SetBinContent(2,2,3.487e-09); covHist->SetBinContent(3,2,-2.714e-06);
	//covHist->SetBinContent(1,1,7.893e-10); covHist->SetBinContent(2,1,-2.714e-06); covHist->SetBinContent(3,1,0.002177);

	//covHist->Fill(1,3,3.129e-16); covHist->SetBinContent(2,3,-1.035e-12); covHist->SetBinContent(3,3,7.893e-10);
	//covHist->Fill(1,2,-1.035e-12); covHist->SetBinContent(2,2,3.487e-09); covHist->SetBinContent(3,2,-2.714e-06);
	//covHist->Fill(1,1,7.893e-10); covHist->SetBinContent(2,1,-2.714e-06); covHist->SetBinContent(3,1,0.002177);

// 	covHist->SetBinLabel(1,1,"a"
	vector<string> labels_ = {"a", "b", "d_{0}"};

	for(int i = 0; i<labels_.size(); i++) covHist->GetXaxis()->SetBinLabel(i+1, (labels_.at(i)).c_str());
	//for(int i = 0; i<labels_.size(); i++) covHist->GetYaxis()->SetBinLabel(i+1, (labels_.at(i)).c_str());

	covHist->GetYaxis()->SetBinLabel(3, (labels_.at(0)).c_str());
	covHist->GetYaxis()->SetBinLabel(2, (labels_.at(1)).c_str());
	covHist->GetYaxis()->SetBinLabel(1, (labels_.at(2)).c_str());

	covHist->SetBinContent(1,3,3.129e-16); covHist->SetBinContent(2,3,-1.035e-12); covHist->SetBinContent(3,3,7.893e-10);
	covHist->SetBinContent(1,2,-1.035e-12); covHist->SetBinContent(2,2,3.487e-09); covHist->SetBinContent(3,2,-2.714e-06);
	covHist->SetBinContent(1,1,7.893e-10); covHist->SetBinContent(2,1,-2.714e-06); covHist->SetBinContent(3,1,0.002177);
		

	//}
	//for(int i = labels_.size()-1; i>-1; i--) covHist->GetXaxis()->SetBinLabel(i+1, (labels_.at(i)).c_str());
		//covHist->SetBinLabel(i+1, (labels_.at(i)).c_str());
		//cout<<covHist->FindBinX(i+1)<<endl;
		//cout<<labels_.at(i)<<endl;
		
		
	covHist->SetMarkerSize(2);
	covHist->SetMarkerColor(kWhite);
	//covHist->Set

	string title = ""; 

	string fname = "../Images/tmp";

	TCanvas *c = new TCanvas("c","c",800,600);

	covHist->SetTitle(title.c_str());
	covHist->SetStats(0);
	covHist->GetXaxis()->SetLabelSize(0.075);
	covHist->GetYaxis()->SetLabelSize(0.075);
	covHist->GetXaxis()->SetTitleSize(.04);
	covHist->GetYaxis()->SetTitleSize(.04);
	covHist->GetXaxis()->SetTitleOffset(1.1);
	covHist->GetYaxis()->SetTitleOffset(1.1);
	covHist->GetXaxis()->CenterTitle(1);
	covHist->GetYaxis()->CenterTitle(1);
	covHist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);
	//c->SetRightMargin(0.13);

	covHist->Draw("TEXT COL");

	c->SetGrid();

	//c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

