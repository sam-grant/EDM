void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.31875,3550,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1567[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S0_A_vs_p_fy1567[12] = {
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948};
   Double_t S0_A_vs_p_fex1567[12] = {
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
   Double_t S0_A_vs_p_fey1567[12] = {
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07};
   TGraphErrors *gre = new TGraphErrors(12,S0_A_vs_p_fx1567,S0_A_vs_p_fy1567,S0_A_vs_p_fex1567,S0_A_vs_p_fey1567);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1567 = new TH1F("Graph_S0_A_vs_p1567","",100,580,3220);
   Graph_S0_A_vs_p1567->SetMinimum(-0.25);
   Graph_S0_A_vs_p1567->SetMaximum(0.3);
   Graph_S0_A_vs_p1567->SetDirectory(0);
   Graph_S0_A_vs_p1567->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1567->SetLineColor(ci);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0_A_vs_p1567->GetXaxis()->SetRange(1,100);
   Graph_S0_A_vs_p1567->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1567->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1567->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1567->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1567->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1567->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1567->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1567->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1567->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1567->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1567);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1568[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S12_A_vs_p_fy1568[12] = {
   0.04351128,
   0.04365136,
   0.04397123,
   0.04634691,
   0.04814233,
   0.04888638,
   0.05123346,
   0.05658866,
   0.05047262,
   0.05094701,
   0.06050057,
   0.05042513};
   Double_t S12_A_vs_p_fex1568[12] = {
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
   Double_t S12_A_vs_p_fey1568[12] = {
   0.007495786,
   0.007530745,
   0.007663712,
   0.00788395,
   0.008262571,
   0.008814468,
   0.009627001,
   0.01085276,
   0.01273555,
   0.01576882,
   0.02114119,
   0.03402708};
   gre = new TGraphErrors(12,S12_A_vs_p_fx1568,S12_A_vs_p_fy1568,S12_A_vs_p_fex1568,S12_A_vs_p_fey1568);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1568 = new TH1F("Graph_S12_A_vs_p1568","S12",100,580,3220);
   Graph_S12_A_vs_p1568->SetMinimum(0.00959263);
   Graph_S12_A_vs_p1568->SetMaximum(0.09125763);
   Graph_S12_A_vs_p1568->SetDirectory(0);
   Graph_S12_A_vs_p1568->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1568->SetLineColor(ci);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S12_A_vs_p1568->GetXaxis()->SetRange(1,100);
   Graph_S12_A_vs_p1568->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1568->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1568->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1568->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1568->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1568->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1568->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1568->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1568->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1568->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1568);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1569[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S18_A_vs_p_fy1569[12] = {
   0.03194811,
   0.03189394,
   0.03241182,
   0.03394971,
   0.03450706,
   0.03229642,
   0.03730462,
   0.03773561,
   0.04733337,
   0.05124037,
   0.05788361,
   0.08123225};
   Double_t S18_A_vs_p_fex1569[12] = {
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
   Double_t S18_A_vs_p_fey1569[12] = {
   0.007754402,
   0.007788705,
   0.007918619,
   0.008120987,
   0.008472102,
   0.008998139,
   0.00978892,
   0.01100027,
   0.01285889,
   0.01586812,
   0.02124322,
   0.03413764};
   gre = new TGraphErrors(12,S18_A_vs_p_fx1569,S18_A_vs_p_fy1569,S18_A_vs_p_fex1569,S18_A_vs_p_fey1569);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1569 = new TH1F("Graph_S18_A_vs_p1569","S18",100,580,3220);
   Graph_S18_A_vs_p1569->SetMinimum(0.01409112);
   Graph_S18_A_vs_p1569->SetMaximum(0.124577);
   Graph_S18_A_vs_p1569->SetDirectory(0);
   Graph_S18_A_vs_p1569->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1569->SetLineColor(ci);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S18_A_vs_p1569->GetXaxis()->SetRange(1,100);
   Graph_S18_A_vs_p1569->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1569->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1569->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1569->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1569->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1569->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1569->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1569->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1569->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1569->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1569);
   
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
