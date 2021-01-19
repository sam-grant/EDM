#include <iostream>
#include <vector>

#include <fstream>
#include <string>
#include <fstream>
#include <vector>
#include <utility> 
#include <stdexcept> 
#include <sstream> 

#include "TFile.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TGraphErrors.h"
#include "TFitResult.h"

#include "FancyDraw.h"

using namespace std;

const string scan = "2";
const int N_QHV = 2;
const double QHV[N_QHV] = {14, 18}; //  quad settings, kV
const int eLoCut = 1700;

// Read histograms, produce tuple of y, yerr
tuple<vector<double>, vector<double>> ReadYPos(string input) { 

	// ++++++++++++++ Open tree and load branches ++++++++++++++

	// Get file
	TFile *f1 = TFile::Open(input.c_str());
	cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

	vector<TH1D *> hy_calos;// vector<unsigned int> tot_ctags;

	vector<double> yPos; vector<double> eyPos;

	for(int i_calo = 0; i_calo < 24; i_calo++) {

		TH1D *hy = (TH1D*)f1->Get( ("PerCalo/hy_"+to_string(i_calo+1)).c_str() );//hy->Clone();

		yPos.push_back(hy->GetMean());
		eyPos.push_back(hy->GetMeanError());

		//cout<<hy->GetMean()<<"±"<<hy->GetMeanError()<<endl;

	}

	return make_tuple(yPos,eyPos);

}

// ==================== ACCURATE THETA ====================
double GetTheta(int caloNum) { 

	double caloPosRad[24] = {0.19896753472735357, 0.46076692252650303, 0.7225663103256524, 0.9843656981248019, 1.2461650859239513, 1.5079644737231008, 1.7697638615222502, 2.0315632493213998, 2.293362637120549, 2.5551620249196985, 2.816961412718848, 3.0787608005179976, 3.3405601883171467, 3.6023595761162963, 3.864158963915446, 4.125958351714595, 4.387757739513744, 4.649557127312894, 4.911356515112043, 5.173155902911193, 5.4349552907103424, 5.696754678509492, 5.958554066308642, 6.220353454107791};
	//return (2*TMath::Pi() * caloNum/24);// * (180/TMath::Pi());
	double theta = caloPosRad[caloNum-1] + (18.35*(TMath::Pi()/180)); 

	if(theta > 2*TMath::Pi()) theta = theta - 2*TMath::Pi();

	return theta;
}

TGraphErrors *VCOD(tuple<vector<double>, vector<double>> yVal) {

  // CAN"T USE GLOBAL QHV SINCE SOME SETTINGS ARE BROKEN

  // Loop through y-pos and fill a TGraph

  	int n_calo = 24;//yVal.size();

  	//cout<<"n_calo\t"<<n_calo<<endl;

	double x[n_calo]; double ex[n_calo];
	double y[n_calo]; double ey[n_calo];

	for ( int i_calo = 0; i_calo < n_calo; i_calo++ ) {

    //double y_tmp = get<0>(yPos[i_quad]); double ey_tmp = get<1>(yPos[i_quad]);

		//cout<<GetTheta(i_calo+1)*(180/TMath::Pi())<<"\t"<<get<0>(yVal)[i_calo]*1e-3<<"\t"<<get<1>(yVal)[i_calo]*1e-3<<"\n";

		x[i_calo] = GetTheta(i_calo+1);
		ex[i_calo] = 0.0;
		y[i_calo] = get<0>(yVal)[i_calo];//get<0>(yVal[i_calo]);
		ey[i_calo] = get<1>(yVal)[i_calo];

	}

	return new TGraphErrors(n_calo,x,y,ex,ey);


}


