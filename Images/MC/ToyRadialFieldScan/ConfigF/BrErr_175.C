void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:16:58 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(125,1);
   __20->SetBinContent(129,2);
   __20->SetBinContent(130,4);
   __20->SetBinContent(131,8);
   __20->SetBinContent(132,10);
   __20->SetBinContent(133,14);
   __20->SetBinContent(134,35);
   __20->SetBinContent(135,49);
   __20->SetBinContent(136,72);
   __20->SetBinContent(137,84);
   __20->SetBinContent(138,92);
   __20->SetBinContent(139,112);
   __20->SetBinContent(140,109);
   __20->SetBinContent(141,93);
   __20->SetBinContent(142,82);
   __20->SetBinContent(143,64);
   __20->SetBinContent(144,43);
   __20->SetBinContent(145,50);
   __20->SetBinContent(146,29);
   __20->SetBinContent(147,20);
   __20->SetBinContent(148,8);
   __20->SetBinContent(149,8);
   __20->SetBinContent(150,8);
   __20->SetBinContent(151,2);
   __20->SetBinContent(152,1);
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
