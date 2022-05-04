void S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:45 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2900953,125,5.51181);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__627 = new TH1D("S18_ThetaY_30_35__627","",630,-1575,1575);
   S18_ThetaY_30_35__627->SetBinContent(304,0.07142857);
   S18_ThetaY_30_35__627->SetBinContent(305,1);
   S18_ThetaY_30_35__627->SetBinContent(306,1.071429);
   S18_ThetaY_30_35__627->SetBinContent(307,2.285714);
   S18_ThetaY_30_35__627->SetBinContent(308,2.571429);
   S18_ThetaY_30_35__627->SetBinContent(309,3.142857);
   S18_ThetaY_30_35__627->SetBinContent(310,2.571429);
   S18_ThetaY_30_35__627->SetBinContent(311,3.642857);
   S18_ThetaY_30_35__627->SetBinContent(312,3.071429);
   S18_ThetaY_30_35__627->SetBinContent(313,3.571429);
   S18_ThetaY_30_35__627->SetBinContent(314,2.642857);
   S18_ThetaY_30_35__627->SetBinContent(315,3.071429);
   S18_ThetaY_30_35__627->SetBinContent(316,3.357143);
   S18_ThetaY_30_35__627->SetBinContent(317,1);
   S18_ThetaY_30_35__627->SetBinError(304,0.07142857);
   S18_ThetaY_30_35__627->SetBinError(305,0.2672612);
   S18_ThetaY_30_35__627->SetBinError(306,0.2766417);
   S18_ThetaY_30_35__627->SetBinError(307,0.404061);
   S18_ThetaY_30_35__627->SetBinError(308,0.4285714);
   S18_ThetaY_30_35__627->SetBinError(309,0.4738035);
   S18_ThetaY_30_35__627->SetBinError(310,0.4285714);
   S18_ThetaY_30_35__627->SetBinError(311,0.510102);
   S18_ThetaY_30_35__627->SetBinError(312,0.4683885);
   S18_ThetaY_30_35__627->SetBinError(313,0.5050763);
   S18_ThetaY_30_35__627->SetBinError(314,0.434483);
   S18_ThetaY_30_35__627->SetBinError(315,0.4683885);
   S18_ThetaY_30_35__627->SetBinError(316,0.4896896);
   S18_ThetaY_30_35__627->SetBinError(317,0.2672612);
   S18_ThetaY_30_35__627->SetMinimum(0);
   S18_ThetaY_30_35__627->SetMaximum(4.93162);
   S18_ThetaY_30_35__627->SetEntries(463);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__627->SetLineColor(ci);
   S18_ThetaY_30_35__627->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__627->SetMarkerColor(ci);
   S18_ThetaY_30_35__627->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__627->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__627->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__627->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__627->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__627->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__627->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__627->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__627->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__627->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__627->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__627->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__627->Draw("AE");
   
   TH1D *ThetaY_30_35__628 = new TH1D("ThetaY_30_35__628","",630,-1575,1575);
   ThetaY_30_35__628->SetBinContent(303,0.001285347);
   ThetaY_30_35__628->SetBinContent(304,0.2249357);
   ThetaY_30_35__628->SetBinContent(305,1);
   ThetaY_30_35__628->SetBinContent(306,2.255784);
   ThetaY_30_35__628->SetBinContent(307,3.129177);
   ThetaY_30_35__628->SetBinContent(308,3.626607);
   ThetaY_30_35__628->SetBinContent(309,4.056555);
   ThetaY_30_35__628->SetBinContent(310,4.26671);
   ThetaY_30_35__628->SetBinContent(311,4.262853);
   ThetaY_30_35__628->SetBinContent(312,4.346401);
   ThetaY_30_35__628->SetBinContent(313,4.431877);
   ThetaY_30_35__628->SetBinContent(314,4.48329);
   ThetaY_30_35__628->SetBinContent(315,4.406812);
   ThetaY_30_35__628->SetBinContent(316,4.452442);
   ThetaY_30_35__628->SetBinContent(317,4.456298);
   ThetaY_30_35__628->SetBinContent(318,4.349614);
   ThetaY_30_35__628->SetBinContent(319,4.474936);
   ThetaY_30_35__628->SetBinContent(320,4.384319);
   ThetaY_30_35__628->SetBinContent(321,4.244216);
   ThetaY_30_35__628->SetBinContent(322,3.878535);
   ThetaY_30_35__628->SetBinContent(323,3.580334);
   ThetaY_30_35__628->SetBinContent(324,3.001928);
   ThetaY_30_35__628->SetBinContent(325,2.283419);
   ThetaY_30_35__628->SetBinContent(326,1.047558);
   ThetaY_30_35__628->SetBinContent(327,0.2544987);
   ThetaY_30_35__628->SetBinContent(328,0.0006426735);
   ThetaY_30_35__628->SetBinError(303,0.0009088776);
   ThetaY_30_35__628->SetBinError(304,0.01202332);
   ThetaY_30_35__628->SetBinError(305,0.02535101);
   ThetaY_30_35__628->SetBinError(306,0.03807536);
   ThetaY_30_35__628->SetBinError(307,0.04484461);
   ThetaY_30_35__628->SetBinError(308,0.04827757);
   ThetaY_30_35__628->SetBinError(309,0.05105919);
   ThetaY_30_35__628->SetBinError(310,0.05236508);
   ThetaY_30_35__628->SetBinError(311,0.05234141);
   ThetaY_30_35__628->SetBinError(312,0.05285184);
   ThetaY_30_35__628->SetBinError(313,0.053369);
   ThetaY_30_35__628->SetBinError(314,0.05367767);
   ThetaY_30_35__628->SetBinError(315,0.05321787);
   ThetaY_30_35__628->SetBinError(316,0.05349268);
   ThetaY_30_35__628->SetBinError(317,0.05351584);
   ThetaY_30_35__628->SetBinError(318,0.05287137);
   ThetaY_30_35__628->SetBinError(319,0.05362763);
   ThetaY_30_35__628->SetBinError(320,0.05308188);
   ThetaY_30_35__628->SetBinError(321,0.05222686);
   ThetaY_30_35__628->SetBinError(322,0.04992626);
   ThetaY_30_35__628->SetBinError(323,0.04796859);
   ThetaY_30_35__628->SetBinError(324,0.04392334);
   ThetaY_30_35__628->SetBinError(325,0.03830787);
   ThetaY_30_35__628->SetBinError(326,0.02594682);
   ThetaY_30_35__628->SetBinError(327,0.01278904);
   ThetaY_30_35__628->SetBinError(328,0.0006426735);
   ThetaY_30_35__628->SetEntries(125882);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__628->SetLineColor(ci);
   ThetaY_30_35__628->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__628->SetMarkerColor(ci);
   ThetaY_30_35__628->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__628->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__628->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__628->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__628->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__628->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__628->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__628->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__628->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__628->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__628->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__628->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__628->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__628->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__628->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__628->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__628->Draw("AEsame");
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
   
   Double_t _fx3210[26] = {
   -62.5,
   -57.5,
   -52.5,
   -47.5,
   -42.5,
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
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5};
   Double_t _fy3210[26] = {
   0,
   0.317551,
   1,
   0.4749695,
   0.7304521,
   0.7090453,
   0.7747601,
   0.6026725,
   0.8545584,
   0.7066602,
   0.8058502,
   0.5894905,
   0.6969729,
   0.7540003,
   0.2244015,
   0,
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
   Double_t _felx3210[26] = {
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
   Double_t _fely3210[26] = {
   0,
   0.2628357,
   0.2651433,
   0.1214989,
   0.1288575,
   0.1179874,
   0.1167499,
   0.1002402,
   0.1197174,
   0.107677,
   0.1139851,
   0.09672054,
   0.1061964,
   0.109953,
   0.05930591,
   0,
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
   Double_t _fehx3210[26] = {
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
   Double_t _fehy3210[26] = {
   167.8893,
   0.7336648,
   0.347113,
   0.1574628,
   0.1539069,
   0.1394935,
   0.1358459,
   0.1184989,
   0.1378119,
   0.1255014,
   0.1313921,
   0.1140762,
   0.1237747,
   0.1273069,
   0.07752973,
   0.03023703,
   0.02939013,
   0.02999766,
   0.03098803,
   0.03391013,
   0.03673492,
   0.04381433,
   0.05760468,
   0.1256025,
   0.5179111,
   589.3877};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3210,_fy3210,_felx3210,_fehx3210,_fely3210,_fehy3210);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3210 = new TH1F("Graph_Graph3210","",100,-100,100);
   Graph_Graph3210->SetMinimum(0);
   Graph_Graph3210->SetMaximum(1.5);
   Graph_Graph3210->SetDirectory(0);
   Graph_Graph3210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3210->SetLineColor(ci);
   Graph_Graph3210->GetXaxis()->SetRange(1,100);
   Graph_Graph3210->GetXaxis()->CenterTitle(true);
   Graph_Graph3210->GetXaxis()->SetLabelFont(42);
   Graph_Graph3210->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3210->GetXaxis()->SetTitleFont(42);
   Graph_Graph3210->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3210->GetYaxis()->CenterTitle(true);
   Graph_Graph3210->GetYaxis()->SetLabelFont(42);
   Graph_Graph3210->GetYaxis()->SetTitleFont(42);
   Graph_Graph3210->GetZaxis()->SetLabelFont(42);
   Graph_Graph3210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3210->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3210);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,4.93162,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__629 = new TH2D("ThetaY_vs_Y_30_35__629","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__629->SetBinContent(7897,2);
   ThetaY_vs_Y_30_35__629->SetBinContent(7923,350);
   ThetaY_vs_Y_30_35__629->SetBinContent(7949,1556);
   ThetaY_vs_Y_30_35__629->SetBinContent(7975,3510);
   ThetaY_vs_Y_30_35__629->SetBinContent(8001,4869);
   ThetaY_vs_Y_30_35__629->SetBinContent(8027,5643);
   ThetaY_vs_Y_30_35__629->SetBinContent(8053,6312);
   ThetaY_vs_Y_30_35__629->SetBinContent(8079,6639);
   ThetaY_vs_Y_30_35__629->SetBinContent(8105,6633);
   ThetaY_vs_Y_30_35__629->SetBinContent(8131,6763);
   ThetaY_vs_Y_30_35__629->SetBinContent(8157,6896);
   ThetaY_vs_Y_30_35__629->SetBinContent(8183,6976);
   ThetaY_vs_Y_30_35__629->SetBinContent(8209,6857);
   ThetaY_vs_Y_30_35__629->SetBinContent(8235,6928);
   ThetaY_vs_Y_30_35__629->SetBinContent(8261,6934);
   ThetaY_vs_Y_30_35__629->SetBinContent(8287,6768);
   ThetaY_vs_Y_30_35__629->SetBinContent(8313,6963);
   ThetaY_vs_Y_30_35__629->SetBinContent(8339,6822);
   ThetaY_vs_Y_30_35__629->SetBinContent(8365,6604);
   ThetaY_vs_Y_30_35__629->SetBinContent(8391,6035);
   ThetaY_vs_Y_30_35__629->SetBinContent(8417,5571);
   ThetaY_vs_Y_30_35__629->SetBinContent(8443,4671);
   ThetaY_vs_Y_30_35__629->SetBinContent(8469,3553);
   ThetaY_vs_Y_30_35__629->SetBinContent(8495,1630);
   ThetaY_vs_Y_30_35__629->SetBinContent(8521,396);
   ThetaY_vs_Y_30_35__629->SetBinContent(8547,1);
   ThetaY_vs_Y_30_35__629->SetEntries(125882);
   ThetaY_vs_Y_30_35__629->SetContour(20);
   ThetaY_vs_Y_30_35__629->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__629->SetContourLevel(1,348.8);
   ThetaY_vs_Y_30_35__629->SetContourLevel(2,697.6);
   ThetaY_vs_Y_30_35__629->SetContourLevel(3,1046.4);
   ThetaY_vs_Y_30_35__629->SetContourLevel(4,1395.2);
   ThetaY_vs_Y_30_35__629->SetContourLevel(5,1744);
   ThetaY_vs_Y_30_35__629->SetContourLevel(6,2092.8);
   ThetaY_vs_Y_30_35__629->SetContourLevel(7,2441.6);
   ThetaY_vs_Y_30_35__629->SetContourLevel(8,2790.4);
   ThetaY_vs_Y_30_35__629->SetContourLevel(9,3139.2);
   ThetaY_vs_Y_30_35__629->SetContourLevel(10,3488);
   ThetaY_vs_Y_30_35__629->SetContourLevel(11,3836.8);
   ThetaY_vs_Y_30_35__629->SetContourLevel(12,4185.6);
   ThetaY_vs_Y_30_35__629->SetContourLevel(13,4534.4);
   ThetaY_vs_Y_30_35__629->SetContourLevel(14,4883.2);
   ThetaY_vs_Y_30_35__629->SetContourLevel(15,5232);
   ThetaY_vs_Y_30_35__629->SetContourLevel(16,5580.8);
   ThetaY_vs_Y_30_35__629->SetContourLevel(17,5929.6);
   ThetaY_vs_Y_30_35__629->SetContourLevel(18,6278.4);
   ThetaY_vs_Y_30_35__629->SetContourLevel(19,6627.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__629->SetLineColor(ci);
   ThetaY_vs_Y_30_35__629->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__629->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__629->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__629->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__629->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__629->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__629->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__629->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__629->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__629->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__629->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__629->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__629->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__629->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__629->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_30_35","Reco vertices","lpf");
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
