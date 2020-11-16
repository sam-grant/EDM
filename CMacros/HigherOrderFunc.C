#include <iostream>
#include "FancyDraw.h"

#include "TF1.h"
#include "TCanvas.h"
#include "TLegend.h"

// Just to get an idea of what the functions look like

int main() { 

	TF1 *f1 = new TF1("f1","(-[0]/x)",0,25);
	f1->SetParameter(0,1);
	DrawTF1(f1,";x;y","../Images/MC/ToyRadialFieldScan/HigherOrder/f1");


	TF1 *f2 = new TF1("f2","(-[0]/x) + ([1]*cos([2]-[3])/(1-x))",0,25);
	//f2->SetParameters(8,10000,TMath::Pi(),TMath::Pi()/2);
	f2->SetParameters(1,1,1,1);//8,10000,TMath::Pi(),TMath::Pi()/2);
	DrawTF1(f2,";x;y","../Images/MC/ToyRadialFieldScan/HigherOrder/f2");


	TF1 *f3 = new TF1("f3","(-[0]/x) + ([1]*cos([2]-[3])/(1-x)) + ([4]*cos(2*[2]-[5])/(4-x))",0,25);
	//f3->SetParameters(8,8,TMath::Pi(),TMath::Pi()/2,1000,-TMath::Pi()/2);
	f3->SetParameters(1,1,1,1,1,1);//8,8,TMath::Pi(),TMath::Pi()/2,1000,-TMath::Pi()/2);
	DrawTF1(f3,";x;y","../Images/MC/ToyRadialFieldScan/HigherOrder/f3");

	//TF1 *f1 = new TF1("f1","(-[0]/x) + ([1]*cos([2]-[3])/(1-x)) + ([4]*cos(2*[2]-[4])/(4-x))",0,100); 
	//" + ([1]*cos([2]-[3])/(1-x)) + ([4]*cos(2*[2]-[4])/(4-x))",0,100); 
	//f1->SetParameters(8,0.8,TMath::Pi(),1,1);
	TCanvas *c1 = new TCanvas("c1","c1",800,600);

	TLegend *l1 = new TLegend(0.69,0.69,0.89,0.89);
	l1->SetBorderSize(0);
	l1->AddEntry(f1,"1st Order");
	l1->AddEntry(f2,"2nd Order");
	l1->AddEntry(f3,"3rd Order");

	f3->SetTitle(";QHV [kV];#deltay [mm]");

	f1->SetLineColor(kBlack);
	f2->SetLineColor(kRed);
	f3->SetLineColor(kBlue);

	f1->SetLineWidth(3);
	f2->SetLineWidth(3);
	f3->SetLineWidth(3);

	f3->Draw();
	f2->Draw("same");
	f1->Draw("same");

	l1->Draw("same");

	c1->SaveAs("../Images/MC/ToyRadialFieldScan/HigherOrder/FuncOverlay.pdf");

	

	return 0;
}