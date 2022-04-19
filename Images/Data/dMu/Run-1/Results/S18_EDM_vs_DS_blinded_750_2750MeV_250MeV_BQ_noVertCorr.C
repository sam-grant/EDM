void S18_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:23:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.361478e-19,4.75,2.76618e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1020[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1020[4] = {
   7.186869e-19,
   1.447963e-18,
   2.016417e-18,
   1.681319e-18};
   Double_t _fex1020[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1020[4] = {
   3.711133e-19,
   3.186718e-19,
   2.660418e-19,
   1.976582e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,0.7,4.3);
   Graph_Graph1020->SetMinimum(1.54085e-19);
   Graph_Graph1020->SetMaximum(2.475948e-18);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1020->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1020->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1020->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1020->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1020->GetXaxis()->CenterTitle(true);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->CenterTitle(true);
   Graph_Graph1020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
