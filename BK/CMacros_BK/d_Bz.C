#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

string config = "1700ppm";
double Bz = 1.7; // mrad

/*TGraphErrors *DilutionGraph(TFile *input) { 

	cout<<"Getting dilution graph"<<endl;

	int step = 200;
  	int pmin = 0.; 
  	int pmax = 200.;

  	vector<double> p_; vector<double> ep_;
  	vector<double> AEDM_; vector<double> eAEDM_;
  	vector<double> dBz_; vector<double> edBz_;

  	for ( int i_slice = 0; i_slice < 15; i_slice++ ) { 

  		TH2D *moduloHist = (TH2D*)input->Get(("S0S12S18_ThetaY_vs_Time_Modulo_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());

  		if(moduloHist == 0) {
  			pmin = pmin + step;
			pmax = pmax + step;
  			continue;
  		}

  		cout<<pmin<<" < p < "<<pmax<<endl;

  		cout<<moduloHist<<endl;

  		int nEntries = moduloHist->GetEntries();

  		TH1D *moduloProf = moduloHist->ProfileX();

  		TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

		SimpleSinFit(moduloGraph, 0.17, OMEGA_A * 1e3, 0);

      	FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

		double p = (pmax + pmin) / 2;

		p_.push_back(p);
		ep_.push_back(pmax - p);

		//cout<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<endl;

		AEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0));
		eAEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(0));

		dBz_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0) / delta_prime);
		edBz_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(0) / delta_prime);

		pmin = pmin + step ;
		pmax = pmax + step;

		delete moduloProf; delete moduloHist;

  	}

  	TGraphErrors *AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);
  	TGraphErrors *dBz_vs_p = GenerateTGraphErrors(p_, dBz_, ep_, edBz_);

  	AEDM_vs_p->GetXaxis()->SetRangeUser(0,3000);
  	dBz_vs_p->GetXaxis()->SetRangeUser(0,3000);

  	DrawTGraphErrors(AEDM_vs_p, ";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/DilutionFunction/AEDM_vs_p_"+qual).c_str());
  	DrawTGraphErrors(dBz_vs_p, ";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;dB_{z}", ("../Images/MC/BzSim/"+config+"/Unblinded/DilutionFunction/dBz_vs_p_"+qual).c_str());

	return dBz_vs_p; 
}
*/

double DilutionFunction(double *x, double *par) {
  return (par[0] * x[0] * x[0]) + (par[1] * x[0]) + par[2]; 
}

void FitDilutionFunction(TGraphErrors *gr, double pmin, double pmax) { 

	TF1 *f_dBz = new TF1("DilutionFunction", DilutionFunction, pmin, pmax, 3);
	gr->Fit(f_dBz, "MR");

	return; 

}

TGraphErrors *GetDilutionGraph(TGraphErrors *in_gr, double Bz) { 

	int N = in_gr -> GetN();

	vector<double> x_; vector<double> ex_; 
	vector<double> y_; vector<double> ey_; 

	for (int i_point = 0; i_point < N; i_point++) { 

		// Copy x points
		x_.push_back(in_gr->GetPointX(i_point)); 
		ex_.push_back(0.);

		// Convert y points
		double y = in_gr->GetPointY(i_point) / (Bz * 1e-3); 
		// Haven't really verified this 
		double ey = y * sqrt( pow( (in_gr->GetErrorY(i_point)/in_gr->GetPointY(i_point)), 2));


		y_.push_back(y);//in_gr->GetPointY(i_point)); 
		ey_.push_back(ey);//in_gr->GetErrorY(i_point));

	}
	

	return GenerateTGraphErrors(x_, y_, ex_, ey_);
}

