void y_vs_theta_overlay_NSUBRUNS_325()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 16:47:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-56.35714,-1.5625,507.2143,4.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1074[24] = {
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
   Double_t Graph0_fy1074[24] = {
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
   Double_t Graph0_fex1074[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1074[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1074,Graph0_fy1074,Graph0_fex1074,Graph0_fey1074);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01074 = new TH1F("Graph_Graph01074","325 sub-runs",100,0,394.5);
   Graph_Graph01074->SetMinimum(-1);
   Graph_Graph01074->SetMaximum(3.5);
   Graph_Graph01074->SetDirectory(0);
   Graph_Graph01074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01074->SetLineColor(ci);
   Graph_Graph01074->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01074->GetXaxis()->CenterTitle(true);
   Graph_Graph01074->GetXaxis()->SetLabelFont(42);
   Graph_Graph01074->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01074->GetXaxis()->SetTitleFont(42);
   Graph_Graph01074->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01074->GetYaxis()->CenterTitle(true);
   Graph_Graph01074->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01074->GetYaxis()->SetLabelFont(42);
   Graph_Graph01074->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01074->GetYaxis()->SetTitleFont(42);
   Graph_Graph01074->GetZaxis()->SetLabelFont(42);
   Graph_Graph01074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01074);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1075[24] = {
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
   Double_t Graph0_fy1075[24] = {
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
   Double_t Graph0_fex1075[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1075[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph0_fx1075,Graph0_fy1075,Graph0_fex1075,Graph0_fey1075);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010741075 = new TH1F("Graph_Graph_Graph010741075","325 sub-runs",100,0,394.5);
   Graph_Graph_Graph010741075->SetMinimum(-1);
   Graph_Graph_Graph010741075->SetMaximum(3.5);
   Graph_Graph_Graph010741075->SetDirectory(0);
   Graph_Graph_Graph010741075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010741075->SetLineColor(ci);
   Graph_Graph_Graph010741075->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010741075->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010741075->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010741075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010741075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010741075->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010741075->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010741075->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010741075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010741075->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010741075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010741075->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010741075->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010741075->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010741075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010741075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010741075);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1076[24] = {
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
   Double_t Graph1_fy1076[24] = {
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
   Double_t Graph1_fex1076[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1076[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph1_fx1076,Graph1_fy1076,Graph1_fex1076,Graph1_fey1076);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11076 = new TH1F("Graph_Graph11076","Graph",100,0,394.5);
   Graph_Graph11076->SetMinimum(-0.4121005);
   Graph_Graph11076->SetMaximum(0.4071676);
   Graph_Graph11076->SetDirectory(0);
   Graph_Graph11076->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11076->SetLineColor(ci);
   Graph_Graph11076->GetXaxis()->SetLabelFont(42);
   Graph_Graph11076->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11076->GetXaxis()->SetTitleFont(42);
   Graph_Graph11076->GetYaxis()->SetLabelFont(42);
   Graph_Graph11076->GetYaxis()->SetTitleFont(42);
   Graph_Graph11076->GetZaxis()->SetLabelFont(42);
   Graph_Graph11076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11076);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1077[24] = {
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
   Double_t Graph2_fy1077[24] = {
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
   Double_t Graph2_fex1077[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1077[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph2_fx1077,Graph2_fy1077,Graph2_fex1077,Graph2_fey1077);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21077 = new TH1F("Graph_Graph21077","Graph",100,0,394.5);
   Graph_Graph21077->SetMinimum(-0.1333617);
   Graph_Graph21077->SetMaximum(0.1357915);
   Graph_Graph21077->SetDirectory(0);
   Graph_Graph21077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21077->SetLineColor(ci);
   Graph_Graph21077->GetXaxis()->SetLabelFont(42);
   Graph_Graph21077->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21077->GetXaxis()->SetTitleFont(42);
   Graph_Graph21077->GetYaxis()->SetLabelFont(42);
   Graph_Graph21077->GetYaxis()->SetTitleFont(42);
   Graph_Graph21077->GetZaxis()->SetLabelFont(42);
   Graph_Graph21077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21077);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1078[24] = {
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
   Double_t Graph0_fy1078[24] = {
   2.376365,
   2.305519,
   2.288713,
   2.19757,
   2.212579,
   2.168606,
   2.287547,
   2.345019,
   2.404156,
   2.43153,
   2.483506,
   2.546107,
   2.530691,
   2.629195,
   2.652255,
   2.729895,
   2.844903,
   2.786639,
   2.858053,
   2.932333,
   2.810902,
   2.694343,
   2.60061,
   2.493982};
   Double_t Graph0_fex1078[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1078[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   gre = new TGraphErrors(24,Graph0_fx1078,Graph0_fy1078,Graph0_fex1078,Graph0_fey1078);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010731078 = new TH1F("Graph_Graph_Graph010731078","325 sub-runs",100,0,394.5);
   Graph_Graph_Graph010731078->SetMinimum(2.042693);
   Graph_Graph_Graph010731078->SetMaximum(3.056239);
   Graph_Graph_Graph010731078->SetDirectory(0);
   Graph_Graph_Graph010731078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010731078->SetLineColor(ci);
   Graph_Graph_Graph010731078->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010731078->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010731078->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010731078->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010731078->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010731078->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010731078->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010731078->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010731078->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010731078->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010731078->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010731078->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010731078->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010731078->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010731078->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010731078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010731078);
   
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
   TText *pt_LaTex = pt->AddText("325 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
