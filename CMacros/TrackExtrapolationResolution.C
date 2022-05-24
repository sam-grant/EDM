#include "Utils.h"

void DrawTH1(TH1D *hist, TString title, string fname, string parName, string unit, int a, int b) {

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
	

	TPaveText *names = new TPaveText(0.53,0.75,0.75,0.88,"NDC"); // 1/QHV
	names->SetTextAlign(13);
	if(parName=="#theta_{y}") {
		names->AddText(("#LT#Delta#theta_{y}#GT ["+unit+"]").c_str()); 
		names->AddText(("#sigma_{"+parName+"} ["+unit+"]").c_str()); 
		//names->SetY1NDC
	} else { 
		names->AddText(("#LT#Delta"+parName+"#GT ["+unit+"]").c_str()); 
		names->AddText(("#sigma_{"+parName+"} ["+unit+"]").c_str()); 

	}
	TPaveText *values = new TPaveText(0.75,0.75,0.89,0.88,"NDC");
	values->SetTextAlign(33);
	values->AddText(Round(hist->GetMean(), a)+"#pm"+Round(hist->GetMeanError(), 1));
	values->AddText(Round(hist->GetRMS(), b)+"#pm"+Round(hist->GetRMSError(), 1));

	names->SetTextSize(23);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(23);

	names->Draw("same");
	values->Draw("same");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawTGraphErrors(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.2);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle

	graph->GetXaxis()->SetRangeUser(0, 3000);

	graph->Draw("AP");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

TGraphErrors *SliceY(TH2D *hist, bool RMS = false, bool percent = false) { 

	TGraphErrors *gr = new TGraphErrors();

	//Clone input to stop overwrites
  	TH2D *hist_clone = (TH2D*)hist->Clone("hist_clone");

  	vector<TH1D *> slices_;

  	int i_count = 0;

	// Loop through x-bins
	for(int i_bin = 0; i_bin < hist_clone->GetXaxis()->GetNbins(); i_bin++) { 

		// Get slice
		TH1D *slice = hist_clone->ProjectionY((to_string(i_bin+1).c_str()), i_bin+1, i_bin+1);

		double mean = hist_clone->GetXaxis()->GetBinCenter(i_bin+1);

		double sigma = slice->GetMeanError();
		double sigma_err = 0; 

		if(RMS) { 
			sigma = slice->GetRMS();
			sigma_err = slice->GetRMSError(); 
		}

		if(percent) {
			sigma = (sigma/mean)*100;
			sigma_err = (sigma_err/mean)*100;
		}

		if(sigma==0) continue; 
		if(sigma_err>1) continue;
		if(mean>2900) continue;

		gr->SetPoint(i_count, mean, sigma);
		gr->SetPointError(i_count, 0, sigma_err);

		i_count++;

	}

	return gr;


}

void TrackExtrapolationResolution() { 

	TString finName = "../Plots/MC/Resolution/Plots/trackerResolutionPlots.root";
	TFile *fin = TFile::Open(finName);

	cout<<"Opened "<<finName<<", "<<fin<<endl;

	TH1D *theta_y_true = (TH1D*)fin->Get("ThetaY_1000_2500_MeV/theta_y_true");
	TH1D *theta_y_reco = (TH1D*)fin->Get("ThetaY_1000_2500_MeV/theta_y_reco");

	TH1D *y_res = (TH1D*)fin->Get("Resolution_1000_2500_MeV/y_res");
	TH1D *r_res = (TH1D*)fin->Get("Resolution_1000_2500_MeV/r_res");
	TH1D *p_res = (TH1D*)fin->Get("Resolution_1000_2500_MeV/p_res");
	TH1D *theta_y_res = (TH1D*)fin->Get("Resolution_1000_2500_MeV/theta_y_res");

  	TH2D *y_res_vs_p = (TH2D*)fin->Get("ResolutionVsMomentum/y_res_vs_p");
  	TH2D *r_res_vs_p = (TH2D*)fin->Get("ResolutionVsMomentum/r_res_vs_p");
  	TH2D *p_res_vs_p = (TH2D*)fin->Get("ResolutionVsMomentum/p_res_vs_p");
  	TH2D *theta_y_res_vs_p = (TH2D*)fin->Get("ResolutionVsMomentum/theta_y_res_vs_p");

  	cout<<"Got histograms"<<endl;

  	theta_y_res->GetXaxis()->SetRangeUser(-20, 20);

  	// Draw 1D hists
  	DrawTH1(y_res, ";#Delta y (truth #minus reco) [mm];Decay vertices / "+Round(y_res->GetBinWidth(1),3)+" mm", "../Images/MC/Resolution/y_res", "y", "mm", 2, 4);
  	DrawTH1(r_res, ";#Delta r (truth #minus reco) [mm];Decay vertices / "+Round(r_res->GetBinWidth(1),3)+" mm", "../Images/MC/Resolution/r_res", "r", "mm", 3, 4);
  	DrawTH1(p_res, ";#Delta p (truth #minus reco) [MeV];Decay vertices / "+Round(p_res->GetBinWidth(1),3)+" MeV", "../Images/MC/Resolution/p_res", "p", "MeV", 3,5);
  	DrawTH1(theta_y_res, ";#Delta #theta_{y} (truth #minus reco) [mrad];Decay vertices / "+Round(theta_y_res->GetBinWidth(1),3)+" mrad", "../Images/MC/Resolution/theta_y_res", "#theta_{y}", "mrad", 3, 5);

/*  	DrawTH1(y_res, ";#Delta y (truth #minus reco) [mm];Decay vertices / mm", "../Images/MC/Resolution/y_res", "#Deltay", "mm", 2, 4);
  	DrawTH1(r_res, ";#Delta r (truth #minus reco) [mm];Decay vertices / mm", "../Images/MC/Resolution/r_res", "#Deltar", "mm", 3, 4);
  	DrawTH1(p_res, ";#Delta p (truth #minus reco) [mm];Decay vertices / MeV", "../Images/MC/Resolution/p_res", "#Deltap", "MeV", 2,4);
  	DrawTH1(theta_y_res, ";#Delta #theta_{y} (truth #minus reco) [mm];Decay vertices / 0.5 mrad", "../Images/MC/Resolution/theta_y_res", "#Delta#theta_{y}", "mrad", 2, 3);
*/
  	TGraphErrors *gr_y_res_vs_p = SliceY(y_res_vs_p, true);
	TGraphErrors *gr_r_res_vs_p = SliceY(r_res_vs_p, true);
	TGraphErrors *gr_p_res_vs_p = SliceY(p_res_vs_p, true);
	TGraphErrors *gr_p_res_vs_p_percent = SliceY(p_res_vs_p, true, true);
	TGraphErrors *gr_theta_y_res_vs_p = SliceY(theta_y_res_vs_p, true);
	
  	DrawTGraphErrors(gr_y_res_vs_p, ";True momentum [MeV];#Delta y (truth #minus reco) RMS [mm] / 100 MeV", "../Images/MC/Resolution/y_res_vs_p");
  	DrawTGraphErrors(gr_r_res_vs_p, ";True momentum [MeV];#Delta r (truth #minus reco) RMS [mm] / 100 MeV", "../Images/MC/Resolution/r_res_vs_p");
  	DrawTGraphErrors(gr_p_res_vs_p, ";True momentum [MeV];#Delta momentum (truth #minus reco) RMS [mm] / 100 MeV", "../Images/MC/Resolution/p_res_vs_p");
  	DrawTGraphErrors(gr_p_res_vs_p_percent, ";True momentum [MeV];#Delta p (truth #minus reco) RMS [%] / 100 MeV", "../Images/MC/Resolution/p_res_vs_p_percent");
  	DrawTGraphErrors(gr_theta_y_res_vs_p, ";True momentum [MeV];#Delta #theta_{y} (truth #minus reco) RMS [mrad] / 100 MeV", "../Images/MC/Resolution/theta_y_res_vs_p");
  
   	gr_y_res_vs_p = SliceY(y_res_vs_p, false);
	gr_r_res_vs_p = SliceY(r_res_vs_p, false);
	gr_p_res_vs_p = SliceY(p_res_vs_p, false);
	gr_p_res_vs_p_percent = SliceY(p_res_vs_p, false, true);
	gr_theta_y_res_vs_p = SliceY(theta_y_res_vs_p, false);
	
	gr_y_res_vs_p->GetYaxis()->SetRangeUser(0, 0.3);
	gr_r_res_vs_p->GetYaxis()->SetRangeUser(0.025, 0.5);
	gr_p_res_vs_p->GetYaxis()->SetRangeUser(0, 1);
	gr_theta_y_res_vs_p->GetYaxis()->SetRangeUser(0, 0.17);

  	DrawTGraphErrors(gr_y_res_vs_p, ";True momentum [MeV];#delta #LT#Deltay#GT [mm] / 100 MeV", "../Images/MC/Resolution/y_avg_res_vs_p");
  	DrawTGraphErrors(gr_r_res_vs_p, ";True momentum [MeV];#delta #LT#Deltar#GT [mm] / 100 MeV", "../Images/MC/Resolution/r_avg_res_vs_p");
  	DrawTGraphErrors(gr_p_res_vs_p, ";True momentum [MeV];#delta #LT#Deltap#GT [MeV] / 100 MeV", "../Images/MC/Resolution/p_avg_res_vs_p");
  	DrawTGraphErrors(gr_p_res_vs_p_percent, ";True momentum [MeV];#delta #LT#Deltap#GT [%] / 100 MeV", "../Images/MC/Resolution/p_avg_res_vs_p_percent");
  	DrawTGraphErrors(gr_theta_y_res_vs_p, ";True momentum [MeV];#delta #LT#Delta#theta_{y}#GT (truth #minus reco) [mrad] / 100 MeV", "../Images/MC/Resolution/theta_y_avg_res_vs_p");
  
  	// Get average resolution 



	fin->Close();

	return; 

}