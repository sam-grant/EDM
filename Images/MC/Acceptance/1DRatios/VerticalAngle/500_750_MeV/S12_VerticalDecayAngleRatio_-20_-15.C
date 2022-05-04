void S12_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.07230571,125,1.373808);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__369 = new TH1D("S12_ThetaY_mI20_mI15__369","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__369->SetBinContent(309,0.01515152);
   S12_ThetaY_mI20_mI15__369->SetBinContent(310,0.1363636);
   S12_ThetaY_mI20_mI15__369->SetBinContent(311,0.3636364);
   S12_ThetaY_mI20_mI15__369->SetBinContent(312,0.8484848);
   S12_ThetaY_mI20_mI15__369->SetBinContent(313,0.8787879);
   S12_ThetaY_mI20_mI15__369->SetBinContent(314,1.075758);
   S12_ThetaY_mI20_mI15__369->SetBinContent(315,1.060606);
   S12_ThetaY_mI20_mI15__369->SetBinContent(316,1);
   S12_ThetaY_mI20_mI15__369->SetBinContent(317,0.7272727);
   S12_ThetaY_mI20_mI15__369->SetBinContent(318,1);
   S12_ThetaY_mI20_mI15__369->SetBinContent(319,1.060606);
   S12_ThetaY_mI20_mI15__369->SetBinContent(320,0.9090909);
   S12_ThetaY_mI20_mI15__369->SetBinContent(321,1.015152);
   S12_ThetaY_mI20_mI15__369->SetBinContent(322,0.8939394);
   S12_ThetaY_mI20_mI15__369->SetBinContent(323,0.9545455);
   S12_ThetaY_mI20_mI15__369->SetBinContent(324,1);
   S12_ThetaY_mI20_mI15__369->SetBinContent(325,0.6818182);
   S12_ThetaY_mI20_mI15__369->SetBinContent(326,0.3484848);
   S12_ThetaY_mI20_mI15__369->SetBinContent(327,0.3030303);
   S12_ThetaY_mI20_mI15__369->SetBinContent(328,0.1060606);
   S12_ThetaY_mI20_mI15__369->SetBinContent(329,0.06060606);
   S12_ThetaY_mI20_mI15__369->SetBinContent(330,0.01515152);
   S12_ThetaY_mI20_mI15__369->SetBinError(309,0.01515152);
   S12_ThetaY_mI20_mI15__369->SetBinError(310,0.04545455);
   S12_ThetaY_mI20_mI15__369->SetBinError(311,0.07422696);
   S12_ThetaY_mI20_mI15__369->SetBinError(312,0.1133836);
   S12_ThetaY_mI20_mI15__369->SetBinError(313,0.1153905);
   S12_ThetaY_mI20_mI15__369->SetBinError(314,0.1276689);
   S12_ThetaY_mI20_mI15__369->SetBinError(315,0.1267667);
   S12_ThetaY_mI20_mI15__369->SetBinError(316,0.1230915);
   S12_ThetaY_mI20_mI15__369->SetBinError(317,0.1049728);
   S12_ThetaY_mI20_mI15__369->SetBinError(318,0.1230915);
   S12_ThetaY_mI20_mI15__369->SetBinError(319,0.1267667);
   S12_ThetaY_mI20_mI15__369->SetBinError(320,0.1173631);
   S12_ThetaY_mI20_mI15__369->SetBinError(321,0.1240205);
   S12_ThetaY_mI20_mI15__369->SetBinError(322,0.116381);
   S12_ThetaY_mI20_mI15__369->SetBinError(323,0.1202614);
   S12_ThetaY_mI20_mI15__369->SetBinError(324,0.1230915);
   S12_ThetaY_mI20_mI15__369->SetBinError(325,0.1016395);
   S12_ThetaY_mI20_mI15__369->SetBinError(326,0.07266411);
   S12_ThetaY_mI20_mI15__369->SetBinError(327,0.06775964);
   S12_ThetaY_mI20_mI15__369->SetBinError(328,0.04008714);
   S12_ThetaY_mI20_mI15__369->SetBinError(329,0.03030303);
   S12_ThetaY_mI20_mI15__369->SetBinError(330,0.01515152);
   S12_ThetaY_mI20_mI15__369->SetMinimum(0);
   S12_ThetaY_mI20_mI15__369->SetMaximum(1.229197);
   S12_ThetaY_mI20_mI15__369->SetEntries(954);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__369->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__369->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__369->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__369->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__369->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__369->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__369->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__369->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__369->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__369->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__369->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__369->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__369->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__369->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__369->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__369->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__370 = new TH1D("ThetaY_mI20_mI15__370","",630,-1575,1575);
   ThetaY_mI20_mI15__370->SetBinContent(300,0.006062647);
   ThetaY_mI20_mI15__370->SetBinContent(301,0.07260742);
   ThetaY_mI20_mI15__370->SetBinContent(302,0.2041572);
   ThetaY_mI20_mI15__370->SetBinContent(303,0.4312178);
   ThetaY_mI20_mI15__370->SetBinContent(304,0.6738681);
   ThetaY_mI20_mI15__370->SetBinContent(305,0.8310639);
   ThetaY_mI20_mI15__370->SetBinContent(306,0.9339364);
   ThetaY_mI20_mI15__370->SetBinContent(307,1.016071);
   ThetaY_mI20_mI15__370->SetBinContent(308,1.068902);
   ThetaY_mI20_mI15__370->SetBinContent(309,1.095944);
   ThetaY_mI20_mI15__370->SetBinContent(310,1.106337);
   ThetaY_mI20_mI15__370->SetBinContent(311,1.117452);
   ThetaY_mI20_mI15__370->SetBinContent(312,1.096329);
   ThetaY_mI20_mI15__370->SetBinContent(313,1.093923);
   ThetaY_mI20_mI15__370->SetBinContent(314,1.09195);
   ThetaY_mI20_mI15__370->SetBinContent(315,1.089448);
   ThetaY_mI20_mI15__370->SetBinContent(316,1.092095);
   ThetaY_mI20_mI15__370->SetBinContent(317,1.084685);
   ThetaY_mI20_mI15__370->SetBinContent(318,1.099553);
   ThetaY_mI20_mI15__370->SetBinContent(319,1.11264);
   ThetaY_mI20_mI15__370->SetBinContent(320,1.111774);
   ThetaY_mI20_mI15__370->SetBinContent(321,1.102632);
   ThetaY_mI20_mI15__370->SetBinContent(322,1.096954);
   ThetaY_mI20_mI15__370->SetBinContent(323,1.06616);
   ThetaY_mI20_mI15__370->SetBinContent(324,1);
   ThetaY_mI20_mI15__370->SetBinContent(325,0.9360054);
   ThetaY_mI20_mI15__370->SetBinContent(326,0.8143675);
   ThetaY_mI20_mI15__370->SetBinContent(327,0.668479);
   ThetaY_mI20_mI15__370->SetBinContent(328,0.4264543);
   ThetaY_mI20_mI15__370->SetBinContent(329,0.2128663);
   ThetaY_mI20_mI15__370->SetBinContent(330,0.07005726);
   ThetaY_mI20_mI15__370->SetBinContent(331,0.007265554);
   ThetaY_mI20_mI15__370->SetBinError(300,0.0005401036);
   ThetaY_mI20_mI15__370->SetBinError(301,0.001869117);
   ThetaY_mI20_mI15__370->SetBinError(302,0.003134211);
   ThetaY_mI20_mI15__370->SetBinError(303,0.004555061);
   ThetaY_mI20_mI15__370->SetBinError(304,0.005694208);
   ThetaY_mI20_mI15__370->SetBinError(305,0.006323581);
   ThetaY_mI20_mI15__370->SetBinError(306,0.006703545);
   ThetaY_mI20_mI15__370->SetBinError(307,0.006992104);
   ThetaY_mI20_mI15__370->SetBinError(308,0.007171581);
   ThetaY_mI20_mI15__370->SetBinError(309,0.007261729);
   ThetaY_mI20_mI15__370->SetBinError(310,0.00729608);
   ThetaY_mI20_mI15__370->SetBinError(311,0.007332638);
   ThetaY_mI20_mI15__370->SetBinError(312,0.007263004);
   ThetaY_mI20_mI15__370->SetBinError(313,0.00725503);
   ThetaY_mI20_mI15__370->SetBinError(314,0.007248486);
   ThetaY_mI20_mI15__370->SetBinError(315,0.007240177);
   ThetaY_mI20_mI15__370->SetBinError(316,0.007248965);
   ThetaY_mI20_mI15__370->SetBinError(317,0.007224331);
   ThetaY_mI20_mI15__370->SetBinError(318,0.007273675);
   ThetaY_mI20_mI15__370->SetBinError(319,0.007316835);
   ThetaY_mI20_mI15__370->SetBinError(320,0.007313986);
   ThetaY_mI20_mI15__370->SetBinError(321,0.007283853);
   ThetaY_mI20_mI15__370->SetBinError(322,0.007265076);
   ThetaY_mI20_mI15__370->SetBinError(323,0.007162375);
   ThetaY_mI20_mI15__370->SetBinError(324,0.006936588);
   ThetaY_mI20_mI15__370->SetBinError(325,0.006710966);
   ThetaY_mI20_mI15__370->SetBinError(326,0.006259737);
   ThetaY_mI20_mI15__370->SetBinError(327,0.005671393);
   ThetaY_mI20_mI15__370->SetBinError(328,0.004529832);
   ThetaY_mI20_mI15__370->SetBinError(329,0.003200364);
   ThetaY_mI20_mI15__370->SetBinError(330,0.001835999);
   ThetaY_mI20_mI15__370->SetBinError(331,0.0005912624);
   ThetaY_mI20_mI15__370->SetEntries(536851);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__370->SetLineColor(ci);
   ThetaY_mI20_mI15__370->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__370->SetMarkerColor(ci);
   ThetaY_mI20_mI15__370->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__370->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__370->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__370->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__370->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__370->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__370->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__370->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__370->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__370->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__370->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__370->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__370->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__370->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__370->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__370->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__370->Draw("AEsame");
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
   
   Double_t _fx3124[32] = {
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
   Double_t _fy3124[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01382508,
   0.1232569,
   0.3254157,
   0.7739329,
   0.8033362,
   0.985171,
   0.973526,
   0.9156717,
   0.6704924,
   0.9094609,
   0.9532337,
   0.8176939,
   0.9206622,
   0.8149286,
   0.8953118,
   1,
   0.728434,
   0.4279209,
   0.4533131,
   0.2487033,
   0.2847142,
   0.2162733,
   0};
   Double_t _felx3124[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3124[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01143684,
   0.04031843,
   0.06599197,
   0.1032358,
   0.1053101,
   0.1168221,
   0.1162568,
   0.1125861,
   0.09653944,
   0.1118213,
   0.1138299,
   0.1054032,
   0.1123569,
   0.1059277,
   0.1126559,
   0.1229708,
   0.1083059,
   0.08863207,
   0.1005786,
   0.09174889,
   0.1363088,
   0.1789347,
   0};
   Double_t _fehx3124[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3124[32] = {
   4.634782,
   0.3844137,
   0.1366609,
   0.06469383,
   0.04139698,
   0.03356632,
   0.02986883,
   0.02745427,
   0.02609726,
   0.03179345,
   0.05630615,
   0.08095775,
   0.1180241,
   0.1201161,
   0.1315759,
   0.1310498,
   0.1273652,
   0.1115564,
   0.1264999,
   0.1283135,
   0.1199571,
   0.1269887,
   0.1206856,
   0.1278143,
   0.139116,
   0.1257507,
   0.1092172,
   0.1258311,
   0.1340359,
   0.2253025,
   0.49789,
   3.862749};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3124,_fy3124,_felx3124,_fehx3124,_fely3124,_fehy3124);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3124 = new TH1F("Graph_Graph3124","",100,-100,100);
   Graph_Graph3124->SetMinimum(0);
   Graph_Graph3124->SetMaximum(1.5);
   Graph_Graph3124->SetDirectory(0);
   Graph_Graph3124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3124->SetLineColor(ci);
   Graph_Graph3124->GetXaxis()->SetRange(1,100);
   Graph_Graph3124->GetXaxis()->CenterTitle(true);
   Graph_Graph3124->GetXaxis()->SetLabelFont(42);
   Graph_Graph3124->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3124->GetXaxis()->SetTitleFont(42);
   Graph_Graph3124->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3124->GetYaxis()->CenterTitle(true);
   Graph_Graph3124->GetYaxis()->SetLabelFont(42);
   Graph_Graph3124->GetYaxis()->SetTitleFont(42);
   Graph_Graph3124->GetZaxis()->SetLabelFont(42);
   Graph_Graph3124->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3124->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3124);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.229197,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__371 = new TH2D("ThetaY_vs_Y_mI20_mI15__371","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7809,126);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7835,1509);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7861,4243);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7887,8962);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7913,14005);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7939,17272);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7965,19410);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(7991,21117);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8017,22215);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8043,22777);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8069,22993);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8095,23224);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8121,22785);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8147,22735);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8173,22694);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8199,22642);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8225,22697);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8251,22543);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8277,22852);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8303,23124);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8329,23106);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8355,22916);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8381,22798);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8407,22158);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8433,20783);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8459,19453);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8485,16925);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8511,13893);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8537,8863);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8563,4424);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8589,1456);
   ThetaY_vs_Y_mI20_mI15__371->SetBinContent(8615,151);
   ThetaY_vs_Y_mI20_mI15__371->SetEntries(536851);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__371->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__371->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__371->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__371->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__371->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__371->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__371->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__371->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__371->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__371->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__371->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__371->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__371->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__371->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__371->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__371->Draw("COL");
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
