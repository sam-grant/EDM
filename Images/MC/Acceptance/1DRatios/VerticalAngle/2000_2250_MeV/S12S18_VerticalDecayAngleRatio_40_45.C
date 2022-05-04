void S12S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:06 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.115911,125,2.202308);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_40_45__1545 = new TH1D("S12S18_ThetaY_40_45__1545","",630,-1575,1575);
   S12S18_ThetaY_40_45__1545->SetBinContent(311,0.1666667);
   S12S18_ThetaY_40_45__1545->SetBinContent(312,1);
   S12S18_ThetaY_40_45__1545->SetBinContent(313,0.9166667);
   S12S18_ThetaY_40_45__1545->SetBinContent(314,0.5);
   S12S18_ThetaY_40_45__1545->SetBinContent(315,1);
   S12S18_ThetaY_40_45__1545->SetBinContent(316,0.08333333);
   S12S18_ThetaY_40_45__1545->SetBinError(311,0.1178511);
   S12S18_ThetaY_40_45__1545->SetBinError(312,0.2886751);
   S12S18_ThetaY_40_45__1545->SetBinError(313,0.2763854);
   S12S18_ThetaY_40_45__1545->SetBinError(314,0.2041241);
   S12S18_ThetaY_40_45__1545->SetBinError(315,0.2886751);
   S12S18_ThetaY_40_45__1545->SetBinError(316,0.08333333);
   S12S18_ThetaY_40_45__1545->SetMinimum(0);
   S12S18_ThetaY_40_45__1545->SetMaximum(1.970486);
   S12S18_ThetaY_40_45__1545->SetEntries(44);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1545->SetLineColor(ci);
   S12S18_ThetaY_40_45__1545->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1545->SetMarkerColor(ci);
   S12S18_ThetaY_40_45__1545->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_40_45__1545->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_40_45__1545->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1545->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1545->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1545->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_40_45__1545->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_40_45__1545->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1545->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1545->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1545->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1545->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1545->Draw("AE");
   
   TH1D *ThetaY_40_45__1546 = new TH1D("ThetaY_40_45__1546","",630,-1575,1575);
   ThetaY_40_45__1546->SetBinContent(310,0.001081081);
   ThetaY_40_45__1546->SetBinContent(311,0.3189189);
   ThetaY_40_45__1546->SetBinContent(312,1);
   ThetaY_40_45__1546->SetBinContent(313,1.462703);
   ThetaY_40_45__1546->SetBinContent(314,1.606486);
   ThetaY_40_45__1546->SetBinContent(315,1.716757);
   ThetaY_40_45__1546->SetBinContent(316,1.791351);
   ThetaY_40_45__1546->SetBinContent(317,1.637838);
   ThetaY_40_45__1546->SetBinContent(318,1.496216);
   ThetaY_40_45__1546->SetBinContent(319,1.064865);
   ThetaY_40_45__1546->SetBinContent(320,0.3383784);
   ThetaY_40_45__1546->SetBinContent(321,0.002162162);
   ThetaY_40_45__1546->SetBinError(310,0.001081081);
   ThetaY_40_45__1546->SetBinError(311,0.01856818);
   ThetaY_40_45__1546->SetBinError(312,0.0328798);
   ThetaY_40_45__1546->SetBinError(313,0.03976557);
   ThetaY_40_45__1546->SetBinError(314,0.04167424);
   ThetaY_40_45__1546->SetBinError(315,0.04308078);
   ThetaY_40_45__1546->SetBinError(316,0.04400677);
   ThetaY_40_45__1546->SetBinError(317,0.04207892);
   ThetaY_40_45__1546->SetBinError(318,0.04021854);
   ThetaY_40_45__1546->SetBinError(319,0.03392942);
   ThetaY_40_45__1546->SetBinError(320,0.01912628);
   ThetaY_40_45__1546->SetBinError(321,0.00152888);
   ThetaY_40_45__1546->SetEntries(11504);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1546->SetLineColor(ci);
   ThetaY_40_45__1546->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1546->SetMarkerColor(ci);
   ThetaY_40_45__1546->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1546->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1546->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1546->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1546->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1546->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1546->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1546->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1546->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1546->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1546->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1546->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1546->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1546->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1546->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1546->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1546->Draw("AEsame");
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
   
   Double_t _fx3516[12] = {
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
   27.5};
   Double_t _fy3516[12] = {
   0,
   0.5225989,
   1,
   0.6266938,
   0.3112382,
   0.5824937,
   0.04651981,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3516[12] = {
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
   Double_t _fely3516[12] = {
   0,
   0.3382662,
   0.2863057,
   0.1867399,
   0.1236675,
   0.1663588,
   0.03848777,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3516[12] = {
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
   Double_t _fehy3516[12] = {
   408.7709,
   0.6946988,
   0.3833825,
   0.2530513,
   0.1864938,
   0.2224921,
   0.1070801,
   0.09372828,
   0.1026059,
   0.1442079,
   0.4547293,
   116.44};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3516,_fy3516,_felx3516,_fehx3516,_fely3516,_fehy3516);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3516 = new TH1F("Graph_Graph3516","",100,-100,100);
   Graph_Graph3516->SetMinimum(0);
   Graph_Graph3516->SetMaximum(1.5);
   Graph_Graph3516->SetDirectory(0);
   Graph_Graph3516->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3516->SetLineColor(ci);
   Graph_Graph3516->GetXaxis()->SetRange(1,100);
   Graph_Graph3516->GetXaxis()->CenterTitle(true);
   Graph_Graph3516->GetXaxis()->SetLabelFont(42);
   Graph_Graph3516->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3516->GetXaxis()->SetTitleFont(42);
   Graph_Graph3516->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3516->GetYaxis()->CenterTitle(true);
   Graph_Graph3516->GetYaxis()->SetLabelFont(42);
   Graph_Graph3516->GetYaxis()->SetTitleFont(42);
   Graph_Graph3516->GetZaxis()->SetLabelFont(42);
   Graph_Graph3516->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3516->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3516);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.970486,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1547 = new TH2D("ThetaY_vs_Y_40_45__1547","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8081,1);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8107,295);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8133,925);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8159,1353);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8185,1486);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8211,1588);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8237,1657);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8263,1515);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8289,1384);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8315,985);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8341,313);
   ThetaY_vs_Y_40_45__1547->SetBinContent(8367,2);
   ThetaY_vs_Y_40_45__1547->SetEntries(11504);
   ThetaY_vs_Y_40_45__1547->SetContour(20);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(1,82.85);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(2,165.7);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(3,248.55);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(4,331.4);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(5,414.25);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(6,497.1);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(7,579.95);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(8,662.8);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(9,745.65);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(10,828.5);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(11,911.35);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(12,994.2);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(13,1077.05);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(14,1159.9);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(15,1242.75);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(16,1325.6);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(17,1408.45);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(18,1491.3);
   ThetaY_vs_Y_40_45__1547->SetContourLevel(19,1574.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1547->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1547->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1547->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1547->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1547->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1547->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1547->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1547->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1547->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1547->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1547->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1547->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1547->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1547->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1547->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1547->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_40_45","Reco vertices","lpf");
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
