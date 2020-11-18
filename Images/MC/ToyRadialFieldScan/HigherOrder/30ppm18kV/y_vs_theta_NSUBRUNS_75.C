void y_vs_theta_NSUBRUNS_75()
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
   
   Double_t Graph0_fx1011[24] = {
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
   Double_t Graph0_fy1011[24] = {
   2.502805,
   2.556777,
   2.572699,
   2.471219,
   2.546573,
   2.157134,
   2.764133,
   2.557944,
   2.492946,
   2.59832,
   2.530638,
   2.690045,
   2.510881,
   2.657382,
   2.493508,
   2.617139,
   2.559308,
   2.537108,
   2.580821,
   2.596851,
   2.421436,
   2.574641,
   2.460167,
   2.540808};
   Double_t Graph0_fex1011[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1011[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","75 sub-runs",100,0,394.5);
   Graph_Graph01011->SetMinimum(-1);
   Graph_Graph01011->SetMaximum(3.5);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   gre->Draw("ap");
   
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
   2.502805,
   2.556777,
   2.572699,
   2.471219,
   2.546573,
   2.157134,
   2.764133,
   2.557944,
   2.492946,
   2.59832,
   2.530638,
   2.690045,
   2.510881,
   2.657382,
   2.493508,
   2.617139,
   2.559308,
   2.537108,
   2.580821,
   2.596851,
   2.421436,
   2.574641,
   2.460167,
   2.540808};
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
   gre = new TGraphErrors(24,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010111012 = new TH1F("Graph_Graph_Graph010111012","75 sub-runs",100,0,394.5);
   Graph_Graph_Graph010111012->SetMinimum(-1);
   Graph_Graph_Graph010111012->SetMaximum(3.5);
   Graph_Graph_Graph010111012->SetDirectory(0);
   Graph_Graph_Graph010111012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010111012->SetLineColor(ci);
   Graph_Graph_Graph010111012->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010111012->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010111012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010111012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010111012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010111012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010111012->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010111012->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010111012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010111012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010111012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010111012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010111012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010111012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010111012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010111012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010111012);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1013[24] = {
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
   Double_t Graph1_fy1013[24] = {
   -0.1676197,
   0.08688872,
   -0.3112653,
   -0.4554311,
   -0.2427016,
   -0.2872646,
   -0.4461484,
   -0.1053296,
   -0.07501432,
   -0.1734485,
   -0.1568339,
   -0.09551607,
   0.1220868,
   0.09549522,
   0.2555318,
   0.1748756,
   0.2595839,
   0.3055642,
   0.3298626,
   0.2166382,
   0.2895935,
   0.2246258,
   0.05258061,
   -0.08742985};
   Double_t Graph1_fex1013[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1013[24] = {
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
   gre = new TGraphErrors(24,Graph1_fx1013,Graph1_fy1013,Graph1_fex1013,Graph1_fey1013);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11013 = new TH1F("Graph_Graph11013","Graph",100,0,394.5);
   Graph_Graph11013->SetMinimum(-0.6362515);
   Graph_Graph11013->SetMaximum(0.4955311);
   Graph_Graph11013->SetDirectory(0);
   Graph_Graph11013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11013->SetLineColor(ci);
   Graph_Graph11013->GetXaxis()->SetLabelFont(42);
   Graph_Graph11013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11013->GetXaxis()->SetTitleFont(42);
   Graph_Graph11013->GetYaxis()->SetLabelFont(42);
   Graph_Graph11013->GetYaxis()->SetTitleFont(42);
   Graph_Graph11013->GetZaxis()->SetLabelFont(42);
   Graph_Graph11013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11013);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1014[24] = {
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
   Double_t Graph2_fy1014[24] = {
   -0.1327085,
   -0.01697218,
   -0.01845159,
   -0.09793363,
   -0.06425724,
   0.1963089,
   0.03716678,
   0.05765164,
   -0.06274689,
   -0.01877648,
   0.02547348,
   -0.1321607,
   0.06514427,
   -0.1530041,
   -0.179466,
   -0.02089327,
   -0.09376988,
   0.1206485,
   0.01544145,
   0.1583679,
   0.1316233,
   0.1188793,
   -0.02528544,
   0.026758};
   Double_t Graph2_fex1014[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1014[24] = {
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
   gre = new TGraphErrors(24,Graph2_fx1014,Graph2_fy1014,Graph2_fex1014,Graph2_fey1014);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21014 = new TH1F("Graph_Graph21014","Graph",100,0,394.5);
   Graph_Graph21014->SetMinimum(-0.3171643);
   Graph_Graph21014->SetMaximum(0.3369111);
   Graph_Graph21014->SetDirectory(0);
   Graph_Graph21014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21014->SetLineColor(ci);
   Graph_Graph21014->GetXaxis()->SetLabelFont(42);
   Graph_Graph21014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21014->GetXaxis()->SetTitleFont(42);
   Graph_Graph21014->GetYaxis()->SetLabelFont(42);
   Graph_Graph21014->GetYaxis()->SetTitleFont(42);
   Graph_Graph21014->GetZaxis()->SetLabelFont(42);
   Graph_Graph21014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21014);
   
   gre->Draw("p ");
   
   Double_t Graph3_fx1015[24] = {
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
   Double_t Graph3_fy1015[24] = {
   2.202477,
   2.626693,
   2.242982,
   1.917855,
   2.239614,
   2.066179,
   2.355151,
   2.510266,
   2.355185,
   2.406095,
   2.399278,
   2.462368,
   2.698112,
   2.599873,
   2.569573,
   2.771122,
   2.725122,
   2.963321,
   2.926125,
   2.971857,
   2.842652,
   2.918146,
   2.487462,
   2.480136};
   Double_t Graph3_fex1015[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1015[24] = {
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
   gre = new TGraphErrors(24,Graph3_fx1015,Graph3_fy1015,Graph3_fex1015,Graph3_fey1015);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31015 = new TH1F("Graph_Graph31015","Graph",100,0,394.5);
   Graph_Graph31015->SetMinimum(1.709066);
   Graph_Graph31015->SetMaximum(3.176466);
   Graph_Graph31015->SetDirectory(0);
   Graph_Graph31015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31015->SetLineColor(ci);
   Graph_Graph31015->GetXaxis()->SetLabelFont(42);
   Graph_Graph31015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31015->GetXaxis()->SetTitleFont(42);
   Graph_Graph31015->GetYaxis()->SetLabelFont(42);
   Graph_Graph31015->GetYaxis()->SetTitleFont(42);
   Graph_Graph31015->GetZaxis()->SetLabelFont(42);
   Graph_Graph31015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31015);
   
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
   TText *pt_LaTex = pt->AddText("75 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
