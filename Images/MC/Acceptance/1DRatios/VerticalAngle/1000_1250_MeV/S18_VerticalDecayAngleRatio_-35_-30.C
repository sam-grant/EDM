void S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-1.309707,125,24.88444);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__759 = new TH1D("S18_ThetaY_mI35_mI30__759","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__759->SetBinContent(314,4.25);
   S18_ThetaY_mI35_mI30__759->SetBinContent(315,12.75);
   S18_ThetaY_mI35_mI30__759->SetBinContent(316,15.25);
   S18_ThetaY_mI35_mI30__759->SetBinContent(317,17);
   S18_ThetaY_mI35_mI30__759->SetBinContent(318,16.5);
   S18_ThetaY_mI35_mI30__759->SetBinContent(319,13.5);
   S18_ThetaY_mI35_mI30__759->SetBinContent(320,12.25);
   S18_ThetaY_mI35_mI30__759->SetBinContent(321,12.25);
   S18_ThetaY_mI35_mI30__759->SetBinContent(322,8.5);
   S18_ThetaY_mI35_mI30__759->SetBinContent(323,6.75);
   S18_ThetaY_mI35_mI30__759->SetBinContent(324,2.75);
   S18_ThetaY_mI35_mI30__759->SetBinContent(325,1);
   S18_ThetaY_mI35_mI30__759->SetBinError(314,1.030776);
   S18_ThetaY_mI35_mI30__759->SetBinError(315,1.785357);
   S18_ThetaY_mI35_mI30__759->SetBinError(316,1.952562);
   S18_ThetaY_mI35_mI30__759->SetBinError(317,2.061553);
   S18_ThetaY_mI35_mI30__759->SetBinError(318,2.03101);
   S18_ThetaY_mI35_mI30__759->SetBinError(319,1.837117);
   S18_ThetaY_mI35_mI30__759->SetBinError(320,1.75);
   S18_ThetaY_mI35_mI30__759->SetBinError(321,1.75);
   S18_ThetaY_mI35_mI30__759->SetBinError(322,1.457738);
   S18_ThetaY_mI35_mI30__759->SetBinError(323,1.299038);
   S18_ThetaY_mI35_mI30__759->SetBinError(324,0.8291562);
   S18_ThetaY_mI35_mI30__759->SetBinError(325,0.5);
   S18_ThetaY_mI35_mI30__759->SetMinimum(0);
   S18_ThetaY_mI35_mI30__759->SetMaximum(22.26503);
   S18_ThetaY_mI35_mI30__759->SetEntries(491);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__759->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__759->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__759->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__759->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__759->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__759->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__759->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__759->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__759->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__759->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__759->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__759->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__759->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__759->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__759->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__759->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__760 = new TH1D("ThetaY_mI35_mI30__760","",630,-1575,1575);
   ThetaY_mI35_mI30__760->SetBinContent(306,1.023316);
   ThetaY_mI35_mI30__760->SetBinContent(307,5.932642);
   ThetaY_mI35_mI30__760->SetBinContent(308,11.48187);
   ThetaY_mI35_mI30__760->SetBinContent(309,14.61658);
   ThetaY_mI35_mI30__760->SetBinContent(310,17.0544);
   ThetaY_mI35_mI30__760->SetBinContent(311,18.32642);
   ThetaY_mI35_mI30__760->SetBinContent(312,19.31347);
   ThetaY_mI35_mI30__760->SetBinContent(313,19.59845);
   ThetaY_mI35_mI30__760->SetBinContent(314,19.71762);
   ThetaY_mI35_mI30__760->SetBinContent(315,20.09845);
   ThetaY_mI35_mI30__760->SetBinContent(316,20.24093);
   ThetaY_mI35_mI30__760->SetBinContent(317,20.07772);
   ThetaY_mI35_mI30__760->SetBinContent(318,20.08031);
   ThetaY_mI35_mI30__760->SetBinContent(319,19.47927);
   ThetaY_mI35_mI30__760->SetBinContent(320,18.72021);
   ThetaY_mI35_mI30__760->SetBinContent(321,16.89119);
   ThetaY_mI35_mI30__760->SetBinContent(322,14.97668);
   ThetaY_mI35_mI30__760->SetBinContent(323,11.43005);
   ThetaY_mI35_mI30__760->SetBinContent(324,5.88342);
   ThetaY_mI35_mI30__760->SetBinContent(325,1);
   ThetaY_mI35_mI30__760->SetBinError(306,0.05148862);
   ThetaY_mI35_mI30__760->SetBinError(307,0.1239739);
   ThetaY_mI35_mI30__760->SetBinError(308,0.1724696);
   ThetaY_mI35_mI30__760->SetBinError(309,0.1945939);
   ThetaY_mI35_mI30__760->SetBinError(310,0.2101961);
   ThetaY_mI35_mI30__760->SetBinError(311,0.217894);
   ThetaY_mI35_mI30__760->SetBinError(312,0.2236848);
   ThetaY_mI35_mI30__760->SetBinError(313,0.225329);
   ThetaY_mI35_mI30__760->SetBinError(314,0.2260131);
   ThetaY_mI35_mI30__760->SetBinError(315,0.2281853);
   ThetaY_mI35_mI30__760->SetBinError(316,0.2289927);
   ThetaY_mI35_mI30__760->SetBinError(317,0.2280676);
   ThetaY_mI35_mI30__760->SetBinError(318,0.2280823);
   ThetaY_mI35_mI30__760->SetBinError(319,0.2246429);
   ThetaY_mI35_mI30__760->SetBinError(320,0.2202225);
   ThetaY_mI35_mI30__760->SetBinError(321,0.2091879);
   ThetaY_mI35_mI30__760->SetBinError(322,0.1969764);
   ThetaY_mI35_mI30__760->SetBinError(323,0.17208);
   ThetaY_mI35_mI30__760->SetBinError(324,0.1234586);
   ThetaY_mI35_mI30__760->SetBinError(325,0.05089866);
   ThetaY_mI35_mI30__760->SetEntries(114234);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__760->SetLineColor(ci);
   ThetaY_mI35_mI30__760->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__760->SetMarkerColor(ci);
   ThetaY_mI35_mI30__760->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__760->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__760->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__760->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__760->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__760->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__760->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__760->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__760->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__760->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__760->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__760->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__760->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__760->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__760->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__760->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__760->Draw("AEsame");
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
   
   Double_t _fx3254[20] = {
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
   47.5};
   Double_t _fy3254[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.2155433,
   0.6343774,
   0.7534238,
   0.8467097,
   0.8217004,
   0.6930443,
   0.6543731,
   0.7252301,
   0.5675489,
   0.5905485,
   0.4674152,
   1};
   Double_t _felx3254[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3254[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05181273,
   0.08882343,
   0.09656973,
   0.1028675,
   0.1013098,
   0.0943494,
   0.09347088,
   0.1036291,
   0.09712915,
   0.1132759,
   0.1390701,
   0.480544};
   Double_t _fehx3254[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3254[20] = {
   0.4508184,
   0.07761136,
   0.04009375,
   0.03149372,
   0.02699126,
   0.02511757,
   0.02383374,
   0.02348714,
   0.06607426,
   0.1022383,
   0.1098328,
   0.1162095,
   0.1146579,
   0.1081744,
   0.1078963,
   0.1196303,
   0.1153866,
   0.1374407,
   0.1883048,
   0.7980295};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3254,_fy3254,_felx3254,_fehx3254,_fely3254,_fehy3254);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3254 = new TH1F("Graph_Graph3254","",100,-100,100);
   Graph_Graph3254->SetMinimum(0);
   Graph_Graph3254->SetMaximum(1.5);
   Graph_Graph3254->SetDirectory(0);
   Graph_Graph3254->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3254->SetLineColor(ci);
   Graph_Graph3254->GetXaxis()->SetRange(1,100);
   Graph_Graph3254->GetXaxis()->CenterTitle(true);
   Graph_Graph3254->GetXaxis()->SetLabelFont(42);
   Graph_Graph3254->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3254->GetXaxis()->SetTitleFont(42);
   Graph_Graph3254->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3254->GetYaxis()->CenterTitle(true);
   Graph_Graph3254->GetYaxis()->SetLabelFont(42);
   Graph_Graph3254->GetYaxis()->SetTitleFont(42);
   Graph_Graph3254->GetZaxis()->SetLabelFont(42);
   Graph_Graph3254->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3254->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3254);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,22.26503,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__761 = new TH2D("ThetaY_vs_Y_mI35_mI30__761","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(7962,395);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(7988,2290);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8014,4432);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8040,5642);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8066,6583);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8092,7074);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8118,7455);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8144,7565);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8170,7611);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8196,7758);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8222,7813);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8248,7750);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8274,7751);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8300,7519);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8326,7226);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8352,6520);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8378,5781);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8404,4412);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8430,2271);
   ThetaY_vs_Y_mI35_mI30__761->SetBinContent(8456,386);
   ThetaY_vs_Y_mI35_mI30__761->SetEntries(114234);
   ThetaY_vs_Y_mI35_mI30__761->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(1,390.65);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(2,781.3);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(3,1171.95);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(4,1562.6);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(5,1953.25);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(6,2343.9);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(7,2734.55);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(8,3125.2);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(9,3515.85);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(10,3906.5);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(11,4297.15);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(12,4687.8);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(13,5078.45);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(14,5469.1);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(15,5859.75);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(16,6250.4);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(17,6641.05);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(18,7031.7);
   ThetaY_vs_Y_mI35_mI30__761->SetContourLevel(19,7422.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__761->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__761->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__761->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__761->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__761->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__761->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__761->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__761->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__761->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__761->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__761->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__761->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__761->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__761->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__761->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__761->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
