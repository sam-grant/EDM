void DrawTF1(TF1 *func, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	func->SetTitle(title.c_str());
	gStyle->SetOptStat(2210);
			
	func->GetXaxis()->SetTitleSize(.04);
	func->GetYaxis()->SetTitleSize(.04);
	func->GetXaxis()->SetTitleOffset(1.1);
	func->GetYaxis()->SetTitleOffset(1.1);
	func->GetXaxis()->CenterTitle(1);
	func->GetYaxis()->CenterTitle(1);
	func->GetYaxis()->SetMaxDigits(4);
	func->SetLineWidth(3);
	func->SetLineColor(kRed);

	func->Draw();

	TLegend *l = new TLegend(0.20, 0.15, 0.85, 0.40);
	l->SetBorderSize(0);
/*	l->SetTextSize(26);
	l->SetTextFont(44);*/
	l->AddEntry(func, "#minus4.68#times10^{-8}#LTB_{r}^{a}#GT^{2}#plus4.54#times10^{-7}#LTB_{r}^{a}#GT+1.28#times10^{-3}"); // " *x+*x+1.28e-3");
	l->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

void DrawTGraph(TGraph *gr, TF1 *f1, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr->SetTitle(title.c_str());
	gStyle->SetOptStat(2210);
			
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->SetTitleOffset(1.1);
	gr->GetYaxis()->SetTitleOffset(1.1);
	gr->GetXaxis()->CenterTitle(1);
	gr->GetYaxis()->CenterTitle(1);
	gr->GetYaxis()->SetMaxDigits(4);
	gr->SetMarkerStyle(20);

	gr->Draw("AP");

	f1->SetLineColor(kRed);

	f1->Draw("SAME");

	TLegend *l = new TLegend(0.35, 0.40, 0.70, 0.50);
	l->SetBorderSize(0);
/*	l->SetTextSize(26);
	l->SetTextFont(44);*/

	// I think this is run-3?

	l->AddEntry(gr, "Data"); // " *x+*x+1.28e-3");
	l->AddEntry(f1, "Fit: a#LTB_{r}^{a}#GT^{2}+b#LTB_{r}^{a}#GT+c"); 
 	// Quadratic fit"); // #minus4.68#times10^{-8}#LTB_{r}^{a}#GT^{2}#plus4.54#times10^{-7}#LTB_{r}^{a}#GT+1.28#times10^{-3}"); // " *x+*x+1.28e-3");
	l->Draw("SAME");

	TPaveText *txt = new TPaveText(0.48, 0.27, 0.70, 0.40, "NDC"); 
	txt->SetTextAlign(13);
	txt->SetTextSize(26);
	txt->SetTextFont(44);
	txt->SetFillColor(0);
	txt->AddText("a = #minus4.68#times10^{-8} ppm^{-2}");
	txt->AddText("b = 4.54#times10^{-7} ppm^{-1}");
	txt->AddText("c = 1.28#times10^{-3}");
	txt->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

void StorageVsBr() { 

	TF1 *f1 = new TF1("f1", "-4.68e-8*x*x+4.54e-7*x+1.28e-3", -50, +50);
	TGraph *gr = new TGraph(); 

	cout<<"Max func\t"<<f1->GetMaximum()<<endl;
	cout<<"Min func\t"<<f1->Eval(-50)<<endl;
	cout<<"Diff frac\t"<<(f1->GetMaximum()-f1->Eval(-50))/f1->GetMaximum()<<endl;


	double x[] = {+50, +40, +30, +20, +10, 0, -10, -20, -30, -40, -50};
	double y[] = {1.19E-03, 1.22E-03, 1.26E-03, 1.27E-03, 1.27E-03, 1.30E-03, 1.28E-03, 1.26E-03, 1.22E-03, 1.17E-03, 1.15E-03};

	int n = sizeof(y)/sizeof(y[0]);

	for (int i(0); i<n; i++) gr->SetPoint(i, x[i], y[i]);

	DrawTGraph(gr, f1, ";#LTB_{r}^{a}#GT [ppm];Storage fraction", "../tmp/Storage");

	return;

}