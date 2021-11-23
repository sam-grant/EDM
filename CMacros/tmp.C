TGraphErrors *InjectBlindedModuloWithWeighting(TGraphErrors* gr_thetaY_mod, TF1 *blindEDMFunc, double momentum) { 

  TFile *dilutionFile = TFile::Open("../Plots/MC/dMu/Dilution/dilutionCurves.root");
  TGraphErrors *d_gr = (TGraphErrors*)dilutionFile->Get("DilutionFits/BQ/Tracks/250MeV/d_vs_p/trackReco");
  TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("ParabolaFunc");

  double weighting = 1 + dilutionFunc->Eval(momentum);
  for (int i(0); i<nBins; i++) double theta_y_shift = blindEDMFunc->Eval(time) * weighting;


  return new TGraphErrors(n, x, y, ex, ey);

}