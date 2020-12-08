void y_vs_theta_overlay_NSUBRUNS_50()
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
   
   Double_t Graph0_fx1008[24] = {
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
   Double_t Graph0_fy1008[24] = {
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
   Double_t Graph0_fex1008[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1008[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("50 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01008 = new TH1F("Graph_Graph01008","50 sub-runs",100,0,394.5);
   Graph_Graph01008->SetMinimum(-1);
   Graph_Graph01008->SetMaximum(3.5);
   Graph_Graph01008->SetDirectory(0);
   Graph_Graph01008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01008->SetLineColor(ci);
   Graph_Graph01008->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01008->GetXaxis()->CenterTitle(true);
   Graph_Graph01008->GetXaxis()->SetLabelFont(42);
   Graph_Graph01008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01008->GetXaxis()->SetTitleFont(42);
   Graph_Graph01008->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01008->GetYaxis()->CenterTitle(true);
   Graph_Graph01008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01008->GetYaxis()->SetLabelFont(42);
   Graph_Graph01008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01008->GetYaxis()->SetTitleFont(42);
   Graph_Graph01008->GetZaxis()->SetLabelFont(42);
   Graph_Graph01008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01008);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1009[24] = {
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
   Double_t Graph0_fy1009[24] = {
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
   Double_t Graph0_fex1009[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1009[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("50 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010081009 = new TH1F("Graph_Graph_Graph010081009","50 sub-runs",100,0,394.5);
   Graph_Graph_Graph010081009->SetMinimum(-1);
   Graph_Graph_Graph010081009->SetMaximum(3.5);
   Graph_Graph_Graph010081009->SetDirectory(0);
   Graph_Graph_Graph010081009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010081009->SetLineColor(ci);
   Graph_Graph_Graph010081009->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010081009->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010081009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010081009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010081009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010081009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010081009->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010081009->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010081009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010081009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010081009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010081009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010081009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010081009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010081009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010081009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010081009);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1010[24] = {
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
   Double_t Graph1_fy1010[24] = {
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
   Double_t Graph1_fex1010[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1010[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph1_fx1010,Graph1_fy1010,Graph1_fex1010,Graph1_fey1010);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11010 = new TH1F("Graph_Graph11010","Graph",100,0,394.5);
   Graph_Graph11010->SetMinimum(-0.4884093);
   Graph_Graph11010->SetMaximum(0.4756187);
   Graph_Graph11010->SetDirectory(0);
   Graph_Graph11010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11010->SetLineColor(ci);
   Graph_Graph11010->GetXaxis()->SetLabelFont(42);
   Graph_Graph11010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11010->GetXaxis()->SetTitleFont(42);
   Graph_Graph11010->GetYaxis()->SetLabelFont(42);
   Graph_Graph11010->GetYaxis()->SetTitleFont(42);
   Graph_Graph11010->GetZaxis()->SetLabelFont(42);
   Graph_Graph11010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11010);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1011[24] = {
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
   Double_t Graph2_fy1011[24] = {
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
   Double_t Graph2_fex1011[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1011[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph2_fx1011,Graph2_fy1011,Graph2_fex1011,Graph2_fey1011);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21011 = new TH1F("Graph_Graph21011","Graph",100,0,394.5);
   Graph_Graph21011->SetMinimum(-0.2216552);
   Graph_Graph21011->SetMaximum(0.2178584);
   Graph_Graph21011->SetDirectory(0);
   Graph_Graph21011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21011->SetLineColor(ci);
   Graph_Graph21011->GetXaxis()->SetLabelFont(42);
   Graph_Graph21011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21011->GetXaxis()->SetTitleFont(42);
   Graph_Graph21011->GetYaxis()->SetLabelFont(42);
   Graph_Graph21011->GetYaxis()->SetTitleFont(42);
   Graph_Graph21011->GetZaxis()->SetLabelFont(42);
   Graph_Graph21011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21011);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1012[24] = {
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
   Double_t Graph0_fy1012[24] = {
   2.451072,
   2.410165,
   2.31086,
   2.133813,
   2.316005,
   2.27747,
   2.27208,
   2.229025,
   2.346268,
   2.47363,
   2.484277,
   2.611396,
   2.439168,
   2.672591,
   2.560206,
   2.733476,
   2.832709,
   2.937061,
   2.901713,
   2.857371,
   2.841837,
   2.681653,
   2.629987,
   2.389886};
   Double_t Graph0_fex1012[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1012[24] = {
   0.09326891,
   0.1249206,
   0.1060002,
   0.1059517,
   0.1155948,
   0.1056962,
   0.1030515,
   0.1063903,
   0.111825,
   0.1035712,
   0.09686124,
   0.0942741,
   0.08591503,
   0.09802295,
   0.1019172,
   0.1055227,
   0.1013221,
   0.09290559,
   0.08723408,
   0.1008544,
   0.1072842,
   0.1106188,
   0.09924892,
   0.1026083};
   gre = new TGraphErrors(24,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("50 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010071012 = new TH1F("Graph_Graph_Graph010071012","50 sub-runs",100,0,394.5);
   Graph_Graph_Graph010071012->SetMinimum(1.927651);
   Graph_Graph_Graph010071012->SetMaximum(3.130178);
   Graph_Graph_Graph010071012->SetDirectory(0);
   Graph_Graph_Graph010071012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010071012->SetLineColor(ci);
   Graph_Graph_Graph010071012->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010071012->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010071012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010071012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010071012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010071012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010071012->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010071012->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010071012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010071012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010071012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010071012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010071012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010071012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010071012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010071012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010071012);
   
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
   TText *pt_LaTex = pt->AddText("50 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
