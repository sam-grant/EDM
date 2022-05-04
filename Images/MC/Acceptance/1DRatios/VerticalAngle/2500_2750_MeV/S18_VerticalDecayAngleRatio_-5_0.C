void S18_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.064771,125,1.230649);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__1803 = new TH1D("S18_ThetaY_mI5_0__1803","",630,-1575,1575);
   S18_ThetaY_mI5_0__1803->SetBinContent(313,0.1212121);
   S18_ThetaY_mI5_0__1803->SetBinContent(314,0.5984848);
   S18_ThetaY_mI5_0__1803->SetBinContent(315,1);
   S18_ThetaY_mI5_0__1803->SetBinContent(316,0.9393939);
   S18_ThetaY_mI5_0__1803->SetBinContent(317,0.8257576);
   S18_ThetaY_mI5_0__1803->SetBinContent(318,0.1212121);
   S18_ThetaY_mI5_0__1803->SetBinError(313,0.03030303);
   S18_ThetaY_mI5_0__1803->SetBinError(314,0.06733481);
   S18_ThetaY_mI5_0__1803->SetBinError(315,0.08703883);
   S18_ThetaY_mI5_0__1803->SetBinError(316,0.08436007);
   S18_ThetaY_mI5_0__1803->SetBinError(317,0.07909323);
   S18_ThetaY_mI5_0__1803->SetBinError(318,0.03030303);
   S18_ThetaY_mI5_0__1803->SetMinimum(0);
   S18_ThetaY_mI5_0__1803->SetMaximum(1.101107);
   S18_ThetaY_mI5_0__1803->SetEntries(476);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1803->SetLineColor(ci);
   S18_ThetaY_mI5_0__1803->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1803->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__1803->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__1803->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__1803->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1803->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1803->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1803->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__1803->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__1803->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1803->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1803->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1803->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1803->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1803->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1804 = new TH1D("ThetaY_mI5_0__1804","",630,-1575,1575);
   ThetaY_mI5_0__1804->SetBinContent(312,0.01964589);
   ThetaY_mI5_0__1804->SetBinContent(313,0.4227701);
   ThetaY_mI5_0__1804->SetBinContent(314,0.849062);
   ThetaY_mI5_0__1804->SetBinContent(315,1);
   ThetaY_mI5_0__1804->SetBinContent(316,1.001006);
   ThetaY_mI5_0__1804->SetBinContent(317,0.8479839);
   ThetaY_mI5_0__1804->SetBinContent(318,0.4254534);
   ThetaY_mI5_0__1804->SetBinContent(319,0.01978965);
   ThetaY_mI5_0__1804->SetBinError(312,0.0006860644);
   ThetaY_mI5_0__1804->SetBinError(313,0.003182593);
   ThetaY_mI5_0__1804->SetBinError(314,0.00451023);
   ThetaY_mI5_0__1804->SetBinError(315,0.004894733);
   ThetaY_mI5_0__1804->SetBinError(316,0.004897195);
   ThetaY_mI5_0__1804->SetBinError(317,0.004507366);
   ThetaY_mI5_0__1804->SetBinError(318,0.003192677);
   ThetaY_mI5_0__1804->SetBinError(319,0.0006885698);
   ThetaY_mI5_0__1804->SetEntries(191403);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1804->SetLineColor(ci);
   ThetaY_mI5_0__1804->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1804->SetMarkerColor(ci);
   ThetaY_mI5_0__1804->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1804->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1804->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1804->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1804->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1804->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1804->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1804->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1804->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1804->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1804->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1804->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1804->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1804->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1804->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1804->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1804->Draw("AEsame");
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
   
   Double_t _fx3602[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3602[8] = {
   0,
   0.2867093,
   0.7048777,
   1,
   0.9384496,
   0.9737892,
   0.284901,
   0};
   Double_t _felx3602[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3602[8] = {
   0,
   0.07095146,
   0.07922381,
   0.08706482,
   0.08428533,
   0.09327084,
   0.07050378,
   0};
   Double_t _fehx3602[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3602[8] = {
   0.7107237,
   0.09113955,
   0.08867336,
   0.09499865,
   0.09222009,
   0.1026657,
   0.09056439,
   0.7055553};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3602,_fy3602,_felx3602,_fehx3602,_fely3602,_fehy3602);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3602 = new TH1F("Graph_Graph3602","",100,-100,100);
   Graph_Graph3602->SetMinimum(0);
   Graph_Graph3602->SetMaximum(1.5);
   Graph_Graph3602->SetDirectory(0);
   Graph_Graph3602->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3602->SetLineColor(ci);
   Graph_Graph3602->GetXaxis()->SetRange(1,100);
   Graph_Graph3602->GetXaxis()->CenterTitle(true);
   Graph_Graph3602->GetXaxis()->SetLabelFont(42);
   Graph_Graph3602->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3602->GetXaxis()->SetTitleFont(42);
   Graph_Graph3602->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3602->GetYaxis()->CenterTitle(true);
   Graph_Graph3602->GetYaxis()->SetLabelFont(42);
   Graph_Graph3602->GetYaxis()->SetTitleFont(42);
   Graph_Graph3602->GetZaxis()->SetLabelFont(42);
   Graph_Graph3602->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3602->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3602);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.101107,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1805 = new TH2D("ThetaY_vs_Y_mI5_0__1805","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8124,820);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8150,17646);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8176,35439);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8202,41739);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8228,41781);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8254,35394);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8280,17758);
   ThetaY_vs_Y_mI5_0__1805->SetBinContent(8306,826);
   ThetaY_vs_Y_mI5_0__1805->SetEntries(191403);
   ThetaY_vs_Y_mI5_0__1805->SetContour(20);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(1,2089.05);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(2,4178.1);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(3,6267.15);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(4,8356.2);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(5,10445.25);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(6,12534.3);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(7,14623.35);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(8,16712.4);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(9,18801.45);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(10,20890.5);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(11,22979.55);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(12,25068.6);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(13,27157.65);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(14,29246.7);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(15,31335.75);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(16,33424.8);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(17,35513.85);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(18,37602.9);
   ThetaY_vs_Y_mI5_0__1805->SetContourLevel(19,39691.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1805->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1805->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1805->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1805->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1805->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1805->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1805->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1805->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1805->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1805->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1805->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1805->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1805->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1805->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1805->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1805->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-5_0","Reco vertices","lpf");
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
