void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 18:10:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(150,1);
   __14->SetBinContent(152,2);
   __14->SetBinContent(153,4);
   __14->SetBinContent(154,10);
   __14->SetBinContent(155,9);
   __14->SetBinContent(156,21);
   __14->SetBinContent(157,20);
   __14->SetBinContent(158,28);
   __14->SetBinContent(159,29);
   __14->SetBinContent(160,42);
   __14->SetBinContent(161,67);
   __14->SetBinContent(162,75);
   __14->SetBinContent(163,81);
   __14->SetBinContent(164,70);
   __14->SetBinContent(165,71);
   __14->SetBinContent(166,81);
   __14->SetBinContent(167,58);
   __14->SetBinContent(168,63);
   __14->SetBinContent(169,50);
   __14->SetBinContent(170,40);
   __14->SetBinContent(171,39);
   __14->SetBinContent(172,31);
   __14->SetBinContent(173,26);
   __14->SetBinContent(174,23);
   __14->SetBinContent(175,22);
   __14->SetBinContent(176,7);
   __14->SetBinContent(177,12);
   __14->SetBinContent(178,9);
   __14->SetBinContent(179,2);
   __14->SetBinContent(180,4);
   __14->SetBinContent(182,1);
   __14->SetBinContent(183,1);
   __14->SetBinContent(184,1);
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
