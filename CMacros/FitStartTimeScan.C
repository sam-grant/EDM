// Just re-fit the no-mod blinded dists.
#include "Utils.h"

double tmax = 92*G2PERIOD;

TGraphErrors *ResetGraph(TGraphErrors *grIn, double xmin, double xmax) {

	TGraphErrors *grOut = new TGraphErrors();
	int count = 0;
	
	for(int i(0); i<grIn->GetN(); i++) { 

		double x = grIn->GetX()[i];
		double y = grIn->GetY()[i];
		double ey = grIn->GetEY()[i];   

    	if(x<xmin || x>xmax) continue;

    	grOut->SetPoint(count, x, y);
    	grOut->SetPointError(count, 0., ey);  

    	count++;

	}


	return grOut;

}

void DrawFitStartTimeScan(TGraphErrors *graph, TGraph *plus, TGraph *minus, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(2);
	graph->SetMarkerStyle(20); //  Full circle

/*	plus->SetTitle(title.c_str());
	plus->GetXaxis()->SetTitleSize(.04);
	plus->GetYaxis()->SetTitleSize(.04);
	plus->GetXaxis()->SetTitleOffset(1.1);
	plus->GetYaxis()->SetTitleOffset(1.2);
	plus->GetXaxis()->CenterTitle(true);
	plus->GetYaxis()->CenterTitle(true);
	plus->GetYaxis()->SetMaxDigits(4);
*/	//plus->SetMarkerStyle(20); //  Full circle
	graph->Draw("AP");
	//c->SetGridx();

	plus->SetLineColor(kRed);
	minus->SetLineColor(kRed);

	plus->Draw("C SAME");
	minus->Draw("C SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void Run(string dataset = "Run-1a") { 
	
	TString finName = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+dataset+"_250MeV_1000_2500MeV_randomised_BQ.root";
	TFile *fin = TFile::Open(finName);

	cout<<"---> Got file "<<finName<<", "<<fin<<endl;

	TGraphErrors *gr_wiggle = (TGraphErrors*)fin->Get("Wiggle/ModuloWiggle");
	TGraphErrors *gr_edm = (TGraphErrors*)fin->Get("SimultaneousAnalysis/S12S18_edmFit_noMod");

	cout<<"---> Got graphs "<<gr_wiggle<<", "<<gr_edm<<endl;

	// Get original fits
	TF1 *fit_wiggle = gr_wiggle->GetFunction("FiveParFunc");
	TF1 *fit_edm = gr_edm->GetFunction("FullEDMFunc");

	// Purge orginal fits
	gr_wiggle->GetListOfFunctions()->Remove(fit_wiggle);
	gr_edm->GetListOfFunctions()->Remove(fit_edm);

	cout<<"---> Got fits "<<fit_wiggle<<", "<<fit_edm<<endl;

	double phi = fit_wiggle->GetParameter(4);

	cout<<"---> Phase = "<<phi<<" rad"<<endl;

	TGraphErrors *gr_scan = new TGraphErrors();

	for(int i(0); i<21; i++) { 

		double tmin = (7+i)*G2PERIOD;

		cout<<"---> i "<<i<<endl;
		cout<<"---> tmin "<<tmin<<endl;

		FullEDMFit(gr_edm, 0, OMEGA_A, phi, 0, 0, tmin, tmax);

		cout<<gr_edm->GetFunction("FullEDMFunc")<<endl;

		double AEDM = gr_edm->GetFunction("FullEDMFunc")->GetParameter(3);
		double eAEDM = gr_edm->GetFunction("FullEDMFunc")->GetParError(3);

		gr_scan->SetPoint(i, tmin, AEDM);
		gr_scan->SetPointError(i, 0, eAEDM);

		gr_edm->GetListOfFunctions()->Remove(gr_edm->GetFunction("FullEDMFunc"));

		cout<<"tmin "<<tmin<<endl;

	}	

	// Kawall bands 

	TGraph *gr_plus = new TGraph();
	TGraph *gr_minus = new TGraph();

	double A_initial = gr_scan->GetY()[0];

	//cout<<"initial_y = "<<initial_y<<endl;

	double sigma_0 = gr_scan->GetEY()[0];

	for(int i(0); i<gr_scan->GetN(); i++) {

		double t = gr_scan->GetX()[i];

		// 2 denotes the smaller dataset

		double A_1 = gr_scan->GetY()[i];
		double A_2 = gr_scan->GetY()[i+1];

		//double sigma_1 = gr_scan->GetEY()[i];
		double sigma_2 = gr_scan->GetEY()[i];

		double sigma_diff = sqrt(pow(sigma_2,2)-pow(sigma_0,2));

		//cout<<"t = "<<t<<endl;
		//cout<<"A_1 = "<<A_1<<endl;
		//cout<<"A_2 = "<<A_2<<endl;
		//cout<<"sigma_1 = "<<sigma_1<<endl;
		//cout<<"sigma_2 = "<<sigma_2<<endl;
		//cout<<"sigma_diff = "<<sigma_diff<<endl;
		// don't understadn
		//double sigma_diff = sqrt(pow(sigma_1,2)-pow(sigma_2,2));
	/*	double sigma_diff = sqrt(pow(sigma_2,2)+pow(sigma_1,2));*/

		//cout<<"\n"<<sigma_1<<endl;
		//cout<<sigma_2<<endl;
		//cout<<sigma_diff<<endl;
//

		//double kawall = sqrt(pow(sigma_2,2)-pow(sigma_1,2)*(2*(A_1/A_2)-1));
		//double kawall = sqrt(pow(sigma_2,2)-pow(sigma_1,2));//*(2*(A_1/A_2)-1));
		//double kawall = sqrt(pow(sigma_2,2)+pow(sigma_1,2)*(2*(A_1/A_2)-1));
			gr_plus->SetPoint(i, t, A_initial+(sigma_diff));//+(sigma_diff/2));
			gr_minus->SetPoint(i, t, A_initial-(sigma_diff));
/*		if(i==0) {
			gr_plus->SetPoint(i, t, A_initial);//+(sigma_diff/2));
			gr_minus->SetPoint(i, t, A_initial);//-(sigma_diff/2));
		} else {
			gr_plus->SetPoint(i, t, A_initial+(sigma_diff));//+(sigma_diff/2));
			gr_minus->SetPoint(i, t, A_initial-(sigma_diff));//-(sigma_diff/2));
		}*/

	}	

	//gr_plus->Draw();

	//gr_scan = ResetGraph(gr_scan, gr_scan->GetX()[0], gr_scan->GetX()[gr_scan->GetN()-2]);

	DrawFitStartTimeScan(gr_scan, gr_plus, gr_minus, dataset+";Fit start time [#mus]; A_{EDM}^{BLIND} [mrad]", "../Images/Data/dMu/Run-1/Scans/FitStartTime_"+dataset);

	// Refit 

	fin->Close();

	return;

}

void FitStartTimeScan() { 

	Run("Run-1a");
	Run("Run-1b");
	Run("Run-1c");
	Run("Run-1d");

	return;

}
