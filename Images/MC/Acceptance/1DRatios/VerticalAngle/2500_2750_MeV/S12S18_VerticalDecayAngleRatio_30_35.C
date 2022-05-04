void S12S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:13 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_30_35__1881 = new TH1D("S12S18_ThetaY_30_35__1881","",630,-1575,1575);
   S12S18_ThetaY_30_35__1881->SetBinContent(313,0.1162791);
   S12S18_ThetaY_30_35__1881->SetBinContent(314,0.6744186);
   S12S18_ThetaY_30_35__1881->SetBinContent(315,1);
   S12S18_ThetaY_30_35__1881->SetBinContent(316,0.2325581);
   S12S18_ThetaY_30_35__1881->SetBinError(313,0.05200158);
   S12S18_ThetaY_30_35__1881->SetBinError(314,0.1252364);
   S12S18_ThetaY_30_35__1881->SetBinError(315,0.1524986);
   S12S18_ThetaY_30_35__1881->SetBinError(316,0.07354134);
   S12S18_ThetaY_30_35__1881->SetMinimum(0);
   S12S18_ThetaY_30_35__1881->SetMaximum(1.1);
   S12S18_ThetaY_30_35__1881->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1881->SetLineColor(ci);
   S12S18_ThetaY_30_35__1881->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1881->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__1881->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__1881->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__1881->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1881->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1881->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1881->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__1881->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__1881->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1881->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1881->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1881->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1881->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1881->Draw("AE");
   
   TH1D *ThetaY_30_35__1882 = new TH1D("ThetaY_30_35__1882","",630,-1575,1575);
   ThetaY_30_35__1882->SetBinContent(312,0.02260476);
   ThetaY_30_35__1882->SetBinContent(313,0.4162754);
   ThetaY_30_35__1882->SetBinContent(314,0.8388106);
   ThetaY_30_35__1882->SetBinContent(315,1);
   ThetaY_30_35__1882->SetBinContent(316,0.9871327);
   ThetaY_30_35__1882->SetBinContent(317,0.8355069);
   ThetaY_30_35__1882->SetBinContent(318,0.4286211);
   ThetaY_30_35__1882->SetBinContent(319,0.01912711);
   ThetaY_30_35__1882->SetBinError(312,0.001982569);
   ThetaY_30_35__1882->SetBinError(313,0.008507828);
   ThetaY_30_35__1882->SetBinError(314,0.01207703);
   ThetaY_30_35__1882->SetBinError(315,0.01318646);
   ThetaY_30_35__1882->SetBinError(316,0.01310135);
   ThetaY_30_35__1882->SetBinError(317,0.01205323);
   ThetaY_30_35__1882->SetBinError(318,0.008633067);
   ThetaY_30_35__1882->SetBinError(319,0.001823698);
   ThetaY_30_35__1882->SetEntries(26156);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1882->SetLineColor(ci);
   ThetaY_30_35__1882->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1882->SetMarkerColor(ci);
   ThetaY_30_35__1882->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1882->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1882->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1882->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1882->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1882->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1882->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1882->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1882->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1882->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1882->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1882->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1882->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1882->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1882->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1882->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1882->Draw("AEsame");
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
   
   Double_t _fx3628[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3628[8] = {
   0,
   0.2793321,
   0.8040177,
   1,
   0.2355895,
   0,
   0,
   0};
   Double_t _felx3628[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3628[8] = {
   0,
   0.1207588,
   0.1488674,
   0.1524573,
   0.07329631,
   0,
   0,
   0};
   Double_t _fehx3628[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3628[8] = {
   1.907521,
   0.1892975,
   0.1793981,
   0.1777142,
   0.1006512,
   0.05125351,
   0.09992613,
   2.257254};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3628,_fy3628,_felx3628,_fehx3628,_fely3628,_fehy3628);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3628 = new TH1F("Graph_Graph3628","",100,-100,100);
   Graph_Graph3628->SetMinimum(0);
   Graph_Graph3628->SetMaximum(1.5);
   Graph_Graph3628->SetDirectory(0);
   Graph_Graph3628->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3628->SetLineColor(ci);
   Graph_Graph3628->GetXaxis()->SetRange(1,100);
   Graph_Graph3628->GetXaxis()->CenterTitle(true);
   Graph_Graph3628->GetXaxis()->SetLabelFont(42);
   Graph_Graph3628->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3628->GetXaxis()->SetTitleFont(42);
   Graph_Graph3628->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3628->GetYaxis()->CenterTitle(true);
   Graph_Graph3628->GetYaxis()->SetLabelFont(42);
   Graph_Graph3628->GetYaxis()->SetTitleFont(42);
   Graph_Graph3628->GetZaxis()->SetLabelFont(42);
   Graph_Graph3628->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3628->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3628);
   
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
   
   TH2D *ThetaY_vs_Y_30_35__1883 = new TH2D("ThetaY_vs_Y_30_35__1883","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8131,130);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8157,2394);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8183,4824);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8209,5751);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8235,5677);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8261,4805);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8287,2465);
   ThetaY_vs_Y_30_35__1883->SetBinContent(8313,110);
   ThetaY_vs_Y_30_35__1883->SetEntries(26156);
   ThetaY_vs_Y_30_35__1883->SetContour(20);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(1,287.55);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(2,575.1);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(3,862.65);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(4,1150.2);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(5,1437.75);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(6,1725.3);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(7,2012.85);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(8,2300.4);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(9,2587.95);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(10,2875.5);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(11,3163.05);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(12,3450.6);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(13,3738.15);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(14,4025.7);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(15,4313.25);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(16,4600.8);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(17,4888.35);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(18,5175.9);
   ThetaY_vs_Y_30_35__1883->SetContourLevel(19,5463.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1883->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1883->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1883->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1883->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1883->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1883->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1883->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1883->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1883->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1883->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1883->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1883->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1883->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1883->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1883->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1883->Draw("COL");
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
