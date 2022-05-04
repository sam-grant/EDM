void S12S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI30_mI25__477 = new TH1D("S12S18_ThetaY_mI30_mI25__477","",630,-1575,1575);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(312,0.08333333);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(313,0.6111111);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(314,0.7916667);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(315,1);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(316,0.7083333);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(317,0.8055556);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(318,0.7361111);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(319,0.8055556);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(320,0.7638889);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(321,0.5277778);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(322,0.625);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(323,0.9305556);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(324,0.8194444);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(325,0.4861111);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(326,0.625);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(327,0.4305556);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(328,0.1666667);
   S12S18_ThetaY_mI30_mI25__477->SetBinContent(329,0.1111111);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(312,0.03402069);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(313,0.09212847);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(314,0.1048588);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(315,0.1178511);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(316,0.09918651);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(317,0.1057746);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(318,0.1011126);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(319,0.1057746);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(320,0.1030028);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(321,0.08561686);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(322,0.0931695);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(323,0.1136855);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(324,0.1066826);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(325,0.08216777);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(326,0.0931695);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(327,0.07733006);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(328,0.04811252);
   S12S18_ThetaY_mI30_mI25__477->SetBinError(329,0.03928371);
   S12S18_ThetaY_mI30_mI25__477->SetMinimum(0);
   S12S18_ThetaY_mI30_mI25__477->SetMaximum(1.131793);
   S12S18_ThetaY_mI30_mI25__477->SetEntries(794);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__477->SetLineColor(ci);
   S12S18_ThetaY_mI30_mI25__477->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__477->SetMarkerColor(ci);
   S12S18_ThetaY_mI30_mI25__477->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI30_mI25__477->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI30_mI25__477->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__477->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__477->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__477->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI30_mI25__477->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI30_mI25__477->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__477->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__477->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__477->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__477->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__477->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__478 = new TH1D("ThetaY_mI30_mI25__478","",630,-1575,1575);
   ThetaY_mI30_mI25__478->SetBinContent(300,0.00611209);
   ThetaY_mI30_mI25__478->SetBinContent(301,0.06433233);
   ThetaY_mI30_mI25__478->SetBinContent(302,0.1998342);
   ThetaY_mI30_mI25__478->SetBinContent(303,0.3998757);
   ThetaY_mI30_mI25__478->SetBinContent(304,0.6104838);
   ThetaY_mI30_mI25__478->SetBinContent(305,0.7591422);
   ThetaY_mI30_mI25__478->SetBinContent(306,0.8544494);
   ThetaY_mI30_mI25__478->SetBinContent(307,0.9257226);
   ThetaY_mI30_mI25__478->SetBinContent(308,0.9880866);
   ThetaY_mI30_mI25__478->SetBinContent(309,0.9986533);
   ThetaY_mI30_mI25__478->SetBinContent(310,1.020512);
   ThetaY_mI30_mI25__478->SetBinContent(311,1.028903);
   ThetaY_mI30_mI25__478->SetBinContent(312,1.008391);
   ThetaY_mI30_mI25__478->SetBinContent(313,1.019165);
   ThetaY_mI30_mI25__478->SetBinContent(314,1.002279);
   ThetaY_mI30_mI25__478->SetBinContent(315,1);
   ThetaY_mI30_mI25__478->SetBinContent(316,0.9976173);
   ThetaY_mI30_mI25__478->SetBinContent(317,1.024552);
   ThetaY_mI30_mI25__478->SetBinContent(318,1.000829);
   ThetaY_mI30_mI25__478->SetBinContent(319,1.027867);
   ThetaY_mI30_mI25__478->SetBinContent(320,1.006941);
   ThetaY_mI30_mI25__478->SetBinContent(321,1.013778);
   ThetaY_mI30_mI25__478->SetBinContent(322,0.9862219);
   ThetaY_mI30_mI25__478->SetBinContent(323,0.9779343);
   ThetaY_mI30_mI25__478->SetBinContent(324,0.9456128);
   ThetaY_mI30_mI25__478->SetBinContent(325,0.8600435);
   ThetaY_mI30_mI25__478->SetBinContent(326,0.7504403);
   ThetaY_mI30_mI25__478->SetBinContent(327,0.6128665);
   ThetaY_mI30_mI25__478->SetBinContent(328,0.3825754);
   ThetaY_mI30_mI25__478->SetBinContent(329,0.1933078);
   ThetaY_mI30_mI25__478->SetBinContent(330,0.06132808);
   ThetaY_mI30_mI25__478->SetBinContent(331,0.005490521);
   ThetaY_mI30_mI25__478->SetBinError(300,0.0007957263);
   ThetaY_mI30_mI25__478->SetBinError(301,0.002581568);
   ThetaY_mI30_mI25__478->SetBinError(302,0.00454992);
   ThetaY_mI30_mI25__478->SetBinError(303,0.006436227);
   ThetaY_mI30_mI25__478->SetBinError(304,0.007952541);
   ThetaY_mI30_mI25__478->SetBinError(305,0.008868097);
   ThetaY_mI30_mI25__478->SetBinError(306,0.009408319);
   ThetaY_mI30_mI25__478->SetBinError(307,0.009792854);
   ThetaY_mI30_mI25__478->SetBinError(308,0.01011734);
   ThetaY_mI30_mI25__478->SetBinError(309,0.01017129);
   ThetaY_mI30_mI25__478->SetBinError(310,0.01028201);
   ThetaY_mI30_mI25__478->SetBinError(311,0.01032419);
   ThetaY_mI30_mI25__478->SetBinError(312,0.01022076);
   ThetaY_mI30_mI25__478->SetBinError(313,0.01027522);
   ThetaY_mI30_mI25__478->SetBinError(314,0.01018974);
   ThetaY_mI30_mI25__478->SetBinError(315,0.01017815);
   ThetaY_mI30_mI25__478->SetBinError(316,0.01016602);
   ThetaY_mI30_mI25__478->SetBinError(317,0.01030234);
   ThetaY_mI30_mI25__478->SetBinError(318,0.01018237);
   ThetaY_mI30_mI25__478->SetBinError(319,0.01031899);
   ThetaY_mI30_mI25__478->SetBinError(320,0.01021341);
   ThetaY_mI30_mI25__478->SetBinError(321,0.01024803);
   ThetaY_mI30_mI25__478->SetBinError(322,0.01010779);
   ThetaY_mI30_mI25__478->SetBinError(323,0.01006523);
   ThetaY_mI30_mI25__478->SetBinError(324,0.0098975);
   ThetaY_mI30_mI25__478->SetBinError(325,0.009439067);
   ThetaY_mI30_mI25__478->SetBinError(326,0.008817123);
   ThetaY_mI30_mI25__478->SetBinError(327,0.007968045);
   ThetaY_mI30_mI25__478->SetBinError(328,0.006295458);
   ThetaY_mI30_mI25__478->SetBinError(329,0.004475005);
   ThetaY_mI30_mI25__478->SetBinError(330,0.002520569);
   ThetaY_mI30_mI25__478->SetBinError(331,0.0007541811);
   ThetaY_mI30_mI25__478->SetEntries(229098);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__478->SetLineColor(ci);
   ThetaY_mI30_mI25__478->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__478->SetMarkerColor(ci);
   ThetaY_mI30_mI25__478->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__478->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__478->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__478->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__478->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__478->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__478->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__478->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__478->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__478->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__478->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__478->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__478->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__478->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__478->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__478->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__478->Draw("AEsame");
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
   
   Double_t _fx3160[32] = {
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
   Double_t _fy3160[32] = {
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
   0.5996194,
   0.7898665,
   1,
   0.7100251,
   0.7862515,
   0.7355016,
   0.7837158,
   0.7586234,
   0.5206048,
   0.6337316,
   0.9515522,
   0.8665751,
   0.5652169,
   0.8328444,
   0.7025275,
   0.435644,
   0.5747886,
   0,
   0};
   Double_t _felx3160[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3160[32] = {
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
   0.0327882,
   0.0902479,
   0.1046142,
   0.1180086,
   0.09935343,
   0.1032378,
   0.10098,
   0.1029039,
   0.1022639,
   0.08423893,
   0.09433618,
   0.1163646,
   0.1128548,
   0.09527517,
   0.1240654,
   0.1258117,
   0.1241728,
   0.1992836,
   0,
   0};
   Double_t _fehx3160[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3160[32] = {
   4.249425,
   0.3980531,
   0.1280158,
   0.06395949,
   0.04189094,
   0.03368665,
   0.02992875,
   0.02762424,
   0.02588054,
   0.02560667,
   0.02505815,
   0.02485377,
   0.04938292,
   0.1049835,
   0.1194931,
   0.1328438,
   0.1143455,
   0.1177848,
   0.1159083,
   0.1174036,
   0.1170867,
   0.09912248,
   0.1095565,
   0.1315599,
   0.1286187,
   0.1128823,
   0.1441029,
   0.1506731,
   0.1659092,
   0.2843599,
   0.4175827,
   4.7389};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3160,_fy3160,_felx3160,_fehx3160,_fely3160,_fehy3160);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3160 = new TH1F("Graph_Graph3160","",100,-100,100);
   Graph_Graph3160->SetMinimum(0);
   Graph_Graph3160->SetMaximum(1.5);
   Graph_Graph3160->SetDirectory(0);
   Graph_Graph3160->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3160->SetLineColor(ci);
   Graph_Graph3160->GetXaxis()->SetRange(1,100);
   Graph_Graph3160->GetXaxis()->CenterTitle(true);
   Graph_Graph3160->GetXaxis()->SetLabelFont(42);
   Graph_Graph3160->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3160->GetXaxis()->SetTitleFont(42);
   Graph_Graph3160->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3160->GetYaxis()->CenterTitle(true);
   Graph_Graph3160->GetYaxis()->SetLabelFont(42);
   Graph_Graph3160->GetYaxis()->SetTitleFont(42);
   Graph_Graph3160->GetZaxis()->SetLabelFont(42);
   Graph_Graph3160->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3160->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3160);
   
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__479 = new TH2D("ThetaY_vs_Y_mI30_mI25__479","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7807,59);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7833,621);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7859,1929);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7885,3860);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7911,5893);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7937,7328);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7963,8248);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(7989,8936);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8015,9538);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8041,9640);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8067,9851);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8093,9932);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8119,9734);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8145,9838);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8171,9675);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8197,9653);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8223,9630);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8249,9890);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8275,9661);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8301,9922);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8327,9720);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8353,9786);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8379,9520);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8405,9440);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8431,9128);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8457,8302);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8483,7244);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8509,5916);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8535,3693);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8561,1866);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8587,592);
   ThetaY_vs_Y_mI30_mI25__479->SetBinContent(8613,53);
   ThetaY_vs_Y_mI30_mI25__479->SetEntries(229098);
   ThetaY_vs_Y_mI30_mI25__479->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(1,496.6);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(2,993.2);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(3,1489.8);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(4,1986.4);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(5,2483);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(6,2979.6);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(7,3476.2);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(8,3972.8);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(9,4469.4);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(10,4966);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(11,5462.6);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(12,5959.2);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(13,6455.8);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(14,6952.4);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(15,7449);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(16,7945.6);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(17,8442.2);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(18,8938.8);
   ThetaY_vs_Y_mI30_mI25__479->SetContourLevel(19,9435.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__479->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__479->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__479->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__479->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__479->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__479->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__479->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__479->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__479->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__479->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__479->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__479->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__479->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__479->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__479->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__479->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-30_-25","Reco vertices","lpf");
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
