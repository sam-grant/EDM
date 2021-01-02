void y_vs_theta_overlay_NSUBRUNS_175()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 16:47:20 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-56.35714,-1.5625,507.2143,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[24] = {
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
   Double_t Graph0_fy1038[24] = {
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
   Double_t Graph0_fex1038[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1038[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","175 sub-runs",100,0,394.5);
   Graph_Graph01038->SetMinimum(-1);
   Graph_Graph01038->SetMaximum(3.5);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1039[24] = {
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
   Double_t Graph0_fy1039[24] = {
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
   Double_t Graph0_fex1039[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1039[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010381039 = new TH1F("Graph_Graph_Graph010381039","175 sub-runs",100,0,394.5);
   Graph_Graph_Graph010381039->SetMinimum(-1);
   Graph_Graph_Graph010381039->SetMaximum(3.5);
   Graph_Graph_Graph010381039->SetDirectory(0);
   Graph_Graph_Graph010381039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010381039->SetLineColor(ci);
   Graph_Graph_Graph010381039->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010381039->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010381039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010381039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010381039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010381039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010381039->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010381039->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010381039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010381039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010381039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010381039->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010381039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010381039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010381039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010381039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010381039);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1040[24] = {
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
   Double_t Graph1_fy1040[24] = {
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
   Double_t Graph1_fex1040[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1040[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph1_fx1040,Graph1_fy1040,Graph1_fex1040,Graph1_fey1040);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11040 = new TH1F("Graph_Graph11040","Graph",100,0,394.5);
   Graph_Graph11040->SetMinimum(-0.4300254);
   Graph_Graph11040->SetMaximum(0.4232163);
   Graph_Graph11040->SetDirectory(0);
   Graph_Graph11040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11040->SetLineColor(ci);
   Graph_Graph11040->GetXaxis()->SetLabelFont(42);
   Graph_Graph11040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11040->GetXaxis()->SetTitleFont(42);
   Graph_Graph11040->GetYaxis()->SetLabelFont(42);
   Graph_Graph11040->GetYaxis()->SetTitleFont(42);
   Graph_Graph11040->GetZaxis()->SetLabelFont(42);
   Graph_Graph11040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11040);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1041[24] = {
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
   Double_t Graph2_fy1041[24] = {
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
   Double_t Graph2_fex1041[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1041[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph2_fx1041,Graph2_fy1041,Graph2_fex1041,Graph2_fey1041);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21041 = new TH1F("Graph_Graph21041","Graph",100,0,394.5);
   Graph_Graph21041->SetMinimum(-0.1526046);
   Graph_Graph21041->SetMaximum(0.1548326);
   Graph_Graph21041->SetDirectory(0);
   Graph_Graph21041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21041->SetLineColor(ci);
   Graph_Graph21041->GetXaxis()->SetLabelFont(42);
   Graph_Graph21041->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21041->GetXaxis()->SetTitleFont(42);
   Graph_Graph21041->GetYaxis()->SetLabelFont(42);
   Graph_Graph21041->GetYaxis()->SetTitleFont(42);
   Graph_Graph21041->GetZaxis()->SetLabelFont(42);
   Graph_Graph21041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21041);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1042[24] = {
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
   Double_t Graph0_fy1042[24] = {
   2.40405,
   2.25437,
   2.187939,
   2.229146,
   2.361401,
   2.265574,
   2.304909,
   2.278446,
   2.4348,
   2.406481,
   2.384672,
   2.522131,
   2.588849,
   2.662538,
   2.671425,
   2.491392,
   2.810936,
   2.959857,
   2.99299,
   2.767504,
   2.828978,
   2.764866,
   2.753047,
   2.542518};
   Double_t Graph0_fex1042[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1042[24] = {
   0.04997494,
   0.06687641,
   0.05670589,
   0.05666938,
   0.06183644,
   0.0565445,
   0.05517098,
   0.05685813,
   0.05980553,
   0.05522939,
   0.05177301,
   0.05018845,
   0.04600755,
   0.05240826,
   0.05454242,
   0.05661425,
   0.05405753,
   0.0497354,
   0.04671047,
   0.0538298,
   0.05743552,
   0.05940319,
   0.05322195,
   0.05505611};
   gre = new TGraphErrors(24,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010371042 = new TH1F("Graph_Graph_Graph010371042","175 sub-runs",100,0,394.5);
   Graph_Graph_Graph010371042->SetMinimum(2.040386);
   Graph_Graph_Graph010371042->SetMaximum(3.130547);
   Graph_Graph_Graph010371042->SetDirectory(0);
   Graph_Graph_Graph010371042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010371042->SetLineColor(ci);
   Graph_Graph_Graph010371042->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010371042->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010371042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010371042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010371042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010371042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010371042->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010371042->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010371042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010371042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010371042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010371042->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010371042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010371042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010371042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010371042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010371042);
   
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
   TText *pt_LaTex = pt->AddText("175 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
