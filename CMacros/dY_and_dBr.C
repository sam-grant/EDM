#include <iostream>
#include <vector>

#include "TFile.h"
#include "TAxis.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TGraphErrors.h"
#include "TF1.h"

using namespace std;

string ThreeSigFig(double num) { 
  return Form("%5.3g", num);
}

void DrawFits(vector<TGraphErrors*> graphs, vector<string> names, string func, string title, string fname, double ymin, double ymax) {

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
	graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);
	//graphs.at(0)->GetXaxis()->SetRangeUser(0,1);

	TLegend *l = new TLegend(0.81,0.35,0.99,0.65);

	l->SetBorderSize(0);
	l->SetHeader("QHV [kV]","C");

	//double field = 
	// Load legend entries backwards
	//cout<<"Loading legend entries"<<endl;
/*	for( int i = graphs.size()-1; i>-1; i--) {
		//cout<<BR_APP[i]<<endl;
		l->AddEntry(graphs.at(i), FormatNegativeNumber(BR_APP[i])+" ppm");
	}*/
	
	for(int i = 0; i < graphs.size(); i++) {
		//cout<<"Getting function\t";
		TF1 *fit = graphs.at(i)->GetFunction(func.c_str());
		//cout<<fit<<endl;
		//it->SetLineColor(kBlack);
		l->AddEntry(graphs.at(i), (names.at(i)).c_str() );
		
		graphs.at(i)->SetMarkerStyle(20);

    	if(i+1 != 5) {
    		fit->SetLineColor(i+1); 
      		graphs.at(i)->SetMarkerColor(i+1); // Stop that yellow colour at all costs
      		graphs.at(i)->SetLineColor(i+1);
    	} else {
    		fit->SetLineColor(kOrange-3); 
    		graphs.at(i)->SetMarkerColor(kOrange-3);
    		graphs.at(i)->SetLineColor(kOrange-3);
    	}		

		if(i==0) graphs.at(0)->Draw("AP");
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

TGraphErrors *Y_vs_Br(TFile *input, double QHV) { 

	int fields[6] = {50, 30, 10, -10, -30, -50};

	vector<double> y_; vector<double> ey_;
	vector<double> x_; 

	for (int i_field = 0; i_field < 6; i_field++) { 

		// Get quad scan for that field setting
		TGraphErrors *gr = (TGraphErrors*)input->Get(("quadFits/"+to_string(fields[i_field])+"_ppm").c_str());

		// Get <y> for 18 kV 

		for (int i_point = 0; i_point < gr->GetN(); i_point++ ) {

			double qhv = 1/gr->GetPointX(i_point);

			if(qhv > QHV-0.5 && qhv < QHV+0.5) {

				x_.push_back(fields[i_field]); 
				y_.push_back(gr->GetPointY(i_point)); ey_.push_back(gr->GetErrorY(i_point));

			}

		}

	}

	int n = y_.size();
	double x[n]; double ex[n];
	double y[n]; double ey[n];

	for(int i_point = 0; i_point<n; i_point++) {


		x[i_point] = x_.at(i_point); ex[i_point] = 0.;
		y[i_point] = y_.at(i_point); ey[i_point] = ey_.at(i_point);
	}

	return new TGraphErrors(n, x, y, ex, ey);


}

int main() { 

	// Get file for reprocessed scan 2 (current best)

	TFile *input = TFile::Open("../Plots/Data/RadialFieldScan_2/fits.root");

	double QHVs[4] = {14.0, 16.0, 18.0, 19.5};

	vector<TGraphErrors*> gr_; 
	vector<string> names_; 

	for (int i_quad = 0; i_quad < 4; i_quad++) {
		TGraphErrors *gr = Y_vs_Br(input, QHVs[i_quad]);
		TF1 *fit = new TF1("fit", "[0]+[1]*x");
		gr->Fit(fit);
		gr_.push_back(gr);
		names_.push_back(ThreeSigFig(QHVs[i_quad]));
	}

	DrawFits(gr_, names_, "fit", ";#LTB_{r}^{App}#GT;#LTy#GT [mm]", "../Images/tmp", 71, 79);

	for (int i_gr = 0; i_gr < gr_.size(); i_gr++) { 

		double grad = gr_.at(i_gr)->GetFunction("fit")->GetParameter(1);
		double egrad = gr_.at(i_gr)->GetFunction("fit")->GetParError(1);
		cout<<"Grad\t"<<grad<<"±"<<egrad<<endl;

		// Calc
		double grad_calc = 1.0 / QHVs[i_gr];
		cout<<grad_calc<<endl;


	}
	
	

	return 0;

}


/*void DrawFits(vector<TGraphErrors*> graphs, vector<string> names, string title, string fname, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	l->SetBorderSize(0);

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
	graphs.at(0)->Draw("AP");

	for(int i = 0; i < graphs.size(); i++) {
		//graphs.at(i)->SetMarkerStyle(20)
		l->AddEntry(graphs.at(i), (names.at(i)).c_str() );
		graphs.at(i)->SetMarkerColor(i+1);
		graphs.at(i)->SetLineColor(i+1);
		graphs.at(i)->Draw("P SAME");
	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}*/