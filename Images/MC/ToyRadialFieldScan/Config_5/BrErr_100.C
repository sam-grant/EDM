void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,4);
   __11->SetBinContent(160,2);
   __11->SetBinContent(161,2);
   __11->SetBinContent(162,1);
   __11->SetBinContent(163,4);
   __11->SetBinContent(164,8);
   __11->SetBinContent(165,22);
   __11->SetBinContent(166,24);
   __11->SetBinContent(167,49);
   __11->SetBinContent(168,54);
   __11->SetBinContent(169,88);
   __11->SetBinContent(170,80);
   __11->SetBinContent(171,110);
   __11->SetBinContent(172,98);
   __11->SetBinContent(173,96);
   __11->SetBinContent(174,78);
   __11->SetBinContent(175,95);
   __11->SetBinContent(176,50);
   __11->SetBinContent(177,46);
   __11->SetBinContent(178,35);
   __11->SetBinContent(179,21);
   __11->SetBinContent(180,12);
   __11->SetBinContent(181,10);
   __11->SetBinContent(182,8);
   __11->SetBinContent(183,5);
   __11->SetBinContent(184,1);
   __11->SetBinContent(185,1);
   __11->SetEntries(1000);
   __11->SetLineWidth(3);
   __11->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
