double M_POS = 0.51099895; // MeV
double M_MU = 105.6583715; // MeV
double A_MU = 11659208.9e-10; 
double GMAGIC = std::sqrt( 1.+1./A_MU );
double PMAX = 1.01 * M_MU * GMAGIC; // 3127.1144


void DrawTH1(TH1F *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
	//gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawTH1Fit(TH1F *hist, TF1 *fit, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	//gStyle->SetStatFormat("6.3g");
  	//hist->Draw();
  	//gPad->Update();

	hist->SetTitle(title.c_str());

	//TPaveStats *statBox = (TPaveStats*) hist->FindObject("stats");
	//statBox->SetBorderSize(0);

	gStyle->SetOptStat(0);
  	//gStyle->SetOptFit(111);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("E");

	fit->SetLineWidth(3);
	fit->Draw("same");
	

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());


	delete c;

	return;
}

double GetBoostFactor(bool boost) { 

   double boostFactor = 0;

   if(boost) { 
      // Factor of two is just to make sure we're not chopping the tops of the vertcial angle at low momentum 
      boostFactor = (1/(2*GMAGIC)); 
   }
   else if(!boost) {
      boostFactor = 1.0;
      
   }

   return boostFactor;

}

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

void DrawTGraphErrors(TGraphErrors *graph, std::string title, std::string fname) {

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
	graph->Draw("AP");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void NormaliseHistsByIntegral(vector<TH1F*> hists_) {

	for(int i = 0; i < hists_.size(); i++) {
		hists_.at(i)->Scale(1/(hists_.at(i)->Integral()));
	}

	return;// hists_;
}

void NormaliseHistsByMax(vector<TH1F*> hists_) {


	for(int i = 0; i < hists_.size(); i++) {

		double sf = hists_.at(i)->GetMaximum();

		cout<<"Hist\t"<<hists_.at(i)->GetName()<<endl;
		cout<<"Scale factor\t"<<sf<<endl;

		hists_.at(i)->Scale(1./sf);//(hists_.at(i)->Integral()));
	}

/*	for(int i = 0; i < hists_.size(); i++) {

		for(int j = 0; j<hists_.at(i)->GetXaxis()->GetNbins(); j++) { 

			hists_.at(i)->SetBinContent(j+1, 1.);//hists_.at(i)->GetBinContent(j+1)/sf);

		}
	}
*/
	return;// hists_;
}

double FindYMin(vector<TH1F*> hists_) { 

	double y_min = 0; 

	for(auto hist : hists_) { 

		double min = hist->GetMinimum();
		if(min < y_min) y_min = min;

	}

	return y_min;

}


double FindYMax(vector<TH1F*> hists_) { 

	double y_max = -1; 

	for(auto hist : hists_) { 

		double max = hist->GetMaximum();
		if(max > y_max) y_max = max;

	}

	return y_max;

}

void DrawManyHists_A(std::vector<TH1F*> hists_orig_, std::vector<string> names, std::string title, std::string fname, bool norm, bool normByMax) {

	// Copy vector of hists just to stop weird overwrite bugs
	std::vector<TH1F*> hists_; 
	for(int i = 0; i<hists_orig_.size(); i++) hists_.push_back(hists_orig_.at(i));

	cout<<hists_.at(0)->GetMaximum()<<endl;
	cout<<hists_.at(1)->GetMaximum()<<endl;
	cout<<hists_.at(2)->GetMaximum()<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.37,0.79,0.71,0.85);
	//l->SetNColumns(3);
	
	TLegend *l = new TLegend(0.81,0.15,0.99,0.85);

	l->SetTextFont(42);
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


	if(norm) { 

		if(normByMax) {
			NormaliseHistsByMax(hists_);
		} else if(!normByMax) {
			NormaliseHistsByIntegral(hists_);
		}

	}

	double y_min = FindYMin(hists_);
	double y_max = FindYMax(hists_);
	y_max = y_max + y_max*0.05;
	y_min = y_min + y_min*0.05;

	hists_.at(0)->GetYaxis()->SetRangeUser(y_min,y_max);
  	hists_.at(0)->GetXaxis()->SetRangeUser(-1.1,1.1);

  	//hists_.at(0)->SetLineColor(kBlack);
  	//hists_.at(1)->SetLineColor(kRed);
  	//hists_.at(2)->SetLineColor(kBlue);

	for(int i = 0; i < n; i++) {

    	hists_.at(i)->SetLineColor(i+1);
    	l->AddEntry(hists_.at(i), (names.at(i)).c_str());

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

void DrawManyHists_B(std::vector<TH1F*> hists_orig_, std::vector<string> names, std::string title, std::string fname, bool norm, bool normByMax) {

	// Copy vector of hists just to stop weird overwrite bugs
	std::vector<TH1F*> hists_; 
	for(int i = 0; i<hists_orig_.size(); i++) hists_.push_back(hists_orig_.at(i));

	cout<<hists_.at(0)->GetMaximum()<<endl;
	cout<<hists_.at(1)->GetMaximum()<<endl;
	cout<<hists_.at(2)->GetMaximum()<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);
	//c->SetRightMargin(0.20);

	//TLegend *l; = new TLegend(0.39,0.79,0.69,0.85);
	TLegend *l = new TLegend(0.39,0.19,0.69,0.25);
	//if(boost) l = new TLegend(0.39,0.79,0.69,0.85);
	//else if(!boost) l = new TLegend(0.39,0.19,0.69,0.25);
	l->SetNColumns(3);
	
	//TLegend *l = new TLegend(0.81,0.15,0.99,0.85);

	l->SetTextFont(42);
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


	if(norm) { 

		if(normByMax) {
			NormaliseHistsByMax(hists_);
		} else if(!normByMax) {
			NormaliseHistsByIntegral(hists_);
		}

	}

	double y_min = FindYMin(hists_);
	double y_max = FindYMax(hists_);

	y_max = y_max + y_max*0.05;
	y_min = y_min + y_min*0.05;

	hists_.at(0)->GetYaxis()->SetRangeUser(y_min,y_max);
  	//hists_.at(0)->GetXaxis()->SetRangeUser(-1.1,1.1);

  	hists_.at(0)->SetLineColor(kBlack);
  	hists_.at(1)->SetLineColor(kRed);
  	hists_.at(2)->SetLineColor(kBlue);

	for(int i = 0; i < n; i++) {

    	//hists_.at(i)->SetLineColor(i+1);
    	l->AddEntry(hists_.at(i), (names.at(i)).c_str());

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
void RunDecayAsymmetry(TFile *fin, bool boost, string boostLabel, bool upDown) { 

	vector<TH1F*> hists_;

	vector<string> labels_; 

	vector<int> ene_low_cut_ = {0, 1000, 1200, 1400, 1600, 1800, 2000}; // MeV

	for(int i_ene = 0; i_ene < ene_low_cut_.size(); i_ene++) { 

		TString h_name = "";
		if(!upDown) h_name += "g2Asym/h_g2DecayAsym_"+to_string(ene_low_cut_.at(i_ene));
		else if(upDown) h_name += "edmAsym/h_edmDecayAsym_"+to_string(ene_low_cut_.at(i_ene));

		TH1F *h_tmp = (TH1F*)fin->Get(h_name);

		//cout<<"Got hist "<<h_name<<", "<<h_tmp<<endl;

		hists_.push_back(h_tmp);

    	string label = "E > "+to_string(ene_low_cut_.at(i_ene));

    	labels_.push_back(label);

   }

   string dir = "";
   if(upDown) dir += "edm";
   else if(!upDown) dir += "g2";

   DrawManyHists_A(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Events;", "../Images/"+dir+"/DecayAsymHists_"+boostLabel, false, false);
	DrawManyHists_A(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Normalised events;", "../Images/"+dir+"/NormDecayAsymHists_"+boostLabel,  true, false);

	//DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Events;", "../Images/g2/DecayAsymHists_"+boostLabel, false);
   	//DrawManyHists(hists_, labels_, ";#vec{#rho}(e^{+})#upoint#epsilon(#mu^{+})/|#vec{#rho}(e^{+})|;Normalised events;", "../Images/g2/DecayAsymHists_"+boostLabel,  true);

   return;

}

/*double AsymFunc(double *x) {

	return (-1-x[0]+8*x[0]*x[0])/(5+5*x[0]-4*x[0]*x[0]);

}

void FitAsym(TH1F *hist) { 
TF1 *func = new TF1("AsymFunc", "(-1-x+8*x*x)/(5+5*x-4*x*x)", 0, PMAX);
	

	hist->Fit(func, "R");

	return;

}*/

void DrawForwardsBackwards(TH1F *h_N_1, TH1F *h_N_2, bool boost, bool upDown) { 

	string fname = "../Images/";
	if(!upDown) fname += "g2/ForwardsBackwards";
	else if(upDown) fname += "edm/UpDown";
	if(boost) fname += "_MRF";
	else if(!boost) fname += "_LAB";	

	vector<TH1F*> hists_ = {h_N_1, h_N_2};

	double ymin = FindYMin(hists_);
	double ymax = FindYMax(hists_);

	TCanvas *c = new TCanvas("c","c",800,600);

	h_N_1->GetXaxis()->SetTitleSize(.04);
	h_N_1->GetYaxis()->SetTitleSize(.04);
	h_N_1->GetXaxis()->SetTitleOffset(1.1);
	h_N_1->GetYaxis()->SetTitleOffset(1.1);
	h_N_1->GetXaxis()->CenterTitle(true);
	h_N_1->GetYaxis()->CenterTitle(true);
	h_N_1->GetYaxis()->SetMaxDigits(4);
	h_N_1->SetStats(0);

	h_N_1->GetYaxis()->SetRangeUser(ymin, ymax);

	h_N_1->SetLineColor(kBlack); 
	h_N_2->SetLineColor(kRed);

	h_N_1->Draw("HIST");
	h_N_2->Draw("HIST SAME");

	TLegend *l;

	if(!boost) l = new TLegend(0.69,0.69,0.89,0.89);
	else if(boost) l = new TLegend(0.15,0.69,0.35,0.89);

	l->SetTextFont(42);
	l->SetBorderSize(0);

	if(!upDown) { 

		l->AddEntry(h_N_1, "Forwards");
		l->AddEntry(h_N_2, "Backwards");

	} else if(upDown) {

		l->AddEntry(h_N_1, "Up");
		l->AddEntry(h_N_2, "Down");

	}

	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	return;

}

void FitAsym(TH1F *hist) {

	hist->Rebin(20);
	hist->Scale(1./hist->GetMaximum());
	hist->GetXaxis()->SetLimits(0,1);

	TF1 *AsymFunc = new TF1("AsymFunc", "(-1-x+8*x*x)/(5+5*x-4*x*x)", 0, 1);

	hist->Fit(AsymFunc);

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(";#lambda = p/p_{max}; Normalised events");

	hist->SetStats(0);

	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(3);
	hist->SetLineColor(1);

	hist->Draw("E");

	AsymFunc->SetLineWidth(3);
	AsymFunc->Draw("same");

	TLegend *leg = new TLegend(.15, .59, .59, .89);
	leg->SetBorderSize(0);
	//leg->SetTextSize(26);
	//leg->SetTextFont(44);
	leg->AddEntry(hist, "Decay asymmetry in MRF");
	leg->AddEntry(AsymFunc, "Fit: #frac{-1-#lambda+8#lambda^{2}}{5+5#lambda-4#lambda^{2}}");
	leg->Draw("SAME");
	
	//TPaveText *eqn = new TPaveText(.15, .70, .45, .80, "NDC");
	//eqn->SetTextSize(26);
	//eqn->SetTextFont(44);
	//eqn->SetFillColor(0);

	//	eqn->AddText("(-1-#lambda+8#lambda^{2})/(5+5#lambda-4#lambda^{2})");
	//	eqn->Draw("same");
	
	string fname = "../Images/g2/hFit_A";

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());


	delete c;

}

void RunDifferentialAsymmetry(TFile *fin, bool boost, string boostLabel, bool upDown) { 

	TH1F *h_N_1; // forward/up
	TH1F *h_N_2; // backwards/down

	if(upDown) {
		h_N_1 = (TH1F*)fin->Get("edmAsym/h_N_u");
		h_N_2 = (TH1F*)fin->Get("edmAsym/h_N_d");
	} else if(!upDown) {
		h_N_1 = (TH1F*)fin->Get("g2Asym/h_N_f");
		h_N_2 = (TH1F*)fin->Get("g2Asym/h_N_b");


	}

	cout<<"Got forward/up backward/down hists "<<h_N_1<<", "<<h_N_2<<endl;

	// Draw them
	DrawForwardsBackwards(h_N_1, h_N_2, boost, upDown);

	// Assymetry 
	double boostFactor = GetBoostFactor(boost);

	TH1F *h_A = new TH1F("h_A",";Track momentum [MeV];Entries",310,0,int(3100*boostFactor)); 
	TH1F *h_N = new TH1F("h_N",";Track momentum [MeV];Entries",310,0,int(3100*boostFactor)); 
	TH1F *h_NA2 = new TH1F("h_NA2",";Track momentum [MeV];Entries",310,0,int(3100*boostFactor)); 

	vector<double> A_;
	vector<double> p_;
	vector<double> zeros_;

	//->GetXaxis()
	for(int i_bin = 0; i_bin < h_N_1->GetXaxis()->GetNbins(); i_bin++) { 

		double p_1 = h_N_1->GetXaxis()->GetBinCenter(i_bin+1);
		double p_2 = h_N_2->GetXaxis()->GetBinCenter(i_bin+1);

		double N_1 = h_N_1->GetBinContent(i_bin+1);//h_N_1->GetBin(p_1));
		double N_2 = h_N_2->GetBinContent(i_bin+1);//h_N_2->GetBin(p_2));

		float N = N_1+N_2;
		float A = (N_1 - N_2) / (N_1 + N_2); 
		float NA2 = N * pow(A,2);

		//if(A < 0) cout<<"A is negative at "<<A<<endl;

		if(N==0) continue;

		A_.push_back(A);
		p_.push_back(p_1);
		zeros_.push_back(0.);

		h_N->SetBinContent(i_bin+1, N);
		h_A->SetBinContent(i_bin+1, A);
		h_NA2->SetBinContent(i_bin+1, NA2);

	}
	
	string dir = "";
	if(upDown) dir += "edm";
	else if(!upDown) dir += "g2";

	vector<TH1F*> hists_ = {h_N, h_A, h_NA2};

	vector<string> labels_ = {"N", "A", "NA^{2}"};

	string title = "";

	if(upDown) title += "Up/down "; 
	else if(!upDown) title += "Forwards/backwards ";

	title += "("+boostLabel+")";
	//else if(!boost) title += ;
	
	DrawManyHists_B(hists_, labels_, title+";Track momentum [MeV]; Events", "../Images/"+dir+"/DiffDecayAsymHists_"+boostLabel,  false, false);
	DrawManyHists_B(hists_, labels_, title+";Track momentum [MeV]; Normalised events", "../Images/"+dir+"/NormDiffDecayAsymHists_"+boostLabel,  true, true);

	TGraphErrors *gr_A = GenerateTGraphErrors(p_, A_, zeros_, zeros_);
	DrawTGraphErrors(gr_A, "", "../Images/"+dir+"/DiffAsymGraph");

	// Fit the assymetry 

	// DEBUG 
	//dir = "tmp";
	//DrawTH1(h_N, "N", "../Images/"+dir+"/h_N");
	//DrawTH1(h_A, "A", "../Images/"+dir+"/h_A");
	//DrawTH1(h_NA2, "NA2", "../Images/"+dir+"/h_NA2");

	//h_N_1->Add(h_N_2,-1);
	//h_N_1->Rebin(20);

	title = ";Track momentum [MeV];";
	if(upDown) title += "Up #minus down";
	else if(!upDown) title += "Forwards #minus backwards";


		

	//for(int i_bin = 0; i_bin < h_N_1->GetXaxis()->GetNBins(); i_bin++) { 

		//h_N_1->GetXaxis()->

	//}

	DrawTH1(h_N_1, title, "../Images/"+dir+"/h_diff_"+boostLabel);


	// Fit asymmetry in MRF
	if(!boost && !upDown) FitAsym(h_A);

/*	h_A->Rebin(20);
	h_A->Scale(1./h_A->GetMaximum());
	h_A->GetXaxis()->SetLimits(0,1);

	TF1 *AsymFunc = new TF1("AsymFunc", "(-1-x+8*x*x)/(5+5*x-4*x*x)", 0, 1);

	h_A->Fit(AsymFunc);

	DrawTH1Fit(h_A, AsymFunc, ";p/p_{max}; Normalised events", "../Images/"+dir+"/hFit_A");*/
	//DrawTH1(h_A, ";Track momentum [MeV]; Events", "../Images/"+dir+"/hFit_A");


	return;

}

void DrawPlusMinus(TH1F *h_plus, TH1F *h_minus, string title, string fname, bool boost) { //, bool upDown) { 


	vector<TH1F*> hists_ = {h_plus, h_minus};

	double ymin = FindYMin(hists_);
	double ymax = FindYMax(hists_);

	TCanvas *c = new TCanvas("c","c",800,600);

	hists_.at(0)->GetXaxis()->SetTitleSize(.04);
	hists_.at(0)->GetYaxis()->SetTitleSize(.04);
	hists_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetXaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->SetMaxDigits(4);
	hists_.at(0)->SetTitle(title.c_str());
	hists_.at(0)->SetStats(0);

	hists_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);

	hists_.at(0)->SetLineColor(kBlack); 
	hists_.at(1)->SetLineColor(kRed);

	hists_.at(0)->Draw("HIST");
	hists_.at(1)->Draw("HIST SAME");

	TLegend *l;

	if(!boost) l = new TLegend(0.69,0.69,0.89,0.89);
	else if(boost) l = new TLegend(0.15,0.69,0.35,0.89);

	l->SetTextFont(42);
	l->SetBorderSize(0);

	l->AddEntry(hists_.at(0), "#delta#upoint#theta > 0");
	l->AddEntry(hists_.at(1), "#delta#upoint#theta < 0");

	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	return;

}

void RunDeltaTheta(TFile *fin, string boostLabel, bool boost) {

	// Get delta*theta 
	TH1F *h_deltaTheta = (TH1F*)fin->Get("angles/h_deltaTheta");
	// Get plus delta*theta
	TH1F *h_deltaTheta_plus = (TH1F*)fin->Get("edmAsym/h_deltaTheta_plus");
	TH1F *h_deltaTheta_minus = (TH1F*)fin->Get("edmAsym/h_deltaTheta_minus");

	cout<<"h_deltaTheta\t"<<h_deltaTheta<<endl;
	cout<<"h_deltaTheta_plus\t"<<h_deltaTheta_plus<<endl;	
	cout<<"h_deltaTheta_minus\t"<<h_deltaTheta_minus<<endl;	

	h_deltaTheta->GetXaxis()->SetRangeUser(-0.015, 0.015);

	DrawTH1(h_deltaTheta, boostLabel+";#delta#upoint#theta [rad^{2}];Entries", "../Images/edm/h_deltaTheta_"+boostLabel);

	DrawPlusMinus(h_deltaTheta_plus, h_deltaTheta_minus, boostLabel+";Track momentum [MeV];Entries", "../Images/edm/h_plusMinus_"+boostLabel, boost);

	// Try to get the asymmetry 

	// Assymetry 
	double boostFactor = GetBoostFactor(boost);

	TH1F *h_A = new TH1F("h_A",";Track momentum [MeV];Entries",310,0,int(3100*boostFactor)); 
	TH1F *h_N = new TH1F("h_N",";Track momentum [MeV];Entries",310,0,int(3100*boostFactor)); 
	TH1F *h_NA2 = new TH1F("h_NA2",";Track momentum [MeV];Entries",310,0,int(3100*boostFactor)); 

	vector<double> A_;
	vector<double> p_;
	vector<double> zeros_;
	
	//->GetXaxis()
	// Ignore the 
	//for(int i_bin = 1; i_bin < h_deltaTheta_plus->GetXaxis()->GetNbins() - 1; i_bin++) { 
	for(int i_bin = 0; i_bin < h_deltaTheta_plus->GetXaxis()->GetNbins(); i_bin++) { 

		double p_1 = h_deltaTheta_plus->GetXaxis()->GetBinCenter(i_bin+1);
		double p_2 = h_deltaTheta_minus->GetXaxis()->GetBinCenter(i_bin+1);

		double N_1 = h_deltaTheta_plus->GetBinContent(i_bin+1);//h_N_1->GetBin(p_1));
		double N_2 = h_deltaTheta_minus->GetBinContent(i_bin+1);//h_N_2->GetBin(p_2));

		float N = N_1+N_2;
		float A = (N_1 - N_2) / (N_1 + N_2); 
		float NA2 = N * pow(A,2);

		//if(A < 0) cout<<"A is negative at "<<A<<endl;

		if(N==0) continue;

		A_.push_back(A);
		p_.push_back(p_1);
		zeros_.push_back(0.);

		h_N->SetBinContent(i_bin+1, N);
		h_A->SetBinContent(i_bin+1, A);
		h_NA2->SetBinContent(i_bin+1, NA2);

	}

	h_N->Rebin(15);
	h_A->Rebin(15);
	h_NA2->Rebin(15);

	vector<TH1F*> hists_ = {h_N, h_A, h_NA2};

	vector<string> labels_ = {"N", "A", "NA^{2}"};

	DrawManyHists_B(hists_, labels_, boostLabel+";Track momentum [MeV]; Events", "../Images/edm/PlusMinusAsymHists_"+boostLabel,  false, false);
	DrawManyHists_B(hists_, labels_, boostLabel+";Track momentum [MeV]; Normalised events", "../Images/edm/NormPlusMinusAsymHists_"+boostLabel,  true, true);


	return;

}

void SimulatedAsymmetry() { 

	bool boost = false;
	bool upDown = true;//false;//false;//true

	string boostLabel = "";

	if(boost) boostLabel += "MRF";
	else if(!boost) boostLabel += "LAB";

	// string fname = "../Plots/decayNTuplePlots_1e6_"+boostLabel+".root";
	string fname = "../Plots/decayNTuplePlots_Full_"+boostLabel+".root";

	TFile *fin = TFile::Open(fname.c_str()); 

	cout<<"Got file "<<fname<<", "<<fin<<endl;

	// Book an output file? 

	//TFile *fout = new TFile("../Plots/simAsym_0_"+boostLabel+)

	RunDecayAsymmetry(fin, boost, boostLabel, upDown);

	RunDifferentialAsymmetry(fin, boost, boostLabel, upDown);

	if(upDown) RunDeltaTheta(fin, boostLabel, boost);

	return;
}