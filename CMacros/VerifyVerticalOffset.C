void DrawTH1(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
	//gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("E");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void Run(string dataset) {

	string finName = "../Plots/Data/dMu/Run-1/Plots/verticalOffsetCorrectedHists_"+dataset+"_125MeV_BQ.root";
	TFile *fin = TFile::Open(finName.c_str());

	cout<<"Reading file "<<finName<<", "<<fin<<endl;

	TH2D *h2 = (TH2D*)fin->Get("MainPlots/S12S18_ThetaY_vs_Time");

	TH1D *h1 = h2->ProfileX();

	DrawTH1(h1, dataset+";Decay time [#mus];#LT#theta_{y}#GT [mrad]", "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/S12S18_CorrectedThetaYvsTime_"+dataset+"_BQ");	

	fin->Close();
}


void VerifyVerticalOffset() { 

	Run("Run-1a");
	Run("Run-1b");
	Run("Run-1c");
	Run("Run-1d");

	return;

}