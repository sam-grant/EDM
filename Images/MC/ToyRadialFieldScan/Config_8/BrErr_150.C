void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,4);
   __17->SetBinContent(193,1);
   __17->SetBinContent(194,1);
   __17->SetBinContent(195,5);
   __17->SetBinContent(196,9);
   __17->SetBinContent(197,10);
   __17->SetBinContent(198,20);
   __17->SetBinContent(199,19);
   __17->SetBinContent(200,23);
   __17->SetBinContent(201,37);
   __17->SetBinContent(202,43);
   __17->SetBinContent(203,73);
   __17->SetBinContent(204,67);
   __17->SetBinContent(205,66);
   __17->SetBinContent(206,95);
   __17->SetBinContent(207,77);
   __17->SetBinContent(208,93);
   __17->SetBinContent(209,66);
   __17->SetBinContent(210,59);
   __17->SetBinContent(211,52);
   __17->SetBinContent(212,43);
   __17->SetBinContent(213,38);
   __17->SetBinContent(214,33);
   __17->SetBinContent(215,15);
   __17->SetBinContent(216,19);
   __17->SetBinContent(217,17);
   __17->SetBinContent(218,6);
   __17->SetBinContent(219,2);
   __17->SetBinContent(220,6);
   __17->SetBinContent(221,2);
   __17->SetBinContent(222,3);
   __17->SetEntries(1000);
   __17->SetLineWidth(3);
   __17->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __17->GetXaxis()->CenterTitle(true);
   __17->GetXaxis()->SetLabelFont(42);
   __17->GetXaxis()->SetTitleSize(0.04);
   __17->GetXaxis()->SetTitleOffset(1.1);
   __17->GetXaxis()->SetTitleFont(42);
   __17->GetYaxis()->SetTitle("Trials");
   __17->GetYaxis()->CenterTitle(true);
   __17->GetYaxis()->SetNdivisions(4000510);
   __17->GetYaxis()->SetLabelFont(42);
   __17->GetYaxis()->SetTitleSize(0.04);
   __17->GetYaxis()->SetTitleOffset(1.1);
   __17->GetYaxis()->SetTitleFont(42);
   __17->GetZaxis()->SetLabelFont(42);
   __17->GetZaxis()->SetTitleOffset(1);
   __17->GetZaxis()->SetTitleFont(42);
   __17->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
