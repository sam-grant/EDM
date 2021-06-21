void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:31:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.31875,3468.85,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1561[15] = {
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
   Double_t S0_A_vs_p_fy1561[15] = {
   6.523407,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11};
   Double_t S0_A_vs_p_fex1561[15] = {
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
   Double_t S0_A_vs_p_fey1561[15] = {
   2.081683e-06,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12};
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1561,S0_A_vs_p_fy1561,S0_A_vs_p_fex1561,S0_A_vs_p_fey1561);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1561 = new TH1F("Graph_S0_A_vs_p1561","",100,0,3080);
   Graph_S0_A_vs_p1561->SetMinimum(-0.25);
   Graph_S0_A_vs_p1561->SetMaximum(0.3);
   Graph_S0_A_vs_p1561->SetDirectory(0);
   Graph_S0_A_vs_p1561->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1561->SetLineColor(ci);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1561->GetXaxis()->SetRange(0,100);
   Graph_S0_A_vs_p1561->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1561->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1561->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1561->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1561->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1561->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1561->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1561);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1562[15] = {
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
   Double_t S12_A_vs_p_fy1562[15] = {
   -0.1798399,
   -0.1801214,
   -0.1815797,
   -0.1903595,
   -0.1683512,
   -0.1333467,
   -0.143583,
   -0.1614999,
   -0.1399791,
   -0.128953,
   -0.1165994,
   -0.1089329,
   -0.1140085,
   -0.06876127,
   0.0503322};
   Double_t S12_A_vs_p_fex1562[15] = {
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
   Double_t S12_A_vs_p_fey1562[15] = {
   0.0180693,
   0.01806928,
   0.01802271,
   0.01775911,
   0.01760109,
   0.01768395,
   0.01803687,
   0.0187138,
   0.01982925,
   0.0215087,
   0.02393821,
   0.02742063,
   0.03264357,
   0.04134262,
   0.06870237};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1562,S12_A_vs_p_fy1562,S12_A_vs_p_fex1562,S12_A_vs_p_fey1562);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1562 = new TH1F("Graph_S12_A_vs_p1562","S12",100,0,3080);
   Graph_S12_A_vs_p1562->SetMinimum(-0.2408339);
   Graph_S12_A_vs_p1562->SetMaximum(0.1517499);
   Graph_S12_A_vs_p1562->SetDirectory(0);
   Graph_S12_A_vs_p1562->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1562->SetLineColor(ci);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1562->GetXaxis()->SetRange(0,100);
   Graph_S12_A_vs_p1562->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1562->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1562->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1562->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1562->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1562->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1562->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1562);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1563[15] = {
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
   Double_t S18_A_vs_p_fy1563[15] = {
   -0.2112567,
   -0.2152025,
   -0.2155211,
   -0.2081134,
   -0.1998153,
   -0.2085038,
   -0.22958,
   -0.2582576,
   -0.269925,
   -0.289854,
   -0.302271,
   -0.3467809,
   -0.3722023,
   -0.2404623,
   0.07375361};
   Double_t S18_A_vs_p_fex1563[15] = {
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
   Double_t S18_A_vs_p_fey1563[15] = {
   0.06134654,
   0.06138036,
   0.06141204,
   0.06156326,
   0.06210392,
   0.06319271,
   0.06475663,
   0.06720468,
   0.07087048,
   0.0762023,
   0.08323398,
   0.09146822,
   0.09778932,
   0.09895009,
   0.1224976};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1563,S18_A_vs_p_fy1563,S18_A_vs_p_fex1563,S18_A_vs_p_fey1563);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1563 = new TH1F("Graph_S18_A_vs_p1563","S18",100,0,3080);
   Graph_S18_A_vs_p1563->SetMinimum(-0.5366159);
   Graph_S18_A_vs_p1563->SetMaximum(0.2628755);
   Graph_S18_A_vs_p1563->SetDirectory(0);
   Graph_S18_A_vs_p1563->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1563->SetLineColor(ci);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1563->GetXaxis()->SetRange(0,100);
   Graph_S18_A_vs_p1563->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1563->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1563->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1563->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1563->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1563->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1563->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1563);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
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
