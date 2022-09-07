using namespace std;

void DrawTF1(TF1 *f1, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	f1->SetTitle(title.c_str());

	gStyle->SetOptStat(2210);
			
	f1->GetXaxis()->SetTitleSize(.04);
	f1->GetYaxis()->SetTitleSize(.04);
	f1->GetXaxis()->SetTitleOffset(1.1);
	f1->GetYaxis()->SetTitleOffset(1.1);
	f1->GetXaxis()->CenterTitle(1);
	f1->GetYaxis()->CenterTitle(1);
	f1->GetYaxis()->SetMaxDigits(4);
	f1->SetLineWidth(3);
	f1->SetLineColor(kRed);

	f1->Draw();

	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

// Probabilty of emission at a certain angle and lambda

double F1(double *x, double *par) {

	double theta_y = x[0] * 1e-3; // mrad
	double lambda = par[0];
	double gamma = 29.3; 

	double C = 1+pow(gamma,2)*pow(sin(theta_y),2);

	double a = 2*gamma/15*TMath::Pi();
	double b = sqrt(lambda*(1-lambda*C));
	double c =  22*C*lambda - 16*pow(C,2)*pow(lambda,2) + 9;

	double rad2mrad = 1e3;

	// the formula is only valid between certain values of lambda
	if(lambda*C > 1) return 0;

	else return a*b*c*cos(theta_y); // don't really understand why you need a cos(theta_y)

}

// From Joe

double f1Calc(double *x, double *par){

  double theta = 1E-3 * x[0]; //from mrads to rads
  double sinTheta = sin(theta); 
    
  double L = par[0];
  double delta = par[1];

  double Gamma = 29.3;

  //get maximum possible angle at this energy
  double maxAngle = asin(sqrt(L * (1 - L)) / (Gamma*L));

  //if greater than analytic maximum return 0;
  if ( fabs(sinTheta) > ( sqrt(L*(1-L)) / (Gamma*L))) return 0.0; 

  //constant term...
  double C = 1 + (Gamma*Gamma*sinTheta*sinTheta);
  if (C*L > 1) {
    cout << "TWAT 3 \n";
  }
  double D = sqrt(L*(1 - (C*L)));
  double E = 16*C*C*L*L - 22*C*L  - 9;
  double f1 = -2 * (Gamma /(15.0* TMath::Pi())) * (D * E);

  double wt = par[3];

  double ans = par[2] * f1 * cos(theta); // don't understand why you need a cos(theta)

  return ans;

}

void Test() { 

	double lambda = 0.5;

	TF1 *f1 = new TF1("F1", F1, -200, 200, 1);
	f1->SetParameter(0, lambda);

	DrawTF1(f1, "#lambda = "+to_string(lambda), "F1");

	double delta = 0.0; 
	double wt = 0;

	TF1* pty = new TF1("pty", f1Calc, -200, 200, 4);
  	
	pty->SetNpx(3000);
  	pty->FixParameter(0, lambda);//mom/(Gamma*mmu));
  	pty->FixParameter(1, delta);
  	pty->SetParameter(2, 1.0E-4); // normalisation?
  	pty->FixParameter(3, wt);

  	DrawTF1(pty, "", "../Images/MC/ToyVerticalAngle/F1_joe");

	return;

}
