void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",1000,0,4);
   __5->SetBinContent(191,3);
   __5->SetBinContent(192,2);
   __5->SetBinContent(193,7);
   __5->SetBinContent(194,11);
   __5->SetBinContent(195,8);
   __5->SetBinContent(196,16);
   __5->SetBinContent(197,26);
   __5->SetBinContent(198,31);
   __5->SetBinContent(199,59);
   __5->SetBinContent(200,59);
   __5->SetBinContent(201,59);
   __5->SetBinContent(202,55);
   __5->SetBinContent(203,77);
   __5->SetBinContent(204,77);
   __5->SetBinContent(205,70);
   __5->SetBinContent(206,73);
   __5->SetBinContent(207,69);
   __5->SetBinContent(208,66);
   __5->SetBinContent(209,53);
   __5->SetBinContent(210,44);
   __5->SetBinContent(211,34);
   __5->SetBinContent(212,34);
   __5->SetBinContent(213,15);
   __5->SetBinContent(214,19);
   __5->SetBinContent(215,15);
   __5->SetBinContent(216,3);
   __5->SetBinContent(217,5);
   __5->SetBinContent(218,4);
   __5->SetBinContent(219,2);
   __5->SetBinContent(220,3);
   __5->SetBinContent(223,1);
   __5->SetEntries(1000);
   __5->SetLineWidth(3);
   __5->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
