#include "FancyDraw.h"
#include "Utils.h"

TGraphErrors *Normalise(TGraphErrors *graph, double max) {

	TGraphErrors *gr_norm = new TGraphErrors();

	for(int i = 0; i < graph->GetN(); i++) {

		gr_norm->SetPoint(i, graph->GetX()[i]/PMAX, graph->GetY()[i]/max);
		gr_norm->SetPointError(i, 0, graph->GetEY()[i]/max);

	}

	return gr_norm;
}

void DrawOverlay(TGraphErrors *graph, TF1 *fit) {

	TCanvas *c = new TCanvas();

	fit->Draw();

	graph->Draw("SAME");

	c->SaveAs("../tmp/overlay.png");

	return; 
}


void DrawFit(TGraphErrors *graph, TF1 *fit, std::string title, std::string fname) {

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
	fit->Draw("SAME");
	//c->SetGridx();
	// TLegend *leg = new TLegend(.15, .69, .59, .89);
	TLegend *leg = new TLegend(.15, .70, .45, .89);
	leg->SetBorderSize(0);

	leg->AddEntry(graph, "Sim: all decays");
	leg->AddEntry(fit, "Fit: #frac{8}{5} #frac{#sqrt{#lambda(1-#lambda)}(1 + 4#lambda)}{(5 + 5#lambda - 4#lambda^{2})}");

	leg->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void FitAEDMOverThetaYRMS() { 

	TString finName = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ.root";
	TFile *fin = TFile::Open(finName);
	cout<<"Reading file "<<finName<<", "<<fin<<endl;

	TString graphName = "MomentumBinnedAnalysis/ParameterScans/AEDMOverThetaYRMS_vs_p";
	//TString graphName = "MomentumBinnedAnalysis/ParameterScans/AEDMOverMaxDiff_vs_p";
	TGraphErrors *graph = (TGraphErrors*)fin->Get(graphName);

	cout<<"Got graph "<<graph<<", "<<graphName<<endl;

	graph = Normalise(graph, 0.068);

	TF1 *fit = new TF1("fit", "[0] * (sqrt(x * (1-x)) * (1 + 4*x) ) / (5 + 5*x - 4*x*x)", 0, 1);
	// ../Images/MC/dMu/5.4e-18/MomBinnedAna/asymFit_AEDMOverThetaYRMS_vs_p_allDecays_WORLD_250MeV_noQ.pdf
	fit->SetRange(graph->GetX()[1], graph->GetX()[8]);

	DrawOverlay(graph, fit);

	graph->Fit(fit);

	DrawTF1(fit, ";#lambda=p/p_{max};A_{EDM}/#sigma_{#theta_{y}}", "../tmp/fit");

	DrawFit(graph, fit, ";#lambda=p/p_{max};A_{EDM}/#sigma_{#theta_{y}} [normalised units]", "../Images/MC/dMu/5.4e-18/MomBinnedAna/asymFit_AEDMOverThetaYRMS_vs_p_allDecays_WORLD_250MeV_noQ");



	fin->Close();

	return;

}