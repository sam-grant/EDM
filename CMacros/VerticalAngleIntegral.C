void DrawTF1(TF1 *func, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	func->SetTitle(title.c_str());

	gStyle->SetOptStat(2210);
			
	func->GetXaxis()->SetTitleSize(.04);
	func->GetYaxis()->SetTitleSize(.04);
	func->GetXaxis()->SetTitleOffset(1.1);
	func->GetYaxis()->SetTitleOffset(1.1);
	func->GetXaxis()->CenterTitle(1);
	func->GetYaxis()->CenterTitle(1);
	func->GetYaxis()->SetMaxDigits(2);
	func->SetLineWidth(3);
	func->SetLineColor(kRed);

	func->Draw();
	
	//c->SaveAs((fname+".C").c_str());
	//c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

double IntegralFunction(double *x, double *par) {

	double theta = x[0] * 1e-3;
 	double gamma = par[0];

	return (1/30)*gamma*(1/TMath::Pi())*cos(theta)*(15*asin(sqrt(1+pow(gamma,2)*pow(sin(theta),2)))*pow(1+pow(gamma,2)*pow(sin(theta),2),-3/2)+sqrt(-pow(gamma,2)*pow(sin(theta),2)*pow(1+pow(gamma,2)*pow(sin(theta),2),-1)*(15+2*pow(gamma,2)*pow(sin(theta),2)*(15-8*pow(gamma,2)*pow(sin(theta),2)*(1+pow(gamma,2)*pow(sin(theta),2))))));

}

void VerticalAngleIntegral() {

	TF1 *f1 = new TF1("IntegralFunction", IntegralFunction, -250, 250, 1);
	f1->SetParameter(0, 29.3);

	DrawTF1(f1, "", "../Images/MC/ToyVerticalAngle/Integral");

	return;

}