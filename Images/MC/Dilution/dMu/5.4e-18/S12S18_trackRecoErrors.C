void S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-131.9667,-0.004113949,3371.463,0.06428748);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1014[11] = {
   451.9382,
   653.3303,
   880.435,
   1123.103,
   1370.968,
   1620.027,
   1866.672,
   2115.073,
   2362.944,
   2613.205,
   2787.558};
   Double_t _fy1014[11] = {
   0.05288724,
   0.01769138,
   0.01014396,
   0.008331621,
   0.007649837,
   0.00728629,
   0.007362272,
   0.00779578,
   0.008424826,
   0.008325287,
   0.01944704};
   Double_t _fex1014[11] = {
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
   Double_t _fey1014[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,218.3762,3021.12);
   Graph_Graph1014->SetMinimum(0.002726194);
   Graph_Graph1014->SetMaximum(0.05744734);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1014->GetXaxis()->CenterTitle(true);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1014->GetYaxis()->CenterTitle(true);
   Graph_Graph1014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
