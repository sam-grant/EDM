void Main_AEDM_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec 16 15:59:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-97.59227,-0.05,3376.692,0.45);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AEDM_vs_p_thetaY_fx1001[12] = {
   124.3988,
   374.0376,
   623.6681,
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214,
   2850.256};
   Double_t AEDM_vs_p_thetaY_fy1001[12] = {
   0.2626014,
   0.3266263,
   0.3126178,
   0.3194014,
   0.304208,
   0.2827338,
   0.2561972,
   0.2322856,
   0.1672556,
   0.1603877,
   0.09422154,
   0.05281578};
   Double_t AEDM_vs_p_thetaY_fex1001[12] = {
   0.02929449,
   0.0299445,
   0.03076586,
   0.03189946,
   0.03344109,
   0.03552055,
   0.03823304,
   0.04193465,
   0.04715784,
   0.05508997,
   0.06872581,
   0.0977494};
   Double_t AEDM_vs_p_thetaY_fey1001[12] = {
   0.07187952,
   0.02880548,
   0.02123902,
   0.01737657,
   0.01495733,
   0.01332091,
   0.01212811,
   0.01125901,
   0.01061141,
   0.01016645,
   0.009940078,
   0.01022365};
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1001,AEDM_vs_p_thetaY_fy1001,AEDM_vs_p_thetaY_fex1001,AEDM_vs_p_thetaY_fey1001);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AEDM_vs_p_thetaY1001 = new TH1F("Graph_AEDM_vs_p_thetaY1001","",100,0,3122.952);
   Graph_AEDM_vs_p_thetaY1001->SetMinimum(0);
   Graph_AEDM_vs_p_thetaY1001->SetMaximum(0.4);
   Graph_AEDM_vs_p_thetaY1001->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1001->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetRange(9,97);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1001);
   
   gre->Draw("ap");
   
   Double_t AEDM_vs_p_thetaY_fx1002[12] = {
   141.6725,
   381.062,
   628.3398,
   876.3344,
   1124.572,
   1373.652,
   1622.832,
   1871.413,
   2119.63,
   2367.743,
   2613.51,
   2850.19};
   Double_t AEDM_vs_p_thetaY_fy1002[12] = {
   0.2407713,
   0.2503997,
   0.2599309,
   0.2613378,
   0.2582512,
   0.2571163,
   0.2336383,
   0.2101411,
   0.182924,
   0.1504165,
   0.113608,
   0.06036094};
   Double_t AEDM_vs_p_thetaY_fex1002[12] = {
   0.02559179,
   0.02344924,
   0.02122073,
   0.01994424,
   0.01973897,
   0.02022785,
   0.02106728,
   0.02255025,
   0.02503905,
   0.02905985,
   0.03585142,
   0.05075603};
   Double_t AEDM_vs_p_thetaY_fey1002[12] = {
   0.04956521,
   0.02065961,
   0.01351055,
   0.01012575,
   0.008373368,
   0.007274865,
   0.00646593,
   0.005922855,
   0.005561101,
   0.005313085,
   0.005149848,
   0.00529525};
   gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1002,AEDM_vs_p_thetaY_fy1002,AEDM_vs_p_thetaY_fex1002,AEDM_vs_p_thetaY_fey1002);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AEDM_vs_p_thetaY1002 = new TH1F("Graph_AEDM_vs_p_thetaY1002","",100,0,3121.1);
   Graph_AEDM_vs_p_thetaY1002->SetMinimum(0);
   Graph_AEDM_vs_p_thetaY1002->SetMaximum(0.4);
   Graph_AEDM_vs_p_thetaY1002->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1002->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetRange(9,97);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1002);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1003[11] = {
   451.9222,
   653.3407,
   880.2728,
   1123.023,
   1371.209,
   1620.261,
   1867.114,
   2115.52,
   2363.035,
   2613.878,
   2792.287};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1003[11] = {
   -0.03420192,
   0.1579651,
   0.1213471,
   0.138783,
   0.133241,
   0.1566269,
   0.1352461,
   0.09821565,
   0.06542871,
   0.09703278,
   -0.01784344};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1003[11] = {
   0.08131635,
   0.06860933,
   0.0497006,
   0.04855757,
   0.0517886,
   0.05726668,
   0.066648,
   0.08241962,
   0.1061385,
   0.1304484,
   0.1816574};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1003[11] = {
   0.1083856,
   0.0362178,
   0.02080018,
   0.0170722,
   0.01563844,
   0.01489437,
   0.0149226,
   0.01561385,
   0.01658461,
   0.01646795,
   0.03598277};
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1003,S0S12S18_AEDM_vs_p_thetaY_fy1003,S0S12S18_AEDM_vs_p_thetaY_fex1003,S0S12S18_AEDM_vs_p_thetaY_fey1003);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1003 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1003","S0S12S18_",100,217.7781,3026.531);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetMinimum(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetMaximum(0.4);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetRange(2,100);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1003);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1004[11] = {
   451.7878,
   653.2973,
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023,
   2788.472};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1004[11] = {
   -0.01468402,
   0.1536923,
   0.1239521,
   0.1381271,
   0.1378592,
   0.1536674,
   0.1339238,
   0.1027149,
   0.06530452,
   0.09227117,
   -0.006765787};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1004[11] = {
   0.08119292,
   0.06850517,
   0.04968577,
   0.04853003,
   0.05180005,
   0.05728402,
   0.06665481,
   0.0826074,
   0.106243,
   0.1304439,
   0.1582888};
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1004[11] = {
   0.1083876,
   0.03628205,
   0.02085273,
   0.0171317,
   0.01570263,
   0.01494665,
   0.01497984,
   0.01568636,
   0.01666708,
   0.01653551,
   0.03740565};
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1004,S0S12S18_AEDM_vs_p_thetaY_fy1004,S0S12S18_AEDM_vs_p_thetaY_fex1004,S0S12S18_AEDM_vs_p_thetaY_fey1004);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1004 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1004","S0S12S18_",100,218.0143,3022.323);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->SetMinimum(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->SetMaximum(0.4);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetXaxis()->SetRange(2,100);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1004);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.59,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","Accepted decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_AEDM_vs_p_thetaY","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_AEDM_vs_p_thetaY","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
