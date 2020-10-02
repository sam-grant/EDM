// ======================================================= //
// Toy quad scan for radial field measurement


// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>

// Custom includes
#include "FancyDraw.h"
#include "Utils.h"

// ROOT includes
#include "TFile.h"
#include "TH1.h"
#include "TGraphErrors.h"
#include "TLegend.h"
#include "TRandom3.h"

// =========== Initialise parameters =========== 
const int N_quad = 2;
const int N_field = 4;
const double Br_res = 8; // ppm, the size of the field that would kill our measurement
const double sigma = 0.0247454; // [mm] 50 sub-runs worth of data, for mean calo pos y unc
const double QHV[N_quad] = {16, 20}; // Two quad settings, kV
const double Br_app[N_field] = {-30, -10, 10, 30}; // Applied radial field, ppm

void DrawQuadScanFits(std::vector<TGraphErrors*> graphs, std::string title, std::string fname, double ymin, double ymax, std::string func ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	graphs.at(0)->SetTitle(title.c_str());
	graphs.at(0)->GetXaxis()->SetTitleSize(.04);
	graphs.at(0)->GetYaxis()->SetTitleSize(.04);
	graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetXaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->SetMaxDigits(4);
	//graphs.at(0)->SetMarkerStyle(20); //  Full circle
	graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	//l->SetHeader("Applied B_{r}");
	l->SetBorderSize(0);
	// Load legend entries backwards
	for( int i = graphs.size()-1; i>-1; i--) {
		l->AddEntry(graphs.at(i), FormatNegativeNumber(Br_app[i])+" ppm");
	}
	
	for(int i = 0; i < graphs.size(); i++) {
		
		TF1 *fit = graphs.at(i)->GetFunction(func.c_str());
		fit->SetLineColor(kBlack);
		fit->SetLineColor(i+1); 
			graphs.at(i)->SetMarkerColor(i+1);
			graphs.at(i)->SetLineColor(i+1);
		if(i==0) graphs.at(i)->Draw("AP");
		else {

			graphs.at(i)->Draw("P SAME");
			
		}
		fit->Draw("same");
	}
	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawRadialFieldLineFit(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->Draw();
	gPad->Update();

	// Get function
	TF1 *func = graph->GetFunction("lineFit2");

	func->SetLineWidth(2);
	func->SetLineColor(kRed);

	double chi2ndf = func->GetChisquare() / func->GetNDF();

	std::cout<<"chi2ndf "<<chi2ndf<<std::endl;

	double par0 = func->GetParameter(0);
	double err0 = func->GetParError(0);
	double par1 = func->GetParameter(1);
	double err1 = func->GetParError(1);

	double xint = - par0 / par1;

	TPaveText *names = new TPaveText(0.50,0.69,0.69,0.88,"NDC");
	names->SetTextAlign(13);
	names->AddText("#chi^{2}/ndf"); 
	names->AddText("Residual B_{r} [ppm]"); 

	TPaveText *values = new TPaveText(0.69,0.69,0.89,0.89,"NDC");
	values->SetTextAlign(33);

	values->AddText(SciNotation(chi2ndf));
	values->AddText(ThreeSigFig(xint));

	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(26);


	//TLegend *function = new TLegend(0.11,0.79,0.45,0.89);//,"NDC");
	//function->AddEntry(func,"B_{r} = A_{EDM} sin(#omega_{a}t) + c") ;
	//function->SetBorderSize(0);

	TLine *x_line = new TLine(gPad->GetUxmin(),0,xint,0);
	x_line->SetLineStyle(2);
	x_line->SetLineWidth(2);
	TLine *y_line = new TLine(xint,gPad->GetUymin(),xint,0);//xint);
	y_line->SetLineStyle(2);
	y_line->SetLineWidth(2);

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
	values->Draw("same");
	names->Draw("same");
	x_line->Draw("same");
	y_line->Draw("same");
	func->Draw("same");
	

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

// Just put this in a function so it can be easily expanded
double yPosition(double Br_true, double QHV) {
	return Br_true / QHV;
}

int main() {

	TRandom3 random;

	std::vector<TGraphErrors*> scans;
	// Not nice 
	double slopes[N_field];
	double slope_errs[N_field];
	double holder[N_field];

	// =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_field; i_field++ ) {

		// Printout
		std::cout<<"\nScan number:\t"<<i_field<<std::endl;
		std::cout<<"Br setting:\t"<<Br_app[i_field]<<" ppm"<<std::endl; 
		std::cout<<"True Br:\t"<<Br_app[i_field]-Br_res<<" ppm"<<std::endl;

		double Br_true = Br_app[i_field]-Br_res;

		// Average vertical position
		double y[N_quad];
		double ey[N_quad];
		double x[N_quad];
		double ex[N_quad];

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_quad; i_quad++ ) {

			// Printout
			std::cout<<"QHV "<<i_quad<<":\t\t"<<QHV[i_quad]<<" kV"<<std::endl;

			double yPos =  yPosition( Br_true, QHV[i_quad]);
			// Calculate y 
			y[i_quad] = yPos;
			// Smear y_err
			// TODO: Need to generate some events and get a sigma out
			ey[i_quad] = 0.0247454; // // 50 sub-runs worth // abs(random.Gaus(yPos,0.0247454)); 
			// Need to smear li

			std::cout<<"y[i_quad]:\t"<<y[i_quad]<<std::endl;
			std::cout<<"ey[i_quad]:\t"<<ey[i_quad]<<std::endl;

			x[i_quad] = QHV[i_quad];
			ex[i_quad] = 0;


		}

		TGraphErrors *scan = new TGraphErrors(N_quad,x,y,ex,ey);
		scan->SetName((std::to_string(Br_app[i_field])+" ppm").c_str());

		// Fit
		TF1 *lineFit = new TF1("lineFit", "pol 1");
		scan->Fit(lineFit);
		scans.push_back(scan);
		
		slopes[i_field] = lineFit->GetParameter(1);
		slope_errs[i_field] = lineFit->GetParError(1);
		holder[i_field] = 0;


	} 

	DrawQuadScanFits(scans, ";QHV [kV];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/Scans",-3,2,"lineFit");

	TGraphErrors *result = new TGraphErrors(N_field,Br_app,slopes,holder,slope_errs);
	TF1 *lineFit2 = new TF1("lineFit2", "pol 1");
	lineFit2->SetLineColor(kRed);
	result->Fit(lineFit2);
	DrawRadialFieldLineFit(result,";Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]","../Images/MC/ToyRadialFieldScan/Result");

	return 0;
}