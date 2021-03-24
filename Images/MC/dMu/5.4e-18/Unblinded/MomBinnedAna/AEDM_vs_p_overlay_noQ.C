void AEDM_vs_p_overlay_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 15:27:10 2021) by ROOT version 6.22/06
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
   0.3914952,
   -0.8371562,
   -0.4198757,
   0.2034837,
   -0.1558595,
   0.148968,
   0.1418021,
   0.1763353,
   0.204393,
   0.2251633,
   0.1513308,
   0.162668,
   0.1275747,
   0.2247746,
   0.1592494,
   0.1682738,
   0.1379962,
   0.1570295,
   0.1749198,
   0.211819,
   0.1505153,
   0.1312126,
   0.1776943,
   0.1557058,
   0.1054768,
   0.1055147,
   0.061167,
   0.04877534,
   0.05295988,
   -0.01058615};
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
   1.210409,
   0.8888475,
   0.3889878,
   0.1381131,
   0.07579915,
   0.0581101,
   0.05077274,
   0.04638109,
   0.04281985,
   0.04010731,
   0.03776552,
   0.03575839,
   0.03395123,
   0.03241121,
   0.03103666,
   0.02990232,
   0.02899875,
   0.02805113,
   0.02741587,
   0.02706629,
   0.02667872,
   0.02635588,
   0.02623359,
   0.02621984,
   0.02646491,
   0.02665334,
   0.02706383,
   0.02838077,
   0.03178606,
   0.0709606};
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
   -6.276479,
   -0.9527241,
   0.8918606,
   -0.01427804,
   0.05384436,
   0.04946192,
   0.142049,
   0.2462207,
   0.2706909,
   0.149768,
   0.159984,
   0.1365846,
   0.1054037,
   0.2173154,
   0.199845,
   0.1826299,
   0.1760789,
   0.1207582,
   0.1650844,
   0.1068513,
   0.1243868,
   0.1370992,
   0.1549806,
   0.1243397,
   0.09008065,
   0.09383511,
   0.1302812,
   0.1105297,
   0.06422719,
   -0.05861488};
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
   1.578369,
   0.8194422,
   0.380946,
   0.1347844,
   0.07614738,
   0.0581971,
   0.05069768,
   0.04632633,
   0.04290913,
   0.04008737,
   0.03778914,
   0.0359298,
   0.03417127,
   0.03259288,
   0.03120855,
   0.03009018,
   0.02910479,
   0.02827489,
   0.02762822,
   0.02717584,
   0.02683647,
   0.02674196,
   0.02663502,
   0.02668933,
   0.02688013,
   0.02734722,
   0.02797242,
   0.02905025,
   0.0331633,
   0.07703949};
   gre = new TGraphErrors(30,S12_AEDM_vs_p_fx1021,S12_AEDM_vs_p_fy1021,S12_AEDM_vs_p_fex1021,S12_AEDM_vs_p_fey1021);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1021 = new TH1F("Graph_S12_AEDM_vs_p1021","S12",100,0,3300);
   Graph_S12_AEDM_vs_p1021->SetMinimum(-8.767613);
   Graph_S12_AEDM_vs_p1021->SetMaximum(2.185572);
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
   -19.1074,
   -0.185251,
   0.03096464,
   0.3594317,
   0.04041422,
   0.1181781,
   0.1610607,
   0.1834004,
   0.1338186,
   0.2495636,
   0.08287085,
   0.1600456,
   0.2224331,
   0.168596,
   0.1689119,
   0.2038032,
   0.1558427,
   0.1995925,
   0.1276634,
   0.150205,
   0.1774915,
   0.1645016,
   0.1188822,
   0.1455238,
   0.1009802,
   0.1345073,
   0.0764958,
   0.0490871,
   0.04374607,
   -0.08702402};
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
   0.9045503,
   0.861706,
   0.3784494,
   0.137126,
   0.07658784,
   0.05825273,
   0.05073053,
   0.04637882,
   0.04301635,
   0.04020392,
   0.0380111,
   0.03609827,
   0.03429943,
   0.03272594,
   0.03137705,
   0.0302863,
   0.02920709,
   0.02848084,
   0.02794273,
   0.02739279,
   0.02721561,
   0.0268956,
   0.02677784,
   0.02696498,
   0.02722327,
   0.02780089,
   0.02829733,
   0.02957371,
   0.03451894,
   0.07986737};
   gre = new TGraphErrors(30,S18_AEDM_vs_p_fx1022,S18_AEDM_vs_p_fy1022,S18_AEDM_vs_p_fex1022,S18_AEDM_vs_p_fey1022);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1022 = new TH1F("Graph_S18_AEDM_vs_p1022","S18",100,0,3300);
   Graph_S18_AEDM_vs_p1022->SetMinimum(-22.08079);
   Graph_S18_AEDM_vs_p1022->SetMaximum(2.745295);
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
