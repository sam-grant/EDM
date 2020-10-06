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

// ==================== Initialise global parameters ====================
const int N_QUAD = 2;
const int N_FIELD = 4;
const double BR_RES = 8; // ppm, the size of the field that would kill our measurement
const int N_SUBRUNS = 8;

const int SUBRUNS[N_SUBRUNS] = {25, 50, 75, 100, 125, 150, 175, 200};
const double SIGMA[N_SUBRUNS] = {0.0456595, 0.0247454, 0.018954, 0.015932, 0.0148505, 0.0132568, 0.0120878, 0.0111837}; 
const double CTAGS[N_SUBRUNS] = {401058, 1.36725e+06, 2.32944e+06, 3.29551e+06, 3.79245e+06, 4.75873e+06, 5.72386e+06, 6.68638e+06};

const double QHV[N_QUAD] = {16, 20}; // Two quad settings, kV
const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm


// Just put this in a function so it can be easily expanded
double yPosition(double Br_true, double QHV) {
	return Br_true / QHV;
}

double BrResError(double Br, double c, double cerr, double m, double merr) {

	return Br * sqrt( pow(cerr/c, 2) + pow(merr/m, 2) );
}

// Apply guass
// From CaloMeanPos.C 

double GausSmearing(double yPos, int i_field, int i_quad, int i_subrun) {

	TRandom3 rndm;

	TH1D *hist= new TH1D("Gaus","Gaus",1000,yPos-0.1,yPos+0.1);
	//TH1D *hist; // 
	//if(yPos >= 0) hist = new TH1D("a","a",1000,yPos-(yPos*0.5),yPos+(yPos*0.5));
	//else hist = new TH1D("a","a",1000,yPos+(yPos*0.5),yPos-(yPos*0.5));

	for(int i = 0; i<CTAGS[i_subrun]; i++) {

		hist->Fill(rndm.Gaus(yPos,SIGMA[i_subrun]));

	}

	DrawTH1(hist,("Sub-runs "+std::to_string(int(SUBRUNS[i_subrun]))+", field setting "+std::to_string(int(BR_APP[i_field]))+" ppm, quad setting "+std::to_string(int(QHV[i_quad]))+" kV").c_str(),("../Images/MC/ToyRadialFieldScan/SmearingHists/hist_"+std::to_string(i_field)+"_"+std::to_string(i_quad)+"_"+std::to_string(i_subrun)).c_str());

	double result = hist->GetRMS();
	delete hist;
	return result;
}

// ==================== Custom plotting ====================

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
		l->AddEntry(graphs.at(i), FormatNegativeNumber(BR_APP[i])+" ppm");
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
	double xint_err = BrResError( xint, par0, err0, par1, err1); 

	TPaveText *names = new TPaveText(0.30,0.69,0.62,0.88,"NDC");
	names->SetTextAlign(13);
	names->AddText("#chi^{2}/ndf"); 
	names->AddText("Gradient [mm/kV#upointppm]"); 
	names->AddText("Y-intercept [mm/kV]"); 
	names->AddText("Residual B_{r} [ppm]"); 

	TPaveText *values = new TPaveText(0.69,0.68,0.89,0.89,"NDC");
	values->SetTextAlign(33);

	values->AddText(SciNotation(chi2ndf));
	values->AddText(FormatNegativeNumber(par1)+"#pm"+ThreeSigFig(err1));
	values->AddText(ThreeSigFig(par0)+"#pm"+ThreeSigFig(err0));
	values->AddText(ThreeSigFig(xint)+"#pm"+ThreeSigFig(xint_err));

	std::cout<<"xint_err\t"<<xint_err<<std::endl;

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

// ==================== Main ====================
int main() {

	TRandom3 random;

	std::vector<TGraphErrors*> scans;
	// Not nice 
	double slopes[N_FIELD];
	double slope_errs[N_FIELD];
	double holder[N_FIELD];

	// =========== Sub-runs loop =========== 
	for ( int i_subrun = 0; i_subrun < N_SUBRUNS; i_subrun++ ) {

		std::cout<<"\nSub-runs:\t"<<SUBRUNS[i_subrun]<<std::endl;

		// =========== Field setting loop =========== 
		for ( int i_field = 0; i_field < N_FIELD; i_field++ ) {
	
			// Printout
			std::cout<<"\nScan number:\t"<<i_field<<std::endl;
			std::cout<<"Br setting:\t"<<BR_APP[i_field]<<" ppm"<<std::endl; 
			std::cout<<"True Br:\t"<<BR_APP[i_field]-BR_RES<<" ppm"<<std::endl;
	
			double Br_true = BR_APP[i_field]-BR_RES;
	
			// Average vertical position
			double y[N_QUAD];
			double ey[N_QUAD];
			double x[N_QUAD];
			double ex[N_QUAD];
	
			// =========== Quad setting loop ==========
			for ( int i_quad = 0; i_quad < N_QUAD; i_quad++ ) {
	
				// Printout
				std::cout<<"QHV "<<i_quad<<":\t\t"<<QHV[i_quad]<<" kV"<<std::endl;
	
				double yPos =  yPosition( Br_true, QHV[i_quad]);
				// Calculate y 
				y[i_quad] = yPos;
	
				// Smear y_err
				ey[i_quad] = GausSmearing(yPos, i_field, i_quad, i_subrun);
	
				x[i_quad] = QHV[i_quad];
				ex[i_quad] = 0;
	
	
			}
	
			TGraphErrors *scan = new TGraphErrors(N_QUAD,x,y,ex,ey);
			scan->SetName((std::to_string(BR_APP[i_field])+" ppm").c_str());
	
			// Fit
			TF1 *lineFit = new TF1("lineFit", "pol 1");
			scan->Fit(lineFit,"Q");
			scans.push_back(scan);
			
			slopes[i_field] = lineFit->GetParameter(1);
			slope_errs[i_field] = lineFit->GetParError(1);
			holder[i_field] = 0;
	
	
		} 
	
		DrawQuadScanFits(scans, ";QHV [kV];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/Scans_NSUBRUN_"+std::to_string(SUBRUNS[i_subrun]),-3,2,"lineFit");
	
		TGraphErrors *result = new TGraphErrors(N_FIELD,BR_APP,slopes,holder,slope_errs);
		TF1 *lineFit2 = new TF1("lineFit2", "pol 1");
		lineFit2->SetLineColor(kRed);
		result->Fit(lineFit2);
		DrawRadialFieldLineFit(result,"Sub-runs "+std::to_string(SUBRUNS[i_subrun])+";Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]","../Images/MC/ToyRadialFieldScan/Result_NSUBRUN_"+std::to_string(SUBRUNS[i_subrun]));
	

	}


	return 0;
}