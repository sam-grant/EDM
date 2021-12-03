void AllGraphs()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:01:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-413.7765,-0.14375,3411.704,0.29375);
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
   0.1619321,
   0.1936034,
   0.1853727,
   0.1880927,
   0.17815,
   0.1672124,
   0.1508854,
   0.1368204,
   0.09826702,
   0.0940857,
   0.05507914,
   0.03133916};
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
   0.04230012,
   0.01695175,
   0.01249898,
   0.01022601,
   0.008802462,
   0.007839758,
   0.00713725,
   0.00662596,
   0.006244978,
   0.005983381,
   0.005849274,
   0.006016688};
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
   Graph_allDecays1001->GetXaxis()->SetRange(0,97);
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
   0.144158,
   0.1503446,
   0.1526525,
   0.1551435,
   0.152199,
   0.1520013,
   0.1383273,
   0.1244362,
   0.1078302,
   0.08919229,
   0.06709501,
   0.03589312};
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
   0.02916739,
   0.01215787,
   0.007950807,
   0.005958927,
   0.00492771,
   0.004281258,
   0.003805373,
   0.003485618,
   0.003272661,
   0.003126542,
   0.003030634,
   0.003115993};
   gre = new TGraphErrors(12,acceptedDecays_fx1002,acceptedDecays_fy1002,acceptedDecays_fex1002,acceptedDecays_fey1002);
   gre->SetName("acceptedDecays");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
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
   Graph_acceptedDecays1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_acceptedDecays1002->GetXaxis()->SetRange(0,97);
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
   -0.0227537,
   0.09516739,
   0.07243882,
   0.08259043,
   0.07774151,
   0.09151081,
   0.07942015,
   0.05897933,
   0.03823984,
   0.05772124,
   -0.007958637};
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
   0.06374959,
   0.02131316,
   0.01224326,
   0.01004791,
   0.009205664,
   0.008765839,
   0.008785619,
   0.009193142,
   0.009766754,
   0.009696812,
   0.02116826};
   gre = new TGraphErrors(11,trackTruth_fx1003,trackTruth_fy1003,trackTruth_fex1003,trackTruth_fey1003);
   gre->SetName("trackTruth");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
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
   Graph_trackTruth1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackTruth1003->GetXaxis()->SetRange(0,100);
   Graph_trackTruth1003->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_trackTruth1003->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1003);
   
   gre->Draw("p ");
   
   Double_t trackReco_fx1004[11] = {
   451.788,
   653.3045,
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041,
   2614.061,
   2788.497};
   Double_t trackReco_fy1004[11] = {
   -0.00966821,
   0.08962262,
   0.07456527,
   0.08291077,
   0.08277196,
   0.08848156,
   0.07888338,
   0.06189772,
   0.03995412,
   0.05663225,
   -0.008615418};
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
   0.06443398,
   0.02156648,
   0.0124005,
   0.01018395,
   0.00933314,
   0.008881665,
   0.008899678,
   0.009315277,
   0.009894346,
   0.009813133,
   0.02214676};
   gre = new TGraphErrors(11,trackReco_fx1004,trackReco_fy1004,trackReco_fex1004,trackReco_fey1004);
   gre->SetName("trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1004 = new TH1F("Graph_trackReco1004","",100,218.1171,3022.168);
   Graph_trackReco1004->SetMinimum(-0.1);
   Graph_trackReco1004->SetMaximum(0.25);
   Graph_trackReco1004->SetDirectory(0);
   Graph_trackReco1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1004->SetLineColor(ci);
   Graph_trackReco1004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackReco1004->GetXaxis()->SetRange(0,100);
   Graph_trackReco1004->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
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
