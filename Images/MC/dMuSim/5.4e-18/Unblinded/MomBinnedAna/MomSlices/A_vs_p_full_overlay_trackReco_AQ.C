void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:32 2021) by ROOT version 6.22/08
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
   -2.829891,
   -0.260719,
   -0.03346758,
   0.1788319,
   0.2656197,
   0.1884771,
   0.2296213,
   0.1488875,
   0.1236307,
   0.1247631,
   0.1460611,
   0.1513801,
   0.07716071,
   0.04274633,
   0.1317466};
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
   1.163204,
   0.2343443,
   0.07819067,
   0.06105938,
   0.05418838,
   0.04993698,
   0.04672449,
   0.04415912,
   0.0425354,
   0.0415242,
   0.04143937,
   0.04187968,
   0.04341598,
   0.04254379,
   0.05304686};
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
   -2.412853,
   0.1334992,
   0.1023187,
   0.3071903,
   0.314819,
   0.08897207,
   0.08437687,
   0.2217514,
   0.1614487,
   0.1538993,
   0.1259923,
   0.09794815,
   0.1480243,
   0.09680566,
   -0.04694257};
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
   1.192518,
   0.2242981,
   0.07851572,
   0.06097562,
   0.05412797,
   0.04990472,
   0.04676284,
   0.04409779,
   0.04250828,
   0.04205449,
   0.04283091,
   0.04450082,
   0.04713684,
   0.04620363,
   0.05884375};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1550,S12_A_vs_p_fy1550,S12_A_vs_p_fex1550,S12_A_vs_p_fey1550);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1550 = new TH1F("Graph_S12_A_vs_p1550","S12",100,0,3300);
   Graph_S12_A_vs_p1550->SetMinimum(-4.002803);
   Graph_S12_A_vs_p1550->SetMaximum(0.7663788);
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
   -4.127643,
   0.2462487,
   0.01318306,
   0.1301274,
   0.1361719,
   0.1074367,
   0.1881003,
   0.1874956,
   0.1485899,
   0.1772524,
   0.1379035,
   0.1014133,
   0.1332606,
   0.1250999,
   -0.02198775};
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
   1.147407,
   0.2297284,
   0.07846203,
   0.06103286,
   0.0539421,
   0.04996933,
   0.04676367,
   0.0442888,
   0.04272397,
   0.04286525,
   0.04376099,
   0.04619357,
   0.0487257,
   0.04694502,
   0.06170691};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1551,S18_A_vs_p_fy1551,S18_A_vs_p_fex1551,S18_A_vs_p_fey1551);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1551 = new TH1F("Graph_S18_A_vs_p1551","S18",100,0,3300);
   Graph_S18_A_vs_p1551->SetMinimum(-5.850152);
   Graph_S18_A_vs_p1551->SetMaximum(1.05108);
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
