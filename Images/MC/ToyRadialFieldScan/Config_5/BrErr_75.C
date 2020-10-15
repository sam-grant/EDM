void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:36 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,4);
   __8->SetBinContent(184,3);
   __8->SetBinContent(185,2);
   __8->SetBinContent(186,5);
   __8->SetBinContent(187,5);
   __8->SetBinContent(188,10);
   __8->SetBinContent(189,26);
   __8->SetBinContent(190,33);
   __8->SetBinContent(191,33);
   __8->SetBinContent(192,54);
   __8->SetBinContent(193,57);
   __8->SetBinContent(194,61);
   __8->SetBinContent(195,74);
   __8->SetBinContent(196,71);
   __8->SetBinContent(197,70);
   __8->SetBinContent(198,74);
   __8->SetBinContent(199,70);
   __8->SetBinContent(200,61);
   __8->SetBinContent(201,59);
   __8->SetBinContent(202,58);
   __8->SetBinContent(203,43);
   __8->SetBinContent(204,30);
   __8->SetBinContent(205,26);
   __8->SetBinContent(206,22);
   __8->SetBinContent(207,18);
   __8->SetBinContent(208,11);
   __8->SetBinContent(209,7);
   __8->SetBinContent(210,8);
   __8->SetBinContent(211,5);
   __8->SetBinContent(212,1);
   __8->SetBinContent(213,1);
   __8->SetBinContent(214,1);
   __8->SetBinContent(220,1);
   __8->SetEntries(1000);
   __8->SetLineWidth(3);
   __8->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
