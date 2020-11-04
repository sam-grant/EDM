void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:18:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(121,1);
   __14->SetBinContent(122,5);
   __14->SetBinContent(123,12);
   __14->SetBinContent(124,21);
   __14->SetBinContent(125,32);
   __14->SetBinContent(126,48);
   __14->SetBinContent(127,74);
   __14->SetBinContent(128,115);
   __14->SetBinContent(129,126);
   __14->SetBinContent(130,116);
   __14->SetBinContent(131,108);
   __14->SetBinContent(132,98);
   __14->SetBinContent(133,75);
   __14->SetBinContent(134,53);
   __14->SetBinContent(135,42);
   __14->SetBinContent(136,37);
   __14->SetBinContent(137,16);
   __14->SetBinContent(138,12);
   __14->SetBinContent(139,6);
   __14->SetBinContent(141,3);
   __14->SetEntries(1000);
   __14->SetLineWidth(3);
   __14->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
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
