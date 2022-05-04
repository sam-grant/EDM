void S18_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noAccCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 29 14:17:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.173551e-19,4.75,1.273069e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1029[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1029[4] = {
   2.89737e-19,
   6.232289e-19,
   9.143324e-19,
   7.108965e-19};
   Double_t _fex1029[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1029[4] = {
   1.753546e-19,
   1.511935e-19,
   1.269996e-19,
   9.550751e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,0.7,4.3);
   Graph_Graph1029->SetMinimum(2.168738e-20);
   Graph_Graph1029->SetMaximum(1.134027e-18);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1029->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1029->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1029->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1029->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1029->GetXaxis()->CenterTitle(true);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->CenterTitle(true);
   Graph_Graph1029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
