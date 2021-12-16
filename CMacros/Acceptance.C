void DrawRatoPlot(TH2D *h2_decayR_vs_decayY_1, TH1D *h1_momentumY_1, TH1D *h1_momentumY_2, TString title, TString fname) { 

	TCanvas *c = new TCanvas("c", "c", 800, 800);


	gStyle->SetOptStat(0);
	h1_momentumY_1->SetTitle(title);
	h1_momentumY_1->SetStats(0);
	h1_momentumY_1->SetStats(0);		
	h1_momentumY_1->GetXaxis()->SetTitleSize(.04);
	h1_momentumY_1->GetYaxis()->SetTitleSize(.04);
	h1_momentumY_1->GetXaxis()->SetTitleOffset(1.1);
	h1_momentumY_1->GetYaxis()->SetTitleOffset(1.1);
	h1_momentumY_1->GetXaxis()->CenterTitle(1);
	h1_momentumY_1->GetYaxis()->CenterTitle(1);
	h1_momentumY_1->GetYaxis()->SetMaxDigits(4);
	h1_momentumY_1->SetLineColor(kBlue);
	h1_momentumY_2->SetLineColor(kRed);
	h1_momentumY_1->SetMarkerColor(kBlue);
	h1_momentumY_2->SetMarkerColor(kRed);


	//h1_momentumY_1->Sumw2();//cale(1./h1_momentumY_1->Integral());
	//h1_momentumY_2->Scale(1.9 / 2.) ; // 1./h1_momentumY_2->Integral());
	//h1_momentumY_1->Sumw2();
	//h1_momentumY_2->Sumw2();
	// h1_momentumY_1->Scale(1./h1_momentumY_1->Integral());//GetMaximum()); // Integral());
	// h1_momentumY_2->Scale(1./h1_momentumY_2->Integral());//GetMaximum());

	// Ratio plot
	TRatioPlot *rp = new TRatioPlot(h1_momentumY_2, h1_momentumY_1);
	rp->Draw();
	//rp->SetStats(0);
	rp->GetLowerRefYaxis()->SetRangeUser(0,1);
	//rp->GetLowerRefYaxis()->SetNdivisions(5, 2, 0, kTRUE);
/*	rp->SetLineColor(kGray);
	rp->SetMarkerColor(kGray);*/
	// rp->GetUpperRefYaxis()->SetTitle(("Decays / "+to_string(h1_momentumY_1->GetBinWidth(1))+" MeV").c_str());
	rp->GetUpperRefYaxis()->SetTitle("Decays / 0.14 MeV");
	rp->GetUpperRefXaxis()->SetTitle("Vertical momentum [MeV]");
	rp->GetLowerRefYaxis()->SetTitle("Ratio");
	rp->GetUpperRefYaxis()->SetRangeUser(0, h1_momentumY_1->GetMaximum() + h1_momentumY_1->GetMaximum()*0.1);
	rp->GetUpperRefYaxis()->CenterTitle(1);
	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetLowerRefXaxis()->CenterTitle(1);

	c->Update();


	
	c->SaveAs(fname+".C");
	c->SaveAs(fname+".pdf");
	c->SaveAs(fname+".png");

	delete c;

	return; 

}


