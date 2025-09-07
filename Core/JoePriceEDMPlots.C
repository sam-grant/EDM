double  mmu = 105.6583755; //MeV
double  magicMom = 3094; //MeV
double  Gamma = sqrt(1 + (magicMom*magicMom/(mmu*mmu)) );

double f1Calc(double *x, double *par){
  double theta = 1E-3 * x[0]; //from mrads to rads
  double sinTheta = sin(theta); 
    
  double L = par[0];
  double delta = par[1];

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

  double ans = par[2] * f1 * cos(theta);

  return ans;
}

double f2Calc(double *x, double *par){
  double theta = 1E-3 * x[0]; //from mrads to rads
  double sinTheta = sin(theta); 

  //0: lambda
  //1: delta
  //2: norm
  //3: omega_t

  double delta = par[1];
  double omega_t = par[3];

  double L = par[0];
  

  //get maximum possible angle at this energy
  double maxAngle = asin(sqrt(L * (1 - L)) / (Gamma*L));

  //if greater than analytic maximum return 0;
  if ( fabs(sinTheta) > ( sqrt(L*(1-L)) / (Gamma*L))) return 0.0; 

  //constant term...
  double C = 1 + (Gamma*Gamma*sinTheta*sinTheta);
  if (C*L > 1) {
    cout << "TWAT 3 \n";
  }
  double D = L*C*(1 - L*C);
  //double D = L*(1 - L);
  double E = 2*L*Gamma*cos(delta)*sin(omega_t) / TMath::Pi();
  double F = D*E;

 //cos theta is there to convert from dsin Theta to dTheta
  double ans = par[2] * F * cos(theta);

  //HACK 
  ans = 0;
  
  return ans;
}

double f3Calc(double *x, double *par){
  double theta = 1E-3 * x[0]; //from mrads to rads
  double sinTheta = sin(theta); 

  //0: lambda
  //1: delta
  //2: norm
  //3: omega_t

  double delta = par[1];
  double omega_t = par[3];

  double L = par[0];
  
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
  double E = (4*C*L) - 1;
  double F = sinTheta * sin(delta) * sin(omega_t) * Gamma * Gamma * 4 * L / (3.0*TMath::Pi());

 //cos theta is there to convert from dsin Theta to dTheta
  double ans = par[2] * D * E * F * cos(theta);

  return ans;
}

double f4Calc(double *x, double *par){
  double theta = 1E-3 * x[0]; //from mrads to rads
  double sinTheta = sin(theta); 
  
  double L = par[0];
  double delta = par[1];

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
  double G = -16*C*C*L*L + 40*C*L*L + 2*C*L - 10*L - 1;
  double f4 = (2*Gamma/(15.0*TMath::Pi())) * D * G;

  double wt = par[3];

  //cos theta is there to convert from dsin Theta to dTheta
  double ans = par[2] * f4 * cos(wt) * cos(theta);

  return ans;
}


double pthetay(double *x, double *par){
  double theta = 1E-3 * x[0]; //from mrads to rads
  double sinTheta = sin(theta); 
  
  double L = par[0];
  double delta = par[1];

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

  //cos delta term - multiply by sin (wt)
  //double E2 = (4*C*L) - 1;
  //double F2 = cos(delta) * Gamma * 4 * L / (3.0*TMath::Pi());
  //
  ////cos theta is there to convert from dsin Theta to dTheta
  double E2 = L*C*(1 - L*C);
  //HACK
  //double E2 = L*(1 - L);
  double F2 = 2*L*Gamma*cos(delta) / TMath::Pi();
  double f2 = E2*F2;

  //sin delta term
  double E3 = (4*C*L) - 1;
  double F3 = sinTheta * sin(delta) * Gamma * Gamma * 4 * L / (3.0*TMath::Pi());
  double f3 = D * E3 * F3;

  //ignoring term because chi = 0

  //omega a term - multiply by cos (wt)
  double G = -16*C*C*L*L + 40*C*L*L + 2*C*L - 10*L - 1;
  double f4 = (2*Gamma/(15.0*TMath::Pi())) * D * G;
  

  //cout << "C: " << C << "\n";
  //cout << "D: " << D << "\n";
  //cout << "E: " << E << "\n";
  //cout << "G: " << G << "\n";
  double wt = par[3];
  //cout << "f1: " << f1 << "\n";
  //cout << "f2: " << f2 << " f2*sin(wt): " << f2*sin(wt) << "\n";
  //cout << "f3: " << f3 << " f3*sin(wt): " << f3*sin(wt) << "\n";
  //cout << "f4: " << f4 << " f4*cos(wt): " << f4*cos(wt) << "\n";

  //cos theta since the equations were derived for dsinTheta, and we want theta
  //double ans = par[2] * ( f1 + ( (f2 + f3)*sin(wt) ) + (f4*cos(wt)) ) * cos(theta);

  //HACK
  f2 = 0.0;
  //f3 *= 2.0;

  double ans = par[2] * (f1 + (f2 + f3)*sin(wt) + f4*cos(wt)) * cos(theta);


  return ans;
}

