#include "Utils.h"

using namespace std;

// Global momentum cuts
string xmin = "1000";
string xmax = "2500";

/*vector<TF1*> MahalanobisDistances(TGraphErrors *graph) {

  double xmin = 0; double xmax = 5;

  vector<TF1*> mahalanobisFunctions_; 

  TF1 *fit = (TF1*)graph->GetFunction("pol0");

  TFitResultPtr fitResult = graph->Fit(fit,"SR");

  // Get parameters from converged fit
  int nPars = 1;
  TVectorD meanVals(nPars);
  for(int n = 0; n < nPars; n++){
  meanVals[n] = fit->GetParameter(n);
  }

  // Covariance matrix
  TMatrixD covMatrix = fitResult->GetCovarianceMatrix();
    
  // Matrix manipulation
  TDecompChol decompCholCov(covMatrix);
  decompCholCov.Decompose();
  TMatrixD matrixCovI = decompCholCov.GetU();
  TMatrixD matrixCov(nPars,nPars);
  matrixCov.Transpose(matrixCovI);

  double CL = .317311; // 1 - 68% (one sigma)
  double r2 = 0; // r^2 (see https://upload.wikimedia.org/wikipedia/commons/a/a2/Cumulative_function_n_dimensional_Gaussians_12.2013.pdf)

  while(TMath::Prob(r2,nPars) > CL){
  r2 += 0.00001; // why 0.00001?
  }

  double r = sqrt(r2); // This is the Mahalanobis distance threshold under which CL % of points fall below

  for(int i = -1; i < 2; i++) {
    
  // Skip the minimum chi^2
  if(i==0) continue;

  TVectorD u(nPars); 
  u[0] = i;

  // Determine the scale factor required to move 1 sigma
  double scale = u.Norm2Sqr() > 0 ? r/sqrt(u.Norm2Sqr()) : 1; 

  cout<<"scale "<<scale<<endl;

  for(int par = 0; par < nPars; par++) u[par] *= scale;

  TVectorD z = matrixCov*u + meanVals;

  for(int par = 0; par < nPars; par++) cout << z[par] << ", ";
  cout << endl;

  // Define shifted function
  TF1 *trial = new TF1(Form("shift_%d",i), "pol0", xmin, xmax);

  for(int par = 0; par < nPars; par++) trial->SetParameter(par,z[par]);
    
  mahalanobisFunctions_.push_back(trial);

  }

  return mahalanobisFunctions_;

  }*/

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname, vector<string> xLabel_) {

  TCanvas *c = new TCanvas("c","c",800,600);

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.2);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle

  for(int i(0); i<graph->GetN(); i++) graph->GetXaxis()->SetBinLabel(graph->GetXaxis()->FindBin(i+1), (xLabel_.at(i)).c_str());

  graph->GetXaxis()->LabelsOption("h");

  graph->Draw("AP")	;

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawAllGraphs(vector<TGraphErrors*> graph_, std::string title, std::string fname, vector<string> xLabel_, bool orthogonal = false) {

  // Get one sigma band

  // This is absurd but it's the only way to stop it drawing the fit on top of the graphs
  TF1 *fit_tmp = graph_.at(2)->GetFunction("pol0");
  fit_tmp->SetLineWidth(0);

  TF1 *fit = new TF1("fit", "pol0", 0, 5);
  fit->SetParameter(0, fit_tmp->GetParameter(0));
  fit->SetParError(0, fit_tmp->GetParError(0));


  TF1 *minusSigma = new TF1("minusSigma", "pol0", 0, 5);
  minusSigma->SetParameter(0, fit_tmp->GetParameter(0) - fit_tmp->GetParError(0));
  TF1 *plusSigma = new TF1("plusSigma", "pol0", 0, 5);
  plusSigma->SetParameter(0, fit_tmp->GetParameter(0) + fit_tmp->GetParError(0));

  TF1 *minusTwoSigma = new TF1("minusTwoSigma", "pol0", 0, 5);
  minusTwoSigma->SetParameter(0, fit_tmp->GetParameter(0) - 2 * fit_tmp->GetParError(0));
  TF1 *plusTwoSigma = new TF1("plusTwoSigma", "pol0", 0, 5);
  plusTwoSigma->SetParameter(0, fit_tmp->GetParameter(0) + 2 * fit_tmp->GetParError(0));

  TF1 *minusThreeSigma = new TF1("minusThreeSigma", "pol0", 0, 5);
  minusThreeSigma->SetParameter(0, fit_tmp->GetParameter(0) - 3 * fit_tmp->GetParError(0));
  TF1 *plusThreeSigma = new TF1("plusThreeSigma", "pol0", 0, 5);
  plusThreeSigma->SetParameter(0, fit_tmp->GetParameter(0) + 3 * fit_tmp->GetParError(0));
  // cout<<"fit error "<<fit_tmp->GetParError(0)<<endl;
  // cout<<"one sigma "<<plusSigma->GetParameter(0) - fit_tmp->GetParameter(0)<<endl;
  cout<<"DMU = "<<fit_tmp->GetParameter(0)<<"±"<<fit_tmp->GetParError(0)<<endl;

  fit->SetLineWidth(1);
  fit->SetLineStyle(1);

  minusSigma->SetLineStyle(2);
  plusSigma->SetLineStyle(2);
  minusTwoSigma->SetLineStyle(2);
  plusTwoSigma->SetLineStyle(2);
  minusThreeSigma->SetLineStyle(2);
  plusThreeSigma->SetLineStyle(2);

  fit->SetLineColor(kGray);

  minusSigma->SetLineColor(kGray);
  plusSigma->SetLineColor(kGray);
  minusTwoSigma->SetLineColor(kGray);
  plusTwoSigma->SetLineColor(kGray);
  minusThreeSigma->SetLineColor(kGray);
  plusThreeSigma->SetLineColor(kGray);

  TCanvas *c = new TCanvas("c","c",800,600);

  // S12 ect 
  TLegend *l = new TLegend(0.66, 0.18, 0.85, 0.38); 
  //TLegend *l = new TLegend(0.69, 0.11, 0.89, 0.31); 
  //l->SetTextAlign(31);
  l->SetBorderSize(0);
  l->SetTextSize(22);
  l->SetTextFont(44);

  vector<string> label_ = {"Station 12", "Station 18", "Combined"};

  graph_.at(0)->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");//title.c_str());
  //graph_.at(0)->SetTextSize(26);//"d_{#mu}^{BLIND} [e#upointcm]");
  graph_.at(0)->GetXaxis()->SetTitleSize(.04);
  graph_.at(0)->GetYaxis()->SetTitleSize(.04);
  graph_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graph_.at(0)->GetYaxis()->SetTitleOffset(1.2);
  graph_.at(0)->GetXaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->SetMaxDigits(4);

  // Find y-range
  double ymax = graph_.at(0)->GetY()[0] + 2.5*graph_.at(0)->GetEY()[0];
  double ymin = graph_.at(0)->GetY()[0] - 2.5*graph_.at(0)->GetEY()[0];  

  for(int i(0); i<graph_.size(); i++) {

    double ymin1 = graph_.at(i)->GetY()[0] - 2.5*graph_.at(i)->GetEY()[0]; 
    double ymax1 = graph_.at(i)->GetY()[0] + 2.5*graph_.at(i)->GetEY()[0]; 

    for(int j(1); j<graph_.at(0)->GetN(); j++) { 

      double ymax2 = graph_.at(i)->GetY()[j] + 2.5*graph_.at(i)->GetEY()[j];
      double ymin2 = graph_.at(i)->GetY()[j] - 2.5*graph_.at(i)->GetEY()[j]; 

      if(ymin2 < ymin1) ymin1 = ymin2;
      if(ymax2 > ymax1) ymax1 = ymax2;

    }

    if(ymin1 < ymin) ymin = ymin1;
    if(ymax1 > ymax) ymax = ymax1;

  }



  // Dummy graph for range
  TGraph *dummy = new TGraph();
  dummy->SetPoint(0, 0, 0);
  dummy->SetPoint(1, 1, 0);
  dummy->SetPoint(2, 2, 0);
  dummy->SetPoint(3, 3, 0);
  dummy->SetPoint(4, 4, 0);
  dummy->SetPoint(5, 5, 0);


  dummy->SetMarkerSize(0);
  dummy->SetLineWidth(0);

  dummy->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
  if(orthogonal) dummy->GetYaxis()->SetTitle("d_{#Omega} [e#upointcm]");
  //dummy->GetYaxis()->SetRangeUser(-0.5e-18, 2.1e-18);//ymin, ymax);
  dummy->GetYaxis()->SetRangeUser(ymin, ymax);
  dummy->GetXaxis()->SetRangeUser(0.5,4.5);//, 100);
  dummy->GetXaxis()->SetTitleSize(.04);
  dummy->GetYaxis()->SetTitleSize(.04);
  dummy->GetXaxis()->SetTitleOffset(1.1);
  dummy->GetYaxis()->SetTitleOffset(1.2);
  dummy->GetXaxis()->CenterTitle(true);
  dummy->GetYaxis()->CenterTitle(true);
  dummy->GetYaxis()->SetMaxDigits(4);

  for(int i(1); i<dummy->GetN()-1; i++) dummy->GetXaxis()->SetBinLabel(dummy->GetXaxis()->FindBin(i), (xLabel_.at(i-1)).c_str());

  dummy->GetXaxis()->LabelsOption("h");
  dummy->GetXaxis()->SetLabelSize(0.055);//Option("h");
  dummy->GetXaxis()->SetTickLength(0);

  dummy->Draw("AP");

  graph_.at(0)->Draw("P SAME");
  gPad->Update();
  
  vector<int> colour_ = {2,4,1};

  for(int i(0); i<graph_.size(); i++) {
    graph_.at(i)->SetMarkerStyle(20);
    graph_.at(i)->SetMarkerColor(colour_.at(i));
    graph_.at(i)->SetLineColor(colour_.at(i));

    if(i==0) {

      fit->Draw("same");
      minusSigma->Draw("same");
      plusSigma->Draw("same");
      // minusTwoSigma->Draw("same");
      // plusTwoSigma->Draw("same");
      // minusThreeSigma->Draw("same");
      // plusThreeSigma->Draw("same");

      graph_.at(i)->Draw("P SAME");

    }

    else graph_.at(i)->Draw("P SAME");

    l->AddEntry(graph_.at(i), label_.at(i).c_str());

  }

  l->SetTextSize(22);
  l->Draw("SAME");

  // Text box
  //PaveText *result = new TPaveText(0.15,0.79,0.40,0.89,"NDC");
  TPaveText *result = new TPaveText(0.135,0.79,0.40,0.89,"NDC");
 // TPaveText *result = new TPaveText(0.125,0.82,0.40,0.89,"NDC");
  result->SetTextAlign(13);
  result->SetTextSize(24);
  result->SetTextFont(44);
  result->SetFillColor(0);

  std::ostringstream result_str; result_str << fit->GetParameter(0); 
  std::ostringstream error_str; error_str << fit->GetParError(0);  

  //result->AddText("#LTd_{#mu}^{BLIND}#GT = (1.05#pm0.10)#times10^{-18} e#upointcm");//"+SciNotation(fit->GetParameter(0))+"#pm"+SciNotation(fit->GetParError(0))+" );// error_str.str()+" e#upointcm") ;//+result_str.str()+"#pm"+error_str.str()+" e#upointcm").c_str());
  if(!orthogonal) result->AddText("#LTd_{#mu}^{BLIND}#GT = "+SciNotation(fit->GetParameter(0))+"#pm"+SciNotation(fit->GetParError(0))+" e#upointcm") ;//+result_str.str()+"#pm"+error_str.str()+" e#upointcm").c_str());
  else result->AddText("#LTd_{#Omega}#GT = "+SciNotation(fit->GetParameter(0))+"#pm"+SciNotation(fit->GetParError(0))+" e#upointcm") ;//+result_str.str()+"#pm"+error_str.str()+" e#upointcm").c_str());
  result->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());  

  delete c;

  return;

}

