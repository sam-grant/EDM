void S12S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:43 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06507481,125,1.236421);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_15_20__504 = new TH1D("S12S18_ThetaY_15_20__504","",630,-1575,1575);
   S12S18_ThetaY_15_20__504->SetBinContent(302,0.01428571);
   S12S18_ThetaY_15_20__504->SetBinContent(303,0.09285714);
   S12S18_ThetaY_15_20__504->SetBinContent(304,0.2142857);
   S12S18_ThetaY_15_20__504->SetBinContent(305,0.5);
   S12S18_ThetaY_15_20__504->SetBinContent(306,0.7214286);
   S12S18_ThetaY_15_20__504->SetBinContent(307,0.7285714);
   S12S18_ThetaY_15_20__504->SetBinContent(308,0.7785714);
   S12S18_ThetaY_15_20__504->SetBinContent(309,1);
   S12S18_ThetaY_15_20__504->SetBinContent(310,0.9714286);
   S12S18_ThetaY_15_20__504->SetBinContent(311,0.9785714);
   S12S18_ThetaY_15_20__504->SetBinContent(312,0.9285714);
   S12S18_ThetaY_15_20__504->SetBinContent(313,0.8714286);
   S12S18_ThetaY_15_20__504->SetBinContent(314,0.8357143);
   S12S18_ThetaY_15_20__504->SetBinContent(315,0.8428571);
   S12S18_ThetaY_15_20__504->SetBinContent(316,0.8785714);
   S12S18_ThetaY_15_20__504->SetBinContent(317,0.7928571);
   S12S18_ThetaY_15_20__504->SetBinContent(318,0.9714286);
   S12S18_ThetaY_15_20__504->SetBinContent(319,0.8857143);
   S12S18_ThetaY_15_20__504->SetBinContent(320,0.4428571);
   S12S18_ThetaY_15_20__504->SetBinContent(321,0.15);
   S12S18_ThetaY_15_20__504->SetBinContent(322,0.007142857);
   S12S18_ThetaY_15_20__504->SetBinError(302,0.01010153);
   S12S18_ThetaY_15_20__504->SetBinError(303,0.02575394);
   S12S18_ThetaY_15_20__504->SetBinError(304,0.03912304);
   S12S18_ThetaY_15_20__504->SetBinError(305,0.05976143);
   S12S18_ThetaY_15_20__504->SetBinError(306,0.07178483);
   S12S18_ThetaY_15_20__504->SetBinError(307,0.07213932);
   S12S18_ThetaY_15_20__504->SetBinError(308,0.07457362);
   S12S18_ThetaY_15_20__504->SetBinError(309,0.08451543);
   S12S18_ThetaY_15_20__504->SetBinError(310,0.08329931);
   S12S18_ThetaY_15_20__504->SetBinError(311,0.083605);
   S12S18_ThetaY_15_20__504->SetBinError(312,0.0814411);
   S12S18_ThetaY_15_20__504->SetBinError(313,0.07889544);
   S12S18_ThetaY_15_20__504->SetBinError(314,0.07726181);
   S12S18_ThetaY_15_20__504->SetBinError(315,0.07759129);
   S12S18_ThetaY_15_20__504->SetBinError(316,0.07921812);
   S12S18_ThetaY_15_20__504->SetBinError(317,0.07525467);
   S12S18_ThetaY_15_20__504->SetBinError(318,0.08329931);
   S12S18_ThetaY_15_20__504->SetBinError(319,0.07953949);
   S12S18_ThetaY_15_20__504->SetBinError(320,0.05624291);
   S12S18_ThetaY_15_20__504->SetBinError(321,0.03273268);
   S12S18_ThetaY_15_20__504->SetBinError(322,0.007142857);
   S12S18_ThetaY_15_20__504->SetMinimum(0);
   S12S18_ThetaY_15_20__504->SetMaximum(1.106272);
   S12S18_ThetaY_15_20__504->SetEntries(1905);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__504->SetLineColor(ci);
   S12S18_ThetaY_15_20__504->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__504->SetMarkerColor(ci);
   S12S18_ThetaY_15_20__504->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_15_20__504->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_15_20__504->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__504->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__504->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__504->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_15_20__504->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_15_20__504->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__504->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__504->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__504->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__504->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__504->Draw("AE");
   
   TH1D *ThetaY_15_20__505 = new TH1D("ThetaY_15_20__505","",630,-1575,1575);
   ThetaY_15_20__505->SetBinContent(300,0.005353412);
   ThetaY_15_20__505->SetBinContent(301,0.06541609);
   ThetaY_15_20__505->SetBinContent(302,0.1869777);
   ThetaY_15_20__505->SetBinContent(303,0.3816156);
   ThetaY_15_20__505->SetBinContent(304,0.6009314);
   ThetaY_15_20__505->SetBinContent(305,0.7260185);
   ThetaY_15_20__505->SetBinContent(306,0.8557625);
   ThetaY_15_20__505->SetBinContent(307,0.9214833);
   ThetaY_15_20__505->SetBinContent(308,0.9580432);
   ThetaY_15_20__505->SetBinContent(309,1);
   ThetaY_15_20__505->SetBinContent(310,0.9942114);
   ThetaY_15_20__505->SetBinContent(311,1.001959);
   ThetaY_15_20__505->SetBinContent(312,1.00074);
   ThetaY_15_20__505->SetBinContent(313,0.9914694);
   ThetaY_15_20__505->SetBinContent(314,0.9958217);
   ThetaY_15_20__505->SetBinContent(315,0.9842009);
   ThetaY_15_20__505->SetBinContent(316,0.9939067);
   ThetaY_15_20__505->SetBinContent(317,0.9842444);
   ThetaY_15_20__505->SetBinContent(318,0.9950818);
   ThetaY_15_20__505->SetBinContent(319,0.9968663);
   ThetaY_15_20__505->SetBinContent(320,1.00235);
   ThetaY_15_20__505->SetBinContent(321,1.005702);
   ThetaY_15_20__505->SetBinContent(322,0.9964746);
   ThetaY_15_20__505->SetBinContent(323,0.9681407);
   ThetaY_15_20__505->SetBinContent(324,0.9031163);
   ThetaY_15_20__505->SetBinContent(325,0.8352629);
   ThetaY_15_20__505->SetBinContent(326,0.7396414);
   ThetaY_15_20__505->SetBinContent(327,0.5913997);
   ThetaY_15_20__505->SetBinContent(328,0.3923659);
   ThetaY_15_20__505->SetBinContent(329,0.1860202);
   ThetaY_15_20__505->SetBinContent(330,0.0641539);
   ThetaY_15_20__505->SetBinContent(331,0.006397981);
   ThetaY_15_20__505->SetBinError(300,0.0004827009);
   ThetaY_15_20__505->SetBinError(301,0.00168735);
   ThetaY_15_20__505->SetBinError(302,0.002852711);
   ThetaY_15_20__505->SetBinError(303,0.004075453);
   ThetaY_15_20__505->SetBinError(304,0.005114171);
   ThetaY_15_20__505->SetBinError(305,0.005621298);
   ThetaY_15_20__505->SetBinError(306,0.006102945);
   ThetaY_15_20__505->SetBinError(307,0.006332957);
   ThetaY_15_20__505->SetBinError(308,0.006457365);
   ThetaY_15_20__505->SetBinError(309,0.006597248);
   ThetaY_15_20__505->SetBinError(310,0.006578125);
   ThetaY_15_20__505->SetBinError(311,0.006603705);
   ThetaY_15_20__505->SetBinError(312,0.006599688);
   ThetaY_15_20__505->SetBinError(313,0.006569048);
   ThetaY_15_20__505->SetBinError(314,0.006583451);
   ThetaY_15_20__505->SetBinError(315,0.006544925);
   ThetaY_15_20__505->SetBinError(316,0.006577117);
   ThetaY_15_20__505->SetBinError(317,0.00654507);
   ThetaY_15_20__505->SetBinError(318,0.006581004);
   ThetaY_15_20__505->SetBinError(319,0.006586903);
   ThetaY_15_20__505->SetBinError(320,0.006604996);
   ThetaY_15_20__505->SetBinError(321,0.006616028);
   ThetaY_15_20__505->SetBinError(322,0.006585608);
   ThetaY_15_20__505->SetBinError(323,0.006491305);
   ThetaY_15_20__505->SetBinError(324,0.006269525);
   ThetaY_15_20__505->SetBinError(325,0.006029404);
   ThetaY_15_20__505->SetBinError(326,0.005673792);
   ThetaY_15_20__505->SetBinError(327,0.00507345);
   ThetaY_15_20__505->SetBinError(328,0.004132458);
   ThetaY_15_20__505->SetBinError(329,0.002845397);
   ThetaY_15_20__505->SetBinError(330,0.001670992);
   ThetaY_15_20__505->SetBinError(331,0.0005276965);
   ThetaY_15_20__505->SetEntries(536056);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__505->SetLineColor(ci);
   ThetaY_15_20__505->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__505->SetMarkerColor(ci);
   ThetaY_15_20__505->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__505->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__505->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__505->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__505->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__505->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__505->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__505->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__505->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__505->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__505->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__505->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__505->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__505->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__505->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__505->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__505->Draw("AEsame");
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
   
   Double_t _fx3169[32] = {
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
   Double_t _fy3169[32] = {
   0,
   0,
   0.0764033,
   0.2433264,
   0.3565893,
   0.6886877,
   0.8430243,
   0.7906507,
   0.8126684,
   1,
   0.9770846,
   0.9766586,
   0.9278849,
   0.8789264,
   0.8392208,
   0.8563873,
   0.8839577,
   0.805549,
   0.9762298,
   0.8884986,
   0.4418187,
   0.1491496,
   0.007168128,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3169[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3169[32] = {
   0,
   0,
   0.04935666,
   0.06665487,
   0.06480715,
   0.08228657,
   0.08395773,
   0.07834382,
   0.07791044,
   0.08466941,
   0.08392817,
   0.0835855,
   0.08150384,
   0.07967589,
   0.07767118,
   0.07892845,
   0.0798077,
   0.07652951,
   0.08385454,
   0.07989554,
   0.05603339,
   0.03229999,
   0.005929856,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3169[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3169[32] = {
   2.474881,
   0.2011464,
   0.100825,
   0.08801515,
   0.07781604,
   0.09276465,
   0.0927713,
   0.08652395,
   0.08576727,
   0.09216488,
   0.09147067,
   0.09106851,
   0.08900181,
   0.08725191,
   0.08521908,
   0.08656491,
   0.08736404,
   0.0841736,
   0.09139039,
   0.08742834,
   0.06363677,
   0.04018831,
   0.01648449,
   0.01358346,
   0.01456151,
   0.01574449,
   0.01778006,
   0.02223715,
   0.03351845,
   0.07070731,
   0.2051063,
   2.068285};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3169,_fy3169,_felx3169,_fehx3169,_fely3169,_fehy3169);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3169 = new TH1F("Graph_Graph3169","",100,-100,100);
   Graph_Graph3169->SetMinimum(0);
   Graph_Graph3169->SetMaximum(1.5);
   Graph_Graph3169->SetDirectory(0);
   Graph_Graph3169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3169->SetLineColor(ci);
   Graph_Graph3169->GetXaxis()->SetRange(1,100);
   Graph_Graph3169->GetXaxis()->CenterTitle(true);
   Graph_Graph3169->GetXaxis()->SetLabelFont(42);
   Graph_Graph3169->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3169->GetXaxis()->SetTitleFont(42);
   Graph_Graph3169->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3169->GetYaxis()->CenterTitle(true);
   Graph_Graph3169->GetYaxis()->SetLabelFont(42);
   Graph_Graph3169->GetYaxis()->SetTitleFont(42);
   Graph_Graph3169->GetZaxis()->SetLabelFont(42);
   Graph_Graph3169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3169->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3169);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106272,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__506 = new TH2D("ThetaY_vs_Y_15_20__506","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__506->SetBinContent(7816,123);
   ThetaY_vs_Y_15_20__506->SetBinContent(7842,1503);
   ThetaY_vs_Y_15_20__506->SetBinContent(7868,4296);
   ThetaY_vs_Y_15_20__506->SetBinContent(7894,8768);
   ThetaY_vs_Y_15_20__506->SetBinContent(7920,13807);
   ThetaY_vs_Y_15_20__506->SetBinContent(7946,16681);
   ThetaY_vs_Y_15_20__506->SetBinContent(7972,19662);
   ThetaY_vs_Y_15_20__506->SetBinContent(7998,21172);
   ThetaY_vs_Y_15_20__506->SetBinContent(8024,22012);
   ThetaY_vs_Y_15_20__506->SetBinContent(8050,22976);
   ThetaY_vs_Y_15_20__506->SetBinContent(8076,22843);
   ThetaY_vs_Y_15_20__506->SetBinContent(8102,23021);
   ThetaY_vs_Y_15_20__506->SetBinContent(8128,22993);
   ThetaY_vs_Y_15_20__506->SetBinContent(8154,22780);
   ThetaY_vs_Y_15_20__506->SetBinContent(8180,22880);
   ThetaY_vs_Y_15_20__506->SetBinContent(8206,22613);
   ThetaY_vs_Y_15_20__506->SetBinContent(8232,22836);
   ThetaY_vs_Y_15_20__506->SetBinContent(8258,22614);
   ThetaY_vs_Y_15_20__506->SetBinContent(8284,22863);
   ThetaY_vs_Y_15_20__506->SetBinContent(8310,22904);
   ThetaY_vs_Y_15_20__506->SetBinContent(8336,23030);
   ThetaY_vs_Y_15_20__506->SetBinContent(8362,23107);
   ThetaY_vs_Y_15_20__506->SetBinContent(8388,22895);
   ThetaY_vs_Y_15_20__506->SetBinContent(8414,22244);
   ThetaY_vs_Y_15_20__506->SetBinContent(8440,20750);
   ThetaY_vs_Y_15_20__506->SetBinContent(8466,19191);
   ThetaY_vs_Y_15_20__506->SetBinContent(8492,16994);
   ThetaY_vs_Y_15_20__506->SetBinContent(8518,13588);
   ThetaY_vs_Y_15_20__506->SetBinContent(8544,9015);
   ThetaY_vs_Y_15_20__506->SetBinContent(8570,4274);
   ThetaY_vs_Y_15_20__506->SetBinContent(8596,1474);
   ThetaY_vs_Y_15_20__506->SetBinContent(8622,147);
   ThetaY_vs_Y_15_20__506->SetEntries(536056);
   ThetaY_vs_Y_15_20__506->SetContour(20);
   ThetaY_vs_Y_15_20__506->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__506->SetContourLevel(1,1155.35);
   ThetaY_vs_Y_15_20__506->SetContourLevel(2,2310.7);
   ThetaY_vs_Y_15_20__506->SetContourLevel(3,3466.05);
   ThetaY_vs_Y_15_20__506->SetContourLevel(4,4621.4);
   ThetaY_vs_Y_15_20__506->SetContourLevel(5,5776.75);
   ThetaY_vs_Y_15_20__506->SetContourLevel(6,6932.1);
   ThetaY_vs_Y_15_20__506->SetContourLevel(7,8087.45);
   ThetaY_vs_Y_15_20__506->SetContourLevel(8,9242.8);
   ThetaY_vs_Y_15_20__506->SetContourLevel(9,10398.15);
   ThetaY_vs_Y_15_20__506->SetContourLevel(10,11553.5);
   ThetaY_vs_Y_15_20__506->SetContourLevel(11,12708.85);
   ThetaY_vs_Y_15_20__506->SetContourLevel(12,13864.2);
   ThetaY_vs_Y_15_20__506->SetContourLevel(13,15019.55);
   ThetaY_vs_Y_15_20__506->SetContourLevel(14,16174.9);
   ThetaY_vs_Y_15_20__506->SetContourLevel(15,17330.25);
   ThetaY_vs_Y_15_20__506->SetContourLevel(16,18485.6);
   ThetaY_vs_Y_15_20__506->SetContourLevel(17,19640.95);
   ThetaY_vs_Y_15_20__506->SetContourLevel(18,20796.3);
   ThetaY_vs_Y_15_20__506->SetContourLevel(19,21951.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__506->SetLineColor(ci);
   ThetaY_vs_Y_15_20__506->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__506->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__506->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__506->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__506->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__506->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__506->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__506->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__506->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__506->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__506->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__506->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__506->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__506->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__506->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_15_20","Reco vertices","lpf");
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
