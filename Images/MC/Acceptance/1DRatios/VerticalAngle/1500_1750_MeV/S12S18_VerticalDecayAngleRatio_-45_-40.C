void S12S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07594072,125,1.442874);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__1152 = new TH1D("S12S18_ThetaY_mI45_mI40__1152","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(315,0.04347826);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(316,0.6086957);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(317,0.6521739);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(318,0.6521739);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(319,1);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(320,0.6086957);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(321,0.3913043);
   S12S18_ThetaY_mI45_mI40__1152->SetBinContent(322,0.04347826);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(315,0.04347826);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(316,0.1626808);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(317,0.1683906);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(318,0.1683906);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(319,0.2085144);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(320,0.1626808);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(321,0.1304348);
   S12S18_ThetaY_mI45_mI40__1152->SetBinError(322,0.04347826);
   S12S18_ThetaY_mI45_mI40__1152->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__1152->SetMaximum(1.290992);
   S12S18_ThetaY_mI45_mI40__1152->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1152->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__1152->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1152->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__1152->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__1152->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__1152->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1152->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1152->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1152->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__1152->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__1152->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1152->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1152->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1152->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1152->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1152->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1153 = new TH1D("ThetaY_mI45_mI40__1153","",630,-1575,1575);
   ThetaY_mI45_mI40__1153->SetBinContent(308,0.0006527415);
   ThetaY_mI45_mI40__1153->SetBinContent(309,0.1429504);
   ThetaY_mI45_mI40__1153->SetBinContent(310,0.5456919);
   ThetaY_mI45_mI40__1153->SetBinContent(311,0.8211488);
   ThetaY_mI45_mI40__1153->SetBinContent(312,0.9947781);
   ThetaY_mI45_mI40__1153->SetBinContent(313,1.035248);
   ThetaY_mI45_mI40__1153->SetBinContent(314,1.116841);
   ThetaY_mI45_mI40__1153->SetBinContent(315,1.173629);
   ThetaY_mI45_mI40__1153->SetBinContent(316,1.127285);
   ThetaY_mI45_mI40__1153->SetBinContent(317,1.140992);
   ThetaY_mI45_mI40__1153->SetBinContent(318,1.045692);
   ThetaY_mI45_mI40__1153->SetBinContent(319,1);
   ThetaY_mI45_mI40__1153->SetBinContent(320,0.823107);
   ThetaY_mI45_mI40__1153->SetBinContent(321,0.5483029);
   ThetaY_mI45_mI40__1153->SetBinContent(322,0.1527415);
   ThetaY_mI45_mI40__1153->SetBinError(308,0.0006527415);
   ThetaY_mI45_mI40__1153->SetBinError(309,0.009659692);
   ThetaY_mI45_mI40__1153->SetBinError(310,0.01887315);
   ThetaY_mI45_mI40__1153->SetBinError(311,0.02315163);
   ThetaY_mI45_mI40__1153->SetBinError(312,0.02548201);
   ThetaY_mI45_mI40__1153->SetBinError(313,0.02599518);
   ThetaY_mI45_mI40__1153->SetBinError(314,0.02700015);
   ThetaY_mI45_mI40__1153->SetBinError(315,0.02767809);
   ThetaY_mI45_mI40__1153->SetBinError(316,0.0271261);
   ThetaY_mI45_mI40__1153->SetBinError(317,0.02729053);
   ThetaY_mI45_mI40__1153->SetBinError(318,0.02612597);
   ThetaY_mI45_mI40__1153->SetBinError(319,0.02554881);
   ThetaY_mI45_mI40__1153->SetBinError(320,0.02317922);
   ThetaY_mI45_mI40__1153->SetBinError(321,0.01891825);
   ThetaY_mI45_mI40__1153->SetBinError(322,0.009985025);
   ThetaY_mI45_mI40__1153->SetEntries(17877);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1153->SetLineColor(ci);
   ThetaY_mI45_mI40__1153->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1153->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1153->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1153->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1153->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1153->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1153->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1153->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1153->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1153->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1153->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1153->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1153->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1153->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1153->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1153->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1153->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1153->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1153->Draw("AEsame");
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
   
   Double_t _fx3385[15] = {
   -37.5,
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
   Double_t _fy3385[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03704599,
   0.5399663,
   0.5715849,
   0.6236769,
   1,
   0.7395097,
   0.7136646,
   0.2846525};
   Double_t _felx3385[15] = {
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
   2.5,
   2.5};
   Double_t _fely3385[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03064941,
   0.1431094,
   0.1465075,
   0.1599178,
   0.2084722,
   0.196267,
   0.234528,
   0.235669};
   Double_t _fehx3385[15] = {
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
   2.5,
   2.5};
   Double_t _fehy3385[15] = {
   353.2242,
   0.5623056,
   0.1468459,
   0.09754994,
   0.08051322,
   0.07736397,
   0.07170897,
   0.08526644,
   0.1873179,
   0.1900338,
   0.2074598,
   0.2574077,
   0.2570539,
   0.3284649,
   0.6591926};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3385,_fy3385,_felx3385,_fehx3385,_fely3385,_fehy3385);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3385 = new TH1F("Graph_Graph3385","",100,-100,100);
   Graph_Graph3385->SetMinimum(0);
   Graph_Graph3385->SetMaximum(1.5);
   Graph_Graph3385->SetDirectory(0);
   Graph_Graph3385->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3385->SetLineColor(ci);
   Graph_Graph3385->GetXaxis()->SetRange(1,100);
   Graph_Graph3385->GetXaxis()->CenterTitle(true);
   Graph_Graph3385->GetXaxis()->SetLabelFont(42);
   Graph_Graph3385->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3385->GetXaxis()->SetTitleFont(42);
   Graph_Graph3385->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3385->GetYaxis()->CenterTitle(true);
   Graph_Graph3385->GetYaxis()->SetLabelFont(42);
   Graph_Graph3385->GetYaxis()->SetTitleFont(42);
   Graph_Graph3385->GetZaxis()->SetLabelFont(42);
   Graph_Graph3385->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3385->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3385);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.290992,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1154 = new TH2D("ThetaY_vs_Y_mI45_mI40__1154","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8012,1);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8038,219);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8064,836);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8090,1258);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8116,1524);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8142,1586);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8168,1711);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8194,1798);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8220,1727);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8246,1748);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8272,1602);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8298,1532);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8324,1261);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8350,840);
   ThetaY_vs_Y_mI45_mI40__1154->SetBinContent(8376,234);
   ThetaY_vs_Y_mI45_mI40__1154->SetEntries(17877);
   ThetaY_vs_Y_mI45_mI40__1154->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(1,89.9);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(2,179.8);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(3,269.7);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(4,359.6);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(5,449.5);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(6,539.4);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(7,629.3);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(8,719.2);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(9,809.1);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(10,899);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(11,988.9);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(12,1078.8);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(13,1168.7);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(14,1258.6);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(15,1348.5);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(16,1438.4);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(17,1528.3);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(18,1618.2);
   ThetaY_vs_Y_mI45_mI40__1154->SetContourLevel(19,1708.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1154->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1154->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1154->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1154->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1154->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1154->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1154->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1154->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1154->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1154->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1154->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1154->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1154->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1154->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1154->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1154->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
