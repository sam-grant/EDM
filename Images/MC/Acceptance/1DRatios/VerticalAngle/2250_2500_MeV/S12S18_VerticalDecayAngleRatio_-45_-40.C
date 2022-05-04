void S12S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06994716,125,1.328996);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__1665 = new TH1D("S12S18_ThetaY_mI45_mI40__1665","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__1665->SetBinContent(315,0.07692308);
   S12S18_ThetaY_mI45_mI40__1665->SetBinContent(316,0.6923077);
   S12S18_ThetaY_mI45_mI40__1665->SetBinContent(317,1);
   S12S18_ThetaY_mI45_mI40__1665->SetBinContent(318,0.4615385);
   S12S18_ThetaY_mI45_mI40__1665->SetBinContent(319,0.07692308);
   S12S18_ThetaY_mI45_mI40__1665->SetBinError(315,0.07692308);
   S12S18_ThetaY_mI45_mI40__1665->SetBinError(316,0.2307692);
   S12S18_ThetaY_mI45_mI40__1665->SetBinError(317,0.2773501);
   S12S18_ThetaY_mI45_mI40__1665->SetBinError(318,0.1884223);
   S12S18_ThetaY_mI45_mI40__1665->SetBinError(319,0.07692308);
   S12S18_ThetaY_mI45_mI40__1665->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__1665->SetMaximum(1.189102);
   S12S18_ThetaY_mI45_mI40__1665->SetEntries(30);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1665->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__1665->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1665->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__1665->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__1665->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__1665->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1665->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1665->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1665->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__1665->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__1665->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1665->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1665->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1665->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1665->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1665->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1666 = new TH1D("ThetaY_mI45_mI40__1666","",630,-1575,1575);
   ThetaY_mI45_mI40__1666->SetBinContent(311,0.005154639);
   ThetaY_mI45_mI40__1666->SetBinContent(312,0.3527246);
   ThetaY_mI45_mI40__1666->SetBinContent(313,0.7466863);
   ThetaY_mI45_mI40__1666->SetBinContent(314,0.9896907);
   ThetaY_mI45_mI40__1666->SetBinContent(315,1.080265);
   ThetaY_mI45_mI40__1666->SetBinContent(316,1.081001);
   ThetaY_mI45_mI40__1666->SetBinContent(317,1);
   ThetaY_mI45_mI40__1666->SetBinContent(318,0.763623);
   ThetaY_mI45_mI40__1666->SetBinContent(319,0.3365243);
   ThetaY_mI45_mI40__1666->SetBinContent(320,0.005891016);
   ThetaY_mI45_mI40__1666->SetBinError(311,0.00194827);
   ThetaY_mI45_mI40__1666->SetBinError(312,0.0161164);
   ThetaY_mI45_mI40__1666->SetBinError(313,0.02344872);
   ThetaY_mI45_mI40__1666->SetBinError(314,0.02699603);
   ThetaY_mI45_mI40__1666->SetBinError(315,0.0282043);
   ThetaY_mI45_mI40__1666->SetBinError(316,0.02821391);
   ThetaY_mI45_mI40__1666->SetBinError(317,0.02713627);
   ThetaY_mI45_mI40__1666->SetBinError(318,0.02371317);
   ThetaY_mI45_mI40__1666->SetBinError(319,0.01574194);
   ThetaY_mI45_mI40__1666->SetBinError(320,0.002082789);
   ThetaY_mI45_mI40__1666->SetEntries(8639);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1666->SetLineColor(ci);
   ThetaY_mI45_mI40__1666->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1666->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1666->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1666->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1666->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1666->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1666->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1666->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1666->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1666->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1666->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1666->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1666->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1666->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1666->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1666->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1666->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1666->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1666->Draw("AEsame");
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
   
   Double_t _fx3556[10] = {
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
   Double_t _fy3556[10] = {
   0,
   0,
   0,
   0,
   0.07120759,
   0.6404318,
   1,
   0.6044062,
   0.228581,
   0};
   Double_t _felx3556[10] = {
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
   Double_t _fely3556[10] = {
   0,
   0,
   0,
   0,
   0.05891387,
   0.2100316,
   0.2749585,
   0.2403338,
   0.1891716,
   0};
   Double_t _fehx3556[10] = {
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
   Double_t _fehy3556[10] = {
   31.42524,
   0.4022672,
   0.189833,
   0.1431903,
   0.163928,
   0.2937839,
   0.3637043,
   0.3626639,
   0.5275281,
   27.03055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3556,_fy3556,_felx3556,_fehx3556,_fely3556,_fehy3556);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3556 = new TH1F("Graph_Graph3556","",100,-100,100);
   Graph_Graph3556->SetMinimum(0);
   Graph_Graph3556->SetMaximum(1.5);
   Graph_Graph3556->SetDirectory(0);
   Graph_Graph3556->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3556->SetLineColor(ci);
   Graph_Graph3556->GetXaxis()->SetRange(1,100);
   Graph_Graph3556->GetXaxis()->CenterTitle(true);
   Graph_Graph3556->GetXaxis()->SetLabelFont(42);
   Graph_Graph3556->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3556->GetXaxis()->SetTitleFont(42);
   Graph_Graph3556->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3556->GetYaxis()->CenterTitle(true);
   Graph_Graph3556->GetYaxis()->SetLabelFont(42);
   Graph_Graph3556->GetYaxis()->SetTitleFont(42);
   Graph_Graph3556->GetZaxis()->SetLabelFont(42);
   Graph_Graph3556->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3556->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3556);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.189102,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1667 = new TH2D("ThetaY_vs_Y_mI45_mI40__1667","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8090,7);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8116,479);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8142,1014);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8168,1344);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8194,1467);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8220,1468);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8246,1358);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8272,1037);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8298,457);
   ThetaY_vs_Y_mI45_mI40__1667->SetBinContent(8324,8);
   ThetaY_vs_Y_mI45_mI40__1667->SetEntries(8639);
   ThetaY_vs_Y_mI45_mI40__1667->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(1,73.4);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(2,146.8);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(3,220.2);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(4,293.6);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(5,367);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(6,440.4);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(7,513.8);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(8,587.2);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(9,660.6);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(10,734);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(11,807.4);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(12,880.8);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(13,954.2);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(14,1027.6);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(15,1101);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(16,1174.4);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(17,1247.8);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(18,1321.2);
   ThetaY_vs_Y_mI45_mI40__1667->SetContourLevel(19,1394.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1667->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1667->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1667->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1667->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1667->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1667->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1667->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1667->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1667->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1667->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1667->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1667->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1667->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1667->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1667->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1667->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
