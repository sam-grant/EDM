void y_vs_theta_overlay_NSUBRUNS_250()
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
   
   Double_t Graph0_fx1056[24] = {
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
   Double_t Graph0_fy1056[24] = {
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
   Double_t Graph0_fex1056[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1056[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("250 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","250 sub-runs",100,0,394.5);
   Graph_Graph01056->SetMinimum(-1);
   Graph_Graph01056->SetMaximum(3.5);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01056->GetYaxis()->CenterTitle(true);
   Graph_Graph01056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01056->GetYaxis()->SetLabelFont(42);
   Graph_Graph01056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetYaxis()->SetTitleFont(42);
   Graph_Graph01056->GetZaxis()->SetLabelFont(42);
   Graph_Graph01056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01056);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1057[24] = {
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
   Double_t Graph0_fy1057[24] = {
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
   Double_t Graph0_fex1057[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1057[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("250 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010561057 = new TH1F("Graph_Graph_Graph010561057","250 sub-runs",100,0,394.5);
   Graph_Graph_Graph010561057->SetMinimum(-1);
   Graph_Graph_Graph010561057->SetMaximum(3.5);
   Graph_Graph_Graph010561057->SetDirectory(0);
   Graph_Graph_Graph010561057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010561057->SetLineColor(ci);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010561057->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010561057->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010561057->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010561057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010561057->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010561057->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010561057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010561057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010561057);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1058[24] = {
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
   Double_t Graph1_fy1058[24] = {
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
   Double_t Graph1_fex1058[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1058[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph1_fx1058,Graph1_fy1058,Graph1_fex1058,Graph1_fey1058);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11058 = new TH1F("Graph_Graph11058","Graph",100,0,394.5);
   Graph_Graph11058->SetMinimum(-0.4190156);
   Graph_Graph11058->SetMaximum(0.4133765);
   Graph_Graph11058->SetDirectory(0);
   Graph_Graph11058->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11058->SetLineColor(ci);
   Graph_Graph11058->GetXaxis()->SetLabelFont(42);
   Graph_Graph11058->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11058->GetXaxis()->SetTitleFont(42);
   Graph_Graph11058->GetYaxis()->SetLabelFont(42);
   Graph_Graph11058->GetYaxis()->SetTitleFont(42);
   Graph_Graph11058->GetZaxis()->SetLabelFont(42);
   Graph_Graph11058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11058);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1059[24] = {
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
   Double_t Graph2_fy1059[24] = {
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
   Double_t Graph2_fex1059[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1059[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph2_fx1059,Graph2_fy1059,Graph2_fex1059,Graph2_fey1059);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21059 = new TH1F("Graph_Graph21059","Graph",100,0,394.5);
   Graph_Graph21059->SetMinimum(-0.1403919);
   Graph_Graph21059->SetMaximum(0.1431392);
   Graph_Graph21059->SetDirectory(0);
   Graph_Graph21059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21059->SetLineColor(ci);
   Graph_Graph21059->GetXaxis()->SetLabelFont(42);
   Graph_Graph21059->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21059->GetXaxis()->SetTitleFont(42);
   Graph_Graph21059->GetYaxis()->SetLabelFont(42);
   Graph_Graph21059->GetYaxis()->SetTitleFont(42);
   Graph_Graph21059->GetZaxis()->SetLabelFont(42);
   Graph_Graph21059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21059);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1060[24] = {
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
   Double_t Graph0_fy1060[24] = {
   2.491613,
   2.418154,
   2.230692,
   2.241822,
   2.198855,
   2.283601,
   2.302099,
   2.410813,
   2.36633,
   2.523329,
   2.507053,
   2.595027,
   2.588446,
   2.685048,
   2.732065,
   2.768658,
   2.819242,
   2.865728,
   2.904665,
   2.848328,
   2.852167,
   2.724805,
   2.677288,
   2.594214};
   Double_t Graph0_fex1060[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1060[24] = {
   0.04182525,
   0.05597218,
   0.04735702,
   0.04739784,
   0.05172589,
   0.0472722,
   0.04607597,
   0.04753407,
   0.05010437,
   0.04617692,
   0.04331479,
   0.0419779,
   0.03847717,
   0.04380251,
   0.04561899,
   0.0473387,
   0.04519202,
   0.04163309,
   0.03909563,
   0.04498014,
   0.04804343,
   0.04963795,
   0.04456516,
   0.04606199};
   gre = new TGraphErrors(24,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("250 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010551060 = new TH1F("Graph_Graph_Graph010551060","250 sub-runs",100,0,394.5);
   Graph_Graph_Graph010551060->SetMinimum(2.067466);
   Graph_Graph_Graph010551060->SetMaximum(3.023424);
   Graph_Graph_Graph010551060->SetDirectory(0);
   Graph_Graph_Graph010551060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010551060->SetLineColor(ci);
   Graph_Graph_Graph010551060->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010551060->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010551060->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010551060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010551060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010551060->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010551060->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010551060->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010551060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010551060->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010551060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010551060->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010551060->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010551060->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010551060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010551060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010551060);
   
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
   TText *pt_LaTex = pt->AddText("250 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