tuple<vector<double>, vector<double>> SubtractYPos(vector<tuple<vector<double>, vector<double>>> vcods) {

	//tuple<vector<double>, vector<double>> yPos;
	vector<double> y; vector<double> ey; 

	cout<<"Calo,Angle[deg],<y>[m],delta<y>[m]"<<endl;

	for( int i_calo = 0; i_calo < 24; i_calo++ ) {

		double y1 = get<0>(vcods.at(0))[i_calo]; double y2 = get<0>(vcods.at(1))[i_calo];
		double ey1 = get<1>(vcods.at(0))[i_calo]; double ey2 = get<1>(vcods.at(1))[i_calo];
		double ytot = y1 - y2; double eytot = sqrt(ey1*ey1 + ey2*ey2);

		cout<<i_calo+1<<","<<GetTheta(i_calo+1)*(180/TMath::Pi())<<","<<ytot*1e-3<<","<<eytot*1e-3<<"\n";

		y.push_back(ytot); ey.push_back(eytot);

	}

	return make_tuple(y, ey);

}

void DrawVCOD(TGraphErrors *graph, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	//c->SetRightMargin(0.20);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
  	graph->GetXaxis()->SetTitleOffset(1.1);
  	graph->GetYaxis()->SetTitleOffset(1.25);
  	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle

	graph->GetYaxis()->SetRangeUser(-0.325, 0.325);
	graph->Draw("AP");

	/*
	// Mark the quads
	// From diagram in TDR pg. 406  
	TLine *Q1l = new TLine(GetTheta(3),0,GetTheta(6),0);
	TPaveText *Q1t = new TPaveText(GetTheta(3),0.025,GetTheta(6),0.025);
	TLine *Q2l = new TLine(GetTheta(9),0,GetTheta(12),0);
	TPaveText *Q2t = new TPaveText(GetTheta(9),0.025,GetTheta(12),0.025);
	TLine *Q3l = new TLine(GetTheta(15),0,GetTheta(18),0);
	TPaveText *Q3t = new TPaveText(GetTheta(15),0.025,GetTheta(18),0.025);
	TLine *Q4l = new TLine(GetTheta(21),0,GetTheta(24),0);
	TPaveText *Q4t = new TPaveText(GetTheta(21),0.025,GetTheta(24),0.025);

	Q1l->SetLineWidth(3); Q1l->SetLineStyle(2); Q1l->SetLineColor(kBlue); 
	Q2l->SetLineWidth(3); Q2l->SetLineStyle(2); Q2l->SetLineColor(kOrange-3); 
	Q3l->SetLineWidth(3); Q3l->SetLineStyle(2); Q3l->SetLineColor(kGreen+3); 
	Q4l->SetLineWidth(3); Q4l->SetLineStyle(2); Q4l->SetLineColor(kMagenta+2); 

	Q1t->SetTextSize(26); Q2t->SetTextSize(26); Q3t->SetTextSize(26); Q4t->SetTextSize(26);
	Q1t->SetTextFont(44); Q2t->SetTextFont(44); Q3t->SetTextFont(44); Q4t->SetTextFont(44);
	Q1t->SetFillColor(0); Q2t->SetFillColor(0); Q3t->SetFillColor(0); Q4t->SetFillColor(0);
	Q1t->SetTextColor(kBlue); Q2t->SetTextColor(kOrange-3); Q3t->SetTextColor(kGreen+3); Q4t->SetTextColor(kMagenta+2);

	Q1t->AddText("Q1"); Q2t->AddText("Q2"); Q3t->AddText("Q3"); Q4t->AddText("Q4"); 
	Q1l->Draw("same"); Q2l->Draw("same"); Q3l->Draw("same"); Q4l->Draw("same");
	Q1t->Draw("same"); Q2t->Draw("same"); Q3t->Draw("same"); Q4t->Draw("same"); */
	// Draw the sim 
	TFile *simFile = TFile::Open("../Plots/MC/ClosedOrbit/y_vs_theta.root"); 
	TGraphErrors *sim = (TGraphErrors*)simFile->Get("y_vs_theta"); 
	sim->SetLineColor(kRed); sim->SetMarkerColor(kRed); sim->SetLineWidth(3);

	sim->Draw("L same");

	TLegend *leg = new TLegend(0.11,0.69,0.33,0.89); // 0.81,0.35,0.99,0.65);
  	leg->SetBorderSize(0);

  	leg->AddEntry(graph, "Data");
  	leg->AddEntry(sim, "BD sim");
/*  leg->AddEntry(Q1, "Q1");
  leg->AddEntry(Q2, "Q2");
  leg->AddEntry(Q3, "Q3");
  leg->AddEntry(Q4, "Q4");*/

  	leg->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}



