void S12S18_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.8970589,125,17.04412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__468 = new TH1D("S12S18_ThetaY_mI45_mI40__468","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(315,0.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(316,1.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(317,2.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(318,4);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(319,5.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(320,2);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(321,3.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(322,3);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(323,2);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(324,1);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(325,2.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(326,2.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(327,3);
   S12S18_ThetaY_mI45_mI40__468->SetBinContent(330,1);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(315,0.5);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(316,0.8660254);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(317,1.118034);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(318,1.414214);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(319,1.658312);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(320,1);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(321,1.322876);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(322,1.224745);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(323,1);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(324,0.7071068);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(325,1.118034);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(326,1.118034);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(327,1.224745);
   S12S18_ThetaY_mI45_mI40__468->SetBinError(330,0.7071068);
   S12S18_ThetaY_mI45_mI40__468->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__468->SetMaximum(15.25);
   S12S18_ThetaY_mI45_mI40__468->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__468->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__468->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__468->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__468->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__468->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__468->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__468->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__468->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__468->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__468->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__468->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__468->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__468->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__468->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__468->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__468->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__469 = new TH1D("ThetaY_mI45_mI40__469","",630,-1575,1575);
   ThetaY_mI45_mI40__469->SetBinContent(300,0.04545455);
   ThetaY_mI45_mI40__469->SetBinContent(301,0.8409091);
   ThetaY_mI45_mI40__469->SetBinContent(302,2.352273);
   ThetaY_mI45_mI40__469->SetBinContent(303,5.352273);
   ThetaY_mI45_mI40__469->SetBinContent(304,8.136364);
   ThetaY_mI45_mI40__469->SetBinContent(305,10.10227);
   ThetaY_mI45_mI40__469->SetBinContent(306,11.14773);
   ThetaY_mI45_mI40__469->SetBinContent(307,12.70455);
   ThetaY_mI45_mI40__469->SetBinContent(308,12.82955);
   ThetaY_mI45_mI40__469->SetBinContent(309,13.375);
   ThetaY_mI45_mI40__469->SetBinContent(310,13.26136);
   ThetaY_mI45_mI40__469->SetBinContent(311,13.35227);
   ThetaY_mI45_mI40__469->SetBinContent(312,13.18182);
   ThetaY_mI45_mI40__469->SetBinContent(313,13.77273);
   ThetaY_mI45_mI40__469->SetBinContent(314,13.86364);
   ThetaY_mI45_mI40__469->SetBinContent(315,13.06818);
   ThetaY_mI45_mI40__469->SetBinContent(316,13.31818);
   ThetaY_mI45_mI40__469->SetBinContent(317,12.94318);
   ThetaY_mI45_mI40__469->SetBinContent(318,13.70455);
   ThetaY_mI45_mI40__469->SetBinContent(319,13.63636);
   ThetaY_mI45_mI40__469->SetBinContent(320,13.65909);
   ThetaY_mI45_mI40__469->SetBinContent(321,13.20455);
   ThetaY_mI45_mI40__469->SetBinContent(322,13.39773);
   ThetaY_mI45_mI40__469->SetBinContent(323,12.52273);
   ThetaY_mI45_mI40__469->SetBinContent(324,12);
   ThetaY_mI45_mI40__469->SetBinContent(325,11.11364);
   ThetaY_mI45_mI40__469->SetBinContent(326,10.05682);
   ThetaY_mI45_mI40__469->SetBinContent(327,8.102273);
   ThetaY_mI45_mI40__469->SetBinContent(328,4.909091);
   ThetaY_mI45_mI40__469->SetBinContent(329,2.375);
   ThetaY_mI45_mI40__469->SetBinContent(330,1);
   ThetaY_mI45_mI40__469->SetBinContent(331,0.05681818);
   ThetaY_mI45_mI40__469->SetBinError(300,0.02272727);
   ThetaY_mI45_mI40__469->SetBinError(301,0.0977537);
   ThetaY_mI45_mI40__469->SetBinError(302,0.1634943);
   ThetaY_mI45_mI40__469->SetBinError(303,0.2466197);
   ThetaY_mI45_mI40__469->SetBinError(304,0.3040702);
   ThetaY_mI45_mI40__469->SetBinError(305,0.3388194);
   ThetaY_mI45_mI40__469->SetBinError(306,0.3559195);
   ThetaY_mI45_mI40__469->SetBinError(307,0.3799603);
   ThetaY_mI45_mI40__469->SetBinError(308,0.3818249);
   ThetaY_mI45_mI40__469->SetBinError(309,0.3898572);
   ThetaY_mI45_mI40__469->SetBinError(310,0.3881975);
   ThetaY_mI45_mI40__469->SetBinError(311,0.3895258);
   ThetaY_mI45_mI40__469->SetBinError(312,0.3870315);
   ThetaY_mI45_mI40__469->SetBinError(313,0.3956113);
   ThetaY_mI45_mI40__469->SetBinError(314,0.3969148);
   ThetaY_mI45_mI40__469->SetBinError(315,0.3853597);
   ThetaY_mI45_mI40__469->SetBinError(316,0.3890282);
   ThetaY_mI45_mI40__469->SetBinError(317,0.3835122);
   ThetaY_mI45_mI40__469->SetBinError(318,0.3946308);
   ThetaY_mI45_mI40__469->SetBinError(319,0.3936479);
   ThetaY_mI45_mI40__469->SetBinError(320,0.3939758);
   ThetaY_mI45_mI40__469->SetBinError(321,0.387365);
   ThetaY_mI45_mI40__469->SetBinError(322,0.3901883);
   ThetaY_mI45_mI40__469->SetBinError(323,0.3772317);
   ThetaY_mI45_mI40__469->SetBinError(324,0.3692745);
   ThetaY_mI45_mI40__469->SetBinError(325,0.3553749);
   ThetaY_mI45_mI40__469->SetBinError(326,0.3380562);
   ThetaY_mI45_mI40__469->SetBinError(327,0.3034325);
   ThetaY_mI45_mI40__469->SetBinError(328,0.2361887);
   ThetaY_mI45_mI40__469->SetBinError(329,0.1642822);
   ThetaY_mI45_mI40__469->SetBinError(330,0.1066004);
   ThetaY_mI45_mI40__469->SetBinError(331,0.02540986);
   ThetaY_mI45_mI40__469->SetEntries(27578);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__469->SetLineColor(ci);
   ThetaY_mI45_mI40__469->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__469->SetMarkerColor(ci);
   ThetaY_mI45_mI40__469->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__469->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__469->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__469->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__469->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__469->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__469->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__469->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__469->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__469->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__469->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__469->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__469->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__469->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__469->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__469->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__469->Draw("AEsame");
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
   
   Double_t _fx3157[32] = {
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
   Double_t _fy3157[32] = {
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
   0,
   0,
   0,
   0.03826087,
   0.112628,
   0.1931519,
   0.291874,
   0.4033333,
   0.1464226,
   0.2650602,
   0.2239186,
   0.1597096,
   0.08333333,
   0.2249489,
   0.2485876,
   0.3702665,
   0,
   0,
   1,
   0};
   Double_t _felx3157[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3157[32] = {
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
   0,
   0,
   0,
   0.03165641,
   0.06135366,
   0.0835816,
   0.1013,
   0.1202404,
   0.07016806,
   0.09800657,
   0.08901174,
   0.07654453,
   0.05385759,
   0.09737,
   0.107626,
   0.1473959,
   0,
   0,
   0.650454,
   0};
   Double_t _fehx3157[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3157[32] = {
   25.71706,
   1.108392,
   0.3930736,
   0.1723216,
   0.113281,
   0.0912136,
   0.08265139,
   0.07251492,
   0.07180782,
   0.06887709,
   0.06946776,
   0.06899442,
   0.0698873,
   0.06688656,
   0.06644763,
   0.08810817,
   0.1098332,
   0.1311471,
   0.1446481,
   0.1629786,
   0.1161197,
   0.143426,
   0.1342842,
   0.126691,
   0.1101523,
   0.1528289,
   0.1689647,
   0.2226366,
   0.1879116,
   0.3892956,
   1.353887,
   19.58604};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3157,_fy3157,_felx3157,_fehx3157,_fely3157,_fehy3157);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3157 = new TH1F("Graph_Graph3157","",100,-100,100);
   Graph_Graph3157->SetMinimum(0);
   Graph_Graph3157->SetMaximum(1.5);
   Graph_Graph3157->SetDirectory(0);
   Graph_Graph3157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3157->SetLineColor(ci);
   Graph_Graph3157->GetXaxis()->SetRange(1,100);
   Graph_Graph3157->GetXaxis()->CenterTitle(true);
   Graph_Graph3157->GetXaxis()->SetLabelFont(42);
   Graph_Graph3157->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3157->GetXaxis()->SetTitleFont(42);
   Graph_Graph3157->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3157->GetYaxis()->CenterTitle(true);
   Graph_Graph3157->GetYaxis()->SetLabelFont(42);
   Graph_Graph3157->GetYaxis()->SetTitleFont(42);
   Graph_Graph3157->GetZaxis()->SetLabelFont(42);
   Graph_Graph3157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3157->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3157);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,15.25,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__470 = new TH2D("ThetaY_vs_Y_mI45_mI40__470","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7804,4);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7830,74);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7856,207);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7882,471);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7908,716);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7934,889);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7960,981);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(7986,1118);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8012,1129);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8038,1177);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8064,1167);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8090,1175);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8116,1160);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8142,1212);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8168,1220);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8194,1150);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8220,1172);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8246,1139);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8272,1206);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8298,1200);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8324,1202);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8350,1162);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8376,1179);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8402,1102);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8428,1056);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8454,978);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8480,885);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8506,713);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8532,432);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8558,209);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8584,88);
   ThetaY_vs_Y_mI45_mI40__470->SetBinContent(8610,5);
   ThetaY_vs_Y_mI45_mI40__470->SetEntries(27578);
   ThetaY_vs_Y_mI45_mI40__470->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(1,61);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(2,122);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(3,183);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(4,244);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(5,305);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(6,366);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(7,427);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(8,488);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(9,549);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(10,610);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(11,671);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(12,732);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(13,793);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(14,854);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(15,915);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(16,976);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(17,1037);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(18,1098);
   ThetaY_vs_Y_mI45_mI40__470->SetContourLevel(19,1159);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__470->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__470->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__470->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__470->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__470->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__470->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__470->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__470->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__470->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__470->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__470->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__470->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__470->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__470->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__470->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__470->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
