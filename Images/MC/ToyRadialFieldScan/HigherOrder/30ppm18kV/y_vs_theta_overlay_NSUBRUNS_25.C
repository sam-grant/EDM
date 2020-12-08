void y_vs_theta_overlay_NSUBRUNS_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 16:47:19 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-56.35714,-1.5625,507.2143,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1002[24] = {
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077};
   Double_t Graph0_fex1002[24] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1002[24] = {
   0.1319508,
   0.1771508,
   0.1497953,
   0.149579,
   0.1633058,
   0.1492487,
   0.1453239,
   0.1504285,
   0.1577051,
   0.1463538,
   0.136975,
   0.1329159,
   0.1216209,
   0.1390014,
   0.1434876,
   0.1492243,
   0.1439389,
   0.1316129,
   0.1234754,
   0.1426135,
   0.1521772,
   0.1561265,
   0.1409305,
   0.1449137};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","25 sub-runs",100,0,394.5);
   Graph_Graph01002->SetMinimum(-1);
   Graph_Graph01002->SetMaximum(3.5);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01002->GetXaxis()->CenterTitle(true);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01002->GetYaxis()->CenterTitle(true);
   Graph_Graph01002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1003[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1003[24] = {
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077,
   2.544077};
   Double_t Graph0_fex1003[24] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[24] = {
   0.1319508,
   0.1771508,
   0.1497953,
   0.149579,
   0.1633058,
   0.1492487,
   0.1453239,
   0.1504285,
   0.1577051,
   0.1463538,
   0.136975,
   0.1329159,
   0.1216209,
   0.1390014,
   0.1434876,
   0.1492243,
   0.1439389,
   0.1316129,
   0.1234754,
   0.1426135,
   0.1521772,
   0.1561265,
   0.1409305,
   0.1449137};
   gre = new TGraphErrors(24,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010021003 = new TH1F("Graph_Graph_Graph010021003","25 sub-runs",100,0,394.5);
   Graph_Graph_Graph010021003->SetMinimum(-1);
   Graph_Graph_Graph010021003->SetMaximum(3.5);
   Graph_Graph_Graph010021003->SetDirectory(0);
   Graph_Graph_Graph010021003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010021003->SetLineColor(ci);
   Graph_Graph_Graph010021003->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010021003->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010021003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010021003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010021003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010021003->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010021003->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010021003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010021003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010021003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010021003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010021003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010021003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010021003);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1004[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph1_fy1004[24] = {
   -0.07826103,
   -0.1511887,
   -0.2138131,
   -0.2618665,
   -0.2920741,
   -0.3023774,
   -0.2920741,
   -0.2618665,
   -0.2138131,
   -0.1511887,
   -0.07826103,
   -5.554583e-17,
   0.07826103,
   0.1511887,
   0.2138131,
   0.2618665,
   0.2920741,
   0.3023774,
   0.2920741,
   0.2618665,
   0.2138131,
   0.1511887,
   0.07826103,
   9.257638e-17};
   Double_t Graph1_fex1004[24] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1004[24] = {
   0.1319508,
   0.1771508,
   0.1497953,
   0.149579,
   0.1633058,
   0.1492487,
   0.1453239,
   0.1504285,
   0.1577051,
   0.1463538,
   0.136975,
   0.1329159,
   0.1216209,
   0.1390014,
   0.1434876,
   0.1492243,
   0.1439389,
   0.1316129,
   0.1234754,
   0.1426135,
   0.1521772,
   0.1561265,
   0.1409305,
   0.1449137};
   gre = new TGraphErrors(24,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11004 = new TH1F("Graph_Graph11004","Graph",100,0,394.5);
   Graph_Graph11004->SetMinimum(-0.5445193);
   Graph_Graph11004->SetMaximum(0.5251524);
   Graph_Graph11004->SetDirectory(0);
   Graph_Graph11004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11004->SetLineColor(ci);
   Graph_Graph11004->GetXaxis()->SetLabelFont(42);
   Graph_Graph11004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11004->GetXaxis()->SetTitleFont(42);
   Graph_Graph11004->GetYaxis()->SetLabelFont(42);
   Graph_Graph11004->GetYaxis()->SetTitleFont(42);
   Graph_Graph11004->GetZaxis()->SetLabelFont(42);
   Graph_Graph11004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11004);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1005[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph2_fy1005[24] = {
   -0.03470364,
   -0.06010846,
   -0.06940728,
   -0.06010846,
   -0.03470364,
   -1.274991e-17,
   0.03470364,
   0.06010846,
   0.06940728,
   0.06010846,
   0.03470364,
   2.124985e-17,
   -0.03470364,
   -0.06010846,
   -0.06940728,
   -0.06010846,
   -0.03470364,
   -2.974979e-17,
   0.03470364,
   0.06010846,
   0.06940728,
   0.06010846,
   0.03470364,
   3.824973e-17};
   Double_t Graph2_fex1005[24] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1005[24] = {
   0.1319508,
   0.1771508,
   0.1497953,
   0.149579,
   0.1633058,
   0.1492487,
   0.1453239,
   0.1504285,
   0.1577051,
   0.1463538,
   0.136975,
   0.1329159,
   0.1216209,
   0.1390014,
   0.1434876,
   0.1492243,
   0.1439389,
   0.1316129,
   0.1234754,
   0.1426135,
   0.1521772,
   0.1561265,
   0.1409305,
   0.1449137};
   gre = new TGraphErrors(24,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21005 = new TH1F("Graph_Graph21005","Graph",100,0,394.5);
   Graph_Graph21005->SetMinimum(-0.2836964);
   Graph_Graph21005->SetMaximum(0.2735495);
   Graph_Graph21005->SetDirectory(0);
   Graph_Graph21005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21005->SetLineColor(ci);
   Graph_Graph21005->GetXaxis()->SetLabelFont(42);
   Graph_Graph21005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetXaxis()->SetTitleFont(42);
   Graph_Graph21005->GetYaxis()->SetLabelFont(42);
   Graph_Graph21005->GetYaxis()->SetTitleFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelFont(42);
   Graph_Graph21005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21005);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1006[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1006[24] = {
   2.524681,
   2.429511,
   2.071902,
   2.060628,
   2.323917,
   2.124319,
   2.151003,
   2.241305,
   2.528901,
   2.577887,
   2.732506,
   2.635101,
   2.583049,
   2.67785,
   2.75957,
   2.828667,
   2.922369,
   2.648533,
   2.643087,
   2.693077,
   2.584208,
   2.787157,
   2.597856,
   2.465661};
   Double_t Graph0_fex1006[24] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1006[24] = {
   0.1319508,
   0.1771508,
   0.1497953,
   0.149579,
   0.1633058,
   0.1492487,
   0.1453239,
   0.1504285,
   0.1577051,
   0.1463538,
   0.136975,
   0.1329159,
   0.1216209,
   0.1390014,
   0.1434876,
   0.1492243,
   0.1439389,
   0.1316129,
   0.1234754,
   0.1426135,
   0.1521772,
   0.1561265,
   0.1409305,
   0.1449137};
   gre = new TGraphErrors(24,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010011006 = new TH1F("Graph_Graph_Graph010011006","25 sub-runs",100,0,394.5);
   Graph_Graph_Graph010011006->SetMinimum(1.795523);
   Graph_Graph_Graph010011006->SetMaximum(3.181834);
   Graph_Graph_Graph010011006->SetDirectory(0);
   Graph_Graph_Graph010011006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010011006->SetLineColor(ci);
   Graph_Graph_Graph010011006->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010011006->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010011006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011006->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010011006->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010011006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010011006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010011006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010011006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","1st order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","2nd order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","3rd order","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Total","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("25 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
