void S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06658919,125,1.265194);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__780 = new TH1D("S18_ThetaY_0_5__780","",630,-1575,1575);
   S18_ThetaY_0_5__780->SetBinContent(307,0.002369668);
   S18_ThetaY_0_5__780->SetBinContent(308,0.02606635);
   S18_ThetaY_0_5__780->SetBinContent(309,0.2488152);
   S18_ThetaY_0_5__780->SetBinContent(310,0.7369668);
   S18_ThetaY_0_5__780->SetBinContent(311,0.8554502);
   S18_ThetaY_0_5__780->SetBinContent(312,0.8696682);
   S18_ThetaY_0_5__780->SetBinContent(313,0.9407583);
   S18_ThetaY_0_5__780->SetBinContent(314,0.9218009);
   S18_ThetaY_0_5__780->SetBinContent(315,0.8838863);
   S18_ThetaY_0_5__780->SetBinContent(316,0.964455);
   S18_ThetaY_0_5__780->SetBinContent(317,0.9478673);
   S18_ThetaY_0_5__780->SetBinContent(318,1);
   S18_ThetaY_0_5__780->SetBinContent(319,0.8270142);
   S18_ThetaY_0_5__780->SetBinContent(320,0.7630332);
   S18_ThetaY_0_5__780->SetBinContent(321,0.3317536);
   S18_ThetaY_0_5__780->SetBinContent(322,0.04739336);
   S18_ThetaY_0_5__780->SetBinError(307,0.002369668);
   S18_ThetaY_0_5__780->SetBinError(308,0.0078593);
   S18_ThetaY_0_5__780->SetBinError(309,0.02428187);
   S18_ThetaY_0_5__780->SetBinError(310,0.04178955);
   S18_ThetaY_0_5__780->SetBinError(311,0.0450237);
   S18_ThetaY_0_5__780->SetBinError(312,0.04539631);
   S18_ThetaY_0_5__780->SetBinError(313,0.04721531);
   S18_ThetaY_0_5__780->SetBinError(314,0.04673716);
   S18_ThetaY_0_5__780->SetBinError(315,0.0457659);
   S18_ThetaY_0_5__780->SetBinError(316,0.04780626);
   S18_ThetaY_0_5__780->SetBinError(317,0.04739336);
   S18_ThetaY_0_5__780->SetBinError(318,0.04867924);
   S18_ThetaY_0_5__780->SetBinError(319,0.04426906);
   S18_ThetaY_0_5__780->SetBinError(320,0.04252218);
   S18_ThetaY_0_5__780->SetBinError(321,0.02803829);
   S18_ThetaY_0_5__780->SetBinError(322,0.01059748);
   S18_ThetaY_0_5__780->SetMinimum(0);
   S18_ThetaY_0_5__780->SetMaximum(1.132016);
   S18_ThetaY_0_5__780->SetEntries(4375);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__780->SetLineColor(ci);
   S18_ThetaY_0_5__780->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__780->SetMarkerColor(ci);
   S18_ThetaY_0_5__780->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__780->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__780->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__780->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__780->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__780->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__780->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__780->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__780->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__780->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__780->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__780->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__780->Draw("AE");
   
   TH1D *ThetaY_0_5__781 = new TH1D("ThetaY_0_5__781","",630,-1575,1575);
   ThetaY_0_5__781->SetBinContent(305,7.345245e-05);
   ThetaY_0_5__781->SetBinContent(306,0.05229814);
   ThetaY_0_5__781->SetBinContent(307,0.3065538);
   ThetaY_0_5__781->SetBinContent(308,0.579852);
   ThetaY_0_5__781->SetBinContent(309,0.7587638);
   ThetaY_0_5__781->SetBinContent(310,0.8666471);
   ThetaY_0_5__781->SetBinContent(311,0.9341866);
   ThetaY_0_5__781->SetBinContent(312,0.9945645);
   ThetaY_0_5__781->SetBinContent(313,1.014085);
   ThetaY_0_5__781->SetBinContent(314,1.029106);
   ThetaY_0_5__781->SetBinContent(315,1.027086);
   ThetaY_0_5__781->SetBinContent(316,1.026314);
   ThetaY_0_5__781->SetBinContent(317,1.020952);
   ThetaY_0_5__781->SetBinContent(318,1);
   ThetaY_0_5__781->SetBinContent(319,0.986044);
   ThetaY_0_5__781->SetBinContent(320,0.9456819);
   ThetaY_0_5__781->SetBinContent(321,0.866996);
   ThetaY_0_5__781->SetBinContent(322,0.7572764);
   ThetaY_0_5__781->SetBinContent(323,0.5856731);
   ThetaY_0_5__781->SetBinContent(324,0.3043686);
   ThetaY_0_5__781->SetBinContent(325,0.05240832);
   ThetaY_0_5__781->SetBinContent(326,3.672622e-05);
   ThetaY_0_5__781->SetBinError(305,3.672622e-05);
   ThetaY_0_5__781->SetBinError(306,0.0009799779);
   ThetaY_0_5__781->SetBinError(307,0.002372611);
   ThetaY_0_5__781->SetBinError(308,0.00326311);
   ThetaY_0_5__781->SetBinError(309,0.003732729);
   ThetaY_0_5__781->SetBinError(310,0.003989278);
   ThetaY_0_5__781->SetBinError(311,0.004141808);
   ThetaY_0_5__781->SetBinError(312,0.004273558);
   ThetaY_0_5__781->SetBinError(313,0.004315292);
   ThetaY_0_5__781->SetBinError(314,0.004347135);
   ThetaY_0_5__781->SetBinError(315,0.004342866);
   ThetaY_0_5__781->SetBinError(316,0.004341235);
   ThetaY_0_5__781->SetBinError(317,0.00432988);
   ThetaY_0_5__781->SetBinError(318,0.00428522);
   ThetaY_0_5__781->SetBinError(319,0.004255213);
   ThetaY_0_5__781->SetBinError(320,0.004167213);
   ThetaY_0_5__781->SetBinError(321,0.003990081);
   ThetaY_0_5__781->SetBinError(322,0.003729068);
   ThetaY_0_5__781->SetBinError(323,0.003279448);
   ThetaY_0_5__781->SetBinError(324,0.002364139);
   ThetaY_0_5__781->SetBinError(325,0.0009810096);
   ThetaY_0_5__781->SetBinError(326,2.596936e-05);
   ThetaY_0_5__781->SetEntries(822789);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__781->SetLineColor(ci);
   ThetaY_0_5__781->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__781->SetMarkerColor(ci);
   ThetaY_0_5__781->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__781->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__781->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__781->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__781->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__781->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__781->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__781->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__781->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__781->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__781->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__781->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__781->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__781->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__781->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__781->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__781->Draw("AEsame");
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
   
   Double_t _fx3261[22] = {
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
   Double_t _fy3261[22] = {
   0,
   0,
   0.007730024,
   0.04495346,
   0.3279218,
   0.8503656,
   0.9157167,
   0.8744211,
   0.9276922,
   0.8957302,
   0.860577,
   0.9397267,
   0.9284149,
   1,
   0.8387194,
   0.8068603,
   0.3826472,
   0.06258397,
   0,
   0,
   0,
   0};
   Double_t _felx3261[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3261[22] = {
   0,
   0,
   0.006394706,
   0.01334751,
   0.03199105,
   0.04835193,
   0.04834346,
   0.04577753,
   0.04670652,
   0.0455527,
   0.0446869,
   0.04673022,
   0.04656756,
   0.0488477,
   0.0450193,
   0.04508108,
   0.03234846,
   0.01387948,
   0,
   0,
   0,
   0};
   Double_t _fehx3261[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3261[22] = {
   75.42406,
   0.08344504,
   0.01777715,
   0.0180533,
   0.03527617,
   0.0511837,
   0.05096661,
   0.04824007,
   0.04912029,
   0.04793123,
   0.0470707,
   0.04911473,
   0.04896489,
   0.05129508,
   0.04750404,
   0.04767401,
   0.03520672,
   0.01736154,
   0.007449098,
   0.01433411,
   0.08326956,
   194.9319};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3261,_fy3261,_felx3261,_fehx3261,_fely3261,_fehy3261);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3261 = new TH1F("Graph_Graph3261","",100,-100,100);
   Graph_Graph3261->SetMinimum(0);
   Graph_Graph3261->SetMaximum(1.5);
   Graph_Graph3261->SetDirectory(0);
   Graph_Graph3261->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3261->SetLineColor(ci);
   Graph_Graph3261->GetXaxis()->SetRange(1,100);
   Graph_Graph3261->GetXaxis()->CenterTitle(true);
   Graph_Graph3261->GetXaxis()->SetLabelFont(42);
   Graph_Graph3261->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3261->GetXaxis()->SetTitleFont(42);
   Graph_Graph3261->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3261->GetYaxis()->CenterTitle(true);
   Graph_Graph3261->GetYaxis()->SetLabelFont(42);
   Graph_Graph3261->GetYaxis()->SetTitleFont(42);
   Graph_Graph3261->GetZaxis()->SetLabelFont(42);
   Graph_Graph3261->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3261->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3261);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.132016,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__782 = new TH2D("ThetaY_vs_Y_0_5__782","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__782->SetBinContent(7943,4);
   ThetaY_vs_Y_0_5__782->SetBinContent(7969,2848);
   ThetaY_vs_Y_0_5__782->SetBinContent(7995,16694);
   ThetaY_vs_Y_0_5__782->SetBinContent(8021,31577);
   ThetaY_vs_Y_0_5__782->SetBinContent(8047,41320);
   ThetaY_vs_Y_0_5__782->SetBinContent(8073,47195);
   ThetaY_vs_Y_0_5__782->SetBinContent(8099,50873);
   ThetaY_vs_Y_0_5__782->SetBinContent(8125,54161);
   ThetaY_vs_Y_0_5__782->SetBinContent(8151,55224);
   ThetaY_vs_Y_0_5__782->SetBinContent(8177,56042);
   ThetaY_vs_Y_0_5__782->SetBinContent(8203,55932);
   ThetaY_vs_Y_0_5__782->SetBinContent(8229,55890);
   ThetaY_vs_Y_0_5__782->SetBinContent(8255,55598);
   ThetaY_vs_Y_0_5__782->SetBinContent(8281,54457);
   ThetaY_vs_Y_0_5__782->SetBinContent(8307,53697);
   ThetaY_vs_Y_0_5__782->SetBinContent(8333,51499);
   ThetaY_vs_Y_0_5__782->SetBinContent(8359,47214);
   ThetaY_vs_Y_0_5__782->SetBinContent(8385,41239);
   ThetaY_vs_Y_0_5__782->SetBinContent(8411,31894);
   ThetaY_vs_Y_0_5__782->SetBinContent(8437,16575);
   ThetaY_vs_Y_0_5__782->SetBinContent(8463,2854);
   ThetaY_vs_Y_0_5__782->SetBinContent(8489,2);
   ThetaY_vs_Y_0_5__782->SetEntries(822789);
   ThetaY_vs_Y_0_5__782->SetContour(20);
   ThetaY_vs_Y_0_5__782->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__782->SetContourLevel(1,2802.1);
   ThetaY_vs_Y_0_5__782->SetContourLevel(2,5604.2);
   ThetaY_vs_Y_0_5__782->SetContourLevel(3,8406.3);
   ThetaY_vs_Y_0_5__782->SetContourLevel(4,11208.4);
   ThetaY_vs_Y_0_5__782->SetContourLevel(5,14010.5);
   ThetaY_vs_Y_0_5__782->SetContourLevel(6,16812.6);
   ThetaY_vs_Y_0_5__782->SetContourLevel(7,19614.7);
   ThetaY_vs_Y_0_5__782->SetContourLevel(8,22416.8);
   ThetaY_vs_Y_0_5__782->SetContourLevel(9,25218.9);
   ThetaY_vs_Y_0_5__782->SetContourLevel(10,28021);
   ThetaY_vs_Y_0_5__782->SetContourLevel(11,30823.1);
   ThetaY_vs_Y_0_5__782->SetContourLevel(12,33625.2);
   ThetaY_vs_Y_0_5__782->SetContourLevel(13,36427.3);
   ThetaY_vs_Y_0_5__782->SetContourLevel(14,39229.4);
   ThetaY_vs_Y_0_5__782->SetContourLevel(15,42031.5);
   ThetaY_vs_Y_0_5__782->SetContourLevel(16,44833.6);
   ThetaY_vs_Y_0_5__782->SetContourLevel(17,47635.7);
   ThetaY_vs_Y_0_5__782->SetContourLevel(18,50437.8);
   ThetaY_vs_Y_0_5__782->SetContourLevel(19,53239.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__782->SetLineColor(ci);
   ThetaY_vs_Y_0_5__782->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__782->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__782->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__782->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__782->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__782->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__782->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__782->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__782->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__782->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__782->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__782->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__782->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__782->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__782->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
