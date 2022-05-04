void S12_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-0.06820955,125,1.295981);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__366 = new TH1D("S12_ThetaY_mI25_mI20__366","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__366->SetBinContent(311,0.09090909);
   S12_ThetaY_mI25_mI20__366->SetBinContent(312,0.5272727);
   S12_ThetaY_mI25_mI20__366->SetBinContent(313,0.8363636);
   S12_ThetaY_mI25_mI20__366->SetBinContent(314,0.7818182);
   S12_ThetaY_mI25_mI20__366->SetBinContent(315,0.6909091);
   S12_ThetaY_mI25_mI20__366->SetBinContent(316,0.8727273);
   S12_ThetaY_mI25_mI20__366->SetBinContent(317,0.8545455);
   S12_ThetaY_mI25_mI20__366->SetBinContent(318,0.8727273);
   S12_ThetaY_mI25_mI20__366->SetBinContent(319,0.6909091);
   S12_ThetaY_mI25_mI20__366->SetBinContent(320,0.6727273);
   S12_ThetaY_mI25_mI20__366->SetBinContent(321,0.6181818);
   S12_ThetaY_mI25_mI20__366->SetBinContent(322,0.7090909);
   S12_ThetaY_mI25_mI20__366->SetBinContent(323,1);
   S12_ThetaY_mI25_mI20__366->SetBinContent(324,0.6727273);
   S12_ThetaY_mI25_mI20__366->SetBinContent(325,0.4909091);
   S12_ThetaY_mI25_mI20__366->SetBinContent(326,0.5454545);
   S12_ThetaY_mI25_mI20__366->SetBinContent(327,0.2545455);
   S12_ThetaY_mI25_mI20__366->SetBinContent(328,0.1272727);
   S12_ThetaY_mI25_mI20__366->SetBinContent(329,0.03636364);
   S12_ThetaY_mI25_mI20__366->SetBinError(311,0.04065578);
   S12_ThetaY_mI25_mI20__366->SetBinError(312,0.09791209);
   S12_ThetaY_mI25_mI20__366->SetBinError(313,0.1233151);
   S12_ThetaY_mI25_mI20__366->SetBinError(314,0.1192262);
   S12_ThetaY_mI25_mI20__366->SetBinError(315,0.1120803);
   S12_ThetaY_mI25_mI20__366->SetBinError(316,0.1259673);
   S12_ThetaY_mI25_mI20__366->SetBinError(317,0.1246483);
   S12_ThetaY_mI25_mI20__366->SetBinError(318,0.1259673);
   S12_ThetaY_mI25_mI20__366->SetBinError(319,0.1120803);
   S12_ThetaY_mI25_mI20__366->SetBinError(320,0.1105957);
   S12_ThetaY_mI25_mI20__366->SetBinError(321,0.1060173);
   S12_ThetaY_mI25_mI20__366->SetBinError(322,0.1135454);
   S12_ThetaY_mI25_mI20__366->SetBinError(323,0.13484);
   S12_ThetaY_mI25_mI20__366->SetBinError(324,0.1105957);
   S12_ThetaY_mI25_mI20__366->SetBinError(325,0.0944755);
   S12_ThetaY_mI25_mI20__366->SetBinError(326,0.09958592);
   S12_ThetaY_mI25_mI20__366->SetBinError(327,0.06803013);
   S12_ThetaY_mI25_mI20__366->SetBinError(328,0.04810457);
   S12_ThetaY_mI25_mI20__366->SetBinError(329,0.02571297);
   S12_ThetaY_mI25_mI20__366->SetMinimum(0);
   S12_ThetaY_mI25_mI20__366->SetMaximum(1.159562);
   S12_ThetaY_mI25_mI20__366->SetEntries(624);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__366->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__366->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__366->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__366->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__366->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__366->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__366->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__366->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__366->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__366->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__366->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__366->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__366->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__366->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__366->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__366->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__367 = new TH1D("ThetaY_mI25_mI20__367","",630,-1575,1575);
   ThetaY_mI25_mI20__367->SetBinContent(300,0.006302521);
   ThetaY_mI25_mI20__367->SetBinContent(301,0.07014096);
   ThetaY_mI25_mI20__367->SetBinContent(302,0.2075088);
   ThetaY_mI25_mI20__367->SetBinContent(303,0.4060721);
   ThetaY_mI25_mI20__367->SetBinContent(304,0.6236785);
   ThetaY_mI25_mI20__367->SetBinContent(305,0.7810382);
   ThetaY_mI25_mI20__367->SetBinContent(306,0.8902819);
   ThetaY_mI25_mI20__367->SetBinContent(307,0.958322);
   ThetaY_mI25_mI20__367->SetBinContent(308,1.014977);
   ThetaY_mI25_mI20__367->SetBinContent(309,1.034901);
   ThetaY_mI25_mI20__367->SetBinContent(310,1.050962);
   ThetaY_mI25_mI20__367->SetBinContent(311,1.038764);
   ThetaY_mI25_mI20__367->SetBinContent(312,1.047438);
   ThetaY_mI25_mI20__367->SetBinContent(313,1.048455);
   ThetaY_mI25_mI20__367->SetBinContent(314,1.022228);
   ThetaY_mI25_mI20__367->SetBinContent(315,1.039509);
   ThetaY_mI25_mI20__367->SetBinContent(316,1.038086);
   ThetaY_mI25_mI20__367->SetBinContent(317,1.037544);
   ThetaY_mI25_mI20__367->SetBinContent(318,1.054147);
   ThetaY_mI25_mI20__367->SetBinContent(319,1.032326);
   ThetaY_mI25_mI20__367->SetBinContent(320,1.052047);
   ThetaY_mI25_mI20__367->SetBinContent(321,1.052114);
   ThetaY_mI25_mI20__367->SetBinContent(322,1.040255);
   ThetaY_mI25_mI20__367->SetBinContent(323,1);
   ThetaY_mI25_mI20__367->SetBinContent(324,0.9497831);
   ThetaY_mI25_mI20__367->SetBinContent(325,0.9004473);
   ThetaY_mI25_mI20__367->SetBinContent(326,0.7826647);
   ThetaY_mI25_mI20__367->SetBinContent(327,0.6398075);
   ThetaY_mI25_mI20__367->SetBinContent(328,0.4106126);
   ThetaY_mI25_mI20__367->SetBinContent(329,0.1997154);
   ThetaY_mI25_mI20__367->SetBinContent(330,0.06587151);
   ThetaY_mI25_mI20__367->SetBinContent(331,0.005489292);
   ThetaY_mI25_mI20__367->SetBinError(300,0.000653541);
   ThetaY_mI25_mI20__367->SetBinError(301,0.002180226);
   ThetaY_mI25_mI20__367->SetBinError(302,0.003750023);
   ThetaY_mI25_mI20__367->SetBinError(303,0.005245867);
   ThetaY_mI25_mI20__367->SetBinError(304,0.006501238);
   ThetaY_mI25_mI20__367->SetBinError(305,0.007275315);
   ThetaY_mI25_mI20__367->SetBinError(306,0.007767468);
   ThetaY_mI25_mI20__367->SetBinError(307,0.008058819);
   ThetaY_mI25_mI20__367->SetBinError(308,0.008293613);
   ThetaY_mI25_mI20__367->SetBinError(309,0.00837462);
   ThetaY_mI25_mI20__367->SetBinError(310,0.008439355);
   ThetaY_mI25_mI20__367->SetBinError(311,0.008390235);
   ThetaY_mI25_mI20__367->SetBinError(312,0.008425194);
   ThetaY_mI25_mI20__367->SetBinError(313,0.008429281);
   ThetaY_mI25_mI20__367->SetBinError(314,0.008323186);
   ThetaY_mI25_mI20__367->SetBinError(315,0.008393245);
   ThetaY_mI25_mI20__367->SetBinError(316,0.008387497);
   ThetaY_mI25_mI20__367->SetBinError(317,0.008385307);
   ThetaY_mI25_mI20__367->SetBinError(318,0.008452134);
   ThetaY_mI25_mI20__367->SetBinError(319,0.008364194);
   ThetaY_mI25_mI20__367->SetBinError(320,0.008443707);
   ThetaY_mI25_mI20__367->SetBinError(321,0.008443979);
   ThetaY_mI25_mI20__367->SetBinError(322,0.008396254);
   ThetaY_mI25_mI20__367->SetBinError(323,0.008232196);
   ThetaY_mI25_mI20__367->SetBinError(324,0.008022836);
   ThetaY_mI25_mI20__367->SetBinError(325,0.007811687);
   ThetaY_mI25_mI20__367->SetBinError(326,0.007282887);
   ThetaY_mI25_mI20__367->SetBinError(327,0.006584766);
   ThetaY_mI25_mI20__367->SetBinError(328,0.005275114);
   ThetaY_mI25_mI20__367->SetBinError(329,0.003678929);
   ThetaY_mI25_mI20__367->SetBinError(330,0.00211283);
   ThetaY_mI25_mI20__367->SetBinError(331,0.0006099214);
   ThetaY_mI25_mI20__367->SetEntries(361544);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__367->SetLineColor(ci);
   ThetaY_mI25_mI20__367->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__367->SetMarkerColor(ci);
   ThetaY_mI25_mI20__367->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__367->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__367->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__367->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__367->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__367->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__367->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__367->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__367->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__367->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__367->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__367->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__367->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__367->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__367->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__367->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__367->Draw("AEsame");
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
   
   Double_t _fx3123[32] = {
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
   Double_t _fy3123[32] = {
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
   0.08751661,
   0.5033926,
   0.7977107,
   0.7648176,
   0.6646492,
   0.8407079,
   0.8236233,
   0.8278987,
   0.6692742,
   0.6394463,
   0.5875614,
   0.6816512,
   1,
   0.7082957,
   0.5451836,
   0.6969198,
   0.3978469,
   0.3099581,
   0.1820773,
   0,
   0};
   Double_t _felx3123[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3123[32] = {
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
   0.03780689,
   0.09301983,
   0.1173573,
   0.11634,
   0.1074733,
   0.121107,
   0.1198887,
   0.119259,
   0.108222,
   0.1047684,
   0.1003745,
   0.1088161,
   0.1346747,
   0.1160634,
   0.104369,
   0.1266854,
   0.1051186,
   0.1143646,
   0.1176301,
   0,
   0};
   Double_t _fehx3123[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3123[32] = {
   5.363986,
   0.4776511,
   0.1613579,
   0.08244414,
   0.05367584,
   0.04286064,
   0.03760097,
   0.03493116,
   0.03298122,
   0.03234622,
   0.03185186,
   0.05922069,
   0.112038,
   0.1360462,
   0.1355512,
   0.1264429,
   0.1399585,
   0.1387622,
   0.1378223,
   0.127324,
   0.1235289,
   0.1191915,
   0.127755,
   0.15417,
   0.1368502,
   0.1265649,
   0.1521233,
   0.1374049,
   0.1670954,
   0.2403362,
   0.5086393,
   6.16772};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3123,_fy3123,_felx3123,_fehx3123,_fely3123,_fehy3123);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3123 = new TH1F("Graph_Graph3123","",100,-100,100);
   Graph_Graph3123->SetMinimum(0);
   Graph_Graph3123->SetMaximum(1.5);
   Graph_Graph3123->SetDirectory(0);
   Graph_Graph3123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3123->SetLineColor(ci);
   Graph_Graph3123->GetXaxis()->SetRange(1,100);
   Graph_Graph3123->GetXaxis()->CenterTitle(true);
   Graph_Graph3123->GetXaxis()->SetLabelFont(42);
   Graph_Graph3123->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3123->GetXaxis()->SetTitleFont(42);
   Graph_Graph3123->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3123->GetYaxis()->CenterTitle(true);
   Graph_Graph3123->GetYaxis()->SetLabelFont(42);
   Graph_Graph3123->GetYaxis()->SetTitleFont(42);
   Graph_Graph3123->GetZaxis()->SetLabelFont(42);
   Graph_Graph3123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3123->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3123);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.159562,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__368 = new TH2D("ThetaY_vs_Y_mI25_mI20__368","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7808,93);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7834,1035);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7860,3062);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7886,5992);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7912,9203);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7938,11525);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7964,13137);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(7990,14141);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8016,14977);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8042,15271);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8068,15508);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8094,15328);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8120,15456);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8146,15471);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8172,15084);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8198,15339);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8224,15318);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8250,15310);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8276,15555);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8302,15233);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8328,15524);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8354,15525);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8380,15350);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8406,14756);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8432,14015);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8458,13287);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8484,11549);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8510,9441);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8536,6059);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8562,2947);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8588,972);
   ThetaY_vs_Y_mI25_mI20__368->SetBinContent(8614,81);
   ThetaY_vs_Y_mI25_mI20__368->SetEntries(361544);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__368->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__368->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__368->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__368->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__368->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__368->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__368->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__368->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__368->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__368->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__368->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__368->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__368->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__368->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__368->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__368->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-25_-20","Reco vertices","lpf");
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
