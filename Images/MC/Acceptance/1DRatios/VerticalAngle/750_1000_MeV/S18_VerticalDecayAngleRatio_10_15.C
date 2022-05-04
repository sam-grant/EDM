void S18_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.0656424,125,1.247206);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__615 = new TH1D("S18_ThetaY_10_15__615","",630,-1575,1575);
   S18_ThetaY_10_15__615->SetBinContent(305,0.01136364);
   S18_ThetaY_10_15__615->SetBinContent(306,0.05681818);
   S18_ThetaY_10_15__615->SetBinContent(307,0.3181818);
   S18_ThetaY_10_15__615->SetBinContent(308,0.7121212);
   S18_ThetaY_10_15__615->SetBinContent(309,0.7765152);
   S18_ThetaY_10_15__615->SetBinContent(310,0.7613636);
   S18_ThetaY_10_15__615->SetBinContent(311,0.8825758);
   S18_ThetaY_10_15__615->SetBinContent(312,1);
   S18_ThetaY_10_15__615->SetBinContent(313,0.8371212);
   S18_ThetaY_10_15__615->SetBinContent(314,0.8030303);
   S18_ThetaY_10_15__615->SetBinContent(315,0.8636364);
   S18_ThetaY_10_15__615->SetBinContent(316,0.7765152);
   S18_ThetaY_10_15__615->SetBinContent(317,0.8901515);
   S18_ThetaY_10_15__615->SetBinContent(318,0.8787879);
   S18_ThetaY_10_15__615->SetBinContent(319,0.7575758);
   S18_ThetaY_10_15__615->SetBinContent(320,0.469697);
   S18_ThetaY_10_15__615->SetBinContent(321,0.04545455);
   S18_ThetaY_10_15__615->SetBinError(305,0.006560799);
   S18_ThetaY_10_15__615->SetBinError(306,0.01467039);
   S18_ThetaY_10_15__615->SetBinError(307,0.03471648);
   S18_ThetaY_10_15__615->SetBinError(308,0.05193678);
   S18_ThetaY_10_15__615->SetBinError(309,0.05423417);
   S18_ThetaY_10_15__615->SetBinError(310,0.05370245);
   S18_ThetaY_10_15__615->SetBinError(311,0.05781946);
   S18_ThetaY_10_15__615->SetBinError(312,0.06154575);
   S18_ThetaY_10_15__615->SetBinError(313,0.05631087);
   S18_ThetaY_10_15__615->SetBinError(314,0.05515235);
   S18_ThetaY_10_15__615->SetBinError(315,0.05719572);
   S18_ThetaY_10_15__615->SetBinError(316,0.05423417);
   S18_ThetaY_10_15__615->SetBinError(317,0.05806708);
   S18_ThetaY_10_15__615->SetBinError(318,0.05769525);
   S18_ThetaY_10_15__615->SetBinError(319,0.0535687);
   S18_ThetaY_10_15__615->SetBinError(320,0.04218003);
   S18_ThetaY_10_15__615->SetBinError(321,0.0131216);
   S18_ThetaY_10_15__615->SetMinimum(0);
   S18_ThetaY_10_15__615->SetMaximum(1.115921);
   S18_ThetaY_10_15__615->SetEntries(2862);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__615->SetLineColor(ci);
   S18_ThetaY_10_15__615->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__615->SetMarkerColor(ci);
   S18_ThetaY_10_15__615->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__615->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__615->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__615->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__615->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__615->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__615->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__615->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__615->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__615->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__615->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__615->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__615->Draw("AE");
   
   TH1D *ThetaY_10_15__616 = new TH1D("ThetaY_10_15__616","",630,-1575,1575);
   ThetaY_10_15__616->SetBinContent(303,0.0004633668);
   ThetaY_10_15__616->SetBinContent(304,0.05304187);
   ThetaY_10_15__616->SetBinContent(305,0.2432403);
   ThetaY_10_15__616->SetBinContent(306,0.5085859);
   ThetaY_10_15__616->SetBinContent(307,0.7001472);
   ThetaY_10_15__616->SetBinContent(308,0.8122274);
   ThetaY_10_15__616->SetBinContent(309,0.9020116);
   ThetaY_10_15__616->SetBinContent(310,0.947476);
   ThetaY_10_15__616->SetBinContent(311,0.9861535);
   ThetaY_10_15__616->SetBinContent(312,1);
   ThetaY_10_15__616->SetBinContent(313,1.009349);
   ThetaY_10_15__616->SetBinContent(314,1.003298);
   ThetaY_10_15__616->SetBinContent(315,1.014473);
   ThetaY_10_15__616->SetBinContent(316,1.004743);
   ThetaY_10_15__616->SetBinContent(317,1.002262);
   ThetaY_10_15__616->SetBinContent(318,1.003053);
   ThetaY_10_15__616->SetBinContent(319,0.9971653);
   ThetaY_10_15__616->SetBinContent(320,0.9823103);
   ThetaY_10_15__616->SetBinContent(321,0.9520007);
   ThetaY_10_15__616->SetBinContent(322,0.9005669);
   ThetaY_10_15__616->SetBinContent(323,0.8353958);
   ThetaY_10_15__616->SetBinContent(324,0.6902257);
   ThetaY_10_15__616->SetBinContent(325,0.5042248);
   ThetaY_10_15__616->SetBinContent(326,0.2435674);
   ThetaY_10_15__616->SetBinContent(327,0.05475905);
   ThetaY_10_15__616->SetBinContent(328,0.000408853);
   ThetaY_10_15__616->SetBinError(303,0.0001123829);
   ThetaY_10_15__616->SetBinError(304,0.001202396);
   ThetaY_10_15__616->SetBinError(305,0.002574873);
   ThetaY_10_15__616->SetBinError(306,0.003723232);
   ThetaY_10_15__616->SetBinError(307,0.004368503);
   ThetaY_10_15__616->SetBinError(308,0.004705186);
   ThetaY_10_15__616->SetBinError(309,0.004958428);
   ThetaY_10_15__616->SetBinError(310,0.005081853);
   ThetaY_10_15__616->SetBinError(311,0.00518454);
   ThetaY_10_15__616->SetBinError(312,0.005220811);
   ThetaY_10_15__616->SetBinError(313,0.005245159);
   ThetaY_10_15__616->SetBinError(314,0.005229413);
   ThetaY_10_15__616->SetBinError(315,0.005258457);
   ThetaY_10_15__616->SetBinError(316,0.005233177);
   ThetaY_10_15__616->SetBinError(317,0.005226713);
   ThetaY_10_15__616->SetBinError(318,0.005228774);
   ThetaY_10_15__616->SetBinError(319,0.005213406);
   ThetaY_10_15__616->SetBinError(320,0.005174428);
   ThetaY_10_15__616->SetBinError(321,0.005093973);
   ThetaY_10_15__616->SetBinError(322,0.004954456);
   ThetaY_10_15__616->SetBinError(323,0.004771821);
   ThetaY_10_15__616->SetBinError(324,0.004337441);
   ThetaY_10_15__616->SetBinError(325,0.003707235);
   ThetaY_10_15__616->SetBinError(326,0.002576603);
   ThetaY_10_15__616->SetBinError(327,0.001221704);
   ThetaY_10_15__616->SetBinError(328,0.0001055654);
   ThetaY_10_15__616->SetEntries(673267);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__616->SetLineColor(ci);
   ThetaY_10_15__616->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__616->SetMarkerColor(ci);
   ThetaY_10_15__616->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__616->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__616->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__616->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__616->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__616->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__616->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__616->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__616->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__616->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__616->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__616->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__616->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__616->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__616->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__616->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__616->Draw("AEsame");
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
   
   Double_t _fx3206[26] = {
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
   Double_t _fy3206[26] = {
   0,
   0,
   0.04671774,
   0.111718,
   0.4544499,
   0.876751,
   0.8608705,
   0.8035704,
   0.8949679,
   1,
   0.8293674,
   0.8003906,
   0.8513149,
   0.7728498,
   0.8881423,
   0.8761133,
   0.7597294,
   0.4781554,
   0.04774634,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3206[26] = {
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
   Double_t _fely3206[26] = {
   0,
   0,
   0.02542856,
   0.02853147,
   0.04956557,
   0.06408692,
   0.06026166,
   0.05679503,
   0.05877679,
   0.06172685,
   0.05591244,
   0.05508491,
   0.05650992,
   0.05408319,
   0.05807873,
   0.05765834,
   0.05382187,
   0.0429548,
   0.01359103,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3206[26] = {
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
   Double_t _fehy3206[26] = {
   15.89492,
   0.1315351,
   0.04545875,
   0.03695176,
   0.05529272,
   0.06895414,
   0.06463721,
   0.06096018,
   0.06277153,
   0.06566174,
   0.05981677,
   0.05901464,
   0.0603932,
   0.05800866,
   0.06200851,
   0.06158547,
   0.05777845,
   0.0469998,
   0.01814719,
   0.007743745,
   0.008347871,
   0.01010368,
   0.01383096,
   0.02863391,
   0.1274084,
   18.14729};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3206,_fy3206,_felx3206,_fehx3206,_fely3206,_fehy3206);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3206 = new TH1F("Graph_Graph3206","",100,-100,100);
   Graph_Graph3206->SetMinimum(0);
   Graph_Graph3206->SetMaximum(1.5);
   Graph_Graph3206->SetDirectory(0);
   Graph_Graph3206->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3206->SetLineColor(ci);
   Graph_Graph3206->GetXaxis()->SetRange(1,100);
   Graph_Graph3206->GetXaxis()->CenterTitle(true);
   Graph_Graph3206->GetXaxis()->SetLabelFont(42);
   Graph_Graph3206->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3206->GetXaxis()->SetTitleFont(42);
   Graph_Graph3206->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3206->GetYaxis()->CenterTitle(true);
   Graph_Graph3206->GetYaxis()->SetLabelFont(42);
   Graph_Graph3206->GetYaxis()->SetTitleFont(42);
   Graph_Graph3206->GetZaxis()->SetLabelFont(42);
   Graph_Graph3206->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3206->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3206);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.115921,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__617 = new TH2D("ThetaY_vs_Y_10_15__617","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__617->SetBinContent(7893,17);
   ThetaY_vs_Y_10_15__617->SetBinContent(7919,1946);
   ThetaY_vs_Y_10_15__617->SetBinContent(7945,8924);
   ThetaY_vs_Y_10_15__617->SetBinContent(7971,18659);
   ThetaY_vs_Y_10_15__617->SetBinContent(7997,25687);
   ThetaY_vs_Y_10_15__617->SetBinContent(8023,29799);
   ThetaY_vs_Y_10_15__617->SetBinContent(8049,33093);
   ThetaY_vs_Y_10_15__617->SetBinContent(8075,34761);
   ThetaY_vs_Y_10_15__617->SetBinContent(8101,36180);
   ThetaY_vs_Y_10_15__617->SetBinContent(8127,36688);
   ThetaY_vs_Y_10_15__617->SetBinContent(8153,37031);
   ThetaY_vs_Y_10_15__617->SetBinContent(8179,36809);
   ThetaY_vs_Y_10_15__617->SetBinContent(8205,37219);
   ThetaY_vs_Y_10_15__617->SetBinContent(8231,36862);
   ThetaY_vs_Y_10_15__617->SetBinContent(8257,36771);
   ThetaY_vs_Y_10_15__617->SetBinContent(8283,36800);
   ThetaY_vs_Y_10_15__617->SetBinContent(8309,36584);
   ThetaY_vs_Y_10_15__617->SetBinContent(8335,36039);
   ThetaY_vs_Y_10_15__617->SetBinContent(8361,34927);
   ThetaY_vs_Y_10_15__617->SetBinContent(8387,33040);
   ThetaY_vs_Y_10_15__617->SetBinContent(8413,30649);
   ThetaY_vs_Y_10_15__617->SetBinContent(8439,25323);
   ThetaY_vs_Y_10_15__617->SetBinContent(8465,18499);
   ThetaY_vs_Y_10_15__617->SetBinContent(8491,8936);
   ThetaY_vs_Y_10_15__617->SetBinContent(8517,2009);
   ThetaY_vs_Y_10_15__617->SetBinContent(8543,15);
   ThetaY_vs_Y_10_15__617->SetEntries(673267);
   ThetaY_vs_Y_10_15__617->SetContour(20);
   ThetaY_vs_Y_10_15__617->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__617->SetContourLevel(1,1860.95);
   ThetaY_vs_Y_10_15__617->SetContourLevel(2,3721.9);
   ThetaY_vs_Y_10_15__617->SetContourLevel(3,5582.85);
   ThetaY_vs_Y_10_15__617->SetContourLevel(4,7443.8);
   ThetaY_vs_Y_10_15__617->SetContourLevel(5,9304.75);
   ThetaY_vs_Y_10_15__617->SetContourLevel(6,11165.7);
   ThetaY_vs_Y_10_15__617->SetContourLevel(7,13026.65);
   ThetaY_vs_Y_10_15__617->SetContourLevel(8,14887.6);
   ThetaY_vs_Y_10_15__617->SetContourLevel(9,16748.55);
   ThetaY_vs_Y_10_15__617->SetContourLevel(10,18609.5);
   ThetaY_vs_Y_10_15__617->SetContourLevel(11,20470.45);
   ThetaY_vs_Y_10_15__617->SetContourLevel(12,22331.4);
   ThetaY_vs_Y_10_15__617->SetContourLevel(13,24192.35);
   ThetaY_vs_Y_10_15__617->SetContourLevel(14,26053.3);
   ThetaY_vs_Y_10_15__617->SetContourLevel(15,27914.25);
   ThetaY_vs_Y_10_15__617->SetContourLevel(16,29775.2);
   ThetaY_vs_Y_10_15__617->SetContourLevel(17,31636.15);
   ThetaY_vs_Y_10_15__617->SetContourLevel(18,33497.1);
   ThetaY_vs_Y_10_15__617->SetContourLevel(19,35358.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__617->SetLineColor(ci);
   ThetaY_vs_Y_10_15__617->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__617->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__617->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__617->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__617->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__617->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__617->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__617->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__617->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__617->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__617->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__617->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__617->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__617->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__617->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
