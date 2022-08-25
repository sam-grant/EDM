

// Just notes!


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