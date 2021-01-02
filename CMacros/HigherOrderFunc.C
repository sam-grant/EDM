#include <iostream>
#include "FancyDraw.h"

#include "TF1.h"
#include "TCanvas.h"
#include "TLegend.h"

// Just to get an idea of what the functions look like

int main() { 

	TF1 *f1 = new TF1("f1","(-[0]/0.108)",0,2*TMath::Pi());
	f1->SetParameter(0,1e-6);
	DrawTF1(f1,";x;y","../Images/MC/ToyRadialFieldScan/HigherOrder/f1");


	// TF1 *f2 = new TF1("f2","[0]*cos(x-[1])/(1-0.108)",0,2*TMath::Pi());
	TF1 *f2 = new TF1("f2","([0]*cos(x) + [1]*sin(x))/(1-0.108)",0,2*TMath::Pi());

	//f2->SetParameters(8,10000,TMath::Pi(),TMath::Pi()/2);
	f2->SetParameters(0.5e-3/3,-TMath::Pi()/2);//8,10000,TMath::Pi(),TMath::Pi()/2);
	DrawTF1(f2,";x;y","../Images/MC/ToyRadialFieldScan/HigherOrder/f2");

	/*

	TF1 *f3 = new TF1("f3","[0]*cos(2*x-[1])/(4-0.108)",0,2*TMath::Pi());
	//f3->SetParameters(8,8,TMath::Pi(),TMath::Pi()/2,1000,-TMath::Pi()/2);
	f3->SetParameters(1e-3/3,-TMath::Pi()/4);//8,8,TMath::Pi(),TMath::Pi()/2,1000,-TMath::Pi()/2);
	DrawTF1(f3,";x;y","../Images/MC/ToyRadialFieldScan/HigherOrder/f3");

	TF1 *ftot = new TF1("ftot","(-[0]/0.108) + ([1]*cos(x-[2])/(1-0.108)) + ([3]*cos(2*x-[4])/(4-0.108))",0,2*TMath::Pi());
	//f3->SetParameters(8,8,TMath::Pi(),TMath::Pi()/2,1000,-TMath::Pi()/2);
	ftot->SetParameters(1e-6,0.5e-3/3,-TMath::Pi()/2,1e-3/3,-TMath::Pi()/4);//8,8,TMath::Pi(),TMath::Pi()/2,1000,-TMath::Pi()/2);
	DrawTF1(ftot,";x;y","../Images/MC/ToyRadialFieldScan/HigherOrder/ftot");

	//TF1 *f1 = new TF1("f1","(-[0]/x) + ([1]*cos([2]-[3])/(1-x)) + ([4]*cos(2*[2]-[4])/(4-x))",0,100); 
	//" + ([1]*cos([2]-[3])/(1-x)) + ([4]*cos(2*[2]-[4])/(4-x))",0,100); 
	//f1->SetParameters(8,0.8,TMath::Pi(),1,1);
	TCanvas *c1 = new TCanvas("c1","c1",800,600);

	//TLegend *l1 = new TLegend(0.69,0.69,0.89,0.89);
	TLegend *l1 = new TLegend(0.11,0.69,0.49,0.89);
	l1->SetBorderSize(0);
	l1->AddEntry(f1,"N=0");
	l1->AddEntry(f2,"N=1");
	l1->AddEntry(f3,"N=2");
	l1->AddEntry(ftot,"Total");
	f1->SetTitle(";#theta [rad];#deltay [mm]");

	f1->SetLineColor(kGreen);
	f2->SetLineColor(kRed);
	f3->SetLineColor(kBlue);
	ftot->SetLineColor(kBlack);

	f1->SetLineWidth(3);
	f2->SetLineWidth(3);
	f3->SetLineWidth(3);

	f1->GetYaxis()->SetRangeUser(-0.35e-3,0.35e-3);
	f1->Draw();
	f2->Draw("same");
	f3->Draw("same");
	ftot->Draw("same");

	l1->Draw("same");

	c1->SaveAs("../Images/MC/ToyRadialFieldScan/HigherOrder/FuncOverlay.pdf");
	c1->SaveAs("../Images/MC/ToyRadialFieldScan/HigherOrder/FuncOverlay.png");

	*/

	return 0;
}