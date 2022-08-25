double OMEGA_A = 0.00143934; // kHz from gm2const
double G2PERIOD = (2 * TMath::Pi() / OMEGA_A) * 1e-3; // us
double M_MU = 105.6583715; // MeV
double A_MU = 11659208.9e-10; 
double GMAGIC = std::sqrt( 1.+1./A_MU );
double PMAX = 1.01 * M_MU * GMAGIC; // 3127.1144

void DrawManyTGraphErrors(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	l->SetBorderSize(0);

	graphs.at(0)->SetTitle(title.c_str());
	graphs.at(0)->GetXaxis()->SetTitleSize(.04);
	graphs.at(0)->GetYaxis()->SetTitleSize(.04);
	graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetXaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->SetMaxDigits(4);
	graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	int nGraphs = graphs.size();

	gStyle->SetPalette(kRainBow);//Bird);

	for(int i = 0; i < nGraphs; i++) {
    	graphs.at(i)->SetMarkerStyle(20);
    	l->AddEntry(graphs.at(i), (names.at(i)).c_str());
      	if(i==0) {
      		graphs.at(i)->Draw("AP PLC PMC PFC");// PFC");
      	} else {
      		graphs.at(i)->Draw("P PLC PMC PFC SAME");
      	}
      	gPad->Update();
      	graphs.at(i)->GetFunction("FullEDMFunc")->SetLineColor(graphs.at(i)->GetMarkerColor());
      	graphs.at(i)->GetFunction("FullEDMFunc")->Draw("L PLC PMC PFC SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawManyTH1(std::vector<TH1D*> hists, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	l->SetBorderSize(0);

	hists.at(0)->SetStats(0);

	hists.at(0)->SetTitle(title.c_str());
	hists.at(0)->GetXaxis()->SetTitleSize(.04);
	hists.at(0)->GetYaxis()->SetTitleSize(.04);
	hists.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hists.at(0)->GetYaxis()->SetTitleOffset(1.1);
	hists.at(0)->GetXaxis()->CenterTitle(true);
	hists.at(0)->GetYaxis()->CenterTitle(true);
	hists.at(0)->GetYaxis()->SetMaxDigits(4);
	hists.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	int nGraphs = hists.size();

	gStyle->SetPalette(kRainBow);//Bird);

	for(int i = 0; i < nGraphs; i++) {
    	hists.at(i)->SetLineWidth(2);//Style(20);
    	l->AddEntry(hists.at(i), (names.at(i)).c_str());
      	if(i==0) {
      		hists.at(i)->Draw("][ HIST PLC PMC");// PFC");// PFC");
      	} else {
      		hists.at(i)->Draw("][ HIST PLC PMC SAME");
      	}
      	//gPad->Update();
      	//hists.at(i)->GetFunction("FullEDMFunc")->SetLineColor(hists.at(i)->GetMarkerColor());
      	//hists.at(i)->GetFunction("FullEDMFunc")->Draw("L PLC PMC PFC SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void overlay_modulo(string finName, int frame) { // TFile *fin) { 


	string title = "";

	if(frame == 0) {
		title += "LAB";
	}
	else if(frame == 1) {
		title += "LAB";
	} 
	else if(frame == 2) {
		title += "MRF";
	}
	else cerr<<"No frame supplied";

	title += ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns";

	TFile *fin = TFile::Open(finName.c_str());

	cout<<"Got input file "<<finName<<", "<<fin<<endl;

	string path = "MomentumBinnedAnalysis/ModuloFits/MomSlices";

	int step = 500;
  	int n_cuts = PMAX / step;

	vector<TGraphErrors*> gr_mod_;
	vector<string> names_;

	for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

      int lo = 0 + i_cut*step; 
      int hi = step + i_cut*step;

      string graphName = path+"/ModuloFit_"+to_string(lo)+"_"+to_string(hi);

      TGraphErrors *gr_mod = (TGraphErrors*)fin->Get(graphName.c_str());

      cout<<"Got graph "<<graphName<<", "<<gr_mod<<endl;

      names_.push_back(to_string(lo)+"-"+to_string(hi)+" MeV");

      gr_mod_.push_back(gr_mod);

  	}

  	DrawManyTGraphErrors(gr_mod_, names_, title, "../Images/MC/dMuSim/5.4e-18/Unblinded/overlay_modulo_truthAllDecays_AAR_500MeV_AQ", -1.2, 1.2);//-0.75*GMAGIC, 0.75*GMAGIC); // -1, 1

  	return;

}

void overlay_theta_y(string finName, int frame) { // TFile *fin) { 

	string title = "";

	if(frame == 0) {
		title += "LAB";
	}
	else if(frame == 1) {
		title += "LAB";
	} 
	else if(frame == 2) {
		title += "MRF";
	}
	else cerr<<"No frame supplied";

	title += ";#theta_{y} [mrad];Tracks";

	TFile *fin = TFile::Open(finName.c_str());

	cout<<"Got input file "<<finName<<", "<<fin<<endl;

	string path = "MomSlices";

	int step = 500;
  	int n_cuts = PMAX / step;

	vector<TH1D*> h_;
	vector<string> names_;

	for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

      int lo = 0 + i_cut*step; 
      int hi = step + i_cut*step;

      string histName = path+"/ThetaY_"+to_string(lo)+"_"+to_string(hi);

      TH1D *h = (TH1D*)fin->Get(histName.c_str());

      cout<<"Got hist "<<histName<<", "<<h<<endl;

      names_.push_back(to_string(lo)+"-"+to_string(hi)+" MeV");

      h_.push_back(h);

  	}

  	DrawManyTH1(h_, names_, title, "../Images/MC/dMuSim/5.4e-18/Unblinded/overlay_ThetaY_truthAllDecays_MRF_500MeV_AQ", 0, 110e3);//25e3);//325e3);

  	return;

}


void overlay_modulo_and_theta_y() { 

	//overlay_theta_y("../Plots/MC/dMu/5.4e-18/dMuSim_truthAllDecays_AAR_500MeV_AQ.root");
	overlay_theta_y("../Plots/MC/dMu/5.4e-18/dMuSim_truthAllDecays_AAR_500MeV_AQ.root", 1);
	overlay_modulo("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_MRF_500MeV_AQ.root", 2);
	//overlay_modulo("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_MRF_500MeV_AQ.root");







}