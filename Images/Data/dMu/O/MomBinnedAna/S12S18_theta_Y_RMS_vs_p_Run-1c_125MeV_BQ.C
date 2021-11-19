void S12S18_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.836,-3.733892,2728.07,44.29219);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[22] = {
   367.1623,
   457.1238,
   570.1453,
   694.7801,
   815.8457,
   938.5329,
   1062.817,
   1188.293,
   1312.63,
   1435.855,
   1561.931,
   1685.197,
   1810.575,
   1935.047,
   2060.265,
   2184.882,
   2309.029,
   2433.132,
   2559.653,
   2678.385,
   2780.888,
   2886.946};
   Double_t Graph0_fy1036[22] = {
   35.61384,
   31.29964,
   26.60718,
   23.32493,
   20.36711,
   18.7044,
   17.26388,
   16.07772,
   15.04382,
   14.0395,
   13.15058,
   12.01011,
   11.10175,
   10.18815,
   9.352664,
   8.565558,
   7.758195,
   6.93363,
   6.155707,
   5.468039,
   4.947125,
   4.681006};
   Double_t Graph0_fex1036[22] = {
   0.1665134,
   0.08299863,
   0.05531789,
   0.0382026,
   0.03068863,
   0.02772217,
   0.0262764,
   0.02551509,
   0.02594171,
   0.02610396,
   0.02813113,
   0.02965413,
   0.03349714,
   0.03670287,
   0.04213071,
   0.04660818,
   0.05393212,
   0.06499286,
   0.07753794,
   0.08964244,
   0.1821461,
   1.217803};
   Double_t Graph0_fey1036[22] = {
   0.6740019,
   0.06079698,
   0.02941243,
   0.01781342,
   0.01235424,
   0.01015841,
   0.008927808,
   0.008079193,
   0.007618905,
   0.007226074,
   0.007244826,
   0.007021629,
   0.007286363,
   0.007360701,
   0.007706449,
   0.007844806,
   0.008216592,
   0.00886284,
   0.009379559,
   0.01023791,
   0.02547156,
   0.4105514};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","S12S18",100,114.879,3140.281);
   Graph_Graph01036->SetMinimum(1.068716);
   Graph_Graph01036->SetMaximum(39.48958);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(21,79);
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01036->GetYaxis()->CenterTitle(true);
   Graph_Graph01036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
