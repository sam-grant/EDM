
// See "Parameter correlations while curve fitting" - Micheal L. Johnson
// Really not to sure about this. Seems to reduce correlations by only a tiny amount.
// Need to discuss this with Motty 
TGraphErrors *ReduceCorrelations(TGraphErrors *gr, TF1 *fit) { 

  double betaNumerator = 0; double betaDenominator = 0;

  for (int i = 0; i<gr->GetN(); i++) { 

    double chi = gr->GetY()[i];
    double sigma2 = pow(gr->GetEY()[i],2);

    betaNumerator += (chi/sigma2);
    betaDenominator += (1/sigma2);

  }

  double beta = betaNumerator/betaDenominator;

  double kappa1Numerator = 0; double kappa1Denominator = 0; 
  double kappa2NumeratorA = 0; double kappa2NumeratorB = 0; double kappa2Denominator = 0; 

  for (int i = 0; i<gr->GetN(); i++) { 

    double chi = gr->GetY()[i];
    double sigma2 = pow(gr->GetEY()[i],2);

    kappa1Numerator += ( (chi-beta)*pow(chi,2) ) / sigma2;
    kappa1Denominator +=  ( (chi-beta)*chi ) / sigma2;

    kappa2NumeratorA += pow(chi,2)/sigma2;
    kappa2NumeratorB += chi/sigma2;
    kappa2Denominator += 1/sigma2;

  }

  double kappa1 = kappa1Numerator/kappa1Denominator;
  double kappa2 = ( kappa2NumeratorA - kappa1*kappa2NumeratorB ) / kappa2Denominator;

  double gamma1 = ( kappa1 + sqrt( pow(kappa1,2) - 4*kappa2) ) / 2;
  double gamma2 = ( kappa1 - sqrt( pow(kappa1,2) - 4*kappa2) ) / 2;

  double a = fit->GetParameter(0); 
  double b = fit->GetParameter(1); 
  double d0 = fit->GetParameter(2); 

  // Define a new TGraphErrors
  TGraphErrors *new_gr = new TGraphErrors();

  for (int i = 0; i<gr->GetN(); i++) { 

    double chi = gr->GetY()[i];
    double sigma = gr->GetEY()[i];  

    double p = (chi-beta);
    double p2 = (chi-gamma1)*(chi-gamma2);

    double ep = (sigma-beta);
    double ep2 = (sigma-gamma1)*(sigma-gamma2);

    double x = gr->GetX()[i];

    double y = d0 + b*p + a*p2;
    // Leave uncertainty unchanged for now 
    double ey = d0 + b*ep + a*ep2;

    new_gr->SetPointX(i, x);
    //new_gr->SetPointErrorX(i-1, 0);
    new_gr->SetPointY(i, y);
    new_gr->SetPointError(i, 0, 0);

  }

  return new_gr;

}