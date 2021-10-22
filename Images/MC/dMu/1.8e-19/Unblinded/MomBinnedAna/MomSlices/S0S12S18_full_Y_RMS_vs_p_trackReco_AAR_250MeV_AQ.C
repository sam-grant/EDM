void S0S12S18_full_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 27 11:12:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,10.09555,3254.625,26.79321);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1142[12] = {
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
   Double_t Graph0_fy1142[12] = {
   23.73151,
   13.47735,
   13.12029,
   12.95561,
   12.88455,
   12.90415,
   12.97066,
   13.04668,
   13.06204,
   13.15836,
   13.26016,
   13.01322};
   Double_t Graph0_fex1142[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1142[12] = {
   0.2787509,
   0.009819606,
   0.005771702,
   0.005685996,
   0.006057862,
   0.006567376,
   0.007285627,
   0.008390832,
   0.01001401,
   0.01278451,
   0.01687773,
   0.02713775};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1142,Graph0_fy1142,Graph0_fex1142,Graph0_fey1142);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01142 = new TH1F("Graph_Graph01142","",100,0,3300);
   Graph_Graph01142->SetMinimum(11.76532);
   Graph_Graph01142->SetMaximum(25.12344);
   Graph_Graph01142->SetDirectory(0);
   Graph_Graph01142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01142->SetLineColor(ci);
   Graph_Graph01142->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01142->GetXaxis()->SetRange(4,88);
   Graph_Graph01142->GetXaxis()->CenterTitle(true);
   Graph_Graph01142->GetXaxis()->SetLabelFont(42);
   Graph_Graph01142->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01142->GetXaxis()->SetTitleFont(42);
   Graph_Graph01142->GetYaxis()->SetTitle("#sigma_{y} [mm]");
   Graph_Graph01142->GetYaxis()->CenterTitle(true);
   Graph_Graph01142->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01142->GetYaxis()->SetLabelFont(42);
   Graph_Graph01142->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01142->GetYaxis()->SetTitleFont(42);
   Graph_Graph01142->GetZaxis()->SetLabelFont(42);
   Graph_Graph01142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01142);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
