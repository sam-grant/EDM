void AEDM_vs_p_overlay_pValQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:28:53 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.5,3378.375,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1020[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t S0_AEDM_vs_p_fy1020[30] = {
   29.92956,
   0.3352361,
   -0.3059067,
   0.1294358,
   -0.1271239,
   0.169369,
   0.1206133,
   0.1289312,
   0.2207894,
   0.23074,
   0.1728789,
   0.1824792,
   0.1731613,
   0.2270468,
   0.1321397,
   0.2054003,
   0.1054635,
   0.1702237,
   0.1686158,
   0.2011843,
   0.1569504,
   0.1392314,
   0.1880951,
   0.1264212,
   0.1010741,
   0.1098891,
   0.05775375,
   0.06545342,
   0.09551372,
   -0.03630318};
   Double_t S0_AEDM_vs_p_fex1020[30] = {
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
   Double_t S0_AEDM_vs_p_fey1020[30] = {
   0.6396475,
   1.072317,
   0.4752066,
   0.1627263,
   0.08794333,
   0.06759092,
   0.05946794,
   0.05491355,
   0.05131076,
   0.04840465,
   0.04589033,
   0.04378087,
   0.04190824,
   0.04024409,
   0.03882872,
   0.03767378,
   0.03659191,
   0.03551492,
   0.03474406,
   0.03434544,
   0.03395082,
   0.03355196,
   0.0333063,
   0.03302103,
   0.03322716,
   0.03325592,
   0.03351272,
   0.03427436,
   0.0379633,
   0.07447647};
   TGraphErrors *gre = new TGraphErrors(30,S0_AEDM_vs_p_fx1020,S0_AEDM_vs_p_fy1020,S0_AEDM_vs_p_fex1020,S0_AEDM_vs_p_fey1020);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1020 = new TH1F("Graph_S0_AEDM_vs_p1020","",100,0,3300);
   Graph_S0_AEDM_vs_p1020->SetMinimum(-2);
   Graph_S0_AEDM_vs_p1020->SetMaximum(2);
   Graph_S0_AEDM_vs_p1020->SetDirectory(0);
   Graph_S0_AEDM_vs_p1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1020->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetRange(1,91);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1020->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1020);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1021[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t S12_AEDM_vs_p_fy1021[30] = {
   15.5677,
   -0.1591612,
   0.9002583,
   0.03769603,
   0.07169569,
   0.07146342,
   0.1643421,
   0.2848761,
   0.284255,
   0.1385411,
   0.17739,
   0.1957424,
   0.06760192,
   0.2411831,
   0.2236661,
   0.1743346,
   0.1777029,
   0.1042253,
   0.1936406,
   0.1118323,
   0.09013172,
   0.1291992,
   0.1454179,
   0.1046174,
   0.113554,
   0.1361007,
   0.1273436,
   0.112757,
   0.02167366,
   -0.1410962};
   Double_t S12_AEDM_vs_p_fex1021[30] = {
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
   Double_t S12_AEDM_vs_p_fey1021[30] = {
   0.7412008,
   1.000652,
   0.4690058,
   0.1574434,
   0.08844576,
   0.06775463,
   0.05936614,
   0.05480363,
   0.05133573,
   0.0484237,
   0.04591429,
   0.04407104,
   0.0422116,
   0.04047584,
   0.03896883,
   0.03776327,
   0.03672117,
   0.03572567,
   0.03498514,
   0.03454018,
   0.03418454,
   0.03380426,
   0.03363294,
   0.03357406,
   0.03369805,
   0.03412808,
   0.03456899,
   0.03534952,
   0.03927544,
   0.07788128};
   gre = new TGraphErrors(30,S12_AEDM_vs_p_fx1021,S12_AEDM_vs_p_fy1021,S12_AEDM_vs_p_fex1021,S12_AEDM_vs_p_fey1021);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1021 = new TH1F("Graph_S12_AEDM_vs_p1021","S12",100,0,3300);
   Graph_S12_AEDM_vs_p1021->SetMinimum(-2.906684);
   Graph_S12_AEDM_vs_p1021->SetMaximum(18.05577);
   Graph_S12_AEDM_vs_p1021->SetDirectory(0);
   Graph_S12_AEDM_vs_p1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1021->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetRange(1,91);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1021->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1021);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1022[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t S18_AEDM_vs_p_fy1022[30] = {
   -1.503089,
   -1.257453,
   0.5236124,
   0.3801302,
   -0.07617777,
   0.1247252,
   0.218507,
   0.1932638,
   0.06349673,
   0.192285,
   0.06530019,
   0.165518,
   0.2230611,
   0.1453889,
   0.1317237,
   0.2494011,
   0.1469086,
   0.1962759,
   0.1357583,
   0.1198383,
   0.1830325,
   0.1489138,
   0.1166821,
   0.1440954,
   0.1335009,
   0.142502,
   0.1007317,
   0.02459027,
   0.03398249,
   -0.06877631};
   Double_t S18_AEDM_vs_p_fex1022[30] = {
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
   Double_t S18_AEDM_vs_p_fey1022[30] = {
   1.194874,
   1.083171,
   0.4610034,
   0.1603985,
   0.08904321,
   0.06768443,
   0.05940701,
   0.05489859,
   0.05144588,
   0.04846584,
   0.04622876,
   0.04424448,
   0.04239733,
   0.04070615,
   0.0392559,
   0.03808361,
   0.03677089,
   0.03601702,
   0.03538775,
   0.03473482,
   0.03460624,
   0.03410144,
   0.03371485,
   0.03375997,
   0.03406821,
   0.03437515,
   0.03497099,
   0.03566668,
   0.0405376,
   0.08226475};
   gre = new TGraphErrors(30,S18_AEDM_vs_p_fx1022,S18_AEDM_vs_p_fy1022,S18_AEDM_vs_p_fex1022,S18_AEDM_vs_p_fey1022);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1022 = new TH1F("Graph_S18_AEDM_vs_p1022","S18",100,0,3300);
   Graph_S18_AEDM_vs_p1022->SetMinimum(-3.066221);
   Graph_S18_AEDM_vs_p1022->SetMaximum(1.352874);
   Graph_S18_AEDM_vs_p1022->SetDirectory(0);
   Graph_S18_AEDM_vs_p1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1022->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetRange(1,91);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1022->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1022);
   
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
