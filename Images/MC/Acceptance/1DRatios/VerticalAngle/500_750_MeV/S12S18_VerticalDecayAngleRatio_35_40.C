void S12S18_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.06890279,125,1.309153);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_35_40__516 = new TH1D("S12S18_ThetaY_35_40__516","",630,-1575,1575);
   S12S18_ThetaY_35_40__516->SetBinContent(301,0.03846154);
   S12S18_ThetaY_35_40__516->SetBinContent(302,0.07692308);
   S12S18_ThetaY_35_40__516->SetBinContent(303,0.1538462);
   S12S18_ThetaY_35_40__516->SetBinContent(304,0.2692308);
   S12S18_ThetaY_35_40__516->SetBinContent(305,0.4230769);
   S12S18_ThetaY_35_40__516->SetBinContent(306,0.6153846);
   S12S18_ThetaY_35_40__516->SetBinContent(307,0.5384615);
   S12S18_ThetaY_35_40__516->SetBinContent(308,0.3076923);
   S12S18_ThetaY_35_40__516->SetBinContent(309,0.6153846);
   S12S18_ThetaY_35_40__516->SetBinContent(310,0.8846154);
   S12S18_ThetaY_35_40__516->SetBinContent(311,0.6923077);
   S12S18_ThetaY_35_40__516->SetBinContent(312,1);
   S12S18_ThetaY_35_40__516->SetBinContent(313,0.6153846);
   S12S18_ThetaY_35_40__516->SetBinContent(314,0.9230769);
   S12S18_ThetaY_35_40__516->SetBinContent(315,0.6153846);
   S12S18_ThetaY_35_40__516->SetBinContent(316,0.4615385);
   S12S18_ThetaY_35_40__516->SetBinContent(319,0.03846154);
   S12S18_ThetaY_35_40__516->SetBinError(301,0.03846154);
   S12S18_ThetaY_35_40__516->SetBinError(302,0.05439283);
   S12S18_ThetaY_35_40__516->SetBinError(303,0.07692308);
   S12S18_ThetaY_35_40__516->SetBinError(304,0.1017597);
   S12S18_ThetaY_35_40__516->SetBinError(305,0.1275625);
   S12S18_ThetaY_35_40__516->SetBinError(306,0.1538462);
   S12S18_ThetaY_35_40__516->SetBinError(307,0.1439099);
   S12S18_ThetaY_35_40__516->SetBinError(308,0.1087857);
   S12S18_ThetaY_35_40__516->SetBinError(309,0.1538462);
   S12S18_ThetaY_35_40__516->SetBinError(310,0.1844551);
   S12S18_ThetaY_35_40__516->SetBinError(311,0.1631785);
   S12S18_ThetaY_35_40__516->SetBinError(312,0.1961161);
   S12S18_ThetaY_35_40__516->SetBinError(313,0.1538462);
   S12S18_ThetaY_35_40__516->SetBinError(314,0.1884223);
   S12S18_ThetaY_35_40__516->SetBinError(315,0.1538462);
   S12S18_ThetaY_35_40__516->SetBinError(316,0.1332347);
   S12S18_ThetaY_35_40__516->SetBinError(319,0.03846154);
   S12S18_ThetaY_35_40__516->SetMinimum(0);
   S12S18_ThetaY_35_40__516->SetMaximum(1.171347);
   S12S18_ThetaY_35_40__516->SetEntries(215);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__516->SetLineColor(ci);
   S12S18_ThetaY_35_40__516->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__516->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__516->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__516->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__516->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__516->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__516->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__516->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__516->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__516->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__516->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__516->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__516->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__516->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__516->Draw("AE");
   
   TH1D *ThetaY_35_40__517 = new TH1D("ThetaY_35_40__517","",630,-1575,1575);
   ThetaY_35_40__517->SetBinContent(300,0.004346372);
   ThetaY_35_40__517->SetBinContent(301,0.06218656);
   ThetaY_35_40__517->SetBinContent(302,0.1932464);
   ThetaY_35_40__517->SetBinContent(303,0.4022066);
   ThetaY_35_40__517->SetBinContent(304,0.6165162);
   ThetaY_35_40__517->SetBinContent(305,0.7706453);
   ThetaY_35_40__517->SetBinContent(306,0.8940154);
   ThetaY_35_40__517->SetBinContent(307,0.9237713);
   ThetaY_35_40__517->SetBinContent(308,0.9836175);
   ThetaY_35_40__517->SetBinContent(309,1.017385);
   ThetaY_35_40__517->SetBinContent(310,1.064861);
   ThetaY_35_40__517->SetBinContent(311,1.024407);
   ThetaY_35_40__517->SetBinContent(312,1);
   ThetaY_35_40__517->SetBinContent(313,1.005684);
   ThetaY_35_40__517->SetBinContent(314,1.044467);
   ThetaY_35_40__517->SetBinContent(315,1.029756);
   ThetaY_35_40__517->SetBinContent(316,1.031762);
   ThetaY_35_40__517->SetBinContent(317,1.010364);
   ThetaY_35_40__517->SetBinContent(318,1.011702);
   ThetaY_35_40__517->SetBinContent(319,1.024741);
   ThetaY_35_40__517->SetBinContent(320,1.020395);
   ThetaY_35_40__517->SetBinContent(321,1.03009);
   ThetaY_35_40__517->SetBinContent(322,1.028753);
   ThetaY_35_40__517->SetBinContent(323,1.022401);
   ThetaY_35_40__517->SetBinContent(324,0.9578736);
   ThetaY_35_40__517->SetBinContent(325,0.8933467);
   ThetaY_35_40__517->SetBinContent(326,0.7769977);
   ThetaY_35_40__517->SetBinContent(327,0.5947844);
   ThetaY_35_40__517->SetBinContent(328,0.4098964);
   ThetaY_35_40__517->SetBinContent(329,0.1865597);
   ThetaY_35_40__517->SetBinContent(330,0.0708793);
   ThetaY_35_40__517->SetBinContent(331,0.005683718);
   ThetaY_35_40__517->SetBinError(300,0.001205467);
   ThetaY_35_40__517->SetBinError(301,0.00455974);
   ThetaY_35_40__517->SetBinError(302,0.008037991);
   ThetaY_35_40__517->SetBinError(303,0.01159622);
   ThetaY_35_40__517->SetBinError(304,0.01435701);
   ThetaY_35_40__517->SetBinError(305,0.01605163);
   ThetaY_35_40__517->SetBinError(306,0.01728878);
   ThetaY_35_40__517->SetBinError(307,0.01757414);
   ThetaY_35_40__517->SetBinError(308,0.01813447);
   ThetaY_35_40__517->SetBinError(309,0.01844313);
   ThetaY_35_40__517->SetBinError(310,0.01886854);
   ThetaY_35_40__517->SetBinError(311,0.01850666);
   ThetaY_35_40__517->SetBinError(312,0.01828487);
   ThetaY_35_40__517->SetBinError(313,0.01833676);
   ThetaY_35_40__517->SetBinError(314,0.01868698);
   ThetaY_35_40__517->SetBinError(315,0.01855491);
   ThetaY_35_40__517->SetBinError(316,0.01857298);
   ThetaY_35_40__517->SetBinError(317,0.01837938);
   ThetaY_35_40__517->SetBinError(318,0.01839154);
   ThetaY_35_40__517->SetBinError(319,0.01850968);
   ThetaY_35_40__517->SetBinError(320,0.01847038);
   ThetaY_35_40__517->SetBinError(321,0.01855793);
   ThetaY_35_40__517->SetBinError(322,0.01854588);
   ThetaY_35_40__517->SetBinError(323,0.01848853);
   ThetaY_35_40__517->SetBinError(324,0.01789559);
   ThetaY_35_40__517->SetBinError(325,0.01728231);
   ThetaY_35_40__517->SetBinError(326,0.01611765);
   ThetaY_35_40__517->SetBinError(327,0.0141017);
   ThetaY_35_40__517->SetBinError(328,0.01170655);
   ThetaY_35_40__517->SetBinError(329,0.007897701);
   ThetaY_35_40__517->SetBinError(330,0.004868011);
   ThetaY_35_40__517->SetBinError(331,0.001378504);
   ThetaY_35_40__517->SetEntries(72123);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__517->SetLineColor(ci);
   ThetaY_35_40__517->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__517->SetMarkerColor(ci);
   ThetaY_35_40__517->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__517->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__517->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__517->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__517->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__517->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__517->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__517->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__517->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__517->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__517->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__517->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__517->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__517->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__517->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__517->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__517->Draw("AEsame");
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
   
   Double_t _fx3173[32] = {
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
   Double_t _fy3173[32] = {
   0,
   0.6184864,
   0.398057,
   0.3825053,
   0.436697,
   0.5489905,
   0.6883378,
   0.5828948,
   0.312817,
   0.6048687,
   0.830733,
   0.6758134,
   1,
   0.6119067,
   0.8837782,
   0.5976024,
   0.4473304,
   0,
   0,
   0.03753294,
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
   0};
   Double_t _felx3173[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3173[32] = {
   0,
   0.5121628,
   0.2573867,
   0.1833024,
   0.1613131,
   0.1633359,
   0.1707484,
   0.1542691,
   0.1083807,
   0.1499921,
   0.172546,
   0.1582372,
   0.1956612,
   0.1517417,
   0.1797949,
   0.1481859,
   0.1275413,
   0,
   0,
   0.03105092,
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
   0};
   Double_t _fehx3173[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3173[32] = {
   17.50142,
   1.434881,
   0.5271174,
   0.303343,
   0.2358969,
   0.2211576,
   0.2195407,
   0.2017995,
   0.1545766,
   0.192827,
   0.2128044,
   0.200538,
   0.2383626,
   0.1950785,
   0.2207796,
   0.1905027,
   0.1704347,
   0.07010351,
   0.07001082,
   0.08635446,
   0.06941422,
   0.06876066,
   0.06885007,
   0.06927798,
   0.07394637,
   0.0792894,
   0.09116704,
   0.1191107,
   0.1728772,
   0.3801757,
   1.003352,
   13.15774};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3173,_fy3173,_felx3173,_fehx3173,_fely3173,_fehy3173);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3173 = new TH1F("Graph_Graph3173","",100,-100,100);
   Graph_Graph3173->SetMinimum(0);
   Graph_Graph3173->SetMaximum(1.5);
   Graph_Graph3173->SetDirectory(0);
   Graph_Graph3173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3173->SetLineColor(ci);
   Graph_Graph3173->GetXaxis()->SetRange(1,100);
   Graph_Graph3173->GetXaxis()->CenterTitle(true);
   Graph_Graph3173->GetXaxis()->SetLabelFont(42);
   Graph_Graph3173->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3173->GetXaxis()->SetTitleFont(42);
   Graph_Graph3173->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3173->GetYaxis()->CenterTitle(true);
   Graph_Graph3173->GetYaxis()->SetLabelFont(42);
   Graph_Graph3173->GetYaxis()->SetTitleFont(42);
   Graph_Graph3173->GetZaxis()->SetLabelFont(42);
   Graph_Graph3173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3173->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3173);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.171347,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__518 = new TH2D("ThetaY_vs_Y_35_40__518","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__518->SetBinContent(7820,13);
   ThetaY_vs_Y_35_40__518->SetBinContent(7846,186);
   ThetaY_vs_Y_35_40__518->SetBinContent(7872,578);
   ThetaY_vs_Y_35_40__518->SetBinContent(7898,1203);
   ThetaY_vs_Y_35_40__518->SetBinContent(7924,1844);
   ThetaY_vs_Y_35_40__518->SetBinContent(7950,2305);
   ThetaY_vs_Y_35_40__518->SetBinContent(7976,2674);
   ThetaY_vs_Y_35_40__518->SetBinContent(8002,2763);
   ThetaY_vs_Y_35_40__518->SetBinContent(8028,2942);
   ThetaY_vs_Y_35_40__518->SetBinContent(8054,3043);
   ThetaY_vs_Y_35_40__518->SetBinContent(8080,3185);
   ThetaY_vs_Y_35_40__518->SetBinContent(8106,3064);
   ThetaY_vs_Y_35_40__518->SetBinContent(8132,2991);
   ThetaY_vs_Y_35_40__518->SetBinContent(8158,3008);
   ThetaY_vs_Y_35_40__518->SetBinContent(8184,3124);
   ThetaY_vs_Y_35_40__518->SetBinContent(8210,3080);
   ThetaY_vs_Y_35_40__518->SetBinContent(8236,3086);
   ThetaY_vs_Y_35_40__518->SetBinContent(8262,3022);
   ThetaY_vs_Y_35_40__518->SetBinContent(8288,3026);
   ThetaY_vs_Y_35_40__518->SetBinContent(8314,3065);
   ThetaY_vs_Y_35_40__518->SetBinContent(8340,3052);
   ThetaY_vs_Y_35_40__518->SetBinContent(8366,3081);
   ThetaY_vs_Y_35_40__518->SetBinContent(8392,3077);
   ThetaY_vs_Y_35_40__518->SetBinContent(8418,3058);
   ThetaY_vs_Y_35_40__518->SetBinContent(8444,2865);
   ThetaY_vs_Y_35_40__518->SetBinContent(8470,2672);
   ThetaY_vs_Y_35_40__518->SetBinContent(8496,2324);
   ThetaY_vs_Y_35_40__518->SetBinContent(8522,1779);
   ThetaY_vs_Y_35_40__518->SetBinContent(8548,1226);
   ThetaY_vs_Y_35_40__518->SetBinContent(8574,558);
   ThetaY_vs_Y_35_40__518->SetBinContent(8600,212);
   ThetaY_vs_Y_35_40__518->SetBinContent(8626,17);
   ThetaY_vs_Y_35_40__518->SetEntries(72123);
   ThetaY_vs_Y_35_40__518->SetContour(20);
   ThetaY_vs_Y_35_40__518->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__518->SetContourLevel(1,159.25);
   ThetaY_vs_Y_35_40__518->SetContourLevel(2,318.5);
   ThetaY_vs_Y_35_40__518->SetContourLevel(3,477.75);
   ThetaY_vs_Y_35_40__518->SetContourLevel(4,637);
   ThetaY_vs_Y_35_40__518->SetContourLevel(5,796.25);
   ThetaY_vs_Y_35_40__518->SetContourLevel(6,955.5);
   ThetaY_vs_Y_35_40__518->SetContourLevel(7,1114.75);
   ThetaY_vs_Y_35_40__518->SetContourLevel(8,1274);
   ThetaY_vs_Y_35_40__518->SetContourLevel(9,1433.25);
   ThetaY_vs_Y_35_40__518->SetContourLevel(10,1592.5);
   ThetaY_vs_Y_35_40__518->SetContourLevel(11,1751.75);
   ThetaY_vs_Y_35_40__518->SetContourLevel(12,1911);
   ThetaY_vs_Y_35_40__518->SetContourLevel(13,2070.25);
   ThetaY_vs_Y_35_40__518->SetContourLevel(14,2229.5);
   ThetaY_vs_Y_35_40__518->SetContourLevel(15,2388.75);
   ThetaY_vs_Y_35_40__518->SetContourLevel(16,2548);
   ThetaY_vs_Y_35_40__518->SetContourLevel(17,2707.25);
   ThetaY_vs_Y_35_40__518->SetContourLevel(18,2866.5);
   ThetaY_vs_Y_35_40__518->SetContourLevel(19,3025.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__518->SetLineColor(ci);
   ThetaY_vs_Y_35_40__518->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__518->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__518->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__518->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__518->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__518->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__518->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__518->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__518->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__518->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__518->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__518->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__518->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__518->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__518->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
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
