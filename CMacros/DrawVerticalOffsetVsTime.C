void DrawGraphs(vector<TGraphErrors*> gr_, std::string title, std::string fname, double ymin, double ymax) { 

  cout<<"---> Drawing offset"<<endl;

  vector<TString> labels_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};


  TCanvas *c = new TCanvas("c","",800,600);
  TLegend *l = new TLegend(0.11, 0.69, 0.59, 0.89); 
  //l->SetNColumns(2);
  l->SetBorderSize(0);
  l->SetTextSize(24);
  l->SetTextFont(44);

  gr_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);
  gr_.at(0)->GetXaxis()->SetTitleSize(.04);
  gr_.at(0)->GetYaxis()->SetTitleSize(.04);
  gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
  gr_.at(0)->GetXaxis()->CenterTitle(true);
  gr_.at(0)->GetYaxis()->CenterTitle(true);
  gr_.at(0)->GetYaxis()->SetMaxDigits(4);

  vector<int> colors_ = {1, 2, 3, 4};

  for(int i = 0; i<gr_.size(); i++) {

  	gr_.at(i)->SetMarkerColor(colors_.at(i));
  	gr_.at(i)->SetLineColor(colors_.at(i));
  	l->AddEntry(gr_.at(i), labels_.at(i));

  	if(i==0) gr_.at(i)->Draw("APL");
  	else gr_.at(i)->Draw("PL SAME");


  }

  l->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawVerticalOffsetVsTime() { 


	TFile *f_1a = TFile::Open("../Plots/Data/dMu/Run-1/Fits/verticalOffsetFits_Run-1a_125MeV_BQ.root");
	TFile *f_1b = TFile::Open("../Plots/Data/dMu/Run-1/Fits/verticalOffsetFits_Run-1b_125MeV_BQ.root");
	TFile *f_1c = TFile::Open("../Plots/Data/dMu/Run-1/Fits/verticalOffsetFits_Run-1c_125MeV_BQ.root");
	TFile *f_1d = TFile::Open("../Plots/Data/dMu/Run-1/Fits/verticalOffsetFits_Run-1d_125MeV_BQ.root");

	vector<TFile*> f_ = {f_1a, f_1b, f_1c, f_1d};

	vector<TGraphErrors*> gr_;

	for(auto& f : f_) {

		TGraphErrors *gr = (TGraphErrors*)f->Get("MainPlots/S12S18_ThetaY_vs_Time_Fit");

		// Purge fit
        TF1 *fit = (TF1*)gr->GetListOfFunctions()->At(0); 
        gr->GetListOfFunctions()->Remove(fit);
        delete fit;

		gr_.push_back( gr );

	}


	DrawGraphs(gr_, "", "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/S12S18_gr_overlay", -0.8, 0.5);

	f_1a->Close();
	f_1b->Close();
	f_1c->Close();
	f_1d->Close();



}