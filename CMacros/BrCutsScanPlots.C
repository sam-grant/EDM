#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std; 


void DrawChiSqrPlot(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {

  TCanvas *c = new TCanvas("c","c",800,600);

  //TLegend *l = new TLegend(0.45,0.79,0.89,0.89);
  TLegend *l = new TLegend(0.15,0.79,0.59,0.89);
  l->SetNColumns(3);
  l->SetBorderSize(0);

  graphs.at(0)->SetTitle(title.c_str());
  graphs.at(0)->GetXaxis()->SetTitleSize(.04);
  graphs.at(0)->GetYaxis()->SetTitleSize(.04);
  graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetXaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->SetMaxDigits(4);
  graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

  // Hack together x-axis range
  int N = graphs.at(0)->GetN();
  double xmax = graphs.at(0)->GetPointX(N-1);// + 50;
  double xmin = graphs.at(0)->GetPointX(0);// - 50; 
  double offset = (xmax - xmin) * 0.05;
  xmin = xmin - offset; 
  xmax = xmax + offset;

  graphs.at(0)->GetXaxis()->SetRangeUser(xmin, xmax);

  int nGraphs = graphs.size();

  graphs.at(0)->SetMarkerColor(kBlack);
  graphs.at(1)->SetMarkerColor(kBlue);
  graphs.at(2)->SetMarkerColor(kRed);



  for(int i = 0; i < nGraphs; i++) {
    graphs.at(i)->SetMarkerStyle(20);
    l->AddEntry(graphs.at(i), (names.at(i)).c_str());
    if(i==0) graphs.at(i)->Draw("AP");
    else graphs.at(i)->Draw("P SAME");
  }

  l->Draw("same");

  // Draw band
  gPad->Update();

  TLine *upper = new TLine(gPad->GetUxmin(), 1.5, gPad->GetUxmax(), 1.5); 
  TLine *central = new TLine(gPad->GetUxmin(), 1.0, gPad->GetUxmax(), 1.0); 
  TLine *lower =new TLine(gPad->GetUxmin(), 0.5, gPad->GetUxmax(), 0.5); 

  upper->SetLineWidth(3);
  central->SetLineWidth(3);
  lower->SetLineWidth(3);

  upper->SetLineStyle(3);
  central->SetLineStyle(2);
  lower->SetLineStyle(3);

  upper->Draw("same");//SetLineColor(3);
  central->Draw("same");//SetLineStyle(2);
  lower->Draw("same");//SetLineStyle(3); 


  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void Br_vs_eMin(string eMax, string tMax) { 

	cout<<"Plotting Br vs eMin"<<endl;

	//string eMax = "6000";
	string eMinArr[] = {"250", "500", "750", "1000" , "1250", "1500"};//, "1750", "2000", "2250", "2500", "2750", "3000"};
	string tMinArr[] = {"0", "23", "30"}; 
	//string tMinArr[] = {"24000"}; 

	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	//vector<vector<double>> Br_; 

	// Vector of tmins, each containing a vector of tuples for Br and dBr for each eMin scan 
	//vector<<tuple<double, double>>> Br_; 
	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		//vector<tuple<double, double>> tmp1; 

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		for (int i_emin = 0; i_emin < n_eMin; i_emin++) {

			TFile *fits = TFile::Open(("../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMinArr[i_emin]+"MeV_"+eMax+"MeV_"+tMinArr[i_tmin]+"us_"+tMax+"us/fits.root").c_str());
			
			if(fits==0) {
				cout<<"\nWARNING: NO INPUT FILE"<<endl;
				cout<<eMinArr[i_emin]+" < E [MeV < "+eMax+" , "+tMinArr[i_tmin]+" ns"<<endl;
				continue;
			}

			cout<<eMinArr[i_emin]+" < E [MeV < "+eMax+", "+tMinArr[i_tmin]+" < t [ns] < "+tMax<<endl;
			cout<<"Input ROOT file\t"<<fits<<endl;
			cout<<"../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMinArr[i_emin]+"MeV_"+eMax+"MeV_"+tMinArr[i_tmin]+"us_"+tMax+"us/fits.root"<<endl;

			TGraphErrors *result = (TGraphErrors*)fits->Get("mainFit/mainFit");

			if(result==0) {
				cout<<"WARNING: NO FIT DATA"<<endl;
				continue;
			}

			TF1 *mainFit = result->GetFunction("mainFit");

			cout<<"result\t"<<result<<endl;
			cout<<"mainFit\t"<<mainFit<<endl;

			TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

			double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  			double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

 			// x-intercept 
			double Br = -p0/p1;
			Br = -Br;

			// From Taylor 9.9
			double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

			cout<<"Br = "<<Br<<" ± "<<BrErr<<" ppm"<<endl;

			//tuple<double, double> tmp2 = make_tuple(Br, BrErr);

			//tmp1.push_back(tmp2);

			// Fill vectors
			x.push_back(stod(eMinArr[i_emin])); 
			ex.push_back(0.);
			y.push_back(Br);
			ey.push_back(BrErr);

			fits->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		gr_.push_back(gr_tmp);

		//Br_.push_back(tmp1);
		//tmp1.clear();
	}


	
	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 23 #mus"); names_.push_back("t > 30 #mus");

	//names_.push_back("t > 24 #mus");
	///DrawTGraphErrors(gr_.at(0), ";t_{min} [#mus];#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_eMin_"+eMax);
	OverlayThreeGraphs(gr_, names_, ";E_{min} [MeV];#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_eMin_"+eMax+"MeV_"+tMax+"us", -3, 1.0);

	return;

}

void ChiSqr_vs_eMin(string eMax, string tMax) { 

	cout<<"Plotting Br vs chi sqr"<<endl;

	//string eMax = "6000";
	string eMinArr[] = {"250", "500", "750", "1000" , "1250", "1500"};
	string tMinArr[] = {"0", "23", "30"}; 
	//string tMinArr[] = {"24000"}; 

	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	//vector<vector<double>> Br_; 

	// Vector of tmins, each containing a vector of tuples for Br and dBr for each eMin scan 
	//vector<<tuple<double, double>>> Br_; 
	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		//vector<tuple<double, double>> tmp1; 

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		double bestChiSqr = 100;
		double chiSqrDiff = 100;
		string bestEmin = "";

		for (int i_emin = 0; i_emin < n_eMin; i_emin++) {

			TFile *fits = TFile::Open(("../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMinArr[i_emin]+"MeV_"+eMax+"MeV_"+tMinArr[i_tmin]+"us_"+tMax+"us/fits.root").c_str());
			
			if(fits==0) {
				cout<<"\nWARNING: NO INPUT FILE"<<endl;
				cout<<eMinArr[i_emin]+" < E [MeV < "+eMax+" , "+tMinArr[i_tmin]+" ns"<<endl;
				continue;
			}

			cout<<eMinArr[i_emin]+" < E [MeV < "+eMax+", "+tMinArr[i_tmin]+" < t [ns] < "+tMax<<endl;
			cout<<"Input ROOT file\t"<<fits<<endl;
			cout<<"../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMinArr[i_emin]+"MeV_"+eMax+"MeV_"+tMinArr[i_tmin]+"us_"+tMax+"us/fits.root"<<endl;

			TGraphErrors *result = (TGraphErrors*)fits->Get("mainFit/mainFit");

			if(result==0) {
				cout<<"WARNING: NO FIT DATA"<<endl;
				continue;
			}

			TF1 *mainFit = result->GetFunction("mainFit");

			double chiSqr = mainFit->GetChisquare() / mainFit->GetNDF();
			//chiSqr = chiSqr;

			//double chiSqrDiff = abs(1-chiSqr);

			// - abs(1-bestChiSqr)); 

			if(  abs(1-chiSqr) < abs(1-bestChiSqr)) {
				//if(eMinArr[i_emin]=="0") continue;
				cout<<"Emin\t"<<eMinArr[i_emin]<<endl;
				bestChiSqr = chiSqr;
				bestEmin = eMinArr[i_emin];
				cout<<abs(1-chiSqr)<<endl;
				cout<<"bestChiSqr\t"<<bestChiSqr<<endl;
			}

			cout<<"result\t"<<result<<endl;
			cout<<"mainFit\t"<<mainFit<<endl;

			cout<<"Chi sqr / NDF\t"<<chiSqr<<endl;

			//tuple<double, double> tmp2 = make_tuple(Br, BrErr);

			//tmp1.push_back(tmp2);

			// Fill vectors
			x.push_back(stod(eMinArr[i_emin])); 
			ex.push_back(0.);
			y.push_back(chiSqr);
			ey.push_back(0.);

			fits->Close();

		}

		cout<<"For tmin "<<tMinArr[i_tmin]<<", Emin of "<<bestEmin<<" MeV gives the best fit.\nChi sqr:"<<bestChiSqr<<endl;

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		gr_.push_back(gr_tmp);

		//Br_.push_back(tmp1);
		//tmp1.clear();
	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 23 #mus"); names_.push_back("t > 30 #mus");

	//names_.push_back("t > 24 #mus");
	///DrawTGraphErrors(gr_.at(0), ";t_{min} [#mus];#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_eMin_"+eMax);
	 DrawChiSqrPlot(gr_, names_, ";E_{min} [MeV];#chi^{2}/ndf", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/ChiSqr_vs_eMin_"+eMax+"MeV_"+tMax+"us", -0.5, 3.25);

	return;

}


void Br_vs_eMax() { 

	cout<<"Plotting Br vs eMax"<<endl;

	string eMin = "500";
	string eMaxArr[] = {"1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	string tMinArr[] = {"0", "24000", "30000"}; 

	int n_eMax = sizeof(eMaxArr)/sizeof(eMaxArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		for (int i_emax = 0; i_emax < n_eMax; i_emax++) {

			TFile *fits = TFile::Open(("../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMin+"MeV_"+eMaxArr[i_emax]+"MeV_"+tMinArr[i_tmin]+"ns/fits.root").c_str());
			
			cout<<eMin+" < E [MeV] < "+eMaxArr[i_emax]+" , "+tMinArr[i_tmin]+" ns"<<endl;

			if(fits==0) {
				cout<<"WARNING: input ROOT file not found"<<endl;
				continue;
			}
			cout<<"Input ROOT file\t"<<fits<<endl;

			TGraphErrors *result = (TGraphErrors*)fits->Get("mainFit/mainFit");

			//cout<<"result\t"<<result<<endl;

			if(result==0) { 
				cout<<"WARNING: graph not found"<<endl;
				continue;
			}

			TF1 *mainFit = result->GetFunction("mainFit");

			//cout<<"mainFit\t"<<mainFit<<endl;

			TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

			double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  			double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

 			// x-intercept 
			double Br = -p0/p1;

			// From Taylor 9.9
			double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

			cout<<"Br = "<<Br<<" ± "<<BrErr<<" ppm"<<endl;

			// Fill vectors
			x.push_back(stod(eMaxArr[i_emax])); 
			ex.push_back(0.);
			y.push_back(Br);
			ey.push_back(BrErr);

			fits->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		gr_.push_back(gr_tmp);

	}
	
	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	//cout<<"hello1"<<endl;
	OverlayThreeGraphs(gr_, names_, ";E_{max} [MeV];#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_eMax_eMin_"+eMin, -4.5, 5.5);
	//cout<<"hello2"<<endl;
	return;

}

void Br_vs_eWin_Fine() { 

	cout<<"Plotting Br vs eWin"<<endl;

	string eMinArr[] = {"0", "500", "1000", "1500", "2000", "2500"};//, "3000", "3500"};
	string eMaxArr[] = {"500", "1000", "1500", "2000", "2500", "3000"};//, "3500", "4000"};
	string tMinArr[] = {"0", "24000", "30000"}; 

	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	//vector<vector<double>> Br_; 

	// Vector of tmins, each containing a vector of tuples for Br and dBr for each eMin scan 
	//vector<<tuple<double, double>>> Br_; 
	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		//vector<tuple<double, double>> tmp1; 

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		for (int i_ewin = 0; i_ewin < n_eMin; i_ewin++) {

			TFile *fits = TFile::Open(("../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMinArr[i_ewin]+"MeV_"+eMaxArr[i_ewin]+"MeV_"+tMinArr[i_tmin]+"ns/fits.root").c_str());
			
			cout<<eMinArr[i_ewin]+" < E [MeV] < "+eMaxArr[i_ewin]+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<fits<<endl;

			TGraphErrors *result = (TGraphErrors*)fits->Get("mainFit/mainFit");

			TF1 *mainFit = result->GetFunction("mainFit");

			//cout<<"gr\t"<<gr<<endl;
			//cout<<"mainFit\t"<<mainFit<<endl;

			TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

			double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  			double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

 			// x-intercept 
			double Br = -p0/p1;

			// From Taylor 9.9
			double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

			cout<<"Br = "<<Br<<" ± "<<BrErr<<" ppm"<<endl;

			//tuple<double, double> tmp2 = make_tuple(Br, BrErr);

			//tmp1.push_back(tmp2);

			// Fill vectors
			double window = stod(eMinArr[i_ewin]) + (stod(eMaxArr[i_ewin]) - stod(eMinArr[i_ewin]))/2;
			x.push_back(window); 
			ex.push_back(0.);
			y.push_back(Br);
			ey.push_back(BrErr);

			fits->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		gr_.push_back(gr_tmp);
		//cout<<"hello"<<endl;

		//Br_.push_back(tmp1);
		//tmp1.clear();
	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E_{window} [MeV]: in range E #minus 250 < E < E #plus 250 MeV;#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_eWin_Fine", -4, 6.5);

	return;

}

void Br_vs_eWin_Coarse() { 

	cout<<"Plotting Br vs eWin"<<endl;

	string eMinArr[] = {"0", "1000", "2000", "3000"};
	string eMaxArr[] = {"1000", "2000", "3000", "4000"};
	string tMinArr[] = {"0", "24000", "30000"}; 

	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	//vector<vector<double>> Br_; 

	// Vector of tmins, each containing a vector of tuples for Br and dBr for each eMin scan 
	//vector<<tuple<double, double>>> Br_; 
	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		//vector<tuple<double, double>> tmp1; 

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		for (int i_ewin = 0; i_ewin < n_eMin; i_ewin++) {

			TFile *fits = TFile::Open(("../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMinArr[i_ewin]+"MeV_"+eMaxArr[i_ewin]+"MeV_"+tMinArr[i_tmin]+"ns/fits.root").c_str());
			
			cout<<eMinArr[i_ewin]+" < E [MeV] < "+eMaxArr[i_ewin]+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<fits<<endl;

			TGraphErrors *result = (TGraphErrors*)fits->Get("mainFit/mainFit");

			TF1 *mainFit = result->GetFunction("mainFit");

			//cout<<"gr\t"<<gr<<endl;
			//cout<<"mainFit\t"<<mainFit<<endl;

			TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

			double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  			double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

 			// x-intercept 
			double Br = -p0/p1;

			// From Taylor 9.9
			double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

			cout<<"Br = "<<Br<<" ± "<<BrErr<<" ppm"<<endl;

			//tuple<double, double> tmp2 = make_tuple(Br, BrErr);

			//tmp1.push_back(tmp2);

			// Fill vectors
			double window = stod(eMinArr[i_ewin]) + (stod(eMaxArr[i_ewin]) - stod(eMinArr[i_ewin]))/2;
			x.push_back(window); 
			ex.push_back(0.);
			y.push_back(Br);
			ey.push_back(BrErr);

			fits->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("t > 0 #mus"); //names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E_{window} [MeV]: in range E #minus 500 < E < E #plus 500 MeV;#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_eWin_Coarse", -10, 10);

	return;

}

void Br_vs_tMin() { 

	cout<<"Plotting Br vs tMin"<<endl;

	string eMinArr[] = {"0", "1000", "20000", "30000"};
	string eMaxArr[] = {"6000"};
	string tMinArr[] = {"0", "10000", "20000", "30000", "40000", "50000", "60000"}; 

	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	cout<<"n_eMin\t"<<n_eMin<<endl;// = 1;

	//vector<vector<double>> Br_; 

	// Vector of tmins, each containing a vector of tuples for Br and dBr for each eMin scan 
	//vector<<tuple<double, double>>> Br_; 
	vector<TGraphErrors*> gr_;

	for (int i_emin = 0; i_emin < n_eMin; i_emin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		//vector<tuple<double, double>> tmp1; 
		

			TFile *fits = TFile::Open(("../Plots/Data/RadialFieldScan_2/raw/cutsTesting/"+eMinArr[i_emin]+"MeV_"+eMaxArr[0]+"MeV_"+tMinArr[i_tmin]+"ns/fits.root").c_str());
			
			cout<<eMinArr[i_emin]+" < E [MeV] < "+eMaxArr[0]+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<fits<<endl;

			TGraphErrors *result = (TGraphErrors*)fits->Get("mainFit/mainFit");

			TF1 *mainFit = result->GetFunction("mainFit");

			//cout<<"gr\t"<<gr<<endl;
			//cout<<"mainFit\t"<<mainFit<<endl;

			TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

			double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  			double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

 			// x-intercept 
			double Br = -p0/p1;

			// From Taylor 9.9
			double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

			cout<<"Br = "<<Br<<" ± "<<BrErr<<" ppm"<<endl;

			//tuple<double, double> tmp2 = make_tuple(Br, BrErr);

			//tmp1.push_back(tmp2);

			// Fill vectors
			//double window = stod(eMinArr[i_ewin]) + (stod(eMaxArr[i_ewin]) - stod(eMinArr[i_ewin]))/2;
			cout<<"tmin\t"<<stod(tMinArr[i_tmin])<<endl;
			x.push_back(stod(tMinArr[i_tmin])/1000); 
			ex.push_back(0.);
			y.push_back(Br);
			ey.push_back(BrErr);

			fits->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("E > 0 MeV"); names_.push_back("E > 1000 MeV"); names_.push_back("E > 2000 MeV"); names_.push_back("E > 3000 MeV");
  	// Hack together x-axis range
  	//int N = gr_.at(0)->GetN();
  	//double xmax = gr_.at(0)->GetPointX(N-1);// + 50;
  	//double xmin = gr_.at(0)->GetPointX(0);// - 50; 
  	//double offset = (xmax - xmin) * 0.05;
  	//xmin = xmin - offset; 
  	//xmax = xmax + offset;
  	//gr_.at(0)->GetXaxis()->SetRangeUser(xmin, xmax);

	//DrawTGraphErrors(gr_.at(0), ";t_{min} [#mus];#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_tMin");
	OverlayThreeGraphs(gr_, names_, ";t_{min} [#mus];#LT B_{r}^{Bkg} #GT [ppm]", "../Images/Data/RadialFieldScan_2/raw/cutsTesting/Results/Br_vs_tMin", -10, 10);

	return;

}

// 0MeV_6000MeV_0ns
// 0MeV_6000MeV_10000ns
// 0MeV_6000MeV_20000ns
// 0MeV_6000MeV_21000ns
// 0MeV_6000MeV_22000ns
// 0MeV_6000MeV_23000ns
// 0MeV_6000MeV_24000ns
// 0MeV_6000MeV_25000ns
// 0MeV_6000MeV_26000ns
// 0MeV_6000MeV_27000ns
// 0MeV_6000MeV_28000ns
// 0MeV_6000MeV_29000ns
// 0MeV_6000MeV_30000ns
// 0MeV_6000MeV_40000ns
// 0MeV_6000MeV_50000ns
// 0MeV_6000MeV_60000ns


int main() { 

	Br_vs_eMin("2750","300");//3000");//"6000");
	ChiSqr_vs_eMin("2750","300"); 
	
	// Br_vs_eMin("2750","600000");//3000");//"6000");
	// ChiSqr_vs_eMin("2750","600000"); 
	
	// Needs re-running 
	//Br_vs_eMax();//"500");

	//Br_vs_eWin_Fine();

	//Br_vs_eWin_Coarse(); 

	//Br_vs_tMin();

	





	//////////////////////////////////////////////////////


	return 0; 
}