void y_vs_theta_NSUBRUNS_300()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 18 14:30:07 2020) by ROOT version 6.22/02
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
   2.56486,
   2.558572,
   2.628446,
   2.519753,
   2.592258,
   2.542155,
   2.600185,
   2.579649,
   2.500851,
   2.535412,
   2.52842,
   2.513462,
   2.514652,
   2.536235,
   2.618393,
   2.520897,
   2.557204,
   2.510552,
   2.547928,
   2.608868,
   2.545256,
   2.505829,
   2.526066,
   2.501718};
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("300 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","300 sub-runs",100,0,394.5);
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
   2.56486,
   2.558572,
   2.628446,
   2.519753,
   2.592258,
   2.542155,
   2.600185,
   2.579649,
   2.500851,
   2.535412,
   2.52842,
   2.513462,
   2.514652,
   2.536235,
   2.618393,
   2.520897,
   2.557204,
   2.510552,
   2.547928,
   2.608868,
   2.545256,
   2.505829,
   2.526066,
   2.501718};
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
   gre = new TGraphErrors(24,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("300 sub-runs");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph010561057 = new TH1F("Graph_Graph_Graph010561057","300 sub-runs",100,0,394.5);
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
   -0.1454808,
   -0.2988634,
   -0.2609926,
   -0.203238,
   -0.26392,
   -0.294259,
   -0.3369848,
   -0.2797738,
   -0.1100446,
   -0.1456333,
   -0.1024963,
   0.03059941,
   0.0375211,
   0.2280342,
   0.1979055,
   0.2163956,
   0.2990149,
   0.304474,
   0.2642996,
   0.2542056,
   0.2313771,
   0.05868202,
   0.109184,
   -0.02776865};
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
   gre = new TGraphErrors(24,Graph1_fx1058,Graph1_fy1058,Graph1_fex1058,Graph1_fey1058);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph11058 = new TH1F("Graph_Graph11058","Graph",100,0,394.5);
   Graph_Graph11058->SetMinimum(-0.4511713);
   Graph_Graph11058->SetMaximum(0.4146396);
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
   -0.04596064,
   -0.03161126,
   0.01545469,
   -0.03988934,
   -0.02016026,
   0.07575963,
   0.06506857,
   0.0933371,
   -0.006756178,
   0.02754311,
   0.04156152,
   -0.02336521,
   0.00143117,
   -0.06763646,
   -0.01892342,
   -0.08420142,
   -0.03932883,
   0.01953348,
   0.04301427,
   0.09166781,
   0.1164527,
   0.02798857,
   0.05488386,
   0.00782554};
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
   gre = new TGraphErrors(24,Graph2_fx1059,Graph2_fy1059,Graph2_fex1059,Graph2_fey1059);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph21059 = new TH1F("Graph_Graph21059","Graph",100,0,394.5);
   Graph_Graph21059->SetMinimum(-0.1562044);
   Graph_Graph21059->SetMaximum(0.1890772);
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
   
   Double_t Graph3_fx1060[24] = {
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
   Double_t Graph3_fy1060[24] = {
   2.373419,
   2.228098,
   2.382908,
   2.276626,
   2.308178,
   2.323656,
   2.328269,
   2.393213,
   2.384051,
   2.417322,
   2.467485,
   2.520696,
   2.553604,
   2.696632,
   2.797375,
   2.653091,
   2.81689,
   2.834559,
   2.855242,
   2.954741,
   2.893086,
   2.592499,
   2.690134,
   2.481775};
   Double_t Graph3_fex1060[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1060[24] = {
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
   gre = new TGraphErrors(24,Graph3_fx1060,Graph3_fy1060,Graph3_fex1060,Graph3_fey1060);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph31060 = new TH1F("Graph_Graph31060","Graph",100,0,394.5);
   Graph_Graph31060->SetMinimum(2.095146);
   Graph_Graph31060->SetMaximum(3.077671);
   Graph_Graph31060->SetDirectory(0);
   Graph_Graph31060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31060->SetLineColor(ci);
   Graph_Graph31060->GetXaxis()->SetLabelFont(42);
   Graph_Graph31060->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31060->GetXaxis()->SetTitleFont(42);
   Graph_Graph31060->GetYaxis()->SetLabelFont(42);
   Graph_Graph31060->GetYaxis()->SetTitleFont(42);
   Graph_Graph31060->GetZaxis()->SetLabelFont(42);
   Graph_Graph31060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31060);
   
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
