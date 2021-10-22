void A_vs_p_full_overlay_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(2080,-0.31875,2920,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1290[4] = {
   2200,
   2400,
   2600,
   2800};
   Double_t S0_A_vs_p_fy1290[4] = {
   0.106794,
   0.07037769,
   0.06267378,
   0.1312521};
   Double_t S0_A_vs_p_fex1290[4] = {
   100,
   100,
   100,
   100};
   Double_t S0_A_vs_p_fey1290[4] = {
   0.02435724,
   0.02813355,
   0.03429063,
   0.05298344};
   TGraphErrors *gre = new TGraphErrors(4,S0_A_vs_p_fx1290,S0_A_vs_p_fy1290,S0_A_vs_p_fex1290,S0_A_vs_p_fey1290);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1290 = new TH1F("Graph_S0_A_vs_p1290","",100,2020,2980);
   Graph_S0_A_vs_p1290->SetMinimum(-0.25);
   Graph_S0_A_vs_p1290->SetMaximum(0.3);
   Graph_S0_A_vs_p1290->SetDirectory(0);
   Graph_S0_A_vs_p1290->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1290->SetLineColor(ci);
   Graph_S0_A_vs_p1290->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1290->GetXaxis()->SetRange(16,85);
   Graph_S0_A_vs_p1290->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1290->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1290->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1290->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1290->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1290->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1290->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1290->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1290->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1290->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1290->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1290->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1290->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1290->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1290->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1290);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1291[4] = {
   2200,
   2400,
   2600,
   2800};
   Double_t S12_A_vs_p_fy1291[4] = {
   0.104016,
   0.1073738,
   0.06271902,
   -0.04620357};
   Double_t S12_A_vs_p_fex1291[4] = {
   100,
   100,
   100,
   100};
   Double_t S12_A_vs_p_fey1291[4] = {
   0.02633797,
   0.03072085,
   0.03765942,
   0.05876427};
   gre = new TGraphErrors(4,S12_A_vs_p_fx1291,S12_A_vs_p_fy1291,S12_A_vs_p_fex1291,S12_A_vs_p_fey1291);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1291 = new TH1F("Graph_S12_A_vs_p1291","S12",100,2020,2980);
   Graph_S12_A_vs_p1291->SetMinimum(-0.1292741);
   Graph_S12_A_vs_p1291->SetMaximum(0.1624009);
   Graph_S12_A_vs_p1291->SetDirectory(0);
   Graph_S12_A_vs_p1291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1291->SetLineColor(ci);
   Graph_S12_A_vs_p1291->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1291->GetXaxis()->SetRange(16,85);
   Graph_S12_A_vs_p1291->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1291->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1291->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1291->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1291->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1291->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1291->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1291->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1291->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1291->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1291->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1291->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1291->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1291->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1291);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1292[4] = {
   2200,
   2400,
   2600,
   2800};
   Double_t S18_A_vs_p_fy1292[4] = {
   0.1070043,
   0.1126408,
   0.08942889,
   -0.02513215};
   Double_t S18_A_vs_p_fex1292[4] = {
   100,
   100,
   100,
   100};
   Double_t S18_A_vs_p_fey1292[4] = {
   0.02716882,
   0.03161876,
   0.03860063,
   0.06165802};
   gre = new TGraphErrors(4,S18_A_vs_p_fx1292,S18_A_vs_p_fy1292,S18_A_vs_p_fex1292,S18_A_vs_p_fey1292);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1292 = new TH1F("Graph_S18_A_vs_p1292","S18",100,2020,2980);
   Graph_S18_A_vs_p1292->SetMinimum(-0.1098951);
   Graph_S18_A_vs_p1292->SetMaximum(0.1673645);
   Graph_S18_A_vs_p1292->SetDirectory(0);
   Graph_S18_A_vs_p1292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1292->SetLineColor(ci);
   Graph_S18_A_vs_p1292->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1292->GetXaxis()->SetRange(16,85);
   Graph_S18_A_vs_p1292->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1292->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1292->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1292->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1292->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1292->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1292->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1292->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1292->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1292->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1292->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1292->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1292->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1292->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1292->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1292);
   
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
