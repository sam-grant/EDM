void S12_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:38:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.1357,-0.006616715,3371.53,0.1036366);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1006[11] = {
   451.8085,
   653.3576,
   880.334,
   1123.155,
   1371.138,
   1620.288,
   1866.777,
   2114.885,
   2362.581,
   2614.18,
   2787.586};
   Double_t _fy1006[11] = {
   0.08526107,
   0.02864423,
   0.01648357,
   0.01354389,
   0.01238096,
   0.01175884,
   0.01182052,
   0.01249912,
   0.01346099,
   0.01341857,
   0.03084393};
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
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,218.2308,3021.163);
   Graph_Graph1006->SetMinimum(0.004408621);
   Graph_Graph1006->SetMaximum(0.0926113);
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
