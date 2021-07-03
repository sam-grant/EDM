vector<double> amplitudes_ = {0.00015250308636912866, 0.00120436090892464, 0.0011706730320237729, 0.0013718481073868324, 0.0015420154112825708, 0.0018917573750741395, 0.0015428372172399747, 0.0014042626415537844, 0.0007590097434969396, 0.0003459238920156817, 0.0001584363028252741, 9.344678374958467e-05, 1.2749273514697523e-05, 0.00016633979139590914, 4.602343045579128e-05};
vector<double> uncerts_ = {0.0008998935826999498, 0.00024129939442908176, 0.00018598585569996824, 0.0001456446898970667, 0.00012733762570160125, 0.000115189443912352, 0.00010404903451909034, 0.00010304329318164436, 8.115040597620191e-05, 7.317090781298628e-05, 7.275948144038407e-05, 7.450821305760942e-05, 7.02592554107893e-05, 6.911564343063349e-05, 6.469727535507325e-05};
vector<double> x_ = {100, 300, 500, 700, 900, 1100, 1300, 1500, 1700, 1900, 2100, 2300, 2500, 2700, 2900};

TGraphErrors *GenerateTGraphErrors(std::vector<double> x_, std::vector<double> y_, std::vector<double> ex_, std::vector<double> ey_) {

  int n = x_.size();
  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for(int i = 0; i < n; i++) {
    x[i] = x_.at(i); ex[i] = ex_.at(i);
    y[i] = y_.at(i); ey[i] = ey_.at(i);
  }

  return new TGraphErrors(n, x, y, ex, ey);

}

void DrawOverlay(TGraphErrors *graph1, TGraphErrors *graph2, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph1->SetTitle(title.c_str());
	graph1->GetXaxis()->SetTitleSize(.04);
	graph1->GetYaxis()->SetTitleSize(.04);
	graph1->GetXaxis()->SetTitleOffset(1.1);
	graph1->GetYaxis()->SetTitleOffset(1.2);
	graph1->GetXaxis()->CenterTitle(true);
	graph1->GetYaxis()->CenterTitle(true);
	graph1->GetYaxis()->SetMaxDigits(4);
	graph1->SetMarkerStyle(20); //  Full circle
	graph2->SetMarkerStyle(24);
	graph1->Draw("AP");
	graph2->Draw("P SAME");
	//c->SetGridx();
	TLegend *leg = new TLegend(.69, .69, .89, .89);
	leg->AddEntry(graph1, "gm2ringsim");
	leg->AddEntry(graph2, "EDMSim");
	leg->SetBorderSize(0);
	leg->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());



	delete c;

	return;

}
void Run(bool boost) {

	// Get gm2ringsim

	string inputFname = "../../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_AAR_200MeV_AQ.root";
	string graphName = "MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p";

	TFile *input = TFile::Open(inputFname.c_str());
	TGraphErrors *gr_ringsim = (TGraphErrors*)input->Get(graphName.c_str());

	cout<<"\nGot file "<<inputFname<<", "<<input<<endl;
	cout<<"Got graph "<<graphName<<", "<<gr_ringsim<<endl;

	// Create EDM sim graph
	vector<double> ex_;
	vector<double> y_; 
	vector<double> ey_;

	for(int i = 0; i < x_.size(); i++) { 
		ex_.push_back(100.);
		y_.push_back(amplitudes_.at(i)*1e3);
		ey_.push_back(uncerts_.at(i)*1e3);
	}	

	TGraphErrors *gr_edmsim = GenerateTGraphErrors(x_, y_, ex_, ey_);//amplitudes_, uncerts_);
	

	// Normalise to max 
	double sf_ringsim = 1/TMath::MaxElement(gr_ringsim->GetN(),gr_ringsim->GetY());
	double sf_edmsim = 1/TMath::MaxElement(gr_edmsim->GetN(),gr_edmsim->GetY());
	for (int i=0;i<gr_ringsim->GetN();i++) {
		gr_ringsim->GetY()[i] *= sf_ringsim;
		gr_edmsim->GetY()[i] *= sf_edmsim;

		gr_ringsim->GetEY()[i] *= sf_ringsim;
		gr_edmsim->GetEY()[i] *= sf_edmsim;
	}

//	gr_ringsim->Scale(100);
	gr_ringsim->GetYaxis()->SetRangeUser(-0.25,1.25);

	DrawOverlay(gr_ringsim, gr_edmsim, ";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100;A_{EDM} [a.u.]", "tmp");


	return;
}


void Overlay_AEDM_vs_p() {

	bool boost = false;
	Run(boost);

	return; 
}