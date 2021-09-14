void S0S12S18_full_delta_A_vs_p_trackTruth_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:49:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(45.03123,-0.2914923,3197.219,2.62343);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1138[11] = {
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
   Double_t Graph0_fy1138[11] = {
   0,
   0,
   1.810198,
   1.729132,
   1.52738,
   1.815219,
   1.756516,
   1.612172,
   1.65893,
   0,
   0};
   Double_t Graph0_fex1138[11] = {
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
   Double_t Graph0_fey1138[11] = {
   0,
   0,
   0.3097462,
   0.2108219,
   0.1789957,
   0.1724806,
   0.1916217,
   0.2518753,
   0.4286819,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1138,Graph0_fy1138,Graph0_fex1138,Graph0_fey1138);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01138 = new TH1F("Graph_Graph01138","",100,0,3275);
   Graph_Graph01138->SetMinimum(0);
   Graph_Graph01138->SetMaximum(2.331938);
   Graph_Graph01138->SetDirectory(0);
   Graph_Graph01138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01138->SetLineColor(ci);
   Graph_Graph01138->GetXaxis()->SetTitle("p [MeV] in range: p #minus 125 < p < p #plus 125");
   Graph_Graph01138->GetXaxis()->SetRange(12,88);
   Graph_Graph01138->GetXaxis()->CenterTitle(true);
   Graph_Graph01138->GetXaxis()->SetLabelFont(42);
   Graph_Graph01138->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01138->GetXaxis()->SetTitleFont(42);
   Graph_Graph01138->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph01138->GetYaxis()->CenterTitle(true);
   Graph_Graph01138->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01138->GetYaxis()->SetLabelFont(42);
   Graph_Graph01138->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01138->GetYaxis()->SetTitleFont(42);
   Graph_Graph01138->GetZaxis()->SetLabelFont(42);
   Graph_Graph01138->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01138->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01138);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