void DrawPlot(TH2D *h2_decayR_vs_decayY_1, TH1D *h1_momentumY_1, TH1D *h1_momentumY_2, TString title, TString fname) { 

	// Mother canvas

/*{

	TH1D *h1 = new TH1D("h", "h", 100, -10, 10);
	TRandom3 *rdn = new TRandom3(); 

	for(int i(0); i<100; i++) h1->Fill(rdn->Gaus(0,1));

   TCanvas *c = new TCanvas("c", "c", 800,800);
   c->Draw();
   TPad *p1 = new TPad("p1","p1",0, 0, 1, 1);//0.1,0.2,0.9,1.);
   p1->Draw();
   p1->cd();
   h1->Draw();

   c->cd(0);
   TPad *p2 = new TPad("p2","p2", .69, .69, .89, .89);
   p2->Draw();
   p2->cd();
   h1->Draw();
}*/

	TCanvas *c = new TCanvas("c", "c", 800, 600);
	c->Draw(); 

	// Main pad
	TPad *p1 = new TPad("p1", "p1", 0., 0., 1., 1.); //, .89);
	p1->Draw();
	p1->cd();

	gStyle->SetOptStat(0);

	h1_momentumY_1->SetTitle(title);	
	h1_momentumY_1->GetXaxis()->SetTitleSize(.04);
	h1_momentumY_1->GetYaxis()->SetTitleSize(.04);
	h1_momentumY_1->GetXaxis()->SetTitleOffset(1.1);
	h1_momentumY_1->GetYaxis()->SetTitleOffset(1.1);
	h1_momentumY_1->GetXaxis()->CenterTitle(1);
	h1_momentumY_1->GetYaxis()->CenterTitle(1);
	h1_momentumY_1->GetYaxis()->SetMaxDigits(4);

	h1_momentumY_1->SetLineColor(kBlack);
	h1_momentumY_2->SetLineColor(kBlue);
	h1_momentumY_1->SetLineWidth(2);
	h1_momentumY_2->SetLineWidth(2);
	h1_momentumY_1->SetMarkerColor(kBlack);
	h1_momentumY_2->SetMarkerColor(kBlue);

	h1_momentumY_1->Rebin(2);
	h1_momentumY_2->Rebin(2);

	h1_momentumY_1->Draw("HIST ][");
	h1_momentumY_2->Draw("HIST ][ SAME ");

	c->cd(0); 

	TPad *p2 = new TPad("p2", "p2", .69, .69, .99, .99);
	p2->Draw();
	p2->cd();
	gStyle->SetPalette(kRainBow);
	h2_decayR_vs_decayY_1->GetXaxis()->CenterTitle(1);
	h2_decayR_vs_decayY_1->GetYaxis()->CenterTitle(1);
	h2_decayR_vs_decayY_1->SetTitle(";x [mm];y [mm]");
	h2_decayR_vs_decayY_1->Draw("COL");

	c->cd(0);

	TLegend *l = new TLegend(0.15, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(26);
	l->SetTextFont(44);
	l->AddEntry(h1_momentumY_1, "All decays");
	l->AddEntry(h1_momentumY_2, "Reco vertices");
	l->Draw("SAME");

	c->SaveAs(fname+".C");
	c->SaveAs(fname+".pdf");
	c->SaveAs(fname+".png");

	delete c;

	return; 

}
void Run() {	

	TString fname1 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_allDecays_AAR_10mm_AQ.root";
	TString fname2 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_trackReco_AAR_10mm_BQ.root";

	TFile *fin1 = TFile::Open(fname1);
	TFile *fin2 = TFile::Open(fname2);

	cout<<"Files opened: "<<fname1<<", "<<fin1<<", "<<fname2<<", "<<fin2<<endl;

  	TH2D *h2_decayR_vs_decayY_1 = (TH2D*)fin1->Get("SanityPlots/DecayR_vs_DecayY"); 
  	TH2D *h2_decayR_vs_decayY_2 = (TH2D*)fin2->Get("SanityPlots/S0S12S18_DecayR_vs_DecayY"); 

  	// Vertical momentum hists
  	TH1D *h1_momentumY_1 = (TH1D*)fin1->Get("SanityPlots/MomentumY"); 
  	TH1D *h1_momentumY_2 = (TH1D*)fin2->Get("SanityPlots/S0S12S18_MomentumY");

  	DrawPlot(h2_decayR_vs_decayY_1, h1_momentumY_1, h1_momentumY_2, ";Vertical momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/VerticalMomentum");

	// y-position slices 
	int step = 10; // mm
  	int nSlices = 100/step;


  	// Slice momentum
  	for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) {

  		int lo = -50 + i_slice*step;
    	int hi = -50 + step + i_slice*step;

    	TString slice = to_string(lo)+"_"+to_string(hi);

  		// For illustration
  		h2_decayR_vs_decayY_1 = (TH2D*)fin1->Get("VerticalMomentumSlices/DecayR_vs_DecayY_"+slice); 
  		h2_decayR_vs_decayY_2 = (TH2D*)fin2->Get("VerticalMomentumSlices/S0S12S18_DecayR_vs_DecayY_"+slice);

  		// Vertical momentum hists
  		h1_momentumY_1 = (TH1D*)fin1->Get("VerticalMomentumSlices/MomentumY_"+slice); 
  		h1_momentumY_2 = (TH1D*)fin2->Get("VerticalMomentumSlices/S0S12S18_MomentumY_"+slice); 

  		// DrawPlot(h2_decayR_vs_decayY_1, h1_momentumY_1, h1_momentumY_2, to_string(lo)+" < y [mm] < "+to_string(hi)+";Vertical momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/VerticalMomentum_"+slice);

  		cout<<slice<<endl;
  		cout<<h1_momentumY_2->GetBinCenter(h1_momentumY_2->FindFirstBinAbove(0))<<", "<<h1_momentumY_2->GetBinCenter(h1_momentumY_2->FindLastBinAbove(0))<<endl;
  		//break;

	}


	fin1->Close();
	fin2->Close();

	return;

}

void Acceptance() { 

	Run();

	return;

}