void S18_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__1806 = new TH1D("S18_ThetaY_0_5__1806","",630,-1575,1575);
   S18_ThetaY_0_5__1806->SetBinContent(313,0.1307692);
   S18_ThetaY_0_5__1806->SetBinContent(314,0.7384615);
   S18_ThetaY_0_5__1806->SetBinContent(315,0.9769231);
   S18_ThetaY_0_5__1806->SetBinContent(316,1);
   S18_ThetaY_0_5__1806->SetBinContent(317,0.5538462);
   S18_ThetaY_0_5__1806->SetBinContent(318,0.04615385);
   S18_ThetaY_0_5__1806->SetBinError(313,0.0317162);
   S18_ThetaY_0_5__1806->SetBinError(314,0.07536892);
   S18_ThetaY_0_5__1806->SetBinError(315,0.08668791);
   S18_ThetaY_0_5__1806->SetBinError(316,0.0877058);
   S18_ThetaY_0_5__1806->SetBinError(317,0.0652714);
   S18_ThetaY_0_5__1806->SetBinError(318,0.01884223);
   S18_ThetaY_0_5__1806->SetMinimum(0);
   S18_ThetaY_0_5__1806->SetMaximum(1.1);
   S18_ThetaY_0_5__1806->SetEntries(448);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1806->SetLineColor(ci);
   S18_ThetaY_0_5__1806->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1806->SetMarkerColor(ci);
   S18_ThetaY_0_5__1806->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__1806->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__1806->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1806->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1806->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1806->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__1806->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__1806->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1806->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1806->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1806->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1806->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1806->Draw("AE");
   
   TH1D *ThetaY_0_5__1807 = new TH1D("ThetaY_0_5__1807","",630,-1575,1575);
   ThetaY_0_5__1807->SetBinContent(312,0.02156399);
   ThetaY_0_5__1807->SetBinContent(313,0.4261876);
   ThetaY_0_5__1807->SetBinContent(314,0.8447489);
   ThetaY_0_5__1807->SetBinContent(315,0.998972);
   ThetaY_0_5__1807->SetBinContent(316,1);
   ThetaY_0_5__1807->SetBinContent(317,0.8461833);
   ThetaY_0_5__1807->SetBinContent(318,0.4218604);
   ThetaY_0_5__1807->SetBinContent(319,0.02039255);
   ThetaY_0_5__1807->SetBinError(312,0.0007180022);
   ThetaY_0_5__1807->SetBinError(313,0.003191991);
   ThetaY_0_5__1807->SetBinError(314,0.004493917);
   ThetaY_0_5__1807->SetBinError(315,0.00488695);
   ThetaY_0_5__1807->SetBinError(316,0.004889464);
   ThetaY_0_5__1807->SetBinError(317,0.004497731);
   ThetaY_0_5__1807->SetBinError(318,0.003175745);
   ThetaY_0_5__1807->SetBinError(319,0.0006982276);
   ThetaY_0_5__1807->SetEntries(191573);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1807->SetLineColor(ci);
   ThetaY_0_5__1807->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1807->SetMarkerColor(ci);
   ThetaY_0_5__1807->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1807->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1807->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1807->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1807->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1807->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1807->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1807->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1807->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1807->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1807->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1807->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1807->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1807->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1807->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1807->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1807->Draw("AEsame");
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
   
   Double_t _fx3603[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3603[8] = {
   0,
   0.3068349,
   0.8741788,
   0.9779284,
   1,
   0.6545227,
   0.1094055,
   0};
   Double_t _felx3603[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3603[8] = {
   0,
   0.07371302,
   0.08918454,
   0.08679335,
   0.08772789,
   0.07703387,
   0.04340258,
   0};
   Double_t _fehx3603[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3603[8] = {
   0.6574001,
   0.093981,
   0.0987856,
   0.09486305,
   0.09578589,
   0.08668386,
   0.06536275,
   0.6952048};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3603,_fy3603,_felx3603,_fehx3603,_fely3603,_fehy3603);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3603 = new TH1F("Graph_Graph3603","",100,-100,100);
   Graph_Graph3603->SetMinimum(0);
   Graph_Graph3603->SetMaximum(1.5);
   Graph_Graph3603->SetDirectory(0);
   Graph_Graph3603->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3603->SetLineColor(ci);
   Graph_Graph3603->GetXaxis()->SetRange(1,100);
   Graph_Graph3603->GetXaxis()->CenterTitle(true);
   Graph_Graph3603->GetXaxis()->SetLabelFont(42);
   Graph_Graph3603->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3603->GetXaxis()->SetTitleFont(42);
   Graph_Graph3603->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3603->GetYaxis()->CenterTitle(true);
   Graph_Graph3603->GetYaxis()->SetLabelFont(42);
   Graph_Graph3603->GetYaxis()->SetTitleFont(42);
   Graph_Graph3603->GetZaxis()->SetLabelFont(42);
   Graph_Graph3603->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3603->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3603);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1808 = new TH2D("ThetaY_vs_Y_0_5__1808","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8125,902);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8151,17827);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8177,35335);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8203,41786);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8229,41829);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8255,35395);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8281,17646);
   ThetaY_vs_Y_0_5__1808->SetBinContent(8307,853);
   ThetaY_vs_Y_0_5__1808->SetEntries(191573);
   ThetaY_vs_Y_0_5__1808->SetContour(20);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(1,2091.45);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(2,4182.9);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(3,6274.35);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(4,8365.8);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(5,10457.25);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(6,12548.7);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(7,14640.15);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(8,16731.6);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(9,18823.05);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(10,20914.5);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(11,23005.95);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(12,25097.4);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(13,27188.85);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(14,29280.3);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(15,31371.75);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(16,33463.2);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(17,35554.65);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(18,37646.1);
   ThetaY_vs_Y_0_5__1808->SetContourLevel(19,39737.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1808->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1808->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1808->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1808->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1808->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1808->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1808->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1808->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1808->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1808->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1808->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1808->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1808->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1808->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1808->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1808->Draw("COL");
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
