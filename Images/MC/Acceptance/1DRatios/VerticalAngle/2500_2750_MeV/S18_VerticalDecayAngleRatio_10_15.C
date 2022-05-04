void S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06564144,125,1.247187);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__1812 = new TH1D("S18_ThetaY_10_15__1812","",630,-1575,1575);
   S18_ThetaY_10_15__1812->SetBinContent(313,0.3085106);
   S18_ThetaY_10_15__1812->SetBinContent(314,0.8191489);
   S18_ThetaY_10_15__1812->SetBinContent(315,1);
   S18_ThetaY_10_15__1812->SetBinContent(316,0.9574468);
   S18_ThetaY_10_15__1812->SetBinContent(317,0.3297872);
   S18_ThetaY_10_15__1812->SetBinError(313,0.05728899);
   S18_ThetaY_10_15__1812->SetBinError(314,0.09335068);
   S18_ThetaY_10_15__1812->SetBinError(315,0.1031421);
   S18_ThetaY_10_15__1812->SetBinError(316,0.1009238);
   S18_ThetaY_10_15__1812->SetBinError(317,0.05923154);
   S18_ThetaY_10_15__1812->SetMinimum(0);
   S18_ThetaY_10_15__1812->SetMaximum(1.115904);
   S18_ThetaY_10_15__1812->SetEntries(321);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1812->SetLineColor(ci);
   S18_ThetaY_10_15__1812->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1812->SetMarkerColor(ci);
   S18_ThetaY_10_15__1812->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__1812->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__1812->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1812->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1812->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1812->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__1812->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__1812->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1812->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1812->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1812->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1812->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1812->Draw("AE");
   
   TH1D *ThetaY_10_15__1813 = new TH1D("ThetaY_10_15__1813","",630,-1575,1575);
   ThetaY_10_15__1813->SetBinContent(312,0.02131582);
   ThetaY_10_15__1813->SetBinContent(313,0.4196209);
   ThetaY_10_15__1813->SetBinContent(314,0.8482339);
   ThetaY_10_15__1813->SetBinContent(315,1);
   ThetaY_10_15__1813->SetBinContent(316,1.014459);
   ThetaY_10_15__1813->SetBinContent(317,0.8481045);
   ThetaY_10_15__1813->SetBinContent(318,0.4190063);
   ThetaY_10_15__1813->SetBinContent(319,0.02189805);
   ThetaY_10_15__1813->SetBinError(312,0.0008303466);
   ThetaY_10_15__1813->SetBinError(313,0.003684147);
   ThetaY_10_15__1813->SetBinError(314,0.005238008);
   ThetaY_10_15__1813->SetBinError(315,0.005687329);
   ThetaY_10_15__1813->SetBinError(316,0.005728297);
   ThetaY_10_15__1813->SetBinError(317,0.005237609);
   ThetaY_10_15__1813->SetBinError(318,0.003681448);
   ThetaY_10_15__1813->SetBinError(319,0.0008416103);
   ThetaY_10_15__1813->SetEntries(141986);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1813->SetLineColor(ci);
   ThetaY_10_15__1813->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1813->SetMarkerColor(ci);
   ThetaY_10_15__1813->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1813->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1813->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1813->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1813->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1813->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1813->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1813->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1813->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1813->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1813->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1813->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1813->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1813->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1813->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1813->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1813->Draw("AEsame");
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
   
   Double_t _fx3605[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3605[8] = {
   0,
   0.7352127,
   0.9657111,
   1,
   0.9438008,
   0.3888521,
   0,
   0};
   Double_t _felx3605[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3605[8] = {
   0,
   0.1358805,
   0.1099726,
   0.1031132,
   0.09944104,
   0.0695009,
   0,
   0};
   Double_t _fehx3605[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3605[8] = {
   0.9201014,
   0.1636691,
   0.1232751,
   0.1143397,
   0.1105175,
   0.08319373,
   0.04674566,
   0.8956046};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3605,_fy3605,_felx3605,_fehx3605,_fely3605,_fehy3605);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3605 = new TH1F("Graph_Graph3605","",100,-100,100);
   Graph_Graph3605->SetMinimum(0);
   Graph_Graph3605->SetMaximum(1.5);
   Graph_Graph3605->SetDirectory(0);
   Graph_Graph3605->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3605->SetLineColor(ci);
   Graph_Graph3605->GetXaxis()->SetRange(1,100);
   Graph_Graph3605->GetXaxis()->CenterTitle(true);
   Graph_Graph3605->GetXaxis()->SetLabelFont(42);
   Graph_Graph3605->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3605->GetXaxis()->SetTitleFont(42);
   Graph_Graph3605->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3605->GetYaxis()->CenterTitle(true);
   Graph_Graph3605->GetYaxis()->SetLabelFont(42);
   Graph_Graph3605->GetYaxis()->SetTitleFont(42);
   Graph_Graph3605->GetZaxis()->SetLabelFont(42);
   Graph_Graph3605->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3605->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3605);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.115904,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1814 = new TH2D("ThetaY_vs_Y_10_15__1814","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8127,659);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8153,12973);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8179,26224);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8205,30916);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8231,31363);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8257,26220);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8283,12954);
   ThetaY_vs_Y_10_15__1814->SetBinContent(8309,677);
   ThetaY_vs_Y_10_15__1814->SetEntries(141986);
   ThetaY_vs_Y_10_15__1814->SetContour(20);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(1,1568.15);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(2,3136.3);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(3,4704.45);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(4,6272.6);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(5,7840.75);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(6,9408.9);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(7,10977.05);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(8,12545.2);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(9,14113.35);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(10,15681.5);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(11,17249.65);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(12,18817.8);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(13,20385.95);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(14,21954.1);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(15,23522.25);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(16,25090.4);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(17,26658.55);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(18,28226.7);
   ThetaY_vs_Y_10_15__1814->SetContourLevel(19,29794.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1814->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1814->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1814->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1814->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1814->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1814->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1814->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1814->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1814->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1814->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1814->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1814->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1814->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1814->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1814->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1814->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
