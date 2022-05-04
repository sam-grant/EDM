void S12S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.3298362,125,6.266888);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_30_35__1539 = new TH1D("S12S18_ThetaY_30_35__1539","",630,-1575,1575);
   S12S18_ThetaY_30_35__1539->SetBinContent(311,1);
   S12S18_ThetaY_30_35__1539->SetBinContent(312,2.466667);
   S12S18_ThetaY_30_35__1539->SetBinContent(313,3.133333);
   S12S18_ThetaY_30_35__1539->SetBinContent(314,4.4);
   S12S18_ThetaY_30_35__1539->SetBinContent(315,4.533333);
   S12S18_ThetaY_30_35__1539->SetBinContent(316,2.666667);
   S12S18_ThetaY_30_35__1539->SetBinContent(317,0.1333333);
   S12S18_ThetaY_30_35__1539->SetBinError(311,0.2581989);
   S12S18_ThetaY_30_35__1539->SetBinError(312,0.4055175);
   S12S18_ThetaY_30_35__1539->SetBinError(313,0.4570436);
   S12S18_ThetaY_30_35__1539->SetBinError(314,0.5416026);
   S12S18_ThetaY_30_35__1539->SetBinError(315,0.5497474);
   S12S18_ThetaY_30_35__1539->SetBinError(316,0.421637);
   S12S18_ThetaY_30_35__1539->SetBinError(317,0.0942809);
   S12S18_ThetaY_30_35__1539->SetMinimum(0);
   S12S18_ThetaY_30_35__1539->SetMaximum(5.607215);
   S12S18_ThetaY_30_35__1539->SetEntries(275);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1539->SetLineColor(ci);
   S12S18_ThetaY_30_35__1539->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1539->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__1539->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__1539->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__1539->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1539->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1539->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1539->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__1539->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__1539->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1539->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1539->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1539->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1539->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1539->Draw("AE");
   
   TH1D *ThetaY_30_35__1540 = new TH1D("ThetaY_30_35__1540","",630,-1575,1575);
   ThetaY_30_35__1540->SetBinContent(310,0.01582278);
   ThetaY_30_35__1540->SetBinContent(311,1);
   ThetaY_30_35__1540->SetBinContent(312,3.062025);
   ThetaY_30_35__1540->SetBinContent(313,4.176582);
   ThetaY_30_35__1540->SetBinContent(314,4.767722);
   ThetaY_30_35__1540->SetBinContent(315,5.027215);
   ThetaY_30_35__1540->SetBinContent(316,5.097468);
   ThetaY_30_35__1540->SetBinContent(317,4.738608);
   ThetaY_30_35__1540->SetBinContent(318,4.144304);
   ThetaY_30_35__1540->SetBinContent(319,3.022152);
   ThetaY_30_35__1540->SetBinContent(320,1.010759);
   ThetaY_30_35__1540->SetBinContent(321,0.01075949);
   ThetaY_30_35__1540->SetBinError(310,0.003164557);
   ThetaY_30_35__1540->SetBinError(311,0.02515773);
   ThetaY_30_35__1540->SetBinError(312,0.04402262);
   ThetaY_30_35__1540->SetBinError(313,0.05141407);
   ThetaY_30_35__1540->SetBinError(314,0.05493219);
   ThetaY_30_35__1540->SetBinError(315,0.05640728);
   ThetaY_30_35__1540->SetBinError(316,0.05680005);
   ThetaY_30_35__1540->SetBinError(317,0.05476421);
   ThetaY_30_35__1540->SetBinError(318,0.05121501);
   ThetaY_30_35__1540->SetBinError(319,0.04373505);
   ThetaY_30_35__1540->SetBinError(320,0.02529271);
   ThetaY_30_35__1540->SetBinError(321,0.002609561);
   ThetaY_30_35__1540->SetEntries(56996);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1540->SetLineColor(ci);
   ThetaY_30_35__1540->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1540->SetMarkerColor(ci);
   ThetaY_30_35__1540->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1540->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1540->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1540->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1540->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1540->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1540->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1540->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1540->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1540->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1540->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1540->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1540->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1540->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1540->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1540->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1540->Draw("AEsame");
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
   
   Double_t _fx3514[12] = {
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
   Double_t _fy3514[12] = {
   0,
   1,
   0.805567,
   0.7502147,
   0.9228727,
   0.9017584,
   0.5231355,
   0.02813766,
   0,
   0,
   0,
   0};
   Double_t _felx3514[12] = {
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
   Double_t _fely3514[12] = {
   0,
   0.2564268,
   0.1323233,
   0.109419,
   0.1137973,
   0.109544,
   0.08256711,
   0.01817584,
   0,
   0,
   0,
   0};
   Double_t _fehx3514[12] = {
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
   Double_t _fehy3514[12] = {
   8.04959,
   0.3326684,
   0.1561074,
   0.1266926,
   0.1287931,
   0.12375,
   0.09676622,
   0.03712309,
   0.02961946,
   0.04061955,
   0.1214983,
   12.0477};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3514,_fy3514,_felx3514,_fehx3514,_fely3514,_fehy3514);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3514 = new TH1F("Graph_Graph3514","",100,-100,100);
   Graph_Graph3514->SetMinimum(0);
   Graph_Graph3514->SetMaximum(1.5);
   Graph_Graph3514->SetDirectory(0);
   Graph_Graph3514->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3514->SetLineColor(ci);
   Graph_Graph3514->GetXaxis()->SetRange(1,100);
   Graph_Graph3514->GetXaxis()->CenterTitle(true);
   Graph_Graph3514->GetXaxis()->SetLabelFont(42);
   Graph_Graph3514->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3514->GetXaxis()->SetTitleFont(42);
   Graph_Graph3514->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3514->GetYaxis()->CenterTitle(true);
   Graph_Graph3514->GetYaxis()->SetLabelFont(42);
   Graph_Graph3514->GetYaxis()->SetTitleFont(42);
   Graph_Graph3514->GetZaxis()->SetLabelFont(42);
   Graph_Graph3514->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3514->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3514);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.607215,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1541 = new TH2D("ThetaY_vs_Y_30_35__1541","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8079,25);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8105,1580);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8131,4838);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8157,6599);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8183,7533);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8209,7943);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8235,8054);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8261,7487);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8287,6548);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8313,4775);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8339,1597);
   ThetaY_vs_Y_30_35__1541->SetBinContent(8365,17);
   ThetaY_vs_Y_30_35__1541->SetEntries(56996);
   ThetaY_vs_Y_30_35__1541->SetContour(20);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(1,402.7);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(2,805.4);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(3,1208.1);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(4,1610.8);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(5,2013.5);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(6,2416.2);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(7,2818.9);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(8,3221.6);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(9,3624.3);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(10,4027);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(11,4429.7);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(12,4832.4);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(13,5235.1);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(14,5637.8);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(15,6040.5);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(16,6443.2);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(17,6845.9);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(18,7248.6);
   ThetaY_vs_Y_30_35__1541->SetContourLevel(19,7651.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1541->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1541->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1541->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1541->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1541->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1541->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1541->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1541->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1541->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1541->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1541->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1541->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1541->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1541->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1541->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1541->Draw("COL");
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
