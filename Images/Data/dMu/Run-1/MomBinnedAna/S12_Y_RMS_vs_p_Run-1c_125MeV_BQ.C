void S12_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,10.46133,2731.307,22.02057);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[22] = {
   367.0259,
   456.9839,
   570.3007,
   695.1502,
   816.0454,
   938.5665,
   1062.78,
   1188.405,
   1312.663,
   1436.01,
   1561.941,
   1685.362,
   1810.625,
   1935.174,
   2060.292,
   2185.104,
   2309.112,
   2432.873,
   2559.58,
   2678.767,
   2780.783,
   2890.136};
   Double_t Graph0_fy1021[22] = {
   14.26466,
   13.43957,
   12.89271,
   12.59348,
   12.59409,
   12.56552,
   12.538,
   12.51891,
   12.50086,
   12.5105,
   12.49329,
   12.49906,
   12.50077,
   12.4857,
   12.43758,
   12.41399,
   12.40579,
   12.40712,
   12.44746,
   12.61696,
   13.12566,
   18.13814};
   Double_t Graph0_fex1021[22] = {
   0.22722,
   0.108819,
   0.0727687,
   0.04940617,
   0.03927278,
   0.03533284,
   0.03345619,
   0.03240199,
   0.03270933,
   0.03281037,
   0.03524654,
   0.03696425,
   0.04148184,
   0.04530472,
   0.05170377,
   0.05715965,
   0.06567884,
   0.07884463,
   0.09497755,
   0.1087666,
   0.2163104,
   1.498282};
   Double_t Graph0_fey1021[22] = {
   0.3627913,
   0.03428931,
   0.01874522,
   0.0124601,
   0.009779555,
   0.008692078,
   0.008250029,
   0.007988395,
   0.007988955,
   0.008091729,
   0.008625193,
   0.009110446,
   0.01016232,
   0.01113679,
   0.01259466,
   0.01394621,
   0.01600874,
   0.01925792,
   0.02322376,
   0.02868113,
   0.08073397,
   1.955886};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","S12",100,114.3151,3144.118);
   Graph_Graph01021->SetMinimum(11.61725);
   Graph_Graph01021->SetMaximum(20.86464);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01021->GetXaxis()->SetRange(21,79);
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
