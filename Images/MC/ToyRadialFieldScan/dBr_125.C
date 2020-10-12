void dBr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 12:24:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(141,1);
   __14->SetBinContent(144,6);
   __14->SetBinContent(145,2);
   __14->SetBinContent(146,8);
   __14->SetBinContent(147,7);
   __14->SetBinContent(148,24);
   __14->SetBinContent(149,23);
   __14->SetBinContent(150,43);
   __14->SetBinContent(151,56);
   __14->SetBinContent(152,63);
   __14->SetBinContent(153,77);
   __14->SetBinContent(154,103);
   __14->SetBinContent(155,87);
   __14->SetBinContent(156,83);
   __14->SetBinContent(157,98);
   __14->SetBinContent(158,92);
   __14->SetBinContent(159,53);
   __14->SetBinContent(160,56);
   __14->SetBinContent(161,39);
   __14->SetBinContent(162,29);
   __14->SetBinContent(163,17);
   __14->SetBinContent(164,17);
   __14->SetBinContent(165,9);
   __14->SetBinContent(167,2);
   __14->SetBinContent(168,3);
   __14->SetBinContent(169,1);
   __14->SetBinContent(174,1);
   __14->SetEntries(1000);
   __14->SetLineWidth(3);
   __14->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __14->GetXaxis()->CenterTitle(true);
   __14->GetXaxis()->SetLabelFont(42);
   __14->GetXaxis()->SetTitleSize(0.04);
   __14->GetXaxis()->SetTitleOffset(1.1);
   __14->GetXaxis()->SetTitleFont(42);
   __14->GetYaxis()->SetTitle("Experiments");
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
