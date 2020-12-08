void y_vs_theta_overlay_NSUBRUNS_125()
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
   
   Double_t Graph0_fx1026[24] = {
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
   Double_t Graph0_fy1026[24] = {
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
   Double_t Graph0_fex1026[24] = {
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
   Double_t Graph0_fey1026[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","125 sub-runs",100,0,394.5);
   Graph_Graph01026->SetMinimum(-1);
   Graph_Graph01026->SetMaximum(3.5);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1027[24] = {
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
   Double_t Graph0_fy1027[24] = {
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
   Double_t Graph0_fex1027[24] = {
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
   Double_t Graph0_fey1027[24] = {
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
   gre = new TGraphErrors(24,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010261027 = new TH1F("Graph_Graph_Graph010261027","125 sub-runs",100,0,394.5);
   Graph_Graph_Graph010261027->SetMinimum(-1);
   Graph_Graph_Graph010261027->SetMaximum(3.5);
   Graph_Graph_Graph010261027->SetDirectory(0);
   Graph_Graph_Graph010261027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010261027->SetLineColor(ci);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010261027->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010261027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010261027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010261027->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010261027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010261027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010261027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010261027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010261027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010261027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010261027);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1028[24] = {
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
   Double_t Graph1_fy1028[24] = {
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
   Double_t Graph1_fex1028[24] = {
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
   Double_t Graph1_fey1028[24] = {
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
   gre = new TGraphErrors(24,Graph1_fx1028,Graph1_fy1028,Graph1_fex1028,Graph1_fey1028);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11028 = new TH1F("Graph_Graph11028","Graph",100,0,394.5);
   Graph_Graph11028->SetMinimum(-0.4423206);
   Graph_Graph11028->SetMaximum(0.4342594);
   Graph_Graph11028->SetDirectory(0);
   Graph_Graph11028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11028->SetLineColor(ci);
   Graph_Graph11028->GetXaxis()->SetLabelFont(42);
   Graph_Graph11028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetXaxis()->SetTitleFont(42);
   Graph_Graph11028->GetYaxis()->SetLabelFont(42);
   Graph_Graph11028->GetYaxis()->SetTitleFont(42);
   Graph_Graph11028->GetZaxis()->SetLabelFont(42);
   Graph_Graph11028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11028);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1029[24] = {
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
   Double_t Graph2_fy1029[24] = {
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
   Double_t Graph2_fex1029[24] = {
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
   Double_t Graph2_fey1029[24] = {
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
   gre = new TGraphErrors(24,Graph2_fx1029,Graph2_fy1029,Graph2_fex1029,Graph2_fey1029);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21029 = new TH1F("Graph_Graph21029","Graph",100,0,394.5);
   Graph_Graph21029->SetMinimum(-0.1672522);
   Graph_Graph21029->SetMaximum(0.1680157);
   Graph_Graph21029->SetDirectory(0);
   Graph_Graph21029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21029->SetLineColor(ci);
   Graph_Graph21029->GetXaxis()->SetLabelFont(42);
   Graph_Graph21029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetXaxis()->SetTitleFont(42);
   Graph_Graph21029->GetYaxis()->SetLabelFont(42);
   Graph_Graph21029->GetYaxis()->SetTitleFont(42);
   Graph_Graph21029->GetZaxis()->SetLabelFont(42);
   Graph_Graph21029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21029);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1030[24] = {
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
   Double_t Graph0_fy1030[24] = {
   2.484516,
   2.272389,
   2.246397,
   2.281738,
   2.275968,
   2.207425,
   2.33256,
   2.378588,
   2.399023,
   2.433614,
   2.503324,
   2.53332,
   2.588061,
   2.730253,
   2.766178,
   2.784328,
   2.810648,
   2.836591,
   2.758651,
   2.864172,
   2.879971,
   2.726342,
   2.598505,
   2.446183};
   Double_t Graph0_fex1030[24] = {
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
   Double_t Graph0_fey1030[24] = {
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
   gre = new TGraphErrors(24,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010251030 = new TH1F("Graph_Graph_Graph010251030","125 sub-runs",100,0,394.5);
   Graph_Graph_Graph010251030->SetMinimum(2.059783);
   Graph_Graph_Graph010251030->SetMaximum(3.028751);
   Graph_Graph_Graph010251030->SetDirectory(0);
   Graph_Graph_Graph010251030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010251030->SetLineColor(ci);
   Graph_Graph_Graph010251030->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010251030->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010251030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010251030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010251030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010251030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010251030->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010251030->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010251030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010251030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010251030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010251030->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010251030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010251030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010251030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010251030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010251030);
   
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
