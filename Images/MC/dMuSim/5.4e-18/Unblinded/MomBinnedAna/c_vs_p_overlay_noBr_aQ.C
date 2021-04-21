void c_vs_p_overlay_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:39 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.5,3378.375,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1197[30] = {
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
   Double_t S0_c_vs_p_fy1197[30] = {
   3.054978,
   0.3140047,
   2.236949,
   -0.9194385,
   -1.264462,
   -0.6875489,
   -0.1541867,
   -0.09492828,
   -0.04956804,
   -0.01197091,
   0.03815234,
   -0.0203849,
   0.03010755,
   -0.0007456281,
   0.04177481,
   0.06865365,
   0.03852551,
   0.05394285,
   -0.007418336,
   0.02285422,
   0.004791843,
   0.03538509,
   -0.009062943,
   0.00295177,
   -0.02549154,
   0.01743444,
   -0.03366487,
   0.004191849,
   -0.04715645,
   0.2136516};
   Double_t S0_c_vs_p_fex1197[30] = {
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
   Double_t S0_c_vs_p_fey1197[30] = {
   0.9404499,
   0.6290024,
   0.2766765,
   0.09816879,
   0.05384174,
   0.04121318,
   0.03603541,
   0.03292896,
   0.03040026,
   0.02849059,
   0.02683307,
   0.02540767,
   0.02412511,
   0.02303792,
   0.02206754,
   0.02126347,
   0.02058606,
   0.01997403,
   0.01952187,
   0.01923582,
   0.01895715,
   0.01873012,
   0.01863798,
   0.01866398,
   0.0188054,
   0.01896758,
   0.01932843,
   0.02017561,
   0.0226162,
   0.0509729};
   TGraphErrors *gre = new TGraphErrors(30,S0_c_vs_p_fx1197,S0_c_vs_p_fy1197,S0_c_vs_p_fex1197,S0_c_vs_p_fey1197);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1197 = new TH1F("Graph_S0_c_vs_p1197","",100,0,3300);
   Graph_S0_c_vs_p1197->SetMinimum(-2);
   Graph_S0_c_vs_p1197->SetMaximum(2);
   Graph_S0_c_vs_p1197->SetDirectory(0);
   Graph_S0_c_vs_p1197->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1197->SetLineColor(ci);
   Graph_S0_c_vs_p1197->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1197->GetXaxis()->SetRange(1,91);
   Graph_S0_c_vs_p1197->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1197->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1197->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1197->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1197->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1197->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1197->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1197->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1197->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1197->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1197->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1197->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1197->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1197->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1197);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1198[30] = {
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
   Double_t S12_c_vs_p_fy1198[30] = {
   -8.661905,
   -0.06456023,
   1.640837,
   -1.68877,
   -1.64385,
   -0.9673404,
   -0.6067335,
   -0.5239706,
   -0.4517434,
   -0.3620652,
   -0.2997034,
   -0.2419073,
   -0.1865384,
   -0.1859197,
   -0.1963852,
   -0.1435744,
   -0.163151,
   -0.1026417,
   -0.1538338,
   -0.1354305,
   -0.09301577,
   -0.1094201,
   -0.0884282,
   -0.1273372,
   -0.0848689,
   -0.08114769,
   -0.09892257,
   -0.1209312,
   -0.08340383,
   0.1189875};
   Double_t S12_c_vs_p_fex1198[30] = {
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
   Double_t S12_c_vs_p_fey1198[30] = {
   0.6125172,
   0.5911401,
   0.2701888,
   0.09580056,
   0.05411219,
   0.04139488,
   0.0360567,
   0.03292415,
   0.03048191,
   0.02850133,
   0.02689582,
   0.02552996,
   0.02427702,
   0.02315152,
   0.02218314,
   0.02135705,
   0.0206731,
   0.02014173,
   0.01964286,
   0.01932735,
   0.0190605,
   0.01895936,
   0.01891973,
   0.01898074,
   0.01912178,
   0.01941108,
   0.01983089,
   0.02057137,
   0.02358848,
   0.05466497};
   gre = new TGraphErrors(30,S12_c_vs_p_fx1198,S12_c_vs_p_fy1198,S12_c_vs_p_fex1198,S12_c_vs_p_fey1198);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1198 = new TH1F("Graph_S12_c_vs_p1198","S12",100,0,3300);
   Graph_S12_c_vs_p1198->SetMinimum(-10.39297);
   Graph_S12_c_vs_p1198->SetMaximum(3.029571);
   Graph_S12_c_vs_p1198->SetDirectory(0);
   Graph_S12_c_vs_p1198->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1198->SetLineColor(ci);
   Graph_S12_c_vs_p1198->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1198->GetXaxis()->SetRange(1,91);
   Graph_S12_c_vs_p1198->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1198->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1198->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1198->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1198->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1198->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1198->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1198->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1198->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1198->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1198->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1198->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1198->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1198->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1198->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1198);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1199[30] = {
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
   Double_t S18_c_vs_p_fy1199[30] = {
   -2.722728,
   -0.4377555,
   1.056371,
   -1.430196,
   -1.651586,
   -0.8753038,
   -0.3680099,
   -0.3226255,
   -0.2201141,
   -0.2383899,
   -0.2604325,
   -0.2418601,
   -0.132145,
   -0.1364863,
   -0.1119962,
   -0.08555921,
   -0.0941831,
   -0.1044564,
   -0.09163005,
   -0.0766615,
   -0.06859971,
   -0.07702378,
   -0.0792388,
   -0.1005882,
   -0.09233266,
   -0.06213907,
   -0.1011917,
   -0.1033857,
   -0.07905055,
   0.04233681};
   Double_t S18_c_vs_p_fex1199[30] = {
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
   Double_t S18_c_vs_p_fey1199[30] = {
   0.8464927,
   0.5985696,
   0.2673778,
   0.09707518,
   0.05440225,
   0.04147511,
   0.03609806,
   0.0329623,
   0.03062385,
   0.02857943,
   0.02703835,
   0.0256551,
   0.02433195,
   0.02326273,
   0.022306,
   0.02152491,
   0.02077408,
   0.02024828,
   0.01986043,
   0.01949091,
   0.01934285,
   0.01912592,
   0.0190949,
   0.01916086,
   0.01934791,
   0.01971898,
   0.02009667,
   0.02096651,
   0.02432522,
   0.05828884};
   gre = new TGraphErrors(30,S18_c_vs_p_fx1199,S18_c_vs_p_fy1199,S18_c_vs_p_fex1199,S18_c_vs_p_fey1199);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1199 = new TH1F("Graph_S18_c_vs_p1199","S18",100,0,3300);
   Graph_S18_c_vs_p1199->SetMinimum(-4.058517);
   Graph_S18_c_vs_p1199->SetMaximum(1.813046);
   Graph_S18_c_vs_p1199->SetDirectory(0);
   Graph_S18_c_vs_p1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1199->SetLineColor(ci);
   Graph_S18_c_vs_p1199->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1199->GetXaxis()->SetRange(1,91);
   Graph_S18_c_vs_p1199->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1199->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1199->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1199->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1199->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1199->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1199->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1199->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1199->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1199->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1199->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1199->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1199->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1199->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1199);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
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
