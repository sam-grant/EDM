void S12S18_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.0655776,125,1.245974);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__825 = new TH1D("S12S18_ThetaY_mI20_mI15__825","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(311,0.02660754);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(312,0.3946785);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(313,0.8580931);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(314,1);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(315,0.9068736);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(316,0.9933481);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(317,0.9822616);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(318,0.9445676);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(319,0.9490022);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(320,0.8203991);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(321,0.8226164);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(322,0.6341463);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(323,0.443459);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(324,0.1286031);
   S12S18_ThetaY_mI20_mI15__825->SetBinContent(325,0.01330377);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(311,0.007680935);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(312,0.0295824);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(313,0.04361932);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(314,0.04708816);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(315,0.04484201);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(316,0.04693129);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(317,0.04666866);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(318,0.04576445);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(319,0.04587175);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(320,0.04265052);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(321,0.04270812);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(322,0.03749786);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(323,0.03135729);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(324,0.01688641);
   S12S18_ThetaY_mI20_mI15__825->SetBinError(325,0.005431241);
   S12S18_ThetaY_mI20_mI15__825->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__825->SetMaximum(1.114819);
   S12S18_ThetaY_mI20_mI15__825->SetEntries(4473);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__825->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__825->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__825->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__825->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__825->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__825->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__825->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__825->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__825->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__825->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__825->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__825->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__825->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__825->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__825->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__825->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__826 = new TH1D("ThetaY_mI20_mI15__826","",630,-1575,1575);
   ThetaY_mI20_mI15__826->SetBinContent(305,0.0001311132);
   ThetaY_mI20_mI15__826->SetBinContent(306,0.05100302);
   ThetaY_mI20_mI15__826->SetBinContent(307,0.304117);
   ThetaY_mI20_mI15__826->SetBinContent(308,0.5798807);
   ThetaY_mI20_mI15__826->SetBinContent(309,0.7532778);
   ThetaY_mI20_mI15__826->SetBinContent(310,0.8523338);
   ThetaY_mI20_mI15__826->SetBinContent(311,0.9306739);
   ThetaY_mI20_mI15__826->SetBinContent(312,0.9682378);
   ThetaY_mI20_mI15__826->SetBinContent(313,0.9930182);
   ThetaY_mI20_mI15__826->SetBinContent(314,1);
   ThetaY_mI20_mI15__826->SetBinContent(315,1.001114);
   ThetaY_mI20_mI15__826->SetBinContent(316,1.013472);
   ThetaY_mI20_mI15__826->SetBinContent(317,1.004327);
   ThetaY_mI20_mI15__826->SetBinContent(318,1.002131);
   ThetaY_mI20_mI15__826->SetBinContent(319,0.9717123);
   ThetaY_mI20_mI15__826->SetBinContent(320,0.92874);
   ThetaY_mI20_mI15__826->SetBinContent(321,0.8498754);
   ThetaY_mI20_mI15__826->SetBinContent(322,0.7364626);
   ThetaY_mI20_mI15__826->SetBinContent(323,0.5803724);
   ThetaY_mI20_mI15__826->SetBinContent(324,0.3042153);
   ThetaY_mI20_mI15__826->SetBinContent(325,0.05231415);
   ThetaY_mI20_mI15__826->SetBinContent(326,9.833486e-05);
   ThetaY_mI20_mI15__826->SetBinError(305,6.555658e-05);
   ThetaY_mI20_mI15__826->SetBinError(306,0.001292978);
   ThetaY_mI20_mI15__826->SetBinError(307,0.003157283);
   ThetaY_mI20_mI15__826->SetBinError(308,0.004359759);
   ThetaY_mI20_mI15__826->SetBinError(309,0.00496902);
   ThetaY_mI20_mI15__826->SetBinError(310,0.005285645);
   ThetaY_mI20_mI15__826->SetBinError(311,0.005523214);
   ThetaY_mI20_mI15__826->SetBinError(312,0.005633576);
   ThetaY_mI20_mI15__826->SetBinError(313,0.005705211);
   ThetaY_mI20_mI15__826->SetBinError(314,0.005725233);
   ThetaY_mI20_mI15__826->SetBinError(315,0.005728422);
   ThetaY_mI20_mI15__826->SetBinError(316,0.005763668);
   ThetaY_mI20_mI15__826->SetBinError(317,0.005737605);
   ThetaY_mI20_mI15__826->SetBinError(318,0.005731328);
   ThetaY_mI20_mI15__826->SetBinError(319,0.005643675);
   ThetaY_mI20_mI15__826->SetBinError(320,0.005517473);
   ThetaY_mI20_mI15__826->SetBinError(321,0.005278017);
   ThetaY_mI20_mI15__826->SetBinError(322,0.004913246);
   ThetaY_mI20_mI15__826->SetBinError(323,0.004361607);
   ThetaY_mI20_mI15__826->SetBinError(324,0.003157793);
   ThetaY_mI20_mI15__826->SetBinError(325,0.001309492);
   ThetaY_mI20_mI15__826->SetBinError(326,5.677366e-05);
   ThetaY_mI20_mI15__826->SetEntries(453883);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__826->SetLineColor(ci);
   ThetaY_mI20_mI15__826->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__826->SetMarkerColor(ci);
   ThetaY_mI20_mI15__826->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__826->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__826->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__826->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__826->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__826->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__826->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__826->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__826->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__826->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__826->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__826->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__826->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__826->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__826->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__826->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__826->Draw("AEsame");
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
   
   Double_t _fx3276[22] = {
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
   Double_t _fy3276[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02858954,
   0.4076256,
   0.8641263,
   1,
   0.9058641,
   0.9801437,
   0.97803,
   0.9425594,
   0.9766288,
   0.8833464,
   0.9679258,
   0.8610707,
   0.7640939,
   0.4227372,
   0.2543054,
   0};
   Double_t _felx3276[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3276[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.00813833,
   0.03061544,
   0.04418588,
   0.0474166,
   0.04507187,
   0.04662358,
   0.04678392,
   0.04596544,
   0.04752734,
   0.04620019,
   0.0505867,
   0.05120815,
   0.05428696,
   0.05551741,
   0.1010338,
   0};
   Double_t _fehx3276[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3276[22] = {
   39.53719,
   0.08008357,
   0.01342409,
   0.007039897,
   0.005419317,
   0.004789476,
   0.01086676,
   0.03300712,
   0.04650671,
   0.04972171,
   0.04737381,
   0.04889753,
   0.04907881,
   0.04826519,
   0.0499002,
   0.04868383,
   0.05330429,
   0.05435044,
   0.0582914,
   0.06334226,
   0.1523459,
   57.3094};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3276,_fy3276,_felx3276,_fehx3276,_fely3276,_fehy3276);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3276 = new TH1F("Graph_Graph3276","",100,-100,100);
   Graph_Graph3276->SetMinimum(0);
   Graph_Graph3276->SetMaximum(1.5);
   Graph_Graph3276->SetDirectory(0);
   Graph_Graph3276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3276->SetLineColor(ci);
   Graph_Graph3276->GetXaxis()->SetRange(1,100);
   Graph_Graph3276->GetXaxis()->CenterTitle(true);
   Graph_Graph3276->GetXaxis()->SetLabelFont(42);
   Graph_Graph3276->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3276->GetXaxis()->SetTitleFont(42);
   Graph_Graph3276->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3276->GetYaxis()->CenterTitle(true);
   Graph_Graph3276->GetYaxis()->SetLabelFont(42);
   Graph_Graph3276->GetYaxis()->SetTitleFont(42);
   Graph_Graph3276->GetZaxis()->SetLabelFont(42);
   Graph_Graph3276->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3276->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3276);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.114819,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__827 = new TH2D("ThetaY_vs_Y_mI20_mI15__827","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(7939,4);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(7965,1556);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(7991,9278);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8017,17691);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8043,22981);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8069,26003);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8095,28393);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8121,29539);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8147,30295);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8173,30508);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8199,30542);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8225,30919);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8251,30640);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8277,30573);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8303,29645);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8329,28334);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8355,25928);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8381,22468);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8407,17706);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8433,9281);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8459,1596);
   ThetaY_vs_Y_mI20_mI15__827->SetBinContent(8485,3);
   ThetaY_vs_Y_mI20_mI15__827->SetEntries(453883);
   ThetaY_vs_Y_mI20_mI15__827->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(1,1545.95);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(2,3091.9);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(3,4637.85);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(4,6183.8);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(5,7729.75);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(6,9275.7);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(7,10821.65);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(8,12367.6);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(9,13913.55);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(10,15459.5);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(11,17005.45);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(12,18551.4);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(13,20097.35);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(14,21643.3);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(15,23189.25);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(16,24735.2);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(17,26281.15);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(18,27827.1);
   ThetaY_vs_Y_mI20_mI15__827->SetContourLevel(19,29373.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__827->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__827->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__827->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__827->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__827->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__827->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__827->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__827->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__827->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__827->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__827->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__827->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__827->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__827->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__827->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__827->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-20_-15","Reco vertices","lpf");
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
