void full_A_vs_p_truthAllDecays_WORLD_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 18 13:17:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-0.001026696,3605.25,0.009916697);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1050[15] = {
   0.0007396595,
   0.001303298,
   0.002179017,
   0.001734897,
   0.003047158,
   0.004387322,
   0.004097585,
   0.002962243,
   0.003669354,
   0.004758859,
   0.003634921,
   0.007009169,
   0.002869066,
   0.004135645,
   0.002221058};
   Double_t Graph0_fex1050[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1050[15] = {
   0.0005867742,
   0.0005762442,
   0.0005876977,
   0.0006024454,
   0.0006212835,
   0.0006456754,
   0.0006748557,
   0.00071394,
   0.0007623615,
   0.0008225402,
   0.0009027587,
   0.001017988,
   0.001187388,
   0.001481011,
   0.002145898};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p_{WORLD}  [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","",100,0,3300);
   Graph_Graph01050->SetMinimum(6.764338e-05);
   Graph_Graph01050->SetMaximum(0.008822357);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("e^{+} p_{WORLD}  [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01050->GetXaxis()->SetRange(0,97);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("A_{EDM} [rad]");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
