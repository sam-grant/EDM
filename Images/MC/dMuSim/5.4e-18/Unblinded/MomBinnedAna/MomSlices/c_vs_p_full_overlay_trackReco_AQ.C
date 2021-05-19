void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:58 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-5.25,3456.75,7.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1411[15] = {
   100,
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
   Double_t S0_c_vs_p_fy1411[15] = {
   3.72327,
   -1.623167,
   -1.058335,
   -0.1677722,
   0.01904389,
   -0.009656159,
   -0.0183379,
   0.002839417,
   0.01738169,
   -0.07034816,
   -0.005321265,
   -0.06270887,
   -0.02264054,
   0.03490538,
   0.08025249};
   Double_t S0_c_vs_p_fex1411[15] = {
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
   100,
   100};
   Double_t S0_c_vs_p_fey1411[15] = {
   0.814703,
   0.1652839,
   0.05548527,
   0.04325791,
   0.03833127,
   0.03533737,
   0.03302138,
   0.03127218,
   0.0302226,
   0.02974269,
   0.02983174,
   0.0309019,
   0.03277263,
   0.03400849,
   0.0451238};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1411,S0_c_vs_p_fy1411,S0_c_vs_p_fex1411,S0_c_vs_p_fey1411);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1411 = new TH1F("Graph_S0_c_vs_p1411","",100,0,3300);
   Graph_S0_c_vs_p1411->SetMinimum(-4);
   Graph_S0_c_vs_p1411->SetMaximum(6);
   Graph_S0_c_vs_p1411->SetDirectory(0);
   Graph_S0_c_vs_p1411->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1411->SetLineColor(ci);
   Graph_S0_c_vs_p1411->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1411->GetXaxis()->SetRange(0,93);
   Graph_S0_c_vs_p1411->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1411->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1411->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1411->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1411->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1411->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1411->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1411->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1411->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1411->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1411->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1411->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1411->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1411->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1411->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1411);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1412[15] = {
   100,
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
   Double_t S12_c_vs_p_fy1412[15] = {
   -2.183933,
   -2.56042,
   -1.360551,
   -0.6608705,
   -0.4262416,
   -0.273817,
   -0.2534928,
   -0.23017,
   -0.2177872,
   -0.1628012,
   -0.1074285,
   -0.1390242,
   -0.1231729,
   -0.1382743,
   -0.04226731};
   Double_t S12_c_vs_p_fex1412[15] = {
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
   100,
   100};
   Double_t S12_c_vs_p_fey1412[15] = {
   0.8543037,
   0.159062,
   0.05574933,
   0.04316291,
   0.03825972,
   0.03537965,
   0.0330597,
   0.03125227,
   0.03027792,
   0.03006792,
   0.03090594,
   0.03273123,
   0.03569093,
   0.0368555,
   0.04934266};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1412,S12_c_vs_p_fy1412,S12_c_vs_p_fex1412,S12_c_vs_p_fey1412);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1412 = new TH1F("Graph_S12_c_vs_p1412","S12",100,0,3300);
   Graph_S12_c_vs_p1412->SetMinimum(-3.342768);
   Graph_S12_c_vs_p1412->SetMaximum(0.3116066);
   Graph_S12_c_vs_p1412->SetDirectory(0);
   Graph_S12_c_vs_p1412->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1412->SetLineColor(ci);
   Graph_S12_c_vs_p1412->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1412->GetXaxis()->SetRange(0,93);
   Graph_S12_c_vs_p1412->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1412->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1412->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1412->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1412->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1412->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1412->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1412->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1412->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1412->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1412->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1412->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1412->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1412->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1412->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1412);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1413[15] = {
   100,
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
   Double_t S18_c_vs_p_fy1413[15] = {
   0.2115781,
   -2.254886,
   -1.383486,
   -0.319896,
   -0.2200906,
   -0.261856,
   -0.1377368,
   -0.1909023,
   -0.1338152,
   -0.1190388,
   -0.05325703,
   -0.1131358,
   -0.09857185,
   -0.1309918,
   -0.006189576};
   Double_t S18_c_vs_p_fex1413[15] = {
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
   100,
   100};
   Double_t S18_c_vs_p_fey1413[15] = {
   0.7866961,
   0.1621111,
   0.05570328,
   0.04322965,
   0.03821568,
   0.03533368,
   0.03300677,
   0.03138258,
   0.03039637,
   0.03065589,
   0.03161059,
   0.03393726,
   0.03658499,
   0.03685179,
   0.05200451};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1413,S18_c_vs_p_fy1413,S18_c_vs_p_fex1413,S18_c_vs_p_fey1413);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1413 = new TH1F("Graph_S18_c_vs_p1413","S18",100,0,3300);
   Graph_S18_c_vs_p1413->SetMinimum(-2.758525);
   Graph_S18_c_vs_p1413->SetMaximum(1.339801);
   Graph_S18_c_vs_p1413->SetDirectory(0);
   Graph_S18_c_vs_p1413->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1413->SetLineColor(ci);
   Graph_S18_c_vs_p1413->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1413->GetXaxis()->SetRange(0,93);
   Graph_S18_c_vs_p1413->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1413->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1413->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1413->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1413->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1413->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1413->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1413->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1413->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1413->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1413->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1413->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1413->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1413->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1413->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1413);
   
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
