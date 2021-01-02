void y_vs_theta_overlay_NSUBRUNS_100()
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
   
   Double_t Graph0_fx1020[24] = {
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
   Double_t Graph0_fy1020[24] = {
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
   Double_t Graph0_fex1020[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1020[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","100 sub-runs",100,0,394.5);
   Graph_Graph01020->SetMinimum(-1);
   Graph_Graph01020->SetMaximum(3.5);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   gre->Draw("ap");
   
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
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010201021 = new TH1F("Graph_Graph_Graph010201021","100 sub-runs",100,0,394.5);
   Graph_Graph_Graph010201021->SetMinimum(-1);
   Graph_Graph_Graph010201021->SetMaximum(3.5);
   Graph_Graph_Graph010201021->SetDirectory(0);
   Graph_Graph_Graph010201021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010201021->SetLineColor(ci);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010201021->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010201021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010201021->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010201021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010201021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010201021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010201021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010201021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010201021);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1022[24] = {
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
   Double_t Graph1_fy1022[24] = {
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
   Double_t Graph1_fex1022[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1022[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph1_fx1022,Graph1_fy1022,Graph1_fex1022,Graph1_fey1022);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11022 = new TH1F("Graph_Graph11022","Graph",100,0,394.5);
   Graph_Graph11022->SetMinimum(-0.4517066);
   Graph_Graph11022->SetMaximum(0.4427168);
   Graph_Graph11022->SetDirectory(0);
   Graph_Graph11022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11022->SetLineColor(ci);
   Graph_Graph11022->GetXaxis()->SetLabelFont(42);
   Graph_Graph11022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11022->GetXaxis()->SetTitleFont(42);
   Graph_Graph11022->GetYaxis()->SetLabelFont(42);
   Graph_Graph11022->GetYaxis()->SetTitleFont(42);
   Graph_Graph11022->GetZaxis()->SetLabelFont(42);
   Graph_Graph11022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11022);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1023[24] = {
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
   Double_t Graph2_fy1023[24] = {
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
   Double_t Graph2_fex1023[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1023[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph2_fx1023,Graph2_fy1023,Graph2_fex1023,Graph2_fey1023);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21023 = new TH1F("Graph_Graph21023","Graph",100,0,394.5);
   Graph_Graph21023->SetMinimum(-0.1782853);
   Graph_Graph21023->SetMaximum(0.1781837);
   Graph_Graph21023->SetDirectory(0);
   Graph_Graph21023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21023->SetLineColor(ci);
   Graph_Graph21023->GetXaxis()->SetLabelFont(42);
   Graph_Graph21023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21023->GetXaxis()->SetTitleFont(42);
   Graph_Graph21023->GetYaxis()->SetLabelFont(42);
   Graph_Graph21023->GetYaxis()->SetTitleFont(42);
   Graph_Graph21023->GetZaxis()->SetLabelFont(42);
   Graph_Graph21023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21023);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1024[24] = {
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
   Double_t Graph0_fy1024[24] = {
   2.529016,
   2.499543,
   2.245811,
   2.202107,
   2.285061,
   2.171663,
   2.173976,
   2.393061,
   2.403195,
   2.536691,
   2.515542,
   2.418781,
   2.580034,
   2.465266,
   2.782451,
   2.904878,
   2.779543,
   2.794883,
   2.880739,
   2.946221,
   2.766497,
   2.732549,
   2.650452,
   2.556573};
   Double_t Graph0_fex1024[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1024[24] = {
   0.06608776,
   0.08847111,
   0.07503091,
   0.0749219,
   0.08198553,
   0.07479387,
   0.07300554,
   0.07520085,
   0.07907066,
   0.0731814,
   0.06860077,
   0.06652757,
   0.06085888,
   0.06948392,
   0.07212867,
   0.0749597,
   0.07164402,
   0.06580415,
   0.06186897,
   0.07137559,
   0.0760995,
   0.07841447,
   0.0704619,
   0.07272824};
   gre = new TGraphErrors(24,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010191024 = new TH1F("Graph_Graph_Graph010191024","100 sub-runs",100,0,394.5);
   Graph_Graph_Graph010191024->SetMinimum(2.004796);
   Graph_Graph_Graph010191024->SetMaximum(3.109669);
   Graph_Graph_Graph010191024->SetDirectory(0);
   Graph_Graph_Graph010191024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010191024->SetLineColor(ci);
   Graph_Graph_Graph010191024->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010191024->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010191024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010191024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010191024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010191024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010191024->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010191024->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010191024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010191024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010191024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010191024->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010191024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010191024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010191024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010191024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010191024);
   
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
   TText *pt_LaTex = pt->AddText("100 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
