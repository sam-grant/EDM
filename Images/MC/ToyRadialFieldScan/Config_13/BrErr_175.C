void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:18:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(103,2);
   __20->SetBinContent(104,7);
   __20->SetBinContent(105,16);
   __20->SetBinContent(106,40);
   __20->SetBinContent(107,82);
   __20->SetBinContent(108,116);
   __20->SetBinContent(109,150);
   __20->SetBinContent(110,147);
   __20->SetBinContent(111,168);
   __20->SetBinContent(112,115);
   __20->SetBinContent(113,83);
   __20->SetBinContent(114,46);
   __20->SetBinContent(115,15);
   __20->SetBinContent(116,7);
   __20->SetBinContent(117,4);
   __20->SetBinContent(118,1);
   __20->SetBinContent(119,1);
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
