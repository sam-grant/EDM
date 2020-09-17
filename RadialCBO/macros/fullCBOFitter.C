// Perform simple fit to radial CBO, as well as making an FFT of the residual

// Sam Grant 
// Jan 2020
// samuel.grant.18@ucl.ac.uk

// BLINDING LIBRARY FOR OMEGA_A
// R__LOAD_LIBRARY(/cvmfs/gm2.opensciencegrid.org/prod/g-2/gm2util/v9_16_00/slf6.x86_64.e15.prof/lib/libgm2util_blinders.so)


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

// blinding::Blinders::fitType ftype = blinding::Blinders::kOmega_a;
// blinding::Blinders getBlinded( ftype, "Just testing" );

double RadialCBOFunc12(double *x, double *par) {

  // Blind omega_a
  // double omega_a = getBlinded.paramToFreq(R);

  return par[0]*(1-par[1]*exp(-x[0]/par[2])) + // Scraping. +/- between stations (fitter should pick it up)
          par[3]*cos(par[4]*x[0]+par[5]*exp(-x[0]/par[6])+par[7])*(exp(-x[0]/par[8])+par[9]) + // CBO oscillation
          // par[10]*cos(omega_a*x[0]+par[11]); // g-2
          par[10]*cos(par[11]*x[0]+par[12]); // g-2

}

double RadialCBOFunc18(double *x, double *par) {

  // Blind omega_a
  // double omega_a = getBlinded.paramToFreq(R);

  return par[0]*(1+par[1]*exp(-x[0]/par[2])) + // Scraping. +/- between stations (fitter should pick it up)
          par[3]*cos(par[4]*x[0]+par[5]*exp(-x[0]/par[6])+par[7])*(exp(-x[0]/par[8])+par[9]) + // CBO oscillation
          // par[10]*cos(omega_a*x[0]+par[11]); // g-2
          par[10]*cos(par[11]*x[0]+par[12]); // g-2

}


void RadialCBOFit(TH1D *hist, TF1 *fit, double startTime, double endTime) {

  // TF1 *func;
  
  fit->SetParName(0,"R_{0}"); // [mm]
  fit->SetParName(1,"#DeltaR"); // 
  fit->SetParName(2,"#tau_{R}"); // [mus]
  fit->SetParName(3,"A_{CBO}"); // [mm]
  fit->SetParName(4,"#omega_{0}"); // [rad/us]
  fit->SetParName(5,"B"); // 
  fit->SetParName(6,"#tau_{B}"); // [mus]
  fit->SetParName(7,"#phi_{0}"); // [mm]
  fit->SetParName(8,"#tau_{CBO}"); // [mm]
  fit->SetParName(9,"C_{CBO}"); // [mm]
  fit->SetParName(10,"A_{g-2}"); // [mm]
  fit->SetParName(11,"#omega_{g-2}"); // [mm]
  fit->SetParName(12,"#phi_{g-2}"); // [mm]

  //
  // SORT OUT PARAMETERS
  //

  fit->SetParameter(0,2);  // OFFSET
  // fit->SetParameter(1,0);  // OFFSET RISE
  fit->SetParameter(2,7);  // RISE LIFETIME
  fit->SetParameter(3,13);  // CBO AMPLITUDE
  fit->SetParameter(4,2.33);  // INITIAL CB0 FREQUENCY
  fit->SetParameter(5,2.5);  // B AMPLITUDE
  fit->SetParameter(6,8);  // B LIFETIME
  //fit->SetParameter(7,0);  // INITAL CBO PHASE 
  fit->SetParameter(8,300);  // CBO LIFETIME
  fit->SetParLimits(8,200,400);  // CBO LIFETIME
  // fit->SetParameter(9,1);  // CBO INTERCEPT?
  fit->SetParameter(10,0.05);  // G-2 AMPLITUDE
  fit->FixParameter(11,2*TMath::Pi()/4.365);  // G-2 FREQUENCY
  fit->SetParameter(12,0);  // G-2 PHASE 


  fit->SetNpx(10000);

  hist->Fit(fit,"MR");
//   hist->SetRan
  
  cout << "Chi^2/ndf:\t" << fit->GetChisquare() / fit->GetNDF() << endl;
  //cout<<"TCBO [us]:\t"<<2*TMath::Pi()/func->GetParameter(2)<<endl;  
  return;

}

