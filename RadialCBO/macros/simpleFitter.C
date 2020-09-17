// Perform simple fit to radial CBO, as well as making an FFT of the residual

// Sam Grant 
// Jan 2020
// samuel.grant.18@ucl.ac.uk

// 
#include <iostream>

#include "TFile.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TStyle.h"
#include "TAxis.h"
#include "TProfile.h"
#include "TF1.h"
#include "TDirectory.h"
#include "TObject.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TPaveStats.h"
#include "TPaveText.h"
#include "TVirtualFFT.h"

using namespace std;

double RadialCBOFuncSimple(double *x, double *par) {

  // Simple wiggle with a decaying amplitude, and a normalistation term
  return (par[0]*exp(-x[0]/par[1])*cos(par[2]*x[0]-par[3]))+par[4];  

}


void RadialCBOFitSimple(TH1D *hist, double startTime, double endTime) {
  
//  float startTime = startPeriod * T_CBO;
//  float endTime = endPeriod * T_CBO;

  TF1 *func = new TF1("RadialCBOFuncSimple", RadialCBOFuncSimple, startTime, endTime, 5);


  func->SetParameter(0,10);  // Amplitude
  func->SetParameter(1,250);  // Lifetime
  func->SetParameter(2,2);

  func->SetParName(0,"A"); // [mm]
  func->SetParName(1,"#tau"); // [#mus]
  func->SetParName(2,"#omega"); // [rad/#mus]
  func->SetParName(3,"#phi"); // [rad]
  func->SetParName(4,"R_{0}"); // [mm]

  func->SetNpx(10000);

  hist->Fit(func,"MR");
  
  cout << "Chi^2/ndf:\t" << func->GetChisquare() / func->GetNDF() << endl;

  return;

}

// Stolen wholesale from EuropaFitter
TH1D* GetResidual(TH1D* data, TF1* fit, double min, double max) { // , TH1F* pull){

  int nbins = data->GetXaxis()->GetNbins();
  double binWidth = data->GetBinWidth(1);
  double low = data->GetXaxis()->GetBinLowEdge(1);
  double high = low + nbins*binWidth;
  TH1D* residual = new TH1D("residual", "", nbins, low, high);  

  for (int ibin(1); ibin <= nbins; ibin++){
    residual->SetBinContent(ibin, 0.0);
    double time = residual->GetXaxis()->GetBinCenter(ibin);
    if (time > max) break;// residual->SetBinContent(ibin,0);// break;
    else if (time >= min) {
      double cont = data->GetBinContent(ibin);
      double err = data->GetBinError(ibin);
      //double integral = fit->Integral( data->GetBinLowEdge(ibin), data->GetBinLowEdge(ibin) + binWidth );
      double integral = fit->Eval(time);
      residual->SetBinContent(ibin, integral - cont);
      residual->SetBinError(ibin, err);
      // pull->Fill( (integral - cont) / err);
    }
  }
  return residual;
}

// Get FFT of residual 
TH1D* GetFFT(TH1D* hist) {

  TH1 *hm = 0;
  TVirtualFFT::SetTransform(0);
  hm = hist -> FFT(hm, "MAG");


  //Rescale x-axis by dividing by the function domain              
  TAxis *xaxis = hm -> GetXaxis();

  int nBins = hist->GetXaxis()->GetNbins();
  double *ba = new double[nBins+1];
  xaxis -> GetLowEdge(ba);
  double Scale = 1./(hist->GetXaxis()->GetXmax() - hist->GetXaxis()->GetXmin());
  ba[nBins] = ba[nBins-1] + xaxis -> GetBinWidth(nBins);

  for (int i = 0; i < nBins + 1; i++) {
       ba[i] *= Scale;
  }
 
  TH1D* fftResidual = new TH1D(hm -> GetName(), hm -> GetTitle(), nBins, ba);
  for (int i = 0; i <= nBins; i++) {
      fftResidual -> SetBinContent(i, hm -> GetBinContent(i));
      fftResidual -> SetBinError(i, hm -> GetBinError(i));
  }

  //TH1D* fftResidual = (TH1D*)hm->Clone("residualFFT");
  
  fftResidual -> SetStats(0);
  fftResidual -> SetName("residualFFT");
  fftResidual -> Scale(1.0 / fftResidual -> Integral());
 

  //Calculate Nyquist frequency, which is twice the highest frequeny in the signal or half of the sampling rate.                                                                                            
  //...the maximum frequency before sampling errors start              

  double binWidth = hist->GetXaxis()->GetBinWidth(0);
  double sampleRate = 1 / binWidth;
  double nyquistFreq = 0.5 * sampleRate;

  fftResidual->GetXaxis()->SetRangeUser(0, nyquistFreq);

  cout << "binWidth\t" <<binWidth<<" us"<<endl;
  cout << "sampleRate\t" <<sampleRate<<" MHz"<<endl;
  cout << "nyquistFreq\t" <<nyquistFreq<<" MHz"<<endl;

  return fftResidual;
}

