void c_vs_p_overlay_noBr_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 29 10:28:03 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.69375,2850.5,0.24375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1119[17] = {
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
   Double_t S0_c_vs_p_fy1119[17] = {
   -0.1947585,
   -0.122606,
   0.008280527,
   -0.06924164,
   0.09806001,
   0.01706155,
   0.08453268,
   0.04232448,
   -0.05493873,
   -0.02426087,
   -0.08428002,
   -0.000858606,
   -0.01041514,
   0.1197561,
   0.007359374,
   0.07933916,
   0.06842092};
   Double_t S0_c_vs_p_fex1119[17] = {
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
   Double_t S0_c_vs_p_fey1119[17] = {
   0.06809554,
   0.06333011,
   0.05991778,
   0.05691713,
   0.05429567,
   0.05198314,
   0.05000878,
   0.04832578,
   0.04670064,
   0.04530708,
   0.04407926,
   0.04347699,
   0.04270511,
   0.04198944,
   0.04167553,
   0.04148641,
   0.04120622};
   TGraphErrors *gre = new TGraphErrors(17,S0_c_vs_p_fx1119,S0_c_vs_p_fy1119,S0_c_vs_p_fex1119,S0_c_vs_p_fey1119);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1119 = new TH1F("Graph_S0_c_vs_p1119","",100,530,2570);
   Graph_S0_c_vs_p1119->SetMinimum(-0.6);
   Graph_S0_c_vs_p1119->SetMaximum(0.15);
   Graph_S0_c_vs_p1119->SetDirectory(0);
   Graph_S0_c_vs_p1119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1119->SetLineColor(ci);
   Graph_S0_c_vs_p1119->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1119->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1119->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1119->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1119->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1119->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1119->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1119->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1119->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1119->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1119->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1119->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1119->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1119->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1119->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1119->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1119);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1120[17] = {
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
   Double_t S12_c_vs_p_fy1120[17] = {
   -0.5424581,
   -0.4425343,
   -0.3468407,
   -0.290668,
   -0.2738864,
   -0.2141361,
   -0.1469942,
   -0.1535545,
   -0.2193939,
   -0.1708852,
   -0.1801625,
   -0.1515394,
   -0.1804709,
   -0.1131139,
   -0.07180491,
   -0.05488016,
   -0.1006242};
   Double_t S12_c_vs_p_fex1120[17] = {
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
   Double_t S12_c_vs_p_fey1120[17] = {
   0.06811209,
   0.06383464,
   0.06002685,
   0.05721878,
   0.05450009,
   0.05233298,
   0.0502949,
   0.04850455,
   0.04682092,
   0.04538962,
   0.04439489,
   0.04364594,
   0.04275189,
   0.04240654,
   0.0421295,
   0.04176354,
   0.04165258};
   gre = new TGraphErrors(17,S12_c_vs_p_fx1120,S12_c_vs_p_fy1120,S12_c_vs_p_fex1120,S12_c_vs_p_fey1120);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1120 = new TH1F("Graph_S12_c_vs_p1120","S12",100,530,2570);
   Graph_S12_c_vs_p1120->SetMinimum(-0.6703155);
   Graph_S12_c_vs_p1120->SetMaximum(0.04662874);
   Graph_S12_c_vs_p1120->SetDirectory(0);
   Graph_S12_c_vs_p1120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1120->SetLineColor(ci);
   Graph_S12_c_vs_p1120->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1120->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1120->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1120->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1120->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1120->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1120->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1120->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1120->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1120->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1120->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1120->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1120->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1120->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1120->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1120->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1120);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1121[17] = {
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
   Double_t S18_c_vs_p_fy1121[17] = {
   -0.414147,
   -0.4065155,
   -0.2531375,
   -0.114081,
   -0.2571727,
   -0.1788067,
   -0.2025667,
   -0.1997702,
   -0.1901112,
   -0.08949458,
   -0.1592247,
   -0.1281271,
   -0.1045911,
   -0.1514791,
   -0.1445441,
   -0.1054875,
   -0.1019119};
   Double_t S18_c_vs_p_fex1121[17] = {
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
   Double_t S18_c_vs_p_fey1121[17] = {
   0.06835345,
   0.0640744,
   0.06045524,
   0.05727969,
   0.05482094,
   0.05251824,
   0.05043001,
   0.04871129,
   0.04725747,
   0.04572498,
   0.04483523,
   0.04400931,
   0.04315194,
   0.04298641,
   0.04248217,
   0.04227108,
   0.04191946};
   gre = new TGraphErrors(17,S18_c_vs_p_fx1121,S18_c_vs_p_fy1121,S18_c_vs_p_fex1121,S18_c_vs_p_fey1121);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1121 = new TH1F("Graph_S18_c_vs_p1121","S18",100,530,2570);
   Graph_S18_c_vs_p1121->SetMinimum(-0.5263736);
   Graph_S18_c_vs_p1121->SetMaximum(0.0001034913);
   Graph_S18_c_vs_p1121->SetDirectory(0);
   Graph_S18_c_vs_p1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1121->SetLineColor(ci);
   Graph_S18_c_vs_p1121->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1121->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1121->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1121->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1121->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1121->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1121->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1121->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1121->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1121->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1121->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1121->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1121->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1121->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1121->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1121);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
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
