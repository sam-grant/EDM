void S12_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0655776,125,1.245974);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__711 = new TH1D("S12_ThetaY_mI20_mI15__711","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__711->SetBinContent(311,0.0292887);
   S12_ThetaY_mI20_mI15__711->SetBinContent(312,0.4393305);
   S12_ThetaY_mI20_mI15__711->SetBinContent(313,0.7740586);
   S12_ThetaY_mI20_mI15__711->SetBinContent(314,1);
   S12_ThetaY_mI20_mI15__711->SetBinContent(315,0.9623431);
   S12_ThetaY_mI20_mI15__711->SetBinContent(316,0.9037657);
   S12_ThetaY_mI20_mI15__711->SetBinContent(317,0.9414226);
   S12_ThetaY_mI20_mI15__711->SetBinContent(318,0.9037657);
   S12_ThetaY_mI20_mI15__711->SetBinContent(319,0.8451883);
   S12_ThetaY_mI20_mI15__711->SetBinContent(320,0.7615063);
   S12_ThetaY_mI20_mI15__711->SetBinContent(321,0.7280335);
   S12_ThetaY_mI20_mI15__711->SetBinContent(322,0.5941423);
   S12_ThetaY_mI20_mI15__711->SetBinContent(323,0.4393305);
   S12_ThetaY_mI20_mI15__711->SetBinContent(324,0.1380753);
   S12_ThetaY_mI20_mI15__711->SetBinContent(325,0.0167364);
   S12_ThetaY_mI20_mI15__711->SetBinError(311,0.01107009);
   S12_ThetaY_mI20_mI15__711->SetBinError(312,0.04287427);
   S12_ThetaY_mI20_mI15__711->SetBinError(313,0.05690992);
   S12_ThetaY_mI20_mI15__711->SetBinError(314,0.06468462);
   S12_ThetaY_mI20_mI15__711->SetBinError(315,0.06345502);
   S12_ThetaY_mI20_mI15__711->SetBinError(316,0.06149347);
   S12_ThetaY_mI20_mI15__711->SetBinError(317,0.06276151);
   S12_ThetaY_mI20_mI15__711->SetBinError(318,0.06149347);
   S12_ThetaY_mI20_mI15__711->SetBinError(319,0.05946724);
   S12_ThetaY_mI20_mI15__711->SetBinError(320,0.0564466);
   S12_ThetaY_mI20_mI15__711->SetBinError(321,0.05519208);
   S12_ThetaY_mI20_mI15__711->SetBinError(322,0.04985931);
   S12_ThetaY_mI20_mI15__711->SetBinError(323,0.04287427);
   S12_ThetaY_mI20_mI15__711->SetBinError(324,0.02403583);
   S12_ThetaY_mI20_mI15__711->SetBinError(325,0.008368201);
   S12_ThetaY_mI20_mI15__711->SetMinimum(0);
   S12_ThetaY_mI20_mI15__711->SetMaximum(1.114819);
   S12_ThetaY_mI20_mI15__711->SetEntries(2265);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__711->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__711->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__711->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__711->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__711->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__711->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__711->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__711->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__711->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__711->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__711->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__711->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__711->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__711->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__711->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__711->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__712 = new TH1D("ThetaY_mI20_mI15__712","",630,-1575,1575);
   ThetaY_mI20_mI15__712->SetBinContent(305,0.0001311132);
   ThetaY_mI20_mI15__712->SetBinContent(306,0.05100302);
   ThetaY_mI20_mI15__712->SetBinContent(307,0.304117);
   ThetaY_mI20_mI15__712->SetBinContent(308,0.5798807);
   ThetaY_mI20_mI15__712->SetBinContent(309,0.7532778);
   ThetaY_mI20_mI15__712->SetBinContent(310,0.8523338);
   ThetaY_mI20_mI15__712->SetBinContent(311,0.9306739);
   ThetaY_mI20_mI15__712->SetBinContent(312,0.9682378);
   ThetaY_mI20_mI15__712->SetBinContent(313,0.9930182);
   ThetaY_mI20_mI15__712->SetBinContent(314,1);
   ThetaY_mI20_mI15__712->SetBinContent(315,1.001114);
   ThetaY_mI20_mI15__712->SetBinContent(316,1.013472);
   ThetaY_mI20_mI15__712->SetBinContent(317,1.004327);
   ThetaY_mI20_mI15__712->SetBinContent(318,1.002131);
   ThetaY_mI20_mI15__712->SetBinContent(319,0.9717123);
   ThetaY_mI20_mI15__712->SetBinContent(320,0.92874);
   ThetaY_mI20_mI15__712->SetBinContent(321,0.8498754);
   ThetaY_mI20_mI15__712->SetBinContent(322,0.7364626);
   ThetaY_mI20_mI15__712->SetBinContent(323,0.5803724);
   ThetaY_mI20_mI15__712->SetBinContent(324,0.3042153);
   ThetaY_mI20_mI15__712->SetBinContent(325,0.05231415);
   ThetaY_mI20_mI15__712->SetBinContent(326,9.833486e-05);
   ThetaY_mI20_mI15__712->SetBinError(305,6.555658e-05);
   ThetaY_mI20_mI15__712->SetBinError(306,0.001292978);
   ThetaY_mI20_mI15__712->SetBinError(307,0.003157283);
   ThetaY_mI20_mI15__712->SetBinError(308,0.004359759);
   ThetaY_mI20_mI15__712->SetBinError(309,0.00496902);
   ThetaY_mI20_mI15__712->SetBinError(310,0.005285645);
   ThetaY_mI20_mI15__712->SetBinError(311,0.005523214);
   ThetaY_mI20_mI15__712->SetBinError(312,0.005633576);
   ThetaY_mI20_mI15__712->SetBinError(313,0.005705211);
   ThetaY_mI20_mI15__712->SetBinError(314,0.005725233);
   ThetaY_mI20_mI15__712->SetBinError(315,0.005728422);
   ThetaY_mI20_mI15__712->SetBinError(316,0.005763668);
   ThetaY_mI20_mI15__712->SetBinError(317,0.005737605);
   ThetaY_mI20_mI15__712->SetBinError(318,0.005731328);
   ThetaY_mI20_mI15__712->SetBinError(319,0.005643675);
   ThetaY_mI20_mI15__712->SetBinError(320,0.005517473);
   ThetaY_mI20_mI15__712->SetBinError(321,0.005278017);
   ThetaY_mI20_mI15__712->SetBinError(322,0.004913246);
   ThetaY_mI20_mI15__712->SetBinError(323,0.004361607);
   ThetaY_mI20_mI15__712->SetBinError(324,0.003157793);
   ThetaY_mI20_mI15__712->SetBinError(325,0.001309492);
   ThetaY_mI20_mI15__712->SetBinError(326,5.677366e-05);
   ThetaY_mI20_mI15__712->SetEntries(453883);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__712->SetLineColor(ci);
   ThetaY_mI20_mI15__712->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__712->SetMarkerColor(ci);
   ThetaY_mI20_mI15__712->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__712->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__712->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__712->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__712->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__712->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__712->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__712->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__712->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__712->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__712->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__712->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__712->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__712->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__712->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__712->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__712->Draw("AEsame");
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
   
   Double_t _fx3238[22] = {
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
   Double_t _fy3238[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.03147042,
   0.4537424,
   0.7795009,
   1,
   0.9612718,
   0.8917521,
   0.9373669,
   0.9018442,
   0.8697927,
   0.8199348,
   0.8566355,
   0.8067515,
   0.7569805,
   0.4538737,
   0.3199211,
   0};
   Double_t _felx3238[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3238[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.01160696,
   0.04428789,
   0.05743187,
   0.06489104,
   0.06357534,
   0.06083953,
   0.06267255,
   0.06153046,
   0.0613547,
   0.06091542,
   0.06509505,
   0.06783319,
   0.07397228,
   0.07874245,
   0.1532615,
   0};
   Double_t _fehx3238[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3238[22] = {
   74.60784,
   0.15112,
   0.02533165,
   0.01328449,
   0.01022641,
   0.009037882,
   0.01695355,
   0.04883864,
   0.06182969,
   0.06924727,
   0.067928,
   0.06514107,
   0.06701198,
   0.06588106,
   0.06584541,
   0.06562063,
   0.07024275,
   0.07379474,
   0.08158449,
   0.0937613,
   0.2535256,
   108.1445};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3238,_fy3238,_felx3238,_fehx3238,_fely3238,_fehy3238);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3238 = new TH1F("Graph_Graph3238","",100,-100,100);
   Graph_Graph3238->SetMinimum(0);
   Graph_Graph3238->SetMaximum(1.5);
   Graph_Graph3238->SetDirectory(0);
   Graph_Graph3238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3238->SetLineColor(ci);
   Graph_Graph3238->GetXaxis()->SetRange(1,100);
   Graph_Graph3238->GetXaxis()->CenterTitle(true);
   Graph_Graph3238->GetXaxis()->SetLabelFont(42);
   Graph_Graph3238->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3238->GetXaxis()->SetTitleFont(42);
   Graph_Graph3238->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3238->GetYaxis()->CenterTitle(true);
   Graph_Graph3238->GetYaxis()->SetLabelFont(42);
   Graph_Graph3238->GetYaxis()->SetTitleFont(42);
   Graph_Graph3238->GetZaxis()->SetLabelFont(42);
   Graph_Graph3238->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3238->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3238);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.114819,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__713 = new TH2D("ThetaY_vs_Y_mI20_mI15__713","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(7939,4);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(7965,1556);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(7991,9278);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8017,17691);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8043,22981);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8069,26003);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8095,28393);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8121,29539);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8147,30295);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8173,30508);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8199,30542);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8225,30919);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8251,30640);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8277,30573);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8303,29645);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8329,28334);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8355,25928);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8381,22468);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8407,17706);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8433,9281);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8459,1596);
   ThetaY_vs_Y_mI20_mI15__713->SetBinContent(8485,3);
   ThetaY_vs_Y_mI20_mI15__713->SetEntries(453883);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__713->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__713->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__713->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__713->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__713->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__713->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__713->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__713->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__713->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__713->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__713->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__713->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__713->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__713->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__713->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__713->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-20_-15","Reco vertices","lpf");
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
