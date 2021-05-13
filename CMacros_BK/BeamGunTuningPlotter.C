#include <iostream>
#include <sstream>

#include "TFile.h"
#include "TH1D.h"
#include "TGraphErrors.h"

#include "FancyDraw.h"

using namespace std;

void GetTuningPlots(vector<string> names_) {


	for( int i_file = 0; i_file < names_.size(); i_file++ ) {

		TFile *input = TFile::Open( ("../Plots/MC/RadialField/BeamGunTuning/beamGunTuningPlots_"+names_.at(i_file)+".root").c_str() );

		TH1D *h_y = (TH1D*)input->Get("all/Y");
		TH1D *h_p = (TH1D*)input->Get("all/P");

		TH1D *h_y_0 = (TH1D*)input->Get("all/planes/Y_30");
		TH1D *h_p_0 = (TH1D*)input->Get("all/planes/P_0");

		TH2D *h_y_vs_t = (TH2D*)input->Get("all/Y_vs_t");
		TH2D *h_px_vs_t = (TH2D*)input->Get("all/Px_vs_t");
		TH2D *h_pz_vs_t = (TH2D*)input->Get("all/Pz_vs_t");

		TH2D *h_y_vs_t_0 = (TH2D*)input->Get("all/planes/Y_vs_t_0");
		TH2D *h_px_vs_t_0 = (TH2D*)input->Get("all/planes/Px_vs_t_0");
		TH2D *h_pz_vs_t_0 = (TH2D*)input->Get("all/planes/Pz_vs_t_0");

		DrawTH1(h_y,names_.at(i_file)+";Y [mm];Ghost tracks", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Y").c_str() );
		DrawTH1(h_p,names_.at(i_file)+";Momentum [MeV];Ghost tracks", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/P").c_str() );

		DrawTH1(h_y_0,names_.at(i_file)+";Y [mm];Ghost tracks", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Y_0").c_str() );
		DrawTH1(h_p_0,names_.at(i_file)+";Momentum [MeV];Ghost tracks", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/P_0").c_str() );

		DrawTH2(h_y_vs_t,names_.at(i_file)+";t [ns];Y [mm]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Y_vs_t").c_str() );
		DrawTH2(h_px_vs_t,names_.at(i_file)+";t [ns];Px [MeV]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Px_vs_t").c_str() );
		DrawTH2(h_pz_vs_t,names_.at(i_file)+";t [ns];Pz [MeV]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Pz_vs_t").c_str() );

		DrawTH2(h_y_vs_t_0,names_.at(i_file)+";t [ns];Y [mm]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Y_vs_t_0").c_str() );
		DrawTH2(h_px_vs_t_0,names_.at(i_file)+";t [ns];Px [MeV]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Px_vs_t_0").c_str() );
		DrawTH2(h_pz_vs_t_0,names_.at(i_file)+";t [ns];Pz [MeV]", ("../Images/MC/BeamGunTuning/"+names_.at(i_file)+"/Pz_vs_t_0").c_str() );
	}

	return;

}

void GetKickerTimingPlots(vector<string> names_) {



	for( int i_plane = 0; i_plane < 42; i_plane++ ) {

	//if(i_plane!=0) continue;

	cout<<"\n+++++++++++++++++++ Plane "<<i_plane<<"+++++++++++++++++++"<<endl;


	int n = names_.size();
	double x[n]; double y[n]; double zeros[n]; double ey[n];


		for( int i_file = 0; i_file < names_.size(); i_file++ ) {

			TFile *input = TFile::Open( ("../Plots/MC/RadialField/BeamGunTuning/KickerTimingScan/beamGunTuningPlots_"+names_.at(i_file)+".root").c_str() );

			//TH1D *h_ntuns = (TH1D*)input->Get("all/nTurns");
			TH1D *h_nturns = (TH1D*)input->Get( ("planes/nTurns_"+to_string(i_plane)).c_str() );

			double totEvents = h_nturns->Integral(1,5000);
      		double nStored = h_nturns->Integral(20,5000);

      		double sf = h_nturns->Integral(20,5000)*100/h_nturns->Integral(1,5000);
      		double sferr = 2/pow(nStored,0.5);

      		if(totEvents==0 || nStored == 0 || sf==0) continue;

      		//assert(totEvents==h_nturns->GetEntries());
      		cout<<"Timing:\t"<<names_.at(i_file)<<endl;
			cout<<"Storage:\t"<<sf<<"+/-"<<sferr<<endl;
			stringstream str(names_.at(i_file));
			double tmp = 0.;
			str >> tmp; 
			x[i_file] = tmp; y[i_file] = sf; zeros[i_file] = 0.; ey[i_file] = sferr;

			input->Close();

		}

		TGraphErrors *gr = new TGraphErrors(n, x, y, zeros, ey);
		gr->GetYaxis()->SetRangeUser(0,3);
		DrawTGraphErrors(gr, "Plane "+to_string(i_plane)+";Timing [ns];#mu^{+} storage [%]","../Images/MC/BeamGunTuning/KickerTimingScan/storage_vs_timing_"+to_string(i_plane));
	}


	return;

}
int main() {

	vector<string> names_; 
	// names_.push_back("-50ppm"); names_.push_back("0ppm"); names_.push_back("0ppm_20turns"); names_.push_back("0ppm_20thTurn"); names_.push_back("0ppm_20-30Turns"); names_.push_back("50ppm");
	//names_.push_back("0ppm_20thTurn");
	
	//names_.push_back("-255"); names_.push_back("-305"); names_.push_back("-355"); 
	//names_.push_back("-455"); 
	names_.push_back("-505"); names_.push_back("-555");names_.push_back("-605"); names_.push_back("-655"); names_.push_back("-705");
	
	//names_.push_back("0ppm");
	//GetTuningPlots(names_);
	//names_.push_back("-605");
	GetKickerTimingPlots(names_);

	return 0;
}

