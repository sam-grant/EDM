void S0S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 13:23:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.2256,-0.004021617,3372.283,0.06311682);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1018[11] = {
   451.8592,
   653.3031,
   880.3064,
   1123.077,
   1371.079,
   1620.197,
   1866.983,
   2115.419,
   2362.996,
   2613.822,
   2788.198};
   Double_t _fy1018[11] = {
   0.05192708,
   0.01739844,
   0.00999607,
   0.008210948,
   0.007529262,
   0.007168123,
   0.007193737,
   0.00754926,
   0.008061344,
   0.00798505,
   0.01817734};
   Double_t _fex1018[11] = {
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
   Double_t _fey1018[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1018,_fy1018,_fex1018,_fey1018);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,218.2253,3021.832);
   Graph_Graph1018->SetMinimum(0.002692227);
   Graph_Graph1018->SetMaximum(0.05640298);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1018->GetXaxis()->CenterTitle(true);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1018->GetYaxis()->CenterTitle(true);
   Graph_Graph1018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
