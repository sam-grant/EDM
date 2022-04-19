void S12_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.2217,-0.005848955,3371.796,0.09139039);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1006[11] = {
   451.7813,
   653.3899,
   880.2814,
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635,
   2614.361,
   2787.793};
   Double_t _fy1006[11] = {
   0.07518383,
   0.02527098,
   0.014521,
   0.01194085,
   0.01090847,
   0.0103576,
   0.01041588,
   0.01102604,
   0.01186605,
   0.01180639,
   0.02708239};
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
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,218.1801,3021.394);
   Graph_Graph1006->SetMinimum(0.00387498);
   Graph_Graph1006->SetMaximum(0.08166646);
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
