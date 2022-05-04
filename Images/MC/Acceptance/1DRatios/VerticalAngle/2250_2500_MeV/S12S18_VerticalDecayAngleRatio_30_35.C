void S12S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2187211,125,4.155701);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_30_35__1710 = new TH1D("S12S18_ThetaY_30_35__1710","",630,-1575,1575);
   S12S18_ThetaY_30_35__1710->SetBinContent(312,1);
   S12S18_ThetaY_30_35__1710->SetBinContent(313,1.285714);
   S12S18_ThetaY_30_35__1710->SetBinContent(314,1.952381);
   S12S18_ThetaY_30_35__1710->SetBinContent(315,2.238095);
   S12S18_ThetaY_30_35__1710->SetBinContent(316,1.095238);
   S12S18_ThetaY_30_35__1710->SetBinError(312,0.2182179);
   S12S18_ThetaY_30_35__1710->SetBinError(313,0.2474358);
   S12S18_ThetaY_30_35__1710->SetBinError(314,0.3049107);
   S12S18_ThetaY_30_35__1710->SetBinError(315,0.3264597);
   S12S18_ThetaY_30_35__1710->SetBinError(316,0.2283729);
   S12S18_ThetaY_30_35__1710->SetMinimum(0);
   S12S18_ThetaY_30_35__1710->SetMaximum(3.718259);
   S12S18_ThetaY_30_35__1710->SetEntries(159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1710->SetLineColor(ci);
   S12S18_ThetaY_30_35__1710->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1710->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__1710->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__1710->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__1710->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1710->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1710->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1710->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__1710->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__1710->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1710->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1710->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1710->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1710->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1710->Draw("AE");
   
   TH1D *ThetaY_30_35__1711 = new TH1D("ThetaY_30_35__1711","",630,-1575,1575);
   ThetaY_30_35__1711->SetBinContent(311,0.02305882);
   ThetaY_30_35__1711->SetBinContent(312,1);
   ThetaY_30_35__1711->SetBinContent(313,2.376471);
   ThetaY_30_35__1711->SetBinContent(314,3.040471);
   ThetaY_30_35__1711->SetBinContent(315,3.380235);
   ThetaY_30_35__1711->SetBinContent(316,3.317176);
   ThetaY_30_35__1711->SetBinContent(317,3.086588);
   ThetaY_30_35__1711->SetBinContent(318,2.44);
   ThetaY_30_35__1711->SetBinContent(319,0.9731765);
   ThetaY_30_35__1711->SetBinContent(320,0.02023529);
   ThetaY_30_35__1711->SetBinError(311,0.003294118);
   ThetaY_30_35__1711->SetBinError(312,0.02169305);
   ThetaY_30_35__1711->SetBinError(313,0.03344158);
   ThetaY_30_35__1711->SetBinError(314,0.03782605);
   ThetaY_30_35__1711->SetBinError(315,0.03988357);
   ThetaY_30_35__1711->SetBinError(316,0.0395098);
   ThetaY_30_35__1711->SetBinError(317,0.03811184);
   ThetaY_30_35__1711->SetBinError(318,0.03388562);
   ThetaY_30_35__1711->SetBinError(319,0.02140013);
   ThetaY_30_35__1711->SetBinError(320,0.003085853);
   ThetaY_30_35__1711->SetEntries(41772);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1711->SetLineColor(ci);
   ThetaY_30_35__1711->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1711->SetMarkerColor(ci);
   ThetaY_30_35__1711->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1711->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1711->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1711->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1711->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1711->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1711->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1711->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1711->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1711->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1711->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1711->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1711->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1711->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1711->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1711->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1711->Draw("AEsame");
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
   
   Double_t _fx3571[10] = {
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
   Double_t _fy3571[10] = {
   0,
   1,
   0.5410184,
   0.6421312,
   0.6621123,
   0.3301718,
   0,
   0,
   0,
   0};
   Double_t _felx3571[10] = {
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
   Double_t _fely3571[10] = {
   0,
   0.2174865,
   0.1037368,
   0.1001823,
   0.09654203,
   0.06844838,
   0,
   0,
   0,
   0};
   Double_t _fehx3571[10] = {
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
   Double_t _fehy3571[10] = {
   3.874241,
   0.2709812,
   0.1258538,
   0.1171985,
   0.1117767,
   0.08436949,
   0.02840677,
   0.03593576,
   0.09012418,
   4.426498};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3571,_fy3571,_felx3571,_fehx3571,_fely3571,_fehy3571);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3571 = new TH1F("Graph_Graph3571","",100,-100,100);
   Graph_Graph3571->SetMinimum(0);
   Graph_Graph3571->SetMaximum(1.5);
   Graph_Graph3571->SetDirectory(0);
   Graph_Graph3571->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3571->SetLineColor(ci);
   Graph_Graph3571->GetXaxis()->SetRange(1,100);
   Graph_Graph3571->GetXaxis()->CenterTitle(true);
   Graph_Graph3571->GetXaxis()->SetLabelFont(42);
   Graph_Graph3571->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3571->GetXaxis()->SetTitleFont(42);
   Graph_Graph3571->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3571->GetYaxis()->CenterTitle(true);
   Graph_Graph3571->GetYaxis()->SetLabelFont(42);
   Graph_Graph3571->GetYaxis()->SetTitleFont(42);
   Graph_Graph3571->GetZaxis()->SetLabelFont(42);
   Graph_Graph3571->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3571->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3571);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.718259,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1712 = new TH2D("ThetaY_vs_Y_30_35__1712","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8105,49);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8131,2125);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8157,5050);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8183,6461);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8209,7183);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8235,7049);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8261,6559);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8287,5185);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8313,2068);
   ThetaY_vs_Y_30_35__1712->SetBinContent(8339,43);
   ThetaY_vs_Y_30_35__1712->SetEntries(41772);
   ThetaY_vs_Y_30_35__1712->SetContour(20);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(1,359.15);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(2,718.3);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(3,1077.45);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(4,1436.6);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(5,1795.75);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(6,2154.9);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(7,2514.05);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(8,2873.2);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(9,3232.35);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(10,3591.5);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(11,3950.65);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(12,4309.8);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(13,4668.95);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(14,5028.1);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(15,5387.25);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(16,5746.4);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(17,6105.55);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(18,6464.7);
   ThetaY_vs_Y_30_35__1712->SetContourLevel(19,6823.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1712->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1712->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1712->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1712->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1712->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1712->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1712->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1712->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1712->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1712->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1712->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1712->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1712->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1712->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1712->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1712->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_30_35","Reco vertices","lpf");
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
