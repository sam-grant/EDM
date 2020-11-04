void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(211,2);
   __14->SetBinContent(212,4);
   __14->SetBinContent(213,4);
   __14->SetBinContent(214,10);
   __14->SetBinContent(215,26);
   __14->SetBinContent(216,27);
   __14->SetBinContent(217,31);
   __14->SetBinContent(218,48);
   __14->SetBinContent(219,64);
   __14->SetBinContent(220,81);
   __14->SetBinContent(221,94);
   __14->SetBinContent(222,90);
   __14->SetBinContent(223,113);
   __14->SetBinContent(224,85);
   __14->SetBinContent(225,78);
   __14->SetBinContent(226,66);
   __14->SetBinContent(227,51);
   __14->SetBinContent(228,32);
   __14->SetBinContent(229,42);
   __14->SetBinContent(230,18);
   __14->SetBinContent(231,13);
   __14->SetBinContent(232,11);
   __14->SetBinContent(233,5);
   __14->SetBinContent(234,1);
   __14->SetBinContent(235,1);
   __14->SetBinContent(236,1);
   __14->SetBinContent(237,1);
   __14->SetBinContent(239,1);
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
