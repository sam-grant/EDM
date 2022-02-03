// This version has pretty colours (which was non-trivial)

#include <iostream>
#include <vector>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

#include "TTree.h"

void DrawGraph(vector<TGraphErrors*> gr_, vector<string> labels_, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr_.at(0)->SetTitle(title.c_str());
	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetYaxis()->SetTitleOffset(1.2);
	gr_.at(0)->GetXaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->SetMaxDigits(4);
	gr_.at(0)->GetYaxis()->SetRangeUser(-10,50);
	gr_.at(0)->GetXaxis()->LabelsOption("h");
	gr_.at(0)->SetMarkerSize(0);
	// gr_.at(0)->Draw();//"0AP");

	TLegend *leg = new TLegend(.75, .59, .89, .89);
	leg->SetBorderSize(0);

	vector<int> colors_ = {0, 4, 807, 8, 6, 2};
	
	for(int i = 0; i < gr_.size(); i++) { 

		//  Full circle
		if(i==0) gr_.at(i)->Draw("AP");
		else {
			gr_.at(i)->SetMarkerStyle(20);
			gr_.at(i)->SetMarkerColor(colors_.at(i));
			gr_.at(i)->SetLineColor(colors_.at(i));
			gr_.at(i)->Draw("P SAME");
			leg->AddEntry(gr_.at(i), labels_.at(i-1).c_str());
		}

		// DrawTGraphErrors(gr_.at(i), "", "../Images/plot_"+to_string(i));

	}

	// Set labels

	leg->Draw("SAME");
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


	TTree *tree = (TTree*)input->Get("RadialFieldValue/resultTree");

	double Br;
	double BrErr;

	tree->SetBranchAddress("Br", &Br);
	tree->SetBranchAddress("BrErr", &BrErr);

	tree->GetEntry(0);

	cout<<"Br\t"<<Br<<"±"<<BrErr<<endl;

	return make_tuple(Br, BrErr);

}


int main() { /// int argc, char *argv[]) {

	bool crossCheck = true;

	vector<string> datasets_ = {"Run-1", "Run-2", "Run-3", "Run-4", "Run-5"};

	vector<vector<string>> files_ = {
		{ "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991", "gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3_16113_16234", "gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3_16355_16514", "gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1_17065_17527" }
		, { "gm2pro_daq_offline_dqc_run2B_24576_24636", "gm2pro_daq_offline_dqc_run2C_24683_25045", "gm2pro_daq_offline_dqc_run2D_25894_26383", "gm2pro_daq_offline_dqc_run2E_26478_26611", "gm2pro_daq_offline_dqc_run2F_26675_26803", "gm2pro_daq_offline_dqc_run2G_26999_27042", "gm2pro_daq_offline_dqc_run2H_27166_27212" }
		, { "gm2pro_daq_offline_dqc_run3N_5207A_34184_34618", "gm2pro_daq_offline_dqc_run3O_5207A_34702_34920" }
		, {"Run4_Nearline_2021_37970_42811" }
		, {"Run5_Nearline_46235_46249" } 
		}; 

	vector<TString> names_ = {"1a", "1b", "1c", "1d", "2b", "2c", "2d", "2e", "2f", "2g", "2h" , "3N", "3O", "4", "5"};

	vector<TGraphErrors*> gr_;

	// First graph is a dummy to set the bin labels
	TGraphErrors *gr_dummy = new TGraphErrors();

	for(int i = 0; i<names_.size(); i++) { 
		gr_dummy->SetPoint(i, i+1, 1e6);
		gr_dummy->SetPointError(i, 0, 0);
	}

	for (int i = 0; i < gr_dummy->GetN(); i++) gr_dummy->GetXaxis()->SetBinLabel(gr_dummy->GetXaxis()->FindBin(i+1.), names_.at(i));

	gr_.push_back(gr_dummy);

	int count = 0;
	
	for(int i_ds = 0; i_ds < datasets_.size(); i_ds++) {

		TGraphErrors *gr = new TGraphErrors();

		for(int i_file = 0; i_file < files_.at(i_ds).size(); i_file++) { 

			TString inputName = "../Plots/radialFieldEstimationPlots_"+files_.at(i_ds).at(i_file);
			if(crossCheck) inputName += "_crossCheck.root";
			else inputName += ".root";

			TFile *input = TFile::Open(inputName);
			
			// Get radial field
			tuple<double, double> Br = GetBr(input);

			gr->SetPoint(i_file, count+1, get<0>(Br)); // x_.push_back(i_file+1); ex_.push_back(0.);
			gr->SetPointError(i_file, 0, get<1>(Br));

			count++;

		}

		gr_.push_back(gr);

	}

	string imageName = "../Images/Br_vs_DS/BrVsDS2"; 
	if(crossCheck) imageName += "_crossCheck";

	DrawGraph(gr_, datasets_, ";Dataset;#LTB_{r}#GT [ppm]", imageName);//"../Images/Br_vs_DS/BrVsDS2");

	return 0;


}