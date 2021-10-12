/*Fit dilution parabolas and draw them all nicely. 

Parabalo needed to be re-fitted in GetTiltAngle in order to deal with the errors properly. */

#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

const double delta_calc = 1.699245178; // mrad
string dMu = "5.4e-18";

string GetQual(string qualString) {

  if(qualString.find("_AQ") != std::string::npos) { 
    return "A";
  } else if(qualString.find("_BQ") != std::string::npos) { 
    return "B";
  } else if(qualString.find("_CQ") != std::string::npos) { 
    return "C";
  } else { 
    cerr<<"Qual is unknown";
    return "";
  }

}

string GetFrame(string qualString) { 

  if(qualString.find("WORLD") != std::string::npos) { 
    return "WORLD";
  } else if(qualString.find("AAR") != std::string::npos) { 
    return "AAR";
  } else if(qualString.find("MRF") != std::string::npos) { 
    return "MRF";
  } else { 
    cerr<<"Frame is unknown";
    return "";
  }

}

string GetDecays(string qualString) {

  if(qualString.find("truthAllDecays_") != std::string::npos || qualString.find("truth_") != std::string::npos || qualString.find("truthControl_") != std::string::npos) { 
    return "Decays";
  } else if(qualString.find("trackTruth_") != std::string::npos || qualString.find("trackReco_") != std::string::npos || qualString.find("trackRecoControl_") != std::string::npos) { 
    return "Tracks";
  } else { 
    cerr<<"Config is unknown";
    return "";
  }

}

string GetConfig(string qualString) {

  if(qualString.find("truthAllDecays_") != std::string::npos) { //} || qualString.find("truth_") != std::string::npos) { 
    return "truthAllDecays";
  } else if(qualString.find("truth_") != std::string::npos) { 
    return "truth";
  } else if(qualString.find("truth2_") != std::string::npos) { 
    return "truth2";
  }else if(qualString.find("trackTruth_") != std::string::npos) { // } || qualString.find("trackReco_") != std::string::npos) { 
    return "trackTruth";
  } else if(qualString.find("trackReco_") != std::string::npos) { 
    return "trackReco";  
  } else if(qualString.find("trackRecoControl_") != std::string::npos) { // } || qualString.find("trackReco_") != std::string::npos) { 
    return "trackRecoControl";
  } else if(qualString.find("truthControl_") != std::string::npos) { 
    return "truthControl";  
  }else { 
    cerr<<"Config is unknown";
    return "";
  }

}

