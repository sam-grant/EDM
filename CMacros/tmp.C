TString Round(double N, int n) { 

  std::stringstream roundedValue;
  roundedValue.precision(n);
  roundedValue << N << std::endl;

  return roundedValue.str();
}

TString ThreeSigFig(double num) { 
  return Form("%5.3g", num);
}

void tmp() {

   float N = 0.1799887; 
   int n = 3;

   TString a = Round(N, n);

   TString b = ThreeSigFig(N);

   cout << a << "\n" ;

   cout << b << "\n" ;

   return; 
}

