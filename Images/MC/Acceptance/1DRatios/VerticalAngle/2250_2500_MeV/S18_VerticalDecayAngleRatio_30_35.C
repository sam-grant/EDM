void S18_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.2187211,125,4.155701);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__1653 = new TH1D("S18_ThetaY_30_35__1653","",630,-1575,1575);
   S18_ThetaY_30_35__1653->SetBinContent(312,1);
   S18_ThetaY_30_35__1653->SetBinContent(313,0.875);
   S18_ThetaY_30_35__1653->SetBinContent(314,1.3125);
   S18_ThetaY_30_35__1653->SetBinContent(315,1.5625);
   S18_ThetaY_30_35__1653->SetBinContent(316,0.75);
   S18_ThetaY_30_35__1653->SetBinError(312,0.25);
   S18_ThetaY_30_35__1653->SetBinError(313,0.2338536);
   S18_ThetaY_30_35__1653->SetBinError(314,0.286411);
   S18_ThetaY_30_35__1653->SetBinError(315,0.3125);
   S18_ThetaY_30_35__1653->SetBinError(316,0.2165064);
   S18_ThetaY_30_35__1653->SetMinimum(0);
   S18_ThetaY_30_35__1653->SetMaximum(3.718259);
   S18_ThetaY_30_35__1653->SetEntries(88);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1653->SetLineColor(ci);
   S18_ThetaY_30_35__1653->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1653->SetMarkerColor(ci);
   S18_ThetaY_30_35__1653->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__1653->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__1653->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1653->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1653->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1653->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__1653->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__1653->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1653->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1653->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1653->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1653->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1653->Draw("AE");
   
   TH1D *ThetaY_30_35__1654 = new TH1D("ThetaY_30_35__1654","",630,-1575,1575);
   ThetaY_30_35__1654->SetBinContent(311,0.02305882);
   ThetaY_30_35__1654->SetBinContent(312,1);
   ThetaY_30_35__1654->SetBinContent(313,2.376471);
   ThetaY_30_35__1654->SetBinContent(314,3.040471);
   ThetaY_30_35__1654->SetBinContent(315,3.380235);
   ThetaY_30_35__1654->SetBinContent(316,3.317176);
   ThetaY_30_35__1654->SetBinContent(317,3.086588);
   ThetaY_30_35__1654->SetBinContent(318,2.44);
   ThetaY_30_35__1654->SetBinContent(319,0.9731765);
   ThetaY_30_35__1654->SetBinContent(320,0.02023529);
   ThetaY_30_35__1654->SetBinError(311,0.003294118);
   ThetaY_30_35__1654->SetBinError(312,0.02169305);
   ThetaY_30_35__1654->SetBinError(313,0.03344158);
   ThetaY_30_35__1654->SetBinError(314,0.03782605);
   ThetaY_30_35__1654->SetBinError(315,0.03988357);
   ThetaY_30_35__1654->SetBinError(316,0.0395098);
   ThetaY_30_35__1654->SetBinError(317,0.03811184);
   ThetaY_30_35__1654->SetBinError(318,0.03388562);
   ThetaY_30_35__1654->SetBinError(319,0.02140013);
   ThetaY_30_35__1654->SetBinError(320,0.003085853);
   ThetaY_30_35__1654->SetEntries(41772);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1654->SetLineColor(ci);
   ThetaY_30_35__1654->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1654->SetMarkerColor(ci);
   ThetaY_30_35__1654->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1654->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1654->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1654->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1654->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1654->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1654->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1654->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1654->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1654->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1654->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1654->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1654->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1654->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1654->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1654->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1654->Draw("AEsame");
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
   
   Double_t _fx3552[10] = {
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
   Double_t _fy3552[10] = {
   0,
   1,
   0.3681931,
   0.4316766,
   0.4622459,
   0.2260959,
   0,
   0,
   0,
   0};
   Double_t _felx3552[10] = {
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
   Double_t _fely3552[10] = {
   0,
   0.2482385,
   0.09734202,
   0.09358876,
   0.0919804,
   0.06439877,
   0,
   0,
   0,
   0};
   Double_t _fehx3552[10] = {
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
   Double_t _fehy3552[10] = {
   5.084941,
   0.3192663,
   0.1272734,
   0.1164878,
   0.1124127,
   0.08601393,
   0.03728389,
   0.04716569,
   0.118288,
   5.809779};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3552,_fy3552,_felx3552,_fehx3552,_fely3552,_fehy3552);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3552 = new TH1F("Graph_Graph3552","",100,-100,100);
   Graph_Graph3552->SetMinimum(0);
   Graph_Graph3552->SetMaximum(1.5);
   Graph_Graph3552->SetDirectory(0);
   Graph_Graph3552->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3552->SetLineColor(ci);
   Graph_Graph3552->GetXaxis()->SetRange(1,100);
   Graph_Graph3552->GetXaxis()->CenterTitle(true);
   Graph_Graph3552->GetXaxis()->SetLabelFont(42);
   Graph_Graph3552->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3552->GetXaxis()->SetTitleFont(42);
   Graph_Graph3552->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3552->GetYaxis()->CenterTitle(true);
   Graph_Graph3552->GetYaxis()->SetLabelFont(42);
   Graph_Graph3552->GetYaxis()->SetTitleFont(42);
   Graph_Graph3552->GetZaxis()->SetLabelFont(42);
   Graph_Graph3552->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3552->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3552);
   
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
   
   TH2D *ThetaY_vs_Y_30_35__1655 = new TH2D("ThetaY_vs_Y_30_35__1655","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8105,49);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8131,2125);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8157,5050);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8183,6461);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8209,7183);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8235,7049);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8261,6559);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8287,5185);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8313,2068);
   ThetaY_vs_Y_30_35__1655->SetBinContent(8339,43);
   ThetaY_vs_Y_30_35__1655->SetEntries(41772);
   ThetaY_vs_Y_30_35__1655->SetContour(20);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(1,359.15);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(2,718.3);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(3,1077.45);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(4,1436.6);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(5,1795.75);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(6,2154.9);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(7,2514.05);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(8,2873.2);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(9,3232.35);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(10,3591.5);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(11,3950.65);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(12,4309.8);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(13,4668.95);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(14,5028.1);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(15,5387.25);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(16,5746.4);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(17,6105.55);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(18,6464.7);
   ThetaY_vs_Y_30_35__1655->SetContourLevel(19,6823.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1655->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1655->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1655->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1655->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1655->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1655->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1655->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1655->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1655->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1655->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1655->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1655->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1655->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1655->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1655->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1655->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_30_35","Reco vertices","lpf");
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
