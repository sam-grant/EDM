void S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:41 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06620829,125,1.257957);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__426 = new TH1D("S18_ThetaY_mI20_mI15__426","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__426->SetBinContent(309,0.01204819);
   S18_ThetaY_mI20_mI15__426->SetBinContent(310,0.04819277);
   S18_ThetaY_mI20_mI15__426->SetBinContent(311,0.2650602);
   S18_ThetaY_mI20_mI15__426->SetBinContent(312,0.6385542);
   S18_ThetaY_mI20_mI15__426->SetBinContent(313,0.686747);
   S18_ThetaY_mI20_mI15__426->SetBinContent(314,0.9036145);
   S18_ThetaY_mI20_mI15__426->SetBinContent(315,0.6987952);
   S18_ThetaY_mI20_mI15__426->SetBinContent(316,1);
   S18_ThetaY_mI20_mI15__426->SetBinContent(317,0.7349398);
   S18_ThetaY_mI20_mI15__426->SetBinContent(318,0.7951807);
   S18_ThetaY_mI20_mI15__426->SetBinContent(319,0.5783133);
   S18_ThetaY_mI20_mI15__426->SetBinContent(320,0.5542169);
   S18_ThetaY_mI20_mI15__426->SetBinContent(321,0.6024096);
   S18_ThetaY_mI20_mI15__426->SetBinContent(322,0.7951807);
   S18_ThetaY_mI20_mI15__426->SetBinContent(323,0.7349398);
   S18_ThetaY_mI20_mI15__426->SetBinContent(324,0.5903614);
   S18_ThetaY_mI20_mI15__426->SetBinContent(325,0.5060241);
   S18_ThetaY_mI20_mI15__426->SetBinContent(326,0.4698795);
   S18_ThetaY_mI20_mI15__426->SetBinContent(327,0.1445783);
   S18_ThetaY_mI20_mI15__426->SetBinContent(328,0.08433735);
   S18_ThetaY_mI20_mI15__426->SetBinError(309,0.01204819);
   S18_ThetaY_mI20_mI15__426->SetBinError(310,0.02409639);
   S18_ThetaY_mI20_mI15__426->SetBinError(311,0.05651103);
   S18_ThetaY_mI20_mI15__426->SetBinError(312,0.08771217);
   S18_ThetaY_mI20_mI15__426->SetBinError(313,0.09096186);
   S18_ThetaY_mI20_mI15__426->SetBinError(314,0.1043404);
   S18_ThetaY_mI20_mI15__426->SetBinError(315,0.0917563);
   S18_ThetaY_mI20_mI15__426->SetBinError(316,0.1097643);
   S18_ThetaY_mI20_mI15__426->SetBinError(317,0.09409939);
   S18_ThetaY_mI20_mI15__426->SetBinError(318,0.09787998);
   S18_ThetaY_mI20_mI15__426->SetBinError(319,0.08347233);
   S18_ThetaY_mI20_mI15__426->SetBinError(320,0.08171482);
   S18_ThetaY_mI20_mI15__426->SetBinError(321,0.08519359);
   S18_ThetaY_mI20_mI15__426->SetBinError(322,0.09787998);
   S18_ThetaY_mI20_mI15__426->SetBinError(323,0.09409939);
   S18_ThetaY_mI20_mI15__426->SetBinError(324,0.08433735);
   S18_ThetaY_mI20_mI15__426->SetBinError(325,0.07808121);
   S18_ThetaY_mI20_mI15__426->SetBinError(326,0.07524094);
   S18_ThetaY_mI20_mI15__426->SetBinError(327,0.04173616);
   S18_ThetaY_mI20_mI15__426->SetBinError(328,0.03187652);
   S18_ThetaY_mI20_mI15__426->SetMinimum(0);
   S18_ThetaY_mI20_mI15__426->SetMaximum(1.125541);
   S18_ThetaY_mI20_mI15__426->SetEntries(900);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__426->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__426->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__426->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__426->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__426->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__426->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__426->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__426->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__426->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__426->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__426->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__426->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__426->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__426->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__426->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__426->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__427 = new TH1D("ThetaY_mI20_mI15__427","",630,-1575,1575);
   ThetaY_mI20_mI15__427->SetBinContent(300,0.005551394);
   ThetaY_mI20_mI15__427->SetBinContent(301,0.06648456);
   ThetaY_mI20_mI15__427->SetBinContent(302,0.186941);
   ThetaY_mI20_mI15__427->SetBinContent(303,0.3948539);
   ThetaY_mI20_mI15__427->SetBinContent(304,0.6170419);
   ThetaY_mI20_mI15__427->SetBinContent(305,0.7609816);
   ThetaY_mI20_mI15__427->SetBinContent(306,0.8551791);
   ThetaY_mI20_mI15__427->SetBinContent(307,0.9303873);
   ThetaY_mI20_mI15__427->SetBinContent(308,0.9787637);
   ThetaY_mI20_mI15__427->SetBinContent(309,1.003525);
   ThetaY_mI20_mI15__427->SetBinContent(310,1.013041);
   ThetaY_mI20_mI15__427->SetBinContent(311,1.023219);
   ThetaY_mI20_mI15__427->SetBinContent(312,1.003877);
   ThetaY_mI20_mI15__427->SetBinContent(313,1.001674);
   ThetaY_mI20_mI15__427->SetBinContent(314,0.9998678);
   ThetaY_mI20_mI15__427->SetBinContent(315,0.9975768);
   ThetaY_mI20_mI15__427->SetBinContent(316,1);
   ThetaY_mI20_mI15__427->SetBinContent(317,0.993215);
   ThetaY_mI20_mI15__427->SetBinContent(318,1.006829);
   ThetaY_mI20_mI15__427->SetBinContent(319,1.018813);
   ThetaY_mI20_mI15__427->SetBinContent(320,1.01802);
   ThetaY_mI20_mI15__427->SetBinContent(321,1.009649);
   ThetaY_mI20_mI15__427->SetBinContent(322,1.00445);
   ThetaY_mI20_mI15__427->SetBinContent(323,0.9762524);
   ThetaY_mI20_mI15__427->SetBinContent(324,0.9156717);
   ThetaY_mI20_mI15__427->SetBinContent(325,0.8570736);
   ThetaY_mI20_mI15__427->SetBinContent(326,0.7456933);
   ThetaY_mI20_mI15__427->SetBinContent(327,0.6121073);
   ThetaY_mI20_mI15__427->SetBinContent(328,0.3904921);
   ThetaY_mI20_mI15__427->SetBinContent(329,0.1949156);
   ThetaY_mI20_mI15__427->SetBinContent(330,0.06414945);
   ThetaY_mI20_mI15__427->SetBinContent(331,0.006652862);
   ThetaY_mI20_mI15__427->SetBinError(300,0.0004945575);
   ThetaY_mI20_mI15__427->SetBinError(301,0.001711497);
   ThetaY_mI20_mI15__427->SetBinError(302,0.002869909);
   ThetaY_mI20_mI15__427->SetBinError(303,0.004170941);
   ThetaY_mI20_mI15__427->SetBinError(304,0.005214025);
   ThetaY_mI20_mI15__427->SetBinError(305,0.005790324);
   ThetaY_mI20_mI15__427->SetBinError(306,0.006138246);
   ThetaY_mI20_mI15__427->SetBinError(307,0.006402471);
   ThetaY_mI20_mI15__427->SetBinError(308,0.006566814);
   ThetaY_mI20_mI15__427->SetBinError(309,0.006649359);
   ThetaY_mI20_mI15__427->SetBinError(310,0.006680814);
   ThetaY_mI20_mI15__427->SetBinError(311,0.006714289);
   ThetaY_mI20_mI15__427->SetBinError(312,0.006650527);
   ThetaY_mI20_mI15__427->SetBinError(313,0.006643226);
   ThetaY_mI20_mI15__427->SetBinError(314,0.006637233);
   ThetaY_mI20_mI15__427->SetBinError(315,0.006629625);
   ThetaY_mI20_mI15__427->SetBinError(316,0.006637672);
   ThetaY_mI20_mI15__427->SetBinError(317,0.006615115);
   ThetaY_mI20_mI15__427->SetBinError(318,0.006660298);
   ThetaY_mI20_mI15__427->SetBinError(319,0.006699818);
   ThetaY_mI20_mI15__427->SetBinError(320,0.00669721);
   ThetaY_mI20_mI15__427->SetBinError(321,0.006669618);
   ThetaY_mI20_mI15__427->SetBinError(322,0.006652424);
   ThetaY_mI20_mI15__427->SetBinError(323,0.006558384);
   ThetaY_mI20_mI15__427->SetBinError(324,0.006351637);
   ThetaY_mI20_mI15__427->SetBinError(325,0.006145042);
   ThetaY_mI20_mI15__427->SetBinError(326,0.005731864);
   ThetaY_mI20_mI15__427->SetBinError(327,0.005193134);
   ThetaY_mI20_mI15__427->SetBinError(328,0.004147839);
   ThetaY_mI20_mI15__427->SetBinError(329,0.002930482);
   ThetaY_mI20_mI15__427->SetBinError(330,0.001681172);
   ThetaY_mI20_mI15__427->SetBinError(331,0.0005414022);
   ThetaY_mI20_mI15__427->SetEntries(536851);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__427->SetLineColor(ci);
   ThetaY_mI20_mI15__427->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__427->SetMarkerColor(ci);
   ThetaY_mI20_mI15__427->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__427->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__427->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__427->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__427->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__427->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__427->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__427->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__427->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__427->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__427->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__427->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__427->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__427->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__427->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__427->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__427->Draw("AEsame");
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
   
   Double_t _fx3143[32] = {
   -77.5,
   -72.5,
   -67.5,
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
   62.5,
   67.5,
   72.5,
   77.5};
   Double_t _fy3143[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01200588,
   0.04757236,
   0.2590455,
   0.636088,
   0.6855991,
   0.9037339,
   0.7004926,
   1,
   0.7399604,
   0.7897872,
   0.5676343,
   0.5444067,
   0.5966526,
   0.7916579,
   0.7528174,
   0.6447305,
   0.5904091,
   0.6301244,
   0.2361977,
   0.2159771,
   0,
   0,
   0};
   Double_t _felx3143[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3143[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009931899,
   0.02276898,
   0.05483067,
   0.08719624,
   0.09065414,
   0.1042907,
   0.09182867,
   0.1097405,
   0.09460751,
   0.09710704,
   0.0817275,
   0.0800534,
   0.08418618,
   0.09733737,
   0.09625356,
   0.09189495,
   0.09083357,
   0.100579,
   0.06724999,
   0.07967589,
   0,
   0,
   0};
   Double_t _fehx3143[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3143[32] = {
   4.024903,
   0.3338297,
   0.1186781,
   0.05618093,
   0.03594965,
   0.02914941,
   0.02593847,
   0.02384163,
   0.02266318,
   0.02760983,
   0.03762077,
   0.06787945,
   0.1000592,
   0.1035182,
   0.1170861,
   0.1047394,
   0.1225043,
   0.107557,
   0.1098541,
   0.09443993,
   0.09279303,
   0.096998,
   0.1101148,
   0.1094288,
   0.1060342,
   0.1060173,
   0.1180813,
   0.08980503,
   0.1163984,
   0.1138216,
   0.3459892,
   3.354459};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3143,_fy3143,_felx3143,_fehx3143,_fely3143,_fehy3143);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3143 = new TH1F("Graph_Graph3143","",100,-100,100);
   Graph_Graph3143->SetMinimum(0);
   Graph_Graph3143->SetMaximum(1.5);
   Graph_Graph3143->SetDirectory(0);
   Graph_Graph3143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3143->SetLineColor(ci);
   Graph_Graph3143->GetXaxis()->SetRange(1,100);
   Graph_Graph3143->GetXaxis()->CenterTitle(true);
   Graph_Graph3143->GetXaxis()->SetLabelFont(42);
   Graph_Graph3143->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3143->GetXaxis()->SetTitleFont(42);
   Graph_Graph3143->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3143->GetYaxis()->CenterTitle(true);
   Graph_Graph3143->GetYaxis()->SetLabelFont(42);
   Graph_Graph3143->GetYaxis()->SetTitleFont(42);
   Graph_Graph3143->GetZaxis()->SetLabelFont(42);
   Graph_Graph3143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3143->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3143);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.125541,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__428 = new TH2D("ThetaY_vs_Y_mI20_mI15__428","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7809,126);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7835,1509);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7861,4243);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7887,8962);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7913,14005);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7939,17272);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7965,19410);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(7991,21117);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8017,22215);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8043,22777);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8069,22993);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8095,23224);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8121,22785);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8147,22735);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8173,22694);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8199,22642);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8225,22697);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8251,22543);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8277,22852);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8303,23124);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8329,23106);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8355,22916);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8381,22798);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8407,22158);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8433,20783);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8459,19453);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8485,16925);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8511,13893);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8537,8863);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8563,4424);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8589,1456);
   ThetaY_vs_Y_mI20_mI15__428->SetBinContent(8615,151);
   ThetaY_vs_Y_mI20_mI15__428->SetEntries(536851);
   ThetaY_vs_Y_mI20_mI15__428->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(1,1161.2);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(2,2322.4);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(3,3483.6);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(4,4644.8);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(5,5806);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(6,6967.2);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(7,8128.4);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(8,9289.6);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(9,10450.8);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(10,11612);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(11,12773.2);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(12,13934.4);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(13,15095.6);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(14,16256.8);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(15,17418);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(16,18579.2);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(17,19740.4);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(18,20901.6);
   ThetaY_vs_Y_mI20_mI15__428->SetContourLevel(19,22062.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__428->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__428->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__428->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__428->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__428->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__428->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__428->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__428->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__428->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__428->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__428->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__428->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__428->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__428->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__428->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__428->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
