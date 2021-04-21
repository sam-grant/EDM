void AEDM_vs_p_overlay_noBr_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 29 10:28:03 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.04375,2850.5,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1122[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S0_AEDM_vs_p_fy1122[17] = {
   0.07564359,
   0.2592681,
   0.3258315,
   0.1160329,
   0.2250618,
   0.09894022,
   0.2297829,
   0.129406,
   0.1384036,
   0.3026228,
   0.285482,
   0.1370749,
   0.2587718,
   0.0945856,
   0.264793,
   0.199025,
   0.149271};
   Double_t S0_AEDM_vs_p_fex1122[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_AEDM_vs_p_fey1122[17] = {
   0.09610907,
   0.08960838,
   0.08473937,
   0.08066222,
   0.07677599,
   0.07353618,
   0.07057105,
   0.06821883,
   0.06600584,
   0.06406121,
   0.06217857,
   0.0612572,
   0.0603087,
   0.05935693,
   0.05914536,
   0.05837538,
   0.05826909};
   TGraphErrors *gre = new TGraphErrors(17,S0_AEDM_vs_p_fx1122,S0_AEDM_vs_p_fy1122,S0_AEDM_vs_p_fex1122,S0_AEDM_vs_p_fey1122);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1122 = new TH1F("Graph_S0_AEDM_vs_p1122","",100,530,2570);
   Graph_S0_AEDM_vs_p1122->SetMinimum(0);
   Graph_S0_AEDM_vs_p1122->SetMaximum(0.35);
   Graph_S0_AEDM_vs_p1122->SetDirectory(0);
   Graph_S0_AEDM_vs_p1122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1122->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetRange(0,101);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1122->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1122);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1123[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S12_AEDM_vs_p_fy1123[17] = {
   0.01608685,
   0.3678824,
   0.08595697,
   0.0576399,
   0.05968952,
   -0.004784053,
   0.09962713,
   0.0190823,
   0.1608197,
   0.2166841,
   0.05092707,
   0.05193578,
   0.2012067,
   0.07795911,
   0.1854511,
   0.1775439,
   0.2205477};
   Double_t S12_AEDM_vs_p_fex1123[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_AEDM_vs_p_fey1123[17] = {
   0.09670922,
   0.09020914,
   0.08487494,
   0.08085614,
   0.0769107,
   0.07401344,
   0.07111282,
   0.06847736,
   0.06616684,
   0.0643873,
   0.0629208,
   0.06153451,
   0.06057164,
   0.05985347,
   0.05956301,
   0.05905074,
   0.05895248};
   gre = new TGraphErrors(17,S12_AEDM_vs_p_fx1123,S12_AEDM_vs_p_fy1123,S12_AEDM_vs_p_fex1123,S12_AEDM_vs_p_fey1123);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1123 = new TH1F("Graph_S12_AEDM_vs_p1123","S12",100,530,2570);
   Graph_S12_AEDM_vs_p1123->SetMinimum(-0.1344938);
   Graph_S12_AEDM_vs_p1123->SetMaximum(0.511963);
   Graph_S12_AEDM_vs_p1123->SetDirectory(0);
   Graph_S12_AEDM_vs_p1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1123->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetRange(0,101);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1123->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1123);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1124[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S18_AEDM_vs_p_fy1124[17] = {
   0.03704171,
   0.1906142,
   0.1568019,
   0.1237512,
   0.189495,
   0.3219559,
   0.3110487,
   0.2096847,
   0.2682592,
   0.1749622,
   0.1363175,
   0.1868481,
   0.09647996,
   0.1201972,
   0.105259,
   0.09215394,
   0.07842604};
   Double_t S18_AEDM_vs_p_fex1124[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_AEDM_vs_p_fey1124[17] = {
   0.09656867,
   0.09069006,
   0.0853687,
   0.0806948,
   0.07731015,
   0.0742192,
   0.07107921,
   0.06870869,
   0.06671646,
   0.06464951,
   0.06330383,
   0.06221738,
   0.06098631,
   0.06077689,
   0.06004297,
   0.05973962,
   0.0593651};
   gre = new TGraphErrors(17,S18_AEDM_vs_p_fx1124,S18_AEDM_vs_p_fy1124,S18_AEDM_vs_p_fex1124,S18_AEDM_vs_p_fey1124);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1124 = new TH1F("Graph_S18_AEDM_vs_p1124","S18",100,530,2570);
   Graph_S18_AEDM_vs_p1124->SetMinimum(-0.1050972);
   Graph_S18_AEDM_vs_p1124->SetMaximum(0.4417453);
   Graph_S18_AEDM_vs_p1124->SetDirectory(0);
   Graph_S18_AEDM_vs_p1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1124->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetRange(0,101);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1124->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1124);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_AEDM_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_AEDM_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_AEDM_vs_p","S18","lpf");
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
