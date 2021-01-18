void y_vs_theta_14()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 20:33:34 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.8606656,72.58339,7.745989,77.17845);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[24] = {
   0.2617994,
   0.5235988,
   0.7853982,
   1.047198,
   1.308997,
   1.570796,
   1.832596,
   2.094395,
   2.356194,
   2.617994,
   2.879793,
   3.141593,
   3.403392,
   3.665191,
   3.926991,
   4.18879,
   4.45059,
   4.712389,
   4.974188,
   5.235988,
   5.497787,
   5.759587,
   6.021386,
   6.283185};
   Double_t Graph0_fy1002[24] = {
   74.73789,
   74.39304,
   75.5055,
   74.31653,
   74.81645,
   76.21602,
   76.35856,
   75.16055,
   73.40182,
   74.5878,
   74.00215,
   74.77403,
   75.1978,
   74.39458,
   76.32629,
   74.66738,
   74.62175,
   74.53676,
   74.18842,
   74.68221,
   73.97336,
   73.87412,
   74.25561,
   75.13133};
   Double_t Graph0_fex1002[24] = {
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
   0,
   0};
   Double_t Graph0_fey1002[24] = {
   0.04861343,
   0.05006004,
   0.04933543,
   0.04931213,
   0.04342048,
   0.05019651,
   0.05404888,
   0.05450438,
   0.05259271,
   0.05504842,
   0.04829416,
   0.04989236,
   0.04393856,
   0.04893466,
   0.04645861,
   0.05150556,
   0.05267344,
   0.04986407,
   0.04704442,
   0.0538131,
   0.04888006,
   0.04788367,
   0.04642646,
   0.05659195};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];y [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","",100,0,6.885324);
   Graph_Graph01002->SetMinimum(73.04289);
   Graph_Graph01002->SetMaximum(76.71895);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph01002->GetXaxis()->CenterTitle(true);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetTitle("y [mm]");
   Graph_Graph01002->GetYaxis()->CenterTitle(true);
   Graph_Graph01002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
