void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,4);
   __11->SetBinContent(233,1);
   __11->SetBinContent(234,1);
   __11->SetBinContent(235,1);
   __11->SetBinContent(236,5);
   __11->SetBinContent(237,5);
   __11->SetBinContent(238,6);
   __11->SetBinContent(239,10);
   __11->SetBinContent(240,17);
   __11->SetBinContent(241,17);
   __11->SetBinContent(242,36);
   __11->SetBinContent(243,32);
   __11->SetBinContent(244,58);
   __11->SetBinContent(245,60);
   __11->SetBinContent(246,70);
   __11->SetBinContent(247,78);
   __11->SetBinContent(248,73);
   __11->SetBinContent(249,82);
   __11->SetBinContent(250,75);
   __11->SetBinContent(251,72);
   __11->SetBinContent(252,67);
   __11->SetBinContent(253,55);
   __11->SetBinContent(254,49);
   __11->SetBinContent(255,37);
   __11->SetBinContent(256,25);
   __11->SetBinContent(257,20);
   __11->SetBinContent(258,15);
   __11->SetBinContent(259,9);
   __11->SetBinContent(260,7);
   __11->SetBinContent(261,10);
   __11->SetBinContent(262,3);
   __11->SetBinContent(263,1);
   __11->SetBinContent(264,1);
   __11->SetBinContent(265,2);
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