int GetStep(string qualString) { 

  if(qualString.find("500MeV") != std::string::npos) { 
    return 500;
  } else if(qualString.find("250MeV") != std::string::npos) { 
    return 250;
  } else if(qualString.find("200MeV") != std::string::npos) { 
    return 200;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

double ParabolaFunc(double *x, double *par) {
   return par[0] * pow(x[0],2) + par[1] * x[0] + par[2];
}


void ParabolaFit(TGraphErrors *graph, string config, bool corr, double xmin, double xmax) { // double p0, double p1, double p2, 
  
   TF1 *fnc = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);

     if(config == "Tracks") {
      fnc->SetParameter(0, -5.5e-8);
      fnc->SetParameter(1, 1.5e-4);
      fnc->SetParameter(2, -0.05);
     }  else if(config == "Decays") { 
      fnc->SetParameter(0, -5.5e-8);
      fnc->SetParameter(1, 8.0e-5);
      fnc->SetParameter(2, 2.5e-1);
     } 

  graph->Fit(fnc, "R");    

  return;

}

TGraphErrors *ConvertToDilution(TGraphErrors *gr) {

   int n = gr->GetN();

   double x[n]; double ex[n]; 
   double y[n]; double ey[n];

   for(int i = 0; i<n; i++) { 

      // Remove x-error bars
      x[i] = gr->GetX()[i]; ex[i] = 0;//gr->GetEX()[i];
      y[i] = gr->GetY()[i] / delta_calc; ey[i] = gr->GetEY()[i] / delta_calc;

   }

   return new TGraphErrors(n, x, y, ex, ey);

}

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

void RunAEDM(string qualString, bool corr, bool fit, double ymin, double ymax, TFile *output) {

   int step = GetStep(qualString);
   string frame = GetFrame(qualString);
   string qual = GetQual(qualString);
   string decays = GetDecays(qualString);
   string config = GetConfig(qualString);

   string dname = "";

   if(corr) dname = "DilutionFits/"+qual+"/"+decays+"/"+to_string(step)+"MeV/dOverThetaYDiff_vs_p";
   else dname = "DilutionFits/"+qual+"/"+decays+"/"+to_string(step)+"MeV/d_vs_p";

   output->mkdir(dname.c_str()); 

   string type = "";
   if(corr) type += "AOverMaxDiff";
   else type += "A";

   cout<<"\n***************************\nRunning with:\nstep: "<<step<<"\nframe: "<<frame<<"\ntype: "<<type<<"\n***************************"<<endl;


   TString fn = "../Plots/MC/dMu/5.4e-18/fits/dMuSim_unblinded_"+qualString+".root";//+name+"_"+frame+"_"+to_string(step)+"MeV_"+qual+"Q.root";//
   TFile *f = TFile::Open(fn);

   cout<<"***************************\nOpened file "<<fn<<", "<<f<<"\n***************************"<<endl;

   string grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/";
   if(decays == "Tracks") grn += "S0S12S18_"+type+"_vs_p";
   else grn += type+"_vs_p";

   TGraphErrors *gr = (TGraphErrors*)f->Get(grn.c_str());

   cout<<config<<endl;
   cout<<"graph\t"<<grn<<", "<<gr<<endl;

   // Convert to diluton
   gr = ConvertToDilution(gr); 

   // Set name
   gr->SetName(config.c_str());

   // Fit
   if(fit) { 

      double xmin; double xmax;
      xmin = 750; xmax = 2500;
      //if(decays == "Decays") {xmin = 0; xmax = 3000;}
      //else if(decays == "Tracks") {}

      ParabolaFit(gr, decays, corr, xmin, xmax);

      TF1 *fnc = gr->GetFunction("ParabolaFunc");

      cout<<"chisqr/ndf\t"<<fnc->GetChisquare() / fnc->GetNDF()<<endl;

      cout<<"\n *** Getting fit result pointer *** \n"<<endl;
      TFitResultPtr frp = gr->Fit(fnc,"SR");
/*
      cout<<"\n *** Reducing correlations matrix ***\n"<<endl;

      cout<<"Original correlation matrix:"<<endl;
      frp->GetCorrelationMatrix().Print();

      TGraphErrors *new_gr = ReduceCorrelations(gr,fnc);
      DrawTGraphErrors(new_gr, "", "../Images/tmp");
      cout<<"Got new graph "<<new_gr<<endl;

      ParabolaFit(new_gr, decays, corr, -1e6, 1e6);

      TF1 *new_fnc = new_gr->GetFunction("ParabolaFunc");
  
      TFitResultPtr new_frp = new_gr->Fit(new_fnc,"SR");

      cout<<"New correlation matrix:"<<endl;
      new_frp->GetCorrelationMatrix().Print();*/

   }



   //graphs_.push_back(gr);

   f->Close();

   string title = ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2);

   if(corr) title += ";d_{EDM}(p) / #Delta_{max}#theta_{y}(p)";
   else title += ";d_{EDM}(p)";

   gr->SetTitle(title.c_str());

   string fname = "../Images/MC/Dilution/dMu/"+dMu; 
   if(fit) fname += "/ParabolaFits_"+decays+"_"+type+"_vs_p_"+frame+"_"+to_string(step)+"MeV_"+qual+"Q";
   else fname += "/Graphs_"+decays+"_"+type+"_vs_p_"+frame+"_"+to_string(step)+"MeV_"+qual+"Q";

   //DrawGraphs(graphs_, labels_, title, fname, config, corr, fit, ymin, ymax);

   // Write
   output->cd(dname.c_str());

   gr->Write();      

   return; 

}