double GetLimit(double delta_prime) { 

  // CODATA 2018
  double pi = 3.14159265358979323846;
  double h = 6.62607015e-34; // Js
  double c = 299792458; // m/s
  double e = 1.602176634e-19; // C

  // Conversions
  double Mev2J = e*1e6;
  double MeV2kg = Mev2J / pow(c,2);
  double m2cm = 1e-2;
  double mrad2rad = 1e-3;

  double m_mu = M_MU * MeV2kg;
  double beta = sqrt(1-(1/pow(GMAGIC,2)));
  double hbar = h/(2*pi);

  // Calculate dMu in SI units
  double dMu = (e*hbar*A_MU*GMAGIC)/(2*m_mu*c*beta) * atan(delta_prime*mrad2rad); // Cm

  // Convert to ecm
  dMu = dMu / (m2cm * e);

  return dMu;

}

void Run(std::string dataset, int step, std::string blinding, std::string fitType, string correctionString = "", string randomisationStr = "") { //, string test = "") { 

  bool orthogonal = false;
  if(blinding=="_orthogonal") orthogonal = true;

  if(correctionString != "") correctionString = "_"+correctionString;

  vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
  vector<string> stn_ = {"S12", "S18", "S12S18"};

  vector<TGraphErrors*> gr_; 

  int i_entry = 0;
  
  for(int i_stn(0); i_stn < stn_.size(); i_stn++) { 

    std::string stn = stn_.at(i_stn);

    TGraphErrors *gr = new TGraphErrors();

    for(int i_ds(0); i_ds < ds_.size(); i_ds++) { 

      std::string ds = ds_.at(i_ds);

      string finName = "../Plots/Data/dMu/Run-1/Fits/edmResults_"+blinding+"_"+ds+"_"+to_string(step)+"MeV_"+xmin+"_"+xmax+"MeV_"+randomisationStr+"BQ"+correctionString+".reweight.root";
      if(ds == "Run-1d") finName = "../Plots/Data/dMu/Run-1/Fits/edmResults_"+blinding+"_"+ds+"_"+to_string(step)+"MeV_"+xmin+"_"+xmax+"MeV_50usStartTime_"+randomisationStr+"BQ"+correctionString+".reweight.root";//finName = "../Plots/Data/dMu/Run-1/Fits/edmResults_"+blinding+"_"+xmin+"-"+xmax+"MeV_"+ds+"_"+to_string(step)+"MeV_"+xmin+"_"+xmax+"MeV_50usStartTime_"+randomisationStr+"BQ"+correctionString+".root";
      cout<<finName<<endl;
      TFile *file = TFile::Open(finName.c_str());//("../Plots/Data/dMu/Run-1/Fits/edmResults_"+blinding+"_"+xmin+"-"+xmax+"MeV_"+ds+"_"+to_string(step)+"MeV_"+xmin+"_"+xmax+"MeV_"+randomisationStr+"BQ"+correctionString+".root").c_str());

      TTree *resultTree = (TTree*)file->Get((fitType+"/"+fitType+"Tree").c_str());
      
      double result = 0; double error = 0;
      
      resultTree->SetBranchAddress("dMu", &result);
      resultTree->SetBranchAddress("dMu_err", &error);

      resultTree->GetEntry(i_stn);

      cout<<stn<<", "<<result<<"±"<<error<<endl;

      file->Close();

      // Set x values where stations are spaced out
      double x = i_ds+1;
      if(stn=="S12") x = x - 0.1; 
      if(stn=="S12S18") x = x + 0.1; 

      gr->SetPoint(i_ds,x,result);
      //-9.13787e-19);
      gr->SetPointError(i_ds,0,error);

    }

    // Fit 
    if(stn=="S12S18") gr->Fit("pol0");

    DrawGraph(gr, "", "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_"+fitType+"_vs_DS_"+blinding+"_"+xmin+"_"+xmax+"MeV_"+to_string(step)+"MeV_"+randomisationStr+"BQ"+correctionString+"_reweight", ds_);

    gr_.push_back(gr);

  }

  DrawAllGraphs(gr_, "", "../Images/Data/dMu/"+dataset+"/Results/"+fitType+"_vs_DS_"+blinding+"_"+xmin+"_"+xmax+"MeV_"+to_string(step)+"MeV_"+randomisationStr+"BQ"+correctionString+"_reweight", ds_, orthogonal);


  return;

}

