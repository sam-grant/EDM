void S12_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__546 = new TH1D("S12_ThetaY_mI10_mI5__546","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__546->SetBinContent(308,0.00974026);
   S12_ThetaY_mI10_mI5__546->SetBinContent(309,0.1071429);
   S12_ThetaY_mI10_mI5__546->SetBinContent(310,0.4383117);
   S12_ThetaY_mI10_mI5__546->SetBinContent(311,0.8149351);
   S12_ThetaY_mI10_mI5__546->SetBinContent(312,0.8961039);
   S12_ThetaY_mI10_mI5__546->SetBinContent(313,0.9448052);
   S12_ThetaY_mI10_mI5__546->SetBinContent(314,0.8571429);
   S12_ThetaY_mI10_mI5__546->SetBinContent(315,0.9902597);
   S12_ThetaY_mI10_mI5__546->SetBinContent(316,0.8701299);
   S12_ThetaY_mI10_mI5__546->SetBinContent(317,1);
   S12_ThetaY_mI10_mI5__546->SetBinContent(318,0.8831169);
   S12_ThetaY_mI10_mI5__546->SetBinContent(319,0.9577922);
   S12_ThetaY_mI10_mI5__546->SetBinContent(320,0.7824675);
   S12_ThetaY_mI10_mI5__546->SetBinContent(321,0.8376623);
   S12_ThetaY_mI10_mI5__546->SetBinContent(322,0.7305195);
   S12_ThetaY_mI10_mI5__546->SetBinContent(323,0.4480519);
   S12_ThetaY_mI10_mI5__546->SetBinContent(324,0.1331169);
   S12_ThetaY_mI10_mI5__546->SetBinContent(325,0.02272727);
   S12_ThetaY_mI10_mI5__546->SetBinContent(326,0.003246753);
   S12_ThetaY_mI10_mI5__546->SetBinError(308,0.005623542);
   S12_ThetaY_mI10_mI5__546->SetBinError(309,0.01865118);
   S12_ThetaY_mI10_mI5__546->SetBinError(310,0.03772386);
   S12_ThetaY_mI10_mI5__546->SetBinError(311,0.05143825);
   S12_ThetaY_mI10_mI5__546->SetBinError(312,0.05393912);
   S12_ThetaY_mI10_mI5__546->SetBinError(313,0.05538546);
   S12_ThetaY_mI10_mI5__546->SetBinError(314,0.0527535);
   S12_ThetaY_mI10_mI5__546->SetBinError(315,0.05670211);
   S12_ThetaY_mI10_mI5__546->SetBinError(316,0.05315164);
   S12_ThetaY_mI10_mI5__546->SetBinError(317,0.05698029);
   S12_ThetaY_mI10_mI5__546->SetBinError(318,0.05354683);
   S12_ThetaY_mI10_mI5__546->SetBinError(319,0.05576482);
   S12_ThetaY_mI10_mI5__546->SetBinError(320,0.05040316);
   S12_ThetaY_mI10_mI5__546->SetBinError(321,0.05215058);
   S12_ThetaY_mI10_mI5__546->SetBinError(322,0.0487013);
   S12_ThetaY_mI10_mI5__546->SetBinError(323,0.03814071);
   S12_ThetaY_mI10_mI5__546->SetBinError(324,0.02078936);
   S12_ThetaY_mI10_mI5__546->SetBinError(325,0.008590102);
   S12_ThetaY_mI10_mI5__546->SetBinError(326,0.003246753);
   S12_ThetaY_mI10_mI5__546->SetMinimum(0);
   S12_ThetaY_mI10_mI5__546->SetMaximum(1.1);
   S12_ThetaY_mI10_mI5__546->SetEntries(3612);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__546->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__546->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__546->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__546->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__546->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__546->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__546->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__546->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__546->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__546->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__546->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__546->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__546->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__546->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__546->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__546->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__547 = new TH1D("ThetaY_mI10_mI5__547","",630,-1575,1575);
   ThetaY_mI10_mI5__547->SetBinContent(303,0.0003988566);
   ThetaY_mI10_mI5__547->SetBinContent(304,0.05256044);
   ThetaY_mI10_mI5__547->SetBinContent(305,0.2394026);
   ThetaY_mI10_mI5__547->SetBinContent(306,0.505861);
   ThetaY_mI10_mI5__547->SetBinContent(307,0.6873186);
   ThetaY_mI10_mI5__547->SetBinContent(308,0.8124488);
   ThetaY_mI10_mI5__547->SetBinContent(309,0.8869242);
   ThetaY_mI10_mI5__547->SetBinContent(310,0.9430078);
   ThetaY_mI10_mI5__547->SetBinContent(311,0.9808106);
   ThetaY_mI10_mI5__547->SetBinContent(312,0.9865497);
   ThetaY_mI10_mI5__547->SetBinContent(313,0.9986483);
   ThetaY_mI10_mI5__547->SetBinContent(314,0.9942387);
   ThetaY_mI10_mI5__547->SetBinContent(315,0.9970751);
   ThetaY_mI10_mI5__547->SetBinContent(316,0.9941058);
   ThetaY_mI10_mI5__547->SetBinContent(317,1);
   ThetaY_mI10_mI5__547->SetBinContent(318,0.9992688);
   ThetaY_mI10_mI5__547->SetBinContent(319,0.994416);
   ThetaY_mI10_mI5__547->SetBinContent(320,0.9755811);
   ThetaY_mI10_mI5__547->SetBinContent(321,0.9553724);
   ThetaY_mI10_mI5__547->SetBinContent(322,0.8914888);
   ThetaY_mI10_mI5__547->SetBinContent(323,0.8123823);
   ThetaY_mI10_mI5__547->SetBinContent(324,0.6931906);
   ThetaY_mI10_mI5__547->SetBinContent(325,0.513683);
   ThetaY_mI10_mI5__547->SetBinContent(326,0.24071);
   ThetaY_mI10_mI5__547->SetBinContent(327,0.05193999);
   ThetaY_mI10_mI5__547->SetBinContent(328,0.0003988566);
   ThetaY_mI10_mI5__547->SetBinError(303,9.40114e-05);
   ThetaY_mI10_mI5__547->SetBinError(304,0.001079199);
   ThetaY_mI10_mI5__547->SetBinError(305,0.002303226);
   ThetaY_mI10_mI5__547->SetBinError(306,0.003348018);
   ThetaY_mI10_mI5__547->SetBinError(307,0.003902574);
   ThetaY_mI10_mI5__547->SetBinError(308,0.004242972);
   ThetaY_mI10_mI5__547->SetBinError(309,0.00443318);
   ThetaY_mI10_mI5__547->SetBinError(310,0.004571195);
   ThetaY_mI10_mI5__547->SetBinError(311,0.004661919);
   ThetaY_mI10_mI5__547->SetBinError(312,0.004675538);
   ThetaY_mI10_mI5__547->SetBinError(313,0.00470412);
   ThetaY_mI10_mI5__547->SetBinError(314,0.004693723);
   ThetaY_mI10_mI5__547->SetBinError(315,0.004700414);
   ThetaY_mI10_mI5__547->SetBinError(316,0.004693409);
   ThetaY_mI10_mI5__547->SetBinError(317,0.004707303);
   ThetaY_mI10_mI5__547->SetBinError(318,0.004705582);
   ThetaY_mI10_mI5__547->SetBinError(319,0.004694142);
   ThetaY_mI10_mI5__547->SetBinError(320,0.004649474);
   ThetaY_mI10_mI5__547->SetBinError(321,0.004601066);
   ThetaY_mI10_mI5__547->SetBinError(322,0.004444574);
   ThetaY_mI10_mI5__547->SetBinError(323,0.004242798);
   ThetaY_mI10_mI5__547->SetBinError(324,0.00391921);
   ThetaY_mI10_mI5__547->SetBinError(325,0.003373803);
   ThetaY_mI10_mI5__547->SetBinError(326,0.002309506);
   ThetaY_mI10_mI5__547->SetBinError(327,0.001072811);
   ThetaY_mI10_mI5__547->SetBinError(328,9.40114e-05);
   ThetaY_mI10_mI5__547->SetEntries(821699);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__547->SetLineColor(ci);
   ThetaY_mI10_mI5__547->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__547->SetMarkerColor(ci);
   ThetaY_mI10_mI5__547->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__547->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__547->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__547->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__547->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__547->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__547->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__547->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__547->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__547->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__547->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__547->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__547->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__547->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__547->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__547->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__547->Draw("AEsame");
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
   
   Double_t _fx3183[26] = {
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
   Double_t _fy3183[26] = {
   0,
   0,
   0,
   0,
   0,
   0.01198877,
   0.1208027,
   0.4648018,
   0.8308792,
   0.9083211,
   0.946084,
   0.8621097,
   0.9931647,
   0.875289,
   1,
   0.8837631,
   0.9631705,
   0.8020528,
   0.8767915,
   0.8194376,
   0.5515285,
   0.192035,
   0.04424377,
   0.01348824,
   0,
   0};
   Double_t _felx3183[26] = {
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
   Double_t _fely3183[26] = {
   0,
   0,
   0,
   0,
   0,
   0.006524902,
   0.02093032,
   0.04001704,
   0.05255751,
   0.0548099,
   0.05560663,
   0.05318078,
   0.05702897,
   0.05359222,
   0.05714276,
   0.05371376,
   0.05622948,
   0.05176946,
   0.05471364,
   0.05474035,
   0.04697984,
   0.02988711,
   0.01631844,
   0.01115829,
   0,
   0};
   Double_t _fehx3183[26] = {
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
   Double_t _fehy3183[26] = {
   15.77939,
   0.1137674,
   0.02496987,
   0.01181665,
   0.00869687,
   0.01166276,
   0.02491446,
   0.04362109,
   0.05599332,
   0.05822272,
   0.05897641,
   0.05656833,
   0.06040294,
   0.05697977,
   0.06050657,
   0.05708327,
   0.05961336,
   0.05522516,
   0.05824062,
   0.0585267,
   0.05116422,
   0.03494549,
   0.02383574,
   0.03102127,
   0.1151269,
   15.77939};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3183,_fy3183,_felx3183,_fehx3183,_fely3183,_fehy3183);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3183 = new TH1F("Graph_Graph3183","",100,-100,100);
   Graph_Graph3183->SetMinimum(0);
   Graph_Graph3183->SetMaximum(1.5);
   Graph_Graph3183->SetDirectory(0);
   Graph_Graph3183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3183->SetLineColor(ci);
   Graph_Graph3183->GetXaxis()->SetRange(1,100);
   Graph_Graph3183->GetXaxis()->CenterTitle(true);
   Graph_Graph3183->GetXaxis()->SetLabelFont(42);
   Graph_Graph3183->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3183->GetXaxis()->SetTitleFont(42);
   Graph_Graph3183->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3183->GetYaxis()->CenterTitle(true);
   Graph_Graph3183->GetYaxis()->SetLabelFont(42);
   Graph_Graph3183->GetYaxis()->SetTitleFont(42);
   Graph_Graph3183->GetZaxis()->SetLabelFont(42);
   Graph_Graph3183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3183->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3183);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__548 = new TH2D("ThetaY_vs_Y_mI10_mI5__548","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(7889,18);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(7915,2372);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(7941,10804);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(7967,22829);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(7993,31018);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8019,36665);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8045,40026);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8071,42557);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8097,44263);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8123,44522);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8149,45068);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8175,44869);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8201,44997);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8227,44863);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8253,45129);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8279,45096);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8305,44877);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8331,44027);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8357,43115);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8383,40232);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8409,36662);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8435,31283);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8461,23182);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8487,10863);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8513,2344);
   ThetaY_vs_Y_mI10_mI5__548->SetBinContent(8539,18);
   ThetaY_vs_Y_mI10_mI5__548->SetEntries(821699);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__548->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__548->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__548->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__548->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__548->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__548->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__548->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__548->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__548->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__548->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__548->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__548->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__548->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__548->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__548->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__548->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
