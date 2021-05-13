// Get fit functions for N=4

// Take values for p0 to p8 from fit to simulation, and make a plot of y(18kV) - y(14kV)

void DrawTF1(TF1 *func, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	func->SetTitle(title.c_str());

	//hist->SetStats(0);
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

	//c->SetRightMargin(0.13);

	func->Draw();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}
const double n_1 = 0.0708; // 12 kV
const double n_2 = 0.118; // 20 kV
// const double n_1 = 0.0826; // 14 kV
// const double n_2 = 0.106; // 18 kV

double fVCOD_4_1814(double *x, double *par) {

	double n_1 = 0.0826; // 14 kV
	double n_2 = 0.106; // 18 kV

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 5; i_order++ ) {

  		quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );
  		//cout<<"quadFactor at N = "<<i_order<<":\t"<<(1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1))<<endl;
  	}

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

double fVCOD_4_1814_E(double *x, double *par) {

	double n_1 = 0.0826; // 14 kV
	double n_2 = 0.106; // 18 kV

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 5; i_order++ ) {

  		quadFactor_.push_back( (1/(n_2*(pow(i_order,2) - n_2))) - (1/(n_1*(pow(i_order,2) - n_1))) );
  		//cout<<"quadFactor at N = "<<i_order<<":\t"<<(1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1))<<endl;
  	}

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

double fVCOD_4_2012(double *x, double *par) {

	double n_1 = 0.0708; // 12 kV
	double n_2 = 0.118; // 20 kV

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 5; i_order++ ) {

  		quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );
  		//cout<<"quadFactor at N = "<<i_order<<":\t"<<(1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1))<<endl;
  	}

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

double fVCOD_4_183(double *x, double *par) {

  	vector<double> quadFactor_;

  	double n = 0.108; // 18.3 kV

  	for (int i_order = 0; i_order < 5; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n))  );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

