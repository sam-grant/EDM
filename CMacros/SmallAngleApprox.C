void SmallAngleTF1() { 

	// What is the maximum tilt angle for 30xBNL? 

	// Plot atan2(theta) asin(theta), and theta

	TF1 *theta = new TF1("theta", "x", 0, 1);
	TF1 *asintheta = new TF1("asintheta", "asin(x)", 0, 1);
	TF1 *atantheta = new TF1("atantheta", "atan(x)", 0, 1);

	//theta->SetNpx(1e6);
	//asintheta->SetNpx(1e6);
	//atantheta->SetNpx(1e6);

	theta->SetNpx(1e4);
	asintheta->SetNpx(1e4);
	atantheta->SetNpx(1e4);

	theta->SetLineColor(kBlack);//Npx(1e6);
	asintheta->SetLineColor(kRed);
	atantheta->SetLineColor(kBlue);

	theta->SetLineWidth(3);//kBlack);//Npx(1e6);
	asintheta->SetLineWidth(3);//kRed);
	atantheta->SetLineWidth(3);//kBlue);

	TCanvas *c = new TCanvas("c","c",800,600);

	theta->SetTitle(";#theta [rad];Function value");
	theta->GetXaxis()->CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	theta->GetYaxis()->CenterTitle(1);
	theta->GetXaxis()->SetTitleOffset(1.1);//CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	theta->GetYaxis()->SetTitleOffset(1.1);//CenterTitle(1);
	theta->GetXaxis()->SetTitleSize(.04);
	theta->GetYaxis()->SetTitleSize(.04);
	theta->Draw();
	asintheta->Draw("same");
	atantheta->Draw("same");

	TLegend *leg = new TLegend(.11, .69, .49, .89);

	leg->SetBorderSize(0);
	leg->AddEntry(theta, "#theta");
	leg->AddEntry(asintheta, "sin^{-1}(#theta)");
	leg->AddEntry(atantheta, "tan^{-1}(#theta)");

	leg->Draw("same");

	c->SaveAs("../Images/SmallAngleApprox/SmallAngleApprox.png");
	c->SaveAs("../Images/SmallAngleApprox/SmallAngleApprox.pdf");
	c->SaveAs("../Images/SmallAngleApprox/SmallAngleApprox.C");


	// If the difference from theta is greater than the uncertainty on the function value than the approximention does not hold

	// Function value versus argument 

	// Function value versus momentum


	return;


}

TProfile *GetProfDiff(TProfile *p1, TProfile *p2) {

	//TProfile *diff = new TProfile("diff","diff", p1->GetNbinsX(), p1->GetBinLowEDge()(TProfile*)p1->Clone();
	int min = p1->FindFirstBinAbove(0);
	int max = p1->FindLastBinAbove(0);

	TProfile *diff = new TProfile(p1->GetName(),p1->GetTitle(),max-min+1,p1->GetBinLowEdge(min),p1->GetBinLowEdge(max)+p1->GetBinWidth(max),"");
	
	for (int i = 0; i<diff->GetNbinsX(); i++) { 

		//diff->SetBinContent(i+1, 0.);

		cout<<"\np1 content:\t"<<p1->GetBinContent(i+1)<<endl;
		cout<<"p2 content:\t"<<p2->GetBinContent(i+1)<<endl;
		cout<<"diff:\t"<<p1->GetBinContent(i+1) - p2->GetBinContent(i+1)<<endl;

		diff->SetBinContent(i+1, abs(p1->GetBinContent(i+1) - p2->GetBinContent(i+1)));

	}

	return diff; 
} 

