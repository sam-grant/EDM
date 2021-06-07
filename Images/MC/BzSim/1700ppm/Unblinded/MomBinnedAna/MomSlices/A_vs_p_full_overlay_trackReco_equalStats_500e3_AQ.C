void A_vs_p_full_overlay_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.625,3456.75,0.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1388[15] = {
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
   Double_t S0_A_vs_p_fy1388[15] = {
   -5.669526,
   -0.06097285,
   0.1178308,
   0.1580454,
   0.2549322,
   0.1521257,
   0.09299936,
   0.1514812,
   0.2219702,
   0.2247586,
   0.1801667,
   0.17334,
   0.1170751,
   0.1149078,
   0.0719241};
   Double_t S0_A_vs_p_fex1388[15] = {
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
   Double_t S0_A_vs_p_fey1388[15] = {
   1.090691,
   0.236589,
   0.07901769,
   0.06150448,
   0.05434882,
   0.05038529,
   0.0470471,
   0.04452688,
   0.04267536,
   0.04225927,
   0.04257889,
   0.04368929,
   0.04651137,
   0.04910183,
   0.0625593};
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1388,S0_A_vs_p_fy1388,S0_A_vs_p_fex1388,S0_A_vs_p_fey1388);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1388 = new TH1F("Graph_S0_A_vs_p1388","",100,0,3300);
   Graph_S0_A_vs_p1388->SetMinimum(-0.5);
   Graph_S0_A_vs_p1388->SetMaximum(0.5);
   Graph_S0_A_vs_p1388->SetDirectory(0);
   Graph_S0_A_vs_p1388->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1388->SetLineColor(ci);
   Graph_S0_A_vs_p1388->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_A_vs_p1388->GetXaxis()->SetRange(0,93);
   Graph_S0_A_vs_p1388->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1388->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1388->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1388->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1388->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1388->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_A_vs_p1388->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1388->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1388->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1388->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1388->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1388->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1388->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1388->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1388->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1388);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1389[15] = {
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
   Double_t S12_A_vs_p_fy1389[15] = {
   -0.1392509,
   -0.3466837,
   0.08313426,
   0.02545604,
   0.2790709,
   0.1875456,
   0.2302801,
   0.2165938,
   0.08895902,
   0.1535033,
   0.1173767,
   0.1462292,
   0.1578593,
   0.08515932,
   -0.108183};
   Double_t S12_A_vs_p_fex1389[15] = {
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
   Double_t S12_A_vs_p_fey1389[15] = {
   1.250443,
   0.2288447,
   0.07925081,
   0.06148555,
   0.05444342,
   0.05021075,
   0.04694235,
   0.04445378,
   0.04286078,
   0.04289036,
   0.04413062,
   0.04673528,
   0.05073197,
   0.05109218,
   0.07190474};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1389,S12_A_vs_p_fy1389,S12_A_vs_p_fex1389,S12_A_vs_p_fey1389);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1389 = new TH1F("Graph_S12_A_vs_p1389","S12",100,0,3300);
   Graph_S12_A_vs_p1389->SetMinimum(-1.639783);
   Graph_S12_A_vs_p1389->SetMaximum(1.361281);
   Graph_S12_A_vs_p1389->SetDirectory(0);
   Graph_S12_A_vs_p1389->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1389->SetLineColor(ci);
   Graph_S12_A_vs_p1389->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_A_vs_p1389->GetXaxis()->SetRange(0,97);
   Graph_S12_A_vs_p1389->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1389->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1389->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1389->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1389->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1389->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_A_vs_p1389->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1389->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1389->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1389->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1389->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1389->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1389->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1389->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1389->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1389);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1390[15] = {
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
   Double_t S18_A_vs_p_fy1390[15] = {
   -0.8289689,
   -0.139251,
   0.1468018,
   0.05773904,
   0.2247161,
   0.1316894,
   0.1594638,
   0.167335,
   0.2151973,
   0.1341996,
   0.07394247,
   0.199183,
   0.1318677,
   0.05335722,
   -0.008723376};
   Double_t S18_A_vs_p_fex1390[15] = {
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
   Double_t S18_A_vs_p_fey1390[15] = {
   1.318251,
   0.2362007,
   0.07913964,
   0.06127779,
   0.05415034,
   0.05016545,
   0.04693761,
   0.04458902,
   0.04338138,
   0.04352494,
   0.04518294,
   0.0486496,
   0.05169086,
   0.05252828,
   0.07227588};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1390,S18_A_vs_p_fy1390,S18_A_vs_p_fex1390,S18_A_vs_p_fey1390);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1390 = new TH1F("Graph_S18_A_vs_p1390","S18",100,0,3300);
   Graph_S18_A_vs_p1390->SetMinimum(-2.41087);
   Graph_S18_A_vs_p1390->SetMaximum(0.7529322);
   Graph_S18_A_vs_p1390->SetDirectory(0);
   Graph_S18_A_vs_p1390->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1390->SetLineColor(ci);
   Graph_S18_A_vs_p1390->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_A_vs_p1390->GetXaxis()->SetRange(0,97);
   Graph_S18_A_vs_p1390->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1390->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1390->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1390->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1390->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1390->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_A_vs_p1390->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1390->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1390->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1390->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1390->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1390->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1390->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1390->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1390->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1390);
   
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
