

void yCOD_183() {

	// HV 14/16/18/20 kV  corresponds to n= 0.108/0.0944/0.106/0.118
	// n = 0.108 corresponds to 18.3 kV 

	TFile *simFile = TFile::Open("../Plots/MC/ClosedOrbit/y_vs_theta.root"); 
	TGraphErrors *sim = (TGraphErrors*)simFile->Get("y_vs_theta"); 
	sim->SetLineColor(kRed); sim->SetMarkerColor(kRed); sim->SetLineWidth(3);

 	double xmin = 0; 
	double xmax = 2*TMath::Pi();

	TF1 *fCOD_4 = new TF1("fCOD_4", "( (-5.34942e-04/0.108) +  (2.52473e-02*cos(x)-4.15501e-02*sin(x))/(1-0.108) + (1.68669e-02*cos(2*x)+5.00699e-02*sin(2*x))/(4-0.108) + (-4.67951e-03*cos(3*x)-3.19857e-01*sin(3*x))/(9-0.108) + (1.23023e-01*cos(4*x)-4.20506e-01*sin(4*x))/(16-0.108) )", xmin, xmax);
	TF1 *fCOD_9 =new  TF1("fCOD_9", "( (-4.95526e-04/0.108) +  (2.46718e-02*cos(x)-4.22837e-02*sin(x))/(1-0.108) + (1.58096e-02*cos(2*x)+5.14843e-02*sin(2*x))/(4-0.108) + (-1.51517e-03*cos(3*x)-3.15286e-01*sin(3*x))/(9-0.108) + (1.43839e-01*cos(4*x)-4.20893e-01*sin(4*x))/(16-0.108) + (2.08197e-01*cos(5*x)+2.46269e-02*sin(5*x))/(25-0.108) + (-3.63497e-01*cos(6*x)-1.85914e-01*sin(6*x))/(36-0.108) + (-2.39532e-02*cos(7*x)-9.34062e-02*sin(7*x))/(49-0.108) + (9.94867e-01*cos(8*x)-1.09471e+00*sin(8*x))/(64-0.108) + (-9.93819e-01*cos(9*x)-2.22913e+00*sin(9*x))/(81-0.108) )", xmin, xmax);
	
	fCOD_4->SetLineColor(kBlue); fCOD_4->SetMarkerColor(kBlue); fCOD_4->SetLineWidth(3);
	fCOD_9->SetLineColor(kGreen-3); fCOD_9->SetMarkerColor(kGreen-3); fCOD_9->SetLineWidth(3);

  	TLegend *leg = new TLegend(0.11,0.69,0.50,0.89); // 0.81,0.35,0.99,0.65);
  	leg->AddEntry(fCOD_4, "Fitted function (N=4)");
  	leg->AddEntry(fCOD_9, "Fitted function (N=9)");
  	leg->AddEntry(sim, "BD sim");

  	leg->SetBorderSize(0);

  	string title = "18.3 kV;#theta [rad];#LTy#GT [mm]";

  	string fname = "../Images/Data/ClosedOrbit/sim_N4_N9_183kV";

  	TCanvas *c = new TCanvas("c","c",800,600);

	fCOD_4->SetTitle(title.c_str());
	fCOD_4->GetYaxis()->SetRangeUser(-.4,.4);
	fCOD_4->GetXaxis()->SetTitleSize(.04);
	fCOD_4->GetYaxis()->SetTitleSize(.04);
	fCOD_4->GetXaxis()->SetTitleOffset(1.1);
	fCOD_4->GetYaxis()->SetTitleOffset(1.1);
	fCOD_4->GetXaxis()->CenterTitle(true);
	fCOD_4->GetYaxis()->CenterTitle(true);
	fCOD_4->GetYaxis()->SetMaxDigits(4);
	fCOD_4->SetMarkerStyle(20); //  Full circle
	fCOD_9->SetMarkerStyle(20); 
	fCOD_4->Draw();
	fCOD_9->Draw("same");
	sim->Draw("same");
	leg->Draw("same");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	return ;
}