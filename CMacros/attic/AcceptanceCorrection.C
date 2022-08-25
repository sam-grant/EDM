#include <iostream>
#include "Utils.h"

using namespace std;

double xmin = 1000;
double xmax = 2500;

const double delta_calc = 1.699245178; // mrad

// Reset graph range (can't use SetRangeUser because sometimes I like to plot with "L" option)
TGraphErrors *ResetGraph(TGraphErrors *grIn, double xmin, double xmax) {

	TGraphErrors *grOut = new TGraphErrors();
	int count = 0;
	
	for(int i(0); i<grIn->GetN(); i++) { 

		double x = grIn->GetX()[i];
		double y = grIn->GetY()[i];
		double ey = grIn->GetEY()[i];   

    	if(x<xmin || x>xmax) continue;

    	grOut->SetPoint(count, x, y);
    	grOut->SetPointError(count, 0., ey);  

    	count++;

	}


	return grOut;

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
	graph->Draw("AP");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}


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
	hist->SetLineWidth(1);
	hist->SetLineColor(1);
	hist->SetMarkerStyle(20);

	//c->SetRightMargin(0.13);

	hist->Draw("P");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr3, TGraphErrors *gr2, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr1->SetTitle(title.c_str());
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.2);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle

	// range
	double xmin = gr1->GetX()[0];
	double xmax = gr1->GetX()[gr1->GetN()-1];
	gr1->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);
	gr1->GetYaxis()->SetRangeUser(0.00, 0.35);
	gr1->Draw("AP");

	gr2->SetMarkerStyle(24); // open circle
	gr2->Draw("P SAME");

	if(gr3!=0) {
		gr3->SetMarkerStyle(20);
		gr3->SetMarkerColor(kRed);
		gr3->SetLineColor(kRed);
		gr3->Draw("P SAME");
	}

	TLegend *l = new TLegend(.69, .79, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	if(gr3==0) {
		l->AddEntry(gr1, "Unweighted");
		l->AddEntry(gr2, "Weighted");
	} else { 
		l->AddEntry(gr1, "All decays (unweighted)");
		l->AddEntry(gr2, "All decays (weighted)");
		l->AddEntry(gr3, "Truth vertices");
		l->Draw("SAME");
		gPad->Update();
		l->SetX1NDC(.49);
		l->SetX2NDC(.89);
		l->SetY1NDC(.75);
		l->SetY2NDC(.89);
		//c->Update();
	}

	l->Draw("SAME");

	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawOverlay2(TGraphErrors *gr1, TGraphErrors *gr3, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr1->SetTitle(title.c_str());
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.2);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle

	// range
	double xmin = gr1->GetX()[0];
	double xmax = gr1->GetX()[gr1->GetN()-1];
	gr1->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);
	gr1->GetYaxis()->SetRangeUser(0.05, 0.35);
	gr1->Draw("AP");

	if(gr3!=0) {
		gr3->SetMarkerStyle(20);
		gr3->SetMarkerColor(kRed);
		gr3->SetLineColor(kRed);
		gr3->Draw("P SAME");
	}

	TLegend *l = new TLegend(.65, .79, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	if(gr3==0) {
		l->AddEntry(gr1, "Unweighted");
		//l->AddEntry(gr2, "Weighted");
	} else { 
		l->AddEntry(gr1, "All decays");
		l->AddEntry(gr3, "Truth vertices");
		l->Draw("SAME");
/*		gPad->Update();
		l->SetX1NDC(.49);
		l->SetX2NDC(.89);
		l->SetY1NDC(.75);
		l->SetY2NDC(.89);*/
		//c->Update();
	}

	l->Draw("SAME");

	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawResiduals(TH1D *hist, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
	// gStyle->SetOptStat(2210);
			
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

  	TString rms = Round(hist->GetRMS(), 2);
  	TString rms_err = Round(hist->GetRMSError(), 1);

  	TPaveText *names = new TPaveText(0.575,0.80,0.675,0.89,"NDC");
  	names->SetTextAlign(13);
  	//names->AddText("#LT#Deltay#GT [mm]");
  	names->AddText("#sigma [mrad]");
  	names->SetTextSize(26); // 26
 	names->SetTextFont(44);
 	names->SetFillColor(0);

  	TPaveText *values = new TPaveText(0.79,0.80,0.89,0.89,"NDC");
  	values->SetTextAlign(33);
  	//values->AddText(mean+"#pm"+mean_err);
  	values->AddText(rms+"#pm"+rms_err);
  	values->SetTextSize(26); // 26
  	values->SetTextFont(44);
  	values->SetFillColor(0);

  	values->Draw("same");
  	names->Draw("same");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}


TH1D *GetResiduals(TGraphErrors *gr1, TGraphErrors *gr2) { 

	// Take the uncertainty as the uncertainty on gr3

	TH1D *h_res = new TH1D("h_res", ";Residuals [mrad];Entries", 20, -0.05, 0.05);

	for(int i(0); i<gr1->GetN(); i++) {

		double x =  gr1->GetX()[i];
		if(x < 750 || x > 2750) continue;

		double y1 = gr1->GetY()[i];
		double y2 = gr2->GetY()[i];

		if(y1 == 0 || y2 == 0) continue;

		double res = gr1->GetY()[i] - gr2->GetY()[i];

		// cout<<"\nres = "<<res<<"\nx = "<<x<<endl;

		h_res->Fill(res);

	}

	return h_res; 

}

void DrawGausTrials(vector<TH1D*> hists_, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  hists_.at(0)->SetTitle(title.c_str());
  hists_.at(0)->GetXaxis()->SetTitleSize(.04);
  hists_.at(0)->GetYaxis()->SetTitleSize(.04);
  hists_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  hists_.at(0)->GetYaxis()->SetTitleOffset(1.1);
  hists_.at(0)->GetXaxis()->CenterTitle(true);
  hists_.at(0)->GetYaxis()->CenterTitle(true);
  hists_.at(0)->GetYaxis()->SetMaxDigits(4);
  hists_.at(0)->GetYaxis()->SetRangeUser(0,1);//Draw("E");

  for(int i = 0; i < hists_.size(); i++) {

    double colour = colour = i*0.1;
    hists_.at(i)->SetMarkerColor(colour);
    hists_.at(i)->SetLineColor(colour);
    hists_.at(i)->SetMarkerStyle(20);

    if(i==0) hists_.at(i)->Draw("P");
    else hists_.at(i)->Draw("P SAME");
  }

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}


void GausTrials(TFile *fout, TH1D *h_ratio, int nTrials, string stn) { 

   	// Set random number pointer with seed
 	TRandom3 *randGen = new TRandom3(12345);

 	vector<TH1D*> trialHists_;

 	for(int i_trial(0); i_trial<nTrials; i_trial++) {


 		TH1D *h_ratio_trial = (TH1D*)h_ratio->Clone(Form("h_ratio_trial_%d",i_trial));

		// Loop thro' bins
		for(int i_bin(0); i_bin<h_ratio->GetNbinsX(); i_bin++) { 

			double centralVal = h_ratio->GetBinContent(i_bin+1);
			double errorBar = h_ratio->GetBinError(i_bin+1);

			// Draw from gaussian
			// Width is one sigma (error bar)
			h_ratio_trial->SetBinContent(i_bin+1, randGen->Gaus(centralVal, errorBar));
			h_ratio_trial->SetBinError(i_bin+1, 0);//randGen->Gaus(centralVal,2*errorBar));

		}


		h_ratio_trial->Write();

		trialHists_.push_back(h_ratio_trial);

	}

	DrawGausTrials(trialHists_, stn, "../Images/MC/Acceptance/truth/FullCorrectionResults/"+stn+"_TrialsOverlay_AcceptanceWeightingVsMomentum");

	return;
}


void Run(string input, bool write, string misalign) {

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceCorrection_250MeV"+misalign+"."+input+".root";
	if(!write) foutName = "delete_me.root";

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("graphs"); fout->mkdir("hists"); fout->mkdir("trials");

	TString f1Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr."+input+".root";
	TString f2Name = "../Plots/MC/dMu/Dilution/dilutionCurves.exact.root";

	TFile *f1 = TFile::Open(f1Name);
	TFile *f2 = TFile::Open(f2Name);

	cout<<"---> Got base files "<<f1Name<<", "<<f1<<", "<<f2Name<<", "<<f2<<endl;

	TGraphErrors *d_gr = (TGraphErrors*)f2->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/allDecays");
  	TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("DilutionFunc");

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) {

		TGraphErrors *gr = (TGraphErrors*)f1->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr_reset = ResetGraph(gr, xmin, xmax);

		TGraphErrors *gr_ratio = new TGraphErrors();

		for (int i(0); i<gr_reset->GetN(); i++) {

			double x = gr_reset->GetX()[i]; 
			double y = gr_reset->GetY()[i]/ (delta_calc * dilutionFunc->Eval(x)); 
			double ey = y * (gr_reset->GetEY()[i]/gr_reset->GetY()[i]);

			gr_ratio->SetPoint(i, x, y);
			gr_ratio->SetPointError(i, 0., ey);

		}

		DrawTGraphErrors(gr_ratio, stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_gr_AEDM_acceptanceFactors"+misalign+"."+input);
		
		fout->cd("graphs");
		gr_ratio->SetName((stn+"_ratio").c_str());
		gr_ratio->Write();

		// Easier to use a histogram during the actual correction
		TH1D *h1_ratio = new TH1D((stn+"_ratio").c_str(), (stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV").c_str(), gr_ratio->GetN(), xmin, xmax);
		
		for(int i(0); i<gr_ratio->GetN(); i++) {
			h1_ratio->SetBinContent(i+1, gr_ratio->GetY()[i]);
			h1_ratio->SetBinError(i+1, gr_ratio->GetEY()[i]);
		}

		DrawTH1(h1_ratio, stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_hist_AEDM_acceptanceFactors_"+misalign+"."+input);
		
		fout->cd("hists");
		h1_ratio->Write();

		// Draw acceptance weightings from gaussian distribution for uncertainty estimate
		fout->mkdir(("trials/"+stn).c_str());
		fout->cd(("trials/"+stn).c_str());

		GausTrials(fout, h1_ratio, 1e3, stn);

	}

	f1->Close();
	f2->Close();

	fout->Close();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}



int main(int argc, char *argv[]) {

   	string input = argv[1]; // 

	bool write = true;
	string misalign = "";
	
	Run(input, write, misalign);

	return 0; 

}