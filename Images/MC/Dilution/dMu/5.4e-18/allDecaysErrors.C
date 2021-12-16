void allDecaysErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.3552,-0.003263085,3513.197,0.05141364);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1074[12] = {
   124.3988,
   374.0376,
   623.6681,
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214,
   2850.256};
   Double_t _fy1074[12] = {
   0.04230085,
   0.01695192,
   0.01249909,
   0.01022605,
   0.008802339,
   0.007839308,
   0.007137349,
   0.006625887,
   0.006244778,
   0.005982922,
   0.005849702,
   0.006016584};
   Double_t _fex1074[12] = {
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
   0,
   0};
   Double_t _fey1074[12] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,_fx1074,_fy1074,_fex1074,_fey1074);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1074 = new TH1F("Graph_Graph1074","",100,0,3122.841);
   Graph_Graph1074->SetMinimum(0.002204587);
   Graph_Graph1074->SetMaximum(0.04594597);
   Graph_Graph1074->SetDirectory(0);
   Graph_Graph1074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1074->SetLineColor(ci);
   Graph_Graph1074->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1074->GetXaxis()->CenterTitle(true);
   Graph_Graph1074->GetXaxis()->SetLabelFont(42);
   Graph_Graph1074->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1074->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1074->GetXaxis()->SetTitleFont(42);
   Graph_Graph1074->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1074->GetYaxis()->CenterTitle(true);
   Graph_Graph1074->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1074->GetYaxis()->SetLabelFont(42);
   Graph_Graph1074->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1074->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1074->GetYaxis()->SetTitleFont(42);
   Graph_Graph1074->GetZaxis()->SetLabelFont(42);
   Graph_Graph1074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1074);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
