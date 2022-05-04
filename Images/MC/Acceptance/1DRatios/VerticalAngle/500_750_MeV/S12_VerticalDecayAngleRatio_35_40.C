void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.06890279,125,1.309153);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__402 = new TH1D("S12_ThetaY_35_40__402","",630,-1575,1575);
   S12_ThetaY_35_40__402->SetBinContent(302,0.125);
   S12_ThetaY_35_40__402->SetBinContent(303,0.1875);
   S12_ThetaY_35_40__402->SetBinContent(304,0.25);
   S12_ThetaY_35_40__402->SetBinContent(305,0.3125);
   S12_ThetaY_35_40__402->SetBinContent(306,0.8125);
   S12_ThetaY_35_40__402->SetBinContent(307,0.3125);
   S12_ThetaY_35_40__402->SetBinContent(308,0.125);
   S12_ThetaY_35_40__402->SetBinContent(309,0.5);
   S12_ThetaY_35_40__402->SetBinContent(310,0.6875);
   S12_ThetaY_35_40__402->SetBinContent(311,0.625);
   S12_ThetaY_35_40__402->SetBinContent(312,1);
   S12_ThetaY_35_40__402->SetBinContent(313,0.75);
   S12_ThetaY_35_40__402->SetBinContent(314,0.6875);
   S12_ThetaY_35_40__402->SetBinContent(315,0.4375);
   S12_ThetaY_35_40__402->SetBinContent(316,0.5625);
   S12_ThetaY_35_40__402->SetBinError(302,0.08838835);
   S12_ThetaY_35_40__402->SetBinError(303,0.1082532);
   S12_ThetaY_35_40__402->SetBinError(304,0.125);
   S12_ThetaY_35_40__402->SetBinError(305,0.1397542);
   S12_ThetaY_35_40__402->SetBinError(306,0.225347);
   S12_ThetaY_35_40__402->SetBinError(307,0.1397542);
   S12_ThetaY_35_40__402->SetBinError(308,0.08838835);
   S12_ThetaY_35_40__402->SetBinError(309,0.1767767);
   S12_ThetaY_35_40__402->SetBinError(310,0.207289);
   S12_ThetaY_35_40__402->SetBinError(311,0.1976424);
   S12_ThetaY_35_40__402->SetBinError(312,0.25);
   S12_ThetaY_35_40__402->SetBinError(313,0.2165064);
   S12_ThetaY_35_40__402->SetBinError(314,0.207289);
   S12_ThetaY_35_40__402->SetBinError(315,0.1653595);
   S12_ThetaY_35_40__402->SetBinError(316,0.1875);
   S12_ThetaY_35_40__402->SetMinimum(0);
   S12_ThetaY_35_40__402->SetMaximum(1.171347);
   S12_ThetaY_35_40__402->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__402->SetLineColor(ci);
   S12_ThetaY_35_40__402->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__402->SetMarkerColor(ci);
   S12_ThetaY_35_40__402->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__402->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__402->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__402->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__402->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__402->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__402->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__402->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__402->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__402->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__402->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__402->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__402->Draw("AE");
   
   TH1D *ThetaY_35_40__403 = new TH1D("ThetaY_35_40__403","",630,-1575,1575);
   ThetaY_35_40__403->SetBinContent(300,0.004346372);
   ThetaY_35_40__403->SetBinContent(301,0.06218656);
   ThetaY_35_40__403->SetBinContent(302,0.1932464);
   ThetaY_35_40__403->SetBinContent(303,0.4022066);
   ThetaY_35_40__403->SetBinContent(304,0.6165162);
   ThetaY_35_40__403->SetBinContent(305,0.7706453);
   ThetaY_35_40__403->SetBinContent(306,0.8940154);
   ThetaY_35_40__403->SetBinContent(307,0.9237713);
   ThetaY_35_40__403->SetBinContent(308,0.9836175);
   ThetaY_35_40__403->SetBinContent(309,1.017385);
   ThetaY_35_40__403->SetBinContent(310,1.064861);
   ThetaY_35_40__403->SetBinContent(311,1.024407);
   ThetaY_35_40__403->SetBinContent(312,1);
   ThetaY_35_40__403->SetBinContent(313,1.005684);
   ThetaY_35_40__403->SetBinContent(314,1.044467);
   ThetaY_35_40__403->SetBinContent(315,1.029756);
   ThetaY_35_40__403->SetBinContent(316,1.031762);
   ThetaY_35_40__403->SetBinContent(317,1.010364);
   ThetaY_35_40__403->SetBinContent(318,1.011702);
   ThetaY_35_40__403->SetBinContent(319,1.024741);
   ThetaY_35_40__403->SetBinContent(320,1.020395);
   ThetaY_35_40__403->SetBinContent(321,1.03009);
   ThetaY_35_40__403->SetBinContent(322,1.028753);
   ThetaY_35_40__403->SetBinContent(323,1.022401);
   ThetaY_35_40__403->SetBinContent(324,0.9578736);
   ThetaY_35_40__403->SetBinContent(325,0.8933467);
   ThetaY_35_40__403->SetBinContent(326,0.7769977);
   ThetaY_35_40__403->SetBinContent(327,0.5947844);
   ThetaY_35_40__403->SetBinContent(328,0.4098964);
   ThetaY_35_40__403->SetBinContent(329,0.1865597);
   ThetaY_35_40__403->SetBinContent(330,0.0708793);
   ThetaY_35_40__403->SetBinContent(331,0.005683718);
   ThetaY_35_40__403->SetBinError(300,0.001205467);
   ThetaY_35_40__403->SetBinError(301,0.00455974);
   ThetaY_35_40__403->SetBinError(302,0.008037991);
   ThetaY_35_40__403->SetBinError(303,0.01159622);
   ThetaY_35_40__403->SetBinError(304,0.01435701);
   ThetaY_35_40__403->SetBinError(305,0.01605163);
   ThetaY_35_40__403->SetBinError(306,0.01728878);
   ThetaY_35_40__403->SetBinError(307,0.01757414);
   ThetaY_35_40__403->SetBinError(308,0.01813447);
   ThetaY_35_40__403->SetBinError(309,0.01844313);
   ThetaY_35_40__403->SetBinError(310,0.01886854);
   ThetaY_35_40__403->SetBinError(311,0.01850666);
   ThetaY_35_40__403->SetBinError(312,0.01828487);
   ThetaY_35_40__403->SetBinError(313,0.01833676);
   ThetaY_35_40__403->SetBinError(314,0.01868698);
   ThetaY_35_40__403->SetBinError(315,0.01855491);
   ThetaY_35_40__403->SetBinError(316,0.01857298);
   ThetaY_35_40__403->SetBinError(317,0.01837938);
   ThetaY_35_40__403->SetBinError(318,0.01839154);
   ThetaY_35_40__403->SetBinError(319,0.01850968);
   ThetaY_35_40__403->SetBinError(320,0.01847038);
   ThetaY_35_40__403->SetBinError(321,0.01855793);
   ThetaY_35_40__403->SetBinError(322,0.01854588);
   ThetaY_35_40__403->SetBinError(323,0.01848853);
   ThetaY_35_40__403->SetBinError(324,0.01789559);
   ThetaY_35_40__403->SetBinError(325,0.01728231);
   ThetaY_35_40__403->SetBinError(326,0.01611765);
   ThetaY_35_40__403->SetBinError(327,0.0141017);
   ThetaY_35_40__403->SetBinError(328,0.01170655);
   ThetaY_35_40__403->SetBinError(329,0.007897701);
   ThetaY_35_40__403->SetBinError(330,0.004868011);
   ThetaY_35_40__403->SetBinError(331,0.001378504);
   ThetaY_35_40__403->SetEntries(72123);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__403->SetLineColor(ci);
   ThetaY_35_40__403->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__403->SetMarkerColor(ci);
   ThetaY_35_40__403->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__403->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__403->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__403->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__403->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__403->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__403->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__403->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__403->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__403->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__403->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__403->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__403->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__403->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__403->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__403->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__403->Draw("AEsame");
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
   
   Double_t _fx3135[32] = {
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
   Double_t _fy3135[32] = {
   0,
   0,
   0.6468426,
   0.4661783,
   0.4055043,
   0.4055043,
   0.9088211,
   0.3382872,
   0.1270819,
   0.4914558,
   0.645624,
   0.6101093,
   1,
   0.7457613,
   0.6582306,
   0.424858,
   0.5451839,
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
   0};
   Double_t _felx3135[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3135[32] = {
   0,
   0,
   0.4182534,
   0.2539427,
   0.1942351,
   0.1753106,
   0.2493454,
   0.146229,
   0.08210065,
   0.1702662,
   0.1919706,
   0.1899459,
   0.2479853,
   0.2126388,
   0.1957251,
   0.1568355,
   0.1785372,
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
   0};
   Double_t _fehx3135[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3135[32] = {
   28.4398,
   1.859488,
   0.8565657,
   0.4545808,
   0.3212503,
   0.2748203,
   0.3294904,
   0.2291966,
   0.1677443,
   0.2428335,
   0.2598464,
   0.2609365,
   0.3188106,
   0.2841578,
   0.2649327,
   0.2292335,
   0.2495085,
   0.1139182,
   0.1137676,
   0.1123195,
   0.1127981,
   0.1117361,
   0.1118814,
   0.1125767,
   0.1201629,
   0.1288453,
   0.1481464,
   0.1935549,
   0.2809254,
   0.6177856,
   1.630446,
   21.38133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3135,_fy3135,_felx3135,_fehx3135,_fely3135,_fehy3135);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3135 = new TH1F("Graph_Graph3135","",100,-100,100);
   Graph_Graph3135->SetMinimum(0);
   Graph_Graph3135->SetMaximum(1.5);
   Graph_Graph3135->SetDirectory(0);
   Graph_Graph3135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3135->SetLineColor(ci);
   Graph_Graph3135->GetXaxis()->SetRange(1,100);
   Graph_Graph3135->GetXaxis()->CenterTitle(true);
   Graph_Graph3135->GetXaxis()->SetLabelFont(42);
   Graph_Graph3135->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3135->GetXaxis()->SetTitleFont(42);
   Graph_Graph3135->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3135->GetYaxis()->CenterTitle(true);
   Graph_Graph3135->GetYaxis()->SetLabelFont(42);
   Graph_Graph3135->GetYaxis()->SetTitleFont(42);
   Graph_Graph3135->GetZaxis()->SetLabelFont(42);
   Graph_Graph3135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3135->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3135);
   
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
   
   TH2D *ThetaY_vs_Y_35_40__404 = new TH2D("ThetaY_vs_Y_35_40__404","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__404->SetBinContent(7820,13);
   ThetaY_vs_Y_35_40__404->SetBinContent(7846,186);
   ThetaY_vs_Y_35_40__404->SetBinContent(7872,578);
   ThetaY_vs_Y_35_40__404->SetBinContent(7898,1203);
   ThetaY_vs_Y_35_40__404->SetBinContent(7924,1844);
   ThetaY_vs_Y_35_40__404->SetBinContent(7950,2305);
   ThetaY_vs_Y_35_40__404->SetBinContent(7976,2674);
   ThetaY_vs_Y_35_40__404->SetBinContent(8002,2763);
   ThetaY_vs_Y_35_40__404->SetBinContent(8028,2942);
   ThetaY_vs_Y_35_40__404->SetBinContent(8054,3043);
   ThetaY_vs_Y_35_40__404->SetBinContent(8080,3185);
   ThetaY_vs_Y_35_40__404->SetBinContent(8106,3064);
   ThetaY_vs_Y_35_40__404->SetBinContent(8132,2991);
   ThetaY_vs_Y_35_40__404->SetBinContent(8158,3008);
   ThetaY_vs_Y_35_40__404->SetBinContent(8184,3124);
   ThetaY_vs_Y_35_40__404->SetBinContent(8210,3080);
   ThetaY_vs_Y_35_40__404->SetBinContent(8236,3086);
   ThetaY_vs_Y_35_40__404->SetBinContent(8262,3022);
   ThetaY_vs_Y_35_40__404->SetBinContent(8288,3026);
   ThetaY_vs_Y_35_40__404->SetBinContent(8314,3065);
   ThetaY_vs_Y_35_40__404->SetBinContent(8340,3052);
   ThetaY_vs_Y_35_40__404->SetBinContent(8366,3081);
   ThetaY_vs_Y_35_40__404->SetBinContent(8392,3077);
   ThetaY_vs_Y_35_40__404->SetBinContent(8418,3058);
   ThetaY_vs_Y_35_40__404->SetBinContent(8444,2865);
   ThetaY_vs_Y_35_40__404->SetBinContent(8470,2672);
   ThetaY_vs_Y_35_40__404->SetBinContent(8496,2324);
   ThetaY_vs_Y_35_40__404->SetBinContent(8522,1779);
   ThetaY_vs_Y_35_40__404->SetBinContent(8548,1226);
   ThetaY_vs_Y_35_40__404->SetBinContent(8574,558);
   ThetaY_vs_Y_35_40__404->SetBinContent(8600,212);
   ThetaY_vs_Y_35_40__404->SetBinContent(8626,17);
   ThetaY_vs_Y_35_40__404->SetEntries(72123);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__404->SetLineColor(ci);
   ThetaY_vs_Y_35_40__404->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__404->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__404->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__404->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__404->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__404->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__404->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__404->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__404->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__404->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__404->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__404->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__404->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__404->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__404->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_35_40","Reco vertices","lpf");
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