int main() {

	string stage = "raw";//"reprocessed";//"raw";;//// // 

	string runs[N_QHV] = {"37884-37885","37886"}; // ,"-37885"};

	vector<tuple<vector<double>, vector<double>>> vcods;

	for( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

		string input = "../Plots/Data/ClosedOrbit/"+stage+"/merged/y-pos_"+runs[i_quad]+".root"; 
		
		tuple<vector<double>, vector<double>> yPos = ReadYPos(input);

		vcods.push_back(yPos);

		TGraphErrors *gr1 = VCOD(yPos);//
		DrawTGraphErrors(gr1, ";#theta [rad];y [mm]", "../Images/Data/ClosedOrbit/"+stage+"/y_vs_theta_"+to_string(int(QHV[i_quad])));
		// Plot y(theta) for each quad setting

	}

	// Subtract the two settings 

	tuple<vector<double>, vector<double>> yPosTot = SubtractYPos(vcods); 

	TGraphErrors *gr2 = VCOD(yPosTot);

	//DrawVCOD(gr2, "Low energy threshold: "+to_string(eLoCut)+" MeV;#theta [rad];y [mm]", "../Images/Data/VCOD/eLoCut_"+to_string(eLoCut)+"/ytot_vs_theta");
	DrawVCOD(gr2, ";#theta [rad];#LTy#GT [mm]", "../Images/Data/ClosedOrbit/"+stage+"/ytot_vs_theta");

	//TF1 *fCOD_10 = new TF1("fCOD_10", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) )", 0, 360);
	//TF1 *fCOD_10 = new TF1("fCOD_10", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) + ([17]*cos(9*x)+[18]*sin(9*x))/(81-0.108) + ([19]*cos(10*x)+[20]*sin(10*x))/(100-0.108))", 0, 2*TMath::Pi());
	// Unfortunate complication of having calo 24 in front of calo 1
	double xmin = gr2->GetPointX(23);//0;//
	double xmax = gr2->GetPointX(22);//2*TMath::Pi();//

	TF1 *fCOD_1 = new TF1("fCOD_1", "( ([0]/0.108) )", xmin, xmax);
	TF1 *fCOD_2 = new TF1("fCOD_2", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) )", xmin, xmax);
	TF1 *fCOD_3 = new TF1("fCOD_3", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) )", xmin, xmax);
	TF1 *fCOD_4 = new TF1("fCOD_4", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) )", xmin, xmax);
	TF1 *fCOD_5 = new TF1("fCOD_5", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) )", xmin, xmax);
	TF1 *fCOD_6 = new TF1("fCOD_6", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) )", xmin, xmax);
	TF1 *fCOD_7 = new TF1("fCOD_7", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) )", xmin, xmax);
	TF1 *fCOD_8 = new TF1("fCOD_8", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) )", xmin, xmax);
	TF1 *fCOD_9 = new TF1("fCOD_9", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) )", xmin, xmax);
	TF1 *fCOD_10 =new  TF1("fCOD_10", "( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) + ([17]*cos(9*x)+[18]*sin(9*x))/(81-0.108) + ([19]*cos(10*x)+[20]*sin(10*x))/(100-0.108))", xmin, xmax);


	// Loop through HO fits 

	TF1 *fCOD[10] = {fCOD_1, fCOD_2, fCOD_3, fCOD_4, fCOD_5, fCOD_6, fCOD_7, fCOD_8, fCOD_9, fCOD_10};	

	//gr2->Fit(fCOD_10, "R");

	double chis[10]; double chisFromOne[10]; double orders[10]; double zeros[10];

	int bestFitOrder = 0; double tmp = 100;

	for( int i_fit = 0; i_fit<10; i_fit++ ) {

		gr2->Fit(fCOD[i_fit], "RQ");

		chis[i_fit] = fCOD[i_fit]->GetChisquare() / fCOD[i_fit]->GetNDF();
		orders[i_fit] = i_fit+1; zeros[i_fit] = 0.;

		chisFromOne[i_fit] = 1-chis[i_fit];

		if(abs(chisFromOne[i_fit]) < tmp) {
			tmp = abs(chisFromOne[i_fit]);
			bestFitOrder = i_fit+1;
		}
 
		gStyle->SetOptFit(20222);

		DrawTGraphErrors(gr2, ";#theta [rad];#LTy#GT [mm]", "../Images/Data/ClosedOrbit/"+stage+"/fit_ytot_vs_theta_"+to_string(i_fit+1));

	}

	cout<<"Best fit order\t"<<bestFitOrder<<endl;

	TGraphErrors *gr3 = new TGraphErrors(10, orders, chis, zeros, zeros);
	TGraphErrors *gr4 = new TGraphErrors(10, orders, chisFromOne, zeros, zeros);	

	DrawTGraphErrorsLine(gr3, ";Fit order, N;#chi^{2}/ndf", "../Images/Data/ClosedOrbit/"+stage+"/fit_chi_vs_order");
	DrawTGraphErrorsLine(gr4, ";Fit order, N;1#minus#chi^{2}/ndf", "../Images/Data/ClosedOrbit/"+stage+"/fit_1-chi_vs_order");
	//


	//DrawTGraphErrors(gr2, ";#theta [deg];#LTy#GT [mm]", "../Images/Data/VCOD/fit_ytot_vs_theta");

	return 0;

}


	// Read tree, produce tuple of y, yerr, ctag, & subruns
	// Also store histograms of y-pos 



