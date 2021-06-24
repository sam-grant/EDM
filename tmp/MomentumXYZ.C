void DrawTH1(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(0);
			
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

	hist->Draw("HIST");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void Run(bool boost) { 

	string inFileName = "";
	string outFileName = "";
	string title = "";

	if(!boost) {
		inFileName = "../Plots/MC/dMu/5.4e-18/dMuSim_truthAllDecays_AAR_200MeV_AQ.root";
		outFileName += "../Images/MC/dMuSim/5.4e-18/Unblinded/AAR_Momentum";
		title = "LAB";
	} else if(boost) {
		inFileName = "../Plots/MC/dMu/5.4e-18/dMuSim_truthAllDecays_MRF_200MeV_AQ.root";
		outFileName += "../Images/MC/dMuSim/5.4e-18/Unblinded/MRF_Momentum";
		title = "MRF";
	} 

	TFile *inFile = TFile::Open(inFileName.c_str()); 

	cout<<"Got input file "<<inFileName<<", "<<inFile<<endl;

	string name_px = "MainPlots/MomentumX";
	string name_py = "MainPlots/MomentumY";
	string name_pz = "MainPlots/MomentumZ";
	string name_p = "MainPlots/Momentum";

	
	string p_title = title+";Track momentum [MeV];Tracks";
	string px_title = title+";Track momentum X [MeV];Tracks";
	string py_title = title+";Track momentum Y [MeV];Tracks";
	string pz_title = title+";Track momentum Z [MeV];Tracks";

	TH1D *h_p = (TH1D*)inFile->Get(name_p.c_str());
	TH1D *h_px = (TH1D*)inFile->Get(name_px.c_str());
	TH1D *h_py = (TH1D*)inFile->Get(name_py.c_str());
	TH1D *h_pz = (TH1D*)inFile->Get(name_pz.c_str());

	h_px->GetXaxis()->SetRangeUser(-100, 100);

	if(boost) h_pz->GetXaxis()->SetRangeUser(-100, 100);

	DrawTH1(h_p, p_title, outFileName);
	DrawTH1(h_px, px_title, outFileName+"X");
	DrawTH1(h_py, py_title, outFileName+"Y");
	DrawTH1(h_pz, pz_title, outFileName+"Z");

	return;

}

void MomentumXYZ() { 

	Run(1);//false);//true);//false);


	return;

}
