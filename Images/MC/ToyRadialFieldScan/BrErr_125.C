void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,10);
   __14->SetBinContent(67,5);
   __14->SetBinContent(68,15);
   __14->SetBinContent(69,48);
   __14->SetBinContent(70,81);
   __14->SetBinContent(71,189);
   __14->SetBinContent(72,228);
   __14->SetBinContent(73,190);
   __14->SetBinContent(74,115);
   __14->SetBinContent(75,79);
   __14->SetBinContent(76,34);
   __14->SetBinContent(77,12);
   __14->SetBinContent(78,3);
   __14->SetBinContent(81,1);
   __14->SetEntries(1000);
   __14->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __14->GetXaxis()->CenterTitle(true);
   __14->GetXaxis()->SetLabelFont(42);
   __14->GetXaxis()->SetTitleSize(0.04);
   __14->GetXaxis()->SetTitleOffset(1.1);
   __14->GetXaxis()->SetTitleFont(42);
   __14->GetYaxis()->SetTitle("Trials");
   __14->GetYaxis()->CenterTitle(true);
   __14->GetYaxis()->SetNdivisions(4000510);
   __14->GetYaxis()->SetLabelFont(42);
   __14->GetYaxis()->SetTitleSize(0.04);
   __14->GetYaxis()->SetTitleOffset(1.1);
   __14->GetYaxis()->SetTitleFont(42);
   __14->GetZaxis()->SetLabelFont(42);
   __14->GetZaxis()->SetTitleOffset(1);
   __14->GetZaxis()->SetTitleFont(42);
   __14->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
