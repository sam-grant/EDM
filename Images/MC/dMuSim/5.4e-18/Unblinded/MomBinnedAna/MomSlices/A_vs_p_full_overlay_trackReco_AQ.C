void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:31:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-0.625,3605.25,0.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1549[15] = {
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
   Double_t S0_A_vs_p_fy1549[15] = {
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
   Double_t S0_A_vs_p_fex1549[15] = {
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
   Double_t S0_A_vs_p_fey1549[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1549,S0_A_vs_p_fy1549,S0_A_vs_p_fex1549,S0_A_vs_p_fey1549);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1549 = new TH1F("Graph_S0_A_vs_p1549","",100,0,3300);
   Graph_S0_A_vs_p1549->SetMinimum(-0.5);
   Graph_S0_A_vs_p1549->SetMaximum(0.5);
   Graph_S0_A_vs_p1549->SetDirectory(0);
   Graph_S0_A_vs_p1549->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1549->SetLineColor(ci);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_A_vs_p1549->GetXaxis()->SetRange(0,97);
   Graph_S0_A_vs_p1549->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1549->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1549->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1549->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1549->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1549->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1549->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1549->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1549->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1549->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1549);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1550[15] = {
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
   Double_t S12_A_vs_p_fy1550[15] = {
   -0.3008665,
   -0.1172063,
   -0.1048752,
   -0.3047427,
   -0.315541,
   -0.09000399,
   -0.08519872,
   -0.2232292,
   -0.1642867,
   -0.1547782,
   -0.1277217,
   -0.1005752,
   -0.154531,
   -0.1065216,
   0.05133338};
   Double_t S12_A_vs_p_fex1550[15] = {
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
   Double_t S12_A_vs_p_fey1550[15] = {
   1.366008,
   0.2250461,
   0.07858922,
   0.06104632,
   0.05422256,
   0.05001817,
   0.04691406,
   0.04431769,
   0.04282789,
   0.04253074,
   0.04354312,
   0.04567979,
   0.04925939,
   0.0500814,
   0.06878588};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1550,S12_A_vs_p_fy1550,S12_A_vs_p_fex1550,S12_A_vs_p_fey1550);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1550 = new TH1F("Graph_S12_A_vs_p1550","S12",100,0,3300);
   Graph_S12_A_vs_p1550->SetMinimum(-1.940077);
   Graph_S12_A_vs_p1550->SetMaximum(1.338344);
   Graph_S12_A_vs_p1550->SetDirectory(0);
   Graph_S12_A_vs_p1550->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1550->SetLineColor(ci);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_A_vs_p1550->GetXaxis()->SetRange(0,97);
   Graph_S12_A_vs_p1550->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1550->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1550->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1550->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1550->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1550->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1550->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1550->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1550->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1550->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1550);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1551[15] = {
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
   Double_t S18_A_vs_p_fy1551[15] = {
   6.00073,
   -0.7292458,
   -1.522737,
   -0.5952373,
   0.04860795,
   0.125515,
   0.06454806,
   -0.1987599,
   -0.1742514,
   -0.251753,
   -0.2136067,
   -0.3241845,
   -0.5002898,
   -0.3403482,
   0.06935428};
   Double_t S18_A_vs_p_fex1551[15] = {
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
   Double_t S18_A_vs_p_fey1551[15] = {
   1.356363,
   1.462707,
   0.8416482,
   0.4566154,
   0.3298205,
   0.2823321,
   0.236054,
   0.2049065,
   0.1843345,
   0.176494,
   0.1728023,
   0.1724409,
   0.1634008,
   0.124726,
   0.1226072};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1551,S18_A_vs_p_fy1551,S18_A_vs_p_fex1551,S18_A_vs_p_fey1551);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1551 = new TH1F("Graph_S18_A_vs_p1551","S18",100,0,3300);
   Graph_S18_A_vs_p1551->SetMinimum(-3.336533);
   Graph_S18_A_vs_p1551->SetMaximum(8.329241);
   Graph_S18_A_vs_p1551->SetDirectory(0);
   Graph_S18_A_vs_p1551->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1551->SetLineColor(ci);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_A_vs_p1551->GetXaxis()->SetRange(0,97);
   Graph_S18_A_vs_p1551->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1551->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1551->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1551->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1551->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1551->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1551->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1551->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1551->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1551->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1551);
   
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
