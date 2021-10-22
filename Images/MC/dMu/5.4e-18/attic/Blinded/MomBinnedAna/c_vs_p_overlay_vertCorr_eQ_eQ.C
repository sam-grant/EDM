void c_vs_p_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 25 10:00:22 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.079375,2850.5,0.064375);
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
   -0.00122354,
   -7.528002e-05,
   -5.395718e-05,
   0.0002060202,
   0.0001229645,
   8.233038e-05,
   0.0004406904,
   0.000174244,
   -0.0003290415,
   -0.0001991939,
   1.917091e-05,
   -3.319711e-05,
   7.928763e-05,
   -5.296081e-05,
   0.0003436533,
   -0.000650963,
   -7.400927e-05};
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
   0.03897801,
   0.03639914,
   0.0343801,
   0.03258636,
   0.03111588,
   0.02976105,
   0.02858359,
   0.02759656,
   0.02677398,
   0.02595351,
   0.02530774,
   0.02473679,
   0.02440455,
   0.02408222,
   0.02383677,
   0.02364706,
   0.02349805};
   TGraphErrors *gre = new TGraphErrors(17,S0_c_vs_p_fx1119,S0_c_vs_p_fy1119,S0_c_vs_p_fex1119,S0_c_vs_p_fey1119);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1119 = new TH1F("Graph_S0_c_vs_p1119","",100,530,2570);
   Graph_S0_c_vs_p1119->SetMinimum(-0.065);
   Graph_S0_c_vs_p1119->SetMaximum(0.05);
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
   -0.02010764,
   -0.004155709,
   -0.001992964,
   -0.001102835,
   -0.0009972299,
   -0.001071786,
   0.000388589,
   -0.0005745352,
   0.0003028063,
   -0.0006233315,
   -0.0002555972,
   0.0003883291,
   -0.0002616522,
   0.0001937304,
   -0.0002359703,
   -5.638379e-05,
   -0.00114099};
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
   0.03892605,
   0.03645631,
   0.03442936,
   0.03269465,
   0.03131637,
   0.02998461,
   0.02875126,
   0.02770976,
   0.02681122,
   0.02608359,
   0.02546591,
   0.0248713,
   0.02453509,
   0.02427479,
   0.02400527,
   0.02384917,
   0.02387181};
   gre = new TGraphErrors(17,S12_c_vs_p_fx1120,S12_c_vs_p_fy1120,S12_c_vs_p_fex1120,S12_c_vs_p_fey1120);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1120 = new TH1F("Graph_S12_c_vs_p1120","S12",100,530,2570);
   Graph_S12_c_vs_p1120->SetMinimum(-0.0681807);
   Graph_S12_c_vs_p1120->SetMaximum(0.04158341);
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
   -0.01265687,
   -0.00176662,
   0.0003856367,
   -0.0008886684,
   0.000352623,
   0.0001856493,
   -0.0006255093,
   0.0004890467,
   7.990951e-05,
   0.0002785705,
   0.0002693003,
   0.0003732056,
   -2.588864e-05,
   -0.0004713187,
   0.0003932359,
   -0.0003235419,
   2.916568e-05};
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
   0.03904347,
   0.0366322,
   0.03448916,
   0.03287415,
   0.03144153,
   0.03003834,
   0.02892228,
   0.02791198,
   0.02707121,
   0.02620142,
   0.02561186,
   0.0251285,
   0.0247358,
   0.02456636,
   0.02420879,
   0.02405635,
   0.02399856};
   gre = new TGraphErrors(17,S18_c_vs_p_fx1121,S18_c_vs_p_fy1121,S18_c_vs_p_fex1121,S18_c_vs_p_fey1121);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1121 = new TH1F("Graph_S18_c_vs_p1121","S18",100,530,2570);
   Graph_S18_c_vs_p1121->SetMinimum(-0.06035785);
   Graph_S18_c_vs_p1121->SetMaximum(0.04353231);
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
