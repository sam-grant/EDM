void A_vs_p_min_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 12:59:09 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-300.3,-0.065625,3318.7,0.340625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1007[15] = {
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
   Double_t A_vs_p_fy1007[15] = {
   0.2109808,
   0.2184771,
   0.226227,
   0.2409808,
   0.2373903,
   0.2324935,
   0.2262903,
   0.2151854,
   0.206676,
   0.1951499,
   0.1763855,
   0.153582,
   0.1253244,
   0.108483,
   0.02629254};
   Double_t A_vs_p_fex1007[15] = {
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
   Double_t A_vs_p_fey1007[15] = {
   0.005664806,
   0.005654032,
   0.005618257,
   0.005552127,
   0.005470768,
   0.005436148,
   0.005459903,
   0.005547971,
   0.005731519,
   0.00604991,
   0.006516476,
   0.007248047,
   0.008521782,
   0.01102836,
   0.01773851};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1007,A_vs_p_fy1007,A_vs_p_fex1007,A_vs_p_fey1007);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1007 = new TH1F("Graph_A_vs_p1007","",100,0,3080);
   Graph_A_vs_p1007->SetMinimum(-0.025);
   Graph_A_vs_p1007->SetMaximum(0.3);
   Graph_A_vs_p1007->SetDirectory(0);
   Graph_A_vs_p1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1007->SetLineColor(ci);
   Graph_A_vs_p1007->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1007->GetXaxis()->SetRange(3,96);
   Graph_A_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1007);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1008[15] = {
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
   Double_t S0S12S18_A_vs_p_fy1008[15] = {
   -0.1854607,
   -0.1864706,
   -0.1877112,
   -0.1937574,
   -0.1749864,
   -0.152359,
   -0.1686065,
   -0.1931466,
   -0.1867101,
   -0.1925415,
   -0.1970751,
   -0.2187269,
   -0.2379703,
   -0.1515552,
   0.05707483};
   Double_t S0S12S18_A_vs_p_fex1008[15] = {
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
   Double_t S0S12S18_A_vs_p_fey1008[15] = {
   0.01840529,
   0.01840633,
   0.0184231,
   0.01867543,
   0.01939159,
   0.02064442,
   0.02248175,
   0.02499288,
   0.02835257,
   0.03272808,
   0.03832786,
   0.04464759,
   0.04998506,
   0.05262904,
   0.06894015};
   gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1008,S0S12S18_A_vs_p_fy1008,S0S12S18_A_vs_p_fex1008,S0S12S18_A_vs_p_fey1008);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1008 = new TH1F("Graph_S0S12S18_A_vs_p1008","S0S12S18",100,0,3080);
   Graph_S0S12S18_A_vs_p1008->SetMinimum(-0.3293524);
   Graph_S0S12S18_A_vs_p1008->SetMaximum(0.167412);
   Graph_S0S12S18_A_vs_p1008->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1008->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetRange(3,96);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1008);
   
   gre->Draw("p ");
   
   Double_t A_vs_p_fx1009[15] = {
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
   Double_t A_vs_p_fy1009[15] = {
   0.2171226,
   0.2253601,
   0.2446356,
   0.2619403,
   0.2732322,
   0.2700593,
   0.2650091,
   0.2766936,
   0.2710516,
   0.2397153,
   0.2154923,
   0.2131498,
   0.1678917,
   0.1259516,
   0.04446172};
   Double_t A_vs_p_fex1009[15] = {
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
   Double_t A_vs_p_fey1009[15] = {
   0.01033129,
   0.01041135,
   0.01054837,
   0.01071827,
   0.01092865,
   0.01123526,
   0.0116794,
   0.01229926,
   0.01313903,
   0.01428293,
   0.01586848,
   0.01814501,
   0.02161687,
   0.02765306,
   0.0406817};
   gre = new TGraphErrors(15,A_vs_p_fx1009,A_vs_p_fy1009,A_vs_p_fex1009,A_vs_p_fey1009);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1009 = new TH1F("Graph_A_vs_p1009","",100,0,3080);
   Graph_A_vs_p1009->SetMinimum(0.003402018);
   Graph_A_vs_p1009->SetMaximum(0.3175141);
   Graph_A_vs_p1009->SetDirectory(0);
   Graph_A_vs_p1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1009->SetLineColor(ci);
   Graph_A_vs_p1009->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_A_vs_p1009->GetXaxis()->SetRange(0,96);
   Graph_A_vs_p1009->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1009->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1009->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1009->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1009->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1009->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1009->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1009->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1009->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1009->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1009->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1009->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1009);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.79,0.89,0.89,NULL,"brNDC");
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

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth (all decays)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
