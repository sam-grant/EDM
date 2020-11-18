void y_vs_theta_NSUBRUNS_25()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 18 14:30:06 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-56.35714,-1.5625,507.2143,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[24] = {
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
   Double_t Graph0_fy1001[24] = {
   2.637646,
   2.352839,
   2.404198,
   2.67172,
   2.53792,
   2.626922,
   2.276007,
   2.5747,
   2.577826,
   2.422121,
   2.524635,
   2.570556,
   2.333908,
   2.527796,
   2.594835,
   2.444627,
   2.566051,
   2.623322,
   2.61625,
   2.448795,
   2.479985,
   2.524873,
   2.544139,
   2.80166};
   Double_t Graph0_fex1001[24] = {
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
   Double_t Graph0_fey1001[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","25 sub-runs",100,0,394.5);
   Graph_Graph01001->SetMinimum(-1);
   Graph_Graph01001->SetMaximum(3.5);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
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
   2.637646,
   2.352839,
   2.404198,
   2.67172,
   2.53792,
   2.626922,
   2.276007,
   2.5747,
   2.577826,
   2.422121,
   2.524635,
   2.570556,
   2.333908,
   2.527796,
   2.594835,
   2.444627,
   2.566051,
   2.623322,
   2.61625,
   2.448795,
   2.479985,
   2.524873,
   2.544139,
   2.80166};
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
   gre = new TGraphErrors(24,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010011002 = new TH1F("Graph_Graph_Graph010011002","25 sub-runs",100,0,394.5);
   Graph_Graph_Graph010011002->SetMinimum(-1);
   Graph_Graph_Graph010011002->SetMaximum(3.5);
   Graph_Graph_Graph010011002->SetDirectory(0);
   Graph_Graph_Graph010011002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010011002->SetLineColor(ci);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010011002->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010011002->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010011002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010011002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010011002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010011002);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1003[24] = {
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
   Double_t Graph1_fy1003[24] = {
   -0.006210765,
   -0.03553189,
   -0.3144014,
   -0.008532616,
   -0.2419164,
   -0.1769949,
   -0.4683358,
   -0.3250405,
   -0.1161182,
   -0.02621745,
   -0.2241232,
   -0.02228845,
   0.1247075,
   0.1940759,
   0.2014628,
   0.22119,
   0.3172611,
   0.3371066,
   -0.02005642,
   0.3896945,
   0.3000113,
   0.4482951,
   0.2726917,
   0.3413031};
   Double_t Graph1_fex1003[24] = {
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
   Double_t Graph1_fey1003[24] = {
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
   gre = new TGraphErrors(24,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,0,394.5);
   Graph_Graph11003->SetMinimum(-0.7354678);
   Graph_Graph11003->SetMaximum(0.7262298);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1004[24] = {
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
   Double_t Graph2_fy1004[24] = {
   -0.2011483,
   -0.1994333,
   0.05334111,
   0.04232779,
   0.0462029,
   -0.2244418,
   -0.1974378,
   -0.02129124,
   0.1438027,
   0.1096389,
   -0.03070924,
   0.09491259,
   -0.1877792,
   0.0754546,
   -0.04996102,
   -0.2843491,
   -0.07012649,
   -0.203073,
   0.1122313,
   -0.08787616,
   0.1033433,
   0.09902916,
   0.0004608365,
   0.04018799};
   Double_t Graph2_fex1004[24] = {
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
   Double_t Graph2_fey1004[24] = {
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
   gre = new TGraphErrors(24,Graph2_fx1004,Graph2_fy1004,Graph2_fex1004,Graph2_fey1004);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21004 = new TH1F("Graph_Graph21004","Graph",100,0,394.5);
   Graph_Graph21004->SetMinimum(-0.5070816);
   Graph_Graph21004->SetMaximum(0.3750158);
   Graph_Graph21004->SetDirectory(0);
   Graph_Graph21004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21004->SetLineColor(ci);
   Graph_Graph21004->GetXaxis()->SetLabelFont(42);
   Graph_Graph21004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21004->GetXaxis()->SetTitleFont(42);
   Graph_Graph21004->GetYaxis()->SetLabelFont(42);
   Graph_Graph21004->GetYaxis()->SetTitleFont(42);
   Graph_Graph21004->GetZaxis()->SetLabelFont(42);
   Graph_Graph21004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21004);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1005[24] = {
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
   Double_t Graph3_fy1005[24] = {
   2.430287,
   2.117874,
   2.143138,
   2.705515,
   2.342206,
   2.225486,
   1.610233,
   2.228368,
   2.605511,
   2.505543,
   2.269803,
   2.64318,
   2.270837,
   2.797327,
   2.746337,
   2.381468,
   2.813186,
   2.757356,
   2.708425,
   2.750613,
   2.883339,
   3.072197,
   2.817292,
   3.183151};
   Double_t Graph3_fex1005[24] = {
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
   Double_t Graph3_fey1005[24] = {
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
   gre = new TGraphErrors(24,Graph3_fx1005,Graph3_fy1005,Graph3_fex1005,Graph3_fey1005);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31005 = new TH1F("Graph_Graph31005","Graph",100,0,394.5);
   Graph_Graph31005->SetMinimum(1.278594);
   Graph_Graph31005->SetMaximum(3.51438);
   Graph_Graph31005->SetDirectory(0);
   Graph_Graph31005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31005->SetLineColor(ci);
   Graph_Graph31005->GetXaxis()->SetLabelFont(42);
   Graph_Graph31005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31005->GetXaxis()->SetTitleFont(42);
   Graph_Graph31005->GetYaxis()->SetLabelFont(42);
   Graph_Graph31005->GetYaxis()->SetTitleFont(42);
   Graph_Graph31005->GetZaxis()->SetLabelFont(42);
   Graph_Graph31005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31005);
   
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
   entry=leg->AddEntry("Graph3","Total","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
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
