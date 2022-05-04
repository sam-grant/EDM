void S12S18_VerticalDecayAngleRatio_25_30()
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
   upper_pad->Range(-125,-0.2700386,125,5.130733);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__681 = new TH1D("S12S18_ThetaY_25_30__681","",630,-1575,1575);
   S12S18_ThetaY_25_30__681->SetBinContent(304,0.1842105);
   S12S18_ThetaY_25_30__681->SetBinContent(305,1);
   S12S18_ThetaY_25_30__681->SetBinContent(306,1.894737);
   S12S18_ThetaY_25_30__681->SetBinContent(307,2.052632);
   S12S18_ThetaY_25_30__681->SetBinContent(308,3.131579);
   S12S18_ThetaY_25_30__681->SetBinContent(309,3.368421);
   S12S18_ThetaY_25_30__681->SetBinContent(310,3.789474);
   S12S18_ThetaY_25_30__681->SetBinContent(311,3.710526);
   S12S18_ThetaY_25_30__681->SetBinContent(312,3.815789);
   S12S18_ThetaY_25_30__681->SetBinContent(313,3.421053);
   S12S18_ThetaY_25_30__681->SetBinContent(314,3.842105);
   S12S18_ThetaY_25_30__681->SetBinContent(315,3.815789);
   S12S18_ThetaY_25_30__681->SetBinContent(316,3.315789);
   S12S18_ThetaY_25_30__681->SetBinContent(317,3.657895);
   S12S18_ThetaY_25_30__681->SetBinContent(318,1.026316);
   S12S18_ThetaY_25_30__681->SetBinContent(321,0.02631579);
   S12S18_ThetaY_25_30__681->SetBinError(304,0.06962503);
   S12S18_ThetaY_25_30__681->SetBinError(305,0.1622214);
   S12S18_ThetaY_25_30__681->SetBinError(306,0.2232969);
   S12S18_ThetaY_25_30__681->SetBinError(307,0.2324148);
   S12S18_ThetaY_25_30__681->SetBinError(308,0.2870714);
   S12S18_ThetaY_25_30__681->SetBinError(309,0.2977292);
   S12S18_ThetaY_25_30__681->SetBinError(310,0.3157895);
   S12S18_ThetaY_25_30__681->SetBinError(311,0.3124827);
   S12S18_ThetaY_25_30__681->SetBinError(312,0.3168841);
   S12S18_ThetaY_25_30__681->SetBinError(313,0.3000462);
   S12S18_ThetaY_25_30__681->SetBinError(314,0.3179749);
   S12S18_ThetaY_25_30__681->SetBinError(315,0.3168841);
   S12S18_ThetaY_25_30__681->SetBinError(316,0.295394);
   S12S18_ThetaY_25_30__681->SetBinError(317,0.3102586);
   S12S18_ThetaY_25_30__681->SetBinError(318,0.1643421);
   S12S18_ThetaY_25_30__681->SetBinError(321,0.02631579);
   S12S18_ThetaY_25_30__681->SetMinimum(0);
   S12S18_ThetaY_25_30__681->SetMaximum(4.590656);
   S12S18_ThetaY_25_30__681->SetEntries(1598);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__681->SetLineColor(ci);
   S12S18_ThetaY_25_30__681->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__681->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__681->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__681->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__681->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__681->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__681->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__681->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__681->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__681->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__681->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__681->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__681->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__681->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__681->Draw("AE");
   
   TH1D *ThetaY_25_30__682 = new TH1D("ThetaY_25_30__682","",630,-1575,1575);
   ThetaY_25_30__682->SetBinContent(303,0.002496434);
   ThetaY_25_30__682->SetBinContent(304,0.2022111);
   ThetaY_25_30__682->SetBinContent(305,1);
   ThetaY_25_30__682->SetBinContent(306,2.10806);
   ThetaY_25_30__682->SetBinContent(307,2.895863);
   ThetaY_25_30__682->SetBinContent(308,3.381598);
   ThetaY_25_30__682->SetBinContent(309,3.647646);
   ThetaY_25_30__682->SetBinContent(310,3.986448);
   ThetaY_25_30__682->SetBinContent(311,4.115193);
   ThetaY_25_30__682->SetBinContent(312,4.111626);
   ThetaY_25_30__682->SetBinContent(313,4.139444);
   ThetaY_25_30__682->SetBinContent(314,4.164765);
   ThetaY_25_30__682->SetBinContent(315,4.146576);
   ThetaY_25_30__682->SetBinContent(316,4.173324);
   ThetaY_25_30__682->SetBinContent(317,4.170471);
   ThetaY_25_30__682->SetBinContent(318,4.163338);
   ThetaY_25_30__682->SetBinContent(319,4.007133);
   ThetaY_25_30__682->SetBinContent(320,4.059914);
   ThetaY_25_30__682->SetBinContent(321,3.893723);
   ThetaY_25_30__682->SetBinContent(322,3.726819);
   ThetaY_25_30__682->SetBinContent(323,3.386234);
   ThetaY_25_30__682->SetBinContent(324,2.89087);
   ThetaY_25_30__682->SetBinContent(325,2.130171);
   ThetaY_25_30__682->SetBinContent(326,1.001783);
   ThetaY_25_30__682->SetBinContent(327,0.2157632);
   ThetaY_25_30__682->SetBinContent(328,0.0032097);
   ThetaY_25_30__682->SetBinError(303,0.0009435632);
   ThetaY_25_30__682->SetBinError(304,0.008492069);
   ThetaY_25_30__682->SetBinError(305,0.01888474);
   ThetaY_25_30__682->SetBinError(306,0.02741905);
   ThetaY_25_30__682->SetBinError(307,0.03213661);
   ThetaY_25_30__682->SetBinError(308,0.03472738);
   ThetaY_25_30__682->SetBinError(309,0.03606761);
   ThetaY_25_30__682->SetBinError(310,0.03770544);
   ThetaY_25_30__682->SetBinError(311,0.03830946);
   ThetaY_25_30__682->SetBinError(312,0.03829286);
   ThetaY_25_30__682->SetBinError(313,0.03842218);
   ThetaY_25_30__682->SetBinError(314,0.03853951);
   ThetaY_25_30__682->SetBinError(315,0.03845527);
   ThetaY_25_30__682->SetBinError(316,0.0385791);
   ThetaY_25_30__682->SetBinError(317,0.03856591);
   ThetaY_25_30__682->SetBinError(318,0.03853291);
   ThetaY_25_30__682->SetBinError(319,0.03780314);
   ThetaY_25_30__682->SetBinError(320,0.03805129);
   ThetaY_25_30__682->SetBinError(321,0.03726435);
   ThetaY_25_30__682->SetBinError(322,0.03645693);
   ThetaY_25_30__682->SetBinError(323,0.03475117);
   ThetaY_25_30__682->SetBinError(324,0.03210889);
   ThetaY_25_30__682->SetBinError(325,0.02756248);
   ThetaY_25_30__682->SetBinError(326,0.01890157);
   ThetaY_25_30__682->SetBinError(327,0.008772021);
   ThetaY_25_30__682->SetBinError(328,0.0010699);
   ThetaY_25_30__682->SetEntries(212332);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__682->SetLineColor(ci);
   ThetaY_25_30__682->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__682->SetMarkerColor(ci);
   ThetaY_25_30__682->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__682->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__682->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__682->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__682->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__682->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__682->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__682->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__682->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__682->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__682->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__682->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__682->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__682->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__682->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__682->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__682->Draw("AEsame");
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
   
   Double_t _fx3228[26] = {
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
   Double_t _fy3228[26] = {
   0,
   0.9109812,
   1,
   0.898806,
   0.7088151,
   0.9260649,
   0.9234506,
   0.950589,
   0.9016653,
   0.9280487,
   0.8264523,
   0.9225264,
   0.9202265,
   0.7945201,
   0.877094,
   0.2465127,
   0,
   0,
   0.006758516,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3228[26] = {
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
   Double_t _fely3228[26] = {
   0,
   0.3377608,
   0.1625675,
   0.1063117,
   0.08046404,
   0.08529874,
   0.08202013,
   0.07962826,
   0.07630256,
   0.07746063,
   0.07279256,
   0.07673336,
   0.07680374,
   0.07106404,
   0.07474177,
   0.03936762,
   0,
   0,
   0.005591054,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3228[26] = {
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
   Double_t _fehy3228[26] = {
   22.19814,
   0.4953236,
   0.1914884,
   0.1197175,
   0.0901725,
   0.09355219,
   0.08965887,
   0.08660306,
   0.08305723,
   0.08421986,
   0.07951178,
   0.08340487,
   0.08350523,
   0.07773009,
   0.08140648,
   0.04622326,
   0.01209142,
   0.01193421,
   0.01554373,
   0.01300096,
   0.01430871,
   0.01676085,
   0.02274719,
   0.04837755,
   0.2248842,
   16.74892};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3228,_fy3228,_felx3228,_fehx3228,_fely3228,_fehy3228);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3228 = new TH1F("Graph_Graph3228","",100,-100,100);
   Graph_Graph3228->SetMinimum(0);
   Graph_Graph3228->SetMaximum(1.5);
   Graph_Graph3228->SetDirectory(0);
   Graph_Graph3228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3228->SetLineColor(ci);
   Graph_Graph3228->GetXaxis()->SetRange(1,100);
   Graph_Graph3228->GetXaxis()->CenterTitle(true);
   Graph_Graph3228->GetXaxis()->SetLabelFont(42);
   Graph_Graph3228->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3228->GetXaxis()->SetTitleFont(42);
   Graph_Graph3228->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3228->GetYaxis()->CenterTitle(true);
   Graph_Graph3228->GetYaxis()->SetLabelFont(42);
   Graph_Graph3228->GetYaxis()->SetTitleFont(42);
   Graph_Graph3228->GetZaxis()->SetLabelFont(42);
   Graph_Graph3228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3228->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3228);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,4.590656,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__683 = new TH2D("ThetaY_vs_Y_25_30__683","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__683->SetBinContent(7896,7);
   ThetaY_vs_Y_25_30__683->SetBinContent(7922,567);
   ThetaY_vs_Y_25_30__683->SetBinContent(7948,2804);
   ThetaY_vs_Y_25_30__683->SetBinContent(7974,5911);
   ThetaY_vs_Y_25_30__683->SetBinContent(8000,8120);
   ThetaY_vs_Y_25_30__683->SetBinContent(8026,9482);
   ThetaY_vs_Y_25_30__683->SetBinContent(8052,10228);
   ThetaY_vs_Y_25_30__683->SetBinContent(8078,11178);
   ThetaY_vs_Y_25_30__683->SetBinContent(8104,11539);
   ThetaY_vs_Y_25_30__683->SetBinContent(8130,11529);
   ThetaY_vs_Y_25_30__683->SetBinContent(8156,11607);
   ThetaY_vs_Y_25_30__683->SetBinContent(8182,11678);
   ThetaY_vs_Y_25_30__683->SetBinContent(8208,11627);
   ThetaY_vs_Y_25_30__683->SetBinContent(8234,11702);
   ThetaY_vs_Y_25_30__683->SetBinContent(8260,11694);
   ThetaY_vs_Y_25_30__683->SetBinContent(8286,11674);
   ThetaY_vs_Y_25_30__683->SetBinContent(8312,11236);
   ThetaY_vs_Y_25_30__683->SetBinContent(8338,11384);
   ThetaY_vs_Y_25_30__683->SetBinContent(8364,10918);
   ThetaY_vs_Y_25_30__683->SetBinContent(8390,10450);
   ThetaY_vs_Y_25_30__683->SetBinContent(8416,9495);
   ThetaY_vs_Y_25_30__683->SetBinContent(8442,8106);
   ThetaY_vs_Y_25_30__683->SetBinContent(8468,5973);
   ThetaY_vs_Y_25_30__683->SetBinContent(8494,2809);
   ThetaY_vs_Y_25_30__683->SetBinContent(8520,605);
   ThetaY_vs_Y_25_30__683->SetBinContent(8546,9);
   ThetaY_vs_Y_25_30__683->SetEntries(212332);
   ThetaY_vs_Y_25_30__683->SetContour(20);
   ThetaY_vs_Y_25_30__683->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__683->SetContourLevel(1,585.1);
   ThetaY_vs_Y_25_30__683->SetContourLevel(2,1170.2);
   ThetaY_vs_Y_25_30__683->SetContourLevel(3,1755.3);
   ThetaY_vs_Y_25_30__683->SetContourLevel(4,2340.4);
   ThetaY_vs_Y_25_30__683->SetContourLevel(5,2925.5);
   ThetaY_vs_Y_25_30__683->SetContourLevel(6,3510.6);
   ThetaY_vs_Y_25_30__683->SetContourLevel(7,4095.7);
   ThetaY_vs_Y_25_30__683->SetContourLevel(8,4680.8);
   ThetaY_vs_Y_25_30__683->SetContourLevel(9,5265.9);
   ThetaY_vs_Y_25_30__683->SetContourLevel(10,5851);
   ThetaY_vs_Y_25_30__683->SetContourLevel(11,6436.1);
   ThetaY_vs_Y_25_30__683->SetContourLevel(12,7021.2);
   ThetaY_vs_Y_25_30__683->SetContourLevel(13,7606.3);
   ThetaY_vs_Y_25_30__683->SetContourLevel(14,8191.4);
   ThetaY_vs_Y_25_30__683->SetContourLevel(15,8776.5);
   ThetaY_vs_Y_25_30__683->SetContourLevel(16,9361.6);
   ThetaY_vs_Y_25_30__683->SetContourLevel(17,9946.7);
   ThetaY_vs_Y_25_30__683->SetContourLevel(18,10531.8);
   ThetaY_vs_Y_25_30__683->SetContourLevel(19,11116.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__683->SetLineColor(ci);
   ThetaY_vs_Y_25_30__683->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__683->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__683->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__683->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__683->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__683->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__683->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__683->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__683->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__683->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__683->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__683->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__683->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__683->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__683->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
