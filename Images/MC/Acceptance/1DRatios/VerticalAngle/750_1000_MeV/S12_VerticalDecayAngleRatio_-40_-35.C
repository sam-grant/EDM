void S12_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:43 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06651221,125,1.263732);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__528 = new TH1D("S12_ThetaY_mI40_mI35__528","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__528->SetBinContent(314,0.1034483);
   S12_ThetaY_mI40_mI35__528->SetBinContent(315,0.4137931);
   S12_ThetaY_mI40_mI35__528->SetBinContent(316,1);
   S12_ThetaY_mI40_mI35__528->SetBinContent(317,0.6206897);
   S12_ThetaY_mI40_mI35__528->SetBinContent(318,0.6206897);
   S12_ThetaY_mI40_mI35__528->SetBinContent(319,0.6206897);
   S12_ThetaY_mI40_mI35__528->SetBinContent(320,0.9310345);
   S12_ThetaY_mI40_mI35__528->SetBinContent(321,0.7931034);
   S12_ThetaY_mI40_mI35__528->SetBinContent(322,0.7931034);
   S12_ThetaY_mI40_mI35__528->SetBinContent(323,0.7586207);
   S12_ThetaY_mI40_mI35__528->SetBinContent(324,0.5517241);
   S12_ThetaY_mI40_mI35__528->SetBinContent(325,0.137931);
   S12_ThetaY_mI40_mI35__528->SetBinContent(326,0.1034483);
   S12_ThetaY_mI40_mI35__528->SetBinContent(327,0.03448276);
   S12_ThetaY_mI40_mI35__528->SetBinError(314,0.05972589);
   S12_ThetaY_mI40_mI35__528->SetBinError(315,0.1194518);
   S12_ThetaY_mI40_mI35__528->SetBinError(316,0.1856953);
   S12_ThetaY_mI40_mI35__528->SetBinError(317,0.146298);
   S12_ThetaY_mI40_mI35__528->SetBinError(318,0.146298);
   S12_ThetaY_mI40_mI35__528->SetBinError(319,0.146298);
   S12_ThetaY_mI40_mI35__528->SetBinError(320,0.1791777);
   S12_ThetaY_mI40_mI35__528->SetBinError(321,0.1653735);
   S12_ThetaY_mI40_mI35__528->SetBinError(322,0.1653735);
   S12_ThetaY_mI40_mI35__528->SetBinError(323,0.1617385);
   S12_ThetaY_mI40_mI35__528->SetBinError(324,0.137931);
   S12_ThetaY_mI40_mI35__528->SetBinError(325,0.06896552);
   S12_ThetaY_mI40_mI35__528->SetBinError(326,0.05972589);
   S12_ThetaY_mI40_mI35__528->SetBinError(327,0.03448276);
   S12_ThetaY_mI40_mI35__528->SetMinimum(0);
   S12_ThetaY_mI40_mI35__528->SetMaximum(1.130708);
   S12_ThetaY_mI40_mI35__528->SetEntries(217);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__528->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__528->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__528->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__528->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__528->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__528->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__528->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__528->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__528->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__528->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__528->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__528->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__528->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__528->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__528->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__528->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__529 = new TH1D("ThetaY_mI40_mI35__529","",630,-1575,1575);
   ThetaY_mI40_mI35__529->SetBinContent(303,0.0005527916);
   ThetaY_mI40_mI35__529->SetBinContent(304,0.05500276);
   ThetaY_mI40_mI35__529->SetBinContent(305,0.2459923);
   ThetaY_mI40_mI35__529->SetBinContent(306,0.5127142);
   ThetaY_mI40_mI35__529->SetBinContent(307,0.7092316);
   ThetaY_mI40_mI35__529->SetBinContent(308,0.8427308);
   ThetaY_mI40_mI35__529->SetBinContent(309,0.8888889);
   ThetaY_mI40_mI35__529->SetBinContent(310,0.9668325);
   ThetaY_mI40_mI35__529->SetBinContent(311,1.000276);
   ThetaY_mI40_mI35__529->SetBinContent(312,1.001935);
   ThetaY_mI40_mI35__529->SetBinContent(313,1.013543);
   ThetaY_mI40_mI35__529->SetBinContent(314,1.021559);
   ThetaY_mI40_mI35__529->SetBinContent(315,0.9997236);
   ThetaY_mI40_mI35__529->SetBinContent(316,1);
   ThetaY_mI40_mI35__529->SetBinContent(317,1.011332);
   ThetaY_mI40_mI35__529->SetBinContent(318,1.027916);
   ThetaY_mI40_mI35__529->SetBinContent(319,1.024046);
   ThetaY_mI40_mI35__529->SetBinContent(320,0.9878386);
   ThetaY_mI40_mI35__529->SetBinContent(321,0.9776119);
   ThetaY_mI40_mI35__529->SetBinContent(322,0.9262023);
   ThetaY_mI40_mI35__529->SetBinContent(323,0.8349917);
   ThetaY_mI40_mI35__529->SetBinContent(324,0.7200111);
   ThetaY_mI40_mI35__529->SetBinContent(325,0.5320619);
   ThetaY_mI40_mI35__529->SetBinContent(326,0.2482034);
   ThetaY_mI40_mI35__529->SetBinContent(327,0.05472637);
   ThetaY_mI40_mI35__529->SetBinContent(328,0.0005527916);
   ThetaY_mI40_mI35__529->SetBinError(303,0.0003908827);
   ThetaY_mI40_mI35__529->SetBinError(304,0.003899043);
   ThetaY_mI40_mI35__529->SetBinError(305,0.008245679);
   ThetaY_mI40_mI35__529->SetBinError(306,0.01190429);
   ThetaY_mI40_mI35__529->SetBinError(307,0.01400102);
   ThetaY_mI40_mI35__529->SetBinError(308,0.01526195);
   ThetaY_mI40_mI35__529->SetBinError(309,0.01567435);
   ThetaY_mI40_mI35__529->SetBinError(310,0.01634712);
   ThetaY_mI40_mI35__529->SetBinError(311,0.01662745);
   ThetaY_mI40_mI35__529->SetBinError(312,0.01664123);
   ThetaY_mI40_mI35__529->SetBinError(313,0.01673736);
   ThetaY_mI40_mI35__529->SetBinError(314,0.01680341);
   ThetaY_mI40_mI35__529->SetBinError(315,0.01662286);
   ThetaY_mI40_mI35__529->SetBinError(316,0.01662516);
   ThetaY_mI40_mI35__529->SetBinError(317,0.01671909);
   ThetaY_mI40_mI35__529->SetBinError(318,0.01685561);
   ThetaY_mI40_mI35__529->SetBinError(319,0.01682386);
   ThetaY_mI40_mI35__529->SetBinError(320,0.01652375);
   ThetaY_mI40_mI35__529->SetBinError(321,0.016438);
   ThetaY_mI40_mI35__529->SetBinError(322,0.01599995);
   ThetaY_mI40_mI35__529->SetBinError(323,0.01519171);
   ThetaY_mI40_mI35__529->SetBinError(324,0.01410702);
   ThetaY_mI40_mI35__529->SetBinError(325,0.01212682);
   ThetaY_mI40_mI35__529->SetBinError(326,0.008282656);
   ThetaY_mI40_mI35__529->SetBinError(327,0.003889234);
   ThetaY_mI40_mI35__529->SetBinError(328,0.0003908827);
   ThetaY_mI40_mI35__529->SetEntries(67311);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__529->SetLineColor(ci);
   ThetaY_mI40_mI35__529->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__529->SetMarkerColor(ci);
   ThetaY_mI40_mI35__529->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__529->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__529->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__529->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__529->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__529->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__529->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__529->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__529->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__529->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__529->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__529->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__529->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__529->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__529->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__529->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__529->Draw("AEsame");
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
   
   Double_t _fx3177[26] = {
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
   Double_t _fy3177[26] = {
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
   0.1012651,
   0.4139075,
   1,
   0.6137347,
   0.6038331,
   0.6061148,
   0.9424966,
   0.8112661,
   0.8562961,
   0.9085368,
   0.7662718,
   0.2592387,
   0.4167883,
   0.630094,
   0};
   Double_t _felx3177[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3177[26] = {
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
   0.05512844,
   0.1179809,
   0.1853327,
   0.1436372,
   0.1413145,
   0.1418497,
   0.1809091,
   0.168445,
   0.1778253,
   0.1928865,
   0.1900947,
   0.1241699,
   0.2271087,
   0.5217429,
   0};
   Double_t _fehx3177[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3177[26] = {
   188.4569,
   1.159543,
   0.2583382,
   0.12388,
   0.08954238,
   0.07535345,
   0.07143939,
   0.06567861,
   0.06348211,
   0.06337701,
   0.06265094,
   0.09858235,
   0.1576385,
   0.2233988,
   0.1820049,
   0.1790594,
   0.1797381,
   0.2195438,
   0.2077246,
   0.2193039,
   0.23902,
   0.2444225,
   0.2053584,
   0.4067584,
   1.461027,
   188.4569};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3177,_fy3177,_felx3177,_fehx3177,_fely3177,_fehy3177);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3177 = new TH1F("Graph_Graph3177","",100,-100,100);
   Graph_Graph3177->SetMinimum(0);
   Graph_Graph3177->SetMaximum(1.5);
   Graph_Graph3177->SetDirectory(0);
   Graph_Graph3177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3177->SetLineColor(ci);
   Graph_Graph3177->GetXaxis()->SetRange(1,100);
   Graph_Graph3177->GetXaxis()->CenterTitle(true);
   Graph_Graph3177->GetXaxis()->SetLabelFont(42);
   Graph_Graph3177->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3177->GetXaxis()->SetTitleFont(42);
   Graph_Graph3177->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3177->GetYaxis()->CenterTitle(true);
   Graph_Graph3177->GetYaxis()->SetLabelFont(42);
   Graph_Graph3177->GetYaxis()->SetTitleFont(42);
   Graph_Graph3177->GetZaxis()->SetLabelFont(42);
   Graph_Graph3177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3177->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3177);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.130708,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__530 = new TH2D("ThetaY_vs_Y_mI40_mI35__530","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(7883,2);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(7909,199);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(7935,890);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(7961,1855);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(7987,2566);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8013,3049);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8039,3216);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8065,3498);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8091,3619);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8117,3625);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8143,3667);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8169,3696);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8195,3617);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8221,3618);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8247,3659);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8273,3719);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8299,3705);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8325,3574);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8351,3537);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8377,3351);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8403,3021);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8429,2605);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8455,1925);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8481,898);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8507,198);
   ThetaY_vs_Y_mI40_mI35__530->SetBinContent(8533,2);
   ThetaY_vs_Y_mI40_mI35__530->SetEntries(67311);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__530->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__530->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__530->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__530->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__530->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__530->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__530->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__530->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__530->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__530->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__530->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__530->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__530->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__530->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__530->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__530->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-40_-35","Reco vertices","lpf");
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
