#include <iostream>

#include "TFile.h"
#include "TH1D.h"

#include "FancyDraw.h"

using namespace std;

int main() {

	TFile *input = TFile::Open("../Plots/MC/RadialField/BeamGunTuning/beamGunTuningPlots.root");

	TH1D *h_y = (TH1D*)input->Get("all/Y");
	TH1D *h_p = (TH1D*)input->Get("all/P");

	TH2D *h_y_vs_t = (TH2D*)input->Get("all/Y_vs_t");
	TH2D *h_px_vs_t = (TH2D*)input->Get("all/Px_vs_t");
	TH2D *h_pz_vs_t = (TH2D*)input->Get("all/Pz_vs_t");

	DrawTH1(h_y,";Y [mm];Ghost tracks","../Images/MC/BeamGunTuning/Y");
	DrawTH1(h_p,";Momentum [MeV];Ghost tracks","../Images/MC/BeamGunTuning/P");

	DrawTH2(h_y_vs_t,";t [#mus (maybe)];Y [mm]","../Images/MC/BeamGunTuning/Y_vs_t");
	DrawTH2(h_px_vs_t,";t [#mus (maybe)];Px [MeV]","../Images/MC/BeamGunTuning/Px_vs_t");
	//h_pz_vs_t->GetYaxis()->SetRangeUser(0,40);
	DrawTH2(h_pz_vs_t,";t [#mus (maybe)];Pz [MeV]","../Images/MC/BeamGunTuning/Pz_vs_t");

	// Go plane by plane
	int nPlanes = 48;

/*	for( int i_plane = 0; i_plane < nPlanes; i_plane++ ) {

		h_y = (TH1D*)input->Get( ("all/planes/Y_"+to_string(i_plane)).c_str() );
		h_p = (TH1D*)input->Get( ("all/planes/P_"+to_string(i_plane)).c_str() );

		DrawTH1(h_y,"Plane "+to_string(i_plane)+";Y [mm];Ghost tracks", "../Images/MC/BeamGunTuning/Planes/Y_"+to_string(i_plane) );
		DrawTH1(h_p,"Plane "+to_string(i_plane)+";Momentum [MeV];Ghost tracks", "../Images/MC/BeamGunTuning/Planes/P_"+to_string(i_plane) );

	}

*/

	return 0;
}

