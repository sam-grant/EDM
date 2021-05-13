void ABz_vs_p_overlay_gQ_coarse()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  3 22:24:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,-2.5,2877,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1167[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0_ABz_vs_p_fy1167[9] = {
   0.1899174,
   0.2050839,
   0.1816937,
   0.08756462,
   0.1365426,
   0.2203744,
   0.1811575,
   0.1365291,
   0.1555804};
   Double_t S0_ABz_vs_p_fex1167[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_ABz_vs_p_fey1167[9] = {
   0.07012759,
   0.04479476,
   0.04051888,
   0.03711625,
   0.03459469,
   0.03262504,
   0.03150469,
   0.03111592,
   0.03131091};
   TGraphErrors *gre = new TGraphErrors(9,S0_ABz_vs_p_fx1167,S0_ABz_vs_p_fy1167,S0_ABz_vs_p_fex1167,S0_ABz_vs_p_fey1167);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1167 = new TH1F("Graph_S0_ABz_vs_p1167","",100,420,2580);
   Graph_S0_ABz_vs_p1167->SetMinimum(-2);
   Graph_S0_ABz_vs_p1167->SetMaximum(2);
   Graph_S0_ABz_vs_p1167->SetDirectory(0);
   Graph_S0_ABz_vs_p1167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1167->SetLineColor(ci);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetRange(0,101);
   Graph_S0_ABz_vs_p1167->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1167->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1167->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1167->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1167);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1168[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12_ABz_vs_p_fy1168[9] = {
   0.1592411,
   0.224667,
   0.1652933,
   0.2233248,
   0.1538565,
   0.1136715,
   0.128796,
   0.07041289,
   0.1346139};
   Double_t S12_ABz_vs_p_fex1168[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_ABz_vs_p_fey1168[9] = {
   0.0701346,
   0.04499462,
   0.04064686,
   0.03724897,
   0.03484718,
   0.03280937,
   0.03185827,
   0.0314944,
   0.0316281};
   gre = new TGraphErrors(9,S12_ABz_vs_p_fx1168,S12_ABz_vs_p_fy1168,S12_ABz_vs_p_fex1168,S12_ABz_vs_p_fey1168);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1168 = new TH1F("Graph_S12_ABz_vs_p1168","S12",100,420,2580);
   Graph_S12_ABz_vs_p1168->SetMinimum(0.01584417);
   Graph_S12_ABz_vs_p1168->SetMaximum(0.292736);
   Graph_S12_ABz_vs_p1168->SetDirectory(0);
   Graph_S12_ABz_vs_p1168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1168->SetLineColor(ci);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetRange(0,101);
   Graph_S12_ABz_vs_p1168->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1168->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1168->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1168->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1168);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1169[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S18_ABz_vs_p_fy1169[9] = {
   0.1672784,
   0.2240412,
   0.1074181,
   0.1741959,
   0.1503306,
   0.1784636,
   0.1371265,
   0.1016758,
   0.139323};
   Double_t S18_ABz_vs_p_fex1169[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_ABz_vs_p_fey1169[9] = {
   0.07013367,
   0.04513073,
   0.04075808,
   0.03748029,
   0.03496278,
   0.0331065,
   0.03208879,
   0.03174679,
   0.0318433};
   gre = new TGraphErrors(9,S18_ABz_vs_p_fx1169,S18_ABz_vs_p_fy1169,S18_ABz_vs_p_fex1169,S18_ABz_vs_p_fey1169);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1169 = new TH1F("Graph_S18_ABz_vs_p1169","S18",100,420,2580);
   Graph_S18_ABz_vs_p1169->SetMinimum(0.04640887);
   Graph_S18_ABz_vs_p1169->SetMaximum(0.2894231);
   Graph_S18_ABz_vs_p1169->SetDirectory(0);
   Graph_S18_ABz_vs_p1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1169->SetLineColor(ci);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetRange(0,101);
   Graph_S18_ABz_vs_p1169->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1169->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1169->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1169->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1169);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_fx1170[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12S18_ABz_vs_p_fy1170[9] = {
   0.1638192,
   0.2237051,
   0.1367809,
   0.1994324,
   0.1517017,
   0.1460374,
   0.1337579,
   0.08521714,
   0.137057};
   Double_t S12S18_ABz_vs_p_fex1170[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_ABz_vs_p_fey1170[9] = {
   0.04960554,
   0.03186823,
   0.02878522,
   0.02642428,
   0.02468637,
   0.0233087,
   0.02261481,
   0.02236668,
   0.02244977};
   gre = new TGraphErrors(9,S12S18_ABz_vs_p_fx1170,S12S18_ABz_vs_p_fy1170,S12S18_ABz_vs_p_fex1170,S12S18_ABz_vs_p_fey1170);
   gre->SetName("S12S18_ABz_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p1170 = new TH1F("Graph_S12S18_ABz_vs_p1170","S12S18",100,420,2580);
   Graph_S12S18_ABz_vs_p1170->SetMinimum(0.04357817);
   Graph_S12S18_ABz_vs_p1170->SetMaximum(0.2748456);
   Graph_S12S18_ABz_vs_p1170->SetDirectory(0);
   Graph_S12S18_ABz_vs_p1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p1170->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetRange(0,101);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p1170->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1170->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p1170);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_fx1171[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0S12S18_ABz_vs_p_fy1171[9] = {
   0.1720041,
   0.2163919,
   0.1524717,
   0.161695,
   0.146564,
   0.1712749,
   0.1498532,
   0.1025867,
   0.1436105};
   Double_t S0S12S18_ABz_vs_p_fex1171[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_ABz_vs_p_fey1171[9] = {
   0.04050637,
   0.02597073,
   0.02346941,
   0.02152921,
   0.02009776,
   0.01896861,
   0.01837494,
   0.01816464,
   0.01825046};
   gre = new TGraphErrors(9,S0S12S18_ABz_vs_p_fx1171,S0S12S18_ABz_vs_p_fy1171,S0S12S18_ABz_vs_p_fex1171,S0S12S18_ABz_vs_p_fey1171);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1171 = new TH1F("Graph_S0S12S18_ABz_vs_p1171","S0S12S18",100,420,2580);
   Graph_S0S12S18_ABz_vs_p1171->SetMinimum(0.06862797);
   Graph_S0S12S18_ABz_vs_p1171->SetMaximum(0.2581567);
   Graph_S0S12S18_ABz_vs_p1171->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p1171->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p1171);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_ABz_vs_p","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
