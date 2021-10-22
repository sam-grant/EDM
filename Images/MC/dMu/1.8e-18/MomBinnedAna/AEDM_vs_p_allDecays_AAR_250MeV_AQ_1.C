void AEDM_vs_p_allDecays_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 21 14:35:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500.0625,-0.05479525,2744.438,0.2316826);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1008[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1008[12] = {
   0.1328,
   0.1226819,
   0.09630945,
   0.1110447,
   0.1087581,
   0.09373848,
   0.08554959,
   0.07877067,
   0.04932445,
   0.05793422,
   0.03705806,
   0.000229485};
   Double_t Graph0_fex1008[12] = {
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
   Double_t Graph0_fey1008[12] = {
   0.05113622,
   0.02050387,
   0.01512312,
   0.0123653,
   0.01064569,
   0.009474458,
   0.008629006,
   0.008010681,
   0.007550449,
   0.007239449,
   0.007071321,
   0.007278431};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01008 = new TH1F("Graph_Graph01008","",100,0,3150);
   Graph_Graph01008->SetMinimum(-0.02614747);
   Graph_Graph01008->SetMaximum(0.2030348);
   Graph_Graph01008->SetDirectory(0);
   Graph_Graph01008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01008->SetLineColor(ci);
   Graph_Graph01008->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01008->GetXaxis()->SetRange(24,80);
   Graph_Graph01008->GetXaxis()->CenterTitle(true);
   Graph_Graph01008->GetXaxis()->SetLabelFont(42);
   Graph_Graph01008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01008->GetXaxis()->SetTitleFont(42);
   Graph_Graph01008->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01008->GetYaxis()->CenterTitle(true);
   Graph_Graph01008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01008->GetYaxis()->SetLabelFont(42);
   Graph_Graph01008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01008->GetYaxis()->SetTitleFont(42);
   Graph_Graph01008->GetZaxis()->SetLabelFont(42);
   Graph_Graph01008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01008);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
