void S0S12S18_full_delta_A_vs_p_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:50:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(45.03123,-0.2893978,3197.219,2.60458);
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
   1.801927,
   1.698383,
   1.570251,
   1.797485,
   1.731599,
   1.661874,
   1.636483,
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
   0.3027845,
   0.209785,
   0.1795717,
   0.173264,
   0.1919499,
   0.249621,
   0.4099788,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1138,Graph0_fy1138,Graph0_fex1138,Graph0_fey1138);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01138 = new TH1F("Graph_Graph01138","",100,0,3275);
   Graph_Graph01138->SetMinimum(0);
   Graph_Graph01138->SetMaximum(2.315182);
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
