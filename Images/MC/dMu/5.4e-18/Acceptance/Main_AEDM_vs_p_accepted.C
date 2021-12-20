void Main_AEDM_vs_p_accepted()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec 16 15:59:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-97.59965,-0.05,3376.947,0.45);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AEDM_vs_p_thetaY_fx1005[12] = {
   124.2539,
   373.7923,
   623.4572,
   873.0274,
   1122.67,
   1372.178,
   1621.49,
   1870.756,
   2119.553,
   2367.462,
   2613.359,
   2850.479};
   Double_t AEDM_vs_p_thetaY_fy1005[12] = {
   0.2964107,
   0.3141074,
   0.3069784,
   0.2732134,
   0.2822038,
   0.2512716,
   0.2322109,
   0.2079808,
   0.1675254,
   0.1579271,
   0.1028512,
   0.04835136};
   Double_t AEDM_vs_p_thetaY_fex1005[12] = {
   0.02299459,
   0.02360158,
   0.02437509,
   0.02543063,
   0.02676917,
   0.02849841,
   0.03070777,
   0.03358955,
   0.03763698,
   0.04372902,
   0.05423158,
   0.07692297};
   Double_t AEDM_vs_p_thetaY_fey1005[12] = {
   0.05640746,
   0.02257019,
   0.0165984,
   0.01352441,
   0.01160639,
   0.01029872,
   0.009374379,
   0.008706632,
   0.008227386,
   0.007911081,
   0.007759439,
   0.008008876};
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1005,AEDM_vs_p_thetaY_fy1005,AEDM_vs_p_thetaY_fex1005,AEDM_vs_p_thetaY_fey1005);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AEDM_vs_p_thetaY1005 = new TH1F("Graph_AEDM_vs_p_thetaY1005","",100,0,3123.188);
   Graph_AEDM_vs_p_thetaY1005->SetMinimum(0);
   Graph_AEDM_vs_p_thetaY1005->SetMaximum(0.4);
   Graph_AEDM_vs_p_thetaY1005->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1005->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1005->GetXaxis()->SetRange(9,97);
   Graph_AEDM_vs_p_thetaY1005->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1005->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1005->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1005->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1005->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1005->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1005);
   
   gre->Draw("ap");
   
   Double_t AEDM_vs_p_thetaY_fx1006[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1006[12] = {
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
   Double_t AEDM_vs_p_thetaY_fex1006[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1006[12] = {
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
   gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1006,AEDM_vs_p_thetaY_fy1006,AEDM_vs_p_thetaY_fex1006,AEDM_vs_p_thetaY_fey1006);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AEDM_vs_p_thetaY1006 = new TH1F("Graph_AEDM_vs_p_thetaY1006","",100,0,3121.1);
   Graph_AEDM_vs_p_thetaY1006->SetMinimum(0);
   Graph_AEDM_vs_p_thetaY1006->SetMaximum(0.4);
   Graph_AEDM_vs_p_thetaY1006->SetDirectory(0);
   Graph_AEDM_vs_p_thetaY1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_AEDM_vs_p_thetaY1006->SetLineColor(ci);
   Graph_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_AEDM_vs_p_thetaY1006->GetXaxis()->SetRange(9,97);
   Graph_AEDM_vs_p_thetaY1006->GetXaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1006->GetXaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_AEDM_vs_p_thetaY1006->GetYaxis()->CenterTitle(true);
   Graph_AEDM_vs_p_thetaY1006->GetYaxis()->SetNdivisions(4000510);
   Graph_AEDM_vs_p_thetaY1006->GetYaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleSize(0.04);
   Graph_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleFont(42);
   Graph_AEDM_vs_p_thetaY1006->GetZaxis()->SetLabelFont(42);
   Graph_AEDM_vs_p_thetaY1006->GetZaxis()->SetTitleOffset(1);
   Graph_AEDM_vs_p_thetaY1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AEDM_vs_p_thetaY1006);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1007[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1007[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1007[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1007[11] = {
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
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1007,S0S12S18_AEDM_vs_p_thetaY_fy1007,S0S12S18_AEDM_vs_p_thetaY_fex1007,S0S12S18_AEDM_vs_p_thetaY_fey1007);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1007 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1007","S0S12S18_",100,217.7781,3026.531);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->SetMinimum(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->SetMaximum(0.4);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetXaxis()->SetRange(2,100);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1007);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1008[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1008[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1008[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1008[11] = {
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
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1008,S0S12S18_AEDM_vs_p_thetaY_fy1008,S0S12S18_AEDM_vs_p_thetaY_fex1008,S0S12S18_AEDM_vs_p_thetaY_fey1008);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1008 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1008","S0S12S18_",100,218.0143,3022.323);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->SetMinimum(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->SetMaximum(0.4);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetXaxis()->SetRange(2,100);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1008);
   
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
