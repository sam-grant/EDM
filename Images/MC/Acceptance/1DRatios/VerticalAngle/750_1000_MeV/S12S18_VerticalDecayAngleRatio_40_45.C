void S12S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.895882,125,36.02176);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_40_45__690 = new TH1D("S12S18_ThetaY_40_45__690","",630,-1575,1575);
   S12S18_ThetaY_40_45__690->SetBinContent(304,1);
   S12S18_ThetaY_40_45__690->SetBinContent(305,2);
   S12S18_ThetaY_40_45__690->SetBinContent(306,5);
   S12S18_ThetaY_40_45__690->SetBinContent(307,10);
   S12S18_ThetaY_40_45__690->SetBinContent(308,18);
   S12S18_ThetaY_40_45__690->SetBinContent(309,14);
   S12S18_ThetaY_40_45__690->SetBinContent(310,10);
   S12S18_ThetaY_40_45__690->SetBinContent(311,21);
   S12S18_ThetaY_40_45__690->SetBinContent(312,13);
   S12S18_ThetaY_40_45__690->SetBinContent(313,21);
   S12S18_ThetaY_40_45__690->SetBinContent(314,21);
   S12S18_ThetaY_40_45__690->SetBinContent(315,8);
   S12S18_ThetaY_40_45__690->SetBinContent(316,1);
   S12S18_ThetaY_40_45__690->SetBinError(304,1);
   S12S18_ThetaY_40_45__690->SetBinError(305,1.414214);
   S12S18_ThetaY_40_45__690->SetBinError(306,2.236068);
   S12S18_ThetaY_40_45__690->SetBinError(307,3.162278);
   S12S18_ThetaY_40_45__690->SetBinError(308,4.242641);
   S12S18_ThetaY_40_45__690->SetBinError(309,3.741657);
   S12S18_ThetaY_40_45__690->SetBinError(310,3.162278);
   S12S18_ThetaY_40_45__690->SetBinError(311,4.582576);
   S12S18_ThetaY_40_45__690->SetBinError(312,3.605551);
   S12S18_ThetaY_40_45__690->SetBinError(313,4.582576);
   S12S18_ThetaY_40_45__690->SetBinError(314,4.582576);
   S12S18_ThetaY_40_45__690->SetBinError(315,2.828427);
   S12S18_ThetaY_40_45__690->SetBinError(316,1);
   S12S18_ThetaY_40_45__690->SetMinimum(0);
   S12S18_ThetaY_40_45__690->SetMaximum(32.23);
   S12S18_ThetaY_40_45__690->SetEntries(145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__690->SetLineColor(ci);
   S12S18_ThetaY_40_45__690->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__690->SetMarkerColor(ci);
   S12S18_ThetaY_40_45__690->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_40_45__690->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_40_45__690->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__690->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__690->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__690->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_40_45__690->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_40_45__690->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__690->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__690->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__690->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__690->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__690->Draw("AE");
   
   TH1D *ThetaY_40_45__691 = new TH1D("ThetaY_40_45__691","",630,-1575,1575);
   ThetaY_40_45__691->SetBinContent(303,0.02);
   ThetaY_40_45__691->SetBinContent(304,1);
   ThetaY_40_45__691->SetBinContent(305,7.04);
   ThetaY_40_45__691->SetBinContent(306,14.34);
   ThetaY_40_45__691->SetBinContent(307,20.42);
   ThetaY_40_45__691->SetBinContent(308,23.42);
   ThetaY_40_45__691->SetBinContent(309,25.74);
   ThetaY_40_45__691->SetBinContent(310,27.66);
   ThetaY_40_45__691->SetBinContent(311,27.98);
   ThetaY_40_45__691->SetBinContent(312,28.26);
   ThetaY_40_45__691->SetBinContent(313,27.16);
   ThetaY_40_45__691->SetBinContent(314,27.46);
   ThetaY_40_45__691->SetBinContent(315,28);
   ThetaY_40_45__691->SetBinContent(316,28.66);
   ThetaY_40_45__691->SetBinContent(317,28.8);
   ThetaY_40_45__691->SetBinContent(318,29.3);
   ThetaY_40_45__691->SetBinContent(319,28.16);
   ThetaY_40_45__691->SetBinContent(320,27.72);
   ThetaY_40_45__691->SetBinContent(321,26.64);
   ThetaY_40_45__691->SetBinContent(322,24.84);
   ThetaY_40_45__691->SetBinContent(323,21.96);
   ThetaY_40_45__691->SetBinContent(324,18.86);
   ThetaY_40_45__691->SetBinContent(325,13.9);
   ThetaY_40_45__691->SetBinContent(326,7.46);
   ThetaY_40_45__691->SetBinContent(327,1.38);
   ThetaY_40_45__691->SetBinError(303,0.02);
   ThetaY_40_45__691->SetBinError(304,0.1414214);
   ThetaY_40_45__691->SetBinError(305,0.3752333);
   ThetaY_40_45__691->SetBinError(306,0.5355371);
   ThetaY_40_45__691->SetBinError(307,0.6390618);
   ThetaY_40_45__691->SetBinError(308,0.6843975);
   ThetaY_40_45__691->SetBinError(309,0.7174956);
   ThetaY_40_45__691->SetBinError(310,0.7437742);
   ThetaY_40_45__691->SetBinError(311,0.7480642);
   ThetaY_40_45__691->SetBinError(312,0.7517978);
   ThetaY_40_45__691->SetBinError(313,0.737021);
   ThetaY_40_45__691->SetBinError(314,0.7410803);
   ThetaY_40_45__691->SetBinError(315,0.7483315);
   ThetaY_40_45__691->SetBinError(316,0.7570997);
   ThetaY_40_45__691->SetBinError(317,0.7589466);
   ThetaY_40_45__691->SetBinError(318,0.7655064);
   ThetaY_40_45__691->SetBinError(319,0.7504665);
   ThetaY_40_45__691->SetBinError(320,0.7445804);
   ThetaY_40_45__691->SetBinError(321,0.7299315);
   ThetaY_40_45__691->SetBinError(322,0.7048404);
   ThetaY_40_45__691->SetBinError(323,0.6627217);
   ThetaY_40_45__691->SetBinError(324,0.6141661);
   ThetaY_40_45__691->SetBinError(325,0.5272571);
   ThetaY_40_45__691->SetBinError(326,0.3862642);
   ThetaY_40_45__691->SetBinError(327,0.1661325);
   ThetaY_40_45__691->SetEntries(25809);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__691->SetLineColor(ci);
   ThetaY_40_45__691->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__691->SetMarkerColor(ci);
   ThetaY_40_45__691->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__691->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__691->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__691->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__691->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__691->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__691->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__691->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__691->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__691->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__691->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__691->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__691->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__691->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__691->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__691->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__691->Draw("AEsame");
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
   
   Double_t _fx3231[25] = {
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
   57.5};
   Double_t _fy3231[25] = {
   0,
   1,
   0.2840909,
   0.348675,
   0.489716,
   0.7685739,
   0.5439005,
   0.3615329,
   0.7505361,
   0.4600142,
   0.7731959,
   0.7647487,
   0.2857143,
   0.03489184,
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
   0};
   Double_t _felx3231[25] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3231[25] = {
   0,
   0.8303464,
   0.1838227,
   0.1510412,
   0.1529145,
   0.1807599,
   0.1443371,
   0.1127587,
   0.1636268,
   0.1264631,
   0.1686028,
   0.1667476,
   0.09912188,
   0.02886798,
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
   0};
   Double_t _fehx3231[25] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3231[25] = {
   265.1487,
   2.376303,
   0.377168,
   0.2372558,
   0.2104183,
   0.2294575,
   0.1890318,
   0.1550596,
   0.2040369,
   0.167267,
   0.2102567,
   0.2079376,
   0.1414989,
   0.08032711,
   0.06396524,
   0.062873,
   0.06541995,
   0.06645905,
   0.0691552,
   0.07417016,
   0.08390555,
   0.09771049,
   0.1326232,
   0.2473958,
   1.352031};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3231,_fy3231,_felx3231,_fehx3231,_fely3231,_fehy3231);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3231 = new TH1F("Graph_Graph3231","",100,-100,100);
   Graph_Graph3231->SetMinimum(0);
   Graph_Graph3231->SetMaximum(1.5);
   Graph_Graph3231->SetDirectory(0);
   Graph_Graph3231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3231->SetLineColor(ci);
   Graph_Graph3231->GetXaxis()->SetRange(1,100);
   Graph_Graph3231->GetXaxis()->CenterTitle(true);
   Graph_Graph3231->GetXaxis()->SetLabelFont(42);
   Graph_Graph3231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3231->GetXaxis()->SetTitleFont(42);
   Graph_Graph3231->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3231->GetYaxis()->CenterTitle(true);
   Graph_Graph3231->GetYaxis()->SetLabelFont(42);
   Graph_Graph3231->GetYaxis()->SetTitleFont(42);
   Graph_Graph3231->GetZaxis()->SetLabelFont(42);
   Graph_Graph3231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3231->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3231);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,32.23,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__692 = new TH2D("ThetaY_vs_Y_40_45__692","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__692->SetBinContent(7899,1);
   ThetaY_vs_Y_40_45__692->SetBinContent(7925,50);
   ThetaY_vs_Y_40_45__692->SetBinContent(7951,352);
   ThetaY_vs_Y_40_45__692->SetBinContent(7977,717);
   ThetaY_vs_Y_40_45__692->SetBinContent(8003,1021);
   ThetaY_vs_Y_40_45__692->SetBinContent(8029,1171);
   ThetaY_vs_Y_40_45__692->SetBinContent(8055,1287);
   ThetaY_vs_Y_40_45__692->SetBinContent(8081,1383);
   ThetaY_vs_Y_40_45__692->SetBinContent(8107,1399);
   ThetaY_vs_Y_40_45__692->SetBinContent(8133,1413);
   ThetaY_vs_Y_40_45__692->SetBinContent(8159,1358);
   ThetaY_vs_Y_40_45__692->SetBinContent(8185,1373);
   ThetaY_vs_Y_40_45__692->SetBinContent(8211,1400);
   ThetaY_vs_Y_40_45__692->SetBinContent(8237,1433);
   ThetaY_vs_Y_40_45__692->SetBinContent(8263,1440);
   ThetaY_vs_Y_40_45__692->SetBinContent(8289,1465);
   ThetaY_vs_Y_40_45__692->SetBinContent(8315,1408);
   ThetaY_vs_Y_40_45__692->SetBinContent(8341,1386);
   ThetaY_vs_Y_40_45__692->SetBinContent(8367,1332);
   ThetaY_vs_Y_40_45__692->SetBinContent(8393,1242);
   ThetaY_vs_Y_40_45__692->SetBinContent(8419,1098);
   ThetaY_vs_Y_40_45__692->SetBinContent(8445,943);
   ThetaY_vs_Y_40_45__692->SetBinContent(8471,695);
   ThetaY_vs_Y_40_45__692->SetBinContent(8497,373);
   ThetaY_vs_Y_40_45__692->SetBinContent(8523,69);
   ThetaY_vs_Y_40_45__692->SetEntries(25809);
   ThetaY_vs_Y_40_45__692->SetContour(20);
   ThetaY_vs_Y_40_45__692->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__692->SetContourLevel(1,73.25);
   ThetaY_vs_Y_40_45__692->SetContourLevel(2,146.5);
   ThetaY_vs_Y_40_45__692->SetContourLevel(3,219.75);
   ThetaY_vs_Y_40_45__692->SetContourLevel(4,293);
   ThetaY_vs_Y_40_45__692->SetContourLevel(5,366.25);
   ThetaY_vs_Y_40_45__692->SetContourLevel(6,439.5);
   ThetaY_vs_Y_40_45__692->SetContourLevel(7,512.75);
   ThetaY_vs_Y_40_45__692->SetContourLevel(8,586);
   ThetaY_vs_Y_40_45__692->SetContourLevel(9,659.25);
   ThetaY_vs_Y_40_45__692->SetContourLevel(10,732.5);
   ThetaY_vs_Y_40_45__692->SetContourLevel(11,805.75);
   ThetaY_vs_Y_40_45__692->SetContourLevel(12,879);
   ThetaY_vs_Y_40_45__692->SetContourLevel(13,952.25);
   ThetaY_vs_Y_40_45__692->SetContourLevel(14,1025.5);
   ThetaY_vs_Y_40_45__692->SetContourLevel(15,1098.75);
   ThetaY_vs_Y_40_45__692->SetContourLevel(16,1172);
   ThetaY_vs_Y_40_45__692->SetContourLevel(17,1245.25);
   ThetaY_vs_Y_40_45__692->SetContourLevel(18,1318.5);
   ThetaY_vs_Y_40_45__692->SetContourLevel(19,1391.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__692->SetLineColor(ci);
   ThetaY_vs_Y_40_45__692->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__692->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__692->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__692->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__692->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__692->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__692->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__692->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__692->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__692->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__692->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__692->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__692->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__692->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__692->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_40_45","Reco vertices","lpf");
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
