void y_vs_theta_overlay_NSUBRUNS_225()
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
   
   Double_t Graph0_fx1050[24] = {
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
   Double_t Graph0_fy1050[24] = {
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
   Double_t Graph0_fex1050[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1050[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","225 sub-runs",100,0,394.5);
   Graph_Graph01050->SetMinimum(-1);
   Graph_Graph01050->SetMaximum(3.5);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1051[24] = {
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
   Double_t Graph0_fy1051[24] = {
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
   Double_t Graph0_fex1051[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1051[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph0_fx1051,Graph0_fy1051,Graph0_fex1051,Graph0_fey1051);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010501051 = new TH1F("Graph_Graph_Graph010501051","225 sub-runs",100,0,394.5);
   Graph_Graph_Graph010501051->SetMinimum(-1);
   Graph_Graph_Graph010501051->SetMaximum(3.5);
   Graph_Graph_Graph010501051->SetDirectory(0);
   Graph_Graph_Graph010501051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010501051->SetLineColor(ci);
   Graph_Graph_Graph010501051->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010501051->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010501051->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010501051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010501051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010501051->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010501051->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010501051->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010501051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010501051->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010501051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010501051->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010501051->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010501051->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010501051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010501051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010501051);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1052[24] = {
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
   Double_t Graph1_fy1052[24] = {
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
   Double_t Graph1_fex1052[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1052[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph1_fx1052,Graph1_fy1052,Graph1_fex1052,Graph1_fey1052);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11052 = new TH1F("Graph_Graph11052","Graph",100,0,394.5);
   Graph_Graph11052->SetMinimum(-0.4220569);
   Graph_Graph11052->SetMaximum(0.416108);
   Graph_Graph11052->SetDirectory(0);
   Graph_Graph11052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11052->SetLineColor(ci);
   Graph_Graph11052->GetXaxis()->SetLabelFont(42);
   Graph_Graph11052->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11052->GetXaxis()->SetTitleFont(42);
   Graph_Graph11052->GetYaxis()->SetLabelFont(42);
   Graph_Graph11052->GetYaxis()->SetTitleFont(42);
   Graph_Graph11052->GetZaxis()->SetLabelFont(42);
   Graph_Graph11052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11052);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1053[24] = {
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
   Double_t Graph2_fy1053[24] = {
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
   Double_t Graph2_fex1053[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1053[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph2_fx1053,Graph2_fy1053,Graph2_fex1053,Graph2_fey1053);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21053 = new TH1F("Graph_Graph21053","Graph",100,0,394.5);
   Graph_Graph21053->SetMinimum(-0.1434934);
   Graph_Graph21053->SetMaximum(0.1463288);
   Graph_Graph21053->SetDirectory(0);
   Graph_Graph21053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21053->SetLineColor(ci);
   Graph_Graph21053->GetXaxis()->SetLabelFont(42);
   Graph_Graph21053->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21053->GetXaxis()->SetTitleFont(42);
   Graph_Graph21053->GetYaxis()->SetLabelFont(42);
   Graph_Graph21053->GetYaxis()->SetTitleFont(42);
   Graph_Graph21053->GetZaxis()->SetLabelFont(42);
   Graph_Graph21053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21053);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1054[24] = {
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
   Double_t Graph0_fy1054[24] = {
   2.439234,
   2.309591,
   2.225186,
   2.217502,
   2.219593,
   2.321084,
   2.311725,
   2.368857,
   2.385425,
   2.484207,
   2.475439,
   2.596883,
   2.530954,
   2.675039,
   2.722582,
   2.76273,
   2.840177,
   2.875004,
   2.828343,
   2.851067,
   2.789942,
   2.753332,
   2.608025,
   2.559579};
   Double_t Graph0_fex1054[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1054[24] = {
   0.04409235,
   0.05901247,
   0.0499343,
   0.04998887,
   0.05453451,
   0.04983242,
   0.04858336,
   0.05011047,
   0.05276969,
   0.04868738,
   0.04565217,
   0.04424393,
   0.04056534,
   0.04619418,
   0.04810692,
   0.04993588,
   0.04764185,
   0.04388354,
   0.04118602,
   0.04743421,
   0.0506215,
   0.05233143,
   0.04697622,
   0.04854386};
   gre = new TGraphErrors(24,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010491054 = new TH1F("Graph_Graph_Graph010491054","225 sub-runs",100,0,394.5);
   Graph_Graph_Graph010491054->SetMinimum(2.089676);
   Graph_Graph_Graph010491054->SetMaximum(2.99427);
   Graph_Graph_Graph010491054->SetDirectory(0);
   Graph_Graph_Graph010491054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010491054->SetLineColor(ci);
   Graph_Graph_Graph010491054->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010491054->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010491054->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010491054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010491054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010491054->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010491054->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010491054->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010491054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010491054->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010491054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010491054->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010491054->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010491054->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010491054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010491054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010491054);
   
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
   TText *pt_LaTex = pt->AddText("225 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
