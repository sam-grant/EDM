void tmp() { 

   TString fn = "../Plots/MC/dMu/Dilution/dilutionCurves.root";
   TFile *fin = TFile::Open("../Plots/MC/dMu/Dilution/dilutionCurves.root");

   // Get graph
   TGraphErrors *gr = (TGraphErrors*)fin->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");
   TF1 *fit = (TF1*)gr->GetFunction("ParabolaFunc");

   double integral = fit->Integral(750, 2500);
   double integral_error = fit->IntegralError(750, 2500);

   cout<<integral<<"±"<<integral_error<<endl;



   return;

}