void S0S12S18_full_delta_A_vs_p_trackTruth_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:32:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-0.58875,3254.625,5.69574);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1148[12] = {
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
   Double_t Graph0_fy1148[12] = {
   3.459124,
   0.09566396,
   0.1666993,
   1.780215,
   1.643343,
   1.673875,
   1.694625,
   1.754376,
   1.763032,
   1.57687,
   0.1081157,
   0.06028556};
   Double_t Graph0_fex1148[12] = {
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
   Double_t Graph0_fey1148[12] = {
   1.151515,
   0.04020116,
   0.0200705,
   0.1762706,
   0.1477352,
   0.1334135,
   0.1301071,
   0.1395641,
   0.1657894,
   0.2291146,
   0.01364419,
   0.01617547};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1148,Graph0_fy1148,Graph0_fex1148,Graph0_fey1148);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01148 = new TH1F("Graph_Graph01148","",100,0,3300);
   Graph_Graph01148->SetMinimum(0.03969908);
   Graph_Graph01148->SetMaximum(5.067291);
   Graph_Graph01148->SetDirectory(0);
   Graph_Graph01148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01148->SetLineColor(ci);
   Graph_Graph01148->GetXaxis()->SetTitle("p [MeV] in range: p #minus 125 < p < p #plus 125");
   Graph_Graph01148->GetXaxis()->SetRange(4,88);
   Graph_Graph01148->GetXaxis()->CenterTitle(true);
   Graph_Graph01148->GetXaxis()->SetLabelFont(42);
   Graph_Graph01148->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01148->GetXaxis()->SetTitleFont(42);
   Graph_Graph01148->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph01148->GetYaxis()->CenterTitle(true);
   Graph_Graph01148->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01148->GetYaxis()->SetLabelFont(42);
   Graph_Graph01148->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01148->GetYaxis()->SetTitleFont(42);
   Graph_Graph01148->GetZaxis()->SetLabelFont(42);
   Graph_Graph01148->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01148);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
