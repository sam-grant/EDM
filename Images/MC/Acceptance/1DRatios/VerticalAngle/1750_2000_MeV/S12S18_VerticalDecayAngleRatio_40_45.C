void S12S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.4579592,125,8.701225);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_40_45__1374 = new TH1D("S12S18_ThetaY_40_45__1374","",630,-1575,1575);
   S12S18_ThetaY_40_45__1374->SetBinContent(310,1);
   S12S18_ThetaY_40_45__1374->SetBinContent(311,1.2);
   S12S18_ThetaY_40_45__1374->SetBinContent(312,0.8);
   S12S18_ThetaY_40_45__1374->SetBinContent(313,3.8);
   S12S18_ThetaY_40_45__1374->SetBinContent(314,4);
   S12S18_ThetaY_40_45__1374->SetBinContent(315,3.2);
   S12S18_ThetaY_40_45__1374->SetBinError(310,0.4472136);
   S12S18_ThetaY_40_45__1374->SetBinError(311,0.4898979);
   S12S18_ThetaY_40_45__1374->SetBinError(312,0.4);
   S12S18_ThetaY_40_45__1374->SetBinError(313,0.8717798);
   S12S18_ThetaY_40_45__1374->SetBinError(314,0.8944272);
   S12S18_ThetaY_40_45__1374->SetBinError(315,0.8);
   S12S18_ThetaY_40_45__1374->SetMinimum(0);
   S12S18_ThetaY_40_45__1374->SetMaximum(7.785306);
   S12S18_ThetaY_40_45__1374->SetEntries(70);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1374->SetLineColor(ci);
   S12S18_ThetaY_40_45__1374->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1374->SetMarkerColor(ci);
   S12S18_ThetaY_40_45__1374->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_40_45__1374->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_40_45__1374->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1374->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1374->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1374->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_40_45__1374->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_40_45__1374->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1374->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1374->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1374->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1374->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1374->Draw("AE");
   
   TH1D *ThetaY_40_45__1375 = new TH1D("ThetaY_40_45__1375","",630,-1575,1575);
   ThetaY_40_45__1375->SetBinContent(310,1);
   ThetaY_40_45__1375->SetBinContent(311,3.571429);
   ThetaY_40_45__1375->SetBinContent(312,5.318367);
   ThetaY_40_45__1375->SetBinContent(313,6.142857);
   ThetaY_40_45__1375->SetBinContent(314,6.897959);
   ThetaY_40_45__1375->SetBinContent(315,7.077551);
   ThetaY_40_45__1375->SetBinContent(316,7.020408);
   ThetaY_40_45__1375->SetBinContent(317,6.714286);
   ThetaY_40_45__1375->SetBinContent(318,6.346939);
   ThetaY_40_45__1375->SetBinContent(319,5.322449);
   ThetaY_40_45__1375->SetBinContent(320,3.836735);
   ThetaY_40_45__1375->SetBinContent(321,0.8938776);
   ThetaY_40_45__1375->SetBinError(310,0.06388766);
   ThetaY_40_45__1375->SetBinError(311,0.1207363);
   ThetaY_40_45__1375->SetBinError(312,0.1473351);
   ThetaY_40_45__1375->SetBinError(313,0.1583442);
   ThetaY_40_45__1375->SetBinError(314,0.1677943);
   ThetaY_40_45__1375->SetBinError(315,0.1699646);
   ThetaY_40_45__1375->SetBinError(316,0.1692771);
   ThetaY_40_45__1375->SetBinError(317,0.1655453);
   ThetaY_40_45__1375->SetBinError(318,0.160953);
   ThetaY_40_45__1375->SetBinError(319,0.1473916);
   ThetaY_40_45__1375->SetBinError(320,0.1251405);
   ThetaY_40_45__1375->SetBinError(321,0.06040265);
   ThetaY_40_45__1375->SetEntries(14735);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1375->SetLineColor(ci);
   ThetaY_40_45__1375->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1375->SetMarkerColor(ci);
   ThetaY_40_45__1375->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1375->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1375->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1375->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1375->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1375->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1375->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1375->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1375->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1375->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1375->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1375->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1375->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1375->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1375->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1375->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1375->Draw("AEsame");
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
   
   Double_t _fx3459[12] = {
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
   27.5};
   Double_t _fy3459[12] = {
   1,
   0.336,
   0.1504221,
   0.6186047,
   0.5798817,
   0.4521338,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3459[12] = {
   2.5,
   2.5,
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
   Double_t _fely3459[12] = {
   0.4355704,
   0.1336666,
   0.07207732,
   0.1414999,
   0.1292958,
   0.1123261,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3459[12] = {
   2.5,
   2.5,
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
   Double_t _fehy3459[12] = {
   0.6880735,
   0.2017829,
   0.119264,
   0.1783942,
   0.1620299,
   0.1445114,
   0.05247579,
   0.05486964,
   0.05804726,
   0.06922835,
   0.09606219,
   0.4136543};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3459,_fy3459,_felx3459,_fehx3459,_fely3459,_fehy3459);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3459 = new TH1F("Graph_Graph3459","",100,-100,100);
   Graph_Graph3459->SetMinimum(0);
   Graph_Graph3459->SetMaximum(1.5);
   Graph_Graph3459->SetDirectory(0);
   Graph_Graph3459->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3459->SetLineColor(ci);
   Graph_Graph3459->GetXaxis()->SetRange(1,100);
   Graph_Graph3459->GetXaxis()->CenterTitle(true);
   Graph_Graph3459->GetXaxis()->SetLabelFont(42);
   Graph_Graph3459->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3459->GetXaxis()->SetTitleFont(42);
   Graph_Graph3459->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3459->GetYaxis()->CenterTitle(true);
   Graph_Graph3459->GetYaxis()->SetLabelFont(42);
   Graph_Graph3459->GetYaxis()->SetTitleFont(42);
   Graph_Graph3459->GetZaxis()->SetLabelFont(42);
   Graph_Graph3459->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3459->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3459);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,7.785306,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1376 = new TH2D("ThetaY_vs_Y_40_45__1376","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8081,245);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8107,875);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8133,1303);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8159,1505);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8185,1690);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8211,1734);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8237,1720);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8263,1645);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8289,1555);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8315,1304);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8341,940);
   ThetaY_vs_Y_40_45__1376->SetBinContent(8367,219);
   ThetaY_vs_Y_40_45__1376->SetEntries(14735);
   ThetaY_vs_Y_40_45__1376->SetContour(20);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(1,86.7);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(2,173.4);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(3,260.1);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(4,346.8);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(5,433.5);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(6,520.2);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(7,606.9);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(8,693.6);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(9,780.3);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(10,867);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(11,953.7);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(12,1040.4);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(13,1127.1);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(14,1213.8);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(15,1300.5);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(16,1387.2);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(17,1473.9);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(18,1560.6);
   ThetaY_vs_Y_40_45__1376->SetContourLevel(19,1647.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1376->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1376->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1376->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1376->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1376->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1376->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1376->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1376->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1376->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1376->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1376->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1376->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1376->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1376->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1376->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1376->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_40_45","Reco vertices","lpf");
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
