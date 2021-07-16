void DrawManyHists(std::vector<TH1F*> hists_, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax, bool norm) {

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

	for(int i = 0; i < n; i++) {

		if(norm) hists_.at(i)->Scale(1/hists_.at(i)->Integral());

    	hists_.at(i)->SetLineColor(i+1);
    	l->AddEntry(hists_.at(i), (names.at(i)).c_str());

    	hists_.at(i)->GetYaxis()->SetRangeUser(ymin,ymax);

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

void overlayG2AsymmHists() { 

	bool boost = true;//false;

	string boostLabel = "";

	if(boost) boostLabel += "MRF";
	else if(!boost) boostLabel += "LAB";

	string fname = "../plots/decayNTuplePlots_1e6_float_"+boostLabel+".root";
	TFile *fin = TFile::Open(fname.c_str()); 
	cout<<"Got file "<<fname<<", "<<fin<<endl;

	vector<TH1F*> hists_;

	vector<string> labels_; 

//	vector<int> ene_low_cut_ = {"0", "1000", "1200", "1400", "1600", "1800", "2000"}; 

	vector<int> ene_low_cut_ = {0, 1000, 1200, 1400, 1600, 1800, 2000}; // MeV

	for(int i_ene = 0; i_ene < ene_low_cut_.size(); i_ene++) { 

		TString h_name = "g2Asymm/h_decayAsymm_"+to_string(ene_low_cut_.at(i_ene));//to_string(ene_low_cut_.at(i_ene));

		TH1F *h_tmp = (TH1F*)fin->Get(h_name);//(h_name).c_str());

		cout<<"Got hist "<<h_name<<", "<<h_tmp<<endl;

		hists_.push_back(h_tmp);

    	string label = "E > "+to_string(ene_low_cut_.at(i_ene));

    	labels_.push_back(label);

   	}

    if(!boost) { 

		DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Events;", "../Images/g2Asymm/overlaidG2AsymmHists_"+boostLabel, 0., 120e3, false);
		DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Normalised events;", "../Images/g2Asymm/overlaidG2AsymmHists_Norm_"+boostLabel, 0., 0.16, true);

    } else if(boost) { 

		DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Events;", "../Images/g2Asymm/overlaidG2AsymmHists_"+boostLabel, 0., 35e3, false);
   		DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Normalised events;", "../Images/g2Asymm/overlaidG2AsymmHists_Norm_"+boostLabel, 0., .06, true);

    }
   

   return;

}