#include "FancyDraw.h"

void DrawHist(TH1D *hist, std::string title, std::string fname) {

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

	hist->Draw("HIST");

	// TPaveText *names = new TPaveText(0.30,0.69,0.62,0.88,"NDC"); // QHV
	TPaveText *names = new TPaveText(0.58,0.79,0.75,0.89,"NDC"); // 1/QHV
	names->SetTextAlign(13);
	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	names->AddText("#sigma [mm]"); 

	TPaveText *values = new TPaveText(0.75,0.79,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->SetTextSize(26);
	values->SetTextFont(44);
	values->SetFillColor(0);
	values->AddText(Round(hist->GetRMS(),5)+"#pm"+Round(hist->GetRMSError(), 1));

	names->Draw("SAME");
	values->Draw("SAME");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void PlotThetaY2() {

	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.root");
	TFile *f2 = TFile::Open("../Plots/Data/dMu/Run-1/Plots/edmPlots_Run-1a_125MeV_BQ.root");
	TFile *f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.reweight.root");

	cout<<f1<<", "<<f2<<", "<<f3<<endl;

	vector<string> stn_ = {"S12", "S18", "S12S18"};


	for(auto& stn : stn_) { 

		TH1D *h1 = (TH1D*)f1->Get(("SimultaneousAnalysis/"+stn+"_ThetaY").c_str());
		TH1D *h2 = (TH1D*)f2->Get(("SimultaneousAnalysis/"+stn+"_ThetaY").c_str());
		TH1D *h3 = (TH1D*)f3->Get(("SimultaneousAnalysis/"+stn+"_ThetaY").c_str());
		
		cout<<h1<<", "<<h2<<", "<<h3<<endl;

		DrawHist(h1, "Sim: reco vertices", "../Images/ReweightedAngles/"+stn+"_ThetaY_trackReco_WORLD_BQ");
		DrawHist(h2, "Data: Run-1a", "../Images/ReweightedAngles/"+stn+"_ThetaY_Run-1a_BQ");
		DrawHist(h3, "Reweighted sim: reco vertices", "../Images/ReweightedAngles/"+stn+"_ThetaY_trackReco_WORLD_BQ.reweight");
		
		cout<<"\n"<<stn<<endl;
		
		cout<<"Data: Run-1a, "<<h2->GetRMS()<<"±"<<h2->GetRMSError()<<" mrad"<<endl;
		cout<<"Sim: reco vertices, "<<h1->GetRMS()<<"±"<<h1->GetRMSError()<<" mrad"<<endl;
		cout<<"Reweighted sim: reco vertices, "<<h3->GetRMS()<<"±"<<h3->GetRMSError()<<" mrad"<<endl;
	}

	f1->Close();
	f2->Close();
	f3->Close();

	return;
}

void OverlayHist(TH1D *h1, TH1D *h2, std::string title, std::string fname, string stn) {

	TCanvas *c = new TCanvas("c","c",800,600);

	h1->SetTitle(title.c_str());

	h1->SetStats(0);
	//gStyle->SetOptStat(2210);
			
	h1->GetXaxis()->SetTitleSize(.04);
	h1->GetYaxis()->SetTitleSize(.04);
	h1->GetXaxis()->SetTitleOffset(1.1);
	h1->GetYaxis()->SetTitleOffset(1.2);
	h1->GetXaxis()->CenterTitle(1);
	h1->GetYaxis()->CenterTitle(1);
	h1->GetYaxis()->SetMaxDigits(4);
	h1->SetLineWidth(2);
	h2->SetLineWidth(2);
	h1->SetLineColor(kBlack);
	h2->SetLineColor(kRed);

	//c->SetRightMargin(0.13);

	h1->Draw("HIST");
	h2->Draw("HIST SAME");

	TLegend *leg = new TLegend(0.69, 0.72, 0.89, 0.89);

	leg->SetBorderSize(0);
	leg->AddEntry(h1, "Nominal");

	if(stn=="S12") leg->AddEntry(h2, "#plus1 mm");
	else if(stn=="S18") leg->AddEntry(h2, "#minus1 mm");

	leg->Draw("SAME");

	// TPaveText *names = new TPaveText(0.30,0.69,0.62,0.88,"NDC"); // QHV
/*	TPaveText *names = new TPaveText(0.58,0.79,0.75,0.89,"NDC"); // 1/QHV
	names->SetTextAlign(13);
	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	names->AddText("#sigma [mm]"); 

	TPaveText *values = new TPaveText(0.75,0.79,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->SetTextSize(26);
	values->SetTextFont(44);
	values->SetFillColor(0);
	values->AddText(Round(hist->GetRMS(),5)+"#pm"+Round(hist->GetRMSError(), 1));
*/
	// names->Draw("SAME");
	// values->Draw("SAME");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void PlotThetaY() {

	TFile *f1 = TFile::Open("../Plots/MC/dMu/Alignment/0mm/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.root");
	TFile *f2 = TFile::Open("../Plots/MC/dMu/Alignment/1mm/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.root"); 

	cout<<f1<<", "<<f2<<endl;

	vector<string> stn_ = {"S12", "S18"};//, "S12S18"};

	for(auto& stn : stn_) { 

		TH1D *h1 = (TH1D*)f1->Get(("SimultaneousAnalysis/"+stn+"_ThetaY").c_str());
		TH1D *h2 = (TH1D*)f2->Get(("SimultaneousAnalysis/"+stn+"_ThetaY").c_str());
		
		cout<<h1<<", "<<h2<<endl;

		cout<<h1->GetEntries()<<endl;
		cout<<h2->GetEntries()<<endl;

		cout<<h1->GetMean()<<"±"<<h1->GetMeanError()<<endl;
		cout<<h2->GetMean()<<"±"<<h2->GetMeanError()<<endl;

		cout<<h1->GetRMS()<<"±"<<h1->GetRMSError()<<endl;
		cout<<h2->GetRMS()<<"±"<<h2->GetRMSError()<<endl;

		OverlayHist(h1, h2, stn+";#theta_{y} [mrad];Vertices / 0.2 mrad", "../Images/AlignmentAndAcceptance/VerticalAngle/"+stn+"_thetaY_ovarlay", stn);
	
	}

	f1->Close();
	f2->Close();

	return;
}
