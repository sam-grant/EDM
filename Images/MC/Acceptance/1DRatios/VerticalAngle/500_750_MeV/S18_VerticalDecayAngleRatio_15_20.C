void S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:41 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0650267,125,1.235507);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__447 = new TH1D("S18_ThetaY_15_20__447","",630,-1575,1575);
   S18_ThetaY_15_20__447->SetBinContent(302,0.01298701);
   S18_ThetaY_15_20__447->SetBinContent(303,0.07792208);
   S18_ThetaY_15_20__447->SetBinContent(304,0.1818182);
   S18_ThetaY_15_20__447->SetBinContent(305,0.4285714);
   S18_ThetaY_15_20__447->SetBinContent(306,0.6103896);
   S18_ThetaY_15_20__447->SetBinContent(307,0.7792208);
   S18_ThetaY_15_20__447->SetBinContent(308,0.5844156);
   S18_ThetaY_15_20__447->SetBinContent(309,0.8181818);
   S18_ThetaY_15_20__447->SetBinContent(310,0.8311688);
   S18_ThetaY_15_20__447->SetBinContent(311,0.7402597);
   S18_ThetaY_15_20__447->SetBinContent(312,1);
   S18_ThetaY_15_20__447->SetBinContent(313,0.7402597);
   S18_ThetaY_15_20__447->SetBinContent(314,0.6623377);
   S18_ThetaY_15_20__447->SetBinContent(315,0.8051948);
   S18_ThetaY_15_20__447->SetBinContent(316,0.7922078);
   S18_ThetaY_15_20__447->SetBinContent(317,0.7792208);
   S18_ThetaY_15_20__447->SetBinContent(318,0.9480519);
   S18_ThetaY_15_20__447->SetBinContent(319,0.6233766);
   S18_ThetaY_15_20__447->SetBinContent(320,0.4805195);
   S18_ThetaY_15_20__447->SetBinContent(321,0.1428571);
   S18_ThetaY_15_20__447->SetBinContent(322,0.01298701);
   S18_ThetaY_15_20__447->SetBinError(302,0.01298701);
   S18_ThetaY_15_20__447->SetBinError(303,0.03181156);
   S18_ThetaY_15_20__447->SetBinError(304,0.04859295);
   S18_ThetaY_15_20__447->SetBinError(305,0.07460471);
   S18_ThetaY_15_20__447->SetBinError(306,0.08903448);
   S18_ThetaY_15_20__447->SetBinError(307,0.100597);
   S18_ThetaY_15_20__447->SetBinError(308,0.08711953);
   S18_ThetaY_15_20__447->SetBinError(309,0.1030812);
   S18_ThetaY_15_20__447->SetBinError(310,0.1038961);
   S18_ThetaY_15_20__447->SetBinError(311,0.0980498);
   S18_ThetaY_15_20__447->SetBinError(312,0.1139606);
   S18_ThetaY_15_20__447->SetBinError(313,0.0980498);
   S18_ThetaY_15_20__447->SetBinError(314,0.09274582);
   S18_ThetaY_15_20__447->SetBinError(315,0.1022598);
   S18_ThetaY_15_20__447->SetBinError(316,0.1014318);
   S18_ThetaY_15_20__447->SetBinError(317,0.100597);
   S18_ThetaY_15_20__447->SetBinError(318,0.1109611);
   S18_ThetaY_15_20__447->SetBinError(319,0.08997667);
   S18_ThetaY_15_20__447->SetBinError(320,0.07899692);
   S18_ThetaY_15_20__447->SetBinError(321,0.04307305);
   S18_ThetaY_15_20__447->SetBinError(322,0.01298701);
   S18_ThetaY_15_20__447->SetMinimum(0);
   S18_ThetaY_15_20__447->SetMaximum(1.105454);
   S18_ThetaY_15_20__447->SetEntries(928);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__447->SetLineColor(ci);
   S18_ThetaY_15_20__447->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__447->SetMarkerColor(ci);
   S18_ThetaY_15_20__447->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__447->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__447->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__447->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__447->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__447->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__447->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__447->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__447->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__447->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__447->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__447->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__447->Draw("AE");
   
   TH1D *ThetaY_15_20__448 = new TH1D("ThetaY_15_20__448","",630,-1575,1575);
   ThetaY_15_20__448->SetBinContent(300,0.005349454);
   ThetaY_15_20__448->SetBinContent(301,0.06536772);
   ThetaY_15_20__448->SetBinContent(302,0.1868395);
   ThetaY_15_20__448->SetBinContent(303,0.3813334);
   ThetaY_15_20__448->SetBinContent(304,0.6004871);
   ThetaY_15_20__448->SetBinContent(305,0.7254817);
   ThetaY_15_20__448->SetBinContent(306,0.8551298);
   ThetaY_15_20__448->SetBinContent(307,0.920802);
   ThetaY_15_20__448->SetBinContent(308,0.9573348);
   ThetaY_15_20__448->SetBinContent(309,0.9992606);
   ThetaY_15_20__448->SetBinContent(310,0.9934763);
   ThetaY_15_20__448->SetBinContent(311,1.001218);
   ThetaY_15_20__448->SetBinContent(312,1);
   ThetaY_15_20__448->SetBinContent(313,0.9907363);
   ThetaY_15_20__448->SetBinContent(314,0.9950855);
   ThetaY_15_20__448->SetBinContent(315,0.9834732);
   ThetaY_15_20__448->SetBinContent(316,0.9931718);
   ThetaY_15_20__448->SetBinContent(317,0.9835167);
   ThetaY_15_20__448->SetBinContent(318,0.9943461);
   ThetaY_15_20__448->SetBinContent(319,0.9961293);
   ThetaY_15_20__448->SetBinContent(320,1.001609);
   ThetaY_15_20__448->SetBinContent(321,1.004958);
   ThetaY_15_20__448->SetBinContent(322,0.9957378);
   ThetaY_15_20__448->SetBinContent(323,0.9674249);
   ThetaY_15_20__448->SetBinContent(324,0.9024486);
   ThetaY_15_20__448->SetBinContent(325,0.8346453);
   ThetaY_15_20__448->SetBinContent(326,0.7390945);
   ThetaY_15_20__448->SetBinContent(327,0.5909625);
   ThetaY_15_20__448->SetBinContent(328,0.3920758);
   ThetaY_15_20__448->SetBinContent(329,0.1858827);
   ThetaY_15_20__448->SetBinContent(330,0.06410647);
   ThetaY_15_20__448->SetBinContent(331,0.00639325);
   ThetaY_15_20__448->SetBinError(300,0.000482344);
   ThetaY_15_20__448->SetBinError(301,0.001686102);
   ThetaY_15_20__448->SetBinError(302,0.002850601);
   ThetaY_15_20__448->SetBinError(303,0.004072439);
   ThetaY_15_20__448->SetBinError(304,0.00511039);
   ThetaY_15_20__448->SetBinError(305,0.005617142);
   ThetaY_15_20__448->SetBinError(306,0.006098432);
   ThetaY_15_20__448->SetBinError(307,0.006328274);
   ThetaY_15_20__448->SetBinError(308,0.006452591);
   ThetaY_15_20__448->SetBinError(309,0.00659237);
   ThetaY_15_20__448->SetBinError(310,0.006573262);
   ThetaY_15_20__448->SetBinError(311,0.006598823);
   ThetaY_15_20__448->SetBinError(312,0.006594808);
   ThetaY_15_20__448->SetBinError(313,0.006564191);
   ThetaY_15_20__448->SetBinError(314,0.006578583);
   ThetaY_15_20__448->SetBinError(315,0.006540086);
   ThetaY_15_20__448->SetBinError(316,0.006572255);
   ThetaY_15_20__448->SetBinError(317,0.00654023);
   ThetaY_15_20__448->SetBinError(318,0.006576139);
   ThetaY_15_20__448->SetBinError(319,0.006582033);
   ThetaY_15_20__448->SetBinError(320,0.006600112);
   ThetaY_15_20__448->SetBinError(321,0.006611137);
   ThetaY_15_20__448->SetBinError(322,0.006580739);
   ThetaY_15_20__448->SetBinError(323,0.006486506);
   ThetaY_15_20__448->SetBinError(324,0.006264889);
   ThetaY_15_20__448->SetBinError(325,0.006024946);
   ThetaY_15_20__448->SetBinError(326,0.005669597);
   ThetaY_15_20__448->SetBinError(327,0.005069698);
   ThetaY_15_20__448->SetBinError(328,0.004129403);
   ThetaY_15_20__448->SetBinError(329,0.002843293);
   ThetaY_15_20__448->SetBinError(330,0.001669756);
   ThetaY_15_20__448->SetBinError(331,0.0005273064);
   ThetaY_15_20__448->SetEntries(536056);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__448->SetLineColor(ci);
   ThetaY_15_20__448->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__448->SetMarkerColor(ci);
   ThetaY_15_20__448->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__448->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__448->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__448->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__448->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__448->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__448->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__448->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__448->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__448->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__448->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__448->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__448->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__448->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__448->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__448->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__448->Draw("AEsame");
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
   
   Double_t _fx3150[32] = {
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
   Double_t _fy3150[32] = {
   0,
   0,
   0.06950894,
   0.2043411,
   0.3027845,
   0.5907405,
   0.7137976,
   0.8462414,
   0.610461,
   0.8187872,
   0.8366268,
   0.7393594,
   1,
   0.7471814,
   0.6656088,
   0.8187257,
   0.7976543,
   0.7922802,
   0.9534426,
   0.6257989,
   0.4797475,
   0.1421523,
   0.0130426,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3150[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3150[32] = {
   0,
   0,
   0.05750356,
   0.0810767,
   0.07998381,
   0.1024092,
   0.1038677,
   0.1090957,
   0.09075334,
   0.1030217,
   0.1044482,
   0.09776115,
   0.1139004,
   0.09879668,
   0.09299877,
   0.1038369,
   0.1019822,
   0.1021301,
   0.1115111,
   0.09010287,
   0.07857331,
   0.04221011,
   0.01078953,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3150[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3150[32] = {
   4.503114,
   0.3659914,
   0.159899,
   0.1221142,
   0.1045401,
   0.1219195,
   0.1202114,
   0.1241619,
   0.1053683,
   0.1168829,
   0.1183845,
   0.1116335,
   0.1276817,
   0.1128162,
   0.1070026,
   0.1179274,
   0.1159408,
   0.1162326,
   0.1253887,
   0.1041183,
   0.09263526,
   0.05709347,
   0.02999397,
   0.02471547,
   0.02649506,
   0.02864752,
   0.0323513,
   0.0404611,
   0.06098772,
   0.1286539,
   0.3731965,
   3.7633};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3150,_fy3150,_felx3150,_fehx3150,_fely3150,_fehy3150);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3150 = new TH1F("Graph_Graph3150","",100,-100,100);
   Graph_Graph3150->SetMinimum(0);
   Graph_Graph3150->SetMaximum(1.5);
   Graph_Graph3150->SetDirectory(0);
   Graph_Graph3150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3150->SetLineColor(ci);
   Graph_Graph3150->GetXaxis()->SetRange(1,100);
   Graph_Graph3150->GetXaxis()->CenterTitle(true);
   Graph_Graph3150->GetXaxis()->SetLabelFont(42);
   Graph_Graph3150->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3150->GetXaxis()->SetTitleFont(42);
   Graph_Graph3150->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3150->GetYaxis()->CenterTitle(true);
   Graph_Graph3150->GetYaxis()->SetLabelFont(42);
   Graph_Graph3150->GetYaxis()->SetTitleFont(42);
   Graph_Graph3150->GetZaxis()->SetLabelFont(42);
   Graph_Graph3150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3150->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3150);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.105454,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__449 = new TH2D("ThetaY_vs_Y_15_20__449","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__449->SetBinContent(7816,123);
   ThetaY_vs_Y_15_20__449->SetBinContent(7842,1503);
   ThetaY_vs_Y_15_20__449->SetBinContent(7868,4296);
   ThetaY_vs_Y_15_20__449->SetBinContent(7894,8768);
   ThetaY_vs_Y_15_20__449->SetBinContent(7920,13807);
   ThetaY_vs_Y_15_20__449->SetBinContent(7946,16681);
   ThetaY_vs_Y_15_20__449->SetBinContent(7972,19662);
   ThetaY_vs_Y_15_20__449->SetBinContent(7998,21172);
   ThetaY_vs_Y_15_20__449->SetBinContent(8024,22012);
   ThetaY_vs_Y_15_20__449->SetBinContent(8050,22976);
   ThetaY_vs_Y_15_20__449->SetBinContent(8076,22843);
   ThetaY_vs_Y_15_20__449->SetBinContent(8102,23021);
   ThetaY_vs_Y_15_20__449->SetBinContent(8128,22993);
   ThetaY_vs_Y_15_20__449->SetBinContent(8154,22780);
   ThetaY_vs_Y_15_20__449->SetBinContent(8180,22880);
   ThetaY_vs_Y_15_20__449->SetBinContent(8206,22613);
   ThetaY_vs_Y_15_20__449->SetBinContent(8232,22836);
   ThetaY_vs_Y_15_20__449->SetBinContent(8258,22614);
   ThetaY_vs_Y_15_20__449->SetBinContent(8284,22863);
   ThetaY_vs_Y_15_20__449->SetBinContent(8310,22904);
   ThetaY_vs_Y_15_20__449->SetBinContent(8336,23030);
   ThetaY_vs_Y_15_20__449->SetBinContent(8362,23107);
   ThetaY_vs_Y_15_20__449->SetBinContent(8388,22895);
   ThetaY_vs_Y_15_20__449->SetBinContent(8414,22244);
   ThetaY_vs_Y_15_20__449->SetBinContent(8440,20750);
   ThetaY_vs_Y_15_20__449->SetBinContent(8466,19191);
   ThetaY_vs_Y_15_20__449->SetBinContent(8492,16994);
   ThetaY_vs_Y_15_20__449->SetBinContent(8518,13588);
   ThetaY_vs_Y_15_20__449->SetBinContent(8544,9015);
   ThetaY_vs_Y_15_20__449->SetBinContent(8570,4274);
   ThetaY_vs_Y_15_20__449->SetBinContent(8596,1474);
   ThetaY_vs_Y_15_20__449->SetBinContent(8622,147);
   ThetaY_vs_Y_15_20__449->SetEntries(536056);
   ThetaY_vs_Y_15_20__449->SetContour(20);
   ThetaY_vs_Y_15_20__449->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__449->SetContourLevel(1,1155.35);
   ThetaY_vs_Y_15_20__449->SetContourLevel(2,2310.7);
   ThetaY_vs_Y_15_20__449->SetContourLevel(3,3466.05);
   ThetaY_vs_Y_15_20__449->SetContourLevel(4,4621.4);
   ThetaY_vs_Y_15_20__449->SetContourLevel(5,5776.75);
   ThetaY_vs_Y_15_20__449->SetContourLevel(6,6932.1);
   ThetaY_vs_Y_15_20__449->SetContourLevel(7,8087.45);
   ThetaY_vs_Y_15_20__449->SetContourLevel(8,9242.8);
   ThetaY_vs_Y_15_20__449->SetContourLevel(9,10398.15);
   ThetaY_vs_Y_15_20__449->SetContourLevel(10,11553.5);
   ThetaY_vs_Y_15_20__449->SetContourLevel(11,12708.85);
   ThetaY_vs_Y_15_20__449->SetContourLevel(12,13864.2);
   ThetaY_vs_Y_15_20__449->SetContourLevel(13,15019.55);
   ThetaY_vs_Y_15_20__449->SetContourLevel(14,16174.9);
   ThetaY_vs_Y_15_20__449->SetContourLevel(15,17330.25);
   ThetaY_vs_Y_15_20__449->SetContourLevel(16,18485.6);
   ThetaY_vs_Y_15_20__449->SetContourLevel(17,19640.95);
   ThetaY_vs_Y_15_20__449->SetContourLevel(18,20796.3);
   ThetaY_vs_Y_15_20__449->SetContourLevel(19,21951.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__449->SetLineColor(ci);
   ThetaY_vs_Y_15_20__449->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__449->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__449->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__449->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__449->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__449->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__449->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__449->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__449->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__449->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__449->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__449->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__449->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__449->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__449->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