// Get the fid residual
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

  // Get function
  TF1 *f1 = hist->GetFunction("RadialCBOFunc");
  
  // Book legend, which writes the fit formula
  // TLegend *leg = new TLegend(0.525,0.75,0.85,0.85);
  //TLegend *leg = new TLegend(0.15,0.65,0.475,0.85);
//
  //leg->SetBorderSize(0);

  // Write out function
  // leg->AddEntry(f1,"R_{0} (1 #pm #DeltaR e^{-t/#tau_{R}}) +","");
  // leg->AddEntry((TObject*)0, "A_{CBO}#cdot(e^{-t/#tau_{CBO}}+_cos(#omega_{0}t + Be^{-t/#tau_{B}} - #phi_{0}) +","");
  // leg->AddEntry((TObject*)0, "A_{g-2} cos(#omega_{g-2}t - #phi_{g-2})","");

  TCanvas *c = new TCanvas("c","c",800,600);//"","",3000,2000);
  
  gStyle->SetStatFormat("6.3g");

  hist->Draw();
  gPad->Update();

  // Format statbox
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(111);
  gStyle->SetOptStat(10);


  TPaveStats *statBox = (TPaveStats*) hist->FindObject("stats");

  //statBox->SetBorderSize(0);
  // Put it top left
  // statBox->SetY2NDC(0.89);
  // statBox->SetY1NDC(0.65);
  // statBox->SetX2NDC(0.475);
  // statBox->SetX1NDC(0.15);
  statBox->SetX1NDC(0.59);
  statBox->SetX2NDC(0.99);
  statBox->SetY1NDC(0.59);
  statBox->SetY2NDC(0.99);


  hist->SetLineColor(kBlack);
  hist->SetTitle(title.c_str());

  // Standard g-2 formatting
  hist->GetYaxis()->SetTitleOffset(1.3);
  hist->GetXaxis()->SetTitleOffset(0.9);
  hist->GetXaxis()->CenterTitle(true);
  hist->GetYaxis()->CenterTitle(true);
  
  //hist->GetYaxis()->SetRangeUser(-15, 25);
  // hist->GetXaxis()->SetRangeUser(0, 100);
  hist->SetTitleSize(.75);
  hist->GetXaxis()->SetTitleSize(.05);
  hist->GetYaxis()->SetTitleSize(.05);

  c->SetLeftMargin(0.13);

  if(!drawStatBox) hist->SetStats(0);

  hist->Draw();
  // leg->Draw("SAME");

  // Dump fit into the top directory of a ROOT file
  hist->SetDirectory(out);

  // Save an images
  c->SaveAs((name+".png").c_str());
  c->SaveAs((name+".pdf").c_str());

  delete c;

}

// Drawing function
void FancyDraw(TH1 *hist, string title, string name, TFile *out, bool errors, bool twoD) {

  
  TCanvas *c = new TCanvas("c","c",800,600);//"","",3000,2000);

  hist->SetStats(0);
  hist->SetLineColor(kBlack);
  hist->SetTitle(title.c_str());

  hist->GetYaxis()->SetTitleOffset(1.3);
  hist->GetXaxis()->SetTitleOffset(0.9);
  hist->GetXaxis()->CenterTitle(true);
  hist->GetYaxis()->CenterTitle(true);

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
  hist->SetDirectory(out);

  // Save an images
  c->SaveAs((name+".png").c_str());
  c->SaveAs((name+".pdf").c_str());

  delete c;

}

