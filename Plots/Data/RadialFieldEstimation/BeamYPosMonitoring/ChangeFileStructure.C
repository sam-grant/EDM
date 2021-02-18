#include <iostream>

#include "TFile.h"
#include "TH1D.h"

using namespace std;

int main(int argc, char *argv[]) { 

	string run = argv[1];

	TFile *in = TFile::Open( ("Run4_Jan/y-pos_"+run+".root").c_str() , "READ");

	TFile *out = new TFile( ("Run4_Jan/y-pos_"+run+"_corrected.root").c_str(),"RECREATE");

	TH1D *hy = (TH1D*)in->Get("hy");

	out->mkdir("CaloBeamPosition"); out->cd("CaloBeamPosition");

	hy->Write("clusterY");

	out->mkdir("CaloBeamPosition/PerCalo"); out->cd("CaloBeamPosition/PerCalo");

	for (int i_calo = 1; i_calo < 25; i_calo++) { 

		TH1D *hy_calo = (TH1D*)in->Get(("PerCalo/hy_"+to_string(i_calo)).c_str());

		if(hy_calo==0) continue; 

		hy_calo->Write(("clusterY_"+to_string(i_calo)).c_str());

	}

	out->Close();
	in->Close();

	return 0;
}