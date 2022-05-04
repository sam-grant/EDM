#include "Utils.h"


void DrawTGraphErrors(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("APL");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	hist->GetYaxis()->SetRangeUser(-100,100);

	gStyle->SetPalette(kRainBow);//LightTemperature);
	c->SetRightMargin(0.13);
	gStyle->SetPaintTextFormat("4.2f");
	gPad->Update();

	hist->Draw("COLZ");// TEXT");

	// For some reason you need to update the pad when dealing with cloned histograms
	c->Update();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawTH1(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	//	hist->GetYaxis()->SetRangeUser(-1,100);

/*	gStyle->SetPalette(kLightTemperature);
	c->SetRightMargin(0.13);
	gStyle->SetPaintTextFormat("4.2f");
	gPad->Update();*/

	hist->Draw("E");//COLZ TEXT");

	// For some reason you need to update the pad when dealing with cloned histograms
	c->Update();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void CorrelationsThetaYAcceptance() {

	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	// Quality beam between 1000 and 2500 MeV

	string momSlice = "0_3127_MeV";

	TH2D *h2_thetaY_vs_Y_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/Main/S12_ThetaY_vs_Y").c_str());
	TH2D *h2_thetaY_vs_R_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/Main/S12_ThetaY_vs_R").c_str());
	TH2D *h2_thetaY_vs_Phi_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/Main/S12_ThetaY_vs_Phi").c_str());

	//h2_thetaY_vs_Y_tracks->Rebin(2);
	//h2_thetaY_vs_R_tracks->Rebin(2);

	h2_thetaY_vs_Y_tracks->Scale(1./h2_thetaY_vs_Y_tracks->GetMaximum());
	h2_thetaY_vs_R_tracks->Scale(1./h2_thetaY_vs_R_tracks->GetMaximum());
	h2_thetaY_vs_Phi_tracks->Scale(1./h2_thetaY_vs_Phi_tracks->GetMaximum());

	cout<<h2_thetaY_vs_Y_tracks<<", "<<h2_thetaY_vs_R_tracks<<", "<<h2_thetaY_vs_Phi_tracks<<endl;

	h2_thetaY_vs_Phi_tracks->GetXaxis()->SetRangeUser(2.2,3.3);

	DrawTH2(h2_thetaY_vs_Y_tracks, "", "../Images/MC/Acceptance/Correlations/S12_thetaY_vs_Y_tracks_"+momSlice);
	DrawTH2(h2_thetaY_vs_R_tracks, "", "../Images/MC/Acceptance/Correlations/S12_thetaY_vs_R_tracks_"+momSlice);
	DrawTH2(h2_thetaY_vs_Phi_tracks, "", "../Images/MC/Acceptance/Correlations/S12_thetaY_vs_Phi_tracks_"+momSlice);

	// Profile
	TH1D *h1_thetaY_vs_Y_tracks = h2_thetaY_vs_Y_tracks->ProfileX();
	TH1D *h1_thetaY_vs_R_tracks = h2_thetaY_vs_R_tracks->ProfileX();
	TH1D *h1_thetaY_vs_Phi_tracks = h2_thetaY_vs_Phi_tracks->ProfileX();

	TGraphErrors *gr_thetaY_vs_Y_tracks = ConvertToTGraphErrors(h1_thetaY_vs_Y_tracks);
	TGraphErrors *gr_thetaY_vs_R_tracks = ConvertToTGraphErrors(h1_thetaY_vs_R_tracks);
	TGraphErrors *gr_thetaY_vs_Phi_tracks = ConvertToTGraphErrors(h1_thetaY_vs_Phi_tracks);

	DrawTH1(h1_thetaY_vs_Y_tracks, "", "../Images/MC/Acceptance/Correlations/S12_profileX_thetaY_vs_Y_tracks_"+momSlice);
	DrawTH1(h1_thetaY_vs_R_tracks, "", "../Images/MC/Acceptance/Correlations/S12_profileX_thetaY_vs_R_tracks_"+momSlice);
	DrawTH1(h1_thetaY_vs_Phi_tracks, "", "../Images/MC/Acceptance/Correlations/S12_profileX_thetaY_vs_Phi_tracks_"+momSlice);

	DrawTGraphErrors(gr_thetaY_vs_Y_tracks, ";Decay vertical position [mm];#LT#theta_{y}#GT [mrad]", "../Images/MC/Acceptance/Correlations/S12_gr_thetaY_vs_Y_tracks_"+momSlice);
	DrawTGraphErrors(gr_thetaY_vs_R_tracks, ";Decay radial position [mm];#LT#theta_{y}#GT [mrad]", "../Images/MC/Acceptance/Correlations/S12_gr_thetaY_vs_R_tracks_"+momSlice);
	DrawTGraphErrors(gr_thetaY_vs_Phi_tracks, ";Decay azimuthal angle [rad];#LT#theta_{y}#GT [mrad]", "../Images/MC/Acceptance/Correlations/S12_gr_thetaY_vs_Phi_tracks_"+momSlice);


	fin->Close();

	return;

}