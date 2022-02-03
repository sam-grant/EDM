void DrawTGraph(TGraph *graph, std::string title, std::string fname) {

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
	graph->Draw("APL");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());
	
	delete c;

	return;

}

void Run(std::string config) { 

	std::string finName = "../Plots/Data/AlignmentAndAcceptance/Verify/trackRecoPlots_"+config+".root";
	TFile* fin  = new TFile(finName.c_str());
	std::cout << "Reading file " << finName << ", " << fin << std::endl;

	vector<int> stn_ = { 0, 12, 18 };

	for(auto& stn : stn_) {

		std::string grName = "Extrapolation/strawGeometry/strawGeometry_worldCoordsYn_station"+to_string(stn);
		TGraph *gr = (TGraph*)fin->Get(grName.c_str()); 
		std::cout << "Got graph " << grName << ", " << gr << std::endl;

		std::string title = ";Module number;World y-position [mm]";
		if(config == "nominal") title = "Nominal"+title;
		else if(stn == 12 && config == "1mm") title = "#plus1 mm offset from nominal"+title; 
		else if(stn == 18 && config == "1mm") title = "#plus1 mm offset from nominal"+title; 

		DrawTGraph(gr, title, "../Images/Data/AlignmentAndAcceptance/Verify/S"+to_string(stn)+"_worldYn_"+config); 


	}

	fin->Close();

	return; 


}

void globalAlignmentComparison() { 

	Run("nominal");
	Run("1mm");

	return;

}