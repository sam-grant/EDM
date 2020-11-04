void BrErr_275()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__32 = new TH1D("__32","Number of sub-runs: 275",1000,0,4);
   __32->SetBinContent(222,1);
   __32->SetBinContent(223,1);
   __32->SetBinContent(226,3);
   __32->SetBinContent(227,3);
   __32->SetBinContent(228,7);
   __32->SetBinContent(229,10);
   __32->SetBinContent(230,12);
   __32->SetBinContent(231,26);
   __32->SetBinContent(232,39);
   __32->SetBinContent(233,45);
   __32->SetBinContent(234,54);
   __32->SetBinContent(235,85);
   __32->SetBinContent(236,81);
   __32->SetBinContent(237,76);
   __32->SetBinContent(238,83);
   __32->SetBinContent(239,76);
   __32->SetBinContent(240,81);
   __32->SetBinContent(241,67);
   __32->SetBinContent(242,76);
   __32->SetBinContent(243,49);
   __32->SetBinContent(244,35);
   __32->SetBinContent(245,29);
   __32->SetBinContent(246,24);
   __32->SetBinContent(247,16);
   __32->SetBinContent(248,9);
   __32->SetBinContent(249,6);
   __32->SetBinContent(250,2);
   __32->SetBinContent(251,1);
   __32->SetBinContent(252,1);
   __32->SetBinContent(253,1);
   __32->SetBinContent(254,1);
   __32->SetEntries(1000);
   __32->SetLineWidth(3);
   __32->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __32->GetXaxis()->CenterTitle(true);
   __32->GetXaxis()->SetLabelFont(42);
   __32->GetXaxis()->SetTitleSize(0.04);
   __32->GetXaxis()->SetTitleOffset(1.1);
   __32->GetXaxis()->SetTitleFont(42);
   __32->GetYaxis()->SetTitle("Trials");
   __32->GetYaxis()->CenterTitle(true);
   __32->GetYaxis()->SetNdivisions(4000510);
   __32->GetYaxis()->SetLabelFont(42);
   __32->GetYaxis()->SetTitleSize(0.04);
   __32->GetYaxis()->SetTitleOffset(1.1);
   __32->GetYaxis()->SetTitleFont(42);
   __32->GetZaxis()->SetLabelFont(42);
   __32->GetZaxis()->SetTitleOffset(1);
   __32->GetZaxis()->SetTitleFont(42);
   __32->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