// +++++++ OLD STYLE , READ DIRECTLY FROM TREE, SLOW BUT EASY +++++++  
/*
tuple<vector<double>, vector<double>> ReadYPos(string input, string output) {

	// ++++++++++++++ Open tree and load branches ++++++++++++++

	// Get file
	TFile *f1 = TFile::Open(input.c_str());
	cout<<"\nOpened tree:\t"<<input<<" "<<f1<<endl;

	// Get reader for tree
	TTreeReader treeReader("nearlineHistTree/eventTree",f1);

	// Get branches
	TTreeReaderValue<unsigned int> runNum(treeReader,"runNum");
	TTreeReaderValue<unsigned int> subRunNum(treeReader,"subRunNum");
	TTreeReaderValue<unsigned int> eventNum(treeReader,"eventNum");
	TTreeReaderValue<unsigned int> ctag(treeReader,"ctag");
	TTreeReaderValue<vector<int>> caloNum(treeReader,"caloNum");
	TTreeReaderValue<std::vector<double>> energy(treeReader,"energy");
	TTreeReaderValue<std::vector<double>> times(treeReader,"time");
	TTreeReaderValue<std::vector<double>> x(treeReader,"x");
	TTreeReaderValue<std::vector<double>> y(treeReader,"y");


	// ++++++++++++++ Book histograms ++++++++++++++
	TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

	vector<TH1D *> hy_calos;// vector<unsigned int> tot_ctags;

	for(int i_calo = 0; i_calo < 24; i_calo++) {

		TH1D *hy_tmp = (TH1D*) hy->Clone();
		hy_tmp->SetName( ("hy_"+to_string(i_calo+1)).c_str() );
		hy_calos.push_back(hy_tmp);

	}

	// ++++++++++++++ Loop thro events ++++++++++++++

	//int nFill_tmp = treeReader.size(); double x_fill[nFill_tmp]; double y_clu[nFill_tmp]; double zeros[nFill_tmp];
	int counter = 0;
	unsigned int run;

	// For DQC purposess
	vector<double> subRuns; vector<double> ctags; 

	while (treeReader.Next()){

		run = *runNum;

		//tot_ctag = tot_ctag + *ctag;

		//tot_ctags.at(caloNum-1).push_backtot_ctag

	  // Get leaves
		vector<int> caloNum_ = *caloNum;
		vector<double> x_ = *x;
		vector<double> y_ = *y;
		vector<double> energy_ = *energy;
		vector<double> times_ = *times;

	  // Number of clusters in this fill

	  // This could be any of the vectors, caloNum has no special significance 
		int nClu = caloNum_.size(); 

		ctags.push_back(double(*ctag)); subRuns.push_back(double(*subRunNum));

		// Start run 37884 at subrun 280 

		if(run == 37884 && *subRunNum < 280) continue;



		//x_fill[nFill] = double(nFill); y_clu[nFill] = double(nClu); zeros[n_fill] = 0.;

	  // Loop through clusters
		for(int i_clu = 0; i_clu < nClu; i_clu++) { 

	     // Get cluster level variables
			int caloNum =  caloNum_.at(i_clu);
			double xmm = x_.at(i_clu) * 25;
			double ymm = y_.at(i_clu) * 25; 
			double energy = energy_.at(i_clu);
			double time = times_.at(i_clu);

	     // Apply CTAG cuts
			// if(energy > 1700 && energy < 6000 && time > 24000) {
			if(energy > eLoCut && energy < 6000 && time > 24000) {

	    	// Fill y-position for individual calos
				hy_calos.at(caloNum-1)->Fill(ymm);

			}

		}

		counter++;

	} // Exit tree

	// Plot clusters per fill 
	int n_subrun = subRuns.size();
	double x_subrun[n_subrun]; double y_ctag[n_subrun]; double zeros[n_subrun];

	for (int i_subrun = 0; i_subrun < n_subrun; i_subrun++ ) {

		x_subrun[i_subrun] = double(subRuns.at(i_subrun)); 
		y_ctag[i_subrun] = double(ctags.at(i_subrun));
		zeros[i_subrun] = 0.;

	}

	TGraphErrors *ctag_vs_subrun = new TGraphErrors(n_subrun, x_subrun, y_ctag, zeros, zeros);

	DrawTGraphErrors(ctag_vs_subrun, ";Sub-run;CTAG / fill", "../Images/Data/VCOD/ctag_vs_subrun_"+to_string(run));


	// ++++++++++++++ Write to file ++++++++++++++

	TFile *f2 = new TFile(output.c_str(), "RECREATE");
	hy->Write();
	f2->cd(); f2->mkdir("PerCalo"); f2->cd("PerCalo");


	vector<double> yPos; vector<double> eyPos; 

	for(int i_calo = 0; i_calo < hy_calos.size(); i_calo++) {

		// cout<<"\nCalo:\t"<<i_calo+1<<endl;
		// cout<<"Mean y-position:\t"<<hy_calos.at(i_calo)->GetMean()<<"+/-"<<hy_calos.at(i_calo)->GetMeanError()<<endl;
		// cout<<"Total ctags:\t"<<hy_calos.at(i_calo)->GetEntries()<<endl;

		yPos.push_back(hy_calos.at(i_calo)->GetMean()); 
		eyPos.push_back(hy_calos.at(i_calo)->GetMeanError());

		hy_calos.at(i_calo)->Write();

	}

	cout<<"\nWritten histograms to:\t"<<output<<" "<<f2<<endl;

	// Need this to avoid seg fault after closing files
	// double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

	f1->Close();
	f2->Close();

	return make_tuple(yPos, eyPos);//, theta);//, tot_ctag);

}

*/
