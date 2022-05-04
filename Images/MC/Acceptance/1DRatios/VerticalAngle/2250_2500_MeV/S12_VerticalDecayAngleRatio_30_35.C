void S12_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0719366,125,1.366795);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__1596 = new TH1D("S12_ThetaY_30_35__1596","",630,-1575,1575);
   S12_ThetaY_30_35__1596->SetBinContent(312,0.25);
   S12_ThetaY_30_35__1596->SetBinContent(313,0.65);
   S12_ThetaY_30_35__1596->SetBinContent(314,1);
   S12_ThetaY_30_35__1596->SetBinContent(315,1.1);
   S12_ThetaY_30_35__1596->SetBinContent(316,0.55);
   S12_ThetaY_30_35__1596->SetBinError(312,0.1118034);
   S12_ThetaY_30_35__1596->SetBinError(313,0.1802776);
   S12_ThetaY_30_35__1596->SetBinError(314,0.2236068);
   S12_ThetaY_30_35__1596->SetBinError(315,0.2345208);
   S12_ThetaY_30_35__1596->SetBinError(316,0.1658312);
   S12_ThetaY_30_35__1596->SetMinimum(0);
   S12_ThetaY_30_35__1596->SetMaximum(1.222922);
   S12_ThetaY_30_35__1596->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1596->SetLineColor(ci);
   S12_ThetaY_30_35__1596->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1596->SetMarkerColor(ci);
   S12_ThetaY_30_35__1596->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__1596->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__1596->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1596->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1596->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1596->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__1596->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__1596->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1596->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1596->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1596->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1596->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1596->Draw("AE");
   
   TH1D *ThetaY_30_35__1597 = new TH1D("ThetaY_30_35__1597","",630,-1575,1575);
   ThetaY_30_35__1597->SetBinContent(311,0.007583965);
   ThetaY_30_35__1597->SetBinContent(312,0.3288965);
   ThetaY_30_35__1597->SetBinContent(313,0.7816128);
   ThetaY_30_35__1597->SetBinContent(314,1);
   ThetaY_30_35__1597->SetBinContent(315,1.111747);
   ThetaY_30_35__1597->SetBinContent(316,1.091008);
   ThetaY_30_35__1597->SetBinContent(317,1.015168);
   ThetaY_30_35__1597->SetBinContent(318,0.8025074);
   ThetaY_30_35__1597->SetBinContent(319,0.3200743);
   ThetaY_30_35__1597->SetBinContent(320,0.006655317);
   ThetaY_30_35__1597->SetBinError(311,0.001083424);
   ThetaY_30_35__1597->SetBinError(312,0.007134766);
   ThetaY_30_35__1597->SetBinError(313,0.01099882);
   ThetaY_30_35__1597->SetBinError(314,0.01244085);
   ThetaY_30_35__1597->SetBinError(315,0.01311756);
   ThetaY_30_35__1597->SetBinError(316,0.01299463);
   ThetaY_30_35__1597->SetBinError(317,0.01253485);
   ThetaY_30_35__1597->SetBinError(318,0.01114486);
   ThetaY_30_35__1597->SetBinError(319,0.007038426);
   ThetaY_30_35__1597->SetBinError(320,0.001014926);
   ThetaY_30_35__1597->SetEntries(41772);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1597->SetLineColor(ci);
   ThetaY_30_35__1597->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1597->SetMarkerColor(ci);
   ThetaY_30_35__1597->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1597->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1597->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1597->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1597->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1597->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1597->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1597->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1597->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1597->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1597->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1597->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1597->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1597->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1597->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1597->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1597->Draw("AEsame");
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
   
   Double_t _fx3533[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3533[10] = {
   0,
   0.7601176,
   0.8316139,
   1,
   0.9894334,
   0.5041212,
   0,
   0,
   0,
   0};
   Double_t _felx3533[10] = {
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
   Double_t _fely3533[10] = {
   0,
   0.3286446,
   0.2279211,
   0.2220494,
   0.2096395,
   0.1497661,
   0,
   0,
   0,
   0};
   Double_t _fehx3533[10] = {
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
   Double_t _fehy3533[10] = {
   12.36849,
   0.5152297,
   0.3010316,
   0.277874,
   0.2596136,
   0.2026269,
   0.09068845,
   0.1147247,
   0.2877209,
   14.13157};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3533,_fy3533,_felx3533,_fehx3533,_fely3533,_fehy3533);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3533 = new TH1F("Graph_Graph3533","",100,-100,100);
   Graph_Graph3533->SetMinimum(0);
   Graph_Graph3533->SetMaximum(1.5);
   Graph_Graph3533->SetDirectory(0);
   Graph_Graph3533->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3533->SetLineColor(ci);
   Graph_Graph3533->GetXaxis()->SetRange(1,100);
   Graph_Graph3533->GetXaxis()->CenterTitle(true);
   Graph_Graph3533->GetXaxis()->SetLabelFont(42);
   Graph_Graph3533->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3533->GetXaxis()->SetTitleFont(42);
   Graph_Graph3533->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3533->GetYaxis()->CenterTitle(true);
   Graph_Graph3533->GetYaxis()->SetLabelFont(42);
   Graph_Graph3533->GetYaxis()->SetTitleFont(42);
   Graph_Graph3533->GetZaxis()->SetLabelFont(42);
   Graph_Graph3533->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3533->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3533);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.222922,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1598 = new TH2D("ThetaY_vs_Y_30_35__1598","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8105,49);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8131,2125);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8157,5050);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8183,6461);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8209,7183);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8235,7049);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8261,6559);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8287,5185);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8313,2068);
   ThetaY_vs_Y_30_35__1598->SetBinContent(8339,43);
   ThetaY_vs_Y_30_35__1598->SetEntries(41772);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1598->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1598->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1598->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1598->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1598->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1598->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1598->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1598->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1598->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1598->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1598->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1598->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1598->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1598->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1598->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1598->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
