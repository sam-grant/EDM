#include "Utils.h"
#include <iomanip>
#include <sstream>

using namespace std;

void DrawTF1(TF1 *func, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	func->SetTitle(title.c_str());

	gStyle->SetOptStat(2210);
			
	func->GetXaxis()->SetTitleSize(.04);
	func->GetYaxis()->SetTitleSize(.04);
	func->GetXaxis()->SetTitleOffset(1.1);
	func->GetYaxis()->SetTitleOffset(1.1);
	func->GetXaxis()->CenterTitle(1);
	func->GetYaxis()->CenterTitle(1);
	func->GetYaxis()->SetMaxDigits(2);
	func->SetLineWidth(3);
	func->SetLineColor(kRed);

	func->Draw();
	
	//c->SaveAs((fname+".C").c_str());
	//c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

void DrawManyTF1(vector<TF1*> f_, string title, string fname, double ymin = 0, double ymax = 1) {

	TCanvas *c = new TCanvas("c","c",800,600);
	
	Double_t red = 0.00;
	Double_t green = 0.25;
	Double_t blue = 1.00;

	for (int i(0); i<f_.size(); i++) { 

		f_.at(i)->SetLineWidth(1);

		Int_t ci = TColor::GetFreeColorIndex();
		TColor *color = new TColor(ci, red+i*0.03, green, blue-i*0.025);

		f_.at(i)->SetNpx(1e3);
		//f_.at(i)->GetYaxis()->SetRangeUser(ymin,ymax);
		f_.at(i)->SetLineColor(ci);
		gPad->Update();

      	if(i==0) {

			f_.at(i)->SetTitle(title.c_str());
			f_.at(i)->GetXaxis()->SetTitleSize(.04);
			f_.at(i)->GetYaxis()->SetTitleSize(.04);
			f_.at(i)->GetXaxis()->SetTitleOffset(1.1);
			f_.at(i)->GetYaxis()->SetTitleOffset(1.1);
			f_.at(i)->GetXaxis()->CenterTitle(true);
			f_.at(i)->GetYaxis()->CenterTitle(true);
			f_.at(i)->GetYaxis()->SetMaxDigits(2);
			f_.at(i)->GetYaxis()->SetRangeUser(ymin,ymax);
      		f_.at(i)->Draw("L");

      	} else {

      		f_.at(i)->Draw("L SAME");


      	}
  	}

  	gPad->Update();

	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".pdf").c_str());

	delete c;

	return;

}

void DrawTH1(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.15);
	hist->GetYaxis()->SetTitleOffset(1.15);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetZaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	hist->Draw("HIST");

	//c->SetLogy();
	
	c->SaveAs((fname+".png").c_str());
	//c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());
	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.15);
	hist->GetYaxis()->SetTitleOffset(1.15);
	hist->GetZaxis()->SetTitleOffset(1.15);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetZaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	c->SaveAs((fname+".png").c_str());
	//c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

double F1(double *x, double *par) {

	double theta_y = x[0] * 1e-3; // mrad

	double norm = par[0];
	double lambda = par[1];
	double gamma = GMAGIC; 

	double C = 1+pow(gamma,2)*pow(sin(theta_y),2);

	double a = 2*gamma/15*TMath::Pi();
	double b = sqrt(lambda*(1-lambda*C));
	double c =  22*C*lambda - 16*pow(C,2)*pow(lambda,2) + 9;

	// the formula is only valid between certain values of lambda
	if(lambda*C > 1) return 0;

	else return norm*a*b*c*cos(theta_y); // don't really understand why you need a cos(theta_y)

}


void Run() { 

	double lambda = 0.5;

	double xmin = -200;
	double xmax = 200;
	
	TF1 *f1 = new TF1("F1", F1, xmin, xmax, 2);

	f1->SetParameter(0, 1.0E-4); 
	f1->SetParameter(1, lambda);

	stringstream stream; stream << std::fixed << std::setprecision(2) << lambda;	
	string lambdaStr = stream.str();

	DrawTF1(f1, "#lambda = "+lambdaStr+";#theta_{y} [mrad];Normalised units", "../Images/MC/ToyVerticalAngle/F1_lambda_"+lambdaStr);

	// numerical integration

	//TF1 *f1_I = new TF1("F1_I", F1, -200, 200, 2);

	// Get all functions in steps of 1 	
	vector<TF1*> f1_; 

	string names = "";

	// 50, 150, 250 ect.
	for(int i(50); i<(int(PMAX)-100); i=i+100) {

		lambda = i/PMAX;

		TF1 *f1_tmp = new TF1(Form("F1_%d",i), F1, xmin, xmax, 2);
		f1_tmp->SetParameter(0, 1e-4); 
		f1_tmp->SetParameter(1, lambda);

		f1_.push_back(f1_tmp);

	}	

	// Sum them together using a name string
	/*	string names = "";
	for(int i(0); i<int(PMAX); i++) {
		names += "f1_"+to_string(i)+"+f1_"+to_string(i+1)+"+";
		if(i==int(PMAX)-1) names += "f1_"+to_string(i);
	}
	cout<<names<<endl; */

	DrawManyTF1(f1_, "F1 at 50 MeV, 150 MeV, 250 MeV, ect...;#theta_{y} [mrad];Normalised units", "../Images/MC/ToyVerticalAngle/F1_overlay", 5e-4, 1e-2);

	return;

}

void VerticalAngleAvgFunc() { 

	Run();

	return;

}