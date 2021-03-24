void tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 14:16:27 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-3.625,3378.375,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1017[30] = {
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
   Double_t S0_c_vs_p_fy1017[30] = {
   -1.013065,
   -0.03214028,
   0.6369216,
   -1.3659,
   -1.496261,
   -0.8029737,
   -0.1833579,
   -0.03672283,
   -0.003884865,
   0.01450967,
   0.02499794,
   -0.02906791,
   0.001516415,
   -0.03207232,
   0.03324261,
   0.03226632,
   -0.008060425,
   0.01682497,
   -0.02364116,
   -0.005143003,
   -0.01389127,
   0.01004503,
   -0.02953768,
   0.008463948,
   -0.03113325,
   0.03329917,
   -0.03005932,
   0.006461065,
   -0.04577951,
   0.1533726};
   Double_t S0_c_vs_p_fex1017[30] = {
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
   Double_t S0_c_vs_p_fey1017[30] = {
   0.5306256,
   0.7722742,
   0.3346537,
   0.1148787,
   0.06219267,
   0.04769856,
   0.04198596,
   0.03879486,
   0.03622545,
   0.03420966,
   0.03242732,
   0.03096575,
   0.02961691,
   0.02845626,
   0.02746408,
   0.02664823,
   0.02583835,
   0.02518907,
   0.02461759,
   0.02428734,
   0.0239617,
   0.02373195,
   0.02352624,
   0.02338552,
   0.02346063,
   0.02354932,
   0.02382756,
   0.02440527,
   0.02680516,
   0.05332554};
   TGraphErrors *gre = new TGraphErrors(30,S0_c_vs_p_fx1017,S0_c_vs_p_fy1017,S0_c_vs_p_fex1017,S0_c_vs_p_fey1017);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1017 = new TH1F("Graph_S0_c_vs_p1017","",100,0,3300);
   Graph_S0_c_vs_p1017->SetMinimum(-3);
   Graph_S0_c_vs_p1017->SetMaximum(2);
   Graph_S0_c_vs_p1017->SetDirectory(0);
   Graph_S0_c_vs_p1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1017->SetLineColor(ci);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1017->GetXaxis()->SetRange(1,91);
   Graph_S0_c_vs_p1017->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1017->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1017->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1017->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1017->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1017->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1017->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1017->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1017->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1017);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1018[30] = {
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
   Double_t S12_c_vs_p_fy1018[30] = {
   14.93059,
   -1.13178,
   -0.5547674,
   -2.245448,
   -1.981604,
   -1.087168,
   -0.6120442,
   -0.5111818,
   -0.4475,
   -0.3646449,
   -0.2767117,
   -0.2242194,
   -0.208606,
   -0.2319704,
   -0.2174611,
   -0.1734826,
   -0.2374581,
   -0.1329736,
   -0.1566501,
   -0.1377279,
   -0.1187591,
   -0.1150587,
   -0.1046583,
   -0.1170833,
   -0.1149152,
   -0.09356501,
   -0.1129844,
   -0.1221453,
   -0.1215675,
   0.07057964};
   Double_t S12_c_vs_p_fex1018[30] = {
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
   Double_t S12_c_vs_p_fey1018[30] = {
   0.458164,
   0.7292825,
   0.3294411,
   0.1113726,
   0.0625974,
   0.04797213,
   0.04198078,
   0.03874,
   0.03629217,
   0.03425886,
   0.03253819,
   0.03116739,
   0.029839,
   0.02861519,
   0.02758529,
   0.02668233,
   0.02596522,
   0.02534153,
   0.02475174,
   0.02442113,
   0.02415758,
   0.02389501,
   0.0237409,
   0.023755,
   0.02381276,
   0.02408886,
   0.02435103,
   0.02497646,
   0.02778935,
   0.05635603};
   gre = new TGraphErrors(30,S12_c_vs_p_fx1018,S12_c_vs_p_fy1018,S12_c_vs_p_fex1018,S12_c_vs_p_fey1018);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1018 = new TH1F("Graph_S12_c_vs_p1018","S12",100,0,3300);
   Graph_S12_c_vs_p1018->SetMinimum(-4.131377);
   Graph_S12_c_vs_p1018->SetMaximum(17.16331);
   Graph_S12_c_vs_p1018->SetDirectory(0);
   Graph_S12_c_vs_p1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1018->SetLineColor(ci);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1018->GetXaxis()->SetRange(1,91);
   Graph_S12_c_vs_p1018->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1018->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1018->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1018->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1018->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1018->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1018->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1018->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1018->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1018);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1019[30] = {
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
   Double_t S18_c_vs_p_fy1019[30] = {
   -6.685348,
   -1.549227,
   -0.2928335,
   -1.844377,
   -1.914424,
   -1.05699,
   -0.375674,
   -0.3265355,
   -0.1749941,
   -0.1998218,
   -0.2828877,
   -0.1959197,
   -0.1397667,
   -0.1275436,
   -0.120719,
   -0.1107986,
   -0.1406829,
   -0.1464054,
   -0.12221,
   -0.08916809,
   -0.0676901,
   -0.09188689,
   -0.09407269,
   -0.08877998,
   -0.1117324,
   -0.04698804,
   -0.07759097,
   -0.1286903,
   -0.05972337,
   -0.07390126};
   Double_t S18_c_vs_p_fex1019[30] = {
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
   Double_t S18_c_vs_p_fey1019[30] = {
   0.8818535,
   0.7399233,
   0.323904,
   0.1130448,
   0.06289189,
   0.04798549,
   0.0420587,
   0.03885998,
   0.03645681,
   0.0343125,
   0.03271784,
   0.03129119,
   0.02989964,
   0.02878694,
   0.02778236,
   0.02694322,
   0.02607143,
   0.02549473,
   0.02500771,
   0.0246199,
   0.02445234,
   0.0240903,
   0.02394725,
   0.02388228,
   0.02401844,
   0.02430946,
   0.02467861,
   0.02523809,
   0.02847578,
   0.05906679};
   gre = new TGraphErrors(30,S18_c_vs_p_fx1019,S18_c_vs_p_fy1019,S18_c_vs_p_fex1019,S18_c_vs_p_fey1019);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1019 = new TH1F("Graph_S18_c_vs_p1019","S18",100,0,3300);
   Graph_S18_c_vs_p1019->SetMinimum(-8.327029);
   Graph_S18_c_vs_p1019->SetMaximum(0.7908977);
   Graph_S18_c_vs_p1019->SetDirectory(0);
   Graph_S18_c_vs_p1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1019->SetLineColor(ci);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1019->GetXaxis()->SetRange(1,91);
   Graph_S18_c_vs_p1019->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1019->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1019->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1019->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1019->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1019->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1019->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1019->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1019->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1019);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.79,0.69,0.89,0.89,NULL,"brNDC");
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
