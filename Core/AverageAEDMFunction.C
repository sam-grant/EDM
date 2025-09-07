void DrawTF1(TF1 *func, std::string title, std::string fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  func->SetTitle(title.c_str());

  //hist->SetStats(0);
  //gStyle->SetOptStat(2210);
      
  func->GetXaxis()->SetTitleSize(.04);
  func->GetYaxis()->SetTitleSize(.04);
  func->GetXaxis()->SetTitleOffset(1.1);
  func->GetYaxis()->SetTitleOffset(1.2);
  func->GetXaxis()->CenterTitle(1);
  func->GetYaxis()->CenterTitle(1);
  func->GetYaxis()->SetMaxDigits(4);
  func->SetLineWidth(3);
  func->SetLineColor(kRed);

  //c->SetRightMargin(0.13);

  func->Draw();

  TLegend *l = new TLegend(0.65,0.75,0.85,0.85);
  l->SetBorderSize(0);
  l->SetNColumns(1);

   // [0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )
   //l->AddEntry(fit, "Fit: a(bp-1)^{2}(2bp+1)");//p^{2}+bp+d_{0}");
   //l->AddEntry(fit, "Fit: a(bp-1)^{2}(2bp+1)");//p^{2}+bp+d_{0}");
   l->AddEntry(func, "#frac{(#lambda#minus1)(2#lambda#plus1)}{4#lambda^{2}#minus5#lambda#minus5}");//p^{2}+bp+d_{0}");
   l->SetTextSize(26);
   l->SetTextFont(44);
   l->Draw("SAME");

    gPad->Update();


    double mMu = 105.6583715; // MeV
    double aMu = 11659208.9e-10; 
    double gmagic = std::sqrt( 1.+1./aMu );
    double pmax =  mMu * gmagic;

    // Second axis
    TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),0,pmax,510,"-");
    axis->SetTitle("Laboratory frame e^{+} energy [MeV]");
    axis->SetTitleOffset(1.1);
    axis->CenterTitle(true);
    axis->SetTextFont(42);
    axis->SetLabelFont(42);
    axis->SetTextColor(kRed);
    axis->SetLabelColor(kRed);
    axis->SetLineColor(kRed);

    axis->Draw("same");
  


//  c->SetGrid();
  
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());

  delete c;

  return;

}


double DilutionFunc(double *x, double *par) {
  return  par[0] * ( (x[0]-1)*(2*x[0]+1) ) / ( 4*x[0]*x[0] - 5*x[0] -5 ) ; 
}

void AverageAEDMFunction() { 

  TF1 *fnc = new TF1("DilutionFunc", DilutionFunc, 0, 1, 1);
  fnc->FixParameter(0, 1); 

  DrawTF1(fnc, ";#lambda=E/E_{max};Normalised units", "../Images/MC/dMu/5.4e-18/AverageAEDMFunction");
  return; 

}