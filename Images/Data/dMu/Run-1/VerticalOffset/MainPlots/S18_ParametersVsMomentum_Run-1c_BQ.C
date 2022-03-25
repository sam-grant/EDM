void S18_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-85.01655,3218.25,86.89649);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1052[18] = {
   -35.4441,
   -33.63477,
   -14.37277,
   -18.95851,
   -15.60514,
   -21.66097,
   -16.23105,
   -11.864,
   -21.92099,
   -19.88269,
   -17.67096,
   -11.60378,
   -15.07803,
   -25.65472,
   -9.169296,
   -8.051473,
   -17.88305,
   -21.31507};
   Double_t Graph0_fex1052[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1052[18] = {
   18.8161,
   11.58047,
   8.12441,
   6.699426,
   5.890933,
   5.32354,
   5.040986,
   4.801926,
   4.812067,
   4.688042,
   4.902614,
   4.951768,
   5.210565,
   5.339497,
   5.575611,
   6.040928,
   6.306205,
   6.930581};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S18",100,349.5,2899.5);
   Graph_Graph01052->SetMinimum(-67.82524);
   Graph_Graph01052->SetMaximum(69.70519);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1053[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph1_fy1053[18] = {
   48.37238,
   45.52322,
   33.49901,
   30.78172,
   24.57742,
   23.60069,
   17.62157,
   17.97681,
   17.157,
   17.00908,
   12.48026,
   9.489234,
   12.79238,
   12.35154,
   8.031352,
   3.358658,
   6.222211,
   4.063387};
   Double_t Graph1_fex1053[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1053[18] = {
   7.391767,
   4.540034,
   3.151389,
   2.598615,
   2.284194,
   2.057485,
   1.937285,
   1.847551,
   1.84716,
   1.7917,
   1.867792,
   1.890474,
   1.976167,
   2.016798,
   2.10882,
   2.281136,
   2.37845,
   2.639598};
   gre = new TGraphErrors(18,Graph1_fx1053,Graph1_fy1053,Graph1_fex1053,Graph1_fey1053);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11053 = new TH1F("Graph_Graph11053","Graph",100,349.5,2899.5);
   Graph_Graph11053->SetMinimum(0.9697703);
   Graph_Graph11053->SetMaximum(61.23281);
   Graph_Graph11053->SetDirectory(0);
   Graph_Graph11053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11053->SetLineColor(ci);
   Graph_Graph11053->GetXaxis()->SetLabelFont(42);
   Graph_Graph11053->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11053->GetXaxis()->SetTitleFont(42);
   Graph_Graph11053->GetYaxis()->SetLabelFont(42);
   Graph_Graph11053->GetYaxis()->SetTitleFont(42);
   Graph_Graph11053->GetZaxis()->SetLabelFont(42);
   Graph_Graph11053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11053);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1054[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph2_fy1054[18] = {
   2.234826,
   -0.2753746,
   -0.1273094,
   0.1836163,
   -0.6014986,
   -0.4843875,
   -0.5606627,
   -0.4480366,
   -0.2741654,
   -0.2034448,
   -0.1592898,
   -0.1011605,
   -0.1142777,
   -0.0322274,
   -0.07719773,
   -0.1017624,
   -0.01738151,
   0.02615776};
   Double_t Graph2_fex1054[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1054[18] = {
   0.1085263,
   0.06701028,
   0.0471516,
   0.03891153,
   0.03425278,
   0.03101712,
   0.02943309,
   0.02808804,
   0.0281743,
   0.0274593,
   0.0287518,
   0.0290386,
   0.03064842,
   0.03145513,
   0.03287907,
   0.03571007,
   0.03709342,
   0.04065522};
   gre = new TGraphErrors(18,Graph2_fx1054,Graph2_fy1054,Graph2_fex1054,Graph2_fey1054);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21054 = new TH1F("Graph_Graph21054","Graph",100,349.5,2899.5);
   Graph_Graph21054->SetMinimum(-0.9336617);
   Graph_Graph21054->SetMaximum(2.641262);
   Graph_Graph21054->SetDirectory(0);
   Graph_Graph21054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21054->SetLineColor(ci);
   Graph_Graph21054->GetXaxis()->SetLabelFont(42);
   Graph_Graph21054->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21054->GetXaxis()->SetTitleFont(42);
   Graph_Graph21054->GetYaxis()->SetLabelFont(42);
   Graph_Graph21054->GetYaxis()->SetTitleFont(42);
   Graph_Graph21054->GetZaxis()->SetLabelFont(42);
   Graph_Graph21054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21054);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1c","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
