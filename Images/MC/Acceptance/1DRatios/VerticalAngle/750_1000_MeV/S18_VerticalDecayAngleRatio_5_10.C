void S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:45 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06588923,125,1.251895);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_5_10__612 = new TH1D("S18_ThetaY_5_10__612","",630,-1575,1575);
   S18_ThetaY_5_10__612->SetBinContent(305,0.003496503);
   S18_ThetaY_5_10__612->SetBinContent(306,0.03846154);
   S18_ThetaY_5_10__612->SetBinContent(307,0.1503497);
   S18_ThetaY_5_10__612->SetBinContent(308,0.6398601);
   S18_ThetaY_5_10__612->SetBinContent(309,0.8496503);
   S18_ThetaY_5_10__612->SetBinContent(310,0.8636364);
   S18_ThetaY_5_10__612->SetBinContent(311,1);
   S18_ThetaY_5_10__612->SetBinContent(312,0.951049);
   S18_ThetaY_5_10__612->SetBinContent(313,0.979021);
   S18_ThetaY_5_10__612->SetBinContent(314,0.9405594);
   S18_ThetaY_5_10__612->SetBinContent(315,1.003497);
   S18_ThetaY_5_10__612->SetBinContent(316,0.993007);
   S18_ThetaY_5_10__612->SetBinContent(317,0.8496503);
   S18_ThetaY_5_10__612->SetBinContent(318,0.9370629);
   S18_ThetaY_5_10__612->SetBinContent(319,0.9755245);
   S18_ThetaY_5_10__612->SetBinContent(320,0.8216783);
   S18_ThetaY_5_10__612->SetBinContent(321,0.4020979);
   S18_ThetaY_5_10__612->SetBinContent(322,0.06993007);
   S18_ThetaY_5_10__612->SetBinContent(323,0.006993007);
   S18_ThetaY_5_10__612->SetBinError(305,0.003496503);
   S18_ThetaY_5_10__612->SetBinError(306,0.01159659);
   S18_ThetaY_5_10__612->SetBinError(307,0.02292811);
   S18_ThetaY_5_10__612->SetBinError(308,0.04729982);
   S18_ThetaY_5_10__612->SetBinError(309,0.0545051);
   S18_ThetaY_5_10__612->SetBinError(310,0.05495187);
   S18_ThetaY_5_10__612->SetBinError(311,0.05913124);
   S18_ThetaY_5_10__612->SetBinError(312,0.05766581);
   S18_ThetaY_5_10__612->SetBinError(313,0.05850769);
   S18_ThetaY_5_10__612->SetBinError(314,0.05734692);
   S18_ThetaY_5_10__612->SetBinError(315,0.05923453);
   S18_ThetaY_5_10__612->SetBinError(316,0.05892412);
   S18_ThetaY_5_10__612->SetBinError(317,0.0545051);
   S18_ThetaY_5_10__612->SetBinError(318,0.05724023);
   S18_ThetaY_5_10__612->SetBinError(319,0.05840312);
   S18_ThetaY_5_10__612->SetBinError(320,0.05360038);
   S18_ThetaY_5_10__612->SetBinError(321,0.03749582);
   S18_ThetaY_5_10__612->SetBinError(322,0.01563684);
   S18_ThetaY_5_10__612->SetBinError(323,0.004944803);
   S18_ThetaY_5_10__612->SetMinimum(0);
   S18_ThetaY_5_10__612->SetMaximum(1.120117);
   S18_ThetaY_5_10__612->SetEntries(3568);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__612->SetLineColor(ci);
   S18_ThetaY_5_10__612->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__612->SetMarkerColor(ci);
   S18_ThetaY_5_10__612->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__612->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__612->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__612->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__612->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__612->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__612->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__612->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__612->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__612->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__612->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__612->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__612->Draw("AE");
   
   TH1D *ThetaY_5_10__613 = new TH1D("ThetaY_5_10__613","",630,-1575,1575);
   ThetaY_5_10__613->SetBinContent(303,0.0003819366);
   ThetaY_5_10__613->SetBinContent(304,0.05212312);
   ThetaY_5_10__613->SetBinContent(305,0.243024);
   ThetaY_5_10__613->SetBinContent(306,0.5121096);
   ThetaY_5_10__613->SetBinContent(307,0.6964727);
   ThetaY_5_10__613->SetBinContent(308,0.8278814);
   ThetaY_5_10__613->SetBinContent(309,0.9033026);
   ThetaY_5_10__613->SetBinContent(310,0.9553808);
   ThetaY_5_10__613->SetBinContent(311,1);
   ThetaY_5_10__613->SetBinContent(312,0.9989441);
   ThetaY_5_10__613->SetBinContent(313,1.004404);
   ThetaY_5_10__613->SetBinContent(314,1.012155);
   ThetaY_5_10__613->SetBinContent(315,1.012042);
   ThetaY_5_10__613->SetBinContent(316,1.012402);
   ThetaY_5_10__613->SetBinContent(317,1.005841);
   ThetaY_5_10__613->SetBinContent(318,1.002763);
   ThetaY_5_10__613->SetBinContent(319,1.018288);
   ThetaY_5_10__613->SetBinContent(320,0.9981577);
   ThetaY_5_10__613->SetBinContent(321,0.9587059);
   ThetaY_5_10__613->SetBinContent(322,0.9085374);
   ThetaY_5_10__613->SetBinContent(323,0.8261514);
   ThetaY_5_10__613->SetBinContent(324,0.7053246);
   ThetaY_5_10__613->SetBinContent(325,0.5099528);
   ThetaY_5_10__613->SetBinContent(326,0.2428892);
   ThetaY_5_10__613->SetBinContent(327,0.05288699);
   ThetaY_5_10__613->SetBinContent(328,0.0004044035);
   ThetaY_5_10__613->SetBinError(303,9.263324e-05);
   ThetaY_5_10__613->SetBinError(304,0.001082147);
   ThetaY_5_10__613->SetBinError(305,0.002336662);
   ThetaY_5_10__613->SetBinError(306,0.003391975);
   ThetaY_5_10__613->SetBinError(307,0.003955699);
   ThetaY_5_10__613->SetBinError(308,0.00431276);
   ThetaY_5_10__613->SetBinError(309,0.004504928);
   ThetaY_5_10__613->SetBinError(310,0.00463297);
   ThetaY_5_10__613->SetBinError(311,0.004739922);
   ThetaY_5_10__613->SetBinError(312,0.004737419);
   ThetaY_5_10__613->SetBinError(313,0.004750347);
   ThetaY_5_10__613->SetBinError(314,0.004768641);
   ThetaY_5_10__613->SetBinError(315,0.004768376);
   ThetaY_5_10__613->SetBinError(316,0.004769223);
   ThetaY_5_10__613->SetBinError(317,0.004753746);
   ThetaY_5_10__613->SetBinError(318,0.004746467);
   ThetaY_5_10__613->SetBinError(319,0.004783068);
   ThetaY_5_10__613->SetBinError(320,0.004735554);
   ThetaY_5_10__613->SetBinError(321,0.004641025);
   ThetaY_5_10__613->SetBinError(322,0.004517962);
   ThetaY_5_10__613->SetBinError(323,0.004308251);
   ThetaY_5_10__613->SetBinError(324,0.003980758);
   ThetaY_5_10__613->SetBinError(325,0.003384825);
   ThetaY_5_10__613->SetBinError(326,0.002336013);
   ThetaY_5_10__613->SetBinError(327,0.001090048);
   ThetaY_5_10__613->SetBinError(328,9.531882e-05);
   ThetaY_5_10__613->SetEntries(821678);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__613->SetLineColor(ci);
   ThetaY_5_10__613->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__613->SetMarkerColor(ci);
   ThetaY_5_10__613->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__613->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__613->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__613->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__613->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__613->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__613->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__613->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__613->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__613->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__613->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__613->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__613->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__613->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__613->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__613->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__613->Draw("AEsame");
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
   
   Double_t _fx3205[26] = {
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
   62.5};
   Double_t _fy3205[26] = {
   0,
   0,
   0.01438748,
   0.07510411,
   0.215873,
   0.7728887,
   0.9406043,
   0.9039708,
   1,
   0.9520543,
   0.9747288,
   0.9292646,
   0.991556,
   0.9808429,
   0.844716,
   0.9344806,
   0.9580045,
   0.8231949,
   0.4194174,
   0.07696994,
   0.008464558,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3205[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3205[26] = {
   0,
   0,
   0.0119022,
   0.02230116,
   0.03281401,
   0.05722217,
   0.06047949,
   0.05764539,
   0.05928559,
   0.05786685,
   0.0583978,
   0.05679124,
   0.05868103,
   0.05835044,
   0.05429745,
   0.05721727,
   0.0574954,
   0.05380225,
   0.03910609,
   0.01706998,
   0.005467413,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3205[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3205[26] = {
   17.8004,
   0.1235477,
   0.03308944,
   0.03016464,
   0.03822703,
   0.06162575,
   0.06450074,
   0.06144549,
   0.06291047,
   0.06149707,
   0.06200729,
   0.06037411,
   0.06226239,
   0.06193082,
   0.05790636,
   0.06083403,
   0.06105545,
   0.05744035,
   0.04293508,
   0.0213525,
   0.01116486,
   0.009126758,
   0.01262352,
   0.02650462,
   0.1217626,
   16.76011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3205,_fy3205,_felx3205,_fehx3205,_fely3205,_fehy3205);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3205 = new TH1F("Graph_Graph3205","",100,-100,100);
   Graph_Graph3205->SetMinimum(0);
   Graph_Graph3205->SetMaximum(1.5);
   Graph_Graph3205->SetDirectory(0);
   Graph_Graph3205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3205->SetLineColor(ci);
   Graph_Graph3205->GetXaxis()->SetRange(1,100);
   Graph_Graph3205->GetXaxis()->CenterTitle(true);
   Graph_Graph3205->GetXaxis()->SetLabelFont(42);
   Graph_Graph3205->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3205->GetXaxis()->SetTitleFont(42);
   Graph_Graph3205->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3205->GetYaxis()->CenterTitle(true);
   Graph_Graph3205->GetYaxis()->SetLabelFont(42);
   Graph_Graph3205->GetYaxis()->SetTitleFont(42);
   Graph_Graph3205->GetZaxis()->SetLabelFont(42);
   Graph_Graph3205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3205->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3205);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.120117,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__614 = new TH2D("ThetaY_vs_Y_5_10__614","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__614->SetBinContent(7892,17);
   ThetaY_vs_Y_5_10__614->SetBinContent(7918,2320);
   ThetaY_vs_Y_5_10__614->SetBinContent(7944,10817);
   ThetaY_vs_Y_5_10__614->SetBinContent(7970,22794);
   ThetaY_vs_Y_5_10__614->SetBinContent(7996,31000);
   ThetaY_vs_Y_5_10__614->SetBinContent(8022,36849);
   ThetaY_vs_Y_5_10__614->SetBinContent(8048,40206);
   ThetaY_vs_Y_5_10__614->SetBinContent(8074,42524);
   ThetaY_vs_Y_5_10__614->SetBinContent(8100,44510);
   ThetaY_vs_Y_5_10__614->SetBinContent(8126,44463);
   ThetaY_vs_Y_5_10__614->SetBinContent(8152,44706);
   ThetaY_vs_Y_5_10__614->SetBinContent(8178,45051);
   ThetaY_vs_Y_5_10__614->SetBinContent(8204,45046);
   ThetaY_vs_Y_5_10__614->SetBinContent(8230,45062);
   ThetaY_vs_Y_5_10__614->SetBinContent(8256,44770);
   ThetaY_vs_Y_5_10__614->SetBinContent(8282,44633);
   ThetaY_vs_Y_5_10__614->SetBinContent(8308,45324);
   ThetaY_vs_Y_5_10__614->SetBinContent(8334,44428);
   ThetaY_vs_Y_5_10__614->SetBinContent(8360,42672);
   ThetaY_vs_Y_5_10__614->SetBinContent(8386,40439);
   ThetaY_vs_Y_5_10__614->SetBinContent(8412,36772);
   ThetaY_vs_Y_5_10__614->SetBinContent(8438,31394);
   ThetaY_vs_Y_5_10__614->SetBinContent(8464,22698);
   ThetaY_vs_Y_5_10__614->SetBinContent(8490,10811);
   ThetaY_vs_Y_5_10__614->SetBinContent(8516,2354);
   ThetaY_vs_Y_5_10__614->SetBinContent(8542,18);
   ThetaY_vs_Y_5_10__614->SetEntries(821678);
   ThetaY_vs_Y_5_10__614->SetContour(20);
   ThetaY_vs_Y_5_10__614->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__614->SetContourLevel(1,2266.2);
   ThetaY_vs_Y_5_10__614->SetContourLevel(2,4532.4);
   ThetaY_vs_Y_5_10__614->SetContourLevel(3,6798.6);
   ThetaY_vs_Y_5_10__614->SetContourLevel(4,9064.8);
   ThetaY_vs_Y_5_10__614->SetContourLevel(5,11331);
   ThetaY_vs_Y_5_10__614->SetContourLevel(6,13597.2);
   ThetaY_vs_Y_5_10__614->SetContourLevel(7,15863.4);
   ThetaY_vs_Y_5_10__614->SetContourLevel(8,18129.6);
   ThetaY_vs_Y_5_10__614->SetContourLevel(9,20395.8);
   ThetaY_vs_Y_5_10__614->SetContourLevel(10,22662);
   ThetaY_vs_Y_5_10__614->SetContourLevel(11,24928.2);
   ThetaY_vs_Y_5_10__614->SetContourLevel(12,27194.4);
   ThetaY_vs_Y_5_10__614->SetContourLevel(13,29460.6);
   ThetaY_vs_Y_5_10__614->SetContourLevel(14,31726.8);
   ThetaY_vs_Y_5_10__614->SetContourLevel(15,33993);
   ThetaY_vs_Y_5_10__614->SetContourLevel(16,36259.2);
   ThetaY_vs_Y_5_10__614->SetContourLevel(17,38525.4);
   ThetaY_vs_Y_5_10__614->SetContourLevel(18,40791.6);
   ThetaY_vs_Y_5_10__614->SetContourLevel(19,43057.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__614->SetLineColor(ci);
   ThetaY_vs_Y_5_10__614->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__614->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__614->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__614->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__614->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__614->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__614->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__614->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__614->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__614->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__614->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__614->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__614->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__614->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__614->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_5_10","Reco vertices","lpf");
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
