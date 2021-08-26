void A_vs_p_min_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:25:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-300.3,-0.04375,3318.7,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1017[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t A_vs_p_fy1017[15] = {
   0.2682828,
   0.259408,
   0.2788,
   0.2968845,
   0.2842694,
   0.2555409,
   0.2434984,
   0.2311678,
   0.2052998,
   0.1899048,
   0.1582805,
   0.1315404,
   0.1052953,
   0.08421221,
   0.03569371};
   Double_t A_vs_p_fex1017[15] = {
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
   Double_t A_vs_p_fey1017[15] = {
   0.04425029,
   0.04299008,
   0.04091591,
   0.03807935,
   0.03475645,
   0.03160618,
   0.02874893,
   0.02614695,
   0.0237322,
   0.02139355,
   0.01908225,
   0.01670836,
   0.01435348,
   0.01186254,
   0.009015002};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1017,A_vs_p_fy1017,A_vs_p_fex1017,A_vs_p_fey1017);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1017 = new TH1F("Graph_A_vs_p1017","",100,0,3080);
   Graph_A_vs_p1017->SetMinimum(0);
   Graph_A_vs_p1017->SetMaximum(0.35);
   Graph_A_vs_p1017->SetDirectory(0);
   Graph_A_vs_p1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1017->SetLineColor(ci);
   Graph_A_vs_p1017->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1017->GetXaxis()->SetRange(3,96);
   Graph_A_vs_p1017->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1017->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1017->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1017->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1017->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1017->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1017->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1017->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1017->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1017->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1017->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1017->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1017);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1018[12] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0S12S18_A_vs_p_fy1018[12] = {
   0.1367509,
   0.1364384,
   0.1441265,
   0.1270212,
   0.1448073,
   0.1299103,
   0.1153041,
   0.1403771,
   0.1124672,
   0.1058759,
   0.0978898,
   0.1044346};
   Double_t S0S12S18_A_vs_p_fex1018[12] = {
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
   Double_t S0S12S18_A_vs_p_fey1018[12] = {
   0.04073533,
   0.04072887,
   0.04028094,
   0.03735381,
   0.03375318,
   0.03044228,
   0.02756459,
   0.02496807,
   0.02259508,
   0.02035576,
   0.01814731,
   0.01594745};
   gre = new TGraphErrors(12,S0S12S18_A_vs_p_fx1018,S0S12S18_A_vs_p_fy1018,S0S12S18_A_vs_p_fex1018,S0S12S18_A_vs_p_fey1018);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1018 = new TH1F("Graph_S0S12S18_A_vs_p1018","S0S12S18",100,0,2420);
   Graph_S0S12S18_A_vs_p1018->SetMinimum(0.069276);
   Graph_S0S12S18_A_vs_p1018->SetMaximum(0.1948739);
   Graph_S0S12S18_A_vs_p1018->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1018->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1018->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_A_vs_p1018->GetXaxis()->SetRange(3,101);
   Graph_S0S12S18_A_vs_p1018->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1018->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1018->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1018->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1018->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1018->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1018->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1018->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1018->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1018->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1018->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1018->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1018->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1018);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","Reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
