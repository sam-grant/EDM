void S12_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.06477822,125,1.230786);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI15_mI10__372 = new TH1D("S12_ThetaY_mI15_mI10__372","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__372->SetBinContent(309,0.06185567);
   S12_ThetaY_mI15_mI10__372->SetBinContent(310,0.4948454);
   S12_ThetaY_mI15_mI10__372->SetBinContent(311,0.7525773);
   S12_ThetaY_mI15_mI10__372->SetBinContent(312,0.9175258);
   S12_ThetaY_mI15_mI10__372->SetBinContent(313,0.9484536);
   S12_ThetaY_mI15_mI10__372->SetBinContent(314,0.9690722);
   S12_ThetaY_mI15_mI10__372->SetBinContent(315,0.814433);
   S12_ThetaY_mI15_mI10__372->SetBinContent(316,0.8350515);
   S12_ThetaY_mI15_mI10__372->SetBinContent(317,0.9484536);
   S12_ThetaY_mI15_mI10__372->SetBinContent(318,1);
   S12_ThetaY_mI15_mI10__372->SetBinContent(319,0.7835052);
   S12_ThetaY_mI15_mI10__372->SetBinContent(320,0.8556701);
   S12_ThetaY_mI15_mI10__372->SetBinContent(321,0.8969072);
   S12_ThetaY_mI15_mI10__372->SetBinContent(322,0.8556701);
   S12_ThetaY_mI15_mI10__372->SetBinContent(323,0.8350515);
   S12_ThetaY_mI15_mI10__372->SetBinContent(324,0.8762887);
   S12_ThetaY_mI15_mI10__372->SetBinContent(325,0.5670103);
   S12_ThetaY_mI15_mI10__372->SetBinContent(326,0.3402062);
   S12_ThetaY_mI15_mI10__372->SetBinContent(327,0.07216495);
   S12_ThetaY_mI15_mI10__372->SetBinContent(328,0.03092784);
   S12_ThetaY_mI15_mI10__372->SetBinError(309,0.02525247);
   S12_ThetaY_mI15_mI10__372->SetBinError(310,0.07142478);
   S12_ThetaY_mI15_mI10__372->SetBinError(311,0.08808251);
   S12_ThetaY_mI15_mI10__372->SetBinError(312,0.09725754);
   S12_ThetaY_mI15_mI10__372->SetBinError(313,0.09888312);
   S12_ThetaY_mI15_mI10__372->SetBinError(314,0.09995216);
   S12_ThetaY_mI15_mI10__372->SetBinError(315,0.09163087);
   S12_ThetaY_mI15_mI10__372->SetBinError(316,0.09278351);
   S12_ThetaY_mI15_mI10__372->SetBinError(317,0.09888312);
   S12_ThetaY_mI15_mI10__372->SetBinError(318,0.1015346);
   S12_ThetaY_mI15_mI10__372->SetBinError(319,0.08987421);
   S12_ThetaY_mI15_mI10__372->SetBinError(320,0.093922);
   S12_ThetaY_mI15_mI10__372->SetBinError(321,0.09615855);
   S12_ThetaY_mI15_mI10__372->SetBinError(322,0.093922);
   S12_ThetaY_mI15_mI10__372->SetBinError(323,0.09278351);
   S12_ThetaY_mI15_mI10__372->SetBinError(324,0.09504685);
   S12_ThetaY_mI15_mI10__372->SetBinError(325,0.07645565);
   S12_ThetaY_mI15_mI10__372->SetBinError(326,0.0592223);
   S12_ThetaY_mI15_mI10__372->SetBinError(327,0.02727579);
   S12_ThetaY_mI15_mI10__372->SetBinError(328,0.01785619);
   S12_ThetaY_mI15_mI10__372->SetMinimum(0);
   S12_ThetaY_mI15_mI10__372->SetMaximum(1.10123);
   S12_ThetaY_mI15_mI10__372->SetEntries(1344);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__372->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__372->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__372->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__372->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__372->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__372->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__372->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__372->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__372->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__372->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__372->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__372->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__372->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__372->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__372->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__372->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__373 = new TH1D("ThetaY_mI15_mI10__373","",630,-1575,1575);
   ThetaY_mI15_mI10__373->SetBinContent(300,0.004471558);
   ThetaY_mI15_mI10__373->SetBinContent(301,0.06522086);
   ThetaY_mI15_mI10__373->SetBinContent(302,0.1877735);
   ThetaY_mI15_mI10__373->SetBinContent(303,0.3844901);
   ThetaY_mI15_mI10__373->SetBinContent(304,0.595324);
   ThetaY_mI15_mI10__373->SetBinContent(305,0.7425341);
   ThetaY_mI15_mI10__373->SetBinContent(306,0.8427609);
   ThetaY_mI15_mI10__373->SetBinContent(307,0.9094829);
   ThetaY_mI15_mI10__373->SetBinContent(308,0.950238);
   ThetaY_mI15_mI10__373->SetBinContent(309,0.986777);
   ThetaY_mI15_mI10__373->SetBinContent(310,0.9911527);
   ThetaY_mI15_mI10__373->SetBinContent(311,0.9968699);
   ThetaY_mI15_mI10__373->SetBinContent(312,0.9874796);
   ThetaY_mI15_mI10__373->SetBinContent(313,0.9724041);
   ThetaY_mI15_mI10__373->SetBinContent(314,0.9739053);
   ThetaY_mI15_mI10__373->SetBinContent(315,0.9798461);
   ThetaY_mI15_mI10__373->SetBinContent(316,0.97563);
   ThetaY_mI15_mI10__373->SetBinContent(317,0.9812514);
   ThetaY_mI15_mI10__373->SetBinContent(318,1);
   ThetaY_mI15_mI10__373->SetBinContent(319,0.9897154);
   ThetaY_mI15_mI10__373->SetBinContent(320,1.001118);
   ThetaY_mI15_mI10__373->SetBinContent(321,0.9914721);
   ThetaY_mI15_mI10__373->SetBinContent(322,0.9912166);
   ThetaY_mI15_mI10__373->SetBinContent(323,0.9530486);
   ThetaY_mI15_mI10__373->SetBinContent(324,0.90466);
   ThetaY_mI15_mI10__373->SetBinContent(325,0.8403654);
   ThetaY_mI15_mI10__373->SetBinContent(326,0.7379987);
   ThetaY_mI15_mI10__373->SetBinContent(327,0.60382);
   ThetaY_mI15_mI10__373->SetBinContent(328,0.3902073);
   ThetaY_mI15_mI10__373->SetBinContent(329,0.1910633);
   ThetaY_mI15_mI10__373->SetBinContent(330,0.06113258);
   ThetaY_mI15_mI10__373->SetBinContent(331,0.005206171);
   ThetaY_mI15_mI10__373->SetBinError(300,0.0003779156);
   ThetaY_mI15_mI10__373->SetBinError(301,0.001443307);
   ThetaY_mI15_mI10__373->SetBinError(302,0.002448965);
   ThetaY_mI15_mI10__373->SetBinError(303,0.003504354);
   ThetaY_mI15_mI10__373->SetBinError(304,0.004360558);
   ThetaY_mI15_mI10__373->SetBinError(305,0.00486994);
   ThetaY_mI15_mI10__373->SetBinError(306,0.00518821);
   ThetaY_mI15_mI10__373->SetBinError(307,0.005389676);
   ThetaY_mI15_mI10__373->SetBinError(308,0.005509112);
   ThetaY_mI15_mI10__373->SetBinError(309,0.005614032);
   ThetaY_mI15_mI10__373->SetBinError(310,0.005626466);
   ThetaY_mI15_mI10__373->SetBinError(311,0.00564267);
   ThetaY_mI15_mI10__373->SetBinError(312,0.005616031);
   ThetaY_mI15_mI10__373->SetBinError(313,0.005572997);
   ThetaY_mI15_mI10__373->SetBinError(314,0.005577297);
   ThetaY_mI15_mI10__373->SetBinError(315,0.005594282);
   ThetaY_mI15_mI10__373->SetBinError(316,0.005582233);
   ThetaY_mI15_mI10__373->SetBinError(317,0.005598292);
   ThetaY_mI15_mI10__373->SetBinError(318,0.005651522);
   ThetaY_mI15_mI10__373->SetBinError(319,0.005622385);
   ThetaY_mI15_mI10__373->SetBinError(320,0.00565468);
   ThetaY_mI15_mI10__373->SetBinError(321,0.005627372);
   ThetaY_mI15_mI10__373->SetBinError(322,0.005626647);
   ThetaY_mI15_mI10__373->SetBinError(323,0.005517253);
   ThetaY_mI15_mI10__373->SetBinError(324,0.005375367);
   ThetaY_mI15_mI10__373->SetBinError(325,0.005180832);
   ThetaY_mI15_mI10__373->SetBinError(326,0.004855044);
   ThetaY_mI15_mI10__373->SetBinError(327,0.004391563);
   ThetaY_mI15_mI10__373->SetBinError(328,0.003530312);
   ThetaY_mI15_mI10__373->SetBinError(329,0.002470325);
   ThetaY_mI15_mI10__373->SetBinError(330,0.001397339);
   ThetaY_mI15_mI10__373->SetBinError(331,0.0004077788);
   ThetaY_mI15_mI10__373->SetEntries(726013);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__373->SetLineColor(ci);
   ThetaY_mI15_mI10__373->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__373->SetMarkerColor(ci);
   ThetaY_mI15_mI10__373->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__373->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__373->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__373->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__373->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__373->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__373->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__373->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__373->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__373->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__373->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__373->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__373->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__373->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__373->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__373->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__373->Draw("AEsame");
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
   
   Double_t _fx3125[32] = {
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
   Double_t _fy3125[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06268455,
   0.4992625,
   0.7549404,
   0.9291592,
   0.9753698,
   0.9950374,
   0.8311846,
   0.8559101,
   0.9665755,
   1,
   0.7916469,
   0.8547146,
   0.9046217,
   0.8632524,
   0.8761898,
   0.9686387,
   0.6747188,
   0.4609848,
   0.119514,
   0.07926001,
   0,
   0,
   0};
   Double_t _felx3125[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3125[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02486622,
   0.07186479,
   0.0882579,
   0.09844517,
   0.1016558,
   0.1026036,
   0.09343584,
   0.09502866,
   0.1007379,
   0.1015146,
   0.09071754,
   0.09375019,
   0.09693294,
   0.0946879,
   0.09728326,
   0.105012,
   0.09079468,
   0.07989377,
   0.0440817,
   0.04313996,
   0,
   0,
   0};
   Double_t _fehx3125[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3125[32] = {
   4.272548,
   0.2911363,
   0.101093,
   0.04936683,
   0.03188271,
   0.0255616,
   0.02252153,
   0.02086924,
   0.01997415,
   0.03744563,
   0.08303902,
   0.09923553,
   0.1094756,
   0.1128497,
   0.1137749,
   0.1045831,
   0.1062175,
   0.1118305,
   0.1123863,
   0.1017637,
   0.1046471,
   0.1079244,
   0.105694,
   0.1087381,
   0.1170681,
   0.1039234,
   0.0951085,
   0.06438996,
   0.07711716,
   0.09935204,
   0.3106156,
   3.666263};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3125,_fy3125,_felx3125,_fehx3125,_fely3125,_fehy3125);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3125 = new TH1F("Graph_Graph3125","",100,-100,100);
   Graph_Graph3125->SetMinimum(0);
   Graph_Graph3125->SetMaximum(1.5);
   Graph_Graph3125->SetDirectory(0);
   Graph_Graph3125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3125->SetLineColor(ci);
   Graph_Graph3125->GetXaxis()->SetRange(1,100);
   Graph_Graph3125->GetXaxis()->CenterTitle(true);
   Graph_Graph3125->GetXaxis()->SetLabelFont(42);
   Graph_Graph3125->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3125->GetXaxis()->SetTitleFont(42);
   Graph_Graph3125->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3125->GetYaxis()->CenterTitle(true);
   Graph_Graph3125->GetYaxis()->SetLabelFont(42);
   Graph_Graph3125->GetYaxis()->SetTitleFont(42);
   Graph_Graph3125->GetZaxis()->SetLabelFont(42);
   Graph_Graph3125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3125->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3125);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.10123,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__374 = new TH2D("ThetaY_vs_Y_mI15_mI10__374","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7810,140);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7836,2042);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7862,5879);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7888,12038);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7914,18639);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7940,23248);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7966,26386);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(7992,28475);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8018,29751);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8044,30895);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8070,31032);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8096,31211);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8122,30917);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8148,30445);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8174,30492);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8200,30678);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8226,30546);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8252,30722);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8278,31309);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8304,30987);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8330,31344);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8356,31042);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8382,31034);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8408,29839);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8434,28324);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8460,26311);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8486,23106);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8512,18905);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8538,12217);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8564,5982);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8590,1914);
   ThetaY_vs_Y_mI15_mI10__374->SetBinContent(8616,163);
   ThetaY_vs_Y_mI15_mI10__374->SetEntries(726013);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__374->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__374->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__374->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__374->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__374->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__374->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__374->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__374->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__374->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__374->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__374->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__374->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__374->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__374->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__374->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__374->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
