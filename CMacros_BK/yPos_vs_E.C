#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

//string subrun = "15921.00368";
//string subrun = "37067.00203";
//string subrun = "37067.00205";
string subrun = "34735.00309";
string tMinArr[] = {"0", "24000", "30000"};

void Plot_y_vs_Emin() {

	string eMax = "6000";

	string eMinArr[]={"0", "500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500"};
	//string eMaxArr[]={"500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		//TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
		//TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

		for (int i = 0; i < n_eMin; i++) {

			TFile *plots = TFile::Open(("/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/yPos_vs_E/caloBeamPositionPlots."+subrun+"_"+eMinArr[i]+"MeV_"+eMax+"MeV_"+tMinArr[i_tmin]+"ns.root").c_str());
			
			cout<<eMinArr[i]+" < E [MeV] < "+eMax+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<plots<<endl;

			TH1F *hy = (TH1F*)plots->Get("CaloBeamPosition/clusterY");

			double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

			if(yPos==0) {
				cout<<"Warning: mean y-pos is zero. Skipping..."<<endl;
				continue;
			}

			x.push_back(stod(eMinArr[i])); ex.push_back(0);
			y.push_back(yPos); ey.push_back(eyPos);

			plots->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		//gr_tmp->GetYaxis()->SetRangeUser(70, 90);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E_{min} [MeV];#LT y_{calo} #GT [mm]", "../Images/Data/yPos_vs_E/"+subrun+"/y_vs_eMin", 60, 80);

	return; 
}

void Plot_y_vs_Emin_Zoom() {

	string eMax = "6000";

	string eMinArr[]={"0", "500", "1000", "1500", "2000", "2500"};//, "3500", "4000", "4500", "5000", "5500"};
	//string eMaxArr[]={"500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		//TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
		//TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

		for (int i = 0; i < n_eMin; i++) {

			TFile *plots = TFile::Open(("/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/yPos_vs_E/caloBeamPositionPlots."+subrun+"_"+eMinArr[i]+"MeV_"+eMax+"MeV_"+tMinArr[i_tmin]+"ns.root").c_str());
			
			cout<<eMinArr[i]+" < E [MeV] < "+eMax+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<plots<<endl;

			TH1F *hy = (TH1F*)plots->Get("CaloBeamPosition/clusterY");

			double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

			if(yPos==0) {
				cout<<"Warning: mean y-pos is zero. Skipping..."<<endl;
				continue;
			}

			x.push_back(stod(eMinArr[i])); ex.push_back(0);
			y.push_back(yPos); ey.push_back(eyPos);

			plots->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		//gr_tmp->GetYaxis()->SetRangeUser(70, 90);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E_{min} [MeV];#LT y_{calo} #GT [mm]", "../Images/Data/yPos_vs_E/"+subrun+"/y_vs_eMin_zoom", 74, 75.8);

	return; 
}


void Plot_y_vs_Emax() {

	string eMin = "0";

	string eMaxArr[]={"500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	//string eMaxArr[]={"500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	int n_eMax = sizeof(eMaxArr)/sizeof(eMaxArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		//TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
		//TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

		for (int i = 0; i < n_eMax; i++) {

			TFile *plots = TFile::Open(("/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/yPos_vs_E/caloBeamPositionPlots."+subrun+"_"+eMin+"MeV_"+eMaxArr[i]+"MeV_"+tMinArr[i_tmin]+"ns.root").c_str());
			
			cout<<eMin+" < E [MeV] < "+eMaxArr[i]+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<plots<<endl;

			TH1F *hy = (TH1F*)plots->Get("CaloBeamPosition/clusterY");

			double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

			if(yPos==0) {
				cout<<"Warning: mean y-pos is zero. Skipping..."<<endl;
				continue;
			}

			x.push_back(stod(eMaxArr[i])); ex.push_back(0);
			y.push_back(yPos); ey.push_back(eyPos);

			plots->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		//gr_tmp->GetYaxis()->SetRangeUser(70, 90);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E_{max} [MeV];#LT y_{calo} #GT [mm]", "../Images/Data/yPos_vs_E/"+subrun+"/y_vs_eMax", 74, 75.25);

	return; 
}

void Plot_y_vs_Emax_Zoom() {

	string eMin = "0";

	string eMaxArr[]={"500", "1000", "1500", "2000", "2500"};//, "3500", "4000", "4500", "5000", "5500", "6000"};
	//string eMaxArr[]={"500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	int n_eMax = sizeof(eMaxArr)/sizeof(eMaxArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		//TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
		//TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

		for (int i = 0; i < n_eMax; i++) {

			TFile *plots = TFile::Open(("/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/yPos_vs_E/caloBeamPositionPlots."+subrun+"_"+eMin+"MeV_"+eMaxArr[i]+"MeV_"+tMinArr[i_tmin]+"ns.root").c_str());
			
			cout<<eMin+" < E [MeV] < "+eMaxArr[i]+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<plots<<endl;

			TH1F *hy = (TH1F*)plots->Get("CaloBeamPosition/clusterY");

			double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

			if(yPos==0) {
				cout<<"Warning: mean y-pos is zero. Skipping..."<<endl;
				continue;
			}

			x.push_back(stod(eMaxArr[i])); ex.push_back(0);
			y.push_back(yPos); ey.push_back(eyPos);

			plots->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		//gr_tmp->GetYaxis()->SetRangeUser(70, 90);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E_{max} [MeV];#LT y_{calo} #GT [mm]", "../Images/Data/yPos_vs_E/"+subrun+"/y_vs_eMax_zoom", 74, 75.25);

	return; 
}

void Plot_y_vs_Ewin() {

	string eMinArr[]={"0", "500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500"};
	string eMaxArr[]={"500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		//TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
		//TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

		for (int i = 0; i < n_eMin; i++) {

			TFile *plots = TFile::Open(("/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/yPos_vs_E/caloBeamPositionPlots."+subrun+"_"+eMinArr[i]+"MeV_"+eMaxArr[i]+"MeV_"+tMinArr[i_tmin]+"ns.root").c_str());
			
			cout<<eMinArr[i]+" < E [MeV] < "+eMaxArr[i]+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<plots<<endl;

			TH1F *hy = (TH1F*)plots->Get("CaloBeamPosition/clusterY");

			double eWin = stod(eMinArr[i]) + (stod(eMaxArr[i]) - stod(eMinArr[i]))/2;
			double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

			if(yPos==0) {
				cout<<"Warning: mean y-pos is zero. Skipping..."<<endl;
				continue;
			}

			x.push_back(eWin); ex.push_back(0);
			y.push_back(yPos); ey.push_back(eyPos);

			plots->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		//gr_tmp->GetYaxis()->SetRangeUser(70, 90);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E [MeV]: in range E #minus 250 < E < E #plus 250 MeV;#LT y_{calo} #GT [mm]", "../Images/Data/yPos_vs_E/"+subrun+"/y_vs_eWin", 60, 80);

	return; 
}

void Plot_y_vs_Ewin_Zoom() {

	string eMinArr[]={"0", "500", "1000", "1500", "2000", "2500"};//, "3500", "4000", "4500", "5000", "5500"};
	string eMaxArr[]={"500", "1000", "1500", "2000", "2500", "3000", "3500", "4000", "4500", "5000", "5500", "6000"};
	int n_eMin = sizeof(eMinArr)/sizeof(eMinArr[0]);
	int n_tMin = sizeof(tMinArr)/sizeof(tMinArr[0]);

	vector<TGraphErrors*> gr_;

	for (int i_tmin = 0; i_tmin < n_tMin; i_tmin++) {

		vector<double> x; vector<double> ex;
		vector<double> y; vector<double> ey;

		//TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
		//TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

		for (int i = 0; i < n_eMin; i++) {

			TFile *plots = TFile::Open(("/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/yPos_vs_E/caloBeamPositionPlots."+subrun+"_"+eMinArr[i]+"MeV_"+eMaxArr[i]+"MeV_"+tMinArr[i_tmin]+"ns.root").c_str());
			
			cout<<eMinArr[i]+" < E [MeV] < "+eMaxArr[i]+" , "+tMinArr[i_tmin]+" ns"<<endl;
			cout<<"Input ROOT file\t"<<plots<<endl;

			TH1F *hy = (TH1F*)plots->Get("CaloBeamPosition/clusterY");

			double eWin = stod(eMinArr[i]) + (stod(eMaxArr[i]) - stod(eMinArr[i]))/2;
			double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

			if(yPos==0) {
				cout<<"Warning: mean y-pos is zero. Skipping..."<<endl;
				continue;
			}

			x.push_back(eWin); ex.push_back(0);
			y.push_back(yPos); ey.push_back(eyPos);

			plots->Close();

		}

		TGraphErrors *gr_tmp = GenerateTGraphErrors(x, y, ex, ey);
		//gr_tmp->GetYaxis()->SetRangeUser(70, 90);
		gr_.push_back(gr_tmp);

	}

	vector<string> names_; names_.push_back("t > 0 #mus"); names_.push_back("t > 24 #mus"); names_.push_back("t > 30 #mus");

	OverlayThreeGraphs(gr_, names_, ";E [MeV]: in range E #minus 250 < E < E #plus 250 MeV;#LT y_{calo} #GT [mm]", "../Images/Data/yPos_vs_E/"+subrun+"/y_vs_eWin_zoom", 74, 75.9);

	return; 
}


void Draw_2D(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.25);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void Draw_2D_cuts(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.25);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	gPad->Update();
	TLine *x1 = new TLine(24, 1000, 300, 1000); // ,gPad->GetUymax());
	TLine *x2 = new TLine(24, 2750, 300, 2750); 
	TLine *y1 = new TLine(24, 1000, 24, 2750); 
	TLine *y2 = new TLine(300, 1000, 300, 2750); 

	x1->SetLineColor(kRed);
	y1->SetLineColor(kRed);
	x2->SetLineColor(kRed);
	y2->SetLineColor(kRed);

	x1->SetLineWidth(3);
	y1->SetLineWidth(3);
	x2->SetLineWidth(3);
	y2->SetLineWidth(3);

	x1->SetLineStyle(2);
	y1->SetLineStyle(2);
	x2->SetLineStyle(2);
	y2->SetLineStyle(2);

	x1->Draw("same");//(2);
	y1->Draw("same");//(2);
	x2->Draw("same");//(2);
	y2->Draw("same");//(2);

	c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void Draw_1D(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
	//gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.15);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void GeneralPlots() { 

	TFile *file = TFile::Open("/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/yPos_vs_E/CutParamPlots/caloBeamPositionPlots.34735.root");

	// Plot all and profile all 
	TH2D *cluTE = (TH2D*)file->Get("CaloBeamPosition/clusterTE");
	TH2D *cluTY = (TH2D*)file->Get("CaloBeamPosition/clusterTY");
	TH2D *cluEY = (TH2D*)file->Get("CaloBeamPosition/clusterEY");

	TH1D *cluTE_px = cluTE->ProfileX();
	TH1D *cluTY_px = cluTY->ProfileX();
	TH1D *cluEY_px = cluEY->ProfileX();

	Draw_2D(cluTE, ";Time [#mus];Cluster energy [MeV]", "../Images/Data/yPos_vs_E/cluTE.34735");
	Draw_2D_cuts(cluTE, ";Time [#mus];Cluster energy [MeV]", "../Images/Data/yPos_vs_E/cluTE_cuts.34735");

	Draw_2D(cluTY, ";Time [#mus];y_{calo} [mm]", "../Images/Data/yPos_vs_E/cluTY.34735");
	Draw_2D(cluEY, ";Cluster energy [MeV];y_{calo} [mm]", "../Images/Data/yPos_vs_E/cluEY.34735");
	
	Draw_1D(cluTE_px, ";Time [#mus];Cluster energy [MeV]", "../Images/Data/yPos_vs_E/cluTE_px.34735");

	cluEY_px->GetYaxis()->SetRangeUser(65, 80);
	cluTY_px->GetYaxis()->SetRangeUser(55, 95);
	Draw_1D(cluTY_px, ";Time [#mus];y_{calo} [mm]", "../Images/Data/yPos_vs_E/cluTY_px.34735");
	Draw_1D(cluEY_px, ";Cluster energy [MeV];y_{calo} [mm]", "../Images/Data/yPos_vs_E/cluEY_px.34735");

	cluEY_px->GetYaxis()->SetRangeUser(73, 76);
	cluEY_px->GetXaxis()->SetRangeUser(0, 1000);

	cluTY_px->GetYaxis()->SetRangeUser(67, 80);
	cluTY_px->GetXaxis()->SetRangeUser(0, 50);

	Draw_1D(cluEY_px, ";Cluster energy [MeV];y_{calo} [mm]", "../Images/Data/yPos_vs_E/cluEY_px_zoom.34735");
	Draw_1D(cluTY_px, ";Time [#mus];y_{calo} [mm]", "../Images/Data/yPos_vs_E/cluTY_px_zoom.34735");

	return;

}

int main() {  

	// Plot_y_vs_Emin(); 
	// Plot_y_vs_Emin_Zoom(); 
	// Plot_y_vs_Emax();
	// Plot_y_vs_Emax_Zoom();
	// Plot_y_vs_Ewin();
	// Plot_y_vs_Ewin_Zoom();
	GeneralPlots();

	return 0;


}