void DrawDilutionFit(TGraphErrors *graph, string title, string fname, double ymin, double ymax) { //, double N) { //, double ymin, double ymax) {

  TCanvas *c = new TCanvas("c","c",800,600);

  TF1 *func = graph->GetFunction("DilutionFunction");
  func->SetLineWidth(3);
  func->SetLineColor(kRed);
  func->SetNpx(1e4);  

  double chi2ndf = func->GetChisquare() / func->GetNDF();
  double par0 = func->GetParameter(0); double err0 = func->GetParError(0);
  double par1 = func->GetParameter(1); double err1 = func->GetParError(1);
  double par2 = func->GetParameter(2); double err2 = func->GetParError(2);

  TLegend *leg = new TLegend(0.30,0.175,.75,0.225);
  leg->SetNColumns(2);
  leg->AddEntry(graph, "Sim   ");
  leg->AddEntry(func,"ap^{2}+bp+d_{0}");//N_{0}e^{-t/#tau}[1+Acos(#omega_{a}t+#phi)]");
  leg->SetBorderSize(0);

  TPaveText *names = new TPaveText(0.58,0.62,0.65,0.89,"NDC");

  names->SetTextAlign(13);
  names->AddText("#chi^{2}/ndf");
  names->AddText("a");
  names->AddText("b");
  names->AddText("d_{0}"); 

  TPaveText *values = new TPaveText(0.70,0.62,0.89,0.89,"NDC");
  values->SetTextAlign(33); 
  values->AddText(Round(chi2ndf, 3));
  values->AddText(Round(par0,1)+"#pm"+Round(err0,1));
  values->AddText(Round(par1, 2)+"#pm"+Round(err1, 1));
  values->AddText(Round(par2, 1)+"#pm"+Round(err2, 1));

  TPaveText *cuts = new TPaveText(0.20,0.70,0.40,0.80,"NDC");
  cuts->SetTextAlign(22);
  cuts->AddText("1800 < p [MeV] < 3100");
  cuts->AddText("30 < t [#mus] < 300");

  names->SetTextSize(26);
  names->SetTextFont(44);
  names->SetFillColor(0);
  values->SetFillColor(0);
  values->SetTextFont(44);
  values->SetTextSize(26);
  cuts->SetFillColor(0);
  cuts->SetTextFont(44);
  cuts->SetTextSize(26);

  graph->SetTitle(title.c_str());

  //graph->GetXaxis()->SetRangeUser(0, G2PERIOD);
  //graph->GetXaxis()->SetRangeUser(ymin, ymax);
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.1);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
  graph->Draw("AP");

  values->Draw("same");
  names->Draw("same");
  //cuts->Draw("same");
  leg->Draw("same");
  func->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void PrintMaxMom(TGraphErrors *gr) { 

	TF1 *func = gr->GetFunction("DilutionFunction");  

	double par0 = func->GetParameter(0); double err0 = func->GetParError(0);
	double par1 = func->GetParameter(1); double err1 = func->GetParError(1);

	double dBz_max = -par1/(2*par0);
	double e_dBz_max = dBz_max * sqrt( pow( (err0/par0), 2 )  + pow( (err1/par1) , 2) );

	cout<<"Dilution is maximised for p = "<<dBz_max<<" ± "<<e_dBz_max<<endl;

 	return;

}
int main() { 

	double Bz = 1700; // ppm

	string inputName_reco = "../Plots/MC/BzSim/1700ppm/BzSim_unblindedFits_vertCorr_eQ_eQ.root";
	string inputName_true = "../Plots/MC/BzSim/1700ppm/BzSim_TruthFits_truth.root";

	TFile *input_reco = TFile::Open(inputName_reco.c_str());	
	TFile *input_true = TFile::Open(inputName_true.c_str());

	cout<<"Got reco file\t"<<inputName_reco<<", "<<input_reco<<endl;
	cout<<"Got true file\t"<<inputName_true<<", "<<input_true<<endl;

	TGraphErrors *gr_reco = (TGraphErrors*)input_reco->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_ABz_vs_p_slice");
	TGraphErrors *gr_true = (TGraphErrors*)input_true->Get("MomentumBinnedAnalysis/ParameterScans/ABz_vs_p_slice");

	cout<<"Got reco graph\t"<<gr_reco<<", "<<input_reco<<endl;
	cout<<"Got true graph\t"<<gr_true<<", "<<input_true<<endl;

	// Produce dilution graphs
	TGraphErrors *gr_dBz_reco = GetDilutionGraph(gr_reco, Bz);
	TGraphErrors *gr_dBz_true = GetDilutionGraph(gr_true, Bz);

	int step = 200; // MeV
	
	DrawTGraphErrors(gr_dBz_reco, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/gr_dBz_reco");
	DrawTGraphErrors(gr_dBz_true, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/gr_dBz_true");

	// Zoom on mid momenta 

	double pmin = 600; 
	double pmax = 2200;

	gr_dBz_reco->GetXaxis()->SetRangeUser(pmin, pmax); 
	gr_dBz_true->GetXaxis()->SetRangeUser(pmin, pmax); 

	gr_dBz_reco->GetYaxis()->SetRangeUser(.04, .15);
	gr_dBz_true->GetYaxis()->SetRangeUser(.1, .17);

	DrawTGraphErrors(gr_dBz_reco, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/gr_dBz_reco_"+to_string(int(pmin))+"_"+to_string(int(pmax)));
	DrawTGraphErrors(gr_dBz_true, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/gr_dBz_true_"+to_string(int(pmin))+"_"+to_string(int(pmax)));

	// Fit
	FitDilutionFunction(gr_dBz_reco, pmin+100, pmax-100);
	FitDilutionFunction(gr_dBz_true, pmin+100, pmax-100);

	// DrawTGraphErrors(gr_dBz_true, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/fit_dBz_true_"+to_string(int(pmin))+"_"+to_string(int(pmax)));
	DrawDilutionFit(gr_dBz_true, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/fit_dBz_true_"+to_string(int(pmin))+"_"+to_string(int(pmax)), pmin+100, pmax-100);
	// DrawTGraphErrors(gr_dBz_reco, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/fit_dBz_reco_"+to_string(int(pmin))+"_"+to_string(int(pmax)));
	DrawDilutionFit(gr_dBz_reco, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Dilution, d_{Bz}(p)", "../Images/MC/BzSim/"+to_string(int(Bz))+"ppm/d_Bz/fit_dBz_reco_"+to_string(int(pmin))+"_"+to_string(int(pmax)), pmin+100, pmax-100);

	cout<<"\nTrue"<<endl;
	PrintMaxMom(gr_dBz_true);
	cout<<"\nReco"<<endl;
	PrintMaxMom(gr_dBz_reco);

/*	string inputName = "../Plots/MC/BzSim/1700ppm/BzSim_dilutionFunc_eQ.root";
	TFile *input = TFile::Open(inputName.c_str());

	cout<<"Input file "<<inputName<<"\t"<<input<<endl;

	TGraphErrors *AEDM_vs_p = DilutionGraph(input);*/

	//FitDilutionFunction(AEDM_vs_p);

	return 0; 

}