// Drawing function
void FancyDrawFit(TH1D *hist, string title, string name, TFile *out, bool drawStatBox) {

  TF1 *f1 = hist->GetFunction("RadialCBOFuncSimple");

  // Book legend, which writes the fit formula
  TLegend *leg = new TLegend(0.525,0.75,0.85,0.85);

  leg->SetBorderSize(0);

  leg->AddEntry(f1,"A e^{-t/#tau} cos(#omegat #minus #phi) #plus R_{0}");

  TCanvas *c = new TCanvas("c","c",800,600);//"","",3000,2000);
  
  gStyle->SetStatFormat("6.3g");

  hist->Draw();
  gPad->Update();

  gStyle->SetOptStat(0);
  gStyle->SetOptFit(111);
  gStyle->SetOptStat(10);

  //  hist->SetStats(0);
  TPaveStats *statBox = (TPaveStats*) hist->FindObject("stats");

  //statBox->SetBorderSize();
  //  statBox->SetNcolumns(2);
  statBox->SetBorderSize(0);

  statBox->SetX1NDC(0.15);
  statBox->SetX2NDC(0.475);
  statBox->SetY1NDC(0.65);
  statBox->SetY2NDC(0.89);

  //  hist->SetLineWidth(3);
  hist->SetLineColor(kBlack);
  hist->SetTitle(title.c_str());

  hist->GetYaxis()->SetTitleOffset(1.3);
  hist->GetXaxis()->SetTitleOffset(0.9);
  hist->GetXaxis()->CenterTitle(true);
  hist->GetYaxis()->CenterTitle(true);

  //double min = hist->GetFunction("RadialCBOFunc")->GetParName(0) - 0.002;
  //double max = hist->GetFunction("RadialCBOFunc")->GetParName(0) + 0.003;
  //hist->GetYaxis()->SetRangeUser(min, max);

  hist->GetYaxis()->SetRangeUser(-15, 35);
  // hist->GetXaxis()->SetRangeUser(0, 100);
  hist->SetTitleSize(.75);
  hist->GetXaxis()->SetTitleSize(.05);
  hist->GetYaxis()->SetTitleSize(.05);

  c->SetLeftMargin(0.13);

  if(!drawStatBox) hist->SetStats(0);

  hist->Draw();
  leg->Draw("SAME");

  // Dump fit into the top directory of a ROOT file
  hist->SetDirectory(gDirectory);

  // Save an images
  c->SaveAs((name+".C").c_str());
  c->SaveAs((name+".pdf").c_str());

  delete c;

}

// Drawing function
void FancyDraw(TH1 *hist, string title, string name, TFile *out, bool errors, bool twoD) {

  
  TCanvas *c = new TCanvas("c","c",800,600);//"","",3000,2000);

  //  hist->SetLineWidth(3);
  hist->SetStats(0);
  hist->SetLineColor(kBlack);
  hist->SetTitle(title.c_str());

  hist->GetYaxis()->SetTitleOffset(1.3);
  hist->GetXaxis()->SetTitleOffset(0.9);
  hist->GetXaxis()->CenterTitle(true);
  hist->GetYaxis()->CenterTitle(true);

  //double min = hist->GetFunction("RadialCBOFunc")->GetParName(0) - 0.002;
  //double max = hist->GetFunction("RadialCBOFunc")->GetParName(0) + 0.003;
  //hist->GetYaxis()->SetRangeUser(min, max);

  // hist->GetYaxis()->SetRangeUser(-15, 15);
  // hist->GetXaxis()->SetRangeUser(0, 120);
  hist->SetTitleSize(.75);
  hist->GetXaxis()->SetTitleSize(.05);
  hist->GetYaxis()->SetTitleSize(.05);

  c->SetLeftMargin(0.13);

  if(!twoD) {
    if(!errors) hist->Draw("hist");
    else hist->Draw(); 
  } else if (twoD) {
    gStyle->SetPalette(55);
    hist->Draw("COLZ");

  } 
  // Dump fit into the top directory of a ROOT file
  hist->SetDirectory(gDirectory);

  // Save an images
  c->SaveAs((name+".C").c_str());
  c->SaveAs((name+".pdf").c_str());

  delete c;

}

