void S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-9.781544,125,185.8493);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__1644 = new TH1D("S18_ThetaY_15_20__1644","",630,-1575,1575);
   S18_ThetaY_15_20__1644->SetBinContent(311,1);
   S18_ThetaY_15_20__1644->SetBinContent(312,9.666667);
   S18_ThetaY_15_20__1644->SetBinContent(313,19.33333);
   S18_ThetaY_15_20__1644->SetBinContent(314,24.33333);
   S18_ThetaY_15_20__1644->SetBinContent(315,32);
   S18_ThetaY_15_20__1644->SetBinContent(316,33.33333);
   S18_ThetaY_15_20__1644->SetBinContent(317,12.33333);
   S18_ThetaY_15_20__1644->SetBinError(311,0.5773503);
   S18_ThetaY_15_20__1644->SetBinError(312,1.795055);
   S18_ThetaY_15_20__1644->SetBinError(313,2.538591);
   S18_ThetaY_15_20__1644->SetBinError(314,2.848001);
   S18_ThetaY_15_20__1644->SetBinError(315,3.265986);
   S18_ThetaY_15_20__1644->SetBinError(316,3.333333);
   S18_ThetaY_15_20__1644->SetBinError(317,2.027588);
   S18_ThetaY_15_20__1644->SetMinimum(0);
   S18_ThetaY_15_20__1644->SetMaximum(166.2862);
   S18_ThetaY_15_20__1644->SetEntries(396);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1644->SetLineColor(ci);
   S18_ThetaY_15_20__1644->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1644->SetMarkerColor(ci);
   S18_ThetaY_15_20__1644->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__1644->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__1644->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1644->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1644->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1644->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__1644->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__1644->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1644->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1644->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1644->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1644->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1644->Draw("AE");
   
   TH1D *ThetaY_15_20__1645 = new TH1D("ThetaY_15_20__1645","",630,-1575,1575);
   ThetaY_15_20__1645->SetBinContent(311,1);
   ThetaY_15_20__1645->SetBinContent(312,44.78307);
   ThetaY_15_20__1645->SetBinContent(313,107.1217);
   ThetaY_15_20__1645->SetBinContent(314,136.709);
   ThetaY_15_20__1645->SetBinContent(315,148.619);
   ThetaY_15_20__1645->SetBinContent(316,151.1693);
   ThetaY_15_20__1645->SetBinContent(317,135.7037);
   ThetaY_15_20__1645->SetBinContent(318,106.7566);
   ThetaY_15_20__1645->SetBinContent(319,44.44974);
   ThetaY_15_20__1645->SetBinContent(320,0.973545);
   ThetaY_15_20__1645->SetBinError(311,0.0727393);
   ThetaY_15_20__1645->SetBinError(312,0.4867725);
   ThetaY_15_20__1645->SetBinError(313,0.7528489);
   ThetaY_15_20__1645->SetBinError(314,0.8504869);
   ThetaY_15_20__1645->SetBinError(315,0.8867605);
   ThetaY_15_20__1645->SetBinError(316,0.8943364);
   ThetaY_15_20__1645->SetBinError(317,0.8473541);
   ThetaY_15_20__1645->SetBinError(318,0.7515649);
   ThetaY_15_20__1645->SetBinError(319,0.4849575);
   ThetaY_15_20__1645->SetBinError(320,0.07177069);
   ThetaY_15_20__1645->SetEntries(165807);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1645->SetLineColor(ci);
   ThetaY_15_20__1645->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1645->SetMarkerColor(ci);
   ThetaY_15_20__1645->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1645->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1645->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1645->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1645->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1645->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1645->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1645->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1645->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1645->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1645->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1645->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1645->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1645->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1645->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1645->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1645->Draw("AEsame");
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
   
   Double_t _fx3549[10] = {
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
   Double_t _fy3549[10] = {
   1,
   0.2158554,
   0.1804801,
   0.1779937,
   0.2153156,
   0.2205033,
   0.09088428,
   0,
   0,
   0};
   Double_t _felx3549[10] = {
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
   Double_t _fely3549[10] = {
   0.5473836,
   0.03991686,
   0.02366293,
   0.02081371,
   0.0219743,
   0.02205152,
   0.01488389,
   0,
   0,
   0};
   Double_t _fehx3549[10] = {
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
   Double_t _fehy3549[10] = {
   0.9879902,
   0.04808746,
   0.02699053,
   0.02340336,
   0.02434096,
   0.02437617,
   0.01754729,
   0.005748608,
   0.01380753,
   0.6335138};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3549,_fy3549,_felx3549,_fehx3549,_fely3549,_fehy3549);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3549 = new TH1F("Graph_Graph3549","",100,-100,100);
   Graph_Graph3549->SetMinimum(0);
   Graph_Graph3549->SetMaximum(1.5);
   Graph_Graph3549->SetDirectory(0);
   Graph_Graph3549->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3549->SetLineColor(ci);
   Graph_Graph3549->GetXaxis()->SetRange(1,100);
   Graph_Graph3549->GetXaxis()->CenterTitle(true);
   Graph_Graph3549->GetXaxis()->SetLabelFont(42);
   Graph_Graph3549->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3549->GetXaxis()->SetTitleFont(42);
   Graph_Graph3549->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3549->GetYaxis()->CenterTitle(true);
   Graph_Graph3549->GetYaxis()->SetLabelFont(42);
   Graph_Graph3549->GetYaxis()->SetTitleFont(42);
   Graph_Graph3549->GetZaxis()->SetLabelFont(42);
   Graph_Graph3549->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3549->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3549);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,166.2862,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1646 = new TH2D("ThetaY_vs_Y_15_20__1646","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8102,189);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8128,8464);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8154,20246);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8180,25838);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8206,28089);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8232,28571);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8258,25648);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8284,20177);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8310,8401);
   ThetaY_vs_Y_15_20__1646->SetBinContent(8336,184);
   ThetaY_vs_Y_15_20__1646->SetEntries(165807);
   ThetaY_vs_Y_15_20__1646->SetContour(20);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(1,1428.55);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(2,2857.1);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(3,4285.65);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(4,5714.2);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(5,7142.75);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(6,8571.3);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(7,9999.85);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(8,11428.4);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(9,12856.95);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(10,14285.5);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(11,15714.05);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(12,17142.6);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(13,18571.15);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(14,19999.7);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(15,21428.25);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(16,22856.8);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(17,24285.35);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(18,25713.9);
   ThetaY_vs_Y_15_20__1646->SetContourLevel(19,27142.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1646->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1646->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1646->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1646->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1646->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1646->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1646->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1646->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1646->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1646->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1646->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1646->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1646->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1646->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1646->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1646->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
