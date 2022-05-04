void S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0691811,125,1.314441);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__1482 = new TH1D("S18_ThetaY_30_35__1482","",630,-1575,1575);
   S18_ThetaY_30_35__1482->SetBinContent(311,0.2);
   S18_ThetaY_30_35__1482->SetBinContent(312,0.6285714);
   S18_ThetaY_30_35__1482->SetBinContent(313,0.7714286);
   S18_ThetaY_30_35__1482->SetBinContent(314,1);
   S18_ThetaY_30_35__1482->SetBinContent(315,0.8);
   S18_ThetaY_30_35__1482->SetBinContent(316,0.6);
   S18_ThetaY_30_35__1482->SetBinContent(317,0.02857143);
   S18_ThetaY_30_35__1482->SetBinError(311,0.07559289);
   S18_ThetaY_30_35__1482->SetBinError(312,0.1340119);
   S18_ThetaY_30_35__1482->SetBinError(313,0.1484615);
   S18_ThetaY_30_35__1482->SetBinError(314,0.1690309);
   S18_ThetaY_30_35__1482->SetBinError(315,0.1511858);
   S18_ThetaY_30_35__1482->SetBinError(316,0.1309307);
   S18_ThetaY_30_35__1482->SetBinError(317,0.02857143);
   S18_ThetaY_30_35__1482->SetMinimum(0);
   S18_ThetaY_30_35__1482->SetMaximum(1.176079);
   S18_ThetaY_30_35__1482->SetEntries(141);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1482->SetLineColor(ci);
   S18_ThetaY_30_35__1482->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1482->SetMarkerColor(ci);
   S18_ThetaY_30_35__1482->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__1482->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__1482->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1482->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1482->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1482->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__1482->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__1482->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1482->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1482->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1482->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1482->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1482->Draw("AE");
   
   TH1D *ThetaY_30_35__1483 = new TH1D("ThetaY_30_35__1483","",630,-1575,1575);
   ThetaY_30_35__1483->SetBinContent(310,0.003318731);
   ThetaY_30_35__1483->SetBinContent(311,0.2097438);
   ThetaY_30_35__1483->SetBinContent(312,0.6422408);
   ThetaY_30_35__1483->SetBinContent(313,0.8760122);
   ThetaY_30_35__1483->SetBinContent(314,1);
   ThetaY_30_35__1483->SetBinContent(315,1.054427);
   ThetaY_30_35__1483->SetBinContent(316,1.069162);
   ThetaY_30_35__1483->SetBinContent(317,0.9938935);
   ThetaY_30_35__1483->SetBinContent(318,0.869242);
   ThetaY_30_35__1483->SetBinContent(319,0.6338776);
   ThetaY_30_35__1483->SetBinContent(320,0.2120005);
   ThetaY_30_35__1483->SetBinContent(321,0.002256737);
   ThetaY_30_35__1483->SetBinError(310,0.0006637462);
   ThetaY_30_35__1483->SetBinError(311,0.005276678);
   ThetaY_30_35__1483->SetBinError(312,0.00923347);
   ThetaY_30_35__1483->SetBinError(313,0.01078378);
   ThetaY_30_35__1483->SetBinError(314,0.01152169);
   ThetaY_30_35__1483->SetBinError(315,0.01183108);
   ThetaY_30_35__1483->SetBinError(316,0.01191346);
   ThetaY_30_35__1483->SetBinError(317,0.01148645);
   ThetaY_30_35__1483->SetBinError(318,0.01074203);
   ThetaY_30_35__1483->SetBinError(319,0.009173155);
   ThetaY_30_35__1483->SetBinError(320,0.005304989);
   ThetaY_30_35__1483->SetBinError(321,0.0005473391);
   ThetaY_30_35__1483->SetEntries(56996);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1483->SetLineColor(ci);
   ThetaY_30_35__1483->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1483->SetMarkerColor(ci);
   ThetaY_30_35__1483->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1483->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1483->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1483->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1483->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1483->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1483->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1483->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1483->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1483->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1483->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1483->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1483->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1483->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1483->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1483->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1483->Draw("AEsame");
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
   
   Double_t _fx3495[12] = {
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
   Double_t _fy3495[12] = {
   0,
   0.9535443,
   0.9787161,
   0.8806139,
   1,
   0.7587058,
   0.561187,
   0.02874697,
   0,
   0,
   0,
   0};
   Double_t _felx3495[12] = {
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
   Double_t _fely3495[12] = {
   0,
   0.3523305,
   0.2075156,
   0.1687503,
   0.1685991,
   0.142763,
   0.1216297,
   0.02378143,
   0,
   0,
   0,
   0};
   Double_t _fehx3495[12] = {
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
   Double_t _fehy3495[12] = {
   16.4478,
   0.5153402,
   0.2570414,
   0.2046942,
   0.1997663,
   0.1725563,
   0.1513745,
   0.06611899,
   0.06052171,
   0.08299829,
   0.2482586,
   24.61717};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3495,_fy3495,_felx3495,_fehx3495,_fely3495,_fehy3495);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3495 = new TH1F("Graph_Graph3495","",100,-100,100);
   Graph_Graph3495->SetMinimum(0);
   Graph_Graph3495->SetMaximum(1.5);
   Graph_Graph3495->SetDirectory(0);
   Graph_Graph3495->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3495->SetLineColor(ci);
   Graph_Graph3495->GetXaxis()->SetRange(1,100);
   Graph_Graph3495->GetXaxis()->CenterTitle(true);
   Graph_Graph3495->GetXaxis()->SetLabelFont(42);
   Graph_Graph3495->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3495->GetXaxis()->SetTitleFont(42);
   Graph_Graph3495->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3495->GetYaxis()->CenterTitle(true);
   Graph_Graph3495->GetYaxis()->SetLabelFont(42);
   Graph_Graph3495->GetYaxis()->SetTitleFont(42);
   Graph_Graph3495->GetZaxis()->SetLabelFont(42);
   Graph_Graph3495->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3495->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3495);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.176079,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1484 = new TH2D("ThetaY_vs_Y_30_35__1484","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8079,25);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8105,1580);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8131,4838);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8157,6599);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8183,7533);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8209,7943);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8235,8054);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8261,7487);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8287,6548);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8313,4775);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8339,1597);
   ThetaY_vs_Y_30_35__1484->SetBinContent(8365,17);
   ThetaY_vs_Y_30_35__1484->SetEntries(56996);
   ThetaY_vs_Y_30_35__1484->SetContour(20);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(1,402.7);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(2,805.4);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(3,1208.1);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(4,1610.8);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(5,2013.5);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(6,2416.2);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(7,2818.9);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(8,3221.6);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(9,3624.3);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(10,4027);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(11,4429.7);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(12,4832.4);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(13,5235.1);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(14,5637.8);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(15,6040.5);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(16,6443.2);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(17,6845.9);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(18,7248.6);
   ThetaY_vs_Y_30_35__1484->SetContourLevel(19,7651.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1484->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1484->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1484->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1484->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1484->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1484->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1484->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1484->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1484->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1484->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1484->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1484->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1484->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1484->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1484->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1484->Draw("COL");
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
