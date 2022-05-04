void S12S18_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.07151798,125,1.358842);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__1692 = new TH1D("S12S18_ThetaY_0_5__1692","",630,-1575,1575);
   S12S18_ThetaY_0_5__1692->SetBinContent(312,0.06764706);
   S12S18_ThetaY_0_5__1692->SetBinContent(313,0.5558824);
   S12S18_ThetaY_0_5__1692->SetBinContent(314,0.9176471);
   S12S18_ThetaY_0_5__1692->SetBinContent(315,1.026471);
   S12S18_ThetaY_0_5__1692->SetBinContent(316,1.026471);
   S12S18_ThetaY_0_5__1692->SetBinContent(317,1);
   S12S18_ThetaY_0_5__1692->SetBinContent(318,0.4176471);
   S12S18_ThetaY_0_5__1692->SetBinContent(319,0.01764706);
   S12S18_ThetaY_0_5__1692->SetBinError(312,0.01410539);
   S12S18_ThetaY_0_5__1692->SetBinError(313,0.04043449);
   S12S18_ThetaY_0_5__1692->SetBinError(314,0.05195153);
   S12S18_ThetaY_0_5__1692->SetBinError(315,0.05494571);
   S12S18_ThetaY_0_5__1692->SetBinError(316,0.05494571);
   S12S18_ThetaY_0_5__1692->SetBinError(317,0.05423261);
   S12S18_ThetaY_0_5__1692->SetBinError(318,0.03504816);
   S12S18_ThetaY_0_5__1692->SetBinError(319,0.007204382);
   S12S18_ThetaY_0_5__1692->SetMinimum(0);
   S12S18_ThetaY_0_5__1692->SetMaximum(1.215806);
   S12S18_ThetaY_0_5__1692->SetEntries(1710);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1692->SetLineColor(ci);
   S12S18_ThetaY_0_5__1692->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1692->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__1692->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__1692->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__1692->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1692->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1692->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1692->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__1692->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__1692->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1692->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1692->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1692->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1692->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1692->Draw("AE");
   
   TH1D *ThetaY_0_5__1693 = new TH1D("ThetaY_0_5__1693","",630,-1575,1575);
   ThetaY_0_5__1693->SetBinContent(311,0.007336962);
   ThetaY_0_5__1693->SetBinContent(312,0.330357);
   ThetaY_0_5__1693->SetBinContent(313,0.7897455);
   ThetaY_0_5__1693->SetBinContent(314,1.010758);
   ThetaY_0_5__1693->SetBinContent(315,1.102201);
   ThetaY_0_5__1693->SetBinContent(316,1.105278);
   ThetaY_0_5__1693->SetBinContent(317,1);
   ThetaY_0_5__1693->SetBinContent(318,0.7852701);
   ThetaY_0_5__1693->SetBinContent(319,0.3248704);
   ThetaY_0_5__1693->SetBinContent(320,0.007358478);
   ThetaY_0_5__1693->SetBinError(311,0.0003973188);
   ThetaY_0_5__1693->SetBinError(312,0.002666077);
   ThetaY_0_5__1693->SetBinError(313,0.004122157);
   ThetaY_0_5__1693->SetBinError(314,0.00466342);
   ThetaY_0_5__1693->SetBinError(315,0.004869803);
   ThetaY_0_5__1693->SetBinError(316,0.004876595);
   ThetaY_0_5__1693->SetBinError(317,0.004638536);
   ThetaY_0_5__1693->SetBinError(318,0.004110461);
   ThetaY_0_5__1693->SetBinError(319,0.002643845);
   ThetaY_0_5__1693->SetBinError(320,0.0003979009);
   ThetaY_0_5__1693->SetEntries(300389);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1693->SetLineColor(ci);
   ThetaY_0_5__1693->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1693->SetMarkerColor(ci);
   ThetaY_0_5__1693->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1693->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1693->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1693->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1693->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1693->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1693->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1693->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1693->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1693->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1693->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1693->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1693->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1693->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1693->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1693->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1693->Draw("AEsame");
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
   
   Double_t _fx3565[10] = {
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
   Double_t _fy3565[10] = {
   0,
   0.2047696,
   0.7038753,
   0.9078801,
   0.9312916,
   0.9286991,
   1,
   0.5318514,
   0.05432031,
   0};
   Double_t _felx3565[10] = {
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
   Double_t _fely3565[10] = {
   0,
   0.04241523,
   0.05128494,
   0.05154083,
   0.04999599,
   0.04985635,
   0.0544033,
   0.04466544,
   0.0215501,
   0};
   Double_t _fehx3565[10] = {
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
   Double_t _fehy3565[10] = {
   0.7400083,
   0.05226741,
   0.05516652,
   0.05455448,
   0.05275589,
   0.05260851,
   0.05744794,
   0.04858511,
   0.03245438,
   0.7378387};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3565,_fy3565,_felx3565,_fehx3565,_fely3565,_fehy3565);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3565 = new TH1F("Graph_Graph3565","",100,-100,100);
   Graph_Graph3565->SetMinimum(0);
   Graph_Graph3565->SetMaximum(1.5);
   Graph_Graph3565->SetDirectory(0);
   Graph_Graph3565->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3565->SetLineColor(ci);
   Graph_Graph3565->GetXaxis()->SetRange(1,100);
   Graph_Graph3565->GetXaxis()->CenterTitle(true);
   Graph_Graph3565->GetXaxis()->SetLabelFont(42);
   Graph_Graph3565->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3565->GetXaxis()->SetTitleFont(42);
   Graph_Graph3565->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3565->GetYaxis()->CenterTitle(true);
   Graph_Graph3565->GetYaxis()->SetLabelFont(42);
   Graph_Graph3565->GetYaxis()->SetTitleFont(42);
   Graph_Graph3565->GetZaxis()->SetLabelFont(42);
   Graph_Graph3565->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3565->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3565);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.215806,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1694 = new TH2D("ThetaY_vs_Y_0_5__1694","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8099,341);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8125,15354);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8151,36705);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8177,46977);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8203,51227);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8229,51370);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8255,46477);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8281,36497);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8307,15099);
   ThetaY_vs_Y_0_5__1694->SetBinContent(8333,342);
   ThetaY_vs_Y_0_5__1694->SetEntries(300389);
   ThetaY_vs_Y_0_5__1694->SetContour(20);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(1,2568.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(2,5137);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(3,7705.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(4,10274);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(5,12842.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(6,15411);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(7,17979.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(8,20548);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(9,23116.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(10,25685);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(11,28253.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(12,30822);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(13,33390.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(14,35959);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(15,38527.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(16,41096);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(17,43664.5);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(18,46233);
   ThetaY_vs_Y_0_5__1694->SetContourLevel(19,48801.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1694->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1694->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1694->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1694->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1694->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1694->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1694->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1694->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1694->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1694->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1694->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1694->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1694->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1694->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1694->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1694->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_0_5","Reco vertices","lpf");
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
