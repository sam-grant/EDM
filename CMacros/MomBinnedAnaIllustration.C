#include "Utils.h"

void DrawHist(TH1D *hist, std::string title, std::string fname, bool MomBinnedAna) { 

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());
	gStyle->SetOptStat(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineColor(1);

	hist->Draw("HIST");

	gPad->Update();

	if(MomBinnedAna) { 

		int step = 250; 
		int n_cuts = PMAX / step;
		int lo = -1; 
		int hi = -1;

	    for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

	      lo = 0 + i_cut*step; 
	      hi = step + i_cut*step;
		  TLine *loLine = new TLine(lo, gPad->GetUymin(), lo, gPad->GetUymax());
		  TLine *hiLine = new TLine(hi, gPad->GetUymin(), hi, gPad->GetUymax());
		  loLine->SetLineColor(kRed);
		  hiLine->SetLineColor(kRed);
		  loLine->SetLineStyle(2);
		  hiLine->SetLineStyle(2);

		  if(i_cut!=0) { 
			  loLine->Draw("SAME");
			  hiLine->Draw("SAME");	  
		  }

		}

	} else { 

		TLine *loLine = new TLine(750, gPad->GetUymin(), 750, gPad->GetUymax());
		TLine *hiLine = new TLine(2750, gPad->GetUymin(), 2750, gPad->GetUymax());

		loLine->SetLineColor(kRed);
		hiLine->SetLineColor(kRed);
		loLine->SetLineStyle(2);
		hiLine->SetLineStyle(2);

		loLine->Draw("SAME");
		hiLine->Draw("SAME");	

		TBox *bv = new TBox(750, gPad->GetUymin(), 2750, gPad->GetUymax());
		bv->SetFillColor(kRed); bv->SetFillStyle(3005);
		bv->Draw("SAME");
	}
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

void Run() { 

	TFile *fin = TFile::Open("../Plots/Data/dMu/Run-1/Plots/momentumDist_Run-1a.root");

	TH1D *hist = (TH1D*)fin->Get("Momentum/S12S18_Momentum");

	hist->Rebin(8);

	DrawHist(hist, "250 MeV intervals;Decay vertex momentum [MeV];Vertices / "+to_string(int(hist->GetBinWidth(1)))+" MeV", "../Images/Data/dMu/Run-1/MainPlots/momentumDist_Run-1a_momBinned", true);
	DrawHist(hist, "750-2750 MeV range;Decay vertex momentum [MeV];Vertices / "+to_string(int(hist->GetBinWidth(1)))+" MeV", "../Images/Data/dMu/Run-1/MainPlots/momentumDist_Run-1a_simulataneous", false);

	fin->Close();

	return; 

}

void MomBinnedAnaIllustration() { 

	Run();

	return;

}