#include "Utils.h"
#include "FancyDraw.h"

void DrawMaximumVerticalAngleFit(TH2D *h2, TF1 *f1, TF1 *f2, std::string eqn, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c", "c", 800, 600);

	h2->SetTitle(title.c_str());
	h2->SetStats(0);	
	h2->GetXaxis()->SetTitleSize(.04);
	h2->GetYaxis()->SetTitleSize(.04);
	h2->GetXaxis()->SetTitleOffset(1.1);
	h2->GetYaxis()->SetTitleOffset(1.1);
	h2->GetXaxis()->CenterTitle(1);
	h2->GetYaxis()->CenterTitle(1);
	h2->GetYaxis()->SetMaxDigits(4);
	h2->GetYaxis()->SetRangeUser(-1000, 1000);

	gStyle->SetPalette(kBird);
	c->SetRightMargin(0.13);

	h2->Draw("COLZ");
	f1->Draw("SAME");
	f2->Draw("SAME");

	TLegend *l = new TLegend(.49, .75, .86, .85);
	l->SetBorderSize(0);
	l->SetBorderSize(0);
	l->SetTextSize(26);
	l->SetTextFont(44);

	l->AddEntry(f1, eqn.c_str());
	l->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void MaximumVerticalAngleFit() {

	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.root";
	TFile *fin = TFile::Open(finName);

	TH2D *h2_thetaY_vs_Y = (TH2D*)fin->Get("AllDecays/Main/ThetaY_vs_p_Fine");
	TF1 *f1 = new TF1("f1", "[0] * asin( (1/x) * sqrt( ([1]*x/[2]) - (x/[2])**2 ) )", 0, 3111);
	//TF1 *f1 = new TF1("f1", "[0] * TMath::ASin( (0.5*[1]) / x ) ", 0, 3111);
	//f1->SetParameter(0, 1e3);
	//f1->SetParameter(1, 105.6583755);
	//f1->SetParameter(2, 29.3);
	f1->SetParameter(0, 1e3);
	f1->SetParameter(1, 105.6583755);
	f1->SetParameter(2, 29.3);
	TF1 *f2 = new TF1("f2", "-f1", 0, 3111);

	cout<<f2->Eval(1e-12)<<endl;

	//return;

	std::string eqn = "sin^{-1}#frac{#sqrt{m_{#mu}p/#gamma#minusp^{2}/#gamma^{2}}}{p}";
	DrawMaximumVerticalAngleFit(h2_thetaY_vs_Y, f1, f2, eqn, ";e^{+} momentum [MeV];#theta_{y} [mrad]", "../Images/MC/MaxVerticalAngle/2DFit_TEST");

	DrawTH2(h2_thetaY_vs_Y, "", "../Images/MC/MaxVerticalAngle/NoFit_TEST");
	fin->Close();

	return; 

/*	h2_thetaY_vs_Y->SetStats(0);
	h2_thetaY_vs_Y->SetTitle("[0] * atan( (1/x) * sqrt( ([1]*x/[2]) - (x/[2])**2 ) )");
	h2_thetaY_vs_Y->Draw("COL");

	//fit->SetLineWidth(6);
	f1->Draw("SAME");
	f2->Draw("SAME");

	gPad->Update();

	c->SaveAs("../Images/MC/Acceptance/MaximumVerticalAngleFits/2DFit.png");
	c->SaveAs("../Images/MC/Acceptance/MaximumVerticalAngleFits/2DFit.pdf");

	return;

	TH1D *h1_thetaY_vs_Y = (TH1D*)h2_thetaY_vs_Y->ProfileX();
	h1_thetaY_vs_Y->Fit(f1, "R");

	h1_thetaY_vs_Y->SetStats(0);
	h1_thetaY_vs_Y->SetTitle("[0] * atan( (1/x) * sqrt( ([1]*x/[2]) - (x/[2])**2 ) )");
	h1_thetaY_vs_Y->Draw("E");
	f1->SetLineWidth(6);
	f1->Draw("SAME");

	c->SaveAs("../Images/MC/Acceptance/MaximumVerticalAngleFits/1DFit.png");
	c->SaveAs("../Images/MC/Acceptance/MaximumVerticalAngleFits/1DFit.pdf");


	return;*/
}