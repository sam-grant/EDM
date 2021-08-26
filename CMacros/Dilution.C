#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

const double delta_calc = 1.7; // mrad

void DrawGraphs(vector<TGraphErrors*> graphs_, vector<string> labels_, std::string title, std::string fname, bool corr, double ymin, double ymax) {

  TCanvas *c = new TCanvas("c","c",800,600);

  TLegend *l;
  if(corr) l = new TLegend(0.15, 0.69, 0.35, 0.89);
  else l =  new TLegend(0.69, 0.69, 0.89, 0.89);
//  l->SetNColumns(3);
  l->SetBorderSize(0);

  // NOTES: not using this functionality atm, is it worth it?
  // Hack together x-axis range 
  int N = graphs_.at(0)->GetN();
  double xmax = graphs_.at(0)->GetPointX(N-1); 
  double xmin = graphs_.at(0)->GetPointX(0);// Cut lowest momentum bin - 50; 

  double offset = (xmax - xmin) * 0.2;
  xmin = xmin - offset; 
  xmax = xmax + offset;

  vector<int> colors_ = {1, 2, 4};

  //for(int i_gr = 0; i_gr < graphs_.size(); i_gr++) { 

  int i_gr = 0;

  for(auto& gr : graphs_) { 

  	gr->SetTitle(title.c_str());
  	gr->GetXaxis()->SetTitleSize(.04);
  	gr->GetYaxis()->SetTitleSize(.04);
  	gr->GetXaxis()->SetTitleOffset(1.1);
  	gr->GetYaxis()->SetTitleOffset(1.1);
  	gr->GetXaxis()->CenterTitle(true);
  	gr->GetYaxis()->CenterTitle(true);
  	gr->GetYaxis()->SetMaxDigits(4);
  	gr->GetYaxis()->SetRangeUser(ymin,ymax);

  	gr->GetXaxis()->SetRangeUser(-50, 3050); // xmin, xmax);
  	gr->SetMarkerStyle(20);
  	gr->SetMarkerColor(colors_.at(i_gr));

  	if(i_gr==0) gr->Draw("AP");
  	else gr->Draw("P");

  	TF1 *fnc = gr->GetFunction("ParabolaFunc");

  	if(fnc!=0) {
			fnc->SetLineColor(colors_.at(i_gr));
			fnc->Draw("same");
		}

  	l->AddEntry(gr, (labels_.at(i_gr)).c_str());

  	i_gr++;

  }

  l->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());


  delete c;

  return;

}

double ParabolaFunc(double *x, double *par) {
  return par[0] * pow(x[0],2) + par[1] * x[0] + par[2];
}


void ParabolaFit(TGraphErrors *graph, string name, bool corr) { // double p0, double p1, double p2, 
  
  TF1 *fnc = new TF1("ParabolaFunc", ParabolaFunc, 0, 3000, 3);

/*  if(name == "truthAllDecays") { 
  	fnc->SetParameter(0, -11e-10);
  	fnc->SetParameter(1, 4e-06);
  	fnc->SetParameter(2, -4e-04);
  }*/
  if(corr) {
	  if(name == "trackReco") {
	  	fnc->SetParameter(0, -7.0e-11);
	  	fnc->SetParameter(1, 2e-07);
	  	fnc->SetParameter(2, -5.0e-05);
	  } else if(name == "truth") { 
	  	fnc->SetParameter(0, -8.5e-10);
	  	fnc->SetParameter(1, 3.5e-06);
	  	fnc->SetParameter(2, -6.0e-04);
	  } else if(name == "truthAllDecays") { 
	  	fnc->SetParameter(0, -1.2e-10);
	  	fnc->SetParameter(1, 4.5e-06);
	  	fnc->SetParameter(2, -6.5e-04);
	  }
	} else {
	  if(name == "trackReco") {
	  	fnc->SetParameter(0, -6e-8);
	  	fnc->SetParameter(1, 2.0e-4);
	  	fnc->SetParameter(2, 0.05);
	  } else if(name == "truth") { 
	  	fnc->SetParameter(0, -5.5e-8);
	  	fnc->SetParameter(1, 8.0e-5);
	  	fnc->SetParameter(2, 2.5e-1);
	  } else if(name == "truthAllDecays") { 
	  	fnc->SetParameter(0, -5.5e-8);
	  	fnc->SetParameter(1, 7.0e-5);
	  	fnc->SetParameter(2, 3.0e-1);
	  }
	}

  graph->Fit(fnc, "R"); 	

  return;

}

