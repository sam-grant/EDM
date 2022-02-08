#include "Utils.h"

void OverlayGraphs(TGraphErrors *gr1, TGraphErrors *gr2, std::string title, std::string fname, std::string stn) {

	TCanvas *c = new TCanvas("c","c",800,600);

	// Get range
	double ymin = 1e6; double ymax = -1e6;

	vector<TGraphErrors*> gr_ = {gr1, gr2};

	for(auto& gr : gr_) { 

		for(int i(0); i<gr->GetN(); i++) {

			double y = gr->GetY()[i];
			double ey = gr->GetEY()[i];

			if((y+ey) > ymax) ymax = y+ey;

			if((y-ey) < ymin) ymin = y-ey;

		}

	}

	gr1->GetYaxis()->SetRangeUser(ymin-0.25, ymax+0.25);
	gr1->GetXaxis()->SetRangeUser(gr1->GetX()[0]-100, gr1->GetX()[gr1->GetN()]+100);
	gr1->SetTitle((stn+title).c_str());
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.2);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle
	gr1->Draw("AP");

	gr2->SetMarkerStyle(24); // Open circle
	gr2->Draw("P SAME");
	//c->SetGridx();

	TLegend *leg = new TLegend(0.49, 0.79, 0.89, 0.89);
	leg->SetBorderSize(0);
	leg->SetNColumns(2);

	leg->AddEntry(gr1, "Nominal");
	if(stn=="S12") leg->AddEntry(gr2, "#plus1 mm");
	else if(stn=="S18") leg->AddEntry(gr2, "#minus1 mm");

	leg->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname, std::string stn) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->SetTitle((stn+title).c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.2);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("ALP");
	//c->SetGridx();

	TF1 *fit = (TF1*)graph->GetFunction("pol0");

	TLegend *leg = new TLegend(.59, .79, .89, .89);
	leg->SetBorderSize(0);
	leg->SetNColumns(2);
	leg->AddEntry(graph, "Sim");
	leg->AddEntry(fit, "Fit");
	//leg->Draw("SAME");

	TPaveText *result = new TPaveText(0.40,0.75,0.60,0.85,"NDC");
	result->SetTextAlign(22);
	result->AddText("#LT#DeltaA_{EDM}#GT = "+Round(fit->GetParameter(0),2)+"%");// #pm"+Round(fit->GetParError(0),2)+" %"); 
	result->SetTextSize(26);
	result->SetTextFont(44);
	result->SetFillColor(0);

	result->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

TGraphErrors *DiffGraph(TGraphErrors *gr1, TGraphErrors *gr2) {

	TGraphErrors *gr = new TGraphErrors();

	for(int i(0); i<gr1->GetN(); i++) {

		double a = gr1->GetY()[i]; double ea = gr1->GetY()[i];
		double b = gr2->GetY()[i]; double eb = gr2->GetEY()[i]; 

		double percChange = (a-b)/a;
		percChange = abs(percChange)*100;

		double percChangeErr = 0;//sqrt( (pow(b/(a*a), 2) * pow(ea,2)) + (pow(1/a, 2) * pow(eb,2)) );
		gr->SetPoint(i, gr1->GetX()[i], percChange);//(gr1->GetY()[i] - gr2->GetY()[i])/gr1->GetY()[i]);
		gr->SetPointError(i, 0, percChangeErr);//*sqrt( pow(gr1->GetEY()[i], 2) + pow(gr2->GetEY()[i], 2)));

	}

	return gr; 
}

void Run(string step) { 

	string fn1 = "../Plots/MC/dMu/Alignment/0mm/Fits/edmFits_unblinded_trackReco_WORLD_"+step+"_BQ.root";
	string fn2 = "../Plots/MC/dMu/Alignment/1mm/Fits/edmFits_unblinded_trackReco_WORLD_"+step+"_BQ.root";

	TFile *f1 = TFile::Open(fn1.c_str());
	TFile *f2 = TFile::Open(fn2.c_str());

	cout<<"Reading files "<<fn1<<", "<<f1<<" and "<<fn2<<", "<<f2<<endl;

	vector<string> stn_ = {"S12", "S18"};

	for(auto& stn : stn_) { 

		TGraphErrors *gr1 = (TGraphErrors*)f1->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr2 = (TGraphErrors*)f2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());

		for(int i(0); i<gr1->GetN(); i++) {

			gr1->SetPointX(i, gr1->GetX()[i]-25);
			gr2->SetPointX(i, gr2->GetX()[i]+25);
		}

		OverlayGraphs(gr1, gr2, "", ("../Images/MC/Alignment/"+stn+"_AEDM_vs_p_overlay_"+step).c_str(), stn);

		TGraphErrors *gr_diff = DiffGraph(gr1, gr2);

		gr_diff->Fit("pol0");

		DrawGraph(gr_diff, ";Decay vertex momentum [MeV];#DeltaA_{EDM} [%] / 250 MeV", "../Images/MC/Alignment/"+stn+"_AEDM_vs_p_diff_"+step, stn);

	}

	f1->Close();
	f2->Close();

	return;

}


void AlignmentComparison() {

	Run("250MeV");
	Run("500MeV");
	
	return;
}