void S18_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.06657608,125,1.264945);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__420 = new TH1D("S18_ThetaY_mI30_mI25__420","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__420->SetBinContent(312,0.08333333);
   S18_ThetaY_mI30_mI25__420->SetBinContent(313,0.5);
   S18_ThetaY_mI30_mI25__420->SetBinContent(314,0.9722222);
   S18_ThetaY_mI30_mI25__420->SetBinContent(315,1);
   S18_ThetaY_mI30_mI25__420->SetBinContent(316,0.7777778);
   S18_ThetaY_mI30_mI25__420->SetBinContent(317,0.7222222);
   S18_ThetaY_mI30_mI25__420->SetBinContent(318,0.7222222);
   S18_ThetaY_mI30_mI25__420->SetBinContent(319,0.6666667);
   S18_ThetaY_mI30_mI25__420->SetBinContent(320,0.8055556);
   S18_ThetaY_mI30_mI25__420->SetBinContent(321,0.5833333);
   S18_ThetaY_mI30_mI25__420->SetBinContent(322,0.7777778);
   S18_ThetaY_mI30_mI25__420->SetBinContent(323,0.9722222);
   S18_ThetaY_mI30_mI25__420->SetBinContent(324,0.9166667);
   S18_ThetaY_mI30_mI25__420->SetBinContent(325,0.3888889);
   S18_ThetaY_mI30_mI25__420->SetBinContent(326,0.6388889);
   S18_ThetaY_mI30_mI25__420->SetBinContent(327,0.4444444);
   S18_ThetaY_mI30_mI25__420->SetBinContent(328,0.1388889);
   S18_ThetaY_mI30_mI25__420->SetBinContent(329,0.08333333);
   S18_ThetaY_mI30_mI25__420->SetBinError(312,0.04811252);
   S18_ThetaY_mI30_mI25__420->SetBinError(313,0.1178511);
   S18_ThetaY_mI30_mI25__420->SetBinError(314,0.1643355);
   S18_ThetaY_mI30_mI25__420->SetBinError(315,0.1666667);
   S18_ThetaY_mI30_mI25__420->SetBinError(316,0.1469862);
   S18_ThetaY_mI30_mI25__420->SetBinError(317,0.1416394);
   S18_ThetaY_mI30_mI25__420->SetBinError(318,0.1416394);
   S18_ThetaY_mI30_mI25__420->SetBinError(319,0.1360828);
   S18_ThetaY_mI30_mI25__420->SetBinError(320,0.1495879);
   S18_ThetaY_mI30_mI25__420->SetBinError(321,0.1272938);
   S18_ThetaY_mI30_mI25__420->SetBinError(322,0.1469862);
   S18_ThetaY_mI30_mI25__420->SetBinError(323,0.1643355);
   S18_ThetaY_mI30_mI25__420->SetBinError(324,0.1595712);
   S18_ThetaY_mI30_mI25__420->SetBinError(325,0.1039349);
   S18_ThetaY_mI30_mI25__420->SetBinError(326,0.1332175);
   S18_ThetaY_mI30_mI25__420->SetBinError(327,0.1111111);
   S18_ThetaY_mI30_mI25__420->SetBinError(328,0.062113);
   S18_ThetaY_mI30_mI25__420->SetBinError(329,0.04811252);
   S18_ThetaY_mI30_mI25__420->SetMinimum(0);
   S18_ThetaY_mI30_mI25__420->SetMaximum(1.131793);
   S18_ThetaY_mI30_mI25__420->SetEntries(403);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__420->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__420->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__420->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__420->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__420->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__420->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__420->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__420->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__420->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__420->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__420->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__420->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__420->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__420->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__420->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__420->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__421 = new TH1D("ThetaY_mI30_mI25__421","",630,-1575,1575);
   ThetaY_mI30_mI25__421->SetBinContent(300,0.00611209);
   ThetaY_mI30_mI25__421->SetBinContent(301,0.06433233);
   ThetaY_mI30_mI25__421->SetBinContent(302,0.1998342);
   ThetaY_mI30_mI25__421->SetBinContent(303,0.3998757);
   ThetaY_mI30_mI25__421->SetBinContent(304,0.6104838);
   ThetaY_mI30_mI25__421->SetBinContent(305,0.7591422);
   ThetaY_mI30_mI25__421->SetBinContent(306,0.8544494);
   ThetaY_mI30_mI25__421->SetBinContent(307,0.9257226);
   ThetaY_mI30_mI25__421->SetBinContent(308,0.9880866);
   ThetaY_mI30_mI25__421->SetBinContent(309,0.9986533);
   ThetaY_mI30_mI25__421->SetBinContent(310,1.020512);
   ThetaY_mI30_mI25__421->SetBinContent(311,1.028903);
   ThetaY_mI30_mI25__421->SetBinContent(312,1.008391);
   ThetaY_mI30_mI25__421->SetBinContent(313,1.019165);
   ThetaY_mI30_mI25__421->SetBinContent(314,1.002279);
   ThetaY_mI30_mI25__421->SetBinContent(315,1);
   ThetaY_mI30_mI25__421->SetBinContent(316,0.9976173);
   ThetaY_mI30_mI25__421->SetBinContent(317,1.024552);
   ThetaY_mI30_mI25__421->SetBinContent(318,1.000829);
   ThetaY_mI30_mI25__421->SetBinContent(319,1.027867);
   ThetaY_mI30_mI25__421->SetBinContent(320,1.006941);
   ThetaY_mI30_mI25__421->SetBinContent(321,1.013778);
   ThetaY_mI30_mI25__421->SetBinContent(322,0.9862219);
   ThetaY_mI30_mI25__421->SetBinContent(323,0.9779343);
   ThetaY_mI30_mI25__421->SetBinContent(324,0.9456128);
   ThetaY_mI30_mI25__421->SetBinContent(325,0.8600435);
   ThetaY_mI30_mI25__421->SetBinContent(326,0.7504403);
   ThetaY_mI30_mI25__421->SetBinContent(327,0.6128665);
   ThetaY_mI30_mI25__421->SetBinContent(328,0.3825754);
   ThetaY_mI30_mI25__421->SetBinContent(329,0.1933078);
   ThetaY_mI30_mI25__421->SetBinContent(330,0.06132808);
   ThetaY_mI30_mI25__421->SetBinContent(331,0.005490521);
   ThetaY_mI30_mI25__421->SetBinError(300,0.0007957263);
   ThetaY_mI30_mI25__421->SetBinError(301,0.002581568);
   ThetaY_mI30_mI25__421->SetBinError(302,0.00454992);
   ThetaY_mI30_mI25__421->SetBinError(303,0.006436227);
   ThetaY_mI30_mI25__421->SetBinError(304,0.007952541);
   ThetaY_mI30_mI25__421->SetBinError(305,0.008868097);
   ThetaY_mI30_mI25__421->SetBinError(306,0.009408319);
   ThetaY_mI30_mI25__421->SetBinError(307,0.009792854);
   ThetaY_mI30_mI25__421->SetBinError(308,0.01011734);
   ThetaY_mI30_mI25__421->SetBinError(309,0.01017129);
   ThetaY_mI30_mI25__421->SetBinError(310,0.01028201);
   ThetaY_mI30_mI25__421->SetBinError(311,0.01032419);
   ThetaY_mI30_mI25__421->SetBinError(312,0.01022076);
   ThetaY_mI30_mI25__421->SetBinError(313,0.01027522);
   ThetaY_mI30_mI25__421->SetBinError(314,0.01018974);
   ThetaY_mI30_mI25__421->SetBinError(315,0.01017815);
   ThetaY_mI30_mI25__421->SetBinError(316,0.01016602);
   ThetaY_mI30_mI25__421->SetBinError(317,0.01030234);
   ThetaY_mI30_mI25__421->SetBinError(318,0.01018237);
   ThetaY_mI30_mI25__421->SetBinError(319,0.01031899);
   ThetaY_mI30_mI25__421->SetBinError(320,0.01021341);
   ThetaY_mI30_mI25__421->SetBinError(321,0.01024803);
   ThetaY_mI30_mI25__421->SetBinError(322,0.01010779);
   ThetaY_mI30_mI25__421->SetBinError(323,0.01006523);
   ThetaY_mI30_mI25__421->SetBinError(324,0.0098975);
   ThetaY_mI30_mI25__421->SetBinError(325,0.009439067);
   ThetaY_mI30_mI25__421->SetBinError(326,0.008817123);
   ThetaY_mI30_mI25__421->SetBinError(327,0.007968045);
   ThetaY_mI30_mI25__421->SetBinError(328,0.006295458);
   ThetaY_mI30_mI25__421->SetBinError(329,0.004475005);
   ThetaY_mI30_mI25__421->SetBinError(330,0.002520569);
   ThetaY_mI30_mI25__421->SetBinError(331,0.0007541811);
   ThetaY_mI30_mI25__421->SetEntries(229098);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__421->SetLineColor(ci);
   ThetaY_mI30_mI25__421->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__421->SetMarkerColor(ci);
   ThetaY_mI30_mI25__421->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__421->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__421->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__421->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__421->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__421->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__421->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__421->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__421->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__421->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__421->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__421->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__421->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__421->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__421->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__421->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__421->Draw("AEsame");
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
   
   Double_t _fx3141[32] = {
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
   Double_t _fy3141[32] = {
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
   0.08263989,
   0.4905977,
   0.9700115,
   1,
   0.7796354,
   0.7049152,
   0.7216242,
   0.6485924,
   0.8000029,
   0.5754053,
   0.7886438,
   0.994159,
   0.9693891,
   0.4521735,
   0.8513521,
   0.7251897,
   0.3630367,
   0.4310915,
   0,
   0};
   Double_t _felx3141[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3141[32] = {
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
   0.0449806,
   0.1146509,
   0.1634615,
   0.1661897,
   0.1466577,
   0.1375243,
   0.1407884,
   0.1316173,
   0.1479082,
   0.1246839,
   0.1483546,
   0.1675381,
   0.1681839,
   0.119484,
   0.1764876,
   0.1796133,
   0.1568976,
   0.2347535,
   0,
   0};
   Double_t _fehx3141[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3141[32] = {
   8.498849,
   0.7961062,
   0.2560317,
   0.127919,
   0.08378188,
   0.0673733,
   0.05985749,
   0.05524847,
   0.05176108,
   0.05121334,
   0.0501163,
   0.04970754,
   0.08041062,
   0.1451982,
   0.1936566,
   0.1964242,
   0.1772494,
   0.1673996,
   0.1713741,
   0.1614979,
   0.1781736,
   0.1551644,
   0.1793012,
   0.1984881,
   0.2002637,
   0.1561891,
   0.2175358,
   0.2307971,
   0.2458711,
   0.4200001,
   0.8351653,
   9.4778};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3141,_fy3141,_felx3141,_fehx3141,_fely3141,_fehy3141);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3141 = new TH1F("Graph_Graph3141","",100,-100,100);
   Graph_Graph3141->SetMinimum(0);
   Graph_Graph3141->SetMaximum(1.5);
   Graph_Graph3141->SetDirectory(0);
   Graph_Graph3141->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3141->SetLineColor(ci);
   Graph_Graph3141->GetXaxis()->SetRange(1,100);
   Graph_Graph3141->GetXaxis()->CenterTitle(true);
   Graph_Graph3141->GetXaxis()->SetLabelFont(42);
   Graph_Graph3141->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3141->GetXaxis()->SetTitleFont(42);
   Graph_Graph3141->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3141->GetYaxis()->CenterTitle(true);
   Graph_Graph3141->GetYaxis()->SetLabelFont(42);
   Graph_Graph3141->GetYaxis()->SetTitleFont(42);
   Graph_Graph3141->GetZaxis()->SetLabelFont(42);
   Graph_Graph3141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3141->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3141);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.131793,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__422 = new TH2D("ThetaY_vs_Y_mI30_mI25__422","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7807,59);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7833,621);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7859,1929);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7885,3860);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7911,5893);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7937,7328);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7963,8248);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(7989,8936);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8015,9538);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8041,9640);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8067,9851);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8093,9932);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8119,9734);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8145,9838);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8171,9675);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8197,9653);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8223,9630);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8249,9890);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8275,9661);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8301,9922);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8327,9720);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8353,9786);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8379,9520);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8405,9440);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8431,9128);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8457,8302);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8483,7244);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8509,5916);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8535,3693);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8561,1866);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8587,592);
   ThetaY_vs_Y_mI30_mI25__422->SetBinContent(8613,53);
   ThetaY_vs_Y_mI30_mI25__422->SetEntries(229098);
   ThetaY_vs_Y_mI30_mI25__422->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(1,496.6);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(2,993.2);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(3,1489.8);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(4,1986.4);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(5,2483);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(6,2979.6);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(7,3476.2);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(8,3972.8);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(9,4469.4);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(10,4966);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(11,5462.6);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(12,5959.2);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(13,6455.8);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(14,6952.4);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(15,7449);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(16,7945.6);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(17,8442.2);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(18,8938.8);
   ThetaY_vs_Y_mI30_mI25__422->SetContourLevel(19,9435.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__422->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__422->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__422->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__422->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__422->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__422->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__422->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__422->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__422->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__422->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__422->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__422->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__422->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__422->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__422->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__422->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-30_-25","Reco vertices","lpf");
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
