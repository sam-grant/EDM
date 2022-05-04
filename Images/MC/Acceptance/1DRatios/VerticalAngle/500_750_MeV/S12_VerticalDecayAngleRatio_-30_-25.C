void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.06657608,125,1.264945);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__363 = new TH1D("S12_ThetaY_mI30_mI25__363","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__363->SetBinContent(312,0.08333333);
   S12_ThetaY_mI30_mI25__363->SetBinContent(313,0.7222222);
   S12_ThetaY_mI30_mI25__363->SetBinContent(314,0.6111111);
   S12_ThetaY_mI30_mI25__363->SetBinContent(315,1);
   S12_ThetaY_mI30_mI25__363->SetBinContent(316,0.6388889);
   S12_ThetaY_mI30_mI25__363->SetBinContent(317,0.8888889);
   S12_ThetaY_mI30_mI25__363->SetBinContent(318,0.75);
   S12_ThetaY_mI30_mI25__363->SetBinContent(319,0.9444444);
   S12_ThetaY_mI30_mI25__363->SetBinContent(320,0.7222222);
   S12_ThetaY_mI30_mI25__363->SetBinContent(321,0.4722222);
   S12_ThetaY_mI30_mI25__363->SetBinContent(322,0.4722222);
   S12_ThetaY_mI30_mI25__363->SetBinContent(323,0.8888889);
   S12_ThetaY_mI30_mI25__363->SetBinContent(324,0.7222222);
   S12_ThetaY_mI30_mI25__363->SetBinContent(325,0.5833333);
   S12_ThetaY_mI30_mI25__363->SetBinContent(326,0.6111111);
   S12_ThetaY_mI30_mI25__363->SetBinContent(327,0.4166667);
   S12_ThetaY_mI30_mI25__363->SetBinContent(328,0.1944444);
   S12_ThetaY_mI30_mI25__363->SetBinContent(329,0.1388889);
   S12_ThetaY_mI30_mI25__363->SetBinError(312,0.04811252);
   S12_ThetaY_mI30_mI25__363->SetBinError(313,0.1416394);
   S12_ThetaY_mI30_mI25__363->SetBinError(314,0.1302893);
   S12_ThetaY_mI30_mI25__363->SetBinError(315,0.1666667);
   S12_ThetaY_mI30_mI25__363->SetBinError(316,0.1332175);
   S12_ThetaY_mI30_mI25__363->SetBinError(317,0.1571348);
   S12_ThetaY_mI30_mI25__363->SetBinError(318,0.1443376);
   S12_ThetaY_mI30_mI25__363->SetBinError(319,0.1619709);
   S12_ThetaY_mI30_mI25__363->SetBinError(320,0.1416394);
   S12_ThetaY_mI30_mI25__363->SetBinError(321,0.1145307);
   S12_ThetaY_mI30_mI25__363->SetBinError(322,0.1145307);
   S12_ThetaY_mI30_mI25__363->SetBinError(323,0.1571348);
   S12_ThetaY_mI30_mI25__363->SetBinError(324,0.1416394);
   S12_ThetaY_mI30_mI25__363->SetBinError(325,0.1272938);
   S12_ThetaY_mI30_mI25__363->SetBinError(326,0.1302893);
   S12_ThetaY_mI30_mI25__363->SetBinError(327,0.1075829);
   S12_ThetaY_mI30_mI25__363->SetBinError(328,0.07349309);
   S12_ThetaY_mI30_mI25__363->SetBinError(329,0.062113);
   S12_ThetaY_mI30_mI25__363->SetMinimum(0);
   S12_ThetaY_mI30_mI25__363->SetMaximum(1.131793);
   S12_ThetaY_mI30_mI25__363->SetEntries(391);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__363->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__363->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__363->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__363->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__363->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__363->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__363->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__363->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__363->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__363->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__363->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__363->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__363->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__363->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__363->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__363->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__364 = new TH1D("ThetaY_mI30_mI25__364","",630,-1575,1575);
   ThetaY_mI30_mI25__364->SetBinContent(300,0.00611209);
   ThetaY_mI30_mI25__364->SetBinContent(301,0.06433233);
   ThetaY_mI30_mI25__364->SetBinContent(302,0.1998342);
   ThetaY_mI30_mI25__364->SetBinContent(303,0.3998757);
   ThetaY_mI30_mI25__364->SetBinContent(304,0.6104838);
   ThetaY_mI30_mI25__364->SetBinContent(305,0.7591422);
   ThetaY_mI30_mI25__364->SetBinContent(306,0.8544494);
   ThetaY_mI30_mI25__364->SetBinContent(307,0.9257226);
   ThetaY_mI30_mI25__364->SetBinContent(308,0.9880866);
   ThetaY_mI30_mI25__364->SetBinContent(309,0.9986533);
   ThetaY_mI30_mI25__364->SetBinContent(310,1.020512);
   ThetaY_mI30_mI25__364->SetBinContent(311,1.028903);
   ThetaY_mI30_mI25__364->SetBinContent(312,1.008391);
   ThetaY_mI30_mI25__364->SetBinContent(313,1.019165);
   ThetaY_mI30_mI25__364->SetBinContent(314,1.002279);
   ThetaY_mI30_mI25__364->SetBinContent(315,1);
   ThetaY_mI30_mI25__364->SetBinContent(316,0.9976173);
   ThetaY_mI30_mI25__364->SetBinContent(317,1.024552);
   ThetaY_mI30_mI25__364->SetBinContent(318,1.000829);
   ThetaY_mI30_mI25__364->SetBinContent(319,1.027867);
   ThetaY_mI30_mI25__364->SetBinContent(320,1.006941);
   ThetaY_mI30_mI25__364->SetBinContent(321,1.013778);
   ThetaY_mI30_mI25__364->SetBinContent(322,0.9862219);
   ThetaY_mI30_mI25__364->SetBinContent(323,0.9779343);
   ThetaY_mI30_mI25__364->SetBinContent(324,0.9456128);
   ThetaY_mI30_mI25__364->SetBinContent(325,0.8600435);
   ThetaY_mI30_mI25__364->SetBinContent(326,0.7504403);
   ThetaY_mI30_mI25__364->SetBinContent(327,0.6128665);
   ThetaY_mI30_mI25__364->SetBinContent(328,0.3825754);
   ThetaY_mI30_mI25__364->SetBinContent(329,0.1933078);
   ThetaY_mI30_mI25__364->SetBinContent(330,0.06132808);
   ThetaY_mI30_mI25__364->SetBinContent(331,0.005490521);
   ThetaY_mI30_mI25__364->SetBinError(300,0.0007957263);
   ThetaY_mI30_mI25__364->SetBinError(301,0.002581568);
   ThetaY_mI30_mI25__364->SetBinError(302,0.00454992);
   ThetaY_mI30_mI25__364->SetBinError(303,0.006436227);
   ThetaY_mI30_mI25__364->SetBinError(304,0.007952541);
   ThetaY_mI30_mI25__364->SetBinError(305,0.008868097);
   ThetaY_mI30_mI25__364->SetBinError(306,0.009408319);
   ThetaY_mI30_mI25__364->SetBinError(307,0.009792854);
   ThetaY_mI30_mI25__364->SetBinError(308,0.01011734);
   ThetaY_mI30_mI25__364->SetBinError(309,0.01017129);
   ThetaY_mI30_mI25__364->SetBinError(310,0.01028201);
   ThetaY_mI30_mI25__364->SetBinError(311,0.01032419);
   ThetaY_mI30_mI25__364->SetBinError(312,0.01022076);
   ThetaY_mI30_mI25__364->SetBinError(313,0.01027522);
   ThetaY_mI30_mI25__364->SetBinError(314,0.01018974);
   ThetaY_mI30_mI25__364->SetBinError(315,0.01017815);
   ThetaY_mI30_mI25__364->SetBinError(316,0.01016602);
   ThetaY_mI30_mI25__364->SetBinError(317,0.01030234);
   ThetaY_mI30_mI25__364->SetBinError(318,0.01018237);
   ThetaY_mI30_mI25__364->SetBinError(319,0.01031899);
   ThetaY_mI30_mI25__364->SetBinError(320,0.01021341);
   ThetaY_mI30_mI25__364->SetBinError(321,0.01024803);
   ThetaY_mI30_mI25__364->SetBinError(322,0.01010779);
   ThetaY_mI30_mI25__364->SetBinError(323,0.01006523);
   ThetaY_mI30_mI25__364->SetBinError(324,0.0098975);
   ThetaY_mI30_mI25__364->SetBinError(325,0.009439067);
   ThetaY_mI30_mI25__364->SetBinError(326,0.008817123);
   ThetaY_mI30_mI25__364->SetBinError(327,0.007968045);
   ThetaY_mI30_mI25__364->SetBinError(328,0.006295458);
   ThetaY_mI30_mI25__364->SetBinError(329,0.004475005);
   ThetaY_mI30_mI25__364->SetBinError(330,0.002520569);
   ThetaY_mI30_mI25__364->SetBinError(331,0.0007541811);
   ThetaY_mI30_mI25__364->SetEntries(229098);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__364->SetLineColor(ci);
   ThetaY_mI30_mI25__364->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__364->SetMarkerColor(ci);
   ThetaY_mI30_mI25__364->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__364->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__364->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__364->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__364->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__364->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__364->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__364->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__364->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__364->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__364->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__364->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__364->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__364->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__364->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__364->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__364->Draw("AEsame");
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
   
   Double_t _fx3122[32] = {
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
   Double_t _fy3122[32] = {
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
   0.7086411,
   0.6097215,
   1,
   0.6404148,
   0.8675879,
   0.7493789,
   0.9188392,
   0.7172439,
   0.4658043,
   0.4788194,
   0.9089454,
   0.7637611,
   0.6782603,
   0.8143368,
   0.6798653,
   0.5082513,
   0.7184858,
   0,
   0};
   Double_t _felx3122[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3122[32] = {
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
   0.1382522,
   0.1291381,
   0.1661897,
   0.1327098,
   0.1528029,
   0.1435125,
   0.1570616,
   0.1399327,
   0.1119447,
   0.1150752,
   0.1600989,
   0.1490205,
   0.1469983,
   0.1725382,
   0.1737707,
   0.1875891,
   0.3106866,
   0,
   0};
   Double_t _fehx3122[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3122[32] = {
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
   0.1682858,
   0.1599031,
   0.1964242,
   0.163557,
   0.1824345,
   0.1740506,
   0.1865321,
   0.1703322,
   0.142745,
   0.1467381,
   0.1911489,
   0.1813986,
   0.1829448,
   0.2136672,
   0.2251306,
   0.2741492,
   0.4871435,
   0.8351653,
   9.4778};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3122,_fy3122,_felx3122,_fehx3122,_fely3122,_fehy3122);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3122 = new TH1F("Graph_Graph3122","",100,-100,100);
   Graph_Graph3122->SetMinimum(0);
   Graph_Graph3122->SetMaximum(1.5);
   Graph_Graph3122->SetDirectory(0);
   Graph_Graph3122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3122->SetLineColor(ci);
   Graph_Graph3122->GetXaxis()->SetRange(1,100);
   Graph_Graph3122->GetXaxis()->CenterTitle(true);
   Graph_Graph3122->GetXaxis()->SetLabelFont(42);
   Graph_Graph3122->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3122->GetXaxis()->SetTitleFont(42);
   Graph_Graph3122->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3122->GetYaxis()->CenterTitle(true);
   Graph_Graph3122->GetYaxis()->SetLabelFont(42);
   Graph_Graph3122->GetYaxis()->SetTitleFont(42);
   Graph_Graph3122->GetZaxis()->SetLabelFont(42);
   Graph_Graph3122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3122->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3122);
   
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__365 = new TH2D("ThetaY_vs_Y_mI30_mI25__365","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7807,59);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7833,621);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7859,1929);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7885,3860);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7911,5893);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7937,7328);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7963,8248);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(7989,8936);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8015,9538);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8041,9640);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8067,9851);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8093,9932);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8119,9734);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8145,9838);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8171,9675);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8197,9653);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8223,9630);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8249,9890);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8275,9661);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8301,9922);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8327,9720);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8353,9786);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8379,9520);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8405,9440);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8431,9128);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8457,8302);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8483,7244);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8509,5916);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8535,3693);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8561,1866);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8587,592);
   ThetaY_vs_Y_mI30_mI25__365->SetBinContent(8613,53);
   ThetaY_vs_Y_mI30_mI25__365->SetEntries(229098);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__365->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__365->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__365->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__365->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__365->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__365->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__365->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__365->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__365->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__365->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__365->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__365->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__365->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__365->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__365->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__365->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-30_-25","Reco vertices","lpf");
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
