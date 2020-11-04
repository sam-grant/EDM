void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(145,1);
   __20->SetBinContent(146,2);
   __20->SetBinContent(147,2);
   __20->SetBinContent(149,3);
   __20->SetBinContent(150,6);
   __20->SetBinContent(151,12);
   __20->SetBinContent(152,18);
   __20->SetBinContent(153,27);
   __20->SetBinContent(154,43);
   __20->SetBinContent(155,69);
   __20->SetBinContent(156,47);
   __20->SetBinContent(157,78);
   __20->SetBinContent(158,83);
   __20->SetBinContent(159,87);
   __20->SetBinContent(160,95);
   __20->SetBinContent(161,89);
   __20->SetBinContent(162,62);
   __20->SetBinContent(163,70);
   __20->SetBinContent(164,68);
   __20->SetBinContent(165,34);
   __20->SetBinContent(166,41);
   __20->SetBinContent(167,24);
   __20->SetBinContent(168,10);
   __20->SetBinContent(169,12);
   __20->SetBinContent(170,4);
   __20->SetBinContent(171,7);
   __20->SetBinContent(172,4);
   __20->SetBinContent(173,1);
   __20->SetBinContent(175,1);
   __20->SetEntries(1000);
   __20->SetLineWidth(3);
   __20->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Trials");
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