void DrawAllGraphs(TFile *input, string fname, double ymin, double ymax) { 

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truthAllDecays"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truth"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackTruth"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco"));

   vector<string> labels_ = {"All decays", "Accepted decays", "Truth vertices", "Reco vertices"};

   vector<int> colours_ = {1,2,8,4};

   TCanvas *c = new TCanvas("c","c",800,600);
   TLegend *l = new TLegend(0.59, 0.69, 0.89, 0.89); 
   l->SetBorderSize(0);
   l->SetTextSize(24);
   l->SetTextFont(44);

   gr_.at(0)->GetXaxis()->SetTitleSize(.04);
   gr_.at(0)->GetYaxis()->SetTitleSize(.04);
   gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
   gr_.at(0)->GetXaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->SetMaxDigits(4);

   for(int i = 0; i<4; i++) {

      // Purge fits
      TF1 *fit = (TF1*)gr_.at(i)->GetListOfFunctions()->At(0); 
      if(fit) {
         gr_.at(i)->GetListOfFunctions()->Remove(fit);
         delete fit;
      }

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(20);
      gr_.at(i)->SetMarkerColor(colours_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(-10, 3010);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

   }

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawVertexGraphs(TFile *input, string fname, string qual, double ymin, double ymax) { 

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/250MeV/d_vs_p/trackTruth").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/250MeV/d_vs_p/trackReco").c_str()));

   vector<string> labels_ = {"Truth vertices", "Reco vertices"};

   vector<int> markerStyles_ = {20,24};

   TCanvas *c = new TCanvas("c","c",800,600);
   // TLegend *l = new TLegend(0.65, 0.75, 0.89, 0.89); 
//   TLegend *l = new TLegend(0.35, 0.29, 0.75, 0.50); 
   TLegend *l = new TLegend(0.25, 0.91, 0.75, 0.99); 
