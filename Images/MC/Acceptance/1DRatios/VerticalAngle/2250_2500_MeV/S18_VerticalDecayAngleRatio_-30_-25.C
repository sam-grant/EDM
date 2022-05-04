void S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08990558,125,1.708206);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__1617 = new TH1D("S18_ThetaY_mI30_mI25__1617","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__1617->SetBinContent(314,0.05128205);
   S18_ThetaY_mI30_mI25__1617->SetBinContent(315,0.8974359);
   S18_ThetaY_mI30_mI25__1617->SetBinContent(316,0.974359);
   S18_ThetaY_mI30_mI25__1617->SetBinContent(317,0.974359);
   S18_ThetaY_mI30_mI25__1617->SetBinContent(318,1);
   S18_ThetaY_mI30_mI25__1617->SetBinContent(319,0.3589744);
   S18_ThetaY_mI30_mI25__1617->SetBinError(314,0.03626189);
   S18_ThetaY_mI30_mI25__1617->SetBinError(315,0.1516944);
   S18_ThetaY_mI30_mI25__1617->SetBinError(316,0.1580619);
   S18_ThetaY_mI30_mI25__1617->SetBinError(317,0.1580619);
   S18_ThetaY_mI30_mI25__1617->SetBinError(318,0.1601282);
   S18_ThetaY_mI30_mI25__1617->SetBinError(319,0.09593993);
   S18_ThetaY_mI30_mI25__1617->SetMinimum(0);
   S18_ThetaY_mI30_mI25__1617->SetMaximum(1.528395);
   S18_ThetaY_mI30_mI25__1617->SetEntries(166);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1617->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__1617->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1617->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__1617->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__1617->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__1617->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1617->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1617->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1617->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__1617->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__1617->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1617->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1617->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1617->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1617->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1617->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1618 = new TH1D("ThetaY_mI30_mI25__1618","",630,-1575,1575);
   ThetaY_mI30_mI25__1618->SetBinContent(311,0.007827567);
   ThetaY_mI30_mI25__1618->SetBinContent(312,0.4187181);
   ThetaY_mI30_mI25__1618->SetBinContent(313,0.968236);
   ThetaY_mI30_mI25__1618->SetBinContent(314,1.235394);
   ThetaY_mI30_mI25__1618->SetBinContent(315,1.354509);
   ThetaY_mI30_mI25__1618->SetBinContent(316,1.38945);
   ThetaY_mI30_mI25__1618->SetBinContent(317,1.230289);
   ThetaY_mI30_mI25__1618->SetBinContent(318,1);
   ThetaY_mI30_mI25__1618->SetBinContent(319,0.4154282);
   ThetaY_mI30_mI25__1618->SetBinContent(320,0.009982984);
   ThetaY_mI30_mI25__1618->SetBinError(311,0.0009423283);
   ThetaY_mI30_mI25__1618->SetBinError(312,0.00689207);
   ThetaY_mI30_mI25__1618->SetBinError(313,0.01048044);
   ThetaY_mI30_mI25__1618->SetBinError(314,0.01183836);
   ThetaY_mI30_mI25__1618->SetBinError(315,0.01239595);
   ThetaY_mI30_mI25__1618->SetBinError(316,0.01255481);
   ThetaY_mI30_mI25__1618->SetBinError(317,0.01181388);
   ThetaY_mI30_mI25__1618->SetBinError(318,0.01065096);
   ThetaY_mI30_mI25__1618->SetBinError(319,0.006864942);
   ThetaY_mI30_mI25__1618->SetBinError(320,0.00106419);
   ThetaY_mI30_mI25__1618->SetEntries(70783);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1618->SetLineColor(ci);
   ThetaY_mI30_mI25__1618->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1618->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1618->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1618->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1618->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1618->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1618->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1618->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1618->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1618->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1618->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1618->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1618->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1618->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1618->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1618->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1618->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1618->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1618->Draw("AEsame");
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
   
   Double_t _fx3540[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3540[10] = {
   0,
   0,
   0,
   0.04151068,
   0.6625542,
   0.7012553,
   0.7919755,
   1,
   0.8641068,
   0};
   Double_t _felx3540[10] = {
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
   Double_t _fely3540[10] = {
   0,
   0,
   0,
   0.0268136,
   0.1116132,
   0.1134269,
   0.1281257,
   0.1597822,
   0.2285624,
   0};
   Double_t _fehx3540[10] = {
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
   Double_t _fehy3540[10] = {
   6.111871,
   0.1127667,
   0.04875958,
   0.05476133,
   0.1322204,
   0.1334563,
   0.1507572,
   0.1876288,
   0.2989066,
   4.778424};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3540,_fy3540,_felx3540,_fehx3540,_fely3540,_fehy3540);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3540 = new TH1F("Graph_Graph3540","",100,-100,100);
   Graph_Graph3540->SetMinimum(0);
   Graph_Graph3540->SetMaximum(1.5);
   Graph_Graph3540->SetDirectory(0);
   Graph_Graph3540->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3540->SetLineColor(ci);
   Graph_Graph3540->GetXaxis()->SetRange(1,100);
   Graph_Graph3540->GetXaxis()->CenterTitle(true);
   Graph_Graph3540->GetXaxis()->SetLabelFont(42);
   Graph_Graph3540->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3540->GetXaxis()->SetTitleFont(42);
   Graph_Graph3540->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3540->GetYaxis()->CenterTitle(true);
   Graph_Graph3540->GetYaxis()->SetLabelFont(42);
   Graph_Graph3540->GetYaxis()->SetTitleFont(42);
   Graph_Graph3540->GetZaxis()->SetLabelFont(42);
   Graph_Graph3540->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3540->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3540);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.528395,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1619 = new TH2D("ThetaY_vs_Y_mI30_mI25__1619","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8093,69);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8119,3691);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8145,8535);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8171,10890);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8197,11940);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8223,12248);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8249,10845);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8275,8815);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8301,3662);
   ThetaY_vs_Y_mI30_mI25__1619->SetBinContent(8327,88);
   ThetaY_vs_Y_mI30_mI25__1619->SetEntries(70783);
   ThetaY_vs_Y_mI30_mI25__1619->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(1,612.4);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(2,1224.8);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(3,1837.2);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(4,2449.6);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(5,3062);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(6,3674.4);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(7,4286.8);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(8,4899.2);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(9,5511.6);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(10,6124);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(11,6736.4);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(12,7348.8);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(13,7961.2);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(14,8573.6);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(15,9186);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(16,9798.4);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(17,10410.8);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(18,11023.2);
   ThetaY_vs_Y_mI30_mI25__1619->SetContourLevel(19,11635.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1619->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1619->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1619->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1619->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1619->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1619->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1619->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1619->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1619->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1619->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1619->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1619->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1619->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1619->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1619->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1619->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-30_-25","Reco vertices","lpf");
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
