void S12S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:50 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06568893,125,1.24809);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI5_0__834 = new TH1D("S12S18_ThetaY_mI5_0__834","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__834->SetBinContent(308,0.004830918);
   S12S18_ThetaY_mI5_0__834->SetBinContent(309,0.05797101);
   S12S18_ThetaY_mI5_0__834->SetBinContent(310,0.4142512);
   S12S18_ThetaY_mI5_0__834->SetBinContent(311,0.794686);
   S12S18_ThetaY_mI5_0__834->SetBinContent(312,0.8599034);
   S12S18_ThetaY_mI5_0__834->SetBinContent(313,1);
   S12S18_ThetaY_mI5_0__834->SetBinContent(314,0.9396135);
   S12S18_ThetaY_mI5_0__834->SetBinContent(315,0.9939614);
   S12S18_ThetaY_mI5_0__834->SetBinContent(316,0.9818841);
   S12S18_ThetaY_mI5_0__834->SetBinContent(317,0.9251208);
   S12S18_ThetaY_mI5_0__834->SetBinContent(318,0.9299517);
   S12S18_ThetaY_mI5_0__834->SetBinContent(319,0.9396135);
   S12S18_ThetaY_mI5_0__834->SetBinContent(320,0.8756039);
   S12S18_ThetaY_mI5_0__834->SetBinContent(321,0.6171498);
   S12S18_ThetaY_mI5_0__834->SetBinContent(322,0.1932367);
   S12S18_ThetaY_mI5_0__834->SetBinContent(323,0.03019324);
   S12S18_ThetaY_mI5_0__834->SetBinError(308,0.002415459);
   S12S18_ThetaY_mI5_0__834->SetBinError(309,0.008367395);
   S12S18_ThetaY_mI5_0__834->SetBinError(310,0.02236746);
   S12S18_ThetaY_mI5_0__834->SetBinError(311,0.03098009);
   S12S18_ThetaY_mI5_0__834->SetBinError(312,0.03222624);
   S12S18_ThetaY_mI5_0__834->SetBinError(313,0.0347524);
   S12S18_ThetaY_mI5_0__834->SetBinError(314,0.03368678);
   S12S18_ThetaY_mI5_0__834->SetBinError(315,0.03464731);
   S12S18_ThetaY_mI5_0__834->SetBinError(316,0.03443618);
   S12S18_ThetaY_mI5_0__834->SetBinError(317,0.03342597);
   S12S18_ThetaY_mI5_0__834->SetBinError(318,0.03351313);
   S12S18_ThetaY_mI5_0__834->SetBinError(319,0.03368678);
   S12S18_ThetaY_mI5_0__834->SetBinError(320,0.03251911);
   S12S18_ThetaY_mI5_0__834->SetBinError(321,0.0273011);
   S12S18_ThetaY_mI5_0__834->SetBinError(322,0.0152767);
   S12S18_ThetaY_mI5_0__834->SetBinError(323,0.006038647);
   S12S18_ThetaY_mI5_0__834->SetMinimum(0);
   S12S18_ThetaY_mI5_0__834->SetMaximum(1.116712);
   S12S18_ThetaY_mI5_0__834->SetEntries(8742);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__834->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__834->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__834->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__834->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__834->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__834->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__834->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__834->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__834->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__834->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__834->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__834->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__834->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__834->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__834->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__834->Draw("AE");
   
   TH1D *ThetaY_mI5_0__835 = new TH1D("ThetaY_mI5_0__835","",630,-1575,1575);
   ThetaY_mI5_0__835->SetBinContent(305,3.625882e-05);
   ThetaY_mI5_0__835->SetBinContent(306,0.05043601);
   ThetaY_mI5_0__835->SetBinContent(307,0.3018909);
   ThetaY_mI5_0__835->SetBinContent(308,0.5806305);
   ThetaY_mI5_0__835->SetBinContent(309,0.7534219);
   ThetaY_mI5_0__835->SetBinContent(310,0.8621984);
   ThetaY_mI5_0__835->SetBinContent(311,0.931779);
   ThetaY_mI5_0__835->SetBinContent(312,0.9689262);
   ThetaY_mI5_0__835->SetBinContent(313,1);
   ThetaY_mI5_0__835->SetBinContent(314,1.007089);
   ThetaY_mI5_0__835->SetBinContent(315,1.015192);
   ThetaY_mI5_0__835->SetBinContent(316,1.014485);
   ThetaY_mI5_0__835->SetBinContent(317,1.010098);
   ThetaY_mI5_0__835->SetBinContent(318,0.9954133);
   ThetaY_mI5_0__835->SetBinContent(319,0.9713374);
   ThetaY_mI5_0__835->SetBinContent(320,0.9331931);
   ThetaY_mI5_0__835->SetBinContent(321,0.8619083);
   ThetaY_mI5_0__835->SetBinContent(322,0.7462608);
   ThetaY_mI5_0__835->SetBinContent(323,0.5855799);
   ThetaY_mI5_0__835->SetBinContent(324,0.2984644);
   ThetaY_mI5_0__835->SetBinContent(325,0.05107054);
   ThetaY_mI5_0__835->SetBinContent(326,7.251763e-05);
   ThetaY_mI5_0__835->SetBinError(305,2.563885e-05);
   ThetaY_mI5_0__835->SetBinError(306,0.0009562296);
   ThetaY_mI5_0__835->SetBinError(307,0.002339466);
   ThetaY_mI5_0__835->SetBinError(308,0.003244455);
   ThetaY_mI5_0__835->SetBinError(309,0.003695821);
   ThetaY_mI5_0__835->SetBinError(310,0.003953624);
   ThetaY_mI5_0__835->SetBinError(311,0.004110061);
   ThetaY_mI5_0__835->SetBinError(312,0.004191188);
   ThetaY_mI5_0__835->SetBinError(313,0.004257864);
   ThetaY_mI5_0__835->SetBinError(314,0.004272929);
   ThetaY_mI5_0__835->SetBinError(315,0.004290086);
   ThetaY_mI5_0__835->SetBinError(316,0.004288592);
   ThetaY_mI5_0__835->SetBinError(317,0.004279308);
   ThetaY_mI5_0__835->SetBinError(318,0.004248088);
   ThetaY_mI5_0__835->SetBinError(319,0.0041964);
   ThetaY_mI5_0__835->SetBinError(320,0.004113179);
   ThetaY_mI5_0__835->SetBinError(321,0.003952959);
   ThetaY_mI5_0__835->SetBinError(322,0.003678215);
   ThetaY_mI5_0__835->SetBinError(323,0.003258254);
   ThetaY_mI5_0__835->SetBinError(324,0.002326152);
   ThetaY_mI5_0__835->SetBinError(325,0.0009622259);
   ThetaY_mI5_0__835->SetBinError(326,3.625882e-05);
   ThetaY_mI5_0__835->SetEntries(824047);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__835->SetLineColor(ci);
   ThetaY_mI5_0__835->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__835->SetMarkerColor(ci);
   ThetaY_mI5_0__835->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__835->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__835->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__835->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__835->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__835->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__835->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__835->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__835->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__835->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__835->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__835->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__835->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__835->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__835->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__835->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__835->Draw("AEsame");
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
   
   Double_t _fx3279[22] = {
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
   52.5};
   Double_t _fy3279[22] = {
   0,
   0,
   0,
   0.008320124,
   0.07694363,
   0.4804593,
   0.8528696,
   0.8874808,
   1,
   0.9329999,
   0.9790866,
   0.9678642,
   0.9158722,
   0.9342368,
   0.96734,
   0.9382879,
   0.7160272,
   0.2589399,
   0.05156126,
   0,
   0,
   0};
   Double_t _felx3279[22] = {
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
   Double_t _fely3279[22] = {
   0,
   0,
   0,
   0.003982082,
   0.01107329,
   0.02602279,
   0.03345166,
   0.0334724,
   0.03500489,
   0.03367556,
   0.03437142,
   0.03418285,
   0.03331095,
   0.03389515,
   0.03492389,
   0.03508327,
   0.03183421,
   0.02048906,
   0.01024663,
   0,
   0,
   0};
   Double_t _fehx3279[22] = {
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
   Double_t _fehy3279[22] = {
   100.63,
   0.04409928,
   0.007365505,
   0.00657936,
   0.0127946,
   0.0274725,
   0.03479085,
   0.03475996,
   0.03625288,
   0.03491418,
   0.0356004,
   0.03541261,
   0.03454573,
   0.03514844,
   0.03620878,
   0.03642095,
   0.03328272,
   0.02217871,
   0.01251806,
   0.007450068,
   0.04355119,
   38.9363};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3279,_fy3279,_felx3279,_fehx3279,_fely3279,_fehy3279);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3279 = new TH1F("Graph_Graph3279","",100,-100,100);
   Graph_Graph3279->SetMinimum(0);
   Graph_Graph3279->SetMaximum(1.5);
   Graph_Graph3279->SetDirectory(0);
   Graph_Graph3279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3279->SetLineColor(ci);
   Graph_Graph3279->GetXaxis()->SetRange(1,100);
   Graph_Graph3279->GetXaxis()->CenterTitle(true);
   Graph_Graph3279->GetXaxis()->SetLabelFont(42);
   Graph_Graph3279->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3279->GetXaxis()->SetTitleFont(42);
   Graph_Graph3279->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3279->GetYaxis()->CenterTitle(true);
   Graph_Graph3279->GetYaxis()->SetLabelFont(42);
   Graph_Graph3279->GetYaxis()->SetTitleFont(42);
   Graph_Graph3279->GetZaxis()->SetLabelFont(42);
   Graph_Graph3279->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3279->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3279);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.116712,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__836 = new TH2D("ThetaY_vs_Y_mI5_0__836","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(7942,2);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(7968,2782);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(7994,16652);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8020,32027);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8046,41558);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8072,47558);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8098,51396);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8124,53445);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8150,55159);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8176,55550);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8202,55997);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8228,55958);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8254,55716);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8280,54906);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8306,53578);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8332,51474);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8358,47542);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8384,41163);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8410,32300);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8436,16463);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8462,2817);
   ThetaY_vs_Y_mI5_0__836->SetBinContent(8488,4);
   ThetaY_vs_Y_mI5_0__836->SetEntries(824047);
   ThetaY_vs_Y_mI5_0__836->SetContour(20);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(1,2799.85);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(2,5599.7);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(3,8399.55);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(4,11199.4);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(5,13999.25);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(6,16799.1);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(7,19598.95);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(8,22398.8);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(9,25198.65);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(10,27998.5);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(11,30798.35);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(12,33598.2);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(13,36398.05);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(14,39197.9);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(15,41997.75);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(16,44797.6);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(17,47597.45);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(18,50397.3);
   ThetaY_vs_Y_mI5_0__836->SetContourLevel(19,53197.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__836->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__836->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__836->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__836->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__836->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__836->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__836->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__836->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__836->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__836->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__836->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__836->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__836->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__836->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__836->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__836->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-5_0","Reco vertices","lpf");
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
