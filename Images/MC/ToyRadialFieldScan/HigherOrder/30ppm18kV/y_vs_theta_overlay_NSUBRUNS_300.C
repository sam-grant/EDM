void y_vs_theta_overlay_NSUBRUNS_300()
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
   
   Double_t Graph0_fx1068[24] = {
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
   Double_t Graph0_fy1068[24] = {
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
   Double_t Graph0_fex1068[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1068[24] = {
   0.03821953,
   0.05107425,
   0.04320932,
   0.04326477,
   0.04724277,
   0.04316612,
   0.04203564,
   0.04340734,
   0.0457671,
   0.04215526,
   0.03953616,
   0.03831803,
   0.03510795,
   0.03999885,
   0.04162619,
   0.04322948,
   0.04125511,
   0.03801467,
   0.03571522,
   0.04105315,
   0.043851,
   0.04530223,
   0.04067438,
   0.04205097};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("300 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","300 sub-runs",100,0,394.5);
   Graph_Graph01068->SetMinimum(-1);
   Graph_Graph01068->SetMaximum(3.5);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01068->GetYaxis()->CenterTitle(true);
   Graph_Graph01068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01068->GetYaxis()->SetLabelFont(42);
   Graph_Graph01068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetYaxis()->SetTitleFont(42);
   Graph_Graph01068->GetZaxis()->SetLabelFont(42);
   Graph_Graph01068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01068);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1069[24] = {
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
   Double_t Graph0_fy1069[24] = {
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
   Double_t Graph0_fex1069[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1069[24] = {
   0.03821953,
   0.05107425,
   0.04320932,
   0.04326477,
   0.04724277,
   0.04316612,
   0.04203564,
   0.04340734,
   0.0457671,
   0.04215526,
   0.03953616,
   0.03831803,
   0.03510795,
   0.03999885,
   0.04162619,
   0.04322948,
   0.04125511,
   0.03801467,
   0.03571522,
   0.04105315,
   0.043851,
   0.04530223,
   0.04067438,
   0.04205097};
   gre = new TGraphErrors(24,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("300 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010681069 = new TH1F("Graph_Graph_Graph010681069","300 sub-runs",100,0,394.5);
   Graph_Graph_Graph010681069->SetMinimum(-1);
   Graph_Graph_Graph010681069->SetMaximum(3.5);
   Graph_Graph_Graph010681069->SetDirectory(0);
   Graph_Graph_Graph010681069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010681069->SetLineColor(ci);
   Graph_Graph_Graph010681069->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010681069->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010681069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010681069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010681069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010681069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010681069->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010681069->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010681069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010681069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010681069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010681069->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010681069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010681069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010681069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010681069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010681069);
   
   gre->Draw("p ");
   
   Double_t Graph1_fx1070[24] = {
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
   Double_t Graph1_fy1070[24] = {
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
   Double_t Graph1_fex1070[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1070[24] = {
   0.03821953,
   0.05107425,
   0.04320932,
   0.04326477,
   0.04724277,
   0.04316612,
   0.04203564,
   0.04340734,
   0.0457671,
   0.04215526,
   0.03953616,
   0.03831803,
   0.03510795,
   0.03999885,
   0.04162619,
   0.04322948,
   0.04125511,
   0.03801467,
   0.03571522,
   0.04105315,
   0.043851,
   0.04530223,
   0.04067438,
   0.04205097};
   gre = new TGraphErrors(24,Graph1_fx1070,Graph1_fy1070,Graph1_fex1070,Graph1_fey1070);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11070 = new TH1F("Graph_Graph11070","Graph",100,0,394.5);
   Graph_Graph11070->SetMinimum(-0.4141371);
   Graph_Graph11070->SetMaximum(0.4089856);
   Graph_Graph11070->SetDirectory(0);
   Graph_Graph11070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11070->SetLineColor(ci);
   Graph_Graph11070->GetXaxis()->SetLabelFont(42);
   Graph_Graph11070->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11070->GetXaxis()->SetTitleFont(42);
   Graph_Graph11070->GetYaxis()->SetLabelFont(42);
   Graph_Graph11070->GetYaxis()->SetTitleFont(42);
   Graph_Graph11070->GetZaxis()->SetLabelFont(42);
   Graph_Graph11070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11070);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1071[24] = {
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
   Double_t Graph2_fy1071[24] = {
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
   Double_t Graph2_fex1071[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1071[24] = {
   0.03821953,
   0.05107425,
   0.04320932,
   0.04326477,
   0.04724277,
   0.04316612,
   0.04203564,
   0.04340734,
   0.0457671,
   0.04215526,
   0.03953616,
   0.03831803,
   0.03510795,
   0.03999885,
   0.04162619,
   0.04322948,
   0.04125511,
   0.03801467,
   0.03571522,
   0.04105315,
   0.043851,
   0.04530223,
   0.04067438,
   0.04205097};
   gre = new TGraphErrors(24,Graph2_fx1071,Graph2_fy1071,Graph2_fex1071,Graph2_fey1071);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21071 = new TH1F("Graph_Graph21071","Graph",100,0,394.5);
   Graph_Graph21071->SetMinimum(-0.1353957);
   Graph_Graph21071->SetMaximum(0.1379535);
   Graph_Graph21071->SetDirectory(0);
   Graph_Graph21071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21071->SetLineColor(ci);
   Graph_Graph21071->GetXaxis()->SetLabelFont(42);
   Graph_Graph21071->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21071->GetXaxis()->SetTitleFont(42);
   Graph_Graph21071->GetYaxis()->SetLabelFont(42);
   Graph_Graph21071->GetYaxis()->SetTitleFont(42);
   Graph_Graph21071->GetZaxis()->SetLabelFont(42);
   Graph_Graph21071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21071);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1072[24] = {
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
   Double_t Graph0_fy1072[24] = {
   2.456783,
   2.319156,
   2.216973,
   2.295218,
   2.185935,
   2.20785,
   2.191873,
   2.40153,
   2.320332,
   2.465991,
   2.490329,
   2.502651,
   2.531006,
   2.601541,
   2.667067,
   2.636161,
   2.738287,
   2.859436,
   2.868662,
   2.88841,
   2.791888,
   2.747532,
   2.640764,
   2.597485};
   Double_t Graph0_fex1072[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1072[24] = {
   0.03821953,
   0.05107425,
   0.04320932,
   0.04326477,
   0.04724277,
   0.04316612,
   0.04203564,
   0.04340734,
   0.0457671,
   0.04215526,
   0.03953616,
   0.03831803,
   0.03510795,
   0.03999885,
   0.04162619,
   0.04322948,
   0.04125511,
   0.03801467,
   0.03571522,
   0.04105315,
   0.043851,
   0.04530223,
   0.04067438,
   0.04205097};
   gre = new TGraphErrors(24,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("300 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010671072 = new TH1F("Graph_Graph_Graph010671072","300 sub-runs",100,0,394.5);
   Graph_Graph_Graph010671072->SetMinimum(2.059615);
   Graph_Graph_Graph010671072->SetMaximum(3.00854);
   Graph_Graph_Graph010671072->SetDirectory(0);
   Graph_Graph_Graph010671072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010671072->SetLineColor(ci);
   Graph_Graph_Graph010671072->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph010671072->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010671072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010671072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010671072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010671072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010671072->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph010671072->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010671072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010671072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010671072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010671072->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010671072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010671072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010671072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010671072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010671072);
   
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
   TText *pt_LaTex = pt->AddText("300 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