TGraphErrors *RemoveSpuriousPoint(TGraphErrors *gr) {

	int n = gr->GetN();

	double x[n-1]; double ex[n-1]; 
	double y[n-1]; double ey[n-1];

	int counter = 0;

	for(int i = 0; i<n; i++) { 

		if(i==1) continue;

		x[counter] = gr->GetX()[i]; ex[counter] = gr->GetEX()[i];
		y[counter] = gr->GetY()[i]; ey[counter] = gr->GetEY()[i];

		counter++;

	}

	if(counter != n-1) cerr<<"ALERT";

	return new TGraphErrors(counter, x, y, ex, ey);

}

TGraphErrors *ConvertToDilution(TGraphErrors *gr) {

	int n = gr->GetN();

	double x[n]; double ex[n]; 
	double y[n]; double ey[n];

	for(int i = 0; i<n; i++) { 

		x[i] = gr->GetX()[i]; ex[i] = gr->GetEX()[i];
		y[i] = gr->GetY()[i] / delta_calc; ey[i] = gr->GetEY()[i] / delta_calc;

	}

	return new TGraphErrors(n, x, y, ex, ey);

}



void RunAEDM(int step, string frame, bool corr, double ymin, double ymax, TFile *output) {

	string dname = "";//DilutionFits/d_vs_p_"+to_string(step)+"MeV";

	if(!corr) dname += "DilutionFits/d_vs_p_"+to_string(step)+"MeV";
	else if(corr) dname += "DilutionFits/dOverThetaYDiff_vs_p_"+to_string(step)+"MeV";

	output->mkdir(dname.c_str()); 

	string type = "";
	if(corr) type += "AOverMaxDiff";
	else type += "A";

	cout<<"\n***************************\nRunning with:\nstep: "<<step<<"\nframe: "<<frame<<"\ntype: "<<type<<"\n***************************"<<endl;

	vector<string> names_ = {"trackReco", "truth", "truthAllDecays"};
	vector<string> labels_ = {"Reco (tracks)", "Truth (tracks)", "Truth (all decays)"}; //{"Track reco", "Track truth", "All truth"};

	vector<TGraphErrors*> graphs_; 

	for(string name : names_) {

		string fn = "../Plots/MC/dMu/5.4e-18/fits/dMuSim_unblinded_"+name+"_"+frame+"_"+to_string(step)+"MeV_AQ.root";//
		// if(name == "trackReco") fn += "_BQ.root"; 
		// else fn += "_AQ.root";

		TFile *f = TFile::Open(fn.c_str()); 

		cout<<"***************************\nOpened file "<<fn<<", "<<f<<"\n***************************"<<endl;

		string grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/";
		if(name == "trackReco") grn += "S0S12S18_"+type+"_vs_p";
		else grn += type+"_vs_p";

		TGraphErrors *gr = (TGraphErrors*)f->Get(grn.c_str());

		if(false) {
			gr = RemoveSpuriousPoint(gr);
		}

		if(true) { 
			gr = ConvertToDilution(gr);
		}


		gr->SetName(name.c_str());

		// Remove spurious data point
		//TGraphErrors *gr = RemoveSpuriousPoint(gr);

		// Fit
		ParabolaFit(gr, name, corr);

		TF1 *fnc = gr->GetFunction("ParabolaFunc");

		cout<<"chisqr/ndf\t"<<fnc->GetChisquare() / fnc->GetNDF()<<endl;

		graphs_.push_back(gr);

		f->Close();

	}

	string title = ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2);

	if(corr) title += ";d_{EDM}(p) / #Delta_{max}#theta_{y}(p)";
	else title += ";d_{EDM}(p)";

	// if(corr) title += ";A_{EDM} / #Delta_{max}#theta_{y}";
	// else title += ";A_{EDM} [mrad]";

	DrawGraphs(graphs_, labels_, title, "../Images/MC/Dilution/dMu/Overlay_"+type+"_vs_p_"+frame+"_"+to_string(step)+"MeV", corr, ymin, ymax);


	// Write

	output->cd(dname.c_str());
	for(auto& gr : graphs_) gr->Write();		

	return; 

}

