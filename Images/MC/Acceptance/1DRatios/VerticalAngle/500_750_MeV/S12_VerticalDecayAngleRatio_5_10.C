void S12_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:40 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06575702,125,1.249383);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__384 = new TH1D("S12_ThetaY_5_10__384","",630,-1575,1575);
   S12_ThetaY_5_10__384->SetBinContent(303,0.00862069);
   S12_ThetaY_5_10__384->SetBinContent(304,0.06034483);
   S12_ThetaY_5_10__384->SetBinContent(305,0.1724138);
   S12_ThetaY_5_10__384->SetBinContent(306,0.3793103);
   S12_ThetaY_5_10__384->SetBinContent(307,0.6724138);
   S12_ThetaY_5_10__384->SetBinContent(308,0.8706897);
   S12_ThetaY_5_10__384->SetBinContent(309,0.7758621);
   S12_ThetaY_5_10__384->SetBinContent(310,0.7931034);
   S12_ThetaY_5_10__384->SetBinContent(311,0.7327586);
   S12_ThetaY_5_10__384->SetBinContent(312,1);
   S12_ThetaY_5_10__384->SetBinContent(313,0.7931034);
   S12_ThetaY_5_10__384->SetBinContent(314,0.75);
   S12_ThetaY_5_10__384->SetBinContent(315,0.8103448);
   S12_ThetaY_5_10__384->SetBinContent(316,0.8448276);
   S12_ThetaY_5_10__384->SetBinContent(317,0.8793103);
   S12_ThetaY_5_10__384->SetBinContent(318,0.9051724);
   S12_ThetaY_5_10__384->SetBinContent(319,0.8965517);
   S12_ThetaY_5_10__384->SetBinContent(320,0.8965517);
   S12_ThetaY_5_10__384->SetBinContent(321,0.6206897);
   S12_ThetaY_5_10__384->SetBinContent(322,0.3965517);
   S12_ThetaY_5_10__384->SetBinContent(323,0.1551724);
   S12_ThetaY_5_10__384->SetBinError(303,0.00862069);
   S12_ThetaY_5_10__384->SetBinError(304,0.0228082);
   S12_ThetaY_5_10__384->SetBinError(305,0.0385529);
   S12_ThetaY_5_10__384->SetBinError(306,0.05718319);
   S12_ThetaY_5_10__384->SetBinError(307,0.07613587);
   S12_ThetaY_5_10__384->SetBinError(308,0.08663686);
   S12_ThetaY_5_10__384->SetBinError(309,0.08178304);
   S12_ThetaY_5_10__384->SetBinError(310,0.08268675);
   S12_ThetaY_5_10__384->SetBinError(311,0.07947883);
   S12_ThetaY_5_10__384->SetBinError(312,0.09284767);
   S12_ThetaY_5_10__384->SetBinError(313,0.08268675);
   S12_ThetaY_5_10__384->SetBinError(314,0.08040844);
   S12_ThetaY_5_10__384->SetBinError(315,0.08358069);
   S12_ThetaY_5_10__384->SetBinError(316,0.08534047);
   S12_ThetaY_5_10__384->SetBinError(317,0.0870647);
   S12_ThetaY_5_10__384->SetBinError(318,0.08833578);
   S12_ThetaY_5_10__384->SetBinError(319,0.08791413);
   S12_ThetaY_5_10__384->SetBinError(320,0.08791413);
   S12_ThetaY_5_10__384->SetBinError(321,0.07314898);
   S12_ThetaY_5_10__384->SetBinError(322,0.05846836);
   S12_ThetaY_5_10__384->SetBinError(323,0.03657449);
   S12_ThetaY_5_10__384->SetMinimum(0);
   S12_ThetaY_5_10__384->SetMaximum(1.117869);
   S12_ThetaY_5_10__384->SetEntries(1556);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__384->SetLineColor(ci);
   S12_ThetaY_5_10__384->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__384->SetMarkerColor(ci);
   S12_ThetaY_5_10__384->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__384->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__384->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__384->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__384->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__384->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__384->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__384->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__384->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__384->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__384->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__384->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__384->Draw("AE");
   
   TH1D *ThetaY_5_10__385 = new TH1D("ThetaY_5_10__385","",630,-1575,1575);
   ThetaY_5_10__385->SetBinContent(300,0.005628318);
   ThetaY_5_10__385->SetBinContent(301,0.06407213);
   ThetaY_5_10__385->SetBinContent(302,0.1917362);
   ThetaY_5_10__385->SetBinContent(303,0.3951559);
   ThetaY_5_10__385->SetBinContent(304,0.604684);
   ThetaY_5_10__385->SetBinContent(305,0.7569954);
   ThetaY_5_10__385->SetBinContent(306,0.8591854);
   ThetaY_5_10__385->SetBinContent(307,0.9262184);
   ThetaY_5_10__385->SetBinContent(308,0.9779135);
   ThetaY_5_10__385->SetBinContent(309,0.9982662);
   ThetaY_5_10__385->SetBinContent(310,1.016245);
   ThetaY_5_10__385->SetBinContent(311,1.008616);
   ThetaY_5_10__385->SetBinContent(312,1);
   ThetaY_5_10__385->SetBinContent(313,0.9936248);
   ThetaY_5_10__385->SetBinContent(314,0.9980528);
   ThetaY_5_10__385->SetBinContent(315,0.9909573);
   ThetaY_5_10__385->SetBinContent(316,0.9904505);
   ThetaY_5_10__385->SetBinContent(317,0.9966123);
   ThetaY_5_10__385->SetBinContent(318,1.004721);
   ThetaY_5_10__385->SetBinContent(319,1.010803);
   ThetaY_5_10__385->SetBinContent(320,1.013151);
   ThetaY_5_10__385->SetBinContent(321,1.003254);
   ThetaY_5_10__385->SetBinContent(322,1.005041);
   ThetaY_5_10__385->SetBinContent(323,0.9763931);
   ThetaY_5_10__385->SetBinContent(324,0.9306463);
   ThetaY_5_10__385->SetBinContent(325,0.8538771);
   ThetaY_5_10__385->SetBinContent(326,0.7545413);
   ThetaY_5_10__385->SetBinContent(327,0.6006829);
   ThetaY_5_10__385->SetBinContent(328,0.3904879);
   ThetaY_5_10__385->SetBinContent(329,0.1947238);
   ThetaY_5_10__385->SetBinContent(330,0.06449892);
   ThetaY_5_10__385->SetBinContent(331,0.004668036);
   ThetaY_5_10__385->SetBinError(300,0.0003874694);
   ThetaY_5_10__385->SetBinError(301,0.001307322);
   ThetaY_5_10__385->SetBinError(302,0.002261519);
   ThetaY_5_10__385->SetBinError(303,0.003246626);
   ThetaY_5_10__385->SetBinError(304,0.004016172);
   ThetaY_5_10__385->SetBinError(305,0.004493603);
   ThetaY_5_10__385->SetBinError(306,0.00478731);
   ThetaY_5_10__385->SetBinError(307,0.004970554);
   ThetaY_5_10__385->SetBinError(308,0.005107381);
   ThetaY_5_10__385->SetBinError(309,0.005160256);
   ThetaY_5_10__385->SetBinError(310,0.005206516);
   ThetaY_5_10__385->SetBinError(311,0.005186937);
   ThetaY_5_10__385->SetBinError(312,0.005164735);
   ThetaY_5_10__385->SetBinError(313,0.005148246);
   ThetaY_5_10__385->SetBinError(314,0.005159704);
   ThetaY_5_10__385->SetBinError(315,0.005141331);
   ThetaY_5_10__385->SetBinError(316,0.005140016);
   ThetaY_5_10__385->SetBinError(317,0.00515598);
   ThetaY_5_10__385->SetBinError(318,0.005176913);
   ThetaY_5_10__385->SetBinError(319,0.005192558);
   ThetaY_5_10__385->SetBinError(320,0.005198584);
   ThetaY_5_10__385->SetBinError(321,0.005173132);
   ThetaY_5_10__385->SetBinError(322,0.005177738);
   ThetaY_5_10__385->SetBinError(323,0.005103409);
   ThetaY_5_10__385->SetBinError(324,0.004982421);
   ThetaY_5_10__385->SetBinError(325,0.004772498);
   ThetaY_5_10__385->SetBinError(326,0.004486313);
   ThetaY_5_10__385->SetBinError(327,0.004002863);
   ThetaY_5_10__385->SetBinError(328,0.003227393);
   ThetaY_5_10__385->SetBinError(329,0.00227907);
   ThetaY_5_10__385->SetBinError(330,0.001311669);
   ThetaY_5_10__385->SetBinError(331,0.0003528704);
   ThetaY_5_10__385->SetEntries(884062);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__385->SetLineColor(ci);
   ThetaY_5_10__385->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__385->SetMarkerColor(ci);
   ThetaY_5_10__385->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__385->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__385->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__385->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__385->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__385->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__385->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__385->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__385->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__385->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__385->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__385->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__385->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__385->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__385->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__385->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__385->Draw("AEsame");
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
   
   Double_t _fx3129[32] = {
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
   Double_t _fy3129[32] = {
   0,
   0,
   0,
   0.02181592,
   0.09979563,
   0.2277607,
   0.4414767,
   0.7259776,
   0.8903544,
   0.7772096,
   0.7804256,
   0.7264992,
   1,
   0.7981921,
   0.7514633,
   0.8177394,
   0.852973,
   0.8822993,
   0.9009188,
   0.8869696,
   0.8849146,
   0.6186763,
   0.3945625,
   0.1589241,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3129[32] = {
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
   Double_t _fely3129[32] = {
   0,
   0,
   0,
   0.01804737,
   0.03680776,
   0.05051662,
   0.06634547,
   0.08211513,
   0.08856728,
   0.08186983,
   0.08131384,
   0.07873194,
   0.09285581,
   0.08316722,
   0.08050259,
   0.08429845,
   0.08612837,
   0.08733508,
   0.08790161,
   0.08695247,
   0.08675074,
   0.07281064,
   0.05799743,
   0.03711644,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3129[32] = {
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
   Double_t _fehy3129[32] = {
   2.832164,
   0.2477982,
   0.08278513,
   0.05017187,
   0.05376385,
   0.06319238,
   0.07715481,
   0.0919759,
   0.09785087,
   0.09098639,
   0.09026427,
   0.08776657,
   0.1019087,
   0.09232197,
   0.08962816,
   0.09347357,
   0.09529992,
   0.09644208,
   0.09692951,
   0.09592763,
   0.09570504,
   0.08193088,
   0.06722215,
   0.04699477,
   0.01705406,
   0.01858737,
   0.02103449,
   0.02642247,
   0.04064627,
   0.08151484,
   0.2461579,
   3.417851};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3129,_fy3129,_felx3129,_fehx3129,_fely3129,_fehy3129);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3129 = new TH1F("Graph_Graph3129","",100,-100,100);
   Graph_Graph3129->SetMinimum(0);
   Graph_Graph3129->SetMaximum(1.5);
   Graph_Graph3129->SetDirectory(0);
   Graph_Graph3129->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3129->SetLineColor(ci);
   Graph_Graph3129->GetXaxis()->SetRange(1,100);
   Graph_Graph3129->GetXaxis()->CenterTitle(true);
   Graph_Graph3129->GetXaxis()->SetLabelFont(42);
   Graph_Graph3129->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3129->GetXaxis()->SetTitleFont(42);
   Graph_Graph3129->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3129->GetYaxis()->CenterTitle(true);
   Graph_Graph3129->GetYaxis()->SetLabelFont(42);
   Graph_Graph3129->GetYaxis()->SetTitleFont(42);
   Graph_Graph3129->GetZaxis()->SetLabelFont(42);
   Graph_Graph3129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3129->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3129);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.117869,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__386 = new TH2D("ThetaY_vs_Y_5_10__386","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__386->SetBinContent(7814,211);
   ThetaY_vs_Y_5_10__386->SetBinContent(7840,2402);
   ThetaY_vs_Y_5_10__386->SetBinContent(7866,7188);
   ThetaY_vs_Y_5_10__386->SetBinContent(7892,14814);
   ThetaY_vs_Y_5_10__386->SetBinContent(7918,22669);
   ThetaY_vs_Y_5_10__386->SetBinContent(7944,28379);
   ThetaY_vs_Y_5_10__386->SetBinContent(7970,32210);
   ThetaY_vs_Y_5_10__386->SetBinContent(7996,34723);
   ThetaY_vs_Y_5_10__386->SetBinContent(8022,36661);
   ThetaY_vs_Y_5_10__386->SetBinContent(8048,37424);
   ThetaY_vs_Y_5_10__386->SetBinContent(8074,38098);
   ThetaY_vs_Y_5_10__386->SetBinContent(8100,37812);
   ThetaY_vs_Y_5_10__386->SetBinContent(8126,37489);
   ThetaY_vs_Y_5_10__386->SetBinContent(8152,37250);
   ThetaY_vs_Y_5_10__386->SetBinContent(8178,37416);
   ThetaY_vs_Y_5_10__386->SetBinContent(8204,37150);
   ThetaY_vs_Y_5_10__386->SetBinContent(8230,37131);
   ThetaY_vs_Y_5_10__386->SetBinContent(8256,37362);
   ThetaY_vs_Y_5_10__386->SetBinContent(8282,37666);
   ThetaY_vs_Y_5_10__386->SetBinContent(8308,37894);
   ThetaY_vs_Y_5_10__386->SetBinContent(8334,37982);
   ThetaY_vs_Y_5_10__386->SetBinContent(8360,37611);
   ThetaY_vs_Y_5_10__386->SetBinContent(8386,37678);
   ThetaY_vs_Y_5_10__386->SetBinContent(8412,36604);
   ThetaY_vs_Y_5_10__386->SetBinContent(8438,34889);
   ThetaY_vs_Y_5_10__386->SetBinContent(8464,32011);
   ThetaY_vs_Y_5_10__386->SetBinContent(8490,28287);
   ThetaY_vs_Y_5_10__386->SetBinContent(8516,22519);
   ThetaY_vs_Y_5_10__386->SetBinContent(8542,14639);
   ThetaY_vs_Y_5_10__386->SetBinContent(8568,7300);
   ThetaY_vs_Y_5_10__386->SetBinContent(8594,2418);
   ThetaY_vs_Y_5_10__386->SetBinContent(8620,175);
   ThetaY_vs_Y_5_10__386->SetEntries(884062);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__386->SetLineColor(ci);
   ThetaY_vs_Y_5_10__386->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__386->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__386->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__386->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__386->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__386->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__386->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__386->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__386->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__386->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__386->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__386->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__386->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__386->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__386->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
