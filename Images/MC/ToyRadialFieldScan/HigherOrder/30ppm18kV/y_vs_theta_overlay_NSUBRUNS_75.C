void y_vs_theta_overlay_NSUBRUNS_75()
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
   
   Double_t Graph0_fx1014[24] = {
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
   Double_t Graph0_fy1014[24] = {
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
   Double_t Graph0_fex1014[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1014[24] = {
   0.07621562,
   0.1021625,
   0.08674979,
   0.08650519,
   0.09450026,
   0.08609591,
   0.08416018,
   0.08677797,
   0.0912157,
   0.08448729,
   0.07914944,
   0.07682219,
   0.07025395,
   0.08015048,
   0.08319205,
   0.0863726,
   0.08268632,
   0.07573494,
   0.07135327,
   0.0823262,
   0.08777327,
   0.09033616,
   0.08129365,
   0.08379178};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","75 sub-runs",100,0,394.5);
   Graph_Graph01014->SetMinimum(-1);
   Graph_Graph01014->SetMaximum(3.5);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1015[24] = {
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
   Double_t Graph0_fy1015[24] = {
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
   Double_t Graph0_fex1015[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1015[24] = {
   0.07621562,
   0.1021625,
   0.08674979,
   0.08650519,
   0.09450026,
   0.08609591,
   0.08416018,
   0.08677797,
   0.0912157,
   0.08448729,
   0.07914944,
   0.07682219,
   0.07025395,
   0.08015048,
   0.08319205,
   0.0863726,
   0.08268632,
   0.07573494,
   0.07135327,
   0.0823262,
   0.08777327,
   0.09033616,
   0.08129365,
   0.08379178};
   gre = new TGraphErrors(24,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010141015 = new TH1F("Graph_Graph_Graph010141015","75 sub-runs",100,0,394.5);
   Graph_Graph_Graph010141015->SetMinimum(-1);
   Graph_Graph_Graph010141015->SetMaximum(3.5);
   Graph_Graph_Graph010141015->SetDirectory(0);
   Graph_Graph_Graph010141015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010141015->SetLineColor(ci);
   Graph_Graph_Graph010141015->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010141015->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010141015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010141015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010141015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010141015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010141015->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010141015->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010141015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010141015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010141015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010141015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010141015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010141015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010141015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010141015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010141015);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1016[24] = {
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
   Double_t Graph1_fy1016[24] = {
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
   Double_t Graph1_fex1016[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1016[24] = {
   0.07621562,
   0.1021625,
   0.08674979,
   0.08650519,
   0.09450026,
   0.08609591,
   0.08416018,
   0.08677797,
   0.0912157,
   0.08448729,
   0.07914944,
   0.07682219,
   0.07025395,
   0.08015048,
   0.08319205,
   0.0863726,
   0.08268632,
   0.07573494,
   0.07135327,
   0.0823262,
   0.08777327,
   0.09033616,
   0.08129365,
   0.08379178};
   gre = new TGraphErrors(24,Graph1_fx1016,Graph1_fy1016,Graph1_fex1016,Graph1_fey1016);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11016 = new TH1F("Graph_Graph11016","Graph",100,0,394.5);
   Graph_Graph11016->SetMinimum(-0.4651319);
   Graph_Graph11016->SetMaximum(0.4547709);
   Graph_Graph11016->SetDirectory(0);
   Graph_Graph11016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11016->SetLineColor(ci);
   Graph_Graph11016->GetXaxis()->SetLabelFont(42);
   Graph_Graph11016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11016->GetXaxis()->SetTitleFont(42);
   Graph_Graph11016->GetYaxis()->SetLabelFont(42);
   Graph_Graph11016->GetYaxis()->SetTitleFont(42);
   Graph_Graph11016->GetZaxis()->SetLabelFont(42);
   Graph_Graph11016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11016);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1017[24] = {
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
   Double_t Graph2_fy1017[24] = {
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
   Double_t Graph2_fex1017[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1017[24] = {
   0.07621562,
   0.1021625,
   0.08674979,
   0.08650519,
   0.09450026,
   0.08609591,
   0.08416018,
   0.08677797,
   0.0912157,
   0.08448729,
   0.07914944,
   0.07682219,
   0.07025395,
   0.08015048,
   0.08319205,
   0.0863726,
   0.08268632,
   0.07573494,
   0.07135327,
   0.0823262,
   0.08777327,
   0.09033616,
   0.08129365,
   0.08379178};
   gre = new TGraphErrors(24,Graph2_fx1017,Graph2_fy1017,Graph2_fex1017,Graph2_fey1017);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21017 = new TH1F("Graph_Graph21017","Graph",100,0,394.5);
   Graph_Graph21017->SetMinimum(-0.1945604);
   Graph_Graph21017->SetMaximum(0.1929124);
   Graph_Graph21017->SetDirectory(0);
   Graph_Graph21017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21017->SetLineColor(ci);
   Graph_Graph21017->GetXaxis()->SetLabelFont(42);
   Graph_Graph21017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21017->GetXaxis()->SetTitleFont(42);
   Graph_Graph21017->GetYaxis()->SetLabelFont(42);
   Graph_Graph21017->GetYaxis()->SetTitleFont(42);
   Graph_Graph21017->GetZaxis()->SetLabelFont(42);
   Graph_Graph21017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21017);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1018[24] = {
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
   Double_t Graph0_fy1018[24] = {
   2.442748,
   2.350656,
   2.239507,
   2.274187,
   2.242235,
   2.108857,
   2.335899,
   2.122954,
   2.456943,
   2.396549,
   2.571463,
   2.464361,
   2.558045,
   2.680557,
   2.707034,
   2.735211,
   2.958798,
   2.865334,
   2.870886,
   2.97963,
   2.80597,
   2.915946,
   2.848505,
   2.567314};
   Double_t Graph0_fex1018[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1018[24] = {
   0.07621562,
   0.1021625,
   0.08674979,
   0.08650519,
   0.09450026,
   0.08609591,
   0.08416018,
   0.08677797,
   0.0912157,
   0.08448729,
   0.07914944,
   0.07682219,
   0.07025395,
   0.08015048,
   0.08319205,
   0.0863726,
   0.08268632,
   0.07573494,
   0.07135327,
   0.0823262,
   0.08777327,
   0.09033616,
   0.08129365,
   0.08379178};
   gre = new TGraphErrors(24,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010131018 = new TH1F("Graph_Graph_Graph010131018","75 sub-runs",100,0,394.5);
   Graph_Graph_Graph010131018->SetMinimum(1.918841);
   Graph_Graph_Graph010131018->SetMaximum(3.165876);
   Graph_Graph_Graph010131018->SetDirectory(0);
   Graph_Graph_Graph010131018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010131018->SetLineColor(ci);
   Graph_Graph_Graph010131018->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010131018->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010131018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010131018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010131018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010131018->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010131018->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010131018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010131018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010131018->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010131018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010131018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010131018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010131018);
   
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
   TText *pt_LaTex = pt->AddText("75 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
