vector<TH1F*> NormaliseHists(vector<TH1F*> hists_) {

	for(int i = 0; i < hists_.size(); i++) {
		hists_.at(i)->Scale(1/hists_.at(i)->Integral());
	}

	return hists_;
}


double FindYMax(vector<TH1F*> hists_) { 

	double y_max = -1; 

	for(auto hist : hists_) { 

		double max = hist->GetMaximum();
		if(max > y_max) y_max = max;

	}

	return y_max;

}

void DrawManyHists(std::vector<TH1F*> hists_, std::vector<string> names, std::string title, std::string fname, bool norm) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.20,0.50,0.50,0.85);
	TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	l->SetBorderSize(0);

	hists_.at(0)->SetTitle(title.c_str());
	hists_.at(0)->GetXaxis()->SetTitleSize(.04);
	hists_.at(0)->GetYaxis()->SetTitleSize(.04);
	hists_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetXaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->SetMaxDigits(4);
	hists_.at(0)->SetStats(0);


	int n = hists_.size();

	//gStyle->SetPalette(kRainBow);

	if(norm) hists_ = NormaliseHists(hists_);

	double y_max = FindYMax(hists_);
	y_max = y_max + y_max*0.05;

	for(int i = 0; i < n; i++) {

		//if(norm) hists_.at(i)->Scale(1/hists_.at(i)->Integral());

    	hists_.at(i)->SetLineColor(i+1);
    	l->AddEntry(hists_.at(i), (names.at(i)).c_str());

    	hists_.at(i)->GetYaxis()->SetRangeUser(0,y_max);
    	hists_.at(i)->GetXaxis()->SetRangeUser(-1.1,1.1);

    	//hists_.at(i)->SetFillStyle(3344);
    	//hists_.at(i)->SetFillColor(i+1);

      	if(i==0) hists_.at(i)->Draw("HIST");// PLC");// PMC");
      	else hists_.at(i)->Draw("HIST SAME");//PLC SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

// Prob. need two functions
void Run(TFile *fin, bool boost, string boostLabel, bool edm) { 

	vector<TH1F*> hists_;

	vector<string> labels_; 

	vector<int> ene_low_cut_ = {0, 1000, 1200, 1400, 1600, 1800, 2000}; // MeV

	for(int i_ene = 0; i_ene < ene_low_cut_.size(); i_ene++) { 

		TString h_name = "";
		if(edm) h_name += "g2Asym/h_g2DecayAsym_"+to_string(ene_low_cut_.at(i_ene));
		else if(!edm) h_name += "edmAsym/h_edmDecayAsym_"+to_string(ene_low_cut_.at(i_ene));

		TH1F *h_tmp = (TH1F*)fin->Get(h_name);

		cout<<"Got hist "<<h_name<<", "<<h_tmp<<endl;

		hists_.push_back(h_tmp);

    	string label = "E > "+to_string(ene_low_cut_.at(i_ene));

    	labels_.push_back(label);

   	}

   	string dir = "";
   	if(edm) dir += "edm";
   	else if(!edm) dir += "g2";

   	DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Events;", "../Images/"+dir+"DecayAsymHists_"+boostLabel, false);
	DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Normalised events;", "../Images/"+dir+"/NormDecayAsymHists_"+boostLabel,  true);

	//DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Events;", "../Images/g2/DecayAsymHists_"+boostLabel, false);
   	//DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Normalised events;", "../Images/g2/DecayAsymHists_"+boostLabel,  true);


   return;

}


void SimulatedAsymmetry() { 

	bool boost = false;//false;
	bool edm = true;//true

	string boostLabel = "";

	if(boost) boostLabel += "MRF";
	else if(!boost) boostLabel += "LAB";

	string fname = "../Plots/decayNTuplePlots_1e6_"+boostLabel+".root";
	TFile *fin = TFile::Open(fname.c_str()); 

	cout<<"Got file "<<fname<<", "<<fin<<endl;

	Run(fin, boost, boostLabel, edm);

	return;
}