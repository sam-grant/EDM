void S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.0882026,125,1.675849);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__417 = new TH1D("S18_ThetaY_mI35_mI30__417","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__417->SetBinContent(313,0.06666667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(314,0.2);
   S18_ThetaY_mI35_mI30__417->SetBinContent(315,0.8666667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(316,0.9333333);
   S18_ThetaY_mI35_mI30__417->SetBinContent(317,0.9333333);
   S18_ThetaY_mI35_mI30__417->SetBinContent(318,1.266667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(319,1.266667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(320,1.066667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(321,0.7333333);
   S18_ThetaY_mI35_mI30__417->SetBinContent(322,1.066667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(323,1.133333);
   S18_ThetaY_mI35_mI30__417->SetBinContent(324,0.6666667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(325,0.6);
   S18_ThetaY_mI35_mI30__417->SetBinContent(326,1);
   S18_ThetaY_mI35_mI30__417->SetBinContent(327,0.4666667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(328,0.4);
   S18_ThetaY_mI35_mI30__417->SetBinContent(329,0.06666667);
   S18_ThetaY_mI35_mI30__417->SetBinContent(330,0.06666667);
   S18_ThetaY_mI35_mI30__417->SetBinError(313,0.06666667);
   S18_ThetaY_mI35_mI30__417->SetBinError(314,0.1154701);
   S18_ThetaY_mI35_mI30__417->SetBinError(315,0.2403701);
   S18_ThetaY_mI35_mI30__417->SetBinError(316,0.2494438);
   S18_ThetaY_mI35_mI30__417->SetBinError(317,0.2494438);
   S18_ThetaY_mI35_mI30__417->SetBinError(318,0.2905933);
   S18_ThetaY_mI35_mI30__417->SetBinError(319,0.2905933);
   S18_ThetaY_mI35_mI30__417->SetBinError(320,0.2666667);
   S18_ThetaY_mI35_mI30__417->SetBinError(321,0.2211083);
   S18_ThetaY_mI35_mI30__417->SetBinError(322,0.2666667);
   S18_ThetaY_mI35_mI30__417->SetBinError(323,0.2748737);
   S18_ThetaY_mI35_mI30__417->SetBinError(324,0.2108185);
   S18_ThetaY_mI35_mI30__417->SetBinError(325,0.2);
   S18_ThetaY_mI35_mI30__417->SetBinError(326,0.2581989);
   S18_ThetaY_mI35_mI30__417->SetBinError(327,0.1763834);
   S18_ThetaY_mI35_mI30__417->SetBinError(328,0.1632993);
   S18_ThetaY_mI35_mI30__417->SetBinError(329,0.06666667);
   S18_ThetaY_mI35_mI30__417->SetBinError(330,0.06666667);
   S18_ThetaY_mI35_mI30__417->SetMinimum(0);
   S18_ThetaY_mI35_mI30__417->SetMaximum(1.499444);
   S18_ThetaY_mI35_mI30__417->SetEntries(192);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__417->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__417->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__417->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__417->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__417->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__417->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__417->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__417->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__417->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__417->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__417->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__417->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__417->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__417->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__417->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__417->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__418 = new TH1D("ThetaY_mI35_mI30__418","",630,-1575,1575);
   ThetaY_mI35_mI30__418->SetBinContent(300,0.006947661);
   ThetaY_mI35_mI30__418->SetBinContent(301,0.08244558);
   ThetaY_mI35_mI30__418->SetBinContent(302,0.2681797);
   ThetaY_mI35_mI30__418->SetBinContent(303,0.5088004);
   ThetaY_mI35_mI30__418->SetBinContent(304,0.8045391);
   ThetaY_mI35_mI30__418->SetBinContent(305,1.01598);
   ThetaY_mI35_mI30__418->SetBinContent(306,1.110468);
   ThetaY_mI35_mI30__418->SetBinContent(307,1.217462);
   ThetaY_mI35_mI30__418->SetBinContent(308,1.296897);
   ThetaY_mI35_mI30__418->SetBinContent(309,1.331403);
   ThetaY_mI35_mI30__418->SetBinContent(310,1.363131);
   ThetaY_mI35_mI30__418->SetBinContent(311,1.326772);
   ThetaY_mI35_mI30__418->SetBinContent(312,1.34252);
   ThetaY_mI35_mI30__418->SetBinContent(313,1.321677);
   ThetaY_mI35_mI30__418->SetBinContent(314,1.318434);
   ThetaY_mI35_mI30__418->SetBinContent(315,1.320519);
   ThetaY_mI35_mI30__418->SetBinContent(316,1.347383);
   ThetaY_mI35_mI30__418->SetBinContent(317,1.293654);
   ThetaY_mI35_mI30__418->SetBinContent(318,1.343678);
   ThetaY_mI35_mI30__418->SetBinContent(319,1.353173);
   ThetaY_mI35_mI30__418->SetBinContent(320,1.355257);
   ThetaY_mI35_mI30__418->SetBinContent(321,1.35132);
   ThetaY_mI35_mI30__418->SetBinContent(322,1.298518);
   ThetaY_mI35_mI30__418->SetBinContent(323,1.285086);
   ThetaY_mI35_mI30__418->SetBinContent(324,1.227189);
   ThetaY_mI35_mI30__418->SetBinContent(325,1.148217);
   ThetaY_mI35_mI30__418->SetBinContent(326,1);
   ThetaY_mI35_mI30__418->SetBinContent(327,0.7788328);
   ThetaY_mI35_mI30__418->SetBinContent(328,0.5280222);
   ThetaY_mI35_mI30__418->SetBinContent(329,0.254516);
   ThetaY_mI35_mI30__418->SetBinContent(330,0.08429829);
   ThetaY_mI35_mI30__418->SetBinContent(331,0.005789717);
   ThetaY_mI35_mI30__418->SetBinError(300,0.001268464);
   ThetaY_mI35_mI30__418->SetBinError(301,0.004369607);
   ThetaY_mI35_mI30__418->SetBinError(302,0.007880824);
   ThetaY_mI35_mI30__418->SetBinError(303,0.01085506);
   ThetaY_mI35_mI30__418->SetBinError(304,0.01364999);
   ThetaY_mI35_mI30__418->SetBinError(305,0.01533915);
   ThetaY_mI35_mI30__418->SetBinError(306,0.01603658);
   ThetaY_mI35_mI30__418->SetBinError(307,0.01679138);
   ThetaY_mI35_mI30__418->SetBinError(308,0.01733051);
   ThetaY_mI35_mI30__418->SetBinError(309,0.01755956);
   ThetaY_mI35_mI30__418->SetBinError(310,0.01776755);
   ThetaY_mI35_mI30__418->SetBinError(311,0.01752899);
   ThetaY_mI35_mI30__418->SetBinError(312,0.01763271);
   ThetaY_mI35_mI30__418->SetBinError(313,0.0174953);
   ThetaY_mI35_mI30__418->SetBinError(314,0.01747382);
   ThetaY_mI35_mI30__418->SetBinError(315,0.01748763);
   ThetaY_mI35_mI30__418->SetBinError(316,0.01766462);
   ThetaY_mI35_mI30__418->SetBinError(317,0.01730883);
   ThetaY_mI35_mI30__418->SetBinError(318,0.01764031);
   ThetaY_mI35_mI30__418->SetBinError(319,0.01770253);
   ThetaY_mI35_mI30__418->SetBinError(320,0.01771616);
   ThetaY_mI35_mI30__418->SetBinError(321,0.01769041);
   ThetaY_mI35_mI30__418->SetBinError(322,0.01734134);
   ThetaY_mI35_mI30__418->SetBinError(323,0.01725142);
   ThetaY_mI35_mI30__418->SetBinError(324,0.01685832);
   ThetaY_mI35_mI30__418->SetBinError(325,0.01630687);
   ThetaY_mI35_mI30__418->SetBinError(326,0.01521804);
   ThetaY_mI35_mI30__418->SetBinError(327,0.01343015);
   ThetaY_mI35_mI30__418->SetBinError(328,0.01105821);
   ThetaY_mI35_mI30__418->SetBinError(329,0.007677436);
   ThetaY_mI35_mI30__418->SetBinError(330,0.004418431);
   ThetaY_mI35_mI30__418->SetBinError(331,0.001157943);
   ThetaY_mI35_mI30__418->SetEntries(135115);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__418->SetLineColor(ci);
   ThetaY_mI35_mI30__418->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__418->SetMarkerColor(ci);
   ThetaY_mI35_mI30__418->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__418->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__418->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__418->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__418->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__418->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__418->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__418->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__418->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__418->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__418->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__418->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__418->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__418->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__418->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__418->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__418->Draw("AEsame");
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
   
   Double_t _fx3140[32] = {
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
   Double_t _fy3140[32] = {
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
   0,
   0,
   0,
   0.05044098,
   0.1516951,
   0.6563077,
   0.6927008,
   0.7214703,
   0.9426864,
   0.9360717,
   0.7870586,
   0.5426792,
   0.8214494,
   0.8819127,
   0.5432472,
   0.5225494,
   1,
   0.5991872,
   0.7575439,
   0.2619351,
   0.7908425,
   0};
   Double_t _felx3140[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3140[32] = {
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
   0,
   0,
   0,
   0.0417285,
   0.08257373,
   0.1798502,
   0.1831034,
   0.190717,
   0.2146816,
   0.2131729,
   0.1949395,
   0.161245,
   0.2034689,
   0.2120789,
   0.169024,
   0.1710402,
   0.255708,
   0.2211704,
   0.3008222,
   0.2167224,
   0.6545635,
   0};
   Double_t _fehx3140[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3140[32] = {
   18.21893,
   1.492532,
   0.4580227,
   0.2413249,
   0.1525933,
   0.1208297,
   0.1105465,
   0.1008297,
   0.09465284,
   0.09219927,
   0.09005295,
   0.0925212,
   0.09143573,
   0.1160239,
   0.1476348,
   0.2375259,
   0.2393873,
   0.2493464,
   0.2702353,
   0.2683351,
   0.2504922,
   0.2181745,
   0.261458,
   0.2704944,
   0.2321128,
   0.2389582,
   0.3313463,
   0.3232459,
   0.4534119,
   0.6032314,
   1.826819,
   21.99882};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3140,_fy3140,_felx3140,_fehx3140,_fely3140,_fehy3140);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3140 = new TH1F("Graph_Graph3140","",100,-100,100);
   Graph_Graph3140->SetMinimum(0);
   Graph_Graph3140->SetMaximum(1.5);
   Graph_Graph3140->SetDirectory(0);
   Graph_Graph3140->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3140->SetLineColor(ci);
   Graph_Graph3140->GetXaxis()->SetRange(1,100);
   Graph_Graph3140->GetXaxis()->CenterTitle(true);
   Graph_Graph3140->GetXaxis()->SetLabelFont(42);
   Graph_Graph3140->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3140->GetXaxis()->SetTitleFont(42);
   Graph_Graph3140->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3140->GetYaxis()->CenterTitle(true);
   Graph_Graph3140->GetYaxis()->SetLabelFont(42);
   Graph_Graph3140->GetYaxis()->SetTitleFont(42);
   Graph_Graph3140->GetZaxis()->SetLabelFont(42);
   Graph_Graph3140->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3140->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3140);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.499444,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__419 = new TH2D("ThetaY_vs_Y_mI35_mI30__419","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7806,30);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7832,356);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7858,1158);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7884,2197);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7910,3474);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7936,4387);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7962,4795);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(7988,5257);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8014,5600);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8040,5749);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8066,5886);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8092,5729);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8118,5797);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8144,5707);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8170,5693);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8196,5702);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8222,5818);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8248,5586);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8274,5802);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8300,5843);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8326,5852);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8352,5835);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8378,5607);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8404,5549);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8430,5299);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8456,4958);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8482,4318);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8508,3363);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8534,2280);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8560,1099);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8586,364);
   ThetaY_vs_Y_mI35_mI30__419->SetBinContent(8612,25);
   ThetaY_vs_Y_mI35_mI30__419->SetEntries(135115);
   ThetaY_vs_Y_mI35_mI30__419->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(1,294.3);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(2,588.6);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(3,882.9);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(4,1177.2);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(5,1471.5);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(6,1765.8);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(7,2060.1);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(8,2354.4);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(9,2648.7);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(10,2943);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(11,3237.3);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(12,3531.6);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(13,3825.9);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(14,4120.2);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(15,4414.5);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(16,4708.8);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(17,5003.1);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(18,5297.4);
   ThetaY_vs_Y_mI35_mI30__419->SetContourLevel(19,5591.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__419->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__419->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__419->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__419->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__419->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__419->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__419->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__419->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__419->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__419->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__419->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__419->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__419->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__419->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__419->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__419->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