//   TLegend *l = new TLegend(0.25, 0.79, 0.75, 0.89); 
   l->SetNColumns(2);

   l->SetBorderSize(0);
   l->SetTextSize(24);
   l->SetTextFont(44);

   gr_.at(0)->GetXaxis()->SetTitleSize(.04);
   gr_.at(0)->GetYaxis()->SetTitleSize(.04);
   gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
   gr_.at(0)->GetXaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->SetMaxDigits(4);

   for(int i = 0; i<2; i++) {

      // Purge fits
      TF1 *fit = (TF1*)gr_.at(i)->GetListOfFunctions()->At(0); 
      if(fit) {
         gr_.at(i)->GetListOfFunctions()->Remove(fit);
         delete fit;
      }

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(markerStyles_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(240, 3010);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

   }



   // Draw lines
   gPad->Update();
   TLine *line1 = new TLine(750, gPad->GetUymin(), 750, gPad->GetUymax());
   TLine *line2 = new TLine(2500, gPad->GetUymin(), 2500, gPad->GetUymax());

   line1->SetLineWidth(3);
   line1->SetLineStyle(kDashed);
   line1->SetLineColor(kRed);

   line2->SetLineWidth(3);
   line2->SetLineStyle(kDashed);
   line2->SetLineColor(kRed);

   line1->Draw("SAME");
   line2->Draw("SAME");

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawVertexErrorGraphs(TFile *input, string fname, string qual, double ymin, double ymax) { 

   vector<TGraphErrors*> gr_;

   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/250MeV/d_vs_p/trackTruth").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/250MeV/d_vs_p/trackReco").c_str()));

   for(auto& gr : gr_) { 

      int n = gr->GetN();
      double x[n]; double y[n];
      double ex[n]; double ey[n];

      for(int i=0; i<n; i++) {

         x[i] = gr->GetX()[i];
         y[i] = gr->GetEY()[i];
         ex[i] = gr->GetEX()[i];
         ey[i] = 0.;

      }

      gr = new TGraphErrors(n, x, y, ex, ey);

   }

   vector<string> labels_ = {"Truth vertices", "Reco vertices"};

   vector<int> markerStyles_ = {20,24};

   TCanvas *c = new TCanvas("c","c",800,600);
   TLegend *l = new TLegend(0.25, 0.91, 0.75, 0.99); 
   l->SetNColumns(2);

   l->SetBorderSize(0);
   l->SetTextSize(24);
   l->SetTextFont(44);

   gr_.at(0)->GetXaxis()->SetTitleSize(.04);
   gr_.at(0)->GetYaxis()->SetTitleSize(.04);
   gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
   gr_.at(0)->GetXaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->SetMaxDigits(4);

   gr_.at(0)->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#deltad_{EDM}(p)");

   for(int i = 0; i<2; i++) {

      // Purge fits
      TF1 *fit = (TF1*)gr_.at(i)->GetListOfFunctions()->At(0); 
      if(fit) {
         gr_.at(i)->GetListOfFunctions()->Remove(fit);
         delete fit;
      }

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(markerStyles_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(240, 3010);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

   }



   // Draw lines
   gPad->Update();
   TLine *line1 = new TLine(750, gPad->GetUymin(), 750, gPad->GetUymax());
   TLine *line2 = new TLine(2500, gPad->GetUymin(), 2500, gPad->GetUymax());

   line1->SetLineWidth(3);
   line1->SetLineStyle(kDashed);
   line1->SetLineColor(kRed);

   line2->SetLineWidth(3);
   line2->SetLineStyle(kDashed);
   line2->SetLineColor(kRed);

   line1->Draw("SAME");
   line2->Draw("SAME");

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawAllFits(TFile *input, string fname, double ymin, double ymax) { 

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truthAllDecays"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truth"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackTruth"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco"));

   vector<string> labels_ = {"All decays", "Accepted decays", "Truth vertices", "Reco vertices"};

   vector<int> colours_ = {1,2,8,4};

   TCanvas *c = new TCanvas("c","c",800,600);
   TLegend *l = new TLegend(0.59, 0.69, 0.89, 0.89); 
   l->SetBorderSize(0);
   l->SetTextSize(24);
   l->SetTextFont(44);

   gr_.at(0)->GetXaxis()->SetTitleSize(.04);
   gr_.at(0)->GetYaxis()->SetTitleSize(.04);
   gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
   gr_.at(0)->GetXaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->SetMaxDigits(4);

   double tot_integral = (2500-750)*1;

   double last_integral = 0;

   for(int i = 0; i<4; i++) {

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(20);
      gr_.at(i)->SetMarkerColor(colours_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(750, 2500);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

      // Get functions
      TF1 *fit = (TF1*)gr_.at(i)->GetFunction("ParabolaFunc");
      fit->SetLineColor(colours_.at(i));
      fit->SetLineWidth(3);
      fit->Draw("SAME");

      // Get integral
   
      double integral = fit->Integral(750., 2500., 1e4);
      //double integral_error = fit->IntegralError(750., 2500.);
      //TFitResultPtr frp = gr_.at(i)->Fit(fit,"S");
      //double integral_error = fit->IntegralError(750., 2500.,frp->GetParams(), frp->GetCovarianceMatrix().GetMatrixArray());//fit->IntegralError(750., 2500.);//, fitResult->GetParams(), fitResult->GetCovarianceMatrix().GetMatrixArray());

      cout<<"\n*******\nINTEGRAL:\t"<<integral<<endl;//<<"±"<<integral_error<<endl;


/*      //cout<<"integral\t"<<integral<<"±"<<integral_error<<endl;
      cout<<"relative fraction\t"<<integral/tot_integral<<endl;
      cout<<"difference\t"<<diff_integral/tot_integral<<endl;
  // estimated integral  and error analytically  

      TVirtualFitter * fitter = TVirtualFitter::GetFitter();
      assert(fitter != 0);
      double * covMatrix = fitter->GetCovarianceMatrix();

      
      

      double * p = fit->GetParameters();

      double ic  = integral;//p[1]* (1-std::cos(p[0]) )/p[0];
      double c0c = p[1] * (std::cos(p[0]) + p[0]*std::sin(p[0]) -1.)/p[0]/p[0];
      double c1c = (1-std::cos(p[0]) )/p[0];
      // estimated error with correlations
      double sic = std::sqrt( c0c*c0c * covMatrix[0] + c1c*c1c * covMatrix[3]+ 2.* c0c*c1c * covMatrix[1]);
      if ( std::fabs(sigma_integral-sic) > 1.E-6*sic )
         std::cout << " ERROR: test failed : different analytical  integral : "<< ic << " +/- " << sic << std::endl;
      }  

      cout<<ic << " +/- " << sic<<endl;*/

   }

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawAllFitsControl(TFile *input, string fname, double ymin, double ymax) { 

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truthControl"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/C/Tracks/250MeV/d_vs_p/trackRecoControl"));
   gr_.push_back((TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackRecoControl"));

   vector<string> labels_ = {"Accepted decays", "Reco vertices (#geq12 planes hit)", "Reco vertices (quality)"};

   vector<int> colours_ = {1,2,4};

   TCanvas *c = new TCanvas("c","c",800,600);

    // TLegend *l = new TLegend(0.59, 0.69, 0.89, 0.89); 
   TLegend *l = new TLegend(0.11, 0.69, 0.59, 0.89); 

   //l->SetNColumns(3);
   l->SetBorderSize(0);
   l->SetTextSize(24);
   l->SetTextFont(44);

   gr_.at(0)->GetXaxis()->SetTitleSize(.04);
   gr_.at(0)->GetYaxis()->SetTitleSize(.04);
   gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
   gr_.at(0)->GetXaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->SetMaxDigits(4);

   double tot_integral = (2500-750)*1;

   double last_integral = 0;

   for(int i = 0; i<3; i++) {

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(20);
      gr_.at(i)->SetMarkerColor(colours_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(750, 2500);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

      // Get functions
      TF1 *fit = (TF1*)gr_.at(i)->GetFunction("ParabolaFunc");
      fit->SetLineColor(colours_.at(i));
      fit->SetLineWidth(3);
      fit->Draw("SAME");

      // Get integral
   
      double integral = fit->Integral(750., 2500., 1e4);
      //double integral_error = fit->IntegralError(750., 2500.);
      //TFitResultPtr frp = gr_.at(i)->Fit(fit,"S");
      //double integral_error = fit->IntegralError(750., 2500.,frp->GetParams(), frp->GetCovarianceMatrix().GetMatrixArray());//fit->IntegralError(750., 2500.);//, fitResult->GetParams(), fitResult->GetCovarianceMatrix().GetMatrixArray());

      cout<<"\n*******\nINTEGRAL:\t"<<integral<<endl;//<<"±"<<integral_error<<endl;


/*      //cout<<"integral\t"<<integral<<"±"<<integral_error<<endl;
      cout<<"relative fraction\t"<<integral/tot_integral<<endl;
      cout<<"difference\t"<<diff_integral/tot_integral<<endl;
  // estimated integral  and error analytically  

      TVirtualFitter * fitter = TVirtualFitter::GetFitter();
      assert(fitter != 0);
      double * covMatrix = fitter->GetCovarianceMatrix();

      
      

      double * p = fit->GetParameters();

      double ic  = integral;//p[1]* (1-std::cos(p[0]) )/p[0];
      double c0c = p[1] * (std::cos(p[0]) + p[0]*std::sin(p[0]) -1.)/p[0]/p[0];
      double c1c = (1-std::cos(p[0]) )/p[0];
      // estimated error with correlations
      double sic = std::sqrt( c0c*c0c * covMatrix[0] + c1c*c1c * covMatrix[3]+ 2.* c0c*c1c * covMatrix[1]);
      if ( std::fabs(sigma_integral-sic) > 1.E-6*sic )
         std::cout << " ERROR: test failed : different analytical  integral : "<< ic << " +/- " << sic << std::endl;
      }  

      cout<<ic << " +/- " << sic<<endl;*/

   }

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawRecoVertexFit(TFile *input, string fname, double ymin, double ymax) { 

   TGraphErrors *gr = (TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");

   TCanvas *c = new TCanvas("c","c",800,600);

   gr->GetXaxis()->SetTitleSize(.04);
   gr->GetYaxis()->SetTitleSize(.04);
   gr->GetXaxis()->SetTitleOffset(1.1);
   gr->GetYaxis()->SetTitleOffset(1.15);
   gr->GetXaxis()->CenterTitle(true);
   gr->GetYaxis()->CenterTitle(true);
   gr->GetYaxis()->SetMaxDigits(4);

   // Set marker style & colour
   gr->SetMarkerStyle(20);
   gr->SetMarkerColor(kBlack);

   // Set ranges
   gr->GetXaxis()->SetRangeUser(750, 2500);
   gr->GetYaxis()->SetRangeUser(ymin, ymax);


   gr->Draw("AP");


   // Get function
   TF1 *fit = (TF1*)gr->GetFunction("ParabolaFunc");
   fit->SetLineColor(kRed);
   fit->SetLineWidth(3);
   fit->Draw("SAME");

   // Draw legend
   TLegend *l = new TLegend(0.15,0.79,0.86,0.89);
   l->SetBorderSize(0);
   l->SetNColumns(2);
   l->AddEntry(gr,"Sim: reco vertices");
   l->AddEntry(fit, "Fit: ap^{2}+bp+d_{0}");
   l->Draw("SAME");


   TPaveText *names = new TPaveText(0.15,0.20,0.40,0.45,"NDC");

   names->SetTextAlign(13);
   names->AddText("#chi^{2}/NDF");
   names->AddText("a [MeV^{-2}]") ; 
   names->AddText("b [MeV^{-1}]" );
   names->AddText("d_{0}");

   TPaveText *values = new TPaveText(0.40,0.20,0.55,0.45,"NDC");
   values->SetTextAlign(33);
   values->AddText(Round(fit->GetChisquare()/fit->GetNDF(),3));
   values->AddText("(-6#pm2)#times10^{-8}");//SciNotation(fit->GetParameter(0))+"#pm"+SciNotation(fit->GetParError(0)));
   values->AddText("(1.6#pm0.6)#times10^{-4}");//Round(fit->GetParameter(1),2)+"#pm"+SciNotation(fit->GetParError(1)));
   values->AddText(Round(fit->GetParameter(2), 1)+"#pm"+Round(fit->GetParError(2), 1));

   names->SetTextSize(26);
   names->SetTextFont(44);
   names->SetFillColor(0);
   values->SetFillColor(0);
   values->SetTextFont(44);
   values->SetTextSize(26);

   names->Draw("SAME");
   values->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   cout<<"COMBINED UNCERTAINTY FOR DILUTION OF RECO VERTICES:\n"<<endl;
   cout<<Round(sqrt(pow(fit->GetParError(0),2)+pow(fit->GetParError(1),2)+pow(fit->GetParError(2),2)),3)<<endl;
   cout<<"COMBINED UNCERTAINTY ON THE TILT ANGLE FOR:\n"<<endl;
   cout<<Round(delta_calc*sqrt(pow(fit->GetParError(0),2)+pow(fit->GetParError(1),2)+pow(fit->GetParError(2),2)),3)<<endl;
   delete c;

   return;

}

int main() { 

   bool fit = true;
   bool corr = false;
   bool write = false;

   string fname = "";
   if(write) fname += "../Plots/MC/dMu/Dilution/dilutionCurves.root";
   else if(!write) fname += "../Plots/MC/dMu/Dilution/tmp.root";

   TFile *output = new TFile(fname.c_str(), "RECREATE");

/*   RunAEDM("truthControl_AAR_250MeV_AQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackRecoControl_AAR_250MeV_BQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackRecoControl_AAR_250MeV_CQ", corr, fit, 0, 0.15, output);

   DrawAllFitsControl(output, "../Images/MC/Dilution/dMu/5.4e-18/AllFitsControl", -0.05, 0.25);*/

   RunAEDM("truthAllDecays_AAR_500MeV_AQ", corr, fit, 0, 0.15, output);
   RunAEDM("truth_AAR_500MeV_AQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackReco_AAR_500MeV_AQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackTruth_AAR_500MeV_AQ", corr, fit, 0, 0.15, output); 
   RunAEDM("trackReco_AAR_500MeV_BQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackTruth_AAR_500MeV_BQ", corr, fit, 0, 0.15, output); 

   RunAEDM("truthAllDecays_AAR_250MeV_AQ", corr, fit, 0, 0.15, output);
   RunAEDM("truth_AAR_250MeV_AQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackReco_AAR_250MeV_AQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackTruth_AAR_250MeV_AQ", corr, fit, 0, 0.15, output); 
   RunAEDM("trackReco_AAR_250MeV_BQ", corr, fit, 0, 0.15, output);
   RunAEDM("trackTruth_AAR_250MeV_BQ", corr, fit, 0, 0.15, output); 

   // RunAEDM("truth2_AAR_250MeV_AQ", corr, fit, 0, 0.15, output);

   cout<<"\n****************** Drawing ******************"<<endl;

   DrawAllGraphs(output, "../Images/MC/Dilution/dMu/5.4e-18/AllGraphs", -0.1,0.25);
   DrawVertexGraphs(output, "../Images/MC/Dilution/dMu/5.4e-18/VertexGraphs_AQ", "A", 0,0.125);
   DrawVertexErrorGraphs(output, "../Images/MC/Dilution/dMu/5.4e-18/VertexErrorGraphs_AQ", "A", 0, 0.03);
   DrawVertexGraphs(output, "../Images/MC/Dilution/dMu/5.4e-18/VertexGraphs_BQ", "B", -0.1,0.125);
   DrawVertexErrorGraphs(output, "../Images/MC/Dilution/dMu/5.4e-18/VertexErrorGraphs_BQ", "B", 0, 0.075);

   // This also deals with the integration (needs a seperate function I think)
   DrawAllFits(output, "../Images/MC/Dilution/dMu/5.4e-18/AllFits", 0, 0.225);

   DrawRecoVertexFit(output, "../Images/MC/Dilution/dMu/5.4e-18/RecoVertexFit", 0, 0.12);

   output->Write();
   output->Close();

   cout<<"Written plots to "<<fname<<endl;

   return 0; 

}