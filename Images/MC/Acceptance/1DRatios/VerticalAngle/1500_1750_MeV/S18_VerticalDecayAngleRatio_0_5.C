void S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06649043,125,1.263318);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__1122 = new TH1D("S18_ThetaY_0_5__1122","",630,-1575,1575);
   S18_ThetaY_0_5__1122->SetBinContent(310,0.07389163);
   S18_ThetaY_0_5__1122->SetBinContent(311,0.5295567);
   S18_ThetaY_0_5__1122->SetBinContent(312,0.8078818);
   S18_ThetaY_0_5__1122->SetBinContent(313,0.8448276);
   S18_ThetaY_0_5__1122->SetBinContent(314,0.8349754);
   S18_ThetaY_0_5__1122->SetBinContent(315,0.9039409);
   S18_ThetaY_0_5__1122->SetBinContent(316,0.8743842);
   S18_ThetaY_0_5__1122->SetBinContent(317,1);
   S18_ThetaY_0_5__1122->SetBinContent(318,0.8128079);
   S18_ThetaY_0_5__1122->SetBinContent(319,0.5960591);
   S18_ThetaY_0_5__1122->SetBinContent(320,0.1847291);
   S18_ThetaY_0_5__1122->SetBinContent(321,0.01724138);
   S18_ThetaY_0_5__1122->SetBinError(310,0.0134907);
   S18_ThetaY_0_5__1122->SetBinError(311,0.03611546);
   S18_ThetaY_0_5__1122->SetBinError(312,0.04460781);
   S18_ThetaY_0_5__1122->SetBinError(313,0.0456164);
   S18_ThetaY_0_5__1122->SetBinError(314,0.04534964);
   S18_ThetaY_0_5__1122->SetBinError(315,0.04718533);
   S18_ThetaY_0_5__1122->SetBinError(316,0.0464075);
   S18_ThetaY_0_5__1122->SetBinError(317,0.04962917);
   S18_ThetaY_0_5__1122->SetBinError(318,0.0447436);
   S18_ThetaY_0_5__1122->SetBinError(319,0.03831613);
   S18_ThetaY_0_5__1122->SetBinError(320,0.02133067);
   S18_ThetaY_0_5__1122->SetBinError(321,0.006516629);
   S18_ThetaY_0_5__1122->SetMinimum(0);
   S18_ThetaY_0_5__1122->SetMaximum(1.130337);
   S18_ThetaY_0_5__1122->SetEntries(3037);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1122->SetLineColor(ci);
   S18_ThetaY_0_5__1122->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1122->SetMarkerColor(ci);
   S18_ThetaY_0_5__1122->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__1122->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__1122->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1122->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1122->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1122->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__1122->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__1122->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1122->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1122->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1122->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1122->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1122->Draw("AE");
   
   TH1D *ThetaY_0_5__1123 = new TH1D("ThetaY_0_5__1123","",630,-1575,1575);
   ThetaY_0_5__1123->SetBinContent(308,0.000949288);
   ThetaY_0_5__1123->SetBinContent(309,0.1383962);
   ThetaY_0_5__1123->SetBinContent(310,0.5106837);
   ThetaY_0_5__1123->SetBinContent(311,0.7339495);
   ThetaY_0_5__1123->SetBinContent(312,0.8716962);
   ThetaY_0_5__1123->SetBinContent(313,0.9596969);
   ThetaY_0_5__1123->SetBinContent(314,1.007311);
   ThetaY_0_5__1123->SetBinContent(315,1.027196);
   ThetaY_0_5__1123->SetBinContent(316,1.027579);
   ThetaY_0_5__1123->SetBinContent(317,1);
   ThetaY_0_5__1123->SetBinContent(318,0.9623116);
   ThetaY_0_5__1123->SetBinContent(319,0.8709301);
   ThetaY_0_5__1123->SetBinContent(320,0.7308019);
   ThetaY_0_5__1123->SetBinContent(321,0.5023233);
   ThetaY_0_5__1123->SetBinContent(322,0.1372637);
   ThetaY_0_5__1123->SetBinContent(323,0.0009992506);
   ThetaY_0_5__1123->SetBinError(308,0.0001257363);
   ThetaY_0_5__1123->SetBinError(309,0.001518181);
   ThetaY_0_5__1123->SetBinError(310,0.002916336);
   ThetaY_0_5__1123->SetBinError(311,0.003496187);
   ThetaY_0_5__1123->SetBinError(312,0.003810168);
   ThetaY_0_5__1123->SetBinError(313,0.00399787);
   ThetaY_0_5__1123->SetBinError(314,0.004095844);
   ThetaY_0_5__1123->SetBinError(315,0.004136074);
   ThetaY_0_5__1123->SetBinError(316,0.004136845);
   ThetaY_0_5__1123->SetBinError(317,0.004080953);
   ThetaY_0_5__1123->SetBinError(318,0.004003312);
   ThetaY_0_5__1123->SetBinError(319,0.003808494);
   ThetaY_0_5__1123->SetBinError(320,0.003488682);
   ThetaY_0_5__1123->SetBinError(321,0.002892366);
   ThetaY_0_5__1123->SetBinError(322,0.001511957);
   ThetaY_0_5__1123->SetBinError(323,0.0001290027);
   ThetaY_0_5__1123->SetEntries(629397);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1123->SetLineColor(ci);
   ThetaY_0_5__1123->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1123->SetMarkerColor(ci);
   ThetaY_0_5__1123->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1123->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1123->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1123->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1123->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1123->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1123->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1123->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1123->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1123->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1123->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1123->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1123->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1123->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1123->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1123->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1123->Draw("AEsame");
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
   
   Double_t _fx3375[16] = {
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
   Double_t _fy3375[16] = {
   0,
   0,
   0.1446916,
   0.7215164,
   0.9267928,
   0.8803067,
   0.828915,
   0.880008,
   0.8509165,
   1,
   0.8446411,
   0.6843937,
   0.2527758,
   0.03432328,
   0,
   0};
   Double_t _felx3375[16] = {
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
   Double_t _fely3375[16] = {
   0,
   0,
   0.02628131,
   0.04928799,
   0.05130703,
   0.04764972,
   0.04512385,
   0.04605116,
   0.04527002,
   0.04977577,
   0.04660454,
   0.0440653,
   0.02914738,
   0.01265907,
   0,
   0};
   Double_t _fehx3375[16] = {
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
   Double_t _fehy3375[16] = {
   4.854755,
   0.03276852,
   0.03155213,
   0.05277689,
   0.05423019,
   0.05030234,
   0.04765056,
   0.04852727,
   0.04774576,
   0.05231816,
   0.04925066,
   0.04699901,
   0.03271974,
   0.01849021,
   0.0330389,
   4.608275};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3375,_fy3375,_felx3375,_fehx3375,_fely3375,_fehy3375);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3375 = new TH1F("Graph_Graph3375","",100,-100,100);
   Graph_Graph3375->SetMinimum(0);
   Graph_Graph3375->SetMaximum(1.5);
   Graph_Graph3375->SetDirectory(0);
   Graph_Graph3375->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3375->SetLineColor(ci);
   Graph_Graph3375->GetXaxis()->SetRange(1,100);
   Graph_Graph3375->GetXaxis()->CenterTitle(true);
   Graph_Graph3375->GetXaxis()->SetLabelFont(42);
   Graph_Graph3375->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3375->GetXaxis()->SetTitleFont(42);
   Graph_Graph3375->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3375->GetYaxis()->CenterTitle(true);
   Graph_Graph3375->GetYaxis()->SetLabelFont(42);
   Graph_Graph3375->GetYaxis()->SetTitleFont(42);
   Graph_Graph3375->GetZaxis()->SetLabelFont(42);
   Graph_Graph3375->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3375->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3375);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.130337,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1124 = new TH2D("ThetaY_vs_Y_0_5__1124","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8021,57);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8047,8310);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8073,30664);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8099,44070);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8125,52341);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8151,57625);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8177,60484);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8203,61678);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8229,61701);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8255,60045);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8281,57782);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8307,52295);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8333,43881);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8359,30162);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8385,8242);
   ThetaY_vs_Y_0_5__1124->SetBinContent(8411,60);
   ThetaY_vs_Y_0_5__1124->SetEntries(629397);
   ThetaY_vs_Y_0_5__1124->SetContour(20);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(1,3085.05);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(2,6170.1);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(3,9255.15);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(4,12340.2);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(5,15425.25);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(6,18510.3);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(7,21595.35);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(8,24680.4);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(9,27765.45);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(10,30850.5);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(11,33935.55);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(12,37020.6);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(13,40105.65);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(14,43190.7);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(15,46275.75);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(16,49360.8);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(17,52445.85);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(18,55530.9);
   ThetaY_vs_Y_0_5__1124->SetContourLevel(19,58615.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1124->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1124->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1124->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1124->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1124->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1124->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1124->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1124->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1124->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1124->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1124->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1124->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1124->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1124->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1124->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1124->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
