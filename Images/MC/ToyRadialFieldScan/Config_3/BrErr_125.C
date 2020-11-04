void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:10 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(211,5);
   __14->SetBinContent(212,3);
   __14->SetBinContent(213,7);
   __14->SetBinContent(214,11);
   __14->SetBinContent(215,19);
   __14->SetBinContent(216,34);
   __14->SetBinContent(217,31);
   __14->SetBinContent(218,33);
   __14->SetBinContent(219,76);
   __14->SetBinContent(220,96);
   __14->SetBinContent(221,91);
   __14->SetBinContent(222,105);
   __14->SetBinContent(223,99);
   __14->SetBinContent(224,81);
   __14->SetBinContent(225,76);
   __14->SetBinContent(226,56);
   __14->SetBinContent(227,51);
   __14->SetBinContent(228,42);
   __14->SetBinContent(229,32);
   __14->SetBinContent(230,21);
   __14->SetBinContent(231,16);
   __14->SetBinContent(232,8);
   __14->SetBinContent(233,3);
   __14->SetBinContent(234,2);
   __14->SetBinContent(235,1);
   __14->SetBinContent(241,1);
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
