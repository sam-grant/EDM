#include "Utils.h"

void DrawTH1(TH1D *hist, int a, int b, TString title, string fname, TString mean = "") {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title);

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(2);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST ][");
	

	TPaveText *names = new TPaveText(0.575,0.75,0.75,0.88,"NDC"); // 1/QHV
	names->SetTextAlign(13);
	names->AddText("#LT#theta_{y}#GT [mrad]");
	names->AddText("#sigma_{#theta_{y}} [mrad]");


	TPaveText *values = new TPaveText(0.75,0.75,0.89,0.88,"NDC");
	values->SetTextAlign(33);
	if(mean=="") values->AddText(Round(hist->GetMean(), a)+"#pm"+Round(hist->GetMeanError(),1));
	else values->AddText(mean);
	values->AddText(Round(hist->GetRMS(), b)+"#pm"+Round(hist->GetRMSError(), 1));

	names->SetTextSize(22);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(22);

	names->Draw("same");
	values->Draw("same");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}


void DrawAll(vector<TH1D*> hist_, string title) {

	cout<<hist_.size()<<endl;
	//for(auto hist : hist_) hist->Scale(1/hist->Integral());

	TCanvas *c = new TCanvas("c","c",800,600);

	cout<<"TCanvas"<<endl;

	cout<<hist_.at(0)<<endl;

	//hist_.at(0)->SetTitle(title.c_str());

	//hist_.at(0)->SetStats(0);	
	//hist_.at(0)->GetXaxis()->SetTitleSize(.04);
	//hist_.at(0)->GetYaxis()->SetTitleSize(.04);
	//hist_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	//hist_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	//hist_.at(0)->GetXaxis()->CenterTitle(1);
	//hist_.at(0)->GetYaxis()->CenterTitle(1);
	//hist_.at(0)->GetYaxis()->SetMaxDigits(4);

	//hist_.at(0)->SetLineWidth(2);
	//hist_.at(0)->SetLineColor(kBlue);
	//hist_.at(1)->SetLineColor(kOrange+7);
	//hist_.at(2)->SetLineColor(kGreen-3);
	//hist_.at(3)->SetLineColor(kMagenta+2);

	cout<<"drawing"<<endl;

	hist_.at(0)->Draw("HIST ][");
	//hist_.at(1)->Draw("HIST SAME");
	//hist_.at(2)->Draw("HIST SAME");
	//hist_.at(3)->Draw("HIST SAME");
/*//
	TPaveText *names = new TPaveText(0.575,0.75,0.75,0.88,"NDC"); // 1/QHV
	names->SetTextAlign(13);
	names->AddText("#LT#theta_{y}#GT [mrad]");
	names->AddText("#sigma_{#theta_{y}} [mrad]");

	TPaveText *values = new TPaveText(0.75,0.75,0.89,0.88,"NDC");
	values->SetTextAlign(33);
	if(mean=="") values->AddText(Round(hist->GetMean(), a)+"#pm"+Round(hist->GetMeanError(),1));
	else values->AddText(mean);
	values->AddText(Round(hist->GetRMS(), b)+"#pm"+Round(hist->GetRMSError(), 1));

	names->SetTextSize(22);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(22);

	names->Draw("same");
	values->Draw("same");*/

	//	c->SaveAs("../Images/Data/Run1ThetaYOverlay.pdf");//(fname+".pdf").c_str());

	delete c;


	return;
}

