void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:49:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(151,2);
   __14->SetBinContent(152,5);
   __14->SetBinContent(153,5);
   __14->SetBinContent(154,9);
   __14->SetBinContent(155,13);
   __14->SetBinContent(156,18);
   __14->SetBinContent(157,16);
   __14->SetBinContent(158,30);
   __14->SetBinContent(159,40);
   __14->SetBinContent(160,52);
   __14->SetBinContent(161,62);
   __14->SetBinContent(162,72);
   __14->SetBinContent(163,63);
   __14->SetBinContent(164,85);
   __14->SetBinContent(165,77);
   __14->SetBinContent(166,68);
   __14->SetBinContent(167,56);
   __14->SetBinContent(168,69);
   __14->SetBinContent(169,55);
   __14->SetBinContent(170,46);
   __14->SetBinContent(171,44);
   __14->SetBinContent(172,22);
   __14->SetBinContent(173,24);
   __14->SetBinContent(174,22);
   __14->SetBinContent(175,13);
   __14->SetBinContent(176,12);
   __14->SetBinContent(177,6);
   __14->SetBinContent(178,5);
   __14->SetBinContent(179,3);
   __14->SetBinContent(180,3);
   __14->SetBinContent(182,1);
   __14->SetBinContent(184,1);
   __14->SetBinContent(186,1);
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
