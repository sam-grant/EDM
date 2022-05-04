void S12S18_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-0.06820955,125,1.295981);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__480 = new TH1D("S12S18_ThetaY_mI25_mI20__480","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(311,0.07692308);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(312,0.4519231);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(313,0.9326923);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(314,0.7788462);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(315,0.7884615);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(316,0.9134615);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(317,0.7596154);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(318,0.9711538);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(319,0.6634615);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(320,0.75);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(321,0.8461538);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(322,0.6826923);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(323,1);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(324,0.7596154);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(325,0.5384615);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(326,0.5769231);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(327,0.2884615);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(328,0.1826923);
   S12S18_ThetaY_mI25_mI20__480->SetBinContent(329,0.06730769);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(311,0.02719641);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(312,0.06591976);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(313,0.09470056);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(314,0.08653846);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(315,0.08707101);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(316,0.09371918);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(317,0.08546341);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(318,0.09663342);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(319,0.07987138);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(320,0.08492078);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(321,0.0902003);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(322,0.08102067);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(323,0.09805807);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(324,0.08546341);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(325,0.07195495);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(326,0.07448045);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(327,0.05266563);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(328,0.04191249);
   S12S18_ThetaY_mI25_mI20__480->SetBinError(329,0.02543992);
   S12S18_ThetaY_mI25_mI20__480->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__480->SetMaximum(1.159562);
   S12S18_ThetaY_mI25_mI20__480->SetEntries(1251);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__480->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__480->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__480->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__480->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__480->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__480->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__480->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__480->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__480->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__480->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__480->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__480->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__480->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__480->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__480->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__480->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__481 = new TH1D("ThetaY_mI25_mI20__481","",630,-1575,1575);
   ThetaY_mI25_mI20__481->SetBinContent(300,0.006302521);
   ThetaY_mI25_mI20__481->SetBinContent(301,0.07014096);
   ThetaY_mI25_mI20__481->SetBinContent(302,0.2075088);
   ThetaY_mI25_mI20__481->SetBinContent(303,0.4060721);
   ThetaY_mI25_mI20__481->SetBinContent(304,0.6236785);
   ThetaY_mI25_mI20__481->SetBinContent(305,0.7810382);
   ThetaY_mI25_mI20__481->SetBinContent(306,0.8902819);
   ThetaY_mI25_mI20__481->SetBinContent(307,0.958322);
   ThetaY_mI25_mI20__481->SetBinContent(308,1.014977);
   ThetaY_mI25_mI20__481->SetBinContent(309,1.034901);
   ThetaY_mI25_mI20__481->SetBinContent(310,1.050962);
   ThetaY_mI25_mI20__481->SetBinContent(311,1.038764);
   ThetaY_mI25_mI20__481->SetBinContent(312,1.047438);
   ThetaY_mI25_mI20__481->SetBinContent(313,1.048455);
   ThetaY_mI25_mI20__481->SetBinContent(314,1.022228);
   ThetaY_mI25_mI20__481->SetBinContent(315,1.039509);
   ThetaY_mI25_mI20__481->SetBinContent(316,1.038086);
   ThetaY_mI25_mI20__481->SetBinContent(317,1.037544);
   ThetaY_mI25_mI20__481->SetBinContent(318,1.054147);
   ThetaY_mI25_mI20__481->SetBinContent(319,1.032326);
   ThetaY_mI25_mI20__481->SetBinContent(320,1.052047);
   ThetaY_mI25_mI20__481->SetBinContent(321,1.052114);
   ThetaY_mI25_mI20__481->SetBinContent(322,1.040255);
   ThetaY_mI25_mI20__481->SetBinContent(323,1);
   ThetaY_mI25_mI20__481->SetBinContent(324,0.9497831);
   ThetaY_mI25_mI20__481->SetBinContent(325,0.9004473);
   ThetaY_mI25_mI20__481->SetBinContent(326,0.7826647);
   ThetaY_mI25_mI20__481->SetBinContent(327,0.6398075);
   ThetaY_mI25_mI20__481->SetBinContent(328,0.4106126);
   ThetaY_mI25_mI20__481->SetBinContent(329,0.1997154);
   ThetaY_mI25_mI20__481->SetBinContent(330,0.06587151);
   ThetaY_mI25_mI20__481->SetBinContent(331,0.005489292);
   ThetaY_mI25_mI20__481->SetBinError(300,0.000653541);
   ThetaY_mI25_mI20__481->SetBinError(301,0.002180226);
   ThetaY_mI25_mI20__481->SetBinError(302,0.003750023);
   ThetaY_mI25_mI20__481->SetBinError(303,0.005245867);
   ThetaY_mI25_mI20__481->SetBinError(304,0.006501238);
   ThetaY_mI25_mI20__481->SetBinError(305,0.007275315);
   ThetaY_mI25_mI20__481->SetBinError(306,0.007767468);
   ThetaY_mI25_mI20__481->SetBinError(307,0.008058819);
   ThetaY_mI25_mI20__481->SetBinError(308,0.008293613);
   ThetaY_mI25_mI20__481->SetBinError(309,0.00837462);
   ThetaY_mI25_mI20__481->SetBinError(310,0.008439355);
   ThetaY_mI25_mI20__481->SetBinError(311,0.008390235);
   ThetaY_mI25_mI20__481->SetBinError(312,0.008425194);
   ThetaY_mI25_mI20__481->SetBinError(313,0.008429281);
   ThetaY_mI25_mI20__481->SetBinError(314,0.008323186);
   ThetaY_mI25_mI20__481->SetBinError(315,0.008393245);
   ThetaY_mI25_mI20__481->SetBinError(316,0.008387497);
   ThetaY_mI25_mI20__481->SetBinError(317,0.008385307);
   ThetaY_mI25_mI20__481->SetBinError(318,0.008452134);
   ThetaY_mI25_mI20__481->SetBinError(319,0.008364194);
   ThetaY_mI25_mI20__481->SetBinError(320,0.008443707);
   ThetaY_mI25_mI20__481->SetBinError(321,0.008443979);
   ThetaY_mI25_mI20__481->SetBinError(322,0.008396254);
   ThetaY_mI25_mI20__481->SetBinError(323,0.008232196);
   ThetaY_mI25_mI20__481->SetBinError(324,0.008022836);
   ThetaY_mI25_mI20__481->SetBinError(325,0.007811687);
   ThetaY_mI25_mI20__481->SetBinError(326,0.007282887);
   ThetaY_mI25_mI20__481->SetBinError(327,0.006584766);
   ThetaY_mI25_mI20__481->SetBinError(328,0.005275114);
   ThetaY_mI25_mI20__481->SetBinError(329,0.003678929);
   ThetaY_mI25_mI20__481->SetBinError(330,0.00211283);
   ThetaY_mI25_mI20__481->SetBinError(331,0.0006099214);
   ThetaY_mI25_mI20__481->SetEntries(361544);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__481->SetLineColor(ci);
   ThetaY_mI25_mI20__481->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__481->SetMarkerColor(ci);
   ThetaY_mI25_mI20__481->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__481->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__481->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__481->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__481->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__481->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__481->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__481->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__481->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__481->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__481->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__481->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__481->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__481->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__481->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__481->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__481->Draw("AEsame");
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
   
   Double_t _fx3161[32] = {
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
   Double_t _fy3161[32] = {
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
   0.07405251,
   0.4314555,
   0.8895875,
   0.7619102,
   0.7584939,
   0.8799477,
   0.7321283,
   0.9212694,
   0.6426862,
   0.7128962,
   0.8042413,
   0.6562741,
   1,
   0.7997777,
   0.5979934,
   0.7371268,
   0.4508567,
   0.4449262,
   0.3370181,
   0,
   0};
   Double_t _felx3161[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3161[32] = {
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
   0.02563169,
   0.06280285,
   0.09044738,
   0.0847054,
   0.083811,
   0.09039775,
   0.08240537,
   0.09181153,
   0.07735453,
   0.08074578,
   0.08580872,
   0.0778786,
   0.09824137,
   0.09004079,
   0.07983572,
   0.09513892,
   0.08197925,
   0.1013181,
   0.1244152,
   0,
   0};
   Double_t _fehx3161[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3161[32] = {
   2.836723,
   0.252604,
   0.0853335,
   0.04360026,
   0.02838626,
   0.02266668,
   0.01988513,
   0.01847321,
   0.01744199,
   0.01710617,
   0.01684474,
   0.03653268,
   0.07268944,
   0.1001531,
   0.09469624,
   0.09363227,
   0.1002047,
   0.09225301,
   0.1014578,
   0.08728232,
   0.09045954,
   0.09549792,
   0.08772374,
   0.1084091,
   0.1008042,
   0.09128553,
   0.1082983,
   0.09844745,
   0.1275334,
   0.1818535,
   0.268992,
   3.261775};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3161,_fy3161,_felx3161,_fehx3161,_fely3161,_fehy3161);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3161 = new TH1F("Graph_Graph3161","",100,-100,100);
   Graph_Graph3161->SetMinimum(0);
   Graph_Graph3161->SetMaximum(1.5);
   Graph_Graph3161->SetDirectory(0);
   Graph_Graph3161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3161->SetLineColor(ci);
   Graph_Graph3161->GetXaxis()->SetRange(1,100);
   Graph_Graph3161->GetXaxis()->CenterTitle(true);
   Graph_Graph3161->GetXaxis()->SetLabelFont(42);
   Graph_Graph3161->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3161->GetXaxis()->SetTitleFont(42);
   Graph_Graph3161->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3161->GetYaxis()->CenterTitle(true);
   Graph_Graph3161->GetYaxis()->SetLabelFont(42);
   Graph_Graph3161->GetYaxis()->SetTitleFont(42);
   Graph_Graph3161->GetZaxis()->SetLabelFont(42);
   Graph_Graph3161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3161->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3161);
   
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__482 = new TH2D("ThetaY_vs_Y_mI25_mI20__482","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7808,93);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7834,1035);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7860,3062);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7886,5992);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7912,9203);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7938,11525);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7964,13137);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(7990,14141);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8016,14977);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8042,15271);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8068,15508);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8094,15328);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8120,15456);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8146,15471);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8172,15084);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8198,15339);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8224,15318);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8250,15310);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8276,15555);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8302,15233);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8328,15524);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8354,15525);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8380,15350);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8406,14756);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8432,14015);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8458,13287);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8484,11549);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8510,9441);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8536,6059);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8562,2947);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8588,972);
   ThetaY_vs_Y_mI25_mI20__482->SetBinContent(8614,81);
   ThetaY_vs_Y_mI25_mI20__482->SetEntries(361544);
   ThetaY_vs_Y_mI25_mI20__482->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(1,777.75);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(2,1555.5);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(3,2333.25);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(4,3111);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(5,3888.75);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(6,4666.5);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(7,5444.25);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(8,6222);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(9,6999.75);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(10,7777.5);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(11,8555.25);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(12,9333);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(13,10110.75);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(14,10888.5);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(15,11666.25);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(16,12444);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(17,13221.75);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(18,13999.5);
   ThetaY_vs_Y_mI25_mI20__482->SetContourLevel(19,14777.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__482->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__482->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__482->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__482->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__482->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__482->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__482->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__482->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__482->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__482->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__482->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__482->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__482->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__482->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__482->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__482->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