void VerticalAngleWidth() {

	cout << "\n *** SIM ALL DECAYS *** ,, " << endl;

	TFile *f0 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_AQ_noVertCorr.root");

	TH1D *h0 = (TH1D*)f0->Get("SimultaneousAnalysis/ThetaY");

	h0->GetXaxis()->SetRangeUser(-80, 80);
	DrawTH1(h0, 3, 5, ";#theta_{y} [mrad];Decays / mrad", "../Images/VerticalAngleDists/ThetaY_AllDecays","(2#pm4)#times10^{-3}");//, "(0#pm4)#times10^{-3}");

	double sigma = h0->GetRMS();
	double dsigma = h0->GetRMSError();

	cout<<h0->GetXaxis()->GetBinWidth(0)<<endl;

	cout<<sigma<<", "<<dsigma<<endl;

	cout << "\n *** SIM TRACK RECO *** ,, " << endl;

	vector<string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ_noVertCorr.root");

	for(auto& stn : stn_) { 

		TH1D *h1 = (TH1D*)f1->Get(("SimultaneousAnalysis/"+stn+"_ThetaY").c_str());

		sigma = h1->GetRMS();
		dsigma = h1->GetRMSError();

		cout<<stn<<", "<<sigma<<", "<<dsigma<<endl;

		if(stn=="S12S18") {
			h1->GetXaxis()->SetRangeUser(-80, 80);
			h1->RebinX(5);	
			cout<<h1->GetXaxis()->GetBinWidth(0)<<endl;
			DrawTH1(h1, 3, 5, ";#theta_{y} [mrad];Decays / mrad", "../Images/VerticalAngleDists/ThetaY_TrackReco");//, "(2#pm4)#times10^{-3}");
		}

	}

	f1->Close();

	TFile *f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackTruth_WORLD_250MeV_BQ_noVertCorr.root");

	for(auto& stn : stn_) { 

		TH1D *h1 = (TH1D*)f2->Get(("SimultaneousAnalysis/"+stn+"_ThetaY").c_str());

		sigma = h1->GetRMS();
		dsigma = h1->GetRMSError();

		cout<<stn<<", "<<sigma<<", "<<dsigma<<endl;

		if(stn=="S12S18") {
			h1->GetXaxis()->SetRangeUser(-80, 80);
			h1->RebinX(5);	
			cout<<h1->GetXaxis()->GetBinWidth(0)<<endl;
			DrawTH1(h1, 3, 5, ";#theta_{y} [mrad];Decays / mrad", "../Images/VerticalAngleDists/ThetaY_TrackTruth");//, "(0#pm4)#times10^{-3}");
		}

	}

	f2->Close();

	cout << "\n *** DATA *** ,," << endl;

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};

	stn_ = {"S12", "S18", "S12S18"};

	vector<TH1D*> hists_;

	for(auto& ds : ds_) {

		cout<<ds<<endl;

		TString f3Name = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_250MeV_1000_2500MeV_randomised_BQ.root";//).c_str());//250MeV_1000_2500MeV_randomised_BQ.root").c_str()); 
		if(ds=="Run-1d") f3Name = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_250MeV_1000_2500MeV_50usStartTime_randomised_BQ.root";//).c_str());//250MeV_1000_2500MeV_randomised_BQ.root").c_str()); 
		TFile *f3 = TFile::Open(f3Name);

		cout<<"\n"<<ds<<",,"<<endl;

		for(auto& stn : stn_) { 

			TH1D *h2 = (TH1D*)f3->Get(("MomentumBinnedAnalysis/"+stn+"_ThetaY_1000_1250").c_str());
  			
  			int step = 250;
  			int nSlices = (2500-1000)/step;

  			// Slice momentum
  			for ( int i_slice = 1; i_slice < nSlices; i_slice++ ) {

    			int lo = 1000 + i_slice*step;
    			int hi = lo + step;
				
				//cout<<hi<<endl;
				string tmp = "MomentumBinnedAnalysis/"+stn+"_ThetaY_"+to_string(lo)+"_"+to_string(hi);
				//cout<<tmp<<endl;
				h2->Add((TH1D*)f3->Get(tmp.c_str()));//("MomentumBinnedAnalysis/"+stn+"_ThetaY_"+to_string(lo)+"_"+to_string(hi)).c_str()));
	
				// Unfortunately we have the wrong momentum ranges in these files so I have to add the momentum binned ones together

			}

			sigma = h2->GetRMS();
			dsigma = h2->GetRMSError();

			cout<<stn<<", "<<sigma<<", "<<dsigma<<endl;

			if(stn=="S12S18") {
				h2->GetXaxis()->SetRangeUser(-80, 80);
				h2->RebinX(3);	
				cout<<h2->GetXaxis()->GetBinWidth(0)<<endl;
				DrawTH1(h2, 1, 5, ds+";#theta_{y} [mrad];Decays / mrad", "../Images/VerticalAngleDists/ThetaY_"+ds);//, "(0#pm4)#times10^{-3}");
				//hists_.push_back(h2);
			}

		}

		f3->Close();

	}

	//DrawAll(hists_, ";#theta_{y} [mrad];Decays / mrad");
/*	cout << "\n *** REWIEGHTED SIM *** ,, " << endl;

	TFile *f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.reweight.root");

	for(auto& stn : stn_) { 

		TH1D *h3 = (TH1D*)f3->Get("SimultaneousAnalysis/"+stn+"_ThetaY");

		sigma = h3->GetRMS();
		dsigma = h3->GetRMSError();

		cout<<stn<<", "<<sigma<<", "<<dsigma<<endl;

	}

	f3->Close();*/

	return;

}