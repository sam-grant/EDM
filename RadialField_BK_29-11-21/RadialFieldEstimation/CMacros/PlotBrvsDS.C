#include <iostream>
#include <vector>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

#include "TTree.h"

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.2);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->GetXaxis()->LabelsOption("h");
	graph->Draw("0AP");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

tuple<double, double> GetBr_OLD(TFile *input) { 

	TH1D *hy = (TH1D*)input->Get("CaloAverage/h1_Br");

	double Br = hy->GetMean();
	double Br_RMS = hy->GetRMS();

	cout<<"Br = "<<Br<<endl;
	cout<<"RMS = "<<Br_RMS<<endl;

	return make_tuple(Br, Br_RMS);

}

tuple<double, double> GetBr(TFile *input) { 

//	TGraphErrors *gr = (TGraphErrors*)input->Get("CaloAverage/gr_BrEst");
//
//	double Br = gr->GetY()[0];//Mean();
//	double Br_RMS = gr->GetEY()[0];//hy->GetRMS();
//
//	cout<<"Br = "<<Br<<endl;
//	cout<<"RMS = "<<Br_RMS<<endl;

	TTree *tree = (TTree*)input->Get("RadialFieldValue/resultTree");

	double Br;
	double BrErr;

	// Should just be one
/*	int nEntries = tree->GetEntries();


	for(int i = 0; i<nEntries; i++) {

		tree->GetEntry(i);

		Br = 

	}*/

	tree->SetBranchAddress("Br", &Br);
	tree->SetBranchAddress("BrErr", &BrErr);

	tree->GetEntry(0);

	cout<<"Br\t"<<Br<<"±"<<BrErr<<endl;

	return make_tuple(Br, BrErr);

}


int main() { /// int argc, char *argv[]) {

//

	string files[] = { "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991"
		, "gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3_16113_16234"
		, "gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3_16355_16514"
		, "gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1_17065_17527"
		, "gm2pro_daq_offline_dqc_run2B_24576_24636"
		, "gm2pro_daq_offline_dqc_run2C_24683_25045"
		, "gm2pro_daq_offline_dqc_run2D_25894_26383"
		, "gm2pro_daq_offline_dqc_run2E_26478_26611"
		, "gm2pro_daq_offline_dqc_run2F_26675_26803"
		, "gm2pro_daq_offline_dqc_run2G_26999_27042"
		, "gm2pro_daq_offline_dqc_run2H_27166_27212"
		, "gm2pro_daq_offline_dqc_run3N_5207A_34184_34618"
		, "gm2pro_daq_offline_dqc_run3O_5207A_34702_34920"
		, "Run4_Nearline_2021_37970_42811"
		, "Run5_Nearline_46235_46249" }; 

	string names[] = { "1a", "1b", "1c", "1d", "2b", "2c", "2d", "2e", "2f", "2g", "2h", "3N", "3O", "4", "5" };

	int n = sizeof(files)/sizeof(files[0]);

	vector<double> x_; vector<double> ex_;
	vector<double> y_; vector<double> ey_;

	bool fromFile = true; 

	vector<TGraphErrors*> gr_;

	if(fromFile) { 


	for(int i_file = 0; i_file < n; i_file++) {

		TFile *input = TFile::Open(("../Plots/radialFieldEstimationPlots_"+files[i_file]+".root").c_str());

		cout<<files[i_file]<<endl;

		tuple<double, double> Br = GetBr(input);

		x_.push_back(i_file+1); ex_.push_back(0.);
		y_.push_back(get<0>(Br)); ey_.push_back(get<1>(Br));

	}

	} else { 

		y_ = {22.1396, 20.5687, 26.8274, 34.22, 11.2343, 14.7964, 17.2619, 12.6338, 12.5642, 14.691, 16.3376, 10.8104, 10.7335}; 
		ey_ = {7.27526, 7.41298, 7.46213, 8.739, 3.53499, 3.71805, 6.02703, 3.50215, 3.50023, 4.93682, 4.95431, 4.95804,  5.38976};

		for(int i_file = 0; i_file < n; i_file++) {
			x_.push_back(i_file+1);
			ex_.push_back(0.);
		}
	}

	cout<<x_.size()<<", "<<ex_.size()<<", "<<y_.size()<<", "<<ey_.size()<<endl;

	TGraphErrors *gr = GenerateTGraphErrors(x_, y_, ex_, ey_); 

	for (int i = 0; i < n; i++) gr->GetXaxis()->SetBinLabel(gr->GetXaxis()->FindBin(i+1.), names[i].c_str());

	DrawGraph(gr, ";Dataset;#LTB_{r}#GT [ppm]", "../Images/Br_vs_DS/BrVsDS");

/*	TFile *input = TFile::Open(fname.c_str());

	cout<<"Analysing "<<fname<<endl;

	tuple<double, double> Br = GetBr(input);*/



	return 0;


}