// Simple fit
int main() {

  // Approx CBO time period
  double T_CBO = 2.69; // us
  double start = 1*T_CBO;
  double end = 50*T_CBO; 

  string inputName = "../plots/RadialCBO_FromRun2Trees_crudeDQC.root";
  string outputName = "../plots/MainFit_Run2FromTrees_crudeDQC.root";

  TFile *input = TFile::Open(inputName.c_str());
  TFile *output = new TFile(outputName.c_str() , "RECREATE");

  cout << "Reading: " << inputName << " " << input << endl;
  
  // Loop over tracker stations
  for(int stn = 12; stn<19; stn = stn + 6) { 

    string dir = "S"+to_string(stn);

    cout<<"Here"<<endl;

    output->cd();
    output->mkdir(dir.c_str());

    string histName = "S"+to_string(stn)+"_RadialDecayVertex_vs_DecayTime";

    // Grab histogram
    TH2D *hist = (TH2D*)input->Get(histName.c_str());

    // Clone it for drawing
    TH1D *histClone = (TH1D*)hist->Clone("histClone");

    // Draw full thing
    FancyDraw(histClone,";Decay time [#mus];Radial decay position [mm]","../images/S"+to_string(stn)+"_RadialCBO2DLong",output,true, true);
    // Draw it over fit range
    histClone->GetXaxis()->SetRangeUser(start, end);
    histClone->GetYaxis()->SetRangeUser(-15,25);
    FancyDraw(histClone,";Decay time [#mus];Radial decay position [mm]","../images/S"+to_string(stn)+"_RadialCBO2D",output,true, true);

    // Take a profile of the histogram in X
    TH1D *prof = hist->ProfileX();
    // Clone profile for drawing
    TH1D *profClone = (TH1D*)prof->Clone("profClone");
    // Draw the profile
    FancyDraw(profClone,";Decay time [#mus];Radial decay position mean [mm]","../images/S"+to_string(stn)+"_RadialCBOLong",output,true, false);
    // Draw the profile over fit range
    profClone->GetXaxis()->SetRangeUser(0,end);
    profClone->GetYaxis()->SetRangeUser(-15,25);
    FancyDraw(profClone,";Decay time [#mus];Radial decay position mean [mm]","../images/S"+to_string(stn)+"_RadialCBO",output,true, false);
    
    ///////////////////////////    
    // PERFORM FIT
    /////////////////////////// 
    

    if(stn==12) {
    
      TF1 *func12 = new TF1("RadialCBOFunc12", RadialCBOFunc12, start, end, 13);

      RadialCBOFit(prof, func12, start, end); 

      // Set the profile to the fit range
      prof->GetXaxis()->SetRangeUser(start, end);
    
      // Draw the fit
      FancyDrawFit(prof,";Decay time [#mus];Radial decay position mean [mm]","../images/S"+to_string(stn)+"_RadialCBOFit",output, true);

      ///////////////////////////    
      // GET RESIDUAL
      ///////////////////////////  
      
      TH1D *res = GetResidual(prof, prof->GetFunction("RadialCBOFunc12"), start, end);
   
      // Set the residual to the fit range
      res->GetXaxis()->SetRangeUser(start, end);
      FancyDraw(res,";Decay time [#mus];Fit residual [mm]","../images/fullFit/S"+to_string(stn)+"_RadialCBORes",output, true, false);

      ///////////////////////////    
      // GET RESIDUAL FFT
      ///////////////////////////

      TH1D *fft = GetFFT(res);
      FancyDraw(fft,";Frequency [MHz];Normalised magnitude","../images/fullFit/S"+to_string(stn)+"_RadialCBOResFFT", output, false, false);
    

    } else if(stn==18) {

      TF1 *func18 = new TF1("RadialCBOFunc18", RadialCBOFunc18, start, end, 13);

      RadialCBOFit(prof, func18, start, end); 

      // Set the profile to the fit range
      prof->GetXaxis()->SetRangeUser(start, end);
    
      // Draw the fit
      FancyDrawFit(prof,";Decay time [#mus];Radial decay position mean [mm]","../images/fullFit/S"+to_string(stn)+"_RadialCBOFit",output, true);

      ///////////////////////////    
      // GET RESIDUAL
      ///////////////////////////  
      
      TH1D *res = GetResidual(prof, prof->GetFunction("RadialCBOFunc18"), start, end);
   
      // Set the residual to the fit range
      res->GetXaxis()->SetRangeUser(start, end);
      FancyDraw(res,";Decay time [#mus];Fit residual [mm]","../images/fullFit/S"+to_string(stn)+"_RadialCBORes",output, true, false);

      ///////////////////////////    
      // GET RESIDUAL FFT
      ///////////////////////////

      TH1D *fft = GetFFT(res);
      FancyDraw(fft,";Frequency [MHz];Normalised magnitude","../images/fullFit/S"+to_string(stn)+"_RadialCBOResFFT", output, false, false);
    

    } else cout<<"Station number error"<<endl;


  }
  
  output->Write();
  output->Close();
  input->Close();

  return 0;

}