void yCOD_1814_BDSim() { 

	// Input file for fit
	TFile *input1 = TFile::Open("../Plots/MC/ClosedOrbit/fits_y_vs_theta.root");
	cout<<"Opened input file\t"<<input1<<endl;

	// Get N=4 fit
	TGraphErrors *gr1 = (TGraphErrors*)input1->Get("fit_y_vs_theta_4");
	
	TF1 *fit_4 = gr1->GetFunction("fCOD_4");
	cout<<"Got N=4 fit\t"<<fit_4<<endl;

	// Get parameters
	double p0 = fit_4->GetParameter(0); double e0 = fit_4->GetParError(0);
	double p1 = fit_4->GetParameter(1); double e1 = fit_4->GetParError(1);
	double p2 = fit_4->GetParameter(2); double e2 = fit_4->GetParError(2);
	double p3 = fit_4->GetParameter(3); double e3 = fit_4->GetParError(3);
	double p4 = fit_4->GetParameter(4); double e4 = fit_4->GetParError(4);
	double p5 = fit_4->GetParameter(5); double e5 = fit_4->GetParError(5);
	double p6 = fit_4->GetParameter(6); double e6 = fit_4->GetParError(6);
	double p7 = fit_4->GetParameter(7); double e7 = fit_4->GetParError(7);
	double p8 = fit_4->GetParameter(8); double e8 = fit_4->GetParError(8);

	cout<<"p0\t"<<p0<<"±"<<e0<<endl;
	cout<<"p1\t"<<p1<<"±"<<e1<<endl;
	cout<<"p2\t"<<p2<<"±"<<e2<<endl;
	cout<<"p3\t"<<p3<<"±"<<e3<<endl;
	cout<<"p4\t"<<p4<<"±"<<e4<<endl;
	cout<<"p5\t"<<p5<<"±"<<e5<<endl;
	cout<<"p6\t"<<p6<<"±"<<e6<<endl;
	cout<<"p7\t"<<p7<<"±"<<e7<<endl;
	cout<<"p8\t"<<p8<<"±"<<e8<<endl;

	// Now, plot 18-14 kV 
	double xmin = 0.;//gr2->GetPointX(23);
	double xmax = 2*TMath::Pi();

	TF1 *func_4_1814 = new TF1("fVCOD_4_1814", fVCOD_4_1814, xmin, xmax, 9);
	TF1 *func_4_1814_E = new TF1("fVCOD_4_1814_E", fVCOD_4_1814_E, xmin, xmax, 9);
	TF1 *func_4_2012 = new TF1("fVCOD_4_2012", fVCOD_4_2012, xmin, xmax, 9);

	func_4_1814->SetParameter(0, p0); func_4_1814->SetParError(0, e0);
	func_4_1814->SetParameter(1, p1); func_4_1814->SetParError(1, e1);
	func_4_1814->SetParameter(2, p2); func_4_1814->SetParError(2, e2);
	func_4_1814->SetParameter(3, p3); func_4_1814->SetParError(3, e3);
	func_4_1814->SetParameter(4, p4); func_4_1814->SetParError(4, e4);
	func_4_1814->SetParameter(5, p5); func_4_1814->SetParError(5, e5);
	func_4_1814->SetParameter(6, p6); func_4_1814->SetParError(6, e6);
	func_4_1814->SetParameter(7, p7); func_4_1814->SetParError(7, e7);
	func_4_1814->SetParameter(8, p8); func_4_1814->SetParError(8, e8);

	func_4_1814_E->SetParameter(0, p0); func_4_1814_E->SetParError(0, e0);
	func_4_1814_E->SetParameter(1, p1); func_4_1814_E->SetParError(1, e1);
	func_4_1814_E->SetParameter(2, p2); func_4_1814_E->SetParError(2, e2);
	func_4_1814_E->SetParameter(3, p3); func_4_1814_E->SetParError(3, e3);
	func_4_1814_E->SetParameter(4, p4); func_4_1814_E->SetParError(4, e4);
	func_4_1814_E->SetParameter(5, p5); func_4_1814_E->SetParError(5, e5);
	func_4_1814_E->SetParameter(6, p6); func_4_1814_E->SetParError(6, e6);
	func_4_1814_E->SetParameter(7, p7); func_4_1814_E->SetParError(7, e7);
	func_4_1814_E->SetParameter(8, p8); func_4_1814_E->SetParError(8, e8);

	func_4_2012->SetParameter(0, p0); func_4_2012->SetParError(0, e0);
	func_4_2012->SetParameter(1, p1); func_4_2012->SetParError(1, e1);
	func_4_2012->SetParameter(2, p2); func_4_2012->SetParError(2, e2);
	func_4_2012->SetParameter(3, p3); func_4_2012->SetParError(3, e3);
	func_4_2012->SetParameter(4, p4); func_4_2012->SetParError(4, e4);
	func_4_2012->SetParameter(5, p5); func_4_2012->SetParError(5, e5);
	func_4_2012->SetParameter(6, p6); func_4_2012->SetParError(6, e6);
	func_4_2012->SetParameter(7, p7); func_4_2012->SetParError(7, e7);
	func_4_2012->SetParameter(8, p8); func_4_2012->SetParError(8, e8);

	DrawTF1(func_4_1814, ";#theta [rad];#LTy#GT [mm]", "../Images/MC/ClosedOrbit/BDSim_N4_18-14");
	DrawTF1(func_4_1814, ";#theta [rad];#LTy#GT [mm]", "../Images/MC/ClosedOrbit/BDSim_N4_18-14_E");
	DrawTF1(func_4_2012, ";#theta [rad];#LTy#GT [mm]", "../Images/MC/ClosedOrbit/BDSim_N4_20-12");

	// Sanity check 

	TF1 *func_4_183 = new TF1("fVCOD_4_183", fVCOD_4_183, xmin, xmax, 9);

	func_4_183->SetParameter(0, p0); func_4_183->SetParError(0, e0);
	func_4_183->SetParameter(1, p1); func_4_183->SetParError(1, e1);
	func_4_183->SetParameter(2, p2); func_4_183->SetParError(2, e2);
	func_4_183->SetParameter(3, p3); func_4_183->SetParError(3, e3);
	func_4_183->SetParameter(4, p4); func_4_183->SetParError(4, e4);
	func_4_183->SetParameter(5, p5); func_4_183->SetParError(5, e5);
	func_4_183->SetParameter(6, p6); func_4_183->SetParError(6, e6);
	func_4_183->SetParameter(7, p7); func_4_183->SetParError(7, e7);
	func_4_183->SetParameter(8, p8); func_4_183->SetParError(8, e8);

	// DrawTF1(func_4_183, ";#theta [rad];#LTy#GT [mm]", "../Images/MC/ClosedOrbit/BDSim_N4_183_SanCheck");
	DrawTF1(func_4_183, ";#theta [rad];#LTy#GT [mm]", "../Images/MC/ClosedOrbit/BDSim_N4_183_SanCheck");

	// Overlay with raw data

	// Input file for data
	TFile *input2 = TFile::Open("../Plots/Data/ClosedOrbit/reprocessed/ytot_vs_theta.root");
	TGraphErrors *gr2 = (TGraphErrors*)input2->Get("ytot_vs_theta");

	TCanvas *c1 = new TCanvas("c","c",800,600);

	gr2->SetTitle(";#theta [rad];#LTy_{18 kV}#GT#minus#LTy_{14 kV}#GT [mm]");
	gr2->GetXaxis()->SetTitleSize(.04);
	gr2->GetYaxis()->SetTitleSize(.04);
	gr2->GetXaxis()->SetTitleOffset(1.1);
	gr2->GetYaxis()->SetTitleOffset(1.25);
	gr2->GetXaxis()->CenterTitle(true);
	gr2->GetYaxis()->CenterTitle(true);
	gr2->GetYaxis()->SetMaxDigits(4);
	gr2->SetMarkerStyle(20); //  Full circle
	gr2->Draw("AP");
	//func_4_1814_E->Draw("same");
	func_4_1814->Draw("same");
	/*func_4_2012->Draw("same");

	TLegend *l1 = new TLegend(0.81,0.35,0.99,0.65)
	l1->SetBorderSize(0);

	l1->AddEntry(gr2,"Data");
	l*/

	string fname = "../Images/Data/ClosedOrbit/BDSim_N4_18-14_DataOverlay";
	//string fname = "../Images/MC/ClosedOrbit/Data/BDSim_N4_18-14_DataOverlay_E";
	//string fname = "../Images/MC/ClosedOrbit/BDSim_N4_20-12_DataOverlay";
	c1->SaveAs((fname+".pdf").c_str());
	c1->SaveAs((fname+".png").c_str());
	c1->SaveAs((fname+".C").c_str());

	delete c1;


	TCanvas *c2 = new TCanvas("c","c",800,600);

	func_4_2012->SetTitle(";#theta [rad];#LTy_{2}#GT #minus #LTy_{1}#GT [mm]");
	func_4_2012->GetXaxis()->SetTitleSize(.04);
	func_4_2012->GetYaxis()->SetTitleSize(.04);
	func_4_2012->GetXaxis()->SetTitleOffset(1.1);
	func_4_2012->GetYaxis()->SetTitleOffset(1.25);
	func_4_2012->GetXaxis()->CenterTitle(true);
	func_4_2012->GetYaxis()->CenterTitle(true);
	func_4_2012->GetYaxis()->SetMaxDigits(4);
	func_4_2012->SetLineWidth(3);
	func_4_2012->SetLineColor(kRed);
	func_4_2012->Draw();
	func_4_1814->SetLineWidth(3);
	func_4_1814->SetLineColor(kBlue);
	func_4_1814->Draw("same");

	TLegend *l1 = new TLegend(0.11,0.69,0.41,0.89);
	l1->SetBorderSize(0);

	l1->AddEntry(func_4_1814,"18 kV #minus 14 kV");
	l1->AddEntry(func_4_2012,"20 kV #minus 12 kV");
	l1->Draw("same");

	//string fname = "../Images/MC/ClosedOrbit/BDSim_N4_18-14_DataOverlay";
	string fname2 = "../Images/MC/ClosedOrbit/18kV-14kV_and_20kV-12kV";
	c2->SaveAs((fname2+".pdf").c_str());
	c2->SaveAs((fname2+".png").c_str());
	c2->SaveAs((fname2+".C").c_str());

	delete c2;



	return;
}