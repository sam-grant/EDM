void c_vs_p_slice_overlay_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 10:23:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-410,-2.5,3690,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_slice_fx1237[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0_c_vs_p_slice_fy1237[14] = {
   11.38585,
   2.314559,
   -0.2731902,
   -0.1723019,
   -0.2190988,
   -0.08786487,
   -0.1757591,
   -0.1264604,
   -0.07992391,
   0.0393289,
   -0.02721495,
   -0.03426103,
   0.05078259,
   -0.1213671};
   Double_t S0_c_vs_p_slice_fex1237[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_slice_fey1237[14] = {
   0.5876283,
   0.106062,
   0.05318917,
   0.03753275,
   0.03218427,
   0.02972352,
   0.02833083,
   0.02722689,
   0.02742224,
   0.02830675,
   0.02933989,
   0.031333,
   0.0331018,
   0.09429829};
   TGraphErrors *gre = new TGraphErrors(14,S0_c_vs_p_slice_fx1237,S0_c_vs_p_slice_fy1237,S0_c_vs_p_slice_fex1237,S0_c_vs_p_slice_fey1237);
   gre->SetName("S0_c_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_slice1237 = new TH1F("Graph_S0_c_vs_p_slice1237","",100,0,3280);
   Graph_S0_c_vs_p_slice1237->SetMinimum(-2);
   Graph_S0_c_vs_p_slice1237->SetMaximum(2);
   Graph_S0_c_vs_p_slice1237->SetDirectory(0);
   Graph_S0_c_vs_p_slice1237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_slice1237->SetLineColor(ci);
   Graph_S0_c_vs_p_slice1237->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p_slice1237->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1237->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1237->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1237->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1237->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1237->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_slice1237->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1237->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_slice1237->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1237->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1237->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1237->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1237->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1237->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_slice1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_slice1237);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_slice_fx1238[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12_c_vs_p_slice_fy1238[14] = {
   10.68225,
   2.027834,
   -0.5616825,
   -0.625001,
   -0.4776215,
   -0.481326,
   -0.3547866,
   -0.2520394,
   -0.1651632,
   -0.1276427,
   -0.1453984,
   -0.08432742,
   -0.04859981,
   -0.1396107};
   Double_t S12_c_vs_p_slice_fex1238[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_slice_fey1238[14] = {
   0.5674825,
   0.1060105,
   0.05322052,
   0.0374335,
   0.03209459,
   0.02955933,
   0.02828385,
   0.02746771,
   0.02803666,
   0.02969197,
   0.03183698,
   0.0342267,
   0.03627491,
   0.1088255};
   gre = new TGraphErrors(14,S12_c_vs_p_slice_fx1238,S12_c_vs_p_slice_fy1238,S12_c_vs_p_slice_fex1238,S12_c_vs_p_slice_fey1238);
   gre->SetName("S12_c_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_slice1238 = new TH1F("Graph_S12_c_vs_p_slice1238","S12",100,0,3280);
   Graph_S12_c_vs_p_slice1238->SetMinimum(-1.853652);
   Graph_S12_c_vs_p_slice1238->SetMaximum(12.44095);
   Graph_S12_c_vs_p_slice1238->SetDirectory(0);
   Graph_S12_c_vs_p_slice1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_slice1238->SetLineColor(ci);
   Graph_S12_c_vs_p_slice1238->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p_slice1238->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1238->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1238->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1238->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_slice1238->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1238->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_slice1238->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1238->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_slice1238->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1238->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1238->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_slice1238->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1238->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1238->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_slice1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_slice1238);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_slice_fx1239[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S18_c_vs_p_slice_fy1239[14] = {
   11.78711,
   2.29611,
   -0.4615714,
   -0.5092863,
   -0.367322,
   -0.3493113,
   -0.3165967,
   -0.2276223,
   -0.2245396,
   -0.1281729,
   -0.1249778,
   -0.1082396,
   -0.1506981,
   -0.4635627};
   Double_t S18_c_vs_p_slice_fex1239[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_slice_fey1239[14] = {
   0.5588751,
   0.1065211,
   0.05312446,
   0.03719114,
   0.03189895,
   0.02962342,
   0.02838828,
   0.02788664,
   0.0286121,
   0.03006082,
   0.03286827,
   0.03476465,
   0.03737486,
   0.1217396};
   gre = new TGraphErrors(14,S18_c_vs_p_slice_fx1239,S18_c_vs_p_slice_fy1239,S18_c_vs_p_slice_fex1239,S18_c_vs_p_slice_fey1239);
   gre->SetName("S18_c_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_slice1239 = new TH1F("Graph_S18_c_vs_p_slice1239","S18",100,0,3280);
   Graph_S18_c_vs_p_slice1239->SetMinimum(-1.878431);
   Graph_S18_c_vs_p_slice1239->SetMaximum(13.63911);
   Graph_S18_c_vs_p_slice1239->SetDirectory(0);
   Graph_S18_c_vs_p_slice1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_slice1239->SetLineColor(ci);
   Graph_S18_c_vs_p_slice1239->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p_slice1239->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1239->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1239->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1239->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_slice1239->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1239->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_slice1239->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1239->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_slice1239->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1239->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1239->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_slice1239->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1239->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1239->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_slice1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_slice1239);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_slice_fx1240[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12S18_c_vs_p_slice_fy1240[14] = {
   11.03481,
   2.155871,
   -0.5115999,
   -0.5672996,
   -0.4219537,
   -0.4155175,
   -0.3361969,
   -0.2411346,
   -0.1931539,
   -0.1296617,
   -0.1340394,
   -0.09489795,
   -0.09809504,
   -0.2270975};
   Double_t S12S18_c_vs_p_slice_fex1240[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_c_vs_p_slice_fey1240[14] = {
   0.4090391,
   0.07520694,
   0.03761001,
   0.02638886,
   0.02262946,
   0.02092907,
   0.02004205,
   0.01957458,
   0.02003423,
   0.02113808,
   0.02289171,
   0.02443583,
   0.02613713,
   0.08664123};
   gre = new TGraphErrors(14,S12S18_c_vs_p_slice_fx1240,S12S18_c_vs_p_slice_fy1240,S12S18_c_vs_p_slice_fex1240,S12S18_c_vs_p_slice_fey1240);
   gre->SetName("S12S18_c_vs_p_slice");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_slice1240 = new TH1F("Graph_S12S18_c_vs_p_slice1240","S12S18",100,0,3280);
   Graph_S12S18_c_vs_p_slice1240->SetMinimum(-1.797442);
   Graph_S12S18_c_vs_p_slice1240->SetMaximum(12.6476);
   Graph_S12S18_c_vs_p_slice1240->SetDirectory(0);
   Graph_S12S18_c_vs_p_slice1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_slice1240->SetLineColor(ci);
   Graph_S12S18_c_vs_p_slice1240->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_c_vs_p_slice1240->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_slice1240->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1240->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_slice1240->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_slice1240->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_slice1240->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_slice1240->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_slice1240->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_slice1240->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1240->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_slice1240->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_slice1240->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_slice1240->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1240->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_slice1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_slice1240);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_slice_fx1241[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0S12S18_c_vs_p_slice_fy1241[14] = {
   10.97518,
   2.210469,
   -0.4309977,
   -0.4354095,
   -0.3546452,
   -0.3060443,
   -0.2824335,
   -0.2017568,
   -0.1539364,
   -0.06890351,
   -0.09474605,
   -0.07109695,
   -0.04186964,
   -0.1437597};
   Double_t S0S12S18_c_vs_p_slice_fex1241[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_c_vs_p_slice_fey1241[14] = {
   0.3418172,
   0.06138884,
   0.03071689,
   0.02159127,
   0.01851438,
   0.01711594,
   0.01636486,
   0.01589658,
   0.01618174,
   0.01694435,
   0.01805986,
   0.01929272,
   0.02056291,
   0.06861807};
   gre = new TGraphErrors(14,S0S12S18_c_vs_p_slice_fx1241,S0S12S18_c_vs_p_slice_fy1241,S0S12S18_c_vs_p_slice_fex1241,S0S12S18_c_vs_p_slice_fey1241);
   gre->SetName("S0S12S18_c_vs_p_slice");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_slice1241 = new TH1F("Graph_S0S12S18_c_vs_p_slice1241","S0S12S18",100,0,3280);
   Graph_S0S12S18_c_vs_p_slice1241->SetMinimum(-1.639586);
   Graph_S0S12S18_c_vs_p_slice1241->SetMaximum(12.49487);
   Graph_S0S12S18_c_vs_p_slice1241->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_slice1241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_slice1241->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_slice1241->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_c_vs_p_slice1241->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_slice1241->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1241->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_slice1241->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_slice1241->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_slice1241->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_slice1241->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_slice1241->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_slice1241->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1241->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_slice1241->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_slice1241->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_slice1241->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1241->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_slice1241->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_slice1241);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_slice","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p_slice","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p_slice","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
