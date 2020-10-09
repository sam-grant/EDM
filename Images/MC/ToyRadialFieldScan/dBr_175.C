void dBr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:33:01 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(120,1);
   __20->SetBinContent(122,1);
   __20->SetBinContent(123,3);
   __20->SetBinContent(124,8);
   __20->SetBinContent(125,14);
   __20->SetBinContent(126,31);
   __20->SetBinContent(127,44);
   __20->SetBinContent(128,84);
   __20->SetBinContent(129,95);
   __20->SetBinContent(130,120);
   __20->SetBinContent(131,129);
   __20->SetBinContent(132,115);
   __20->SetBinContent(133,109);
   __20->SetBinContent(134,91);
   __20->SetBinContent(135,73);
   __20->SetBinContent(136,30);
   __20->SetBinContent(137,26);
   __20->SetBinContent(138,15);
   __20->SetBinContent(139,4);
   __20->SetBinContent(140,5);
   __20->SetBinContent(141,1);
   __20->SetBinContent(142,1);
   __20->SetEntries(1000);
   __20->SetLineWidth(3);
   __20->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Experiments");
   __20->GetYaxis()->CenterTitle(true);
   __20->GetYaxis()->SetNdivisions(4000510);
   __20->GetYaxis()->SetLabelFont(42);
   __20->GetYaxis()->SetTitleSize(0.04);
   __20->GetYaxis()->SetTitleOffset(1.1);
   __20->GetYaxis()->SetTitleFont(42);
   __20->GetZaxis()->SetLabelFont(42);
   __20->GetZaxis()->SetTitleOffset(1);
   __20->GetZaxis()->SetTitleFont(42);
   __20->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
