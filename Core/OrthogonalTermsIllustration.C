#include "Utils.h"

void DrawOverlay(TF1 *f0, TF1 *f1, TF1 *f2, TF1 *f3, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	f1->SetTitle(title.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
	f0->GetXaxis()->SetTitleSize(.04);
	f0->GetYaxis()->SetTitleSize(.04);
	f0->GetXaxis()->SetTitleOffset(1.1);
	f0->GetYaxis()->SetTitleOffset(1.1);
	f0->GetXaxis()->CenterTitle(1);
	f0->GetYaxis()->CenterTitle(1);
	f0->GetYaxis()->SetMaxDigits(4);
	f0->GetYaxis()->SetRangeUser(-3,3);//MaxDigits(4);
	f0->GetXaxis()->SetLimits(0,1);

	gPad->Update();

	f0->SetLineWidth(3);
	f0->SetLineColor(kBlack);

	f1->SetLineWidth(3);
	f1->SetLineColor(kMagenta);
	f1->SetLineStyle(kDashed);//kBlack);

	f2->SetLineWidth(3);
	f2->SetLineColor(kRed);
	f2->SetLineStyle(kDashed);//kBlack);

	f3->SetLineWidth(3);
	f3->SetLineColor(kBlue);
	f3->SetLineStyle(kDashed);
	//c->SetRightMargin(0.13);

	TLegend *l = new TLegend(.39, .69, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(26);
	l->SetTextFont(44);

	l->AddEntry(f0, "#frac{1}{N(t)}(A_{g-2}cos(#omega_{a}t) + A_{EDM}sin(#omega_{a}t))");
	l->AddEntry(f1, "A_{g-2}cos(#omega_{a}t) + A_{EDM}sin(#omega_{a}t)");
	l->AddEntry(f2, "A_{g-2}cos(#omega_{a}t)");
	l->AddEntry(f3, "A_{EDM}sin(#omega_{a}t)");
	
	f0->Draw();//"SAME");
	f1->Draw("SAME");
	l->Draw("SAME");
	f2->Draw("SAME");
	f3->Draw("SAME");

/*   	TAxis* a = f1->GetXaxis();
   	a->SetNdivisions(-502);
   	a->ChangeLabel(2, -1,-1,-1,-1,-1,"#pi");
   	a->ChangeLabel(-1, -1,-1,-1,-1,-1,"2#pi");*/
/*   	a->ChangeLabel(1,-1,-1,-1,-1,-1,"0");
   	a->ChangeLabel(0,-1,-1,-1,-1,-1,"#pi");
   	a->ChangeLabel(-1,-1,-1,-1,-1,-1,"2#pi");*/

/*	c->SetGrid();*/
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

void OrthogonalTermsIllustration() { 

	TF1 *f_wiggle = new TF1("f_wiggle", "exp(-x/[0])*(1+[1]*cos([2]*x))");
	f_wiggle->SetParameter(0, TAU*GMAGIC);
	f_wiggle->SetParameter(1, 1);//);
	f_wiggle->SetParameter(2, OMEGA_A);
	//f_wiggle->SetParameter(3, 1);

	TF1 *f_sin = new TF1("f_sin", "[0]*sin([1]*x)", 0, G2PERIOD);//TMath::TwoPi());

	f_sin->SetParameter(0, 1);
	f_sin->SetParameter(1, OMEGA_A);

	TF1 *f_cos = new TF1("f_cos", "[0]*cos([1]*x)", 0, G2PERIOD);

	f_cos->SetParameter(0, 1);
	f_cos->SetParameter(1, OMEGA_A);

	TF1 *f_comb = new TF1("f_comb", "[0]*cos([1]*x)+[0]*sin([1]*x)", 0, G2PERIOD);

	f_comb->Draw();
	f_comb->SetParameter(0, 1);
	f_comb->SetParameter(1, OMEGA_A);
	f_comb->Draw();
	f_comb->GetXaxis()->SetLimits(0,1);

	TF1 *f_comb2 = new TF1("f_comb2", "( [0]*cos([1]*x)+[0]*sin([1]*x) ) / ( exp(-x/[2])*(1+[3]*cos([1]*x)) )", 0, G2PERIOD);

	f_comb2->Draw();
	f_comb2->GetXaxis()->SetLimits(0,1);

	f_comb2->SetParameter(0, 1);
	f_comb2->SetParameter(1, OMEGA_A);
	f_comb2->SetParameter(2, TAU*GMAGIC);
	f_comb2->SetParameter(3, 0.5);

	DrawOverlay(f_comb2, f_comb, f_cos, f_sin, ";Time [T_{g-2}];#LT#theta_{y}#GT [arbitrary units]", "../Images/OrthogonalTermsIllustration2");//test");

	return;

}