// Sam Grant 2022
// - Linear fits to <theta_y> vs p for each station in simulation samples where the tracker has been shifted by some offset;
// - Fit to vertical slope vs tracker vertical offset;
// - Linear fits to <theta_y> vs p in each Run-1 dataset;
// - Plot extrapolated vertical slope vs offset for each dataset;
// - These offsets can be used in the reconstruction of our acceptance maps;

// Globals
double xmin = 0; double xmax = 3000;

#include "Utils.h"

// Reset graph range (can't use SetRangeUser because sometimes I like to plot with "L" option)
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

// Draw <theta_y> vs p for both simulation offsets
void DrawSimThetaYvsMomFits(TGraphErrors *gr0, TGraphErrors *gr1, string stn, string fname, double ymin, double ymax) { 

  	cout<<"\n---> Drawing per station offsets (sim)"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.75, 0.50, 0.89); 
	
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr0->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr0->GetXaxis()->SetTitleSize(.04);
  	gr0->GetYaxis()->SetTitleSize(.04);
  	gr0->GetXaxis()->SetTitleOffset(1.1);
  	gr0->GetYaxis()->SetTitleOffset(1.15);
  	gr0->GetXaxis()->CenterTitle(true);
  	gr0->GetYaxis()->CenterTitle(true);
  	gr0->GetYaxis()->SetMaxDigits(4);

  	gr0->SetTitle((stn+";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV").c_str());

  	gr0->SetMarkerColor(kBlack);
  	gr0->SetLineColor(kBlack);
	gr0->SetMarkerStyle(20);  
 
  	gr1->SetMarkerColor(kRed);
  	gr1->SetLineColor(kRed);
	gr1->SetMarkerStyle(20);

	gr0->Draw("AP");
	gr1->Draw("P SAME");

	// Get fits
	TF1* fit0 = (TF1*)gr0->GetFunction("fit");
	TF1* fit1 = (TF1*)gr1->GetFunction("fit");

	fit0->SetLineColor(kBlack);
	fit1->SetLineColor(kRed);

	fit0->Draw("SAME");
	fit1->Draw("SAME");

	l->AddEntry(gr0, "0 mm");
	if(stn=="S12") l->AddEntry(gr1, "#plus1 mm");
	else if(stn=="S18") l->AddEntry(gr1, "#minus1 mm");

 	l->Draw("SAME");


  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}

