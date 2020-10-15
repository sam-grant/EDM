void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(144,1);
   __14->SetBinContent(145,1);
   __14->SetBinContent(146,4);
   __14->SetBinContent(147,8);
   __14->SetBinContent(148,16);
   __14->SetBinContent(149,41);
   __14->SetBinContent(150,55);
   __14->SetBinContent(151,98);
   __14->SetBinContent(152,125);
   __14->SetBinContent(153,114);
   __14->SetBinContent(154,121);
   __14->SetBinContent(155,102);
   __14->SetBinContent(156,103);
   __14->SetBinContent(157,82);
   __14->SetBinContent(158,56);
   __14->SetBinContent(159,30);
   __14->SetBinContent(160,24);
   __14->SetBinContent(161,10);
   __14->SetBinContent(162,5);
   __14->SetBinContent(163,3);
   __14->SetBinContent(165,1);
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
