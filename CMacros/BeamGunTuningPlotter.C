#include <iostream>

#include "TFile.h"
#include "TH1D.h"

#include "FancyDraw.h"

using namespace std;

void GetTuningPlots(vector<string> names_) {


	for( int i_file = 0; i_file < names_.size(); i_file++ ) {

		TFile *input = TFile::Open( ("../Plots/MC/RadialField/BeamGunTuning/beamGunTuningPlots_"+names_.at(i_file)+".root").c_str() );

		TH1D *h_y = (TH1D*)input->Get("all/Y");
		TH1D *h_p = (TH1D*)input->Get("all/P");

		TH2D *h_y_vs_t = (TH2D*)input->Get("all/Y_vs_t");
		TH2D *h_px_vs_t = (TH2D*)input->Get("all/Px_vs_t");
		TH2D *h_pz_vs_t = (TH2D*)input->Get("all/Pz_vs_t");

		DrawTH1(h_y,names_.at(i_file)+";Y [mm];Ghost tracks", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Y").c_str() );
		DrawTH1(h_p,names_.at(i_file)+";Momentum [MeV];Ghost tracks", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/P").c_str() );

		DrawTH2(h_y_vs_t,names_.at(i_file)+";t [ns];Y [mm]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Y_vs_t").c_str() );
		DrawTH2(h_px_vs_t,names_.at(i_file)+";t [ns];Px [MeV]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Px_vs_t").c_str() );
		DrawTH2(h_pz_vs_t,names_.at(i_file)+";t [ns];Pz [MeV]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Pz_vs_t").c_str() );

	}

	return;

}
int main() {

	vector<string> names_; 
	names_.push_back("-50ppm"); names_.push_back("0ppm"); names_.push_back("50ppm");

	GetTuningPlots(names_);

	return 0;
}

