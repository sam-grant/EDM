void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,10);
   __8->SetBinContent(61,1);
   __8->SetBinContent(62,7);
   __8->SetBinContent(63,18);
   __8->SetBinContent(64,51);
   __8->SetBinContent(65,114);
   __8->SetBinContent(66,161);
   __8->SetBinContent(67,152);
   __8->SetBinContent(68,189);
   __8->SetBinContent(69,127);
   __8->SetBinContent(70,90);
   __8->SetBinContent(71,54);
   __8->SetBinContent(72,25);
   __8->SetBinContent(73,7);
   __8->SetBinContent(74,1);
   __8->SetBinContent(75,1);
   __8->SetBinContent(76,1);
   __8->SetBinContent(77,1);
   __8->SetEntries(1000);
   __8->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
