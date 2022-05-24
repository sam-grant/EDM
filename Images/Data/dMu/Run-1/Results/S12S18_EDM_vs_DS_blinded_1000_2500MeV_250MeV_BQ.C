void S12S18_EDM_vs_DS_blinded_1000_2500MeV_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 13 12:30:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.35,5.206497e-19,4.85,2.367778e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1003[4] = {
   1.127288e-18,
   1.052865e-18,
   1.842297e-18,
   1.564847e-18};
   Double_t _fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1003[4] = {
   2.609907e-19,
   2.243606e-19,
   2.176265e-19,
   1.781952e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0.8,4.4);
   Graph_Graph1003->SetMinimum(7.053626e-19);
   Graph_Graph1003->SetMaximum(2.183066e-18);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph1003->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph1003->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph1003->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph1003->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *pol01004 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);
   pol01004->SetLineColor(2);
   pol01004->SetLineWidth(2);
   pol01004->SetChisquare(8.320813);
   pol01004->SetNDF(3);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,1.441656e-18);
   pol01004->SetParError(0,1.071168e-19);
   pol01004->SetParLimits(0,0,0);
   pol01004->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01004);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
