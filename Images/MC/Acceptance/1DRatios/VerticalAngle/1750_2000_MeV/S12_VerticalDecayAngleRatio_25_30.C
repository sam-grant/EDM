void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,1);
   p1->Draw();
   p1->cd();
   p1->Range(0,0,1,1);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-125,-0.1220052,125,2.318099);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__1251 = new TH1D("S12_ThetaY_25_30__1251","",630,-1575,1575);
   S12_ThetaY_25_30__1251->SetBinContent(310,0.2444444);
   S12_ThetaY_25_30__1251->SetBinContent(311,1);
   S12_ThetaY_25_30__1251->SetBinContent(312,1.111111);
   S12_ThetaY_25_30__1251->SetBinContent(313,1.333333);
   S12_ThetaY_25_30__1251->SetBinContent(314,1.666667);
   S12_ThetaY_25_30__1251->SetBinContent(315,1.777778);
   S12_ThetaY_25_30__1251->SetBinContent(316,1.533333);
   S12_ThetaY_25_30__1251->SetBinContent(317,0.2888889);
   S12_ThetaY_25_30__1251->SetBinError(310,0.07370277);
   S12_ThetaY_25_30__1251->SetBinError(311,0.1490712);
   S12_ThetaY_25_30__1251->SetBinError(312,0.1571348);
   S12_ThetaY_25_30__1251->SetBinError(313,0.1721326);
   S12_ThetaY_25_30__1251->SetBinError(314,0.1924501);
   S12_ThetaY_25_30__1251->SetBinError(315,0.1987616);
   S12_ThetaY_25_30__1251->SetBinError(316,0.1845916);
   S12_ThetaY_25_30__1251->SetBinError(317,0.08012336);
   S12_ThetaY_25_30__1251->SetMinimum(0);
   S12_ThetaY_25_30__1251->SetMaximum(2.074089);
   S12_ThetaY_25_30__1251->SetEntries(403);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1251->SetLineColor(ci);
   S12_ThetaY_25_30__1251->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1251->SetMarkerColor(ci);
   S12_ThetaY_25_30__1251->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__1251->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__1251->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1251->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1251->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1251->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__1251->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__1251->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1251->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1251->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1251->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1251->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1251->Draw("AE");
   
   TH1D *ThetaY_25_30__1252 = new TH1D("ThetaY_25_30__1252","",630,-1575,1575);
   ThetaY_25_30__1252->SetBinContent(309,0.001045342);
   ThetaY_25_30__1252->SetBinContent(310,0.2777996);
   ThetaY_25_30__1252->SetBinContent(311,1);
   ThetaY_25_30__1252->SetBinContent(312,1.407553);
   ThetaY_25_30__1252->SetBinContent(313,1.655299);
   ThetaY_25_30__1252->SetBinContent(314,1.814452);
   ThetaY_25_30__1252->SetBinContent(315,1.877564);
   ThetaY_25_30__1252->SetBinContent(316,1.885535);
   ThetaY_25_30__1252->SetBinContent(317,1.820332);
   ThetaY_25_30__1252->SetBinContent(318,1.671632);
   ThetaY_25_30__1252->SetBinContent(319,1.402979);
   ThetaY_25_30__1252->SetBinContent(320,1.001307);
   ThetaY_25_30__1252->SetBinContent(321,0.2823729);
   ThetaY_25_30__1252->SetBinContent(322,0.0005226708);
   ThetaY_25_30__1252->SetBinError(309,0.0003695841);
   ThetaY_25_30__1252->SetBinError(310,0.006024901);
   ThetaY_25_30__1252->SetBinError(311,0.011431);
   ThetaY_25_30__1252->SetBinError(312,0.01356177);
   ThetaY_25_30__1252->SetBinError(313,0.01470694);
   ThetaY_25_30__1252->SetBinError(314,0.01539774);
   ThetaY_25_30__1252->SetBinError(315,0.01566324);
   ThetaY_25_30__1252->SetBinError(316,0.01569645);
   ThetaY_25_30__1252->SetBinError(317,0.01542267);
   ThetaY_25_30__1252->SetBinError(318,0.01477932);
   ThetaY_25_30__1252->SetBinError(319,0.01353972);
   ThetaY_25_30__1252->SetBinError(320,0.01143846);
   ThetaY_25_30__1252->SetBinError(321,0.006074292);
   ThetaY_25_30__1252->SetBinError(322,0.0002613354);
   ThetaY_25_30__1252->SetEntries(123201);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1252->SetLineColor(ci);
   ThetaY_25_30__1252->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1252->SetMarkerColor(ci);
   ThetaY_25_30__1252->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1252->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1252->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1252->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1252->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1252->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1252->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1252->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1252->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1252->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1252->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1252->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1252->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1252->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1252->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1252->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1252->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-125,-0.6923077,125,1.615385);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3418[14] = {
   -32.5,
   -27.5,
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5};
   Double_t _fy3418[14] = {
   0,
   0.879931,
   1,
   0.7893923,
   0.8054942,
   0.9185511,
   0.9468532,
   0.8132086,
   0.1587012,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3418[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3418[14] = {
   0,
   0.2618455,
   0.1489418,
   0.1115152,
   0.1039396,
   0.1061099,
   0.1059298,
   0.09789094,
   0.04346224,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3418[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3418[14] = {
   44.00658,
   0.3545744,
   0.1729915,
   0.1285147,
   0.1183119,
   0.1191461,
   0.118508,
   0.1104565,
   0.05738339,
   0.0244758,
   0.02916301,
   0.04086311,
   0.1449467,
   99.40033};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3418,_fy3418,_felx3418,_fehx3418,_fely3418,_fehy3418);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3418 = new TH1F("Graph_Graph3418","",100,-100,100);
   Graph_Graph3418->SetMinimum(0);
   Graph_Graph3418->SetMaximum(1.5);
   Graph_Graph3418->SetDirectory(0);
   Graph_Graph3418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3418->SetLineColor(ci);
   Graph_Graph3418->GetXaxis()->SetRange(1,100);
   Graph_Graph3418->GetXaxis()->CenterTitle(true);
   Graph_Graph3418->GetXaxis()->SetLabelFont(42);
   Graph_Graph3418->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3418->GetXaxis()->SetTitleFont(42);
   Graph_Graph3418->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3418->GetYaxis()->CenterTitle(true);
   Graph_Graph3418->GetYaxis()->SetLabelFont(42);
   Graph_Graph3418->GetYaxis()->SetTitleFont(42);
   Graph_Graph3418->GetZaxis()->SetLabelFont(42);
   Graph_Graph3418->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3418->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3418);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-100,0.7,100,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1,100,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1.3,100,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-100,100,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.074089,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Normalised entries");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-100,100,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("#theta_{y} [mrad]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.5,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Ratio");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   p1->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0.69,0.69,0.99,0.99);
   p2->Draw();
   p2->cd();
   p2->Range(0,0,1,1);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetFrameBorderMode(0);
   
   TH2D *ThetaY_vs_Y_25_30__1253 = new TH2D("ThetaY_vs_Y_25_30__1253","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8052,8);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8078,2126);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8104,7653);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8130,10772);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8156,12668);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8182,13886);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8208,14369);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8234,14430);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8260,13931);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8286,12793);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8312,10737);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8338,7663);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8364,2161);
   ThetaY_vs_Y_25_30__1253->SetBinContent(8390,4);
   ThetaY_vs_Y_25_30__1253->SetEntries(123201);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1253->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1253->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1253->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1253->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1253->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1253->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1253->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1253->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1253->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1253->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1253->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1253->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1253->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1253->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1253->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1253->Draw("COL");
   p2->Modified();
   c->cd();
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
