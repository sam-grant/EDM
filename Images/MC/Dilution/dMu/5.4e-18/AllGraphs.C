void AllGraphs()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 15:41:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-97.58882,-0.14375,3376.572,0.29375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_fx1001[12] = {
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
   Double_t allDecays_fy1001[12] = {
   0.15454,
   0.1922184,
   0.1839745,
   0.1879667,
   0.1790254,
   0.1663879,
   0.1507712,
   0.1366993,
   0.09842933,
   0.09438763,
   0.05544906,
   0.03108191};
   Double_t allDecays_fex1001[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t allDecays_fey1001[12] = {
   0.04230085,
   0.01695192,
   0.01249909,
   0.01022605,
   0.008802339,
   0.007839308,
   0.007137349,
   0.006625887,
   0.006244778,
   0.005982922,
   0.005849702,
   0.006016584};
   TGraphErrors *gre = new TGraphErrors(12,allDecays_fx1001,allDecays_fy1001,allDecays_fex1001,allDecays_fey1001);
   gre->SetName("allDecays");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays1001 = new TH1F("Graph_allDecays1001","",100,0,3122.841);
   Graph_allDecays1001->SetMinimum(-0.1);
   Graph_allDecays1001->SetMaximum(0.25);
   Graph_allDecays1001->SetDirectory(0);
   Graph_allDecays1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_allDecays1001->SetLineColor(ci);
   Graph_allDecays1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_allDecays1001->GetXaxis()->SetRange(9,97);
   Graph_allDecays1001->GetXaxis()->CenterTitle(true);
   Graph_allDecays1001->GetXaxis()->SetLabelFont(42);
   Graph_allDecays1001->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays1001->GetXaxis()->SetTitleFont(42);
   Graph_allDecays1001->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_allDecays1001->GetYaxis()->CenterTitle(true);
   Graph_allDecays1001->GetYaxis()->SetNdivisions(4000510);
   Graph_allDecays1001->GetYaxis()->SetLabelFont(42);
   Graph_allDecays1001->GetYaxis()->SetTitleSize(0.04);
   Graph_allDecays1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_allDecays1001->GetYaxis()->SetTitleFont(42);
   Graph_allDecays1001->GetZaxis()->SetLabelFont(42);
   Graph_allDecays1001->GetZaxis()->SetTitleOffset(1);
   Graph_allDecays1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_allDecays1001);
   
   gre->Draw("ap");
   
   Double_t acceptedDecays_fx1002[12] = {
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
   Double_t acceptedDecays_fy1002[12] = {
   0.1416931,
   0.1473594,
   0.1529684,
   0.1537964,
   0.15198,
   0.151312,
   0.1374953,
   0.1236673,
   0.1076501,
   0.08851961,
   0.06685792,
   0.03552221};
   Double_t acceptedDecays_fex1002[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t acceptedDecays_fey1002[12] = {
   0.02916896,
   0.01215811,
   0.007950912,
   0.005958971,
   0.004927699,
   0.004281234,
   0.003805178,
   0.00348558,
   0.003272689,
   0.003126732,
   0.003030668,
   0.003116237};
   gre = new TGraphErrors(12,acceptedDecays_fx1002,acceptedDecays_fy1002,acceptedDecays_fex1002,acceptedDecays_fey1002);
   gre->SetName("acceptedDecays");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_acceptedDecays1002 = new TH1F("Graph_acceptedDecays1002","",100,0,3121.042);
   Graph_acceptedDecays1002->SetMinimum(-0.1);
   Graph_acceptedDecays1002->SetMaximum(0.25);
   Graph_acceptedDecays1002->SetDirectory(0);
   Graph_acceptedDecays1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_acceptedDecays1002->SetLineColor(ci);
   Graph_acceptedDecays1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_acceptedDecays1002->GetXaxis()->SetRange(9,97);
   Graph_acceptedDecays1002->GetXaxis()->SetLabelFont(42);
   Graph_acceptedDecays1002->GetXaxis()->SetTitleOffset(1);
   Graph_acceptedDecays1002->GetXaxis()->SetTitleFont(42);
   Graph_acceptedDecays1002->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_acceptedDecays1002->GetYaxis()->SetLabelFont(42);
   Graph_acceptedDecays1002->GetYaxis()->SetTitleFont(42);
   Graph_acceptedDecays1002->GetZaxis()->SetLabelFont(42);
   Graph_acceptedDecays1002->GetZaxis()->SetTitleOffset(1);
   Graph_acceptedDecays1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_acceptedDecays1002);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_trackTruth_fx1003[11] = {
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
   Double_t S0S12S18_trackTruth_fy1003[11] = {
   -0.02012772,
   0.09296195,
   0.07141234,
   0.08167335,
   0.07841186,
   0.09217439,
   0.07959187,
   0.05779957,
   0.03850457,
   0.05710346,
   -0.0105008};
   Double_t S0S12S18_trackTruth_fex1003[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_trackTruth_fey1003[11] = {
   0.06378456,
   0.02131405,
   0.01224083,
   0.01004693,
   0.009203171,
   0.008765288,
   0.008781899,
   0.009188697,
   0.009759984,
   0.00969133,
   0.02117574};
   gre = new TGraphErrors(11,S0S12S18_trackTruth_fx1003,S0S12S18_trackTruth_fy1003,S0S12S18_trackTruth_fex1003,S0S12S18_trackTruth_fey1003);
   gre->SetName("S0S12S18_trackTruth");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackTruth1003 = new TH1F("Graph_S0S12S18_trackTruth1003","S0S12S18_",100,217.8857,3026.323);
   Graph_S0S12S18_trackTruth1003->SetMinimum(-0.1);
   Graph_S0S12S18_trackTruth1003->SetMaximum(0.25);
   Graph_S0S12S18_trackTruth1003->SetDirectory(0);
   Graph_S0S12S18_trackTruth1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackTruth1003->SetLineColor(ci);
   Graph_S0S12S18_trackTruth1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackTruth1003->GetXaxis()->SetRange(2,100);
   Graph_S0S12S18_trackTruth1003->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1003->GetXaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackTruth1003->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackTruth1003->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackTruth1003->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1003->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackTruth1003->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackTruth1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackTruth1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackTruth1003);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_trackReco_fx1004[11] = {
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
   Double_t S0S12S18_trackReco_fy1004[11] = {
   -0.008641496,
   0.0904474,
   0.07294539,
   0.08128732,
   0.08112969,
   0.09043276,
   0.07881371,
   0.06044737,
   0.03843148,
   0.05430127,
   -0.003981642};
   Double_t S0S12S18_trackReco_fex1004[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_trackReco_fey1004[11] = {
   0.06378572,
   0.02135186,
   0.01227176,
   0.01008195,
   0.009240946,
   0.008796052,
   0.008815584,
   0.009231367,
   0.009808522,
   0.009731092,
   0.0220131};
   gre = new TGraphErrors(11,S0S12S18_trackReco_fx1004,S0S12S18_trackReco_fy1004,S0S12S18_trackReco_fex1004,S0S12S18_trackReco_fey1004);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco1004 = new TH1F("Graph_S0S12S18_trackReco1004","S0S12S18_",100,218.1194,3022.14);
   Graph_S0S12S18_trackReco1004->SetMinimum(-0.1);
   Graph_S0S12S18_trackReco1004->SetMaximum(0.25);
   Graph_S0S12S18_trackReco1004->SetDirectory(0);
   Graph_S0S12S18_trackReco1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackReco1004->SetLineColor(ci);
   Graph_S0S12S18_trackReco1004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackReco1004->GetXaxis()->SetRange(2,100);
   Graph_S0S12S18_trackReco1004->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1004->GetXaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1004->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1004->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackReco1004->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1004->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1004->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1004->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackReco1004);
   
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
   TLegendEntry *entry=leg->AddEntry("allDecays","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("acceptedDecays","Accepted decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S0S12S18_trackReco","Reco vertices","lpf");
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