void RunFromRawValues() { // std::string dataset, int step, std::string blinding, std::string fitType, string correctionString = "", string randomisationStr = "") { //, string test = "") { 

  vector<vector<double>> results_ = { {1.91533E-18, 9.57667E-19, 2.04302E-18, 1.50034E-18}
                           , {6.38445E-19, 1.27689E-18, 1.91533E-18, 1.30881E-18}
                           , {1.30881E-18, 1.18112E-18, 1.94726E-18, 1.40458E-18} };


  vector<vector<double>> errors_ = { {3.19222E-19, 3.19222E-19, 2.873E-19, 2.23456E-19}
                           , {3.19222E-19, 3.19222E-19, 3.19222E-19, 2.55378E-19}
                           , {2.55378E-19, 2.23456E-19, 1.91533E-19, 1.91533E-19} };

  vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
  vector<string> stn_ = {"S12", "S18", "S12S18"};

  vector<TGraphErrors*> gr_; 

  int i_entry = 0;
  
  for(int i_stn(0); i_stn < stn_.size(); i_stn++) { 

    std::string stn = stn_.at(i_stn);

    TGraphErrors *gr = new TGraphErrors();

    for(int i_ds(0); i_ds < ds_.size(); i_ds++) { 

      std::string ds = ds_.at(i_ds);
      //double result = 0; double error = 0;
      
      double result = (results_.at(i_stn)).at(i_ds);
      double error = (errors_.at(i_stn)).at(i_ds);

      cout<<stn<<", "<<result<<"±"<<error<<endl;

      // Set x values where stations are spaced out
      double x = i_ds+1;
      if(stn=="S12") x = x - 0.1; 
      if(stn=="S12S18") x = x + 0.1; 

      gr->SetPoint(i_ds,x,result);
      gr->SetPointError(i_ds,0,error);

    }

    // Fit 
    if(stn=="S12S18") gr->Fit("pol0");

   // DrawGraph(gr, "", "../Images/Data/dMu/Run-1/Results/"+stn+"_"+fitType+"_vs_DS_"+blinding+"_"+xmin+"_"+xmax+"MeV_"+to_string(step)+"MeV_"+randomisationStr+"BQ"+correctionString, ds_);

    gr_.push_back(gr);

  }

  DrawAllGraphs(gr_, "", "../Images/Data/dMu/Run-1/Results/SimultaneousFits_vs_DS_blinded_"+xmin+"_"+xmax+"MeV_250MeV_randomised_BQ", ds_);


  return;

}

void PlotEDMResultsPerDS() { 

 // Run("Run-1", 250, "_orthogonal", "EDM", "", "randomised_");
  Run("Run-1", 250, "blinded", "EDM", "", "randomised_");
  //Run("Run-1", 250, "blinded", "EDM", "", "randomised_");
  //Run("Run-1", 250, "blinded", "EDM", "noDilCorr");
  //Run("Run-1", 250, "blinded", "EDM", "noVertCorr");
  //Run("Run-1", 250, "blinded", "EDM", "noAccCorr");//, ".dataDrivenAcceptance"); 

  //RunFromRawValues();

  return;

}
