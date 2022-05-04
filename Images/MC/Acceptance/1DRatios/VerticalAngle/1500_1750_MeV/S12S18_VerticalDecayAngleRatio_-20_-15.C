void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06568265,125,1.24797);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__1167 = new TH1D("S12S18_ThetaY_mI20_mI15__1167","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(312,0.04487179);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(313,0.5106838);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(314,0.8824786);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(315,1);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(316,0.8931624);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(317,0.9764957);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(318,0.7970085);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(319,0.767094);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(320,0.6217949);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(321,0.3632479);
   S12S18_ThetaY_mI20_mI15__1167->SetBinContent(322,0.06196581);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(312,0.009791828);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(313,0.03303339);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(314,0.04342393);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(315,0.04622502);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(316,0.043686);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(317,0.04567854);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(318,0.04126754);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(319,0.04048567);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(320,0.03645026);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(321,0.02785984);
   S12S18_ThetaY_mI20_mI15__1167->SetBinError(322,0.01150676);
   S12S18_ThetaY_mI20_mI15__1167->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__1167->SetMaximum(1.116605);
   S12S18_ThetaY_mI20_mI15__1167->SetEntries(3238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1167->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__1167->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1167->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__1167->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__1167->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__1167->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1167->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1167->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1167->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__1167->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__1167->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1167->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1167->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1167->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1167->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1167->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1168 = new TH1D("ThetaY_mI20_mI15__1168","",630,-1575,1575);
   ThetaY_mI20_mI15__1168->SetBinContent(308,0.000887968);
   ThetaY_mI20_mI15__1168->SetBinContent(309,0.1352967);
   ThetaY_mI20_mI15__1168->SetBinContent(310,0.4959301);
   ThetaY_mI20_mI15__1168->SetBinContent(311,0.7188397);
   ThetaY_mI20_mI15__1168->SetBinContent(312,0.8620394);
   ThetaY_mI20_mI15__1168->SetBinContent(313,0.9368655);
   ThetaY_mI20_mI15__1168->SetBinContent(314,0.9805239);
   ThetaY_mI20_mI15__1168->SetBinContent(315,1);
   ThetaY_mI20_mI15__1168->SetBinContent(316,1.015095);
   ThetaY_mI20_mI15__1168->SetBinContent(317,0.983691);
   ThetaY_mI20_mI15__1168->SetBinContent(318,0.9426669);
   ThetaY_mI20_mI15__1168->SetBinContent(319,0.8578363);
   ThetaY_mI20_mI15__1168->SetBinContent(320,0.7218884);
   ThetaY_mI20_mI15__1168->SetBinContent(321,0.4965517);
   ThetaY_mI20_mI15__1168->SetBinContent(322,0.1382566);
   ThetaY_mI20_mI15__1168->SetBinContent(323,0.0007695723);
   ThetaY_mI20_mI15__1168->SetBinError(308,0.00016212);
   ThetaY_mI20_mI15__1168->SetBinError(309,0.002001159);
   ThetaY_mI20_mI15__1168->SetBinError(310,0.003831319);
   ThetaY_mI20_mI15__1168->SetBinError(311,0.004612688);
   ThetaY_mI20_mI15__1168->SetBinError(312,0.005051282);
   ThetaY_mI20_mI15__1168->SetBinError(313,0.005265949);
   ThetaY_mI20_mI15__1168->SetBinError(314,0.00538725);
   ThetaY_mI20_mI15__1168->SetBinError(315,0.00544049);
   ThetaY_mI20_mI15__1168->SetBinError(316,0.0054814);
   ThetaY_mI20_mI15__1168->SetBinError(317,0.005395943);
   ThetaY_mI20_mI15__1168->SetBinError(318,0.005282228);
   ThetaY_mI20_mI15__1168->SetBinError(319,0.005038952);
   ThetaY_mI20_mI15__1168->SetBinError(320,0.004622459);
   ThetaY_mI20_mI15__1168->SetBinError(321,0.003833719);
   ThetaY_mI20_mI15__1168->SetBinError(322,0.002022931);
   ThetaY_mI20_mI15__1168->SetBinError(323,0.0001509255);
   ThetaY_mI20_mI15__1168->SetEntries(347551);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1168->SetLineColor(ci);
   ThetaY_mI20_mI15__1168->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1168->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1168->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1168->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1168->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1168->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1168->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1168->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1168->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1168->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1168->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1168->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1168->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1168->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1168->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1168->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1168->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1168->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1168->Draw("AEsame");
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
   
   Double_t _fx3390[16] = {
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
   37.5};
   Double_t _fy3390[16] = {
   0,
   0,
   0,
   0,
   0.05205307,
   0.5450983,
   0.9000073,
   1,
   0.8798802,
   0.9926854,
   0.8454827,
   0.8942196,
   0.8613449,
   0.7315408,
   0.4481942,
   0};
   Double_t _felx3390[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3390[16] = {
   0,
   0,
   0,
   0,
   0.01127165,
   0.03536704,
   0.04454298,
   0.04652679,
   0.0432799,
   0.04673626,
   0.04401264,
   0.0474636,
   0.05076307,
   0.05633306,
   0.08299298,
   0};
   Double_t _fehx3390[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3390[16] = {
   4.568879,
   0.02908126,
   0.007932615,
   0.005472647,
   0.01402401,
   0.0377409,
   0.04680543,
   0.04874503,
   0.04546432,
   0.04899168,
   0.04636713,
   0.05005406,
   0.05384895,
   0.06085122,
   0.1000162,
   5.297003};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3390,_fy3390,_felx3390,_fehx3390,_fely3390,_fehy3390);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3390 = new TH1F("Graph_Graph3390","",100,-100,100);
   Graph_Graph3390->SetMinimum(0);
   Graph_Graph3390->SetMaximum(1.5);
   Graph_Graph3390->SetDirectory(0);
   Graph_Graph3390->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3390->SetLineColor(ci);
   Graph_Graph3390->GetXaxis()->SetRange(1,100);
   Graph_Graph3390->GetXaxis()->CenterTitle(true);
   Graph_Graph3390->GetXaxis()->SetLabelFont(42);
   Graph_Graph3390->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3390->GetXaxis()->SetTitleFont(42);
   Graph_Graph3390->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3390->GetYaxis()->CenterTitle(true);
   Graph_Graph3390->GetYaxis()->SetLabelFont(42);
   Graph_Graph3390->GetYaxis()->SetTitleFont(42);
   Graph_Graph3390->GetZaxis()->SetLabelFont(42);
   Graph_Graph3390->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3390->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3390);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.116605,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1169 = new TH2D("ThetaY_vs_Y_mI20_mI15__1169","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8017,30);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8043,4571);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8069,16755);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8095,24286);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8121,29124);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8147,31652);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8173,33127);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8199,33785);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8225,34295);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8251,33234);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8277,31848);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8303,28982);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8329,24389);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8355,16776);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8381,4671);
   ThetaY_vs_Y_mI20_mI15__1169->SetBinContent(8407,26);
   ThetaY_vs_Y_mI20_mI15__1169->SetEntries(347551);
   ThetaY_vs_Y_mI20_mI15__1169->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(1,1714.75);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(2,3429.5);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(3,5144.25);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(4,6859);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(5,8573.75);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(6,10288.5);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(7,12003.25);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(8,13718);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(9,15432.75);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(10,17147.5);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(11,18862.25);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(12,20577);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(13,22291.75);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(14,24006.5);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(15,25721.25);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(16,27436);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(17,29150.75);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(18,30865.5);
   ThetaY_vs_Y_mI20_mI15__1169->SetContourLevel(19,32580.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1169->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1169->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1169->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1169->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1169->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1169->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1169->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1169->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1169->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1169->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1169->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1169->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1169->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1169->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1169->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1169->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-20_-15","Reco vertices","lpf");
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