// Simple fit
int main() {

  // Approx CBO time period
  double T_CBO = 2.69; // us
  double start = 7*T_CBO;
  double end = 50*T_CBO; 

  string inputName = "../plots/run2C/plots_run2C.root";
  string outputName = "../plots/run2C/5par.root";

  TFile *input = TFile::Open(inputName.c_str());
  TFile *output = new TFile(outputName.c_str() , "RECREATE");

  cout << "Reading: " << inputName << " " << input << endl;
  
  // Loop over tracker stations
  for(int stn = 12; stn<19; stn = stn + 6) { 

    string dir = "S"+to_string(stn);

    output->cd();
    output->mkdir(dir.c_str());
    output->cd(dir.c_str());

    string histName = "S"+to_string(stn)+"_RadialDecayVertex_vs_DecayTime";

    // Grab histogram
    TH2D *hist = (TH2D*)input->Get(histName.c_str());

    // Clone it for drawing
    TH1D *histClone = (TH1D*)hist->Clone("histClone");

    // Draw full thing
    FancyDraw(histClone,";Decay time [#mus];Radial decay position [mm]","../images/run2C/5par/S"+to_string(stn)+"_RadialCBO2DLong",output,true, true);

    histClone->SetName("fullHist");
    //histClone->SetDirectory(gDirectory);

    // Draw it over fit range
    histClone->GetXaxis()->SetRangeUser(start, end);
    histClone->GetYaxis()->SetRangeUser(-15,35);
    FancyDraw(histClone,";Decay time [#mus];Radial decay position [mm]","../images/run2C/5par/S"+to_string(stn)+"_RadialCBO2D",output,true, true);

    // Take a profile of the histogram in X
    TH1D *prof = hist->ProfileX();
    prof->SetName("profileFit");
    // Clone profile for drawing
    TH1D *profClone = (TH1D*)prof->Clone("profClone");
    // Draw the profile
    FancyDraw(profClone,";Decay time [#mus];Radial decay position mean [mm]","../images/run2C/5par/S"+to_string(stn)+"_RadialCBOLong",output,true, false);
    profClone->SetName("fullProfile");
    profClone->SetDirectory(gDirectory);

    // Draw the profile over fit range
    profClone->GetXaxis()->SetRangeUser(0,end);
    profClone->GetYaxis()->SetRangeUser(-15,25);
    FancyDraw(profClone,";Decay time [#mus];Radial decay position mean [mm]","../images/run2C/5par/S"+to_string(stn)+"_RadialCBO",output,true, false);
    
    ///////////////////////////    
    // PERFORM FIT
    /////////////////////////// 
        
    TF1 *func = new TF1("RadialCBOFuncSimple", RadialCBOFuncSimple, start, end, 13);

    RadialCBOFitSimple(prof, start, end); 

    // Set the profile to the fit range
    prof->GetXaxis()->SetRangeUser(start, end);
    
    // Draw the fit
    FancyDrawFit(prof,";Decay time [#mus];Radial decay position mean [mm]","../images/run2C/5par/S"+to_string(stn)+"_RadialCBOFit",output, true);

    //prof->SetDirectory(gDirectory);
    ///////////////////////////    
    // GET RESIDUAL
    ///////////////////////////  
      
    TH1D *res = GetResidual(prof, prof->GetFunction("RadialCBOFuncSimple"), start, end);

    // Set the residual to the fit range
    res->GetXaxis()->SetRangeUser(start, end);
    FancyDraw(res,";Decay time [#mus];Fit residual [mm]","../images/run2C/5par/S"+to_string(stn)+"_RadialCBORes",output, true, false);

    //res->SetDirectory(gDirectory);
    
    ///////////////////////////    
    // GET RESIDUAL FFT
    ///////////////////////////

    TH1D *fft = GetFFT(res);
    FancyDraw(fft,";Frequency [MHz];Normalised magnitude","../images/run2C/5par/S"+to_string(stn)+"_RadialCBOResFFT", output, false, false);
    //fft->SetDirectory(gDirectory);
  }

  output->Write();
  output->Close();
  input->Close();
  
  // cout << "\nCreated: " << outputName << " " << output << endl;
  return 0;

}