// Draw <theta_y>/p vs tracker offset
void DrawSimSlopeFits(TGraphErrors *graph, std::string title, std::string fname, double xmin, double xmax, double ymin, double ymax) {

	cout<<"\n---> Drawing slope fits (sim)"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// Dummy graph because of ridiculous ROOT range issues
	TGraph *dummy = new TGraph();
	dummy->SetPoint(0, xmin, 0);
	dummy->SetPoint(1, xmax, 0);
	dummy->SetMarkerSize(0);	
	dummy->GetYaxis()->SetRangeUser(ymin, ymax);

	dummy->GetXaxis()->SetTitleSize(.04);
	dummy->GetYaxis()->SetTitleSize(.04);
	dummy->GetXaxis()->SetTitleOffset(1.1);
	dummy->GetYaxis()->SetTitleOffset(1.2);
	dummy->GetXaxis()->CenterTitle(true);
	dummy->GetYaxis()->CenterTitle(true);
	dummy->GetYaxis()->SetMaxDigits(4);
	dummy->SetTitle(title.c_str());
	dummy->Draw("AP");
	
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("P SAME");

	// Get fit params
	double p0 = graph->GetFunction("fit")->GetParameter(0);
	double p1 = graph->GetFunction("fit")->GetParameter(1);
	double e0 = graph->GetFunction("fit")->GetParError(0);
	double e1 = graph->GetFunction("fit")->GetParError(1);

	TPaveText *names = new TPaveText(0.11,0.75,0.65,0.89,"NDC");
  	names->SetTextAlign(13);
  	names->AddText("Gradient"); // [rad#upointMeV^{-1}#upointm^{-1}]"); 
    names->AddText("Y-intercept"); // [mrad#upointMeV^{-1}]"); 

 	TPaveText *values = new TPaveText(0.75, 0.74, 0.70, 0.89,"NDC");
  	values->SetTextAlign(33);
  	values->AddText(Round(p0, 2)+"#pm"+Round(e0, 1));
  	values->AddText(Round(p1, 3)+"#pm"+Round(e1, 3));

  	names->SetTextSize(26);
  	names->SetTextFont(44);
  	names->SetFillColor(0);
  	values->SetFillColor(0);
  	values->SetTextFont(44);
  	values->SetTextSize(26);

  	names->Draw("SAME");
  	values->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawDataThetaYvsMomFits(vector<TGraphErrors*> gr_, vector<string> names_, string title, string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TLegend *l = new TLegend(0.11,0.60,0.49,0.89);
	l->SetBorderSize(0);

	gr_.at(0)->SetTitle(title.c_str());
	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetXaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->SetMaxDigits(4);
	gr_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	//kWhite  = 0,   kBlack  = 1,   kGray    = 920,  kRed    = 632,  kGreen  = 416,
	//kBlue   = 600, kYellow = 400, kMagenta = 616,  kCyan   = 432,  kOrange = 800,
	//kSpring = 820, kTeal   = 840, kAzure   =  860, kViolet = 880,  kPink   = 900

	vector<int> colours_ = {4, 807, 413, 614};

	for(int i = 0; i < gr_.size(); i++) {

    	gr_.at(i)->SetMarkerStyle(20);
    	gr_.at(i)->SetMarkerColor(colours_.at(i));
    	gr_.at(i)->SetLineColor(colours_.at(i));
    	
    	l->AddEntry(gr_.at(i), (names_.at(i)).c_str());
      	if(i==0) gr_.at(i)->Draw("AP");
      	else gr_.at(i)->Draw("P SAME");

      	TF1 *fit = gr_.at(i)->GetFunction("fit");
      	fit->SetLineColor(colours_.at(i));
      	fit->Draw("SAME");

  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void VerticalOffsetSlope2(string dataConfig = "_timeVertCorr") { 

	// Holder for <theta_y>/y vs offset fits
	vector<TF1*> offsetFunc_;
	vector<TFitResultPtr> offsetFrp_;

	vector<string> stn_ = {"S12", "S18"};

	for(auto& stn : stn_) { 

		// 0 and 1 refer to the mm offsets 
		TString finName0 = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm.root";
		TFile *fin0 = TFile::Open(finName0);

		TString finName1 = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm.root";
		TFile *fin1 = TFile::Open(finName1);

		cout<<"\n---> Opened sim file "<<finName0<<", "<<fin0<<", "<<finName1<<", "<<fin1<<endl;

		// Simulation graphs
		TGraphErrors *gr0 = ResetGraph((TGraphErrors*)fin0->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_c_vs_p_thetaY").c_str()), xmin, xmax);
		TGraphErrors *gr1 = ResetGraph((TGraphErrors*)fin1->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_c_vs_p_thetaY").c_str()), xmin, xmax);	
		
		cout<<"\n---> Got sim graphs: "<<gr0<<", "<<gr1<<endl;

		// Fit 
		cout<<"\n---> Fitting sim graphs"<<endl;

		double xlo = gr0->GetX()[0];
		if(xlo>gr1->GetX()[0]) xlo = gr1->GetX()[0];

		double xhi = gr0->GetX()[gr0->GetN()-1];
		if(xhi<gr1->GetX()[gr1->GetN()-1]) xhi = gr1->GetX()[gr1->GetN()-1];

		// x-pos are slightly different in each one
		TF1 *fit = new TF1("fit", "[0]+[1]*x", xlo, xhi);
		gr0->Fit(fit, "QR");
		gr1->Fit(fit, "QR");

		// Draw
		double ymin; double ymax;
		if(stn=="S12") ymin = -0.55; ymax = 0.0;
		if(stn=="S18") ymin = -0.4; ymax = -0.05;
		
		DrawSimThetaYvsMomFits(gr0, gr1, stn,  "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_AvgThetaYvsMomFitsSim", ymin, ymax);//-0.7, 0.02);

		// Get fits and slopes
		TF1 *fit0 = (TF1*)gr0->GetFunction("fit");
		TF1 *fit1 = (TF1*)gr1->GetFunction("fit");

		double slope0 = fit0->GetParameter(1);
		double slope1 = fit1->GetParameter(1);
		double error0 = fit0->GetParError(1);
		double error1 = fit1->GetParError(1);

		cout<<"\nStation :\t"<<stn<<endl;
		cout<<"Slope (0 mm) :\t"<<slope0<<"±"<<error0<<endl;
		cout<<"Slope (1 mm) :\t"<<slope1<<"±"<<error1<<endl;


		TGraphErrors *gr_slopes = new TGraphErrors();

		double x0; double x1;
		//double xlo; double xhi;

		// Since S12 goes 0, +1 and S18 goes -1, 0 there isn't a cleaner way of doing this.
		// Ranges get confusing

		// Reusing the xlo, xhi variables in a sloppy manner but I think it's fine

		if(stn=="S12") {

			x0 = 0; x1 = 1;
			ymin = 0.2E-3; ymax = 0.28E-3;
			xlo = -0.25; xhi = 1.25;

			gr_slopes->SetPoint(0, x0, slope0);
			gr_slopes->SetPoint(1, x1, slope1);
			gr_slopes->SetPointError(0, 0, error1);
			gr_slopes->SetPointError(1, 0, error0);

			fit->SetRange(x0,x1);

		} else if(stn=="S18") {

			x0 = 0; x1 = -1;
			ymin = 0.1E-3; ymax = 0.19E-3;
			xlo = -1.25; xhi = 0.25;

			gr_slopes->SetPoint(0, x0, slope0);
			gr_slopes->SetPoint(1, x1, slope1);
			gr_slopes->SetPointError(0, 0, error1);
			gr_slopes->SetPointError(1, 0, error0);

			fit->SetRange(x1,x0);

		}

		// Fit slope

		cout<<"\n---> Fitting slope graphs"<<endl;

		gr_slopes->Fit(fit, "QR");
		offsetFunc_.push_back(fit);

		TFitResultPtr frp = gr_slopes->Fit(fit,"SMQR");
		offsetFrp_.push_back(frp);
		
		DrawSimSlopeFits(gr_slopes, stn+";Tracker alignment vertical offset [mm];#LT#theta_{y}#GT/p [mrad/MeV]", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_SlopeFitSim", xhi, xlo, ymin, ymax);

		fin0->Close();
		fin1->Close();

	}

	//---------------------------------------------------------------------------------------------------------------------------------//
	//---------------------------------------------------------------------------------------------------------------------------------//

	// Now for data
	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};

	int i_stn = 0;

	cout<<"Station, Dataset, Vertical offset [mm], Error [mm]"<<endl;

	for(auto& stn : stn_) {

		vector<TGraphErrors*> gr_; 

		for(auto& ds : ds_) {

			TString finName = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_BQ"+dataConfig+".root";
			TFile *fin = TFile::Open(finName);

			//cout<<"Opened file "<<finName<<", "<<fin<<endl;

			TGraphErrors *gr = ResetGraph( (TGraphErrors*)fin->Get( ("MomentumBinnedAnalysis/ParameterScans/"+stn+"_c_vs_p").c_str() ) , xmin, xmax);

			TF1 *fit = new TF1("fit", "[0]+[1]*x", gr->GetX()[0], gr->GetX()[gr->GetN()-1]);

			gr->Fit(fit, "QR");

			gr_.push_back(gr);

			// Calculate offset
			TF1 *slopeFit = offsetFunc_.at(i_stn);
			TFitResultPtr frp = offsetFrp_.at(i_stn);

			double p0 = slopeFit->GetParameter(0);
			double e0 = slopeFit->GetParError(0);
			double p1 = slopeFit->GetParameter(1);
			double e1 = slopeFit->GetParError(1);

			double slope = fit->GetParameter(1);
			double slope_err = fit->GetParError(1);

			// 0 mm S12 
			// p1 = 0.000232807;
			//  +1 mm S12
			//p1 = 2.42160e-04;
			
			// Station :	S12
			// Slope (0 mm) :	0.000232807±1.67047e-05
			// Slope (1 mm) :	0.00024216±1.68306e-05

			// Station :	S18
			// Slope (0 mm) :	0.000150762±1.70084e-05
			// Slope (1 mm) :	0.000131016±1.72665e-05

			// Does this make sense?
			// y = mx + c
			// slope = p1x + p0
			// slope - p0 = p1x 
			// x = (slope - p0) / p1

			// WE have a massive offset and even massiver error

			double offset = (slope - p0) / p1;
			double offset_err = sqrt( pow(1/p1, 2)*pow(slope_err,2) + pow(-1/p1, 2)*pow(e0, 2)  + pow( -(slope-p0)/pow(p1,2) , 2)*pow(e1,2) - 2*(-1/p0)*(-(slope-p0)/pow(p1,2))*frp->GetCovarianceMatrix()(0,1));

			cout<<stn<<", "<<ds<<", "<<offset<<", "<<offset_err<<endl;
			// From Taylor 9.9
			// double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

			fin->Close();

		}

		DrawDataThetaYvsMomFits(gr_, ds_, stn+";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_AvgThetaYvsMomFitsData", -1, 0.5);
		
	}

	

	return;

}

/*Station, Dataset, Vertical offset [mm], Error [mm]

S12, Run-1a, 12.6889, 32.2976
S12, Run-1b, 11.9061, 30.3107
S12, Run-1c, 23.1748, 58.8422
S12, Run-1d, 36.8448, 93.4857

S18, Run-1a, 14.9119, 37.9249
S18, Run-1b, 9.1374, 23.316
S18, Run-1c, 19.0542, 48.4035
S18, Run-1d, 33.9083, 86.0426*/