void c_vs_p_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 10:38:04 2021) by ROOT version 6.22/06
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
   -0.03738807,
   -0.008189739,
   0.01338615,
   0.02631134,
   -0.02719128,
   0.002026368,
   -0.02975546,
   0.03428465,
   0.03195201,
   -0.00797848,
   0.01721047,
   -0.02661969,
   -0.006147145,
   -0.01498437,
   0.01099902,
   -0.02800448,
   0.01256072};
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
   0.03897799,
   0.03639912,
   0.0343799,
   0.03258647,
   0.03111562,
   0.02976119,
   0.02858363,
   0.02759644,
   0.02677334,
   0.02595343,
   0.02530819,
   0.02473663,
   0.02440448,
   0.02408238,
   0.0238368,
   0.02364758,
   0.02349824};
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
   -0.5203179,
   -0.4442912,
   -0.3674899,
   -0.2720952,
   -0.2210412,
   -0.205836,
   -0.2291629,
   -0.2179977,
   -0.1723681,
   -0.2400024,
   -0.1314193,
   -0.1591406,
   -0.1399159,
   -0.1250628,
   -0.1104056,
   -0.1015458,
   -0.1175515};
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
   0.03892491,
   0.03645888,
   0.03442789,
   0.03269309,
   0.0313162,
   0.0299821,
   0.02875026,
   0.02770909,
   0.02681236,
   0.02608541,
   0.02546761,
   0.02487235,
   0.02453532,
   0.02427494,
   0.02400538,
   0.02384765,
   0.02386942};
   gre = new TGraphErrors(17,S12_c_vs_p_fx1120,S12_c_vs_p_fy1120,S12_c_vs_p_fex1120,S12_c_vs_p_fey1120);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1120 = new TH1F("Graph_S12_c_vs_p1120","S12",100,530,2570);
   Graph_S12_c_vs_p1120->SetMinimum(-0.6073972);
   Graph_S12_c_vs_p1120->SetMaximum(-0.02954367);
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
   -0.3253699,
   -0.1697023,
   -0.1987142,
   -0.2822985,
   -0.1962068,
   -0.1391526,
   -0.1274596,
   -0.1255347,
   -0.1128061,
   -0.1404626,
   -0.1447599,
   -0.1232919,
   -0.09085538,
   -0.06826373,
   -0.09299046,
   -0.09385252,
   -0.08510264};
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
   0.03904355,
   0.03663242,
   0.03448767,
   0.03287446,
   0.03144109,
   0.03003825,
   0.02892229,
   0.02791314,
   0.02707214,
   0.02620241,
   0.02561041,
   0.02512893,
   0.02473704,
   0.02456484,
   0.02420898,
   0.02405391,
   0.02399792};
   gre = new TGraphErrors(17,S18_c_vs_p_fx1121,S18_c_vs_p_fy1121,S18_c_vs_p_fex1121,S18_c_vs_p_fey1121);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1121 = new TH1F("Graph_S18_c_vs_p1121","S18",100,530,2570);
   Graph_S18_c_vs_p1121->SetMinimum(-0.3964849);
   Graph_S18_c_vs_p1121->SetMaximum(-0.01162743);
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
