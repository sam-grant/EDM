void S0S12S18_full_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:50:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(45.03123,12.46023,3197.219,13.17067);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1132[11] = {
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
   Double_t Graph0_fy1132[11] = {
   13.02971,
   12.99098,
   12.94321,
   12.87148,
   12.80869,
   12.7829,
   12.73904,
   12.68329,
   12.64873,
   12.62904,
   12.62607};
   Double_t Graph0_fex1132[11] = {
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
   Double_t Graph0_fey1132[11] = {
   0.022557,
   0.009100674,
   0.006329911,
   0.006112772,
   0.006497068,
   0.007183838,
   0.008346573,
   0.0102955,
   0.01325274,
   0.01668378,
   0.04743829};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1132,Graph0_fy1132,Graph0_fex1132,Graph0_fey1132);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01132 = new TH1F("Graph_Graph01132","",100,0,3275);
   Graph_Graph01132->SetMinimum(12.53127);
   Graph_Graph01132->SetMaximum(13.09963);
   Graph_Graph01132->SetDirectory(0);
   Graph_Graph01132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01132->SetLineColor(ci);
   Graph_Graph01132->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01132->GetXaxis()->SetRange(12,88);
   Graph_Graph01132->GetXaxis()->CenterTitle(true);
   Graph_Graph01132->GetXaxis()->SetLabelFont(42);
   Graph_Graph01132->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01132->GetXaxis()->SetTitleFont(42);
   Graph_Graph01132->GetYaxis()->SetTitle("#sigma_{y} [mm]");
   Graph_Graph01132->GetYaxis()->CenterTitle(true);
   Graph_Graph01132->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01132->GetYaxis()->SetLabelFont(42);
   Graph_Graph01132->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01132->GetYaxis()->SetTitleFont(42);
   Graph_Graph01132->GetZaxis()->SetLabelFont(42);
   Graph_Graph01132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01132);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
