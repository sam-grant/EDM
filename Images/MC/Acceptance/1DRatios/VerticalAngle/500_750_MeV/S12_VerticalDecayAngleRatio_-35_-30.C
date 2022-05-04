void S12_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:39 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07681703,125,1.459524);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__360 = new TH1D("S12_ThetaY_mI35_mI30__360","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__360->SetBinContent(313,0.1);
   S12_ThetaY_mI35_mI30__360->SetBinContent(314,0.6);
   S12_ThetaY_mI35_mI30__360->SetBinContent(315,0.7);
   S12_ThetaY_mI35_mI30__360->SetBinContent(316,0.55);
   S12_ThetaY_mI35_mI30__360->SetBinContent(317,0.85);
   S12_ThetaY_mI35_mI30__360->SetBinContent(318,0.8);
   S12_ThetaY_mI35_mI30__360->SetBinContent(319,0.6);
   S12_ThetaY_mI35_mI30__360->SetBinContent(320,1.15);
   S12_ThetaY_mI35_mI30__360->SetBinContent(321,0.6);
   S12_ThetaY_mI35_mI30__360->SetBinContent(322,0.85);
   S12_ThetaY_mI35_mI30__360->SetBinContent(323,0.5);
   S12_ThetaY_mI35_mI30__360->SetBinContent(324,0.75);
   S12_ThetaY_mI35_mI30__360->SetBinContent(325,1);
   S12_ThetaY_mI35_mI30__360->SetBinContent(326,0.5);
   S12_ThetaY_mI35_mI30__360->SetBinContent(327,0.5);
   S12_ThetaY_mI35_mI30__360->SetBinContent(328,0.4);
   S12_ThetaY_mI35_mI30__360->SetBinContent(330,0.05);
   S12_ThetaY_mI35_mI30__360->SetBinError(313,0.07071068);
   S12_ThetaY_mI35_mI30__360->SetBinError(314,0.1732051);
   S12_ThetaY_mI35_mI30__360->SetBinError(315,0.1870829);
   S12_ThetaY_mI35_mI30__360->SetBinError(316,0.1658312);
   S12_ThetaY_mI35_mI30__360->SetBinError(317,0.2061553);
   S12_ThetaY_mI35_mI30__360->SetBinError(318,0.2);
   S12_ThetaY_mI35_mI30__360->SetBinError(319,0.1732051);
   S12_ThetaY_mI35_mI30__360->SetBinError(320,0.2397916);
   S12_ThetaY_mI35_mI30__360->SetBinError(321,0.1732051);
   S12_ThetaY_mI35_mI30__360->SetBinError(322,0.2061553);
   S12_ThetaY_mI35_mI30__360->SetBinError(323,0.1581139);
   S12_ThetaY_mI35_mI30__360->SetBinError(324,0.1936492);
   S12_ThetaY_mI35_mI30__360->SetBinError(325,0.2236068);
   S12_ThetaY_mI35_mI30__360->SetBinError(326,0.1581139);
   S12_ThetaY_mI35_mI30__360->SetBinError(327,0.1581139);
   S12_ThetaY_mI35_mI30__360->SetBinError(328,0.1414214);
   S12_ThetaY_mI35_mI30__360->SetBinError(330,0.05);
   S12_ThetaY_mI35_mI30__360->SetMinimum(0);
   S12_ThetaY_mI35_mI30__360->SetMaximum(1.305889);
   S12_ThetaY_mI35_mI30__360->SetEntries(210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__360->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__360->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__360->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__360->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__360->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__360->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__360->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__360->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__360->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__360->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__360->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__360->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__360->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__360->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__360->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__360->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__361 = new TH1D("ThetaY_mI35_mI30__361","",630,-1575,1575);
   ThetaY_mI35_mI30__361->SetBinContent(300,0.006050827);
   ThetaY_mI35_mI30__361->SetBinContent(301,0.07180315);
   ThetaY_mI35_mI30__361->SetBinContent(302,0.2335619);
   ThetaY_mI35_mI30__361->SetBinContent(303,0.4431222);
   ThetaY_mI35_mI30__361->SetBinContent(304,0.7006858);
   ThetaY_mI35_mI30__361->SetBinContent(305,0.8848326);
   ThetaY_mI35_mI30__361->SetBinContent(306,0.9671238);
   ThetaY_mI35_mI30__361->SetBinContent(307,1.060307);
   ThetaY_mI35_mI30__361->SetBinContent(308,1.129488);
   ThetaY_mI35_mI30__361->SetBinContent(309,1.15954);
   ThetaY_mI35_mI30__361->SetBinContent(310,1.187172);
   ThetaY_mI35_mI30__361->SetBinContent(311,1.155506);
   ThetaY_mI35_mI30__361->SetBinContent(312,1.169221);
   ThetaY_mI35_mI30__361->SetBinContent(313,1.151069);
   ThetaY_mI35_mI30__361->SetBinContent(314,1.148245);
   ThetaY_mI35_mI30__361->SetBinContent(315,1.150061);
   ThetaY_mI35_mI30__361->SetBinContent(316,1.173457);
   ThetaY_mI35_mI30__361->SetBinContent(317,1.126664);
   ThetaY_mI35_mI30__361->SetBinContent(318,1.17023);
   ThetaY_mI35_mI30__361->SetBinContent(319,1.178499);
   ThetaY_mI35_mI30__361->SetBinContent(320,1.180315);
   ThetaY_mI35_mI30__361->SetBinContent(321,1.176886);
   ThetaY_mI35_mI30__361->SetBinContent(322,1.1309);
   ThetaY_mI35_mI30__361->SetBinContent(323,1.119201);
   ThetaY_mI35_mI30__361->SetBinContent(324,1.068778);
   ThetaY_mI35_mI30__361->SetBinContent(325,1);
   ThetaY_mI35_mI30__361->SetBinContent(326,0.8709157);
   ThetaY_mI35_mI30__361->SetBinContent(327,0.6782977);
   ThetaY_mI35_mI30__361->SetBinContent(328,0.4598628);
   ThetaY_mI35_mI30__361->SetBinContent(329,0.221662);
   ThetaY_mI35_mI30__361->SetBinContent(330,0.0734167);
   ThetaY_mI35_mI30__361->SetBinContent(331,0.005042356);
   ThetaY_mI35_mI30__361->SetBinError(300,0.001104725);
   ThetaY_mI35_mI30__361->SetBinError(301,0.003805559);
   ThetaY_mI35_mI30__361->SetBinError(302,0.006863533);
   ThetaY_mI35_mI30__361->SetBinError(303,0.009453846);
   ThetaY_mI35_mI30__361->SetBinError(304,0.01188799);
   ThetaY_mI35_mI30__361->SetBinError(305,0.0133591);
   ThetaY_mI35_mI30__361->SetBinError(306,0.01396651);
   ThetaY_mI35_mI30__361->SetBinError(307,0.01462387);
   ThetaY_mI35_mI30__361->SetBinError(308,0.01509341);
   ThetaY_mI35_mI30__361->SetBinError(309,0.01529289);
   ThetaY_mI35_mI30__361->SetBinError(310,0.01547404);
   ThetaY_mI35_mI30__361->SetBinError(311,0.01526627);
   ThetaY_mI35_mI30__361->SetBinError(312,0.0153566);
   ThetaY_mI35_mI30__361->SetBinError(313,0.01523693);
   ThetaY_mI35_mI30__361->SetBinError(314,0.01521823);
   ThetaY_mI35_mI30__361->SetBinError(315,0.01523025);
   ThetaY_mI35_mI30__361->SetBinError(316,0.01538439);
   ThetaY_mI35_mI30__361->SetBinError(317,0.01507454);
   ThetaY_mI35_mI30__361->SetBinError(318,0.01536322);
   ThetaY_mI35_mI30__361->SetBinError(319,0.01541741);
   ThetaY_mI35_mI30__361->SetBinError(320,0.01542928);
   ThetaY_mI35_mI30__361->SetBinError(321,0.01540685);
   ThetaY_mI35_mI30__361->SetBinError(322,0.01510284);
   ThetaY_mI35_mI30__361->SetBinError(323,0.01502453);
   ThetaY_mI35_mI30__361->SetBinError(324,0.01468218);
   ThetaY_mI35_mI30__361->SetBinError(325,0.01420191);
   ThetaY_mI35_mI30__361->SetBinError(326,0.01325363);
   ThetaY_mI35_mI30__361->SetBinError(327,0.01169653);
   ThetaY_mI35_mI30__361->SetBinError(328,0.009630768);
   ThetaY_mI35_mI30__361->SetBinError(329,0.0066864);
   ThetaY_mI35_mI30__361->SetBinError(330,0.003848081);
   ThetaY_mI35_mI30__361->SetBinError(331,0.001008471);
   ThetaY_mI35_mI30__361->SetEntries(135115);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__361->SetLineColor(ci);
   ThetaY_mI35_mI30__361->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__361->SetMarkerColor(ci);
   ThetaY_mI35_mI30__361->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__361->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__361->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__361->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__361->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__361->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__361->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__361->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__361->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__361->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__361->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__361->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__361->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__361->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__361->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__361->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__361->Draw("AEsame");
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
   
   Double_t _fx3121[32] = {
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
   Double_t _fy3121[32] = {
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
   0.08687577,
   0.5225364,
   0.6086636,
   0.4687006,
   0.7544397,
   0.6836263,
   0.509122,
   0.9743165,
   0.5098201,
   0.7516141,
   0.4467472,
   0.7017362,
   1,
   0.5741084,
   0.7371395,
   0.8698246,
   0,
   0.681044,
   0};
   Double_t _felx3121[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3121[32] = {
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
   0.05611987,
   0.1488616,
   0.1608933,
   0.1392643,
   0.181423,
   0.1693232,
   0.1450364,
   0.2020514,
   0.1452355,
   0.1807425,
   0.138994,
   0.1793856,
   0.2221484,
   0.1786608,
   0.2294641,
   0.3014708,
   0,
   0.5636856,
   0};
   Double_t _fehx3121[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3121[32] = {
   15.68946,
   1.285313,
   0.394432,
   0.20782,
   0.1314077,
   0.104054,
   0.09519852,
   0.08683074,
   0.08151148,
   0.07939856,
   0.07755023,
   0.07967579,
   0.07874103,
   0.1146296,
   0.1988447,
   0.2103522,
   0.1884334,
   0.2313937,
   0.2175768,
   0.1937328,
   0.2490731,
   0.1939988,
   0.2305253,
   0.1908698,
   0.2324185,
   0.2780401,
   0.2453738,
   0.3152007,
   0.4300711,
   0.4156249,
   1.573188,
   18.94456};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3121,_fy3121,_felx3121,_fehx3121,_fely3121,_fehy3121);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3121 = new TH1F("Graph_Graph3121","",100,-100,100);
   Graph_Graph3121->SetMinimum(0);
   Graph_Graph3121->SetMaximum(1.5);
   Graph_Graph3121->SetDirectory(0);
   Graph_Graph3121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3121->SetLineColor(ci);
   Graph_Graph3121->GetXaxis()->SetRange(1,100);
   Graph_Graph3121->GetXaxis()->CenterTitle(true);
   Graph_Graph3121->GetXaxis()->SetLabelFont(42);
   Graph_Graph3121->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3121->GetXaxis()->SetTitleFont(42);
   Graph_Graph3121->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3121->GetYaxis()->CenterTitle(true);
   Graph_Graph3121->GetYaxis()->SetLabelFont(42);
   Graph_Graph3121->GetYaxis()->SetTitleFont(42);
   Graph_Graph3121->GetZaxis()->SetLabelFont(42);
   Graph_Graph3121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3121->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3121);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.305889,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__362 = new TH2D("ThetaY_vs_Y_mI35_mI30__362","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7806,30);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7832,356);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7858,1158);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7884,2197);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7910,3474);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7936,4387);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7962,4795);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(7988,5257);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8014,5600);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8040,5749);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8066,5886);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8092,5729);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8118,5797);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8144,5707);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8170,5693);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8196,5702);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8222,5818);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8248,5586);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8274,5802);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8300,5843);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8326,5852);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8352,5835);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8378,5607);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8404,5549);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8430,5299);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8456,4958);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8482,4318);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8508,3363);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8534,2280);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8560,1099);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8586,364);
   ThetaY_vs_Y_mI35_mI30__362->SetBinContent(8612,25);
   ThetaY_vs_Y_mI35_mI30__362->SetEntries(135115);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__362->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__362->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__362->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__362->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__362->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__362->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__362->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__362->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__362->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__362->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__362->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__362->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__362->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__362->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__362->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__362->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
