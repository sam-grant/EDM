void y_vs_theta_NSUBRUNS_125()
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
   
   Double_t Graph0_fx1021[24] = {
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
   Double_t Graph0_fy1021[24] = {
   2.455844,
   2.497331,
   2.545475,
   2.508555,
   2.420387,
   2.518404,
   2.519704,
   2.449684,
   2.528361,
   2.454742,
   2.563945,
   2.577116,
   2.535855,
   2.506334,
   2.527176,
   2.523836,
   2.46672,
   2.582838,
   2.45258,
   2.696539,
   2.500598,
   2.555543,
   2.554266,
   2.53423};
   Double_t Graph0_fex1021[24] = {
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
   Double_t Graph0_fey1021[24] = {
   0.05916549,
   0.07920474,
   0.06709863,
   0.06705466,
   0.07327659,
   0.06689485,
   0.06533699,
   0.06730563,
   0.07066941,
   0.06531117,
   0.06125641,
   0.05942484,
   0.054384,
   0.06209382,
   0.06459121,
   0.06698316,
   0.06402595,
   0.05883366,
   0.05531081,
   0.06371955,
   0.06803329,
   0.07015593,
   0.06300825,
   0.06504614};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","125 sub-runs",100,0,394.5);
   Graph_Graph01021->SetMinimum(-1);
   Graph_Graph01021->SetMaximum(3.5);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1022[24] = {
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
   Double_t Graph0_fy1022[24] = {
   2.455844,
   2.497331,
   2.545475,
   2.508555,
   2.420387,
   2.518404,
   2.519704,
   2.449684,
   2.528361,
   2.454742,
   2.563945,
   2.577116,
   2.535855,
   2.506334,
   2.527176,
   2.523836,
   2.46672,
   2.582838,
   2.45258,
   2.696539,
   2.500598,
   2.555543,
   2.554266,
   2.53423};
   Double_t Graph0_fex1022[24] = {
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
   Double_t Graph0_fey1022[24] = {
   0.05916549,
   0.07920474,
   0.06709863,
   0.06705466,
   0.07327659,
   0.06689485,
   0.06533699,
   0.06730563,
   0.07066941,
   0.06531117,
   0.06125641,
   0.05942484,
   0.054384,
   0.06209382,
   0.06459121,
   0.06698316,
   0.06402595,
   0.05883366,
   0.05531081,
   0.06371955,
   0.06803329,
   0.07015593,
   0.06300825,
   0.06504614};
   gre = new TGraphErrors(24,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010211022 = new TH1F("Graph_Graph_Graph010211022","125 sub-runs",100,0,394.5);
   Graph_Graph_Graph010211022->SetMinimum(-1);
   Graph_Graph_Graph010211022->SetMaximum(3.5);
   Graph_Graph_Graph010211022->SetDirectory(0);
   Graph_Graph_Graph010211022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010211022->SetLineColor(ci);
   Graph_Graph_Graph010211022->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010211022->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010211022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010211022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010211022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010211022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010211022->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010211022->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010211022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010211022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010211022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010211022->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010211022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010211022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010211022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010211022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010211022);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1023[24] = {
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
   Double_t Graph1_fy1023[24] = {
   -0.111122,
   -0.1594264,
   -0.2094696,
   -0.2919098,
   -0.3034412,
   -0.229029,
   -0.1822836,
   -0.3590595,
   -0.3065318,
   -0.195557,
   -0.1119609,
   0.0856041,
   0.0576432,
   0.09330172,
   0.1614144,
   0.2707562,
   0.3929637,
   0.2831175,
   0.2649837,
   0.209181,
   0.2474487,
   0.07484414,
   0.07470703,
   -0.006966076};
   Double_t Graph1_fex1023[24] = {
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
   Double_t Graph1_fey1023[24] = {
   0.05916549,
   0.07920474,
   0.06709863,
   0.06705466,
   0.07327659,
   0.06689485,
   0.06533699,
   0.06730563,
   0.07066941,
   0.06531117,
   0.06125641,
   0.05942484,
   0.054384,
   0.06209382,
   0.06459121,
   0.06698316,
   0.06402595,
   0.05883366,
   0.05531081,
   0.06371955,
   0.06803329,
   0.07015593,
   0.06300825,
   0.06504614};
   gre = new TGraphErrors(24,Graph1_fx1023,Graph1_fy1023,Graph1_fex1023,Graph1_fey1023);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11023 = new TH1F("Graph_Graph11023","Graph",100,0,394.5);
   Graph_Graph11023->SetMinimum(-0.5147006);
   Graph_Graph11023->SetMaximum(0.5453251);
   Graph_Graph11023->SetDirectory(0);
   Graph_Graph11023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11023->SetLineColor(ci);
   Graph_Graph11023->GetXaxis()->SetLabelFont(42);
   Graph_Graph11023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11023->GetXaxis()->SetTitleFont(42);
   Graph_Graph11023->GetYaxis()->SetLabelFont(42);
   Graph_Graph11023->GetYaxis()->SetTitleFont(42);
   Graph_Graph11023->GetZaxis()->SetLabelFont(42);
   Graph_Graph11023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11023);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1024[24] = {
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
   Double_t Graph2_fy1024[24] = {
   0.004987544,
   -0.1997753,
   -0.06256025,
   -0.05641047,
   -0.1010925,
   -0.1095716,
   0.009271562,
   -0.02334659,
   0.0526463,
   0.128955,
   0.06502813,
   0.009834663,
   -0.04959578,
   -0.01456855,
   -0.02841878,
   -0.04856908,
   -0.06953731,
   0.01107668,
   0.08939379,
   0.20179,
   0.02460375,
   0.04158489,
   -0.06097891,
   -0.03080667};
   Double_t Graph2_fex1024[24] = {
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
   Double_t Graph2_fey1024[24] = {
   0.05916549,
   0.07920474,
   0.06709863,
   0.06705466,
   0.07327659,
   0.06689485,
   0.06533699,
   0.06730563,
   0.07066941,
   0.06531117,
   0.06125641,
   0.05942484,
   0.054384,
   0.06209382,
   0.06459121,
   0.06698316,
   0.06402595,
   0.05883366,
   0.05531081,
   0.06371955,
   0.06803329,
   0.07015593,
   0.06300825,
   0.06504614};
   gre = new TGraphErrors(24,Graph2_fx1024,Graph2_fy1024,Graph2_fex1024,Graph2_fey1024);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21024 = new TH1F("Graph_Graph21024","Graph",100,0,394.5);
   Graph_Graph21024->SetMinimum(-0.3334289);
   Graph_Graph21024->SetMaximum(0.3199585);
   Graph_Graph21024->SetDirectory(0);
   Graph_Graph21024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21024->SetLineColor(ci);
   Graph_Graph21024->GetXaxis()->SetLabelFont(42);
   Graph_Graph21024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21024->GetXaxis()->SetTitleFont(42);
   Graph_Graph21024->GetYaxis()->SetLabelFont(42);
   Graph_Graph21024->GetYaxis()->SetTitleFont(42);
   Graph_Graph21024->GetZaxis()->SetLabelFont(42);
   Graph_Graph21024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21024);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1025[24] = {
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
   Double_t Graph3_fy1025[24] = {
   2.34971,
   2.138129,
   2.273445,
   2.160235,
   2.015853,
   2.179803,
   2.346692,
   2.067278,
   2.274476,
   2.38814,
   2.517013,
   2.672555,
   2.543903,
   2.585067,
   2.660171,
   2.746023,
   2.790146,
   2.877032,
   2.806957,
   3.10751,
   2.77265,
   2.671972,
   2.567994,
   2.496457};
   Double_t Graph3_fex1025[24] = {
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
   Double_t Graph3_fey1025[24] = {
   0.05916549,
   0.07920474,
   0.06709863,
   0.06705466,
   0.07327659,
   0.06689485,
   0.06533699,
   0.06730563,
   0.07066941,
   0.06531117,
   0.06125641,
   0.05942484,
   0.054384,
   0.06209382,
   0.06459121,
   0.06698316,
   0.06402595,
   0.05883366,
   0.05531081,
   0.06371955,
   0.06803329,
   0.07015593,
   0.06300825,
   0.06504614};
   gre = new TGraphErrors(24,Graph3_fx1025,Graph3_fy1025,Graph3_fex1025,Graph3_fey1025);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31025 = new TH1F("Graph_Graph31025","Graph",100,0,394.5);
   Graph_Graph31025->SetMinimum(1.819711);
   Graph_Graph31025->SetMaximum(3.294095);
   Graph_Graph31025->SetDirectory(0);
   Graph_Graph31025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31025->SetLineColor(ci);
   Graph_Graph31025->GetXaxis()->SetLabelFont(42);
   Graph_Graph31025->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31025->GetXaxis()->SetTitleFont(42);
   Graph_Graph31025->GetYaxis()->SetLabelFont(42);
   Graph_Graph31025->GetYaxis()->SetTitleFont(42);
   Graph_Graph31025->GetZaxis()->SetLabelFont(42);
   Graph_Graph31025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31025);
   
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
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("125 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
