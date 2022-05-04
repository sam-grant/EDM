void S18_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.06487727,125,1.232668);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_5_10__783 = new TH1D("S18_ThetaY_5_10__783","",630,-1575,1575);
   S18_ThetaY_5_10__783->SetBinContent(307,0.0137741);
   S18_ThetaY_5_10__783->SetBinContent(308,0.1239669);
   S18_ThetaY_5_10__783->SetBinContent(309,0.4655647);
   S18_ThetaY_5_10__783->SetBinContent(310,0.8209366);
   S18_ThetaY_5_10__783->SetBinContent(311,0.8787879);
   S18_ThetaY_5_10__783->SetBinContent(312,0.9283747);
   S18_ThetaY_5_10__783->SetBinContent(313,0.9641873);
   S18_ThetaY_5_10__783->SetBinContent(314,0.8374656);
   S18_ThetaY_5_10__783->SetBinContent(315,0.9063361);
   S18_ThetaY_5_10__783->SetBinContent(316,1);
   S18_ThetaY_5_10__783->SetBinContent(317,0.8980716);
   S18_ThetaY_5_10__783->SetBinContent(318,0.9559229);
   S18_ThetaY_5_10__783->SetBinContent(319,0.8567493);
   S18_ThetaY_5_10__783->SetBinContent(320,0.5454545);
   S18_ThetaY_5_10__783->SetBinContent(321,0.09366391);
   S18_ThetaY_5_10__783->SetBinContent(322,0.005509642);
   S18_ThetaY_5_10__783->SetBinError(307,0.006159967);
   S18_ThetaY_5_10__783->SetBinError(308,0.0184799);
   S18_ThetaY_5_10__783->SetBinError(309,0.03581267);
   S18_ThetaY_5_10__783->SetBinError(310,0.04755558);
   S18_ThetaY_5_10__783->SetBinError(311,0.04920268);
   S18_ThetaY_5_10__783->SetBinError(312,0.05057179);
   S18_ThetaY_5_10__783->SetBinError(313,0.05153798);
   S18_ThetaY_5_10__783->SetBinError(314,0.04803194);
   S18_ThetaY_5_10__783->SetBinError(315,0.04996793);
   S18_ThetaY_5_10__783->SetBinError(316,0.05248639);
   S18_ThetaY_5_10__783->SetBinError(317,0.04973959);
   S18_ThetaY_5_10__783->SetBinError(318,0.05131663);
   S18_ThetaY_5_10__783->SetBinError(319,0.0485818);
   S18_ThetaY_5_10__783->SetBinError(320,0.03876377);
   S18_ThetaY_5_10__783->SetBinError(321,0.01606323);
   S18_ThetaY_5_10__783->SetBinError(322,0.003895905);
   S18_ThetaY_5_10__783->SetMinimum(0);
   S18_ThetaY_5_10__783->SetMaximum(1.102914);
   S18_ThetaY_5_10__783->SetEntries(3737);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__783->SetLineColor(ci);
   S18_ThetaY_5_10__783->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__783->SetMarkerColor(ci);
   S18_ThetaY_5_10__783->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__783->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__783->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__783->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__783->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__783->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__783->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__783->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__783->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__783->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__783->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__783->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__783->Draw("AE");
   
   TH1D *ThetaY_5_10__784 = new TH1D("ThetaY_5_10__784","",630,-1575,1575);
   ThetaY_5_10__784->SetBinContent(305,9.882985e-05);
   ThetaY_5_10__784->SetBinContent(306,0.04809061);
   ThetaY_5_10__784->SetBinContent(307,0.2968256);
   ThetaY_5_10__784->SetBinContent(308,0.5685286);
   ThetaY_5_10__784->SetBinContent(309,0.740374);
   ThetaY_5_10__784->SetBinContent(310,0.8544632);
   ThetaY_5_10__784->SetBinContent(311,0.9227744);
   ThetaY_5_10__784->SetBinContent(312,0.9688291);
   ThetaY_5_10__784->SetBinContent(313,0.9849581);
   ThetaY_5_10__784->SetBinContent(314,0.992568);
   ThetaY_5_10__784->SetBinContent(315,1.002649);
   ThetaY_5_10__784->SetBinContent(316,1);
   ThetaY_5_10__784->SetBinContent(317,0.9953748);
   ThetaY_5_10__784->SetBinContent(318,0.9784353);
   ThetaY_5_10__784->SetBinContent(319,0.9660816);
   ThetaY_5_10__784->SetBinContent(320,0.9228732);
   ThetaY_5_10__784->SetBinContent(321,0.8488101);
   ThetaY_5_10__784->SetBinContent(322,0.7390497);
   ThetaY_5_10__784->SetBinContent(323,0.5674217);
   ThetaY_5_10__784->SetBinContent(324,0.2979127);
   ThetaY_5_10__784->SetBinContent(325,0.04830803);
   ThetaY_5_10__784->SetBinContent(326,5.929791e-05);
   ThetaY_5_10__784->SetBinError(305,4.419805e-05);
   ThetaY_5_10__784->SetBinError(306,0.0009749654);
   ThetaY_5_10__784->SetBinError(307,0.002422199);
   ThetaY_5_10__784->SetBinError(308,0.003352241);
   ThetaY_5_10__784->SetBinError(309,0.003825469);
   ThetaY_5_10__784->SetBinError(310,0.004109659);
   ThetaY_5_10__784->SetBinError(311,0.004270776);
   ThetaY_5_10__784->SetBinError(312,0.004376054);
   ThetaY_5_10__784->SetBinError(313,0.00441233);
   ThetaY_5_10__784->SetBinError(314,0.004429342);
   ThetaY_5_10__784->SetBinError(315,0.004451778);
   ThetaY_5_10__784->SetBinError(316,0.004445894);
   ThetaY_5_10__784->SetBinError(317,0.0044356);
   ThetaY_5_10__784->SetBinError(318,0.004397695);
   ThetaY_5_10__784->SetBinError(319,0.004369844);
   ThetaY_5_10__784->SetBinError(320,0.004271005);
   ThetaY_5_10__784->SetBinError(321,0.004096041);
   ThetaY_5_10__784->SetBinError(322,0.003822046);
   ThetaY_5_10__784->SetBinError(323,0.003348976);
   ThetaY_5_10__784->SetBinError(324,0.00242663);
   ThetaY_5_10__784->SetBinError(325,0.0009771669);
   ThetaY_5_10__784->SetBinError(326,3.423567e-05);
   ThetaY_5_10__784->SetEntries(745953);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__784->SetLineColor(ci);
   ThetaY_5_10__784->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__784->SetMarkerColor(ci);
   ThetaY_5_10__784->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__784->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__784->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__784->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__784->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__784->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__784->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__784->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__784->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__784->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__784->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__784->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__784->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__784->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__784->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__784->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__784->Draw("AEsame");
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
   
   Double_t _fx3262[22] = {
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
   Double_t _fy3262[22] = {
   0,
   0,
   0.04640471,
   0.2180487,
   0.6288238,
   0.9607631,
   0.9523324,
   0.958244,
   0.978912,
   0.8437362,
   0.9039419,
   1,
   0.9022447,
   0.9769914,
   0.8868291,
   0.5910395,
   0.1103473,
   0.007455036,
   0,
   0,
   0,
   0};
   Double_t _felx3262[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3262[22] = {
   0,
   0,
   0.02004674,
   0.03240831,
   0.04843144,
   0.05581506,
   0.05347365,
   0.05235152,
   0.0524829,
   0.04851069,
   0.0499714,
   0.05264959,
   0.05010601,
   0.05260529,
   0.05041959,
   0.04205633,
   0.01883811,
   0.004815343,
   0,
   0,
   0,
   0};
   Double_t _fehx3262[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3262[22] = {
   62.03963,
   0.1055009,
   0.03140129,
   0.0376256,
   0.05231478,
   0.05915715,
   0.05656515,
   0.05529399,
   0.05537617,
   0.05138438,
   0.05281437,
   0.05549843,
   0.05297008,
   0.05551813,
   0.05337208,
   0.04516191,
   0.02236604,
   0.009833279,
   0.008938409,
   0.0170251,
   0.1050259,
   118.0766};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3262,_fy3262,_felx3262,_fehx3262,_fely3262,_fehy3262);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3262 = new TH1F("Graph_Graph3262","",100,-100,100);
   Graph_Graph3262->SetMinimum(0);
   Graph_Graph3262->SetMaximum(1.5);
   Graph_Graph3262->SetDirectory(0);
   Graph_Graph3262->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3262->SetLineColor(ci);
   Graph_Graph3262->GetXaxis()->SetRange(1,100);
   Graph_Graph3262->GetXaxis()->CenterTitle(true);
   Graph_Graph3262->GetXaxis()->SetLabelFont(42);
   Graph_Graph3262->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3262->GetXaxis()->SetTitleFont(42);
   Graph_Graph3262->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3262->GetYaxis()->CenterTitle(true);
   Graph_Graph3262->GetYaxis()->SetLabelFont(42);
   Graph_Graph3262->GetYaxis()->SetTitleFont(42);
   Graph_Graph3262->GetZaxis()->SetLabelFont(42);
   Graph_Graph3262->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3262->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3262);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.102914,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__785 = new TH2D("ThetaY_vs_Y_5_10__785","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__785->SetBinContent(7944,5);
   ThetaY_vs_Y_5_10__785->SetBinContent(7970,2433);
   ThetaY_vs_Y_5_10__785->SetBinContent(7996,15017);
   ThetaY_vs_Y_5_10__785->SetBinContent(8022,28763);
   ThetaY_vs_Y_5_10__785->SetBinContent(8048,37457);
   ThetaY_vs_Y_5_10__785->SetBinContent(8074,43229);
   ThetaY_vs_Y_5_10__785->SetBinContent(8100,46685);
   ThetaY_vs_Y_5_10__785->SetBinContent(8126,49015);
   ThetaY_vs_Y_5_10__785->SetBinContent(8152,49831);
   ThetaY_vs_Y_5_10__785->SetBinContent(8178,50216);
   ThetaY_vs_Y_5_10__785->SetBinContent(8204,50726);
   ThetaY_vs_Y_5_10__785->SetBinContent(8230,50592);
   ThetaY_vs_Y_5_10__785->SetBinContent(8256,50358);
   ThetaY_vs_Y_5_10__785->SetBinContent(8282,49501);
   ThetaY_vs_Y_5_10__785->SetBinContent(8308,48876);
   ThetaY_vs_Y_5_10__785->SetBinContent(8334,46690);
   ThetaY_vs_Y_5_10__785->SetBinContent(8360,42943);
   ThetaY_vs_Y_5_10__785->SetBinContent(8386,37390);
   ThetaY_vs_Y_5_10__785->SetBinContent(8412,28707);
   ThetaY_vs_Y_5_10__785->SetBinContent(8438,15072);
   ThetaY_vs_Y_5_10__785->SetBinContent(8464,2444);
   ThetaY_vs_Y_5_10__785->SetBinContent(8490,3);
   ThetaY_vs_Y_5_10__785->SetEntries(745953);
   ThetaY_vs_Y_5_10__785->SetContour(20);
   ThetaY_vs_Y_5_10__785->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__785->SetContourLevel(1,2536.3);
   ThetaY_vs_Y_5_10__785->SetContourLevel(2,5072.6);
   ThetaY_vs_Y_5_10__785->SetContourLevel(3,7608.9);
   ThetaY_vs_Y_5_10__785->SetContourLevel(4,10145.2);
   ThetaY_vs_Y_5_10__785->SetContourLevel(5,12681.5);
   ThetaY_vs_Y_5_10__785->SetContourLevel(6,15217.8);
   ThetaY_vs_Y_5_10__785->SetContourLevel(7,17754.1);
   ThetaY_vs_Y_5_10__785->SetContourLevel(8,20290.4);
   ThetaY_vs_Y_5_10__785->SetContourLevel(9,22826.7);
   ThetaY_vs_Y_5_10__785->SetContourLevel(10,25363);
   ThetaY_vs_Y_5_10__785->SetContourLevel(11,27899.3);
   ThetaY_vs_Y_5_10__785->SetContourLevel(12,30435.6);
   ThetaY_vs_Y_5_10__785->SetContourLevel(13,32971.9);
   ThetaY_vs_Y_5_10__785->SetContourLevel(14,35508.2);
   ThetaY_vs_Y_5_10__785->SetContourLevel(15,38044.5);
   ThetaY_vs_Y_5_10__785->SetContourLevel(16,40580.8);
   ThetaY_vs_Y_5_10__785->SetContourLevel(17,43117.1);
   ThetaY_vs_Y_5_10__785->SetContourLevel(18,45653.4);
   ThetaY_vs_Y_5_10__785->SetContourLevel(19,48189.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__785->SetLineColor(ci);
   ThetaY_vs_Y_5_10__785->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__785->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__785->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__785->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__785->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__785->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__785->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__785->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__785->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__785->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__785->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__785->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__785->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__785->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__785->Draw("COL");
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
