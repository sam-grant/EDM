void S0S12S18_full_AOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 27 11:12:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-9.540136e-05,3254.625,0.0002676973);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1147[12] = {
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
   Double_t Graph0_fy1147[12] = {
   -6.725589e-06,
   3.020913e-05,
   1.973399e-05,
   4.156464e-06,
   -2.608347e-05,
   4.152229e-05,
   6.801238e-05,
   -2.911501e-05,
   4.749248e-05,
   8.920423e-05,
   -3.488492e-05,
   0.000161804};
   Double_t Graph0_fex1147[12] = {
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
   Double_t Graph0_fey1147[12] = {
   -0.0007139029,
   4.718841e-05,
   3.23979e-05,
   2.262283e-05,
   -2.622609e-05,
   5.774911e-05,
   5.488633e-05,
   -7.725307e-05,
   6.574454e-05,
   5.812017e-05,
   -0.000144729,
   4.53768e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1147,Graph0_fy1147,Graph0_fex1147,Graph0_fey1147);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01147 = new TH1F("Graph_Graph01147","",100,0,3300);
   Graph_Graph01147->SetMinimum(-5.90915e-05);
   Graph_Graph01147->SetMaximum(0.0002313874);
   Graph_Graph01147->SetDirectory(0);
   Graph_Graph01147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01147->SetLineColor(ci);
   Graph_Graph01147->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01147->GetXaxis()->SetRange(4,88);
   Graph_Graph01147->GetXaxis()->CenterTitle(true);
   Graph_Graph01147->GetXaxis()->SetLabelFont(42);
   Graph_Graph01147->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01147->GetXaxis()->SetTitleFont(42);
   Graph_Graph01147->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01147->GetYaxis()->CenterTitle(true);
   Graph_Graph01147->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01147->GetYaxis()->SetLabelFont(42);
   Graph_Graph01147->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01147->GetYaxis()->SetTitleFont(42);
   Graph_Graph01147->GetZaxis()->SetLabelFont(42);
   Graph_Graph01147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01147);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
