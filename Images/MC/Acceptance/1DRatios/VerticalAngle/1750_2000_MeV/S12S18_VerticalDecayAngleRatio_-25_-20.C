void S12S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08484667,125,1.612087);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__1335 = new TH1D("S12S18_ThetaY_mI25_mI20__1335","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(313,0.1094527);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(314,0.9004975);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(315,1.258706);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(316,1.278607);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(317,1.144279);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(318,1.024876);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(319,1);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(320,0.6616915);
   S12S18_ThetaY_mI25_mI20__1335->SetBinContent(321,0.1393035);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(313,0.0233354);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(314,0.06693345);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(315,0.0791342);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(316,0.07975731);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(317,0.0754515);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(318,0.07140647);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(319,0.07053456);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(320,0.05737593);
   S12S18_ThetaY_mI25_mI20__1335->SetBinError(321,0.02632588);
   S12S18_ThetaY_mI25_mI20__1335->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__1335->SetMaximum(1.442393);
   S12S18_ThetaY_mI25_mI20__1335->SetEntries(1511);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1335->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__1335->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1335->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__1335->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__1335->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__1335->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1335->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1335->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1335->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__1335->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__1335->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1335->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1335->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1335->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1335->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1335->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1336 = new TH1D("ThetaY_mI25_mI20__1336","",630,-1575,1575);
   ThetaY_mI25_mI20__1336->SetBinContent(309,0.0006365372);
   ThetaY_mI25_mI20__1336->SetBinContent(310,0.1957063);
   ThetaY_mI25_mI20__1336->SetBinContent(311,0.6968925);
   ThetaY_mI25_mI20__1336->SetBinContent(312,0.9942712);
   ThetaY_mI25_mI20__1336->SetBinContent(313,1.156704);
   ThetaY_mI25_mI20__1336->SetBinContent(314,1.268619);
   ThetaY_mI25_mI20__1336->SetBinContent(315,1.311267);
   ThetaY_mI25_mI20__1336->SetBinContent(316,1.306811);
   ThetaY_mI25_mI20__1336->SetBinContent(317,1.271512);
   ThetaY_mI25_mI20__1336->SetBinContent(318,1.180603);
   ThetaY_mI25_mI20__1336->SetBinContent(319,1);
   ThetaY_mI25_mI20__1336->SetBinContent(320,0.6949251);
   ThetaY_mI25_mI20__1336->SetBinContent(321,0.194954);
   ThetaY_mI25_mI20__1336->SetBinContent(322,0.0007522713);
   ThetaY_mI25_mI20__1336->SetBinError(309,0.0001919232);
   ThetaY_mI25_mI20__1336->SetBinError(310,0.003365255);
   ThetaY_mI25_mI20__1336->SetBinError(311,0.006350362);
   ThetaY_mI25_mI20__1336->SetBinError(312,0.007585217);
   ThetaY_mI25_mI20__1336->SetBinError(313,0.008181382);
   ThetaY_mI25_mI20__1336->SetBinError(314,0.008568033);
   ThetaY_mI25_mI20__1336->SetBinError(315,0.008710861);
   ThetaY_mI25_mI20__1336->SetBinError(316,0.008696048);
   ThetaY_mI25_mI20__1336->SetBinError(317,0.008577798);
   ThetaY_mI25_mI20__1336->SetBinError(318,0.008265469);
   ThetaY_mI25_mI20__1336->SetBinError(319,0.007607038);
   ThetaY_mI25_mI20__1336->SetBinError(320,0.006341391);
   ThetaY_mI25_mI20__1336->SetBinError(321,0.003358781);
   ThetaY_mI25_mI20__1336->SetBinError(322,0.0002086425);
   ThetaY_mI25_mI20__1336->SetEntries(194820);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1336->SetLineColor(ci);
   ThetaY_mI25_mI20__1336->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1336->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1336->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1336->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1336->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1336->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1336->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1336->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1336->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1336->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1336->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1336->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1336->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1336->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1336->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1336->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1336->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1336->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1336->Draw("AEsame");
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
   
   Double_t _fx3446[14] = {
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
   32.5};
   Double_t _fy3446[14] = {
   0,
   0,
   0,
   0,
   0.09462468,
   0.7098252,
   0.9599164,
   0.9784177,
   0.8999353,
   0.8680951,
   1,
   0.9521768,
   0.7145454,
   0};
   Double_t _felx3446[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3446[14] = {
   0,
   0,
   0,
   0,
   0.02003013,
   0.05292811,
   0.06064399,
   0.06133706,
   0.05960505,
   0.06073683,
   0.07088255,
   0.08291232,
   0.1347629,
   0};
   Double_t _fehx3446[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3446[14] = {
   15.6635,
   0.04681406,
   0.01314408,
   0.00921258,
   0.02479754,
   0.05703253,
   0.06460473,
   0.06531125,
   0.06369284,
   0.06514584,
   0.07609867,
   0.09047433,
   0.1629879,
   13.07986};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3446,_fy3446,_felx3446,_fehx3446,_fely3446,_fehy3446);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3446 = new TH1F("Graph_Graph3446","",100,-100,100);
   Graph_Graph3446->SetMinimum(0);
   Graph_Graph3446->SetMaximum(1.5);
   Graph_Graph3446->SetDirectory(0);
   Graph_Graph3446->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3446->SetLineColor(ci);
   Graph_Graph3446->GetXaxis()->SetRange(1,100);
   Graph_Graph3446->GetXaxis()->CenterTitle(true);
   Graph_Graph3446->GetXaxis()->SetLabelFont(42);
   Graph_Graph3446->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3446->GetXaxis()->SetTitleFont(42);
   Graph_Graph3446->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3446->GetYaxis()->CenterTitle(true);
   Graph_Graph3446->GetYaxis()->SetLabelFont(42);
   Graph_Graph3446->GetYaxis()->SetTitleFont(42);
   Graph_Graph3446->GetZaxis()->SetLabelFont(42);
   Graph_Graph3446->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3446->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3446);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.442393,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1337 = new TH2D("ThetaY_vs_Y_mI25_mI20__1337","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8042,11);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8068,3382);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8094,12043);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8120,17182);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8146,19989);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8172,21923);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8198,22660);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8224,22583);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8250,21973);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8276,20402);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8302,17281);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8328,12009);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8354,3369);
   ThetaY_vs_Y_mI25_mI20__1337->SetBinContent(8380,13);
   ThetaY_vs_Y_mI25_mI20__1337->SetEntries(194820);
   ThetaY_vs_Y_mI25_mI20__1337->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(1,1133);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(2,2266);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(3,3399);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(4,4532);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(5,5665);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(6,6798);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(7,7931);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(8,9064);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(9,10197);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(10,11330);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(11,12463);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(12,13596);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(13,14729);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(14,15862);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(15,16995);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(16,18128);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(17,19261);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(18,20394);
   ThetaY_vs_Y_mI25_mI20__1337->SetContourLevel(19,21527);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1337->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1337->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1337->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1337->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1337->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1337->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1337->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1337->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1337->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1337->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1337->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1337->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1337->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1337->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1337->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1337->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
