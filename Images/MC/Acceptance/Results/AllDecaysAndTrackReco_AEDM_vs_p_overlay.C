void AllDecaysAndTrackReco_AEDM_vs_p_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 11:40:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-370.8786,-0.08001138,3337.907,0.4274637);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t AEDM_vs_p_thetaY_fx1003[12] = {
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
   Double_t AEDM_vs_p_thetaY_fy1003[12] = {
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
   Double_t AEDM_vs_p_thetaY_fex1003[12] = {
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
   Double_t AEDM_vs_p_thetaY_fey1003[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1003,AEDM_vs_p_thetaY_fy1003,AEDM_vs_p_thetaY_fex1003,AEDM_vs_p_thetaY_fey1003);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_AEDM_vs_p_thetaY10011003 = new TH1F("Graph_Graph_AEDM_vs_p_thetaY10011003","",100,0,3123.188);
   Graph_Graph_AEDM_vs_p_thetaY10011003->SetMinimum(-0.02926387);
   Graph_Graph_AEDM_vs_p_thetaY10011003->SetMaximum(0.3767162);
   Graph_Graph_AEDM_vs_p_thetaY10011003->SetDirectory(0);
   Graph_Graph_AEDM_vs_p_thetaY10011003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_AEDM_vs_p_thetaY10011003->SetLineColor(ci);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetXaxis()->SetRange(1,95);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetXaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetYaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_AEDM_vs_p_thetaY10011003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_AEDM_vs_p_thetaY10011003);
   
   gre->Draw("apl");
   
   Double_t AEDM_vs_p_thetaY_fx1004[12] = {
   124.3911,
   374.0145,
   623.706,
   873.2453,
   1122.825,
   1372.234,
   1621.448,
   1870.625,
   2119.352,
   2367.231,
   2613.18,
   2850.349};
   Double_t AEDM_vs_p_thetaY_fy1004[12] = {
   -0.0006682914,
   0.01390603,
   0.04351871,
   0.09471384,
   0.1533574,
   0.1627333,
   0.1841965,
   0.1775473,
   0.1458249,
   0.1484533,
   0.1002529,
   0.04625874};
   Double_t AEDM_vs_p_thetaY_fex1004[12] = {
   0.022956,
   0.02346665,
   0.02411141,
   0.02499881,
   0.02620537,
   0.02782515,
   0.02997202,
   0.03285355,
   0.03696012,
   0.0431715,
   0.05382126,
   0.07665942};
   Double_t AEDM_vs_p_thetaY_fey1004[12] = {
   0.004708439,
   0.006712468,
   0.007745187,
   0.008032809,
   0.008036764,
   0.007892159,
   0.007833657,
   0.007551603,
   0.0073237,
   0.007323978,
   0.007448894,
   0.007704578};
   gre = new TGraphErrors(12,AEDM_vs_p_thetaY_fx1004,AEDM_vs_p_thetaY_fy1004,AEDM_vs_p_thetaY_fex1004,AEDM_vs_p_thetaY_fey1004);
   gre->SetName("AEDM_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_AEDM_vs_p_thetaY10021004 = new TH1F("Graph_Graph_AEDM_vs_p_thetaY10021004","",100,0,3123.031);
   Graph_Graph_AEDM_vs_p_thetaY10021004->SetMinimum(-0.03031713);
   Graph_Graph_AEDM_vs_p_thetaY10021004->SetMaximum(0.2208862);
   Graph_Graph_AEDM_vs_p_thetaY10021004->SetDirectory(0);
   Graph_Graph_AEDM_vs_p_thetaY10021004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_AEDM_vs_p_thetaY10021004->SetLineColor(ci);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetXaxis()->SetRange(1,101);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetXaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetYaxis()->CenterTitle(true);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_AEDM_vs_p_thetaY10021004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_AEDM_vs_p_thetaY10021004);
   
   gre->Draw("pl ");
   
   Double_t S0S12S18_AEDM_vs_p_thetaY_fx1005[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fy1005[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fex1005[11] = {
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
   Double_t S0S12S18_AEDM_vs_p_thetaY_fey1005[11] = {
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
   gre = new TGraphErrors(11,S0S12S18_AEDM_vs_p_thetaY_fx1005,S0S12S18_AEDM_vs_p_thetaY_fy1005,S0S12S18_AEDM_vs_p_thetaY_fex1005,S0S12S18_AEDM_vs_p_thetaY_fey1005);
   gre->SetName("S0S12S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S0S12S18_AEDM_vs_p_thetaY1005 = new TH1F("Graph_S0S12S18_AEDM_vs_p_thetaY1005","S0S12S18_",100,218.0143,3022.323);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->SetMinimum(-0.3805953);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->SetMaximum(0.1843834);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->SetDirectory(0);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->SetLineColor(ci);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AEDM_vs_p_thetaY1005);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (unweighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (weighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_AEDM_vs_p_thetaY","Reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (unweighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AEDM_vs_p_thetaY","All decays (weighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_AEDM_vs_p_thetaY","Reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
