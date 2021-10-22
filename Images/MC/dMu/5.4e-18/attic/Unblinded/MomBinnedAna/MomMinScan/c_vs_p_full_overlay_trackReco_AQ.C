void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:31:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.675,3468.85,0.07500001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1558[15] = {
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
   Double_t S0_c_vs_p_fy1558[15] = {
   -6.284034,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1558[15] = {
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
   Double_t S0_c_vs_p_fey1558[15] = {
   2.052493e-06,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1558,S0_c_vs_p_fy1558,S0_c_vs_p_fex1558,S0_c_vs_p_fey1558);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1558 = new TH1F("Graph_S0_c_vs_p1558","",100,0,3080);
   Graph_S0_c_vs_p1558->SetMinimum(-0.6);
   Graph_S0_c_vs_p1558->SetMaximum(0);
   Graph_S0_c_vs_p1558->SetDirectory(0);
   Graph_S0_c_vs_p1558->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1558->SetLineColor(ci);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_c_vs_p1558->GetXaxis()->SetRange(0,100);
   Graph_S0_c_vs_p1558->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1558->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1558->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1558->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1558->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1558->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1558->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1558->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1558->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1558->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1558);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1559[15] = {
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
   Double_t S12_c_vs_p_fy1559[15] = {
   0.466629,
   0.4664451,
   0.4350502,
   0.3203201,
   0.2548309,
   0.2141474,
   0.1972477,
   0.1813073,
   0.1651184,
   0.1380458,
   0.1241072,
   0.1340496,
   0.1239157,
   0.1231342,
   0.04601486};
   Double_t S12_c_vs_p_fex1559[15] = {
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
   Double_t S12_c_vs_p_fey1559[15] = {
   0.01283158,
   0.0128315,
   0.01280156,
   0.01262751,
   0.01254331,
   0.0126455,
   0.01294885,
   0.01351896,
   0.01443559,
   0.01581827,
   0.01787966,
   0.02091395,
   0.02561339,
   0.03360807,
   0.05758084};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1559,S12_c_vs_p_fy1559,S12_c_vs_p_fex1559,S12_c_vs_p_fey1559);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1559 = new TH1F("Graph_S12_c_vs_p1559","S12",100,0,3080);
   Graph_S12_c_vs_p1559->SetMinimum(-0.06066865);
   Graph_S12_c_vs_p1559->SetMaximum(0.5285633);
   Graph_S12_c_vs_p1559->SetDirectory(0);
   Graph_S12_c_vs_p1559->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1559->SetLineColor(ci);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_c_vs_p1559->GetXaxis()->SetRange(0,100);
   Graph_S12_c_vs_p1559->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1559->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1559->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1559->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1559->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1559->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1559->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1559->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1559->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1559->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1559);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1560[15] = {
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
   Double_t S18_c_vs_p_fy1560[15] = {
   0.1163993,
   0.1154386,
   0.1153361,
   0.1093287,
   0.1019015,
   0.1162737,
   0.1313845,
   0.1310191,
   0.1593051,
   0.1972836,
   0.2459837,
   0.2631575,
   0.2690031,
   0.2676654,
   0.02245504};
   Double_t S18_c_vs_p_fex1560[15] = {
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
   Double_t S18_c_vs_p_fey1560[15] = {
   0.04422715,
   0.0442543,
   0.04427713,
   0.04439695,
   0.04483189,
   0.04570552,
   0.04698977,
   0.04900884,
   0.05203593,
   0.05650055,
   0.0626511,
   0.07013221,
   0.07652551,
   0.07977357,
   0.1031403};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1560,S18_c_vs_p_fy1560,S18_c_vs_p_fex1560,S18_c_vs_p_fey1560);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1560 = new TH1F("Graph_S18_c_vs_p1560","S18",100,0,3080);
   Graph_S18_c_vs_p1560->SetMinimum(-0.1234977);
   Graph_S18_c_vs_p1560->SetMaximum(0.3902514);
   Graph_S18_c_vs_p1560->SetDirectory(0);
   Graph_S18_c_vs_p1560->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1560->SetLineColor(ci);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_c_vs_p1560->GetXaxis()->SetRange(0,100);
   Graph_S18_c_vs_p1560->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1560->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1560->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1560->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1560->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1560->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1560->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1560->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1560->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1560->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1560);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
