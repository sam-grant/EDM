void dBr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:32:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(143,1);
   __14->SetBinContent(145,2);
   __14->SetBinContent(146,8);
   __14->SetBinContent(147,8);
   __14->SetBinContent(148,12);
   __14->SetBinContent(149,22);
   __14->SetBinContent(150,33);
   __14->SetBinContent(151,62);
   __14->SetBinContent(152,55);
   __14->SetBinContent(153,86);
   __14->SetBinContent(154,96);
   __14->SetBinContent(155,90);
   __14->SetBinContent(156,101);
   __14->SetBinContent(157,87);
   __14->SetBinContent(158,80);
   __14->SetBinContent(159,68);
   __14->SetBinContent(160,57);
   __14->SetBinContent(161,43);
   __14->SetBinContent(162,31);
   __14->SetBinContent(163,15);
   __14->SetBinContent(164,10);
   __14->SetBinContent(165,17);
   __14->SetBinContent(166,8);
   __14->SetBinContent(167,2);
   __14->SetBinContent(168,4);
   __14->SetBinContent(171,1);
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
