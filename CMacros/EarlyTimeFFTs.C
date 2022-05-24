double g2 = 0.2291;

void DrawFFT(TH1D *hist, double vw, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
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

	gPad->Update();

	TLine *g2Line = new TLine(g2,gPad->GetUymin(),g2,gPad->GetUymax());
	TLine *vwLine = new TLine(vw,gPad->GetUymin(),vw,gPad->GetUymax());

	//g2Line->SetLineWidth(3);
	g2Line->SetLineStyle(2);
	g2Line->SetLineColor(kRed);

	//vwLine->SetLineWidth(3);
	vwLine->SetLineStyle(2);
	vwLine->SetLineColor(kRed);

	g2Line->Draw("same");
	vwLine->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void EarlyTimeFFTs() { 

	string randomised = "randomised_";

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c"};//, "Run-1d"};

	vector<double> vw_ = {2.3, 2.04, 2.04, 2.3};

	vector<double> n_ = {.108, 0.120, 0.120, 0.108};//2.3, 2.04, 2.04, 2.3};

	double f_c = 6.7024;
	// ωy = ωc · √n

	for(int i(0); i<3; i++) { 

		string ds = ds_.at(i);
		double vw = 2.3218;//vw_.at(i);

		double f_y = f_c * sqrt(n_.at(i));

/*	*/

		TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_earlyTimes_"+randomised+"BQ.root").c_str());

		cout<<"---> "<<ds<<", "<<fin<<endl;

		TH1D *h_fft = (TH1D*)fin->Get("SimultaneousAnalysis/S12S18_FFT_h_res_thetaY_vs_t");

		cout<<h_fft<<endl;

		DrawFFT(h_fft, f_y, ds, "../Images/Data/dMu/Run-1/EarlyTimeFFTs/S12S18_earlyTimeFFT_"+randomised+ds);


		fin->Close();

	}

	return; 

}