#include "FancyDraw.h"

void Run(std::string config) { 

	std::string finName = "../Plots/Data/AlignmentAndAcceptance/test/trackRecoPlots_"+config+".root";
	TFile *fin = TFile::Open(finName.c_str());
  	cout<<"\nOpened file:\t"<<fin<<" "<<finName<<endl;

  	// Get reader for tree
  	TTreeReader treeReader("trackerNTup/TrackerMCDecayTree",fin);

   	// Get branches
  	TTreeReaderValue<int> station(treeReader,"station");
  	//TTreeReaderValue<double> subRunNum(treeReader,"recoVertexPosX");
  	TTreeReaderValue<float> recoVertexPosY(treeReader,"recoVertexPosY");
  	//TTreeReaderValue<double> ctag(treeReader,"recoVertexPosZ");

  	TH1D *h_recoVertexPosY_0 = new TH1D("S10_recoVertexPosY", ";Reco vertex pos Y [mm];Vertices", 200, -100, 100);
  	TH1D *h_recoVertexPosY_12 = new TH1D("S12_recoVertexPosY", ";Reco vertex pos Y [mm];Vertices", 200, -100, 100);
  	TH1D *h_recoVertexPosY_18 = new TH1D("S18_recoVertexPosY", ";Reco vertex pos Y [mm];Vertices", 200, -100, 100);

  	//std::map<int, double> hists_ = { {0, h_recoVertexPosY_0}, {12, h_recoVertexPosY_12}, {18, h_recoVertexPosY_18} };

  	while (treeReader.Next()){

    	// Get leaves
    	int station_ = *station;
    	float recoVertexPosY_ = *recoVertexPosY;

    	// cout<<station_<<endl;
    	// cout<<recoVertexPosY_<<endl;

    	// There is a smarter way of doing this but this is fine
    	if(station_ == 0) h_recoVertexPosY_0->Fill(recoVertexPosY_);
    	else if(station_ == 12) h_recoVertexPosY_12->Fill(recoVertexPosY_);
    	else if(station_ == 18) h_recoVertexPosY_18->Fill(recoVertexPosY_);

    }

    DrawTH1(h_recoVertexPosY_0, "S0 "+config+";Reco vertex pos Y [mm];Vertices", "../Images/Data/AlignmentAndAcceptance/test/h_recoVertexPosY_0_"+config);
    DrawTH1(h_recoVertexPosY_12, "S12 "+config+";Reco vertex pos Y [mm];Vertices", "../Images/Data/AlignmentAndAcceptance/test/h_recoVertexPosY_12_"+config);
    DrawTH1(h_recoVertexPosY_18, "S18 "+config+";Reco vertex pos Y [mm];Vertices", "../Images/Data/AlignmentAndAcceptance/test/h_recoVertexPosY_18_"+config);

  	fin->Close();

	return;

}

void ReadTestTree() { 

	Run("1mm"); // "../Plots/Data/AlignmentAndAcceptance/test/trackRecoPlots_1mm.root");
	Run("10mm");
	Run("0mm");

	return;

}