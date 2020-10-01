#include "Blinders.hh"
#include "TFile.h"
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
  TCanvas *c = new TCanvas();
  c->SaveAs("blank.png");
}