int main() { 

	string fname = "../Plots/MC/dMu/5.4e-18/fits/dilution.root";
	TFile *output = new TFile(fname.c_str(), "RECREATE");

	output->mkdir("DilutionFits"); output->cd("DilutionFits");

	// Get the dilution for all graphs at 500 MeV step and AAR frame
	output->mkdir("DilutionFits/d_vs_p_500MeV");
	output->cd("DilutionFits/d_vs_p_500MeV");

	RunAEDM(500, "AAR", false, 0, 2.25e-1, output);

	output->mkdir("DilutionFits/dOverThetaYDiff_vs_p_500MeV");
	output->cd("DilutionFits/dOverThetaYDiff_vs_p_500MeV");

	RunAEDM(500, "AAR", true, -5e-4, 2.25e-3, output); 

	output->Write();
	output->Close();

	cout<<"\nWritten fits to "<<fname<<", "<<output<<endl;

/*	
	These ones are for pure A_EDM
	RunAEDM(500, "AAR", false, 0, 3.65e-1);
	RunAEDM(200, "AAR", false, -1, .65);

	RunAEDM(500, "AAR", true, -5e-4, 3.65e-3); 
	RunAEDM(200, "AAR", true, -5e-3, 4.5e-3); */


	// RunThetaYMax(500, "AAR", 0, 1200);//3.65e-3); 
	// Run(200, "AAR", true, 0, 3.65e-3); 
	//Run(500, "WORLD", true, 0, 3.65e-3); 

	return 0; 

}

/*void RunThetaYMax(int step, string frame, double ymin, double ymax) {

	string type = "thetaYMaxDiff";

	cout<<"\n***************************\nRunning with:\nstep: "<<step<<"\nframe: "<<frame<<"\ntype: "<<type<<"\n***************************"<<endl;

	vector<string> names_ = {"trackReco", "truth", "truthAllDecays"};
	vector<string> labels_ = {"Reco (tracks)", "Truth (tracks)", "Truth (all decays)"}; //{"Track reco", "Track truth", "All truth"};

	vector<TGraphErrors*> graphs_; 

	for(string name : names_) {

		string fn = "../Plots/MC/dMu/5.4e-18/fits/dMuSim_unblinded_"+name+"_"+frame+"_"+to_string(step)+"MeV_AQ.root"; 
		TFile *f = TFile::Open(fn.c_str()); 

		cout<<"***************************\nOpened file "<<fn<<", "<<f<<"\n***************************"<<endl;

		string grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/";
		if(name == "trackReco") grn += "S0S12S18"+type+"_vs_p";
		else grn += type+"_vs_p";

		TGraphErrors *gr = (TGraphErrors*)f->Get(grn.c_str());

		graphs_.push_back(gr);

		f->Close();

	}

	string title = ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#Delta_{max}#theta_{y} [mrad];";

	DrawGraphs(graphs_, labels_, title, "../Images/MC/Dilution/dMu/Overlay_"+type+"_vs_p_"+frame+"_"+to_string(step)+"MeV", false, ymin, ymax);

	return; 

}*/