void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(175,1);
   __20->SetBinContent(177,4);
   __20->SetBinContent(178,1);
   __20->SetBinContent(179,2);
   __20->SetBinContent(180,5);
   __20->SetBinContent(181,6);
   __20->SetBinContent(182,8);
   __20->SetBinContent(183,16);
   __20->SetBinContent(184,16);
   __20->SetBinContent(185,36);
   __20->SetBinContent(186,36);
   __20->SetBinContent(187,47);
   __20->SetBinContent(188,61);
   __20->SetBinContent(189,73);
   __20->SetBinContent(190,71);
   __20->SetBinContent(191,81);
   __20->SetBinContent(192,86);
   __20->SetBinContent(193,80);
   __20->SetBinContent(194,59);
   __20->SetBinContent(195,64);
   __20->SetBinContent(196,40);
   __20->SetBinContent(197,43);
   __20->SetBinContent(198,38);
   __20->SetBinContent(199,29);
   __20->SetBinContent(200,29);
   __20->SetBinContent(201,26);
   __20->SetBinContent(202,14);
   __20->SetBinContent(203,10);
   __20->SetBinContent(204,7);
   __20->SetBinContent(205,4);
   __20->SetBinContent(206,3);
   __20->SetBinContent(209,3);
   __20->SetBinContent(211,1);
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
