void gr_AEDM_vs_p_thetaY_250()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 25 15:52:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->Range(498.445,-0.2046316,2741.917,0.2676514);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1001[11] = {
   451.788,
   653.3045,
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041,
   2614.061,
   2788.497};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1001[11] = {
   -0.01642866,
   0.1522908,
   0.1267047,
   0.1408857,
   0.1406499,
   0.1503519,
   0.1340422,
   0.1051794,
   0.06789184,
   0.09623208,
   -0.01463971};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1001[11] = {
   0.08198194,
   0.06912392,
   0.05013223,
   0.04895013,
   0.05223031,
   0.05773684,
   0.06715259,
   0.08317769,
   0.1068838,
   0.1311515,
   0.1590514};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1001[11] = {
   0.1094891,
   0.03664674,
   0.02107148,
   0.01730502,
   0.01585929,
   0.01509213,
   0.01512274,
   0.01582894,
   0.01681292,
   0.01667492,
   0.03763278};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1001,S0S12S18_AEDM_vs_p_thetaY_fy1001,S0S12S18_AEDM_vs_p_thetaY_fex1001,S0S12S18_AEDM_vs_p_thetaY_fey1001);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV]; A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1001 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1001","",100,218.0111,3022.351);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetMinimum(-0.1574033);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetMaximum(0.2204231);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetRange(19,82);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitle(" A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
