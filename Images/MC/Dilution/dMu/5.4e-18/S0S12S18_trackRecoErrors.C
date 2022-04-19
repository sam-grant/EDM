void S0S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.2157,-0.003732097,3372.167,0.05835279);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1018[11] = {
   451.8482,
   653.332,
   880.3222,
   1123.094,
   1371.099,
   1620.134,
   1866.992,
   2115.379,
   2362.982,
   2613.714,
   2788.104};
   Double_t _fy1018[11] = {
   0.04800531,
   0.0160637,
   0.009223956,
   0.007576533,
   0.006947677,
   0.006615384,
   0.00665072,
   0.007001221,
   0.007490089,
   0.007414273,
   0.01699113};
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
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,218.2226,3021.729);
   Graph_Graph1018->SetMinimum(0.002476392);
   Graph_Graph1018->SetMaximum(0.0521443);
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
