void S18_VerticalDecayAngleRatio_30_35()
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
   
   TH1D *S18_ThetaY_30_35__1824 = new TH1D("S18_ThetaY_30_35__1824","",630,-1575,1575);
   S18_ThetaY_30_35__1824->SetBinContent(313,0.06451613);
   S18_ThetaY_30_35__1824->SetBinContent(314,0.4516129);
   S18_ThetaY_30_35__1824->SetBinContent(315,1);
   S18_ThetaY_30_35__1824->SetBinContent(316,0.1290323);
   S18_ThetaY_30_35__1824->SetBinError(313,0.04561979);
   S18_ThetaY_30_35__1824->SetBinError(314,0.1206986);
   S18_ThetaY_30_35__1824->SetBinError(315,0.1796053);
   S18_ThetaY_30_35__1824->SetBinError(316,0.06451613);
   S18_ThetaY_30_35__1824->SetMinimum(0);
   S18_ThetaY_30_35__1824->SetMaximum(1.1);
   S18_ThetaY_30_35__1824->SetEntries(51);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1824->SetLineColor(ci);
   S18_ThetaY_30_35__1824->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1824->SetMarkerColor(ci);
   S18_ThetaY_30_35__1824->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__1824->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__1824->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1824->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1824->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1824->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__1824->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__1824->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1824->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1824->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1824->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1824->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1824->Draw("AE");
   
   TH1D *ThetaY_30_35__1825 = new TH1D("ThetaY_30_35__1825","",630,-1575,1575);
   ThetaY_30_35__1825->SetBinContent(312,0.02260476);
   ThetaY_30_35__1825->SetBinContent(313,0.4162754);
   ThetaY_30_35__1825->SetBinContent(314,0.8388106);
   ThetaY_30_35__1825->SetBinContent(315,1);
   ThetaY_30_35__1825->SetBinContent(316,0.9871327);
   ThetaY_30_35__1825->SetBinContent(317,0.8355069);
   ThetaY_30_35__1825->SetBinContent(318,0.4286211);
   ThetaY_30_35__1825->SetBinContent(319,0.01912711);
   ThetaY_30_35__1825->SetBinError(312,0.001982569);
   ThetaY_30_35__1825->SetBinError(313,0.008507828);
   ThetaY_30_35__1825->SetBinError(314,0.01207703);
   ThetaY_30_35__1825->SetBinError(315,0.01318646);
   ThetaY_30_35__1825->SetBinError(316,0.01310135);
   ThetaY_30_35__1825->SetBinError(317,0.01205323);
   ThetaY_30_35__1825->SetBinError(318,0.008633067);
   ThetaY_30_35__1825->SetBinError(319,0.001823698);
   ThetaY_30_35__1825->SetEntries(26156);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1825->SetLineColor(ci);
   ThetaY_30_35__1825->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1825->SetMarkerColor(ci);
   ThetaY_30_35__1825->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1825->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1825->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1825->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1825->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1825->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1825->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1825->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1825->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1825->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1825->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1825->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1825->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1825->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1825->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1825->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1825->Draw("AEsame");
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
   
   Double_t _fx3609[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3609[8] = {
   0,
   0.1549842,
   0.5383967,
   1,
   0.1307142,
   0,
   0,
   0};
   Double_t _felx3609[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3609[8] = {
   0,
   0.1001317,
   0.1423487,
   0.1790973,
   0.06257532,
   0,
   0,
   0};
   Double_t _fehx3609[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3609[8] = {
   2.645916,
   0.2046114,
   0.186124,
   0.2144924,
   0.1034194,
   0.07109358,
   0.1386072,
   3.13103};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3609,_fy3609,_felx3609,_fehx3609,_fely3609,_fehy3609);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3609 = new TH1F("Graph_Graph3609","",100,-100,100);
   Graph_Graph3609->SetMinimum(0);
   Graph_Graph3609->SetMaximum(1.5);
   Graph_Graph3609->SetDirectory(0);
   Graph_Graph3609->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3609->SetLineColor(ci);
   Graph_Graph3609->GetXaxis()->SetRange(1,100);
   Graph_Graph3609->GetXaxis()->CenterTitle(true);
   Graph_Graph3609->GetXaxis()->SetLabelFont(42);
   Graph_Graph3609->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3609->GetXaxis()->SetTitleFont(42);
   Graph_Graph3609->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3609->GetYaxis()->CenterTitle(true);
   Graph_Graph3609->GetYaxis()->SetLabelFont(42);
   Graph_Graph3609->GetYaxis()->SetTitleFont(42);
   Graph_Graph3609->GetZaxis()->SetLabelFont(42);
   Graph_Graph3609->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3609->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3609);
   
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
   
   TH2D *ThetaY_vs_Y_30_35__1826 = new TH2D("ThetaY_vs_Y_30_35__1826","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8131,130);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8157,2394);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8183,4824);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8209,5751);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8235,5677);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8261,4805);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8287,2465);
   ThetaY_vs_Y_30_35__1826->SetBinContent(8313,110);
   ThetaY_vs_Y_30_35__1826->SetEntries(26156);
   ThetaY_vs_Y_30_35__1826->SetContour(20);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(1,287.55);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(2,575.1);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(3,862.65);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(4,1150.2);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(5,1437.75);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(6,1725.3);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(7,2012.85);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(8,2300.4);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(9,2587.95);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(10,2875.5);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(11,3163.05);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(12,3450.6);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(13,3738.15);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(14,4025.7);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(15,4313.25);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(16,4600.8);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(17,4888.35);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(18,5175.9);
   ThetaY_vs_Y_30_35__1826->SetContourLevel(19,5463.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1826->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1826->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1826->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1826->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1826->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1826->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1826->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1826->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1826->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1826->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1826->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1826->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1826->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1826->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1826->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1826->Draw("COL");
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
