

#include "../Blinding/Blinders.hh"
#include "TTree.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TProfile.h"

using namespace blinding;

int main() {

  Blinders::fitType ftype = Blinders::kOmega_a;
  Blinders myBlinder( ftype );
  
  Blinders getBlinded( ftype, "Inspiral" );
  
  Blinders systematicallyBlinded( ftype, 1, 10, "Ringdown" );

  // there should be no blinding...
  std::cout << "\n\n should be unblinded results " << std::endl;
  for ( double R = 0; R < 10; R += 1 ) {
    double result = ( myBlinder.paramToFreq( R ) / myBlinder.referenceValue() ) - 1;
    std::cout << " input R: " << R << "   output: " << result << std::endl;
  }
  // there should be nominal blinding...
  std::cout << "\n\n should be blinded central results " << std::endl;
  for ( double R = 0; R < 10; R += 1 ) {
    double result = ( getBlinded.paramToFreq( R ) / getBlinded.referenceValue() ) - 1;
    std::cout << " input R: " << R << "   output: " << result << std::endl;
  }

  // there should be systematic shifts relative to nominal central...
  std::cout << "\n\n should be systematic shift results " << std::endl;
  for ( double R = 0; R < 10; R += 1 ) {
    double result = ( systematicallyBlinded.paramToFreq( R ) / systematicallyBlinded.referenceValue() ) - 1;
    std::cout << " input R: " << R << "   output: " << result << std::endl;
  }




  std::string config = "30xBNL"; // 1xBNL"
  std::string qualString = "Q";
  //bool quality = false;
  //std::string qualString;
  //if(quality) qualString = "Q";
  //else qualString = "NoQ";

  // Read file
  TFile *input = TFile::Open(("../Plots/MC/"+config+"/moduloPlots"+qualString+".root").c_str());
  std::cout << "\nRead input...\t\t: " << input << std::endl;

  TH2D *moduloHist = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
  std::cout << "Got modulo hist...\t: " << moduloHist << std::endl;

  // Make profile
  TH1D *moduloProf = moduloHist->ProfileX();
  std::cout << "Generated x-profile...\t: " << moduloProf << std::endl; 

  TCanvas *c = new TCanvas();
  moduloProf->Draw();
  c->SaveAs("blank.png");

}