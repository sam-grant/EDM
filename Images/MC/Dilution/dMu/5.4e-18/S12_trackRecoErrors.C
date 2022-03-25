void S12_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.135,-0.00580365,3371.681,0.0905441);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1006[11] = {
   451.8343,
   653.3487,
   880.3346,
   1123.176,
   1371.112,
   1620.329,
   1866.848,
   2115.055,
   2362.648,
   2614.356,
   2787.711};
   Double_t _fy1006[11] = {
   0.07448614,
   0.02500426,
   0.01438454,
   0.01182759,
   0.01079981,
   0.01025431,
   0.01031118,
   0.01091718,
   0.01175811,
   0.01168737,
   0.02673634};
   Double_t _fex1006[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1006[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,218.2466,3021.299);
   Graph_Graph1006->SetMinimum(0.003831126);
   Graph_Graph1006->SetMaximum(0.08090933);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1006->GetXaxis()->CenterTitle(true);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1006->GetYaxis()->CenterTitle(true);
   Graph_Graph1006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
