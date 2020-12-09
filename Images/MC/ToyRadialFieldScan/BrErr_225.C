void BrErr_225()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__26 = new TH1D("__26","Number of sub-runs: 225",1000,0,10);
   __26->SetBinContent(50,2);
   __26->SetBinContent(51,9);
   __26->SetBinContent(52,82);
   __26->SetBinContent(53,319);
   __26->SetBinContent(54,347);
   __26->SetBinContent(55,186);
   __26->SetBinContent(56,48);
   __26->SetBinContent(57,7);
   __26->SetEntries(1000);
   __26->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __26->GetXaxis()->CenterTitle(true);
   __26->GetXaxis()->SetLabelFont(42);
   __26->GetXaxis()->SetTitleSize(0.04);
   __26->GetXaxis()->SetTitleOffset(1.1);
   __26->GetXaxis()->SetTitleFont(42);
   __26->GetYaxis()->SetTitle("Trials");
   __26->GetYaxis()->CenterTitle(true);
   __26->GetYaxis()->SetNdivisions(4000510);
   __26->GetYaxis()->SetLabelFont(42);
   __26->GetYaxis()->SetTitleSize(0.04);
   __26->GetYaxis()->SetTitleOffset(1.1);
   __26->GetYaxis()->SetTitleFont(42);
   __26->GetZaxis()->SetLabelFont(42);
   __26->GetZaxis()->SetTitleOffset(1);
   __26->GetZaxis()->SetTitleFont(42);
   __26->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
