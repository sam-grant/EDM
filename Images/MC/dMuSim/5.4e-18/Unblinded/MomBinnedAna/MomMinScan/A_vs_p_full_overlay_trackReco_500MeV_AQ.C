void A_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-374.6875,-0.31875,3097.188,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1271[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t S0_A_vs_p_fy1271[6] = {
   -9.37984,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11};
   Double_t S0_A_vs_p_fex1271[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1271[6] = {
   67.70206,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12};
   TGraphErrors *gre = new TGraphErrors(6,S0_A_vs_p_fx1271,S0_A_vs_p_fy1271,S0_A_vs_p_fex1271,S0_A_vs_p_fey1271);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1271 = new TH1F("Graph_S0_A_vs_p1271","",100,0,2750);
   Graph_S0_A_vs_p1271->SetMinimum(-0.25);
   Graph_S0_A_vs_p1271->SetMaximum(0.3);
   Graph_S0_A_vs_p1271->SetDirectory(0);
   Graph_S0_A_vs_p1271->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1271->SetLineColor(ci);
   Graph_S0_A_vs_p1271->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1271->GetXaxis()->SetRange(0,100);
   Graph_S0_A_vs_p1271->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1271->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1271->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1271->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1271->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1271->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1271->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1271->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1271->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1271->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1271->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1271->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1271->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1271->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1271->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1271);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1272[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t S12_A_vs_p_fy1272[6] = {
   0.1798399,
   0.183171,
   0.1333468,
   0.1444326,
   0.1165994,
   0.09371628};
   Double_t S12_A_vs_p_fex1272[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1272[6] = {
   0.0180693,
   0.017898,
   0.01768395,
   0.01920814,
   0.02393821,
   0.03621133};
   gre = new TGraphErrors(6,S12_A_vs_p_fx1272,S12_A_vs_p_fy1272,S12_A_vs_p_fex1272,S12_A_vs_p_fey1272);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1272 = new TH1F("Graph_S12_A_vs_p1272","S12",100,0,2750);
   Graph_S12_A_vs_p1272->SetMinimum(0.04314855);
   Graph_S12_A_vs_p1272->SetMaximum(0.2154254);
   Graph_S12_A_vs_p1272->SetDirectory(0);
   Graph_S12_A_vs_p1272->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1272->SetLineColor(ci);
   Graph_S12_A_vs_p1272->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1272->GetXaxis()->SetRange(0,100);
   Graph_S12_A_vs_p1272->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1272->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1272->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1272->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1272->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1272->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1272->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1272->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1272->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1272->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1272->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1272->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1272->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1272->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1272->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1272);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1273[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t S18_A_vs_p_fy1273[6] = {
   0.2112603,
   0.2141552,
   0.2085066,
   0.3075189,
   0.3022707,
   0.3488004};
   Double_t S18_A_vs_p_fex1273[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1273[6] = {
   0.06134653,
   0.06145598,
   0.06319271,
   0.06887606,
   0.08323398,
   0.09839002};
   gre = new TGraphErrors(6,S18_A_vs_p_fx1273,S18_A_vs_p_fy1273,S18_A_vs_p_fex1273,S18_A_vs_p_fey1273);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1273 = new TH1F("Graph_S18_A_vs_p1273","S18",100,0,2750);
   Graph_S18_A_vs_p1273->SetMinimum(0.1151263);
   Graph_S18_A_vs_p1273->SetMaximum(0.4773781);
   Graph_S18_A_vs_p1273->SetDirectory(0);
   Graph_S18_A_vs_p1273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1273->SetLineColor(ci);
   Graph_S18_A_vs_p1273->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1273->GetXaxis()->SetRange(0,100);
   Graph_S18_A_vs_p1273->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1273->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1273->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1273->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1273->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1273->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1273->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1273->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1273->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1273->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1273->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1273->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1273->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1273->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1273);
   
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
