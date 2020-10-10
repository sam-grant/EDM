void dBr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 19:09:35 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,4);
   __11->SetBinContent(159,1);
   __11->SetBinContent(160,2);
   __11->SetBinContent(162,3);
   __11->SetBinContent(163,6);
   __11->SetBinContent(164,15);
   __11->SetBinContent(165,18);
   __11->SetBinContent(166,22);
   __11->SetBinContent(167,31);
   __11->SetBinContent(168,40);
   __11->SetBinContent(169,48);
   __11->SetBinContent(170,57);
   __11->SetBinContent(171,68);
   __11->SetBinContent(172,82);
   __11->SetBinContent(173,85);
   __11->SetBinContent(174,74);
   __11->SetBinContent(175,81);
   __11->SetBinContent(176,76);
   __11->SetBinContent(177,56);
   __11->SetBinContent(178,59);
   __11->SetBinContent(179,40);
   __11->SetBinContent(180,31);
   __11->SetBinContent(181,27);
   __11->SetBinContent(182,28);
   __11->SetBinContent(183,21);
   __11->SetBinContent(184,7);
   __11->SetBinContent(185,6);
   __11->SetBinContent(186,4);
   __11->SetBinContent(187,7);
   __11->SetBinContent(188,2);
   __11->SetBinContent(189,1);
   __11->SetBinContent(191,1);
   __11->SetBinContent(196,1);
   __11->SetEntries(1000);
   __11->SetLineWidth(3);
   __11->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Experiments");
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
