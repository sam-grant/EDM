void y_vs_theta_overlay_NSUBRUNS_200()
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
   
   Double_t Graph0_fx1044[24] = {
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
   Double_t Graph0_fy1044[24] = {
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
   Double_t Graph0_fex1044[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1044[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","200 sub-runs",100,0,394.5);
   Graph_Graph01044->SetMinimum(-1);
   Graph_Graph01044->SetMaximum(3.5);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1045[24] = {
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
   Double_t Graph0_fy1045[24] = {
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
   Double_t Graph0_fex1045[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1045[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010441045 = new TH1F("Graph_Graph_Graph010441045","200 sub-runs",100,0,394.5);
   Graph_Graph_Graph010441045->SetMinimum(-1);
   Graph_Graph_Graph010441045->SetMaximum(3.5);
   Graph_Graph_Graph010441045->SetDirectory(0);
   Graph_Graph_Graph010441045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010441045->SetLineColor(ci);
   Graph_Graph_Graph010441045->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010441045->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010441045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010441045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010441045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010441045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010441045->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010441045->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010441045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010441045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010441045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010441045->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010441045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010441045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010441045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010441045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010441045);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1046[24] = {
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
   Double_t Graph1_fy1046[24] = {
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
   Double_t Graph1_fex1046[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1046[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph1_fx1046,Graph1_fy1046,Graph1_fex1046,Graph1_fey1046);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11046 = new TH1F("Graph_Graph11046","Graph",100,0,394.5);
   Graph_Graph11046->SetMinimum(-0.4256672);
   Graph_Graph11046->SetMaximum(0.4193243);
   Graph_Graph11046->SetDirectory(0);
   Graph_Graph11046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11046->SetLineColor(ci);
   Graph_Graph11046->GetXaxis()->SetLabelFont(42);
   Graph_Graph11046->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11046->GetXaxis()->SetTitleFont(42);
   Graph_Graph11046->GetYaxis()->SetLabelFont(42);
   Graph_Graph11046->GetYaxis()->SetTitleFont(42);
   Graph_Graph11046->GetZaxis()->SetLabelFont(42);
   Graph_Graph11046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11046);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1047[24] = {
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
   Double_t Graph2_fy1047[24] = {
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
   Double_t Graph2_fex1047[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1047[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph2_fx1047,Graph2_fy1047,Graph2_fex1047,Graph2_fey1047);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21047 = new TH1F("Graph_Graph21047","Graph",100,0,394.5);
   Graph_Graph21047->SetMinimum(-0.1474947);
   Graph_Graph21047->SetMaximum(0.1501609);
   Graph_Graph21047->SetDirectory(0);
   Graph_Graph21047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21047->SetLineColor(ci);
   Graph_Graph21047->GetXaxis()->SetLabelFont(42);
   Graph_Graph21047->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21047->GetXaxis()->SetTitleFont(42);
   Graph_Graph21047->GetYaxis()->SetLabelFont(42);
   Graph_Graph21047->GetYaxis()->SetTitleFont(42);
   Graph_Graph21047->GetZaxis()->SetLabelFont(42);
   Graph_Graph21047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21047);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1048[24] = {
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
   Double_t Graph0_fy1048[24] = {
   2.404891,
   2.428007,
   2.18405,
   2.256143,
   2.202065,
   2.192331,
   2.277948,
   2.289535,
   2.393146,
   2.551108,
   2.440313,
   2.463353,
   2.567307,
   2.665713,
   2.761019,
   2.820735,
   2.766322,
   2.792524,
   2.844297,
   2.891276,
   2.756231,
   2.802331,
   2.606865,
   2.567451};
   Double_t Graph0_fex1048[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1048[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   gre = new TGraphErrors(24,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010431048 = new TH1F("Graph_Graph_Graph010431048","200 sub-runs",100,0,394.5);
   Graph_Graph_Graph010431048->SetMinimum(2.049983);
   Graph_Graph_Graph010431048->SetMaximum(3.02263);
   Graph_Graph_Graph010431048->SetDirectory(0);
   Graph_Graph_Graph010431048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010431048->SetLineColor(ci);
   Graph_Graph_Graph010431048->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010431048->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010431048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010431048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010431048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010431048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010431048->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010431048->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010431048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010431048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010431048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010431048->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010431048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010431048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010431048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010431048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010431048);
   
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
   TText *pt_LaTex = pt->AddText("200 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
