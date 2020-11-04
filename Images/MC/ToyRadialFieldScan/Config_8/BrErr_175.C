void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(179,2);
   __20->SetBinContent(180,3);
   __20->SetBinContent(181,2);
   __20->SetBinContent(182,7);
   __20->SetBinContent(183,8);
   __20->SetBinContent(184,15);
   __20->SetBinContent(185,20);
   __20->SetBinContent(186,48);
   __20->SetBinContent(187,69);
   __20->SetBinContent(188,67);
   __20->SetBinContent(189,91);
   __20->SetBinContent(190,81);
   __20->SetBinContent(191,92);
   __20->SetBinContent(192,86);
   __20->SetBinContent(193,88);
   __20->SetBinContent(194,88);
   __20->SetBinContent(195,47);
   __20->SetBinContent(196,47);
   __20->SetBinContent(197,42);
   __20->SetBinContent(198,34);
   __20->SetBinContent(199,25);
   __20->SetBinContent(200,20);
   __20->SetBinContent(201,6);
   __20->SetBinContent(202,7);
   __20->SetBinContent(203,1);
   __20->SetBinContent(204,1);
   __20->SetBinContent(205,1);
   __20->SetBinContent(206,1);
   __20->SetBinContent(207,1);
   __20->SetEntries(1000);
   __20->SetLineWidth(3);
   __20->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Trials");
   __20->GetYaxis()->CenterTitle(true);
   __20->GetYaxis()->SetNdivisions(4000510);
   __20->GetYaxis()->SetLabelFont(42);
   __20->GetYaxis()->SetTitleSize(0.04);
   __20->GetYaxis()->SetTitleOffset(1.1);
   __20->GetYaxis()->SetTitleFont(42);
   __20->GetZaxis()->SetLabelFont(42);
   __20->GetZaxis()->SetTitleOffset(1);
   __20->GetZaxis()->SetTitleFont(42);
   __20->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
