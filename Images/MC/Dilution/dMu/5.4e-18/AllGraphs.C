void AllGraphs()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 13:32:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-413.7764,-0.14375,3411.704,0.29375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_fx1001[12] = {
   124.3992,
   374.0378,
   623.6659,
   873.2514,
   1122.83,
   1372.241,
   1621.488,
   1870.589,
   2119.347,
   2367.26,
   2613.214,
   2850.255};
   Double_t allDecays_fy1001[12] = {
   0.1619073,
   0.1917905,
   0.1863174,
   0.1874503,
   0.1776173,
   0.1665136,
   0.1514342,
   0.1374813,
   0.09930426,
   0.09428895,
   0.05486989,
   0.03151407};
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
   0.04229771,
   0.01695189,
   0.0124989,
   0.01022546,
   0.008801798,
   0.007839553,
   0.007137342,
   0.006625971,
   0.006244375,
   0.00598306,
   0.005849067,
   0.006015913};
   TGraphErrors *gre = new TGraphErrors(12,allDecays_fx1001,allDecays_fy1001,allDecays_fex1001,allDecays_fey1001);
   gre->SetName("allDecays");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
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
   Graph_allDecays1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_allDecays1001->GetXaxis()->SetRange(0,97);
   Graph_allDecays1001->GetXaxis()->CenterTitle(true);
   Graph_allDecays1001->GetXaxis()->SetLabelFont(42);
   Graph_allDecays1001->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays1001->GetXaxis()->SetTitleFont(42);
   Graph_allDecays1001->GetYaxis()->SetTitle("d_{EDM}(p)");
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
   141.6721,
   381.0619,
   628.3411,
   876.335,
   1124.572,
   1373.653,
   1622.832,
   1871.413,
   2119.63,
   2367.742,
   2613.509,
   2850.19};
   Double_t acceptedDecays_fy1002[12] = {
   0.1439656,
   0.150351,
   0.1526425,
   0.1551621,
   0.152178,
   0.1519883,
   0.1383126,
   0.1244365,
   0.1078444,
   0.08918378,
   0.0670987,
   0.03589089};
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
   0.02916714,
   0.01215776,
   0.007950736,
   0.005958874,
   0.004927663,
   0.004281214,
   0.003805335,
   0.003485579,
   0.003272624,
   0.0031265,
   0.003030585,
   0.003115937};
   gre = new TGraphErrors(12,acceptedDecays_fx1002,acceptedDecays_fy1002,acceptedDecays_fex1002,acceptedDecays_fey1002);
   gre->SetName("acceptedDecays");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_acceptedDecays1002 = new TH1F("Graph_acceptedDecays1002","",100,0,3121.042);
   Graph_acceptedDecays1002->SetMinimum(-0.1);
   Graph_acceptedDecays1002->SetMaximum(0.25);
   Graph_acceptedDecays1002->SetDirectory(0);
   Graph_acceptedDecays1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_acceptedDecays1002->SetLineColor(ci);
   Graph_acceptedDecays1002->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_acceptedDecays1002->GetXaxis()->SetRange(0,97);
   Graph_acceptedDecays1002->GetXaxis()->SetLabelFont(42);
   Graph_acceptedDecays1002->GetXaxis()->SetTitleOffset(1);
   Graph_acceptedDecays1002->GetXaxis()->SetTitleFont(42);
   Graph_acceptedDecays1002->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_acceptedDecays1002->GetYaxis()->SetLabelFont(42);
   Graph_acceptedDecays1002->GetYaxis()->SetTitleFont(42);
   Graph_acceptedDecays1002->GetZaxis()->SetLabelFont(42);
   Graph_acceptedDecays1002->GetZaxis()->SetTitleOffset(1);
   Graph_acceptedDecays1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_acceptedDecays1002);
   
   gre->Draw("p ");
   
   Double_t trackTruth_fx1003[11] = {
   451.9227,
   653.3392,
   880.2735,
   1123.022,
   1371.209,
   1620.262,
   1867.113,
   2115.519,
   2363.039,
   2613.873,
   2792.289};
   Double_t trackTruth_fy1003[11] = {
   -0.02351028,
   0.09526525,
   0.0725111,
   0.08264627,
   0.07771398,
   0.09148936,
   0.07940486,
   0.05895626,
   0.03816785,
   0.05767948,
   -0.0079906};
   Double_t trackTruth_fex1003[11] = {
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
   Double_t trackTruth_fey1003[11] = {
   0.06375102,
   0.02131359,
   0.01224355,
   0.0100481,
   0.00920587,
   0.008766033,
   0.008785909,
   0.00919343,
   0.009767184,
   0.009697446,
   0.02117012};
   gre = new TGraphErrors(11,trackTruth_fx1003,trackTruth_fy1003,trackTruth_fex1003,trackTruth_fey1003);
   gre->SetName("trackTruth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1003 = new TH1F("Graph_trackTruth1003","",100,217.886,3026.326);
   Graph_trackTruth1003->SetMinimum(-0.1);
   Graph_trackTruth1003->SetMaximum(0.25);
   Graph_trackTruth1003->SetDirectory(0);
   Graph_trackTruth1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1003->SetLineColor(ci);
   Graph_trackTruth1003->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackTruth1003->GetXaxis()->SetRange(0,100);
   Graph_trackTruth1003->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackTruth1003->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1003);
   
   gre->Draw("p ");
   
   Double_t trackReco_fx1004[11] = {
   451.7878,
   653.297,
   880.2628,
   1123.041,
   1371.131,
   1620.23,
   1867.05,
   2115.573,
   2363,
   2614.02,
   2788.473};
   Double_t trackReco_fy1004[11] = {
   -0.004967018,
   0.09179145,
   0.07287521,
   0.08094454,
   0.08019789,
   0.09042406,
   0.07861684,
   0.06185731,
   0.04010342,
   0.05523299,
   -0.007845745};
   Double_t trackReco_fex1004[11] = {
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
   Double_t trackReco_fey1004[11] = {
   0.06372932,
   0.02134454,
   0.01227204,
   0.01008123,
   0.009241647,
   0.008794506,
   0.008816491,
   0.009233293,
   0.009812533,
   0.009733407,
   0.02198099};
   gre = new TGraphErrors(11,trackReco_fx1004,trackReco_fy1004,trackReco_fex1004,trackReco_fey1004);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1004 = new TH1F("Graph_trackReco1004","",100,218.1193,3022.141);
   Graph_trackReco1004->SetMinimum(-0.1);
   Graph_trackReco1004->SetMaximum(0.25);
   Graph_trackReco1004->SetDirectory(0);
   Graph_trackReco1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1004->SetLineColor(ci);
   Graph_trackReco1004->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1004->GetXaxis()->SetRange(0,100);
   Graph_trackReco1004->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1004->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1004);
   
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
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
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
