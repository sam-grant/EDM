// this is really just my main FFT plotter at this point, not just for early times

double g2 = 0.2291;
double f_c = 6.7024;

void DrawFFT(TH1D *hist, double vCBO, std::string ds, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(ds.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(2);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");

	gPad->Update();

/*	TLine *g2Line = new TLine(g2,gPad->GetUymin(),g2,gPad->GetUymax());
	TLine *vCBOLine = new TLine(vCBO,gPad->GetUymin(),vCBO,gPad->GetUymax());

	//g2Line->SetLineWidth(3);
	g2Line->SetLineStyle(2);
	g2Line->SetLineColor(kRed);

	//vwLine->SetLineWidth(3);
	vCBOLine->SetLineStyle(2);
	vCBOLine->SetLineColor(kRed);

	//g2Line->Draw("same");
	//vCBOLine->Draw("same");

	TPaveText *g2Txt = new TPaveText(0.185,0.69,0.225,0.79,"NDC");
	g2Txt->SetTextAlign(22);
	g2Txt->AddText("g-2");
	g2Txt->SetTextSize(22); 
	g2Txt->SetTextFont(44);
	g2Txt->SetTextColor(kRed);
	g2Txt->SetFillColor(0);

	g2Txt->Draw("SAME");

	TPaveText *vBOTxt = new TPaveText(0.665,0.69,0.715,0.79,"NDC");
	vBOTxt->SetTextAlign(22);
	vBOTxt->AddText("CBO_{y}");
	vBOTxt->SetTextSize(22); 
	vBOTxt->SetTextFont(44);
	vBOTxt->SetTextColor(kRed);
	vBOTxt->SetFillColor(0);
	vBOTxt->Draw("SAME");
	gPad->Update();

	if(ds=="Run-1b" || ds=="Run-1c") {

		vBOTxt->SetX1NDC(0.685);
		vBOTxt->SetX2NDC(0.735);
		vBOTxt->Draw("SAME");

	}*/


/*	TPaveText *g2Txt = new TPaveText(0.20,0.65,0.40,0.75,"NDC");
	g2Text->SetTextAlign(22);
	g2Text->AddText("vBO");
	g2Text->SetTextSize(22); 
	g2Text->SetTextFont(44);
	g2Text->SetFillColor(0);*/

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawFFTOverlay(TH1D *hist1, TH1D *hist2, double f_y, double f_CBOx, std::string ds, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist1->SetTitle("");//ds.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
	hist1->GetXaxis()->SetTitleSize(.04);
	hist1->GetYaxis()->SetTitleSize(.04);
	hist1->GetXaxis()->SetTitleOffset(1.1);
	hist1->GetYaxis()->SetTitleOffset(1.1);
	hist1->GetXaxis()->CenterTitle(1);
	hist1->GetYaxis()->CenterTitle(1);
	hist1->GetYaxis()->SetMaxDigits(2);
	hist1->SetLineWidth(2);
	hist2->SetLineWidth(2);
	hist1->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist1->Draw("HIST");

	hist2->SetLineColor(kRed);
	hist2->Draw("HIST SAME");

	gPad->Update();

	TLine *hCBOLine = new TLine(f_CBOx,gPad->GetUymin(),f_CBOx,gPad->GetUymax());
	TLine *vCBOLine = new TLine(f_y,gPad->GetUymin(),f_y,gPad->GetUymax());

	//g2Line->SetLineWidth(3);
	hCBOLine->SetLineStyle(2);
	hCBOLine->SetLineColor(kBlue);

	//vwLine->SetLineWidth(3);
	vCBOLine->SetLineStyle(2);
	vCBOLine->SetLineColor(kBlue);

	hCBOLine->Draw("same");
	vCBOLine->Draw("same");

	TPaveText *hCBOPaveTxt = new TPaveText(0.185,0.91,0.20,0.99,"NDC");
	//TPaveText *g2PaveTxt = new TPaveText(0.185,0.89,0.225,0.99,"NDC");
	TText *hCBOTxt = hCBOPaveTxt->AddText("f_{CBOx}");
	hCBOTxt->SetTextSize(26); 
	hCBOTxt->SetTextFont(44);
	hCBOPaveTxt->SetTextColor(kBlue);
	hCBOPaveTxt->SetFillColor(0);
	//g2Txt->SetTextAngle(90.);
	hCBOTxt->SetTextAlign(22);
	hCBOPaveTxt->Draw("SAME");

	TPaveText *vBOPaveTxt = new TPaveText(0.56,0.91,0.7,0.99,"NDC");
	//TPaveText *vBOPaveTxt = new TPaveText(0.665,0.89,0.715,0.9,"NDC");
	TText *vBOTxt = vBOPaveTxt->AddText("f_{y}");
	vBOTxt->SetTextSize(26); 
	vBOTxt->SetTextFont(44);
	vBOPaveTxt->SetTextColor(kBlue);
	vBOPaveTxt->SetFillColor(0);
	//vBOTxt->SetTextAngle(90.);
	vBOTxt->SetTextAlign(22);
	vBOPaveTxt->Draw("SAME");
	gPad->Update();

	if(ds=="Run-1b" || ds=="Run-1c") {

		hCBOPaveTxt->SetX1NDC(0.195);

		hCBOPaveTxt->Draw("SAME");

		vBOPaveTxt->SetX1NDC(0.58);
		vBOPaveTxt->SetX2NDC(0.735);
		//vBOTxt->SetTextAngle(90.);
		vBOPaveTxt->Draw("SAME");

	}


/*	TPaveText *g2Txt = new TPaveText(0.20,0.65,0.40,0.75,"NDC");
	g2Text->SetTextAlign(22);
	g2Text->AddText("vBO");
	g2Text->SetTextSize(22); 
	g2Text->SetTextFont(44);
	g2Text->SetFillColor(0);*/

  	TLegend *leg = new TLegend(0.225, 0.75, 0.50, 0.89);
  	//leg->Add(0);
  	leg->SetTextSize(26);
  	leg->SetTextFont(44);
  	leg->SetBorderSize(0);
/*s*/

	leg->AddEntry(hist1, "No randomisation");
	leg->AddEntry(hist2, "With randomisation");

	leg->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

/*void EarlyTimeFFTs() { 

	string randomised = "randomised_";

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18", "S12S18"};

	vector<double> vw_ = {2.3, 2.04, 2.04, 2.3};

	vector<double> n_ = {.108, 0.120, 0.120, 0.108};//2.3, 2.04, 2.04, 2.3};

	// ωy = ωc · √n


	for(int i(0); i<4; i++) { 

		string ds = ds_.at(i);

		double vw = 2.3218;//vw_.at(i);

		double f_y = f_c * sqrt(n_.at(i));


		//TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_earlyTimes_"+randomised+"BQ.root").c_str());
		//TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_noRand_earlyTimes_BQ.root").c_str());
		//TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_noRand_BQ.root").c_str());
		//TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_noRand_BQ.root").c_str());
		TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_noRand_BQ.root").c_str());

		cout<<"---> "<<ds<<", "<<fin<<endl;

		for(auto &stn : stn_) {
			
			//TH1D *h_fft = (TH1D*)fin->Get(("SimultaneousAnalysis/"+stn+"_FFT_h_res_thetaY_vs_t").c_str());
			TH1D *h_fft = (TH1D*)fin->Get(("SimultaneousAnalysis/"+stn+"_FFT_h_res_thetaY_vs_t").c_str());

			cout<<h_fft<<endl;

			DrawFFT(h_fft, f_y, ds, "../Images/Data/dMu/Run-1/EarlyTimeFFTs/"+stn+"_FFT_noRand_"+ds);

		}

		fin->Close();

	}

	return; 

}*/

// Overlay to save on space 
void EarlyTimeFFTs() { 

	string randomised = "randomised_";

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18", "S12S18"};

	vector<double> vw_ = {2.3, 2.04, 2.04, 2.3};

	vector<double> n_ = {.108, 0.120, 0.120, 0.108};//2.3, 2.04, 2.04, 2.3};

	// ωy = ωc · √n


	for(int i(0); i<4; i++) { 

		string ds = ds_.at(i);

		double vw = 2.3218;//vw_.at(i);

		double f_y = f_c * sqrt(n_.at(i));
		double f_CBOx = f_c - (f_c * sqrt(1-n_.at(i)));

		TFile *fin1 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_noRand_earlyTimes_BQ.root").c_str());
		TFile *fin2 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_earlyTimes_randomised_BQ.root").c_str());

		//TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_noRand_BQ.root").c_str());
		//TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_noRand_BQ.root").c_str());
		//TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_randomised_BQ.root").c_str());

		//cout<<"---> "<<ds<<", "<<fin<<endl;

		for(auto &stn : stn_) {
			
			//TH1D *h_fft = (TH1D*)fin->Get(("SimultaneousAnalysis/"+stn+"_FFT_h_res_thetaY_vs_t").c_str());
			TH1D *h_fft_1 = (TH1D*)fin1->Get(("SimultaneousAnalysis/"+stn+"_FFT_h_res_thetaY_vs_t").c_str());
			TH1D *h_fft_2 = (TH1D*)fin2->Get(("SimultaneousAnalysis/"+stn+"_FFT_h_res_thetaY_vs_t").c_str());


			DrawFFTOverlay(h_fft_1, h_fft_2, f_y, f_CBOx, ds, "../Images/Data/dMu/Run-1/EarlyTimeFFTs/"+stn+"_FFT_earlyTimes_overlay_"+ds);

		}

		fin1->Close();
		fin2->Close();
	}

	return; 

}