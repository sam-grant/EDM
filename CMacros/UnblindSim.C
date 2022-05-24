// Test the unblinding
#include "EDMBlinding.h"

using namespace std;

// The injected A_EDM needs have the exact same scaling as the correction we use for dilution
// Currently it's just reduced by a flat 10% across the board.

void UnblindSim() { 

  	double dMu_blind = blinded_edm_value(false);  
  	double delta_blind = GetDelta(dMu_blind);
  	double omega_a = getBlinded.referenceValue(); 
  	double tan_A_edm = tan(delta_blind) / gmagic;
  	double A_edm = alpha*atan(tan_A_edm) * 1e3; 

  	// std::cout<<"Blinded dMu signal = "<<dMu_blind<<std::endl;
  	
  	cout<<"This is simulation! I use a different blinding string!"<<endl;
  	cout<<endl;

	TString finNameBlinded = "../Plots/MC/dMu/5.4e-18/Fits/edmResults_blinded_trackReco_WORLD_250MeV_BQ.root";
	TFile *finBlinded = TFile::Open(finNameBlinded);

	TString finNameUnblinded = "../Plots/MC/dMu/5.4e-18/Fits/edmResults_unblinded_trackReco_WORLD_250MeV_BQ.root";
	TFile *finUnblinded = TFile::Open(finNameUnblinded);

  	std::vector<std::string> stn_ = {"S12", "S18", "S12S18"};
  
  	// Retrieve results 
	TTree *resultTreeBlinded = (TTree*)finBlinded->Get("EDM/EDMTree");
	TTree *resultTreeUnblinded = (TTree*)finUnblinded->Get("EDM/EDMTree");

  	for(int i_stn(0); i_stn < stn_.size(); i_stn++) { 

		double blinded_result = 0; double blinded_error = 0;
        double unblinded_result = 0; double unblinded_error = 0;

    	resultTreeBlinded->SetBranchAddress("dMu", &blinded_result);
    	resultTreeBlinded->SetBranchAddress("dMu_err", &blinded_error);
    	resultTreeBlinded->GetEntry(i_stn);

        resultTreeUnblinded->SetBranchAddress("dMu", &unblinded_result);
    	resultTreeUnblinded->SetBranchAddress("dMu_err", &unblinded_error);
    	resultTreeUnblinded->GetEntry(i_stn);

    	//std::cout<<stn_.at(i_stn)<<": "<<result<<" ± "<<error<<std::endl;	
    	cout<<stn_.at(i_stn)<<endl;
    	std::cout<<"Blinding subtracted = "<<blinded_result-dMu_blind<<" ± "<<blinded_error<<std::endl;	
    	std::cout<<"No blinding = "<<unblinded_result<<" ± "<<unblinded_error<<std::endl;	
    	cout<<"Offset = "<<(blinded_result-dMu_blind)-unblinded_result<<endl;
    	cout<<endl;

    }

	finBlinded->Close();
	finUnblinded->Close();

	return;
}

int main() { 

	UnblindSim();

	return 0;

}