void SmallAngleProfiles() { 

	TFile *fin = TFile::Open("../Plots/MC/dMu/SmallAngleApprox/allDecays.root");

	TProfile *pyp_vs_p = (TProfile*)fin->Get("MainPlots/pyp_vs_p");
	TProfile *asinpyp_vs_p = (TProfile*)fin->Get("MainPlots/asinpyp_vs_p");

	TProfile *pyp_vs_pyp = (TProfile*)fin->Get("MainPlots/pyp_vs_pyp");
	TProfile *asinpyp_vs_pyp = (TProfile*)fin->Get("MainPlots/asinpyp_vs_pyp");

	TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);

	pyp_vs_p->SetLineColor(kBlack); //Draw();
	asinpyp_vs_p->SetLineColor(kRed); 

	pyp_vs_p->SetTitle(";p [MeV];p_{y}/p");
	pyp_vs_p->GetXaxis()->CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	pyp_vs_p->GetYaxis()->CenterTitle(1);
	pyp_vs_p->GetXaxis()->SetTitleOffset(1.1);//CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	pyp_vs_p->GetYaxis()->SetTitleOffset(1.1);//CenterTitle(1);
	pyp_vs_p->GetXaxis()->SetTitleSize(.04);
	pyp_vs_p->GetYaxis()->SetTitleSize(.04);

	pyp_vs_p->Draw();
	asinpyp_vs_p->Draw("SAME");

	TLegend *l1 = new TLegend(.15, .69, .35, .89);

	l1->SetBorderSize(0);
	l1->AddEntry(pyp_vs_p, "p_{y}/p");
	l1->AddEntry(asinpyp_vs_p, "sin^{-1}(p_{y}/p)");

	l1->Draw("same");

	c1->SaveAs("../Images/SmallAngleApprox/pyp_vs_p.png");
	c1->SaveAs("../Images/SmallAngleApprox/pyp_vs_p.pdf");

	TCanvas *c2 = new TCanvas("c2", "c2", 800, 600);

	pyp_vs_pyp->SetLineColor(kBlack); //Draw();
	asinpyp_vs_pyp->SetLineColor(kRed); 

	pyp_vs_pyp->SetStats(0);

	pyp_vs_pyp->SetTitle(";p_{y}/p;Function value");
	pyp_vs_pyp->GetXaxis()->CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	pyp_vs_pyp->GetYaxis()->CenterTitle(1);
	pyp_vs_pyp->GetXaxis()->SetTitleOffset(1.1);//CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	pyp_vs_pyp->GetYaxis()->SetTitleOffset(1.1);//CenterTitle(1);
	pyp_vs_pyp->GetXaxis()->SetTitleSize(.04);
	pyp_vs_pyp->GetYaxis()->SetTitleSize(.04);

	pyp_vs_pyp->Draw();
	asinpyp_vs_pyp->Draw("SAME");

	TLegend *l2 = new TLegend(.15, .69, .35, .89);

	l2->SetBorderSize(0);
	l2->AddEntry(pyp_vs_pyp, "p_{y}/p");
	l2->AddEntry(asinpyp_vs_pyp, "sin^{-1}(p_{y}/p)");

	l2->Draw("same");

	c2->SaveAs("../Images/SmallAngleApprox/pyp_vs_pyp.png");
	c2->SaveAs("../Images/SmallAngleApprox/pyp_vs_pyp.pdf");

	// Get diff 

	TProfile* diff = (TProfile*)pyp_vs_p->Clone("dff");
	diff->Add(asinpyp_vs_p, -1.);
	//hDiff->Draw("SAME");


	//TProfile *diff = pyp_vs_p->Add(asinpyp_vs_p, -1);//GetProfDiff(pyp_vs_p, asinpyp_vs_p);

	TCanvas *c3 = new TCanvas("c3", "c3", 800, 600);

	diff->SetLineColor(kBlack); //Draw();
	diff->SetStats(0);

	diff->SetTitle(";p [MeV];p_{y}/p #minus sin^{-1}(p_{y}/p)");
	diff->GetXaxis()->CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	diff->GetYaxis()->CenterTitle(1);
	diff->GetXaxis()->SetTitleOffset(1.1);//CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	diff->GetYaxis()->SetTitleOffset(1.1);//CenterTitle(1);
	diff->GetXaxis()->SetTitleSize(.04);
	diff->GetYaxis()->SetTitleSize(.04);

	c3->SetLogy();

	diff->Draw();//"HIST");

	c3->SaveAs("../Images/SmallAngleApprox/diff.png");
	c3->SaveAs("../Images/SmallAngleApprox/diff.C");

	TProfile* diff2 = (TProfile*)pyp_vs_pyp->Clone("diff2");
	diff->Add(asinpyp_vs_pyp, -1.);
	//hDiff->Draw("SAME");


	//TProfile *diff = pyp_vs_p->Add(asinpyp_vs_p, -1);//GetProfDiff(pyp_vs_p, asinpyp_vs_p);

	TCanvas *c4 = new TCanvas("c4", "c4", 800, 600);

	diff2->SetLineColor(kBlack); //Draw();
	diff2->SetStats(0);

	diff2->SetTitle(";#theta [rad];p_{y}/p #minus sin^{-1}(p_{y}/p)");
	diff2->GetXaxis()->CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	diff2->GetYaxis()->CenterTitle(1);
	diff2->GetXaxis()->SetTitleOffset(1.1);//CenterTitle(1);//SetTitle(";#theta [rad];Function value");
	diff2->GetYaxis()->SetTitleOffset(1.1);//CenterTitle(1);
	diff2->GetXaxis()->SetTitleSize(.04);
	diff2->GetYaxis()->SetTitleSize(.04);

	//c3->SetLogy();

	diff2->Draw();//"HIST");

	c3->SaveAs("../Images/SmallAngleApprox/diff2.pdf");
	c3->SaveAs("../Images/SmallAngleApprox/diff2.png");
	c3->SaveAs("../Images/SmallAngleApprox/diff2.C");

	return;

}

void DrawTH1(TH1D *hist, std::string title, std::string fname) {

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
	//c->SetLogy();

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void pyp() { 

	TFile *fin = TFile::Open("../Plots/MC/dMu/SmallAngleApprox/allDecays.root");
	TH1D *pyp = (TH1D*)fin->Get("MainPlots/pyp");

	DrawTH1(pyp, "", "../Images/SmallAngleApprox/pyp");


	return; 

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
	leg->AddEntry(graph1, "p_{y}/p_{z}");
	leg->AddEntry(graph2, "tan^{-1}(p_{y}/p_{z})");
	leg->SetBorderSize(0);
	leg->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void OverlayAEDM() { 

	string fname1 = "../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_AAR_200MeV_pypz_AQ.root";
	string fname2 = "../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_AAR_200MeV_atanpypz_AQ.root";

	TFile *fin1 = TFile::Open(fname1.c_str());
	TFile *fin2 = TFile::Open(fname2.c_str());

	cout<<"Got files:\n"<<fname1<<", "<<fin1<<"\n"<<fname2<<", "<<fin2<<endl;

	// Get hists 
	string grName = "MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p";
		
	TGraphErrors *gr1 = (TGraphErrors*)fin1->Get(grName.c_str());
	TGraphErrors *gr2 = (TGraphErrors*)fin2->Get(grName.c_str());

	cout<<"Got graphs "<<gr1<<", "<<gr2<<endl;

	// Now overlay

	DrawOverlay(gr1, gr2, "", "../Images/A_EDM_overlay");


}

void SmallAngleApprox() { 

	// SmallAngleTF1(); 

	//SmallAngleProfiles(); 

	pyp();

	OverlayAEDM();

	return;

}