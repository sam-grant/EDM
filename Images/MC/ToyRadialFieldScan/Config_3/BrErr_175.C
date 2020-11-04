void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:11 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(178,1);
   __20->SetBinContent(179,5);
   __20->SetBinContent(180,1);
   __20->SetBinContent(181,7);
   __20->SetBinContent(182,14);
   __20->SetBinContent(183,27);
   __20->SetBinContent(184,59);
   __20->SetBinContent(185,75);
   __20->SetBinContent(186,124);
   __20->SetBinContent(187,134);
   __20->SetBinContent(188,158);
   __20->SetBinContent(189,105);
   __20->SetBinContent(190,94);
   __20->SetBinContent(191,76);
   __20->SetBinContent(192,53);
   __20->SetBinContent(193,39);
   __20->SetBinContent(194,13);
   __20->SetBinContent(195,8);
   __20->SetBinContent(196,4);
   __20->SetBinContent(197,1);
   __20->SetBinContent(198,2);
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
