void S12S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_30_35__684 = new TH1D("S12S18_ThetaY_30_35__684","",630,-1575,1575);
   S12S18_ThetaY_30_35__684->SetBinContent(304,0.03333333);
   S12S18_ThetaY_30_35__684->SetBinContent(305,1);
   S12S18_ThetaY_30_35__684->SetBinContent(306,1.166667);
   S12S18_ThetaY_30_35__684->SetBinContent(307,2.1);
   S12S18_ThetaY_30_35__684->SetBinContent(308,2.266667);
   S12S18_ThetaY_30_35__684->SetBinContent(309,2.733333);
   S12S18_ThetaY_30_35__684->SetBinContent(310,2.833333);
   S12S18_ThetaY_30_35__684->SetBinContent(311,2.8);
   S12S18_ThetaY_30_35__684->SetBinContent(312,2.666667);
   S12S18_ThetaY_30_35__684->SetBinContent(313,3.266667);
   S12S18_ThetaY_30_35__684->SetBinContent(314,2.6);
   S12S18_ThetaY_30_35__684->SetBinContent(315,2.7);
   S12S18_ThetaY_30_35__684->SetBinContent(316,2.933333);
   S12S18_ThetaY_30_35__684->SetBinContent(317,1.033333);
   S12S18_ThetaY_30_35__684->SetBinContent(318,0.03333333);
   S12S18_ThetaY_30_35__684->SetBinError(304,0.03333333);
   S12S18_ThetaY_30_35__684->SetBinError(305,0.1825742);
   S12S18_ThetaY_30_35__684->SetBinError(306,0.1972027);
   S12S18_ThetaY_30_35__684->SetBinError(307,0.2645751);
   S12S18_ThetaY_30_35__684->SetBinError(308,0.2748737);
   S12S18_ThetaY_30_35__684->SetBinError(309,0.3018462);
   S12S18_ThetaY_30_35__684->SetBinError(310,0.3073181);
   S12S18_ThetaY_30_35__684->SetBinError(311,0.305505);
   S12S18_ThetaY_30_35__684->SetBinError(312,0.2981424);
   S12S18_ThetaY_30_35__684->SetBinError(313,0.3299832);
   S12S18_ThetaY_30_35__684->SetBinError(314,0.294392);
   S12S18_ThetaY_30_35__684->SetBinError(315,0.3);
   S12S18_ThetaY_30_35__684->SetBinError(316,0.3126944);
   S12S18_ThetaY_30_35__684->SetBinError(317,0.1855921);
   S12S18_ThetaY_30_35__684->SetBinError(318,0.03333333);
   S12S18_ThetaY_30_35__684->SetMinimum(0);
   S12S18_ThetaY_30_35__684->SetMaximum(4.93162);
   S12S18_ThetaY_30_35__684->SetEntries(905);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__684->SetLineColor(ci);
   S12S18_ThetaY_30_35__684->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__684->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__684->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__684->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__684->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__684->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__684->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__684->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__684->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__684->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__684->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__684->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__684->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__684->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__684->Draw("AE");
   
   TH1D *ThetaY_30_35__685 = new TH1D("ThetaY_30_35__685","",630,-1575,1575);
   ThetaY_30_35__685->SetBinContent(303,0.001285347);
   ThetaY_30_35__685->SetBinContent(304,0.2249357);
   ThetaY_30_35__685->SetBinContent(305,1);
   ThetaY_30_35__685->SetBinContent(306,2.255784);
   ThetaY_30_35__685->SetBinContent(307,3.129177);
   ThetaY_30_35__685->SetBinContent(308,3.626607);
   ThetaY_30_35__685->SetBinContent(309,4.056555);
   ThetaY_30_35__685->SetBinContent(310,4.26671);
   ThetaY_30_35__685->SetBinContent(311,4.262853);
   ThetaY_30_35__685->SetBinContent(312,4.346401);
   ThetaY_30_35__685->SetBinContent(313,4.431877);
   ThetaY_30_35__685->SetBinContent(314,4.48329);
   ThetaY_30_35__685->SetBinContent(315,4.406812);
   ThetaY_30_35__685->SetBinContent(316,4.452442);
   ThetaY_30_35__685->SetBinContent(317,4.456298);
   ThetaY_30_35__685->SetBinContent(318,4.349614);
   ThetaY_30_35__685->SetBinContent(319,4.474936);
   ThetaY_30_35__685->SetBinContent(320,4.384319);
   ThetaY_30_35__685->SetBinContent(321,4.244216);
   ThetaY_30_35__685->SetBinContent(322,3.878535);
   ThetaY_30_35__685->SetBinContent(323,3.580334);
   ThetaY_30_35__685->SetBinContent(324,3.001928);
   ThetaY_30_35__685->SetBinContent(325,2.283419);
   ThetaY_30_35__685->SetBinContent(326,1.047558);
   ThetaY_30_35__685->SetBinContent(327,0.2544987);
   ThetaY_30_35__685->SetBinContent(328,0.0006426735);
   ThetaY_30_35__685->SetBinError(303,0.0009088776);
   ThetaY_30_35__685->SetBinError(304,0.01202332);
   ThetaY_30_35__685->SetBinError(305,0.02535101);
   ThetaY_30_35__685->SetBinError(306,0.03807536);
   ThetaY_30_35__685->SetBinError(307,0.04484461);
   ThetaY_30_35__685->SetBinError(308,0.04827757);
   ThetaY_30_35__685->SetBinError(309,0.05105919);
   ThetaY_30_35__685->SetBinError(310,0.05236508);
   ThetaY_30_35__685->SetBinError(311,0.05234141);
   ThetaY_30_35__685->SetBinError(312,0.05285184);
   ThetaY_30_35__685->SetBinError(313,0.053369);
   ThetaY_30_35__685->SetBinError(314,0.05367767);
   ThetaY_30_35__685->SetBinError(315,0.05321787);
   ThetaY_30_35__685->SetBinError(316,0.05349268);
   ThetaY_30_35__685->SetBinError(317,0.05351584);
   ThetaY_30_35__685->SetBinError(318,0.05287137);
   ThetaY_30_35__685->SetBinError(319,0.05362763);
   ThetaY_30_35__685->SetBinError(320,0.05308188);
   ThetaY_30_35__685->SetBinError(321,0.05222686);
   ThetaY_30_35__685->SetBinError(322,0.04992626);
   ThetaY_30_35__685->SetBinError(323,0.04796859);
   ThetaY_30_35__685->SetBinError(324,0.04392334);
   ThetaY_30_35__685->SetBinError(325,0.03830787);
   ThetaY_30_35__685->SetBinError(326,0.02594682);
   ThetaY_30_35__685->SetBinError(327,0.01278904);
   ThetaY_30_35__685->SetBinError(328,0.0006426735);
   ThetaY_30_35__685->SetEntries(125882);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__685->SetLineColor(ci);
   ThetaY_30_35__685->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__685->SetMarkerColor(ci);
   ThetaY_30_35__685->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__685->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__685->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__685->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__685->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__685->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__685->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__685->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__685->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__685->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__685->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__685->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__685->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__685->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__685->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__685->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__685->Draw("AEsame");
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
   
   Double_t _fx3229[26] = {
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
   Double_t _fy3229[26] = {
   0,
   0.1481905,
   1,
   0.517189,
   0.6711029,
   0.6250103,
   0.6738065,
   0.6640558,
   0.656837,
   0.6135344,
   0.7370843,
   0.5799312,
   0.6126878,
   0.6588145,
   0.2318815,
   0.007663515,
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
   Double_t _felx3229[26] = {
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
   Double_t _fely3229[26] = {
   0,
   0.1226567,
   0.183237,
   0.08742207,
   0.08486141,
   0.07605449,
   0.07473252,
   0.07233846,
   0.07197008,
   0.06885032,
   0.07485055,
   0.06588395,
   0.06833087,
   0.07053503,
   0.04151094,
   0.006339792,
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
   Double_t _fehx3229[26] = {
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
   Double_t _fehy3229[26] = {
   78.34836,
   0.3423769,
   0.2204862,
   0.1036451,
   0.09635641,
   0.08593996,
   0.08353281,
   0.08069544,
   0.08033597,
   0.07705854,
   0.08287917,
   0.07384128,
   0.07642367,
   0.07853515,
   0.04970921,
   0.01762675,
   0.01371539,
   0.01399891,
   0.01446108,
   0.01582473,
   0.01714296,
   0.02044669,
   0.02688218,
   0.05861448,
   0.2416918,
   275.0476};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3229,_fy3229,_felx3229,_fehx3229,_fely3229,_fehy3229);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3229 = new TH1F("Graph_Graph3229","",100,-100,100);
   Graph_Graph3229->SetMinimum(0);
   Graph_Graph3229->SetMaximum(1.5);
   Graph_Graph3229->SetDirectory(0);
   Graph_Graph3229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3229->SetLineColor(ci);
   Graph_Graph3229->GetXaxis()->SetRange(1,100);
   Graph_Graph3229->GetXaxis()->CenterTitle(true);
   Graph_Graph3229->GetXaxis()->SetLabelFont(42);
   Graph_Graph3229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3229->GetXaxis()->SetTitleFont(42);
   Graph_Graph3229->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3229->GetYaxis()->CenterTitle(true);
   Graph_Graph3229->GetYaxis()->SetLabelFont(42);
   Graph_Graph3229->GetYaxis()->SetTitleFont(42);
   Graph_Graph3229->GetZaxis()->SetLabelFont(42);
   Graph_Graph3229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3229->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3229);
   
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
   
   TH2D *ThetaY_vs_Y_30_35__686 = new TH2D("ThetaY_vs_Y_30_35__686","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__686->SetBinContent(7897,2);
   ThetaY_vs_Y_30_35__686->SetBinContent(7923,350);
   ThetaY_vs_Y_30_35__686->SetBinContent(7949,1556);
   ThetaY_vs_Y_30_35__686->SetBinContent(7975,3510);
   ThetaY_vs_Y_30_35__686->SetBinContent(8001,4869);
   ThetaY_vs_Y_30_35__686->SetBinContent(8027,5643);
   ThetaY_vs_Y_30_35__686->SetBinContent(8053,6312);
   ThetaY_vs_Y_30_35__686->SetBinContent(8079,6639);
   ThetaY_vs_Y_30_35__686->SetBinContent(8105,6633);
   ThetaY_vs_Y_30_35__686->SetBinContent(8131,6763);
   ThetaY_vs_Y_30_35__686->SetBinContent(8157,6896);
   ThetaY_vs_Y_30_35__686->SetBinContent(8183,6976);
   ThetaY_vs_Y_30_35__686->SetBinContent(8209,6857);
   ThetaY_vs_Y_30_35__686->SetBinContent(8235,6928);
   ThetaY_vs_Y_30_35__686->SetBinContent(8261,6934);
   ThetaY_vs_Y_30_35__686->SetBinContent(8287,6768);
   ThetaY_vs_Y_30_35__686->SetBinContent(8313,6963);
   ThetaY_vs_Y_30_35__686->SetBinContent(8339,6822);
   ThetaY_vs_Y_30_35__686->SetBinContent(8365,6604);
   ThetaY_vs_Y_30_35__686->SetBinContent(8391,6035);
   ThetaY_vs_Y_30_35__686->SetBinContent(8417,5571);
   ThetaY_vs_Y_30_35__686->SetBinContent(8443,4671);
   ThetaY_vs_Y_30_35__686->SetBinContent(8469,3553);
   ThetaY_vs_Y_30_35__686->SetBinContent(8495,1630);
   ThetaY_vs_Y_30_35__686->SetBinContent(8521,396);
   ThetaY_vs_Y_30_35__686->SetBinContent(8547,1);
   ThetaY_vs_Y_30_35__686->SetEntries(125882);
   ThetaY_vs_Y_30_35__686->SetContour(20);
   ThetaY_vs_Y_30_35__686->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__686->SetContourLevel(1,348.8);
   ThetaY_vs_Y_30_35__686->SetContourLevel(2,697.6);
   ThetaY_vs_Y_30_35__686->SetContourLevel(3,1046.4);
   ThetaY_vs_Y_30_35__686->SetContourLevel(4,1395.2);
   ThetaY_vs_Y_30_35__686->SetContourLevel(5,1744);
   ThetaY_vs_Y_30_35__686->SetContourLevel(6,2092.8);
   ThetaY_vs_Y_30_35__686->SetContourLevel(7,2441.6);
   ThetaY_vs_Y_30_35__686->SetContourLevel(8,2790.4);
   ThetaY_vs_Y_30_35__686->SetContourLevel(9,3139.2);
   ThetaY_vs_Y_30_35__686->SetContourLevel(10,3488);
   ThetaY_vs_Y_30_35__686->SetContourLevel(11,3836.8);
   ThetaY_vs_Y_30_35__686->SetContourLevel(12,4185.6);
   ThetaY_vs_Y_30_35__686->SetContourLevel(13,4534.4);
   ThetaY_vs_Y_30_35__686->SetContourLevel(14,4883.2);
   ThetaY_vs_Y_30_35__686->SetContourLevel(15,5232);
   ThetaY_vs_Y_30_35__686->SetContourLevel(16,5580.8);
   ThetaY_vs_Y_30_35__686->SetContourLevel(17,5929.6);
   ThetaY_vs_Y_30_35__686->SetContourLevel(18,6278.4);
   ThetaY_vs_Y_30_35__686->SetContourLevel(19,6627.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__686->SetLineColor(ci);
   ThetaY_vs_Y_30_35__686->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__686->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__686->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__686->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__686->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__686->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__686->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__686->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__686->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__686->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__686->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__686->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__686->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__686->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__686->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_30_35","Reco vertices","lpf");
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