void EDMPlots(){

  gStyle->SetOptStat(0);
  TCanvas* c1 = new TCanvas("c1", "", 800, 600);
  c1->SetLeftMargin(0.2);
  c1->SetRightMargin(0.2);

  TFile* f = new TFile("trackerAcceptancePlotsFull.root", "READ");

  TDirectory* dir2 = (TDirectory*)f->Get("Tracks/Main");
  TH2F* h22 = (TH2F*)dir2->Get("S12S18_ThetaY_vs_p");
  
  //normalise
  h22->Scale(1.0/h22->Integral());
  h22->GetYaxis()->SetRangeUser(-500, 500);
  h22->Draw("COLZ");

  c1->SaveAs("MaxAngle2D_tracked.pdf");

  TDirectory* dir = (TDirectory*)f->Get("AllDecays/Main");
  TH2F* h2 = (TH2F*)dir->Get("ThetaY_vs_p_Fine");
  

  //normalise
  h2->Scale(1.0/h2->Integral());
  h2->GetYaxis()->SetRangeUser(-500, 500);
  h2->Draw("COLZ");

  c1->SaveAs("MaxAngle2D_noFit.png");

  TF1* f1 = new TF1("f1", "1000* asin( ( (x/[0]) * ([1] - (x/[0])) )^(0.5) / x ) ", 0, Gamma*mmu);
  f1->SetParameter(0, Gamma);
  f1->SetParameter(1, mmu);
  f1->SetLineWidth(3);
  f1->Draw("SAME");

  TLegend* leg = new TLegend(0.5, 0.7, 0.75, 0.8);
  leg->SetBorderSize(0);
  leg->AddEntry(f1, "sin^{-1}#left( #frac{#sqrt{#frac{#bar{E}}{#Gamma} #left( m_{#mu} - #frac{#bar{E}}{#Gamma} #right)}}{#bar{E}} #right)", "L");
  leg->Draw();

  c1->SaveAs("MaxAngle2D.pdf");
  c1->SaveAs("MaxAngle2D.png");

  //copy of h2 but normalised to 1 on xaxis
  int nbinsX = h2->GetXaxis()->GetNbins();
  int nbinsY = h2->GetYaxis()->GetNbins();
  double ymin = h2->GetYaxis()->GetBinLowEdge(1);
  double ymax = -ymin;
  TH2F* h2_normX = new TH2F("h2_normX", ";Fractional LAB energy; #theta_{y} [mrad]", nbinsX, 0, 1, nbinsY, ymin, ymax); 

  for (int ix(0); ix <= nbinsX; ix++){
    for (int iy(0); iy <= nbinsY; iy++){
      double cont = h2->GetBinContent(ix, iy);
      h2_normX->SetBinContent(ix, iy, cont);
    }
  }

  h2_normX->GetYaxis()->SetRangeUser(-500, 500);
  h2_normX->Draw("COLZ");

  TF1* fB = new TF1("fB", "1000* asin( (x*(1-x))^(0.5) / ([0] * x) ) ", 0, 1.0);
  fB->SetParameter(0, Gamma);
  fB->SetLineWidth(3);
  fB->Draw("SAME");

  TLegend* legB = new TLegend(0.5, 0.7, 0.75, 0.8);
  legB->SetBorderSize(0);
  legB->AddEntry(fB, "sin^{-1}#left(#frac{#sqrt{#lambda(1-#lambda)}}{#gamma#lambda}#right)", "L");
  legB->Draw();

  c1->SaveAs("MaxAngle2D_normX.pdf");
  c1->SaveAs("MaxAngle2D_normX.png");

  //expression for edm oscillation amplitude
  TF1* f2 = new TF1("f2", "([0] * (x - 1) * (2*x +1)) / ([1]* (4*x*x - 5*x - 5) )", 0, 1);
  f2->FixParameter(0, 1.0);
  f2->FixParameter(1, Gamma);

  //A*maxAngle
  TF1* f3 = new TF1("f3", "([0] * (x - 1) * (4*x +1)) / ([1]* (4*x*x - 5*x - 5) )", 0, 1);
  f3->FixParameter(0, 1.0);
  f3->FixParameter(1, Gamma);

  f2->SetLineColor(3);
  f3->SetLineColor(4);

  f3->Draw();
  f2->Draw("SAME");
  c1->SaveAs("tmp.pdf");

  //Slices of theta_y
  double mom = 500;
  double delta = 0.0;//1E-3; //tilt angle rads
  double wt = 0.0;
  //wt = TMath::Pi()/2.0;
  int mBin = h2->GetXaxis()->FindBin(mom);
  cout << mom << " in bin: " << mBin << "\n";
  
  TH1D* h1 = h2->ProjectionY("_projY", mBin, mBin);
  h1->GetXaxis()->SetRangeUser(-200, 200);
  h1->Draw();

  
  //TESTING
  //double xtmp[1] = {100}; // must be in range, mRad
  //for (auto& wttmp : {0.0, TMath::PiOver2(), TMath::Pi()}){
  //  double p[4] = {mom/(Gamma*mmu), delta, 0.1, wttmp};
  //  double prob = pthetay(xtmp, p);
  //  cout << "probability of angle = " << xtmp[0] << "mRad for L: " << p[0] << " (mom= " << mom << ") and phase: " << wttmp <<" is: " << prob << "\n";
  //}
  //return;

  //analytic, to get average over a phase we only need f1
  TF1* pty = new TF1("pty", f1Calc, -200, 200, 4);
  
  pty->SetNpx(3000);
  pty->FixParameter(0, mom/(Gamma*mmu)); // lambda
  pty->FixParameter(1, delta); // needed?
  pty->SetParameter(2, 1.0E-4);
  pty->FixParameter(3, wt);

  //fit
  /*
  TF1* pty = new TF1("pty", pthetay2, -200, 200, 7);
  pty->SetNpx(3000);
  pty->FixParameter(0, mom/(Gamma*mmu));
  pty->FixParameter(1, delta);
  pty->SetParameter(2, 1.0E-7);
  pty->FixParameter(3, 64);
  pty->SetParameter(4, 35);//80);
  pty->FixParameter(5, 32);
  pty->FixParameter(6, 36);

  pty->SetParLimits(2, 0, 2.0);
  //pty->SetParLimits(3, -300, 300);
  pty->SetParLimits(4, -300, 300);
  //pty->SetParLimits(5, -300, 300);
  //pty->SetParLimits(6, -300, 300);
  */

  h1->Fit("pty");
  
  pty->Draw("SAME");
  h1->Draw("SAME");

  //cout << "sin theta y integral: " << pty->Integral(-200, 200, 1E-3) << "\n"; 

  c1->SaveAs("projY.pdf");

  //loop over times and draw distribution
  double phase = 0;
  int nsteps = 32;
  double pStep = TMath::TwoPi() / nsteps;
  //use large delta here

  delta = 0.01;
  TF1* pty2 = new TF1("pty2", pthetay, -200, 200, 4);
  TF1* f1C = new TF1("f1C", f1Calc, -200, 200, 4);
  TF1* f2C = new TF1("f2C", f2Calc, -200, 200, 4);
  TF1* f3C = new TF1("f3C", f3Calc, -200, 200, 4);
  TF1* f4C = new TF1("f4C", f4Calc, -200, 200, 4);
  TF1* f3CX = new TF1("f3C", f3Calc, -200, 200, 4);
  
  pty2->SetTitle(Form("Momentum = %.2f [MeV];#theta_{y} [mRads]", mom));

  pty2->SetNpx(3000);
  f1C->SetNpx(3000);
  f2C->SetNpx(3000);
  f3C->SetNpx(3000);
  f4C->SetNpx(3000);
  f3CX->SetNpx(3000);

  f1C->SetLineColor(3);
  f2C->SetLineColor(4);
  f3C->SetLineColor(7);
  f4C->SetLineColor(6);

  f3CX->SetLineColor(7);
  f3CX->SetLineStyle(2);

  TLegend *leg2 = new TLegend(0.8, 0.6, 0.95, 0.9);
  //leg2->SetBorderSize(0);
  leg2->AddEntry(pty2, "Total", "L");
  leg2->AddEntry(f1C, "average", "L");
  leg2->AddEntry(f2C, "cos(#delta) sin(#omega t)", "L");
  leg2->AddEntry(f3C, "sin(#delta) sin(#omega t)", "L");
  leg2->AddEntry(f4C, "cos(wt)", "L");

  leg2->AddEntry(f3CX, "sin(#delta) sin(#omega t) #times 100", "L");

  TF1* fN = new TF1("fN", "([1]*1.0/(12.0*3.14)) * (1-([0]*x)) * (5 + 5*([0]*x) - 4*([0]*x*[0]*x))", 0, Gamma*mmu);
  fN->SetParameter(0, 1.0/(Gamma*mmu));
  fN->SetParameter(1, 1.0);

  //check mom plot follows function!
  TH1F* hMom = (TH1F*)dir->Get("Momentum");
  TCanvas* cMom = new TCanvas("cMom", "", 800, 600);
  cMom->cd();
  hMom->Scale(1.0/hMom->Integral());
  hMom->Draw();
  hMom->Fit(fN);
  cMom->SaveAs("MomCheck.png");
  c1->cd();


  //normalise
  h2->Scale(1.0/h2->Integral());

  for (auto& Mom : {100.0, 500.0}){
  //for (auto& Mom : {100.0, 500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0}){
    //HACK
    //break;
    fN->FixParameter(1, 1.0);
    //break;
    double L = mom / (Gamma * mmu);
    double N = (1.0 / (6*TMath::Pi())) * (L - 1) * (4*L*L - 5*L - 5);
    phase = 0;
    mom = Mom;
    cout << "making gif for momentum: " << mom << "\n";

    pty2->SetTitle(Form("Momentum = %.2f [MeV];#theta_{y} [mRads]", mom));  
    double A = (-8*L*L + L + 1) / (4*L*L - 5*L - 5);
    
    //step through phases
    for (int i(0); i < nsteps; i++){
      //if (i > 2) break;
      //for all x
      
      double Ntot = N * (1 + A*cos(phase));

      //set all parameters
      pty2->SetParameter(0, mom/(Gamma*mmu));
      pty2->SetParameter(1, delta);
      pty2->SetParameter(2, N);
      pty2->SetParameter(3, phase);
      
      f1C->SetParameter(0, mom/(Gamma*mmu));
      f1C->SetParameter(1, delta);
      f1C->SetParameter(2, N);
      f1C->SetParameter(3, phase);
      
      f2C->SetParameter(0, mom/(Gamma*mmu));
      f2C->SetParameter(1, delta);
      f2C->SetParameter(2, N);
      f2C->SetParameter(3, phase);
      
      f3C->SetParameter(0, mom/(Gamma*mmu));
      f3C->SetParameter(1, delta);
      f3C->SetParameter(2, N);
      f3C->SetParameter(3, phase);
      
      f4C->SetParameter(0, mom/(Gamma*mmu));
      f4C->SetParameter(1, delta);
      f4C->SetParameter(2, N);
      f4C->SetParameter(3, phase);
      
      f3CX->SetParameter(0, mom/(Gamma*mmu));
      f3CX->SetParameter(1, delta);
      f3CX->SetParameter(2, 100.0*N);
      f3CX->SetParameter(3, phase);
      
      pty2->GetYaxis()->SetRangeUser(-0.8, 3.0);
      //pty2->GetYaxis()->SetRangeUser(-0.5, 0.5);
      
      pty2->Draw();
      f1C->Draw("SAME");
      f2C->Draw("SAME");
      f3C->Draw("SAME");
      f4C->Draw("SAME");
      f3CX->Draw("SAME");
      leg2->Draw();
      
      TPaveText* txt = new TPaveText(0.81,0.2,0.95,0.59,"NDC");
      txt->SetTextFont(63);
      txt->SetTextSize(15);
      txt->SetBorderSize(0);
      txt->SetFillColor(0);
      txt->AddText(Form("#frac{#phi_{a}}{2#pi} = %.2f", phase/(TMath::TwoPi())) );
      txt->AddText(Form("#frac{N}{N(#lambda)} = %.2f", pty2->Integral(-300,300) / f1C->Integral(-300,300) ));
      //txt->AddText(Form("#frac{N}{N(#lambda)(1+A(#lambda)cos(#phi_a))} = %.2f", pty2->Integral(-300,300) / Ntot ));
      txt->Draw();
      //cout << "pty2: " << pty2->GetParameter(0) << " " << pty2->GetParameter(1) << " " << pty2->GetParameter(2) << " " << pty2->GetParameter(3) << "\n";
      
      //if (i%3 == 0) cout << "gif " << i << "\n";
      //c1->SaveAs(Form("timePlots/theta_%02i.png", i));
      c1->Print(Form("timePlots/theta_phase_%.2f.gif+20", mom));
      
      //double L = mom/(Gamma*mmu);
      //double xmax = asin(sqrt(lambda * (1 - lambda)) / (Gamma* mom));
      //double x = -xmax;
      //double dx = 2*xmax / 100;
      //while (x < xmax){
      //  double xtmp[1] = {x}; // must be in range, mRad
      //  double p[4] = {L, delta, 0.1, phase};
      //  double prob = pthetay(xtmp, p);
      //  x += dx;
      //}
      phase += pStep;
    }
    
    c1->Print(Form("timePlots/theta_phase_%.2f.gif++", mom));
  }

  //2D gif
  /*
  TCanvas* cf1 = new TCanvas("cf1", "", 800, 600);
  cf1->SetLeftMargin(0.2);
  cf1->SetRightMargin(0.2);

  TCanvas* cf3 = new TCanvas("cf3", "", 800, 600);
  cf3->SetLeftMargin(0.2);
  cf3->SetRightMargin(0.2);

  TCanvas* cf4 = new TCanvas("cf4", "", 800, 600);
  cf4->SetLeftMargin(0.2);
  cf4->SetRightMargin(0.2);

  Int_t MyPalette[100];
  //read downwards for color, here from red -> orange -> white -> purple -> blue
  TColor *orange = gROOT->GetColor(kOrange+1);
  TColor *purple = gROOT->GetColor(kViolet-2);
  float orange_r, orange_b, orange_g, purple_r, purple_b, purple_g;
  orange->GetRGB(orange_r, orange_g, orange_b);
  purple->GetRGB(purple_r, purple_g, purple_b);
  Double_t Red[]    = {1, orange_r, 1.0, purple_r, 0};
  Double_t Green[]  = {0, orange_g, 1.0, purple_g, 0};
  Double_t Blue[]   = {0, orange_b, 1.0, purple_b, 1};
  Double_t Length[] = {0.,0.35,    .50,  0.65,    1.0};
  Int_t FI = TColor::CreateGradientColorTable(5, Length, Red, Green, Blue, 100);
  for (int i=0;i<100;i++) MyPalette[i] = FI+i;

  c1->cd();
  double lambdaMin = 0.1;
  ymax = 1000* 1.1 * sqrt(lambdaMin * (1 - lambdaMin)) / (Gamma * lambdaMin);
  ymin = -1* ymax;

  //sam's numbers for acceptance
  //x-axis: 0 to 3127.11 MeV in 100.87466 MeV bins
  //y-axis: ±536.04517 mrad in 1.0720903 mrad bins
  
  TH2F* h2_gif = new TH2F("h2_gif", ";Fractional LAB energy; #theta_{y} [mrad]", 100, lambdaMin, 1.0, 200, ymin, ymax); 
  TH2F* h2_gif_f1 = new TH2F("h2_gif_f1", "F_{1};Fractional LAB energy; #theta_{y} [mrad]", 100, lambdaMin, 1.0, 200, ymin, ymax); 
  TH2F* h2_gif_f3 = new TH2F("h2_gif_f3", "F_{2};Fractional LAB energy; #theta_{y} [mrad]", 100, lambdaMin, 1.0, 200, ymin, ymax); 
  TH2F* h2_gif_f4 = new TH2F("h2_gif_f4", "F_{3};Fractional LAB energy; #theta_{y} [mrad]", 100, lambdaMin, 1.0, 200, ymin, ymax); 

  double phase2 = 0.0;
  int nsteps2 = 64;
  double pStep2 = TMath::TwoPi() / nsteps2;

  int nBinsX = h2_gif->GetXaxis()->GetNbins();
  int nBinsY = h2_gif->GetYaxis()->GetNbins();
  
  double N2 = 1.0;
  double delta2 = 0.9;

  for (int iPhase(0); iPhase < nsteps2; iPhase++){
    h2_gif->Reset("ICES");
    h2_gif_f1->Reset("ICES");
    h2_gif_f3->Reset("ICES");
    h2_gif_f4->Reset("ICES");

    //loop over every bin
    double L = lambdaMin;
    for (int ix(1); ix <= nBinsX; ix++){
      L = h2_gif->GetXaxis()->GetBinCenter(ix);
      double LMax = 1000 * sqrt(L * (1 - L)) / (Gamma * L);
      pty2->FixParameter(0, L);
      pty2->FixParameter(1, delta2);
      pty2->FixParameter(2, N2);
      pty2->FixParameter(3, phase2);

      f1C->SetParameter(0, L);
      f1C->SetParameter(1, delta2);
      f1C->SetParameter(2, N2);
      f1C->SetParameter(3, phase2);
      
      f3C->SetParameter(0, L);
      f3C->SetParameter(1, delta2);
      f3C->SetParameter(2, N2);
      f3C->SetParameter(3, phase2);
      
      f4C->SetParameter(0, L);
      f4C->SetParameter(1, delta2);
      f4C->SetParameter(2, N2);
      f4C->SetParameter(3, phase2);

      //double N = (N2 / (6*TMath::Pi())) * (L - 1) * (4*L*L - 5*L - 5);
      //double A = (-8*L*L + L + 1) / (4*L*L - 5*L - 5);
      //double Ntot = N * (1 + A*cos(phase2));
      
      //cout << "GIF: L: " << L << " ix: " << ix << "\n";
      for (int iy(0); iy <= nBinsY; iy++){
	double theta = h2_gif->GetYaxis()->GetBinCenter(iy);
	//save time by not filling above max
	if (fabs(theta) > LMax) continue;
	double cont = pty2->Eval(theta);
	//if (ix == 10) cout << "GIF: L: " << L << " ix: " << ix << " theta: " << theta << " iy: " << iy << " cont " << cont <<"\n";
	h2_gif->SetBinContent(ix, iy, cont);
	h2_gif->SetBinError(ix, iy, sqrt(fabs(cont)));

	//fill  F1
	double cont_f1 = f1C->Eval(theta);
	h2_gif_f1->SetBinContent(ix, iy, cont_f1);
	h2_gif_f1->SetBinError(ix, iy, sqrt(fabs(cont_f1)));

	//fill  F3
	double cont_f3 = f3C->Eval(theta);
	h2_gif_f3->SetBinContent(ix, iy, cont_f3);
	h2_gif_f3->SetBinError(ix, iy, sqrt(fabs(cont_f3)));

	//fill  F4
	double cont_f4 = f4C->Eval(theta);
	h2_gif_f4->SetBinContent(ix, iy, cont_f4);
	h2_gif_f4->SetBinError(ix, iy, sqrt(fabs(cont_f4)));

      }
    }
    TPaveText* txt = new TPaveText(0.61,0.2,0.75,0.3,"NDC");
    txt->SetTextFont(63);
    txt->SetTextSize(15);
    txt->SetBorderSize(0);
    txt->SetFillColor(0);
    txt->AddText(Form("#frac{#phi_{a}}{2#pi} = %.2f", phase2/(TMath::TwoPi())) );

    //nice to use one that ends on white, so zero on z axis makes sense
    //gStyle->SetPalette(kSunset);
    gStyle->SetPalette(kDarkBodyRadiator);
    //if (iPhase == 0) {
    //  TColor::InvertPalette();
    //  cout << "PHASE: " << phase2 << " iPhase: " << iPhase << "\n";
    //}
    //have to reinvert every time if we have switched palettes
    TColor::InvertPalette();
    gStyle->SetNumberContours(100);
    
    h2_gif->GetZaxis()->SetRangeUser(0,12.5);
    h2_gif->GetZaxis()->SetTitle("Predicted N");
    h2_gif->GetXaxis()->CenterTitle();
    h2_gif->GetYaxis()->CenterTitle();
    h2_gif->GetZaxis()->CenterTitle();
    h2_gif->SetTitle(Form("#delta = %.2f", delta2));
    c1->cd();
    h2_gif->Draw("COLZ");
    txt->Draw();

    //cout << "Phase: " << phase2 << " for GIF, N = " << h2_gif->Integral() << "\n";
    if (iPhase == 0 )     c1->Print("timePlots/2DGIF.gif");
    else if (iPhase == nsteps2 - 1) c1->Print("timePlots/2DGIF.gif++");
    else c1->Print("timePlots/2DGIF.gif+");

    h2_gif_f1->GetZaxis()->SetRangeUser(0,12.5);
    h2_gif_f1->GetZaxis()->SetTitle("F_{1}");
    h2_gif_f1->GetXaxis()->CenterTitle();
    h2_gif_f1->GetYaxis()->CenterTitle();
    h2_gif_f1->GetZaxis()->CenterTitle();
    h2_gif_f1->SetTitle(Form("#delta = %.2f", delta2));
    cf1->cd();
    h2_gif_f1->Draw("COLZ");
    txt->Draw();
    if (iPhase == 0 )     cf1->Print("timePlots/2DGIF_F1.gif");
    else if (iPhase == nsteps2 - 1) cf1->Print("timePlots/2DGIF_F1.gif++");
    else cf1->Print("timePlots/2DGIF_F1.gif+");

    //these fuckers need white in the middle
    gStyle->SetPalette(100, MyPalette);
    //gStyle->SetPalette(kTemperatureMap);
    //TColor::InvertPalette();

    h2_gif_f3->GetZaxis()->SetRangeUser(-3.0,3.0);
    h2_gif_f3->GetZaxis()->SetTitle("F_{3}");
    h2_gif_f3->GetXaxis()->CenterTitle();
    h2_gif_f3->GetYaxis()->CenterTitle();
    h2_gif_f3->GetZaxis()->CenterTitle();
    h2_gif_f3->SetTitle(Form("#delta = %.2f", delta2));
    cf3->cd();
    h2_gif_f3->Draw("COLZ");
    txt->Draw();
    if (iPhase == 0 )     cf3->Print("timePlots/2DGIF_F3.gif");
    else if (iPhase == nsteps2 - 1) cf3->Print("timePlots/2DGIF_F3.gif++");
    else cf3->Print("timePlots/2DGIF_F3.gif+");

    h2_gif_f4->GetZaxis()->SetRangeUser(-4.5,4.5);
    h2_gif_f4->GetZaxis()->SetTitle("F_{4}");
    h2_gif_f4->GetXaxis()->CenterTitle();
    h2_gif_f4->GetYaxis()->CenterTitle();
    h2_gif_f4->GetZaxis()->CenterTitle();
    h2_gif_f4->SetTitle(Form("#delta = %.2f", delta2));
    cf4->cd();
    h2_gif_f4->Draw("COLZ");
    txt->Draw();
    if (iPhase == 0 )     cf4->Print("timePlots/2DGIF_F4.gif");
    else if (iPhase == nsteps2 - 1) cf4->Print("timePlots/2DGIF_F4.gif++");
    else cf4->Print("timePlots/2DGIF_F4.gif+");
    
    //cout << "iPhase: " << iPhase << " phase: " << phase2 << "\n";

    c1->cd();
    gStyle->SetPalette(kDarkBodyRadiator);
    phase2 += pStep2;
  }

  //gStyle->SetPalette(kDarkBodyRadiator);
  //c1->Print("timePlots/2DGIF.gif++");
  //cf1->Print("timePlots/2DGIF_F1.gif++");
  //cf3->Print("timePlots/2DGIF_F3.gif++");
  //cf4->Print("timePlots/2DGIF_F4.gif++");
  */

  //SAMS ACCEPTANCE
  //sam's numbers for acceptance
  //x-axis: 0 to 3127.11 MeV in 100.87466 MeV bins -> 31 bins
  //y-axis: ±536.04517 mrad in 1.0720903 mrad bins -> 1000 bins : going to rebin this
  
  //original /gm2/app/users/sgrant/ThetaYvsMomAcceptance.root
  TFile* fSam = new TFile("ThetaYvsMomAcceptance.root");
  fSam->ls();
  TDirectory* top = (TDirectory*) fSam->Get("2D_ratio");
  top->ls();
  TH2F* WeightMap = (TH2F*)fSam->Get("2D_ratio/WeightMap");

  cout << "weight map: " << WeightMap->GetBinContent(50,500) << "\n";

  c1->cd();
  //can't draw at the moment because it seg faults!
  //WeightMap->Draw("COLZ");


  //c1->SaveAs("AcceptancePlots/WeightMap.png");
  //return;

  //get ranges and bins for all 3
  double lMin = 0.0;
  double lMax = 1.0;
  int nLBins = 31;

  double phaseMin = 0.0;
  double phaseMax = TMath::TwoPi();
  int nPhaseBins = 20;

  double thetaMin = -536.04517;
  double thetaMax = +536.04517;
  int nThetaBins = 1000;

  //this one is to match Sam's acceptance hist
  TH2F* h2_sam = new TH2F("h2_sam", ";Fractional LAB energy; #theta_{y} [mrad]", nLBins, lMin, lMax, nThetaBins, thetaMin, thetaMax); 
  
  //useful combination
  TH2F* h2_phaseTheta = new TH2F("h2_phaseTheta", ";#omegat; #theta_{y} [mrad]", nPhaseBins, phaseMin, phaseMax, nThetaBins, thetaMin, thetaMax); 
  TH2F* h2_phaseTheta_acc = new TH2F("h2_phaseTheta_acc", ";#omegat; #theta_{y} [mrad]", nPhaseBins, phaseMin, phaseMax, nThetaBins, thetaMin, thetaMax); 
  
  TH3F* h3_lambdaPhaseTheta = new TH3F("h3_lambdaPhaseTheta", "",nLBins, lMin, lMax, nPhaseBins, phaseMin, phaseMax, nThetaBins, thetaMin, thetaMax); 

  //N3 is the average number of entries per phase bin
  double N3 = 1.0E10;
  double delta3 = 0.1;

  TH1F* h1_A1 = new TH1F("h1_A1", ";#lambda",nLBins, lMin, lMax);
  TH1F* h1_A2 = new TH1F("h1_A1", ";#lambda",nLBins, lMin, lMax);

  //with acceptance weighting
  TH1F* h1_A1_acc = new TH1F("h1_A1_acc", ";#lambda",nLBins, lMin, lMax);
  TH1F* h1_A2_acc = new TH1F("h1_A1_acc", ";#lambda",nLBins, lMin, lMax);

  //flip it so we do lambda, energy, theta
  for (int iL(1); iL <= nLBins; iL++){

    //intially set to zeroes
    h1_A1->SetBinContent(iL, 0.0);
    h1_A2->SetBinContent(iL, 0.0);

    h1_A1_acc->SetBinContent(iL, 0.0);
    h1_A2_acc->SetBinContent(iL, 0.0);

    double L = h2_sam->GetXaxis()->GetBinCenter(iL);
    double Lsam = WeightMap->GetXaxis()->GetBinCenter(iL);
    cout << "lambda counter: " << iL << " bin center: " << L << " from acceptance map: " << Lsam/3127.00 << "\n";
    if (L < 0.1) continue;
    double ThetaMax = 1000 * sqrt(L * (1 - L)) / (Gamma * L);

    //2D plot of phase vs theta
    h2_phaseTheta->Reset("ICES");
    h2_phaseTheta_acc->Reset("ICES");

    TH1F* h1_sumTheta = new TH1F("h1_sumTheta", Form("#lambda = %.3f;#omegat;#Sigma #theta_{y}", L), nPhaseBins, phaseMin, phaseMax); 
    TH1F* h1_sumTheta_acc = new TH1F("h1_sumTheta_acc", Form("#lambda = %.3f;#omegat;#Sigma #theta_{y}", L), nPhaseBins, phaseMin, phaseMax); 
    TH2F* h2_phaseTheta_up = new TH2F("h2_phaseTheta_up", ";phase; #theta_{y} (N_{U} only) [mrad]", nPhaseBins,phaseMin,phaseMax,nThetaBins, thetaMin, thetaMax); 
    TH2F* h2_phaseTheta_do = new TH2F("h2_phaseTheta_do", ";phase; #theta_{y} (N_{D} only) [mrad]", nPhaseBins,phaseMin,phaseMax,nThetaBins, thetaMin, thetaMax); 
    for (int iPhase(1); iPhase <= nPhaseBins; iPhase++){
      double phase3 = h2_phaseTheta->GetXaxis()->GetBinCenter(iPhase);
      pty2->FixParameter(0, L);
      pty2->FixParameter(1, delta3);
      pty2->FixParameter(2, N3);
      pty2->FixParameter(3, phase3);

      //cout << "iPhase: " << iPhase << " phase3: " << phase3 << " bin centre (iPhase): " << h2_phaseTheta->GetXaxis()->GetBinCenter(iPhase) << "\n";

      //cout << "GIF: L: " << L << " iL: " << iL << "\n";
      double sumTheta = 0.0;
      double sumTheta_acc = 0.0;

      for (int iTheta(1); iTheta <= nThetaBins; iTheta++){
	double theta = h2_sam->GetYaxis()->GetBinCenter(iTheta); // in mrad
	//save time by not filling above max
	if (fabs(theta) > ThetaMax) continue;
	double cont = pty2->Eval(theta);

	//get acceptance from Sam's hist - this assume uniform acceptance as a function of phase
	double acc = WeightMap->GetBinContent(iL, iTheta);
	
	if (iL == 15 && iPhase == 5) {
	  double Tsam =  WeightMap->GetYaxis()->GetBinCenter(iTheta);
	  cout << "L: " << L << " phase: " << phase << " theta: "<< theta << " weight map: L: " << Lsam/3097.00 << " theta: " << Tsam << " acc: " << acc <<"\n";
	}

	h2_phaseTheta->SetBinContent(iPhase, iTheta, cont);
	h2_phaseTheta->SetBinError(iPhase, iTheta, sqrt(fabs(cont)));

	h2_phaseTheta_acc->SetBinContent(iPhase, iTheta, acc*cont);
	h2_phaseTheta_acc->SetBinError(iPhase, iTheta, sqrt(fabs(acc*cont)));

	if (theta > 0){
	  h2_phaseTheta_up->SetBinContent(iPhase, iTheta, cont);
	  h2_phaseTheta_up->SetBinError(iPhase, iTheta, sqrt(fabs(cont)));
	}
	else {
	  h2_phaseTheta_do->SetBinContent(iPhase, iTheta, cont);
	  h2_phaseTheta_do->SetBinError(iPhase, iTheta, sqrt(fabs(cont)));
	}

	//fill the h3
	h3_lambdaPhaseTheta->SetBinContent(iL, iPhase, iTheta, cont);
	h3_lambdaPhaseTheta->SetBinError(iL, iPhase, iTheta, sqrt(fabs(cont)));
	sumTheta += theta * cont;
	sumTheta_acc += theta * acc * cont;
      }
      h1_sumTheta->SetBinContent(iPhase, sumTheta);
      h1_sumTheta->SetBinError(iPhase, sqrt(fabs(sumTheta)));

      h1_sumTheta_acc->SetBinContent(iPhase, sumTheta_acc);
      h1_sumTheta_acc->SetBinError(iPhase, sqrt(fabs(sumTheta_acc)));
    }

    //raw sum, in the numerator
    h1_sumTheta->Draw("HIST E");
    c1->SaveAs(Form("AcceptancePlots/sumTheta_vs_phase_%.3fL.png", L));

    TH1F* projX = (TH1F*)h2_phaseTheta->ProjectionX();
    TH1F* projX_2 = (TH1F*)h2_phaseTheta->ProjectionX();
    TH1F* projY = (TH1F*)h2_phaseTheta->ProjectionY();
    TProfile* tmp = (TProfile*)h2_phaseTheta->ProfileX();

    //divide by N(L) (will do division by N(L, wt) using profile)
    h1_sumTheta->Scale(nPhaseBins / projX->Integral());
    h1_sumTheta->Draw("HIST E");
    c1->SaveAs(Form("AcceptancePlots/sumThetaNorm_vs_phase_%.3fL.png", L));
    
    //fit with sin wave to get amplitude
    TF1* fsin = new TF1("fsin", "[0]*sin([1]*x + [2])", phaseMin, phaseMax);
    fsin->SetParameter(0, 1.0);
    fsin->FixParameter(1, 1.0);
    fsin->FixParameter(2, 0.0);
    h1_sumTheta->Fit(fsin, "RQ");
    
    //from original derivation with N(L) as denominator
    h1_A1->SetBinContent(iL, fsin->GetParameter(0));
    h1_A1->SetBinError(iL, fsin->GetParError(0));

    h1_sumTheta->Draw();
    c1->SaveAs(Form("AcceptancePlots/sumThetaNorm_vs_phase_%.3fL_withFit.png", L));

    TH1F* projX_acc = (TH1F*)h2_phaseTheta_acc->ProjectionX();
    h1_sumTheta_acc->Scale(nPhaseBins / projX_acc->Integral());
    h1_sumTheta_acc->Draw("HIST E");
    
    TF1* fsin2 = new TF1("fsin2", "[3] + [0]*sin([1]*x + [2])", phaseMin, phaseMax);
    fsin2->SetParameter(0, 1.0);
    fsin2->FixParameter(1, 1.0);
    fsin2->FixParameter(2, 0.0);
    fsin2->SetParameter(3, 1.0);
    h1_sumTheta_acc->Fit(fsin2, "RQ");

    h1_sumTheta_acc->Draw();
    c1->SaveAs(Form("AcceptancePlots/sumThetaNormAcc_vs_phase_%.3fL_withFit.png", L));

    h1_A1_acc->SetBinContent(iL, fsin2->GetParameter(0));
    h1_A1_acc->SetBinError(iL, fsin2->GetParError(0));

    h1_sumTheta->Delete();
    h1_sumTheta_acc->Delete();


    h2_phaseTheta->Draw("COLZ");
    c1->SaveAs(Form("AcceptancePlots/theta_phase_2D_%.3fL.png", L));
    
    tmp->SetTitle(Form("#lambda = %.3f; #omegat;<#theta_{y}> [mrads]", L));
    tmp->Draw();
    c1->SaveAs(Form("AcceptancePlots/profX_%.3fL.png", L));
    
    projY->Draw();
    pty2->FixParameter(3, TMath::PiOver2());
    pty2->SetParameter(2, N3*nPhaseBins);
    //pty2->SetParLimits(2, 0, N3*1000.0);
    projY->Fit(pty2, "RQ");
    projY->Draw("E");
    c1->SaveAs(Form("AcceptancePlots/projY_%.3fL.png", L));

    TH2F* h2_phaseTheta_ud = new TH2F("h2_phaseTheta_ud",";phase; #theta_{y} (N_{U} - N_{D}) [mrad]", nPhaseBins,phaseMin,phaseMax,nThetaBins,thetaMin,thetaMax); 
    h2_phaseTheta_ud->Add(h2_phaseTheta_up, h2_phaseTheta_do, 1.0, -1.0);
    TH1F* projX_ud = (TH1F*)h2_phaseTheta_ud->ProjectionX("projX_ud");
    TH1F* projX_ud_2 = (TH1F*)h2_phaseTheta_ud->ProjectionX("projX_ud2");
    //dividing by projX is equivalent to dividing by N(L, wt), scaling is dividing by N(L)
    projX_ud->Divide(projX);
    projX_ud_2->Scale(nPhaseBins / projX->Integral());

    projX_ud_2->Draw();
    c1->SaveAs(Form("AcceptancePlots/projXupdo_%.3fL.png", L));

    projX_ud_2->Fit(fsin);
    projX_ud_2->Draw();
    c1->SaveAs(Form("AcceptancePlots/projXupdo_%.3fL_withFit.png", L));

    h1_A2->SetBinContent(iL, fsin->GetParameter(0));
    h1_A2->SetBinError(iL, fsin->GetParError(0));

    projX->SetTitle(Form("#lambda = %.3f; #omegat; #frac{N(#lambda, #omegat)}{N(#lambda)}", L));
    projX->Scale(nPhaseBins / projX->Integral());
    projX->GetYaxis()->SetRangeUser(0.0, 2.0);
    projX->GetXaxis()->CenterTitle();
    projX->GetYaxis()->CenterTitle();

    projX->Draw();
    c1->SaveAs(Form("AcceptancePlots/projX_%.3fL.png", L));

    h2_phaseTheta_ud->Delete();

  }

  h1_A1->GetYaxis()->SetTitleOffset(1.8);
  h1_A1->SetTitle(";#lambda;Maximum#left(#frac{#sum #theta_{y}}{N(#lambda)}#right) [mrad]");
  h1_A1->GetXaxis()->CenterTitle();
  h1_A1->GetYaxis()->CenterTitle();

  h1_A2->GetYaxis()->SetTitleOffset(1.8);
  h1_A2->SetTitle(";#lambda;Maximum#left(#frac{N_{#theta_{y}>0}-N_{#theta_{y}<0}}{N(#lambda)}#right)");
  h1_A2->GetXaxis()->CenterTitle();
  h1_A2->GetYaxis()->CenterTitle();
  
  h1_A1->Draw();
  c1->SaveAs("AcceptancePlots/AEDM_L.png");

  h1_A2->Draw();
  c1->SaveAs("AcceptancePlots/ANUND_L.png");

  //with acceptance
  h1_A1_acc->SetLineColor(2);
  h1_A1->SetLineWidth(2);
  h1_A1_acc->SetLineWidth(2);
  h1_A1->Draw();
  h1_A1_acc->Draw("SAME");

  TLegend* l1 = new TLegend(0.6, 0.7, 0.79, 0.89);
  l1->SetBorderSize(0);
  l1->AddEntry(h1_A1, "weight = 1", "EL");
  l1->AddEntry(h1_A1_acc, "acc. weight", "EL");
  l1->Draw();
  c1->SaveAs("AcceptancePlots/AEDM_L_withAcc.png");

  //h1_A2->Draw();
  //h1_A2_acc->Draw("SAME");
  //c1->SaveAs("AcceptancePlots/ANUND_L_withAcc.png");


  //use h3 to get remaining plots
  //for every phase get 2D lambda vs theta_y 
  for (int iP(1); iP <= nPhaseBins; iP++){
    double phase = h3_lambdaPhaseTheta->GetYaxis()->GetBinCenter(iP);

    //limit the range to just this bin before projection
    h3_lambdaPhaseTheta->GetYaxis()->SetRange(iP,iP);
    TH2F* h2_lambdaTheta = (TH2F*) h3_lambdaPhaseTheta->Project3D("zx"); //oddly have to put this backwards, silly root??
    TH1F* h1_sumTheta = new TH1F("h1_sumTheta", ";#lambda;#Sigma #theta_{y}", nLBins, lMin, lMax); 

    //now loop over lambda bins
    for (int iL(1); iL <= nLBins; iL++){
      double lambda = h3_lambdaPhaseTheta->GetXaxis()->GetBinCenter(iL);
      if (lambda < 0.1) continue;
      
      double sumTheta = 0.0;
      double ThetaMax = 1000 * sqrt(lambda * (1 - lambda)) / (Gamma * lambda);
      //now loop over theta bins and get sum of entries
      for (int iT(1); iT <= nThetaBins; iT++){
	double theta = h3_lambdaPhaseTheta->GetZaxis()->GetBinCenter(iT);
	if (fabs(theta) > ThetaMax) continue;
	double cont = h2_lambdaTheta->GetBinContent(iL, iT);
	sumTheta += theta*cont;
	//if (iP == 10) cout << "phase: " << phase << " lambda: " << lambda << " theta: " << theta << " cont: " << cont << " sum: " << sumTheta << "\n";
      }
      h1_sumTheta->SetBinContent(iL, sumTheta);
      h1_sumTheta->SetBinError(iL, sqrt(fabs(sumTheta)));
    }
    h1_sumTheta->SetTitle(";#lambda;#Sigma#theta_{y} [mrads]");
    h1_sumTheta->GetXaxis()->CenterTitle();
    h1_sumTheta->GetYaxis()->CenterTitle();
    h1_sumTheta->Draw("HIST E");
    c1->SaveAs(Form("AcceptancePlots/sumTheta_vs_L_%.3fphase.png", phase));

    //clear everything made in this loop
    h1_sumTheta->Delete();
    h2_lambdaTheta->Delete();
  }
      
  return;




  //plots at given times
  for (auto& lambda : {0.175, 0.25, 0.5, 0.75, 0.75}){
    double Delta = 0.5;
    double N = 1.0;
    f1C->SetParameter(0, lambda);
    f1C->SetParameter(1, Delta);
    f1C->SetParameter(2, N);
    f1C->SetParameter(3, 0.0);

    //max when sin wt = pi/2    
    f3C->SetParameter(0, lambda);
    f3C->SetParameter(1, Delta);
    f3C->SetParameter(2, N);
    f3C->SetParameter(3, TMath::PiOver2());
    
    //min when cos wt = 0, max when cos wt = pi
    f4C->SetParameter(0, lambda);
    f4C->SetParameter(1, Delta);
    f4C->SetParameter(2, N);
    f4C->SetParameter(3, TMath::Pi());
    
    f1C->SetLineWidth(3);
    f3C->SetLineWidth(3);
    f4C->SetLineWidth(3);

    double xmax = 1000 * asin(sqrt(lambda*(1-lambda)) / (Gamma*lambda));
    double ymax = f1C->Eval(0.0);
    cout << "lambda: " << lambda << " ymax: " << ymax << "\n";
    f1C->GetXaxis()->SetRangeUser(-1.1*xmax, 1.1*xmax);
    f1C->GetYaxis()->SetRangeUser(-1.21*ymax, 1.21*ymax);
    f1C->GetXaxis()->CenterTitle();
    f1C->SetTitle(Form("#lambda = %.2f, #omega t = #pi ;Vertical Angle [mRad]", lambda));
    f1C->Draw();
    c1->SaveAs(Form("vAngle/vAngle_f1_L%.2f.png", lambda));

    TLegend *leg2 = new TLegend(0.82, 0.7, 0.9, 0.9);
    leg2->SetBorderSize(0);
    leg2->AddEntry(f1C, "F1", "L");
    leg2->AddEntry(f4C, "F4", "L");
    
    f4C->Draw("SAME");
    leg2->Draw();
    c1->SaveAs(Form("vAngle/vAngle_f1_f4_L%.2f.png", lambda));

    f1C->SetTitle(Form("#lambda = %.2f, #omega t = #pi/2, #delta = 0.5;Vertical Angle [mRad]", lambda));
    f1C->Draw();
    f3C->Draw("SAME");
    leg2->Clear();
    leg2->AddEntry(f1C, "F1", "L");
    leg2->AddEntry(f3C, "F3", "L");
    leg2->Draw();
    c1->SaveAs(Form("vAngle/vAngle_f1_f3_L%.2f.png", lambda));

  }


  //get all at wt EDM peak
  mom = 100.0;
  nsteps = 50;
  double momStep = (Gamma*mmu - mom) / 50;
  phase = TMath::Pi()/2.0;
  int iStep = 0;
  
  vector<double> momVec = {};
  vector<double> maxVec = {};
  vector<double> avgVec = {};
  vector<double> totVec = {};
  vector<double> NVec = {};
  vector<double> fracMomVec = {};

  // from Paul debeved EDM asymmetry, Figure 5, N(lambda) //momcheck
  TF1* fNMom = new TF1(Form("fNMom%i", iStep), "(1.0/(6.0*TMath::Pi())) * (1-([0]*x)) * (5 + 5*([0]*x) - (4*([0]*x*[0]*x)) )", 0, Gamma*mmu);

  while (mom < Gamma*mmu){

    fNMom->FixParameter(0, 1.0/(Gamma*mmu));
    double N = fNMom->Eval(mom);
    NVec.push_back(N);

    //HACK 
    double norm = N;
    //have to divide by the max since its x range isn't to 1
    norm = 1/(Gamma*mmu);

    TF1* f1Ci = new TF1(Form("f1C%i",iStep), f1Calc, -200, 200, 4);
    f1Ci->FixParameter(0, mom/(Gamma*mmu));
    f1Ci->FixParameter(1, delta);
    f1Ci->FixParameter(2, norm);
    f1Ci->FixParameter(3, phase);

    TF1* f2Ci = new TF1(Form("f2C%i",iStep), f2Calc, -200, 200, 4);
    f2Ci->FixParameter(0, mom/(Gamma*mmu));
    f2Ci->FixParameter(1, delta);
    f2Ci->FixParameter(2, norm);
    f2Ci->FixParameter(3, phase);

    TF1* f3Ci = new TF1(Form("f3C%i",iStep), f3Calc, -200, 200, 4);
    f3Ci->FixParameter(0, mom/(Gamma*mmu));
    f3Ci->FixParameter(1, delta);
    f3Ci->FixParameter(2, norm);
    f3Ci->FixParameter(3, phase);

    TF1* f4Ci = new TF1(Form("f4C%i",iStep), f4Calc, -200, 200, 4);
    f4Ci->FixParameter(0, mom/(Gamma*mmu));
    f4Ci->FixParameter(1, delta);
    f4Ci->FixParameter(2, norm);
    f4Ci->FixParameter(3, phase);

    //total
    TF1* f0 = new TF1(Form("f0%i",iStep), pthetay, -200, 200, 4);
    f0->FixParameter(0, mom/(Gamma*mmu));
    f0->FixParameter(1, delta);
    f0->FixParameter(2, norm);
    f0->FixParameter(3, phase);
    
    //need to draw
    //f0->Draw();

    string opt = (iStep == 0)? "" : "SAME";
    //cout << mom << " with opt: " << opt << "\n";
    Int_t ci = TColor::GetFreeColorIndex();
    //slowly fade from blue to green
    double green = (double)iStep / 50;
    double blue = (double)(50 - iStep) / 50;
    TColor *color = new TColor(ci, 0.0, green, blue);
    f3Ci->SetLineColor(ci);
    //f3Ci->GetYaxis()->SetRangeUser(-0.1, 0.01);
    //f3Ci->Draw(opt.c_str());

    double NUp = f0->Integral(0, 300);
    double NDo = f0->Integral(-300, 0);

    double maxf0 = f0->GetMaximum(-200, 200);
    double maxf3 = (NUp - NDo) / (NUp + NDo); //f3Ci->GetMaximum(-200, 200);
    double avg = 0.0;//f0->Mean(-200,200);

    double f0I = f0->Integral(-200, 200);
    double f1I = f1Ci->Integral(-200, 200);
    double f2I = f2Ci->Integral(-200, 200);
    double f3I = f3Ci->Integral(-200, 200);
    double f4I = f4Ci->Integral(-200, 200);

    double frac = mom / (Gamma*mmu);

    double calcNU = 4 * sin(delta) * sqrt(frac) * (4*frac + 1) * pow(1-frac, (3./2.)) / (15*TMath::Pi());

    cout << "mom: " << mom << " frac: " << mom / (Gamma*mmu)<< " N: " << N << " NUP: " << NUp << " NDo: " << NDo <<  " max f3: " 
	 << maxf3 << " avg: " << avg << " NUcalc: " << calcNU << " : " << calcNU/f3Ci->Integral(0,200) << " sp: " << sin(delta)
      //<< " f0I: " << f0I //<< " f1I: " << f1I << " f2I: " << f2I << " f3I: " << f3I << " f4I: " << f4I
      // << " f0I / N: " << f0I / N
	 <<  "\n";
    
    momVec.push_back(mom);
    fracMomVec.push_back(mom/(Gamma*mmu));
    maxVec.push_back(maxf3);
    avgVec.push_back(avg);
    totVec.push_back(f0->Integral(-300,300));

    iStep++;
    mom += momStep;
  }

  //f3Ci->GetYaxis()->SetRangeUser(-0.01, 0.01);
  ((TF1*)gROOT->FindObject("f3C30"))->SetTitle("#delta = 0.01 rads; Vertical Angle [mrads]");
  //((TF1*)gROOT->FindObject("f3C49"))->GetYaxis()->SetRangeUser(-0.0001, 0.0001);
  ((TF1*)gROOT->FindObject("f3C30"))->Draw();
  for (int ii(0); ii < 40; ii++){
    ((TF1*)gROOT->FindObject(Form("f3C%i", ii)))->Draw("SAME");
  }
  //((TF1*)gROOT->FindObject("f3C20"))->Draw("SAME");
  //((TF1*)gROOT->FindObject("f3C0"))->GetYaxis()->SetRangeUser(-0.0001, 0.0001);
  //((TF1*)gROOT->FindObject("f3C0"))->Draw();
  c1->SaveAs("AsymmetryWeight.png");

  TGraph* g = new TGraph(iStep, fracMomVec.data(), maxVec.data());
  g->SetMarkerStyle(8);
  g->SetTitle("#delta = 0.01 rads; Fractional LAB energy; #frac{N_{U} - N_{D}}{N_{U} + N_{D}}");
  g->Draw("AP");
  c1->SaveAs("Amplitude_mom.png");

  //draw EDM asymm on top...
  TF1* fEDM = new TF1("fEDM", "[1]* (8.0/5.0) * sqrt( ([0]*x) * ( 1.0 - ([0]*x) ) ) * (1 + 4 * ([0]*x) ) / (5 + 5*([0]*x) - 4* ([0]*x*[0]*x) ) ", 0.0, 1.0);

  fEDM->FixParameter(0, 1.0);
  //fEDM->SetParameter(0, 1.0/(Gamma*mmu)) ;
  //HACK factor 0f 0.32 suspicious...
  fEDM->FixParameter(1, (2.0/TMath::Pi()) * sin(delta));
  //fEDM->SetParameter(1, 1.0);
  //g->Fit(fEDM);
  fEDM->Draw("SAME");
  
  TLegend* legA = new TLegend(0.82, 0.7, 0.95, 0.9);
  legA->SetBorderSize(0);
  legA->AddEntry(fEDM, "#frac{#pi}{2} A_{EDM}", "L");
  legA->AddEntry(g, "Numeric integral", "P");
  legA->Draw();

  c1->SaveAs("Amplitude_mom_withEDM.png");

  TGraph* g2 = new TGraph(iStep, momVec.data(), avgVec.data());
  g2->SetMarkerStyle(8);
  g2->Draw("AP");
  c1->SaveAs("Mean_mom.png");

  //plot total vs expected
  //from integral
  TGraph* g3 = new TGraph(iStep, momVec.data(), totVec.data());
  g3->SetMarkerStyle(8);

  //from formula 
  TGraph* g4 = new TGraph(iStep, momVec.data(), NVec.data());
  g4->SetMarkerStyle(8);
  g4->SetMarkerColor(2);

  g3->Draw("AP");
  fNMom->FixParameter(0, 1.0/(Gamma*mmu));
  fNMom->Draw("SAME");
  c1->SaveAs("N_mom.png");

  g4->Draw("AP");
  c1->SaveAs("N_mom2.png");




  //plot f2 and f3 on same plot
  double lambdaA = 0.5;
  double phaseA = 0.5*TMath::PiOver2();
  double maxA = 1000 * asin(sqrt(lambdaA * (1 - lambdaA)) / (Gamma*lambdaA)) ;
  double deltaA = 0.1;

  cout << "max angle for L = " << lambdaA << " : " << maxA << "\n";

  TF1* f2CA = new TF1("f2CA", f2Calc, -maxA, maxA, 4);
  f2CA->SetParameter(0, lambdaA);
  f2CA->SetParameter(1, deltaA);
  f2CA->SetParameter(2, 1.0);
  f2CA->SetParameter(3, phaseA);

  TF1* f3CA = new TF1("f3CA", f3Calc, -maxA, maxA, 4);
  f3CA->SetParameter(0, lambdaA);
  f3CA->SetParameter(1, deltaA);
  f3CA->SetParameter(2, 1.0);
  f3CA->SetParameter(3, phaseA);

  f2CA->SetLineColor(2);
  f3CA->SetLineColor(3);

  f2CA->Draw();
  f3CA->Draw("SAME");
  f2CA->GetYaxis()->SetRangeUser(-2.5, 2.5);

  c1->SaveAs("f2andf3.png");

  TF1* f4CA = new TF1("f4CA", f4Calc, -maxA, maxA, 4);
  f4CA->SetParameter(0, lambdaA);
  f4CA->SetParameter(1, deltaA);
  f4CA->SetParameter(2, 1.0);
  f4CA->SetParameter(3, phaseA);
  
  //with f4 as well
  f4CA->SetLineColor(4);

  f4CA->Draw("SAME");
  f2CA->GetYaxis()->SetRangeUser(-2.5, 2.5);
  c1->SaveAs("f2andf3andf4.png");

  return;
  double scale = 0.1;
  
  //double min = h1->GetXaxis()->GetBinLowEdge(1);
  //double max = h1->GetXaxis()->GetBinLowEdge(h1->GetXaxis()->GetNbins()+1);
  //cout << min << ": " << max << "\n";
  //
  
  //min *= 1.0 + scale;
  //max *= 1.0 + scale;
  //
  //TH1D* h1B = new TH1D("h1B", "", h1->GetXaxis()->GetNbins(), min, max);

  TH1D* h1B = (TH1D*) h1->Clone("h1B");
  h1B->Clear();

  //loop over bins and get py
  for (int iBin = 0; iBin < h1->GetXaxis()->GetNbins(); iBin++){
    double N = h1->GetBinContent(iBin);
    double theta_y = h1->GetBinCenter(iBin);
    double theta_y_err = h1->GetBinError(iBin);
    //double weight = 
    double theta_yB = theta_y;
    //cout << N << " theta_y: " << theta_y << " -> " << theta_yB << "\n";
    int iBinB = h1B->FindBin(theta_yB);
    h1B->SetBinContent(iBinB, N*scale);
    h1B->SetBinError(iBinB, theta_y_err * scale);
  }
  
  cout << "initial average: " << h1->GetMean() << " scaled average: " << h1B->GetMean() << "\n";

  h1B->SetLineColor(2);
  h1B->Draw("SAME");
  c1->SaveAs("tmp2.pdf");
}
