void S12_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-9.781544,125,185.8493);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__1587 = new TH1D("S12_ThetaY_15_20__1587","",630,-1575,1575);
   S12_ThetaY_15_20__1587->SetBinContent(311,1);
   S12_ThetaY_15_20__1587->SetBinContent(312,22);
   S12_ThetaY_15_20__1587->SetBinContent(313,52);
   S12_ThetaY_15_20__1587->SetBinContent(314,88);
   S12_ThetaY_15_20__1587->SetBinContent(315,88);
   S12_ThetaY_15_20__1587->SetBinContent(316,83);
   S12_ThetaY_15_20__1587->SetBinContent(317,54);
   S12_ThetaY_15_20__1587->SetBinError(311,1);
   S12_ThetaY_15_20__1587->SetBinError(312,4.690416);
   S12_ThetaY_15_20__1587->SetBinError(313,7.211103);
   S12_ThetaY_15_20__1587->SetBinError(314,9.380832);
   S12_ThetaY_15_20__1587->SetBinError(315,9.380832);
   S12_ThetaY_15_20__1587->SetBinError(316,9.110434);
   S12_ThetaY_15_20__1587->SetBinError(317,7.348469);
   S12_ThetaY_15_20__1587->SetMinimum(0);
   S12_ThetaY_15_20__1587->SetMaximum(166.2862);
   S12_ThetaY_15_20__1587->SetEntries(388);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1587->SetLineColor(ci);
   S12_ThetaY_15_20__1587->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1587->SetMarkerColor(ci);
   S12_ThetaY_15_20__1587->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__1587->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__1587->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1587->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1587->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1587->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__1587->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__1587->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1587->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1587->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1587->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1587->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1587->Draw("AE");
   
   TH1D *ThetaY_15_20__1588 = new TH1D("ThetaY_15_20__1588","",630,-1575,1575);
   ThetaY_15_20__1588->SetBinContent(311,1);
   ThetaY_15_20__1588->SetBinContent(312,44.78307);
   ThetaY_15_20__1588->SetBinContent(313,107.1217);
   ThetaY_15_20__1588->SetBinContent(314,136.709);
   ThetaY_15_20__1588->SetBinContent(315,148.619);
   ThetaY_15_20__1588->SetBinContent(316,151.1693);
   ThetaY_15_20__1588->SetBinContent(317,135.7037);
   ThetaY_15_20__1588->SetBinContent(318,106.7566);
   ThetaY_15_20__1588->SetBinContent(319,44.44974);
   ThetaY_15_20__1588->SetBinContent(320,0.973545);
   ThetaY_15_20__1588->SetBinError(311,0.0727393);
   ThetaY_15_20__1588->SetBinError(312,0.4867725);
   ThetaY_15_20__1588->SetBinError(313,0.7528489);
   ThetaY_15_20__1588->SetBinError(314,0.8504869);
   ThetaY_15_20__1588->SetBinError(315,0.8867605);
   ThetaY_15_20__1588->SetBinError(316,0.8943364);
   ThetaY_15_20__1588->SetBinError(317,0.8473541);
   ThetaY_15_20__1588->SetBinError(318,0.7515649);
   ThetaY_15_20__1588->SetBinError(319,0.4849575);
   ThetaY_15_20__1588->SetBinError(320,0.07177069);
   ThetaY_15_20__1588->SetEntries(165807);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1588->SetLineColor(ci);
   ThetaY_15_20__1588->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1588->SetMarkerColor(ci);
   ThetaY_15_20__1588->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1588->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1588->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1588->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1588->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1588->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1588->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1588->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1588->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1588->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1588->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1588->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1588->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1588->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1588->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1588->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1588->Draw("AEsame");
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
   
   Double_t _fx3530[10] = {
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
   Double_t _fy3530[10] = {
   1,
   0.4912571,
   0.4854292,
   0.6437031,
   0.5921179,
   0.5490532,
   0.3979258,
   0,
   0,
   0};
   Double_t _felx3530[10] = {
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
   Double_t _fely3530[10] = {
   0.8280773,
   0.1040637,
   0.06718425,
   0.06860361,
   0.06309736,
   0.06023106,
   0.0540384,
   0,
   0,
   0};
   Double_t _fehx3530[10] = {
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
   Double_t _fehy3530[10] = {
   2.319662,
   0.1288615,
   0.07719845,
   0.07633892,
   0.07021058,
   0.0672331,
   0.06192945,
   0.01724582,
   0.04142259,
   1.900542};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3530,_fy3530,_felx3530,_fehx3530,_fely3530,_fehy3530);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3530 = new TH1F("Graph_Graph3530","",100,-100,100);
   Graph_Graph3530->SetMinimum(0);
   Graph_Graph3530->SetMaximum(1.5);
   Graph_Graph3530->SetDirectory(0);
   Graph_Graph3530->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3530->SetLineColor(ci);
   Graph_Graph3530->GetXaxis()->SetRange(1,100);
   Graph_Graph3530->GetXaxis()->CenterTitle(true);
   Graph_Graph3530->GetXaxis()->SetLabelFont(42);
   Graph_Graph3530->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3530->GetXaxis()->SetTitleFont(42);
   Graph_Graph3530->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3530->GetYaxis()->CenterTitle(true);
   Graph_Graph3530->GetYaxis()->SetLabelFont(42);
   Graph_Graph3530->GetYaxis()->SetTitleFont(42);
   Graph_Graph3530->GetZaxis()->SetLabelFont(42);
   Graph_Graph3530->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3530->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3530);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,166.2862,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1589 = new TH2D("ThetaY_vs_Y_15_20__1589","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8102,189);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8128,8464);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8154,20246);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8180,25838);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8206,28089);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8232,28571);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8258,25648);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8284,20177);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8310,8401);
   ThetaY_vs_Y_15_20__1589->SetBinContent(8336,184);
   ThetaY_vs_Y_15_20__1589->SetEntries(165807);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1589->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1589->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1589->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1589->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1589->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1589->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1589->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1589->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1589->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1589->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1589->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1589->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1589->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1589->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1589->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1589->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
