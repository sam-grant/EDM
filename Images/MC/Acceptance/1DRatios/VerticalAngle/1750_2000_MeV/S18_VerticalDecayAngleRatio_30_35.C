void S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1262019,125,2.397835);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__1311 = new TH1D("S18_ThetaY_30_35__1311","",630,-1575,1575);
   S18_ThetaY_30_35__1311->SetBinContent(310,0.137931);
   S18_ThetaY_30_35__1311->SetBinContent(311,1);
   S18_ThetaY_30_35__1311->SetBinContent(312,1.275862);
   S18_ThetaY_30_35__1311->SetBinContent(313,1.275862);
   S18_ThetaY_30_35__1311->SetBinContent(314,1.689655);
   S18_ThetaY_30_35__1311->SetBinContent(315,0.9655172);
   S18_ThetaY_30_35__1311->SetBinContent(316,1.448276);
   S18_ThetaY_30_35__1311->SetBinContent(317,0.03448276);
   S18_ThetaY_30_35__1311->SetBinContent(319,0.03448276);
   S18_ThetaY_30_35__1311->SetBinError(310,0.06896552);
   S18_ThetaY_30_35__1311->SetBinError(311,0.1856953);
   S18_ThetaY_30_35__1311->SetBinError(312,0.2097504);
   S18_ThetaY_30_35__1311->SetBinError(313,0.2097504);
   S18_ThetaY_30_35__1311->SetBinError(314,0.2413793);
   S18_ThetaY_30_35__1311->SetBinError(315,0.1824656);
   S18_ThetaY_30_35__1311->SetBinError(316,0.2234738);
   S18_ThetaY_30_35__1311->SetBinError(317,0.03448276);
   S18_ThetaY_30_35__1311->SetBinError(319,0.03448276);
   S18_ThetaY_30_35__1311->SetMinimum(0);
   S18_ThetaY_30_35__1311->SetMaximum(2.145431);
   S18_ThetaY_30_35__1311->SetEntries(228);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1311->SetLineColor(ci);
   S18_ThetaY_30_35__1311->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1311->SetMarkerColor(ci);
   S18_ThetaY_30_35__1311->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__1311->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__1311->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1311->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1311->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1311->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__1311->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__1311->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1311->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1311->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1311->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1311->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1311->Draw("AE");
   
   TH1D *ThetaY_30_35__1312 = new TH1D("ThetaY_30_35__1312","",630,-1575,1575);
   ThetaY_30_35__1312->SetBinContent(309,0.0006922012);
   ThetaY_30_35__1312->SetBinContent(310,0.2851869);
   ThetaY_30_35__1312->SetBinContent(311,1);
   ThetaY_30_35__1312->SetBinContent(312,1.478542);
   ThetaY_30_35__1312->SetBinContent(313,1.728888);
   ThetaY_30_35__1312->SetBinContent(314,1.908399);
   ThetaY_30_35__1312->SetBinContent(315,1.934241);
   ThetaY_30_35__1312->SetBinContent(316,1.950392);
   ThetaY_30_35__1312->SetBinContent(317,1.878865);
   ThetaY_30_35__1312->SetBinContent(318,1.736964);
   ThetaY_30_35__1312->SetBinContent(319,1.482695);
   ThetaY_30_35__1312->SetBinContent(320,1.039686);
   ThetaY_30_35__1312->SetBinContent(321,0.2914167);
   ThetaY_30_35__1312->SetBinContent(322,0.0009229349);
   ThetaY_30_35__1312->SetBinError(309,0.0003996425);
   ThetaY_30_35__1312->SetBinError(310,0.008111858);
   ThetaY_30_35__1312->SetBinError(311,0.01518992);
   ThetaY_30_35__1312->SetBinError(312,0.01847023);
   ThetaY_30_35__1312->SetBinError(313,0.0199728);
   ThetaY_30_35__1312->SetBinError(314,0.02098409);
   ThetaY_30_35__1312->SetBinError(315,0.02112569);
   ThetaY_30_35__1312->SetBinError(316,0.02121371);
   ThetaY_30_35__1312->SetBinError(317,0.02082108);
   ThetaY_30_35__1312->SetBinError(318,0.02001939);
   ThetaY_30_35__1312->SetBinError(319,0.01849615);
   ThetaY_30_35__1312->SetBinError(320,0.0154884);
   ThetaY_30_35__1312->SetBinError(321,0.00819998);
   ThetaY_30_35__1312->SetBinError(322,0.0004614675);
   ThetaY_30_35__1312->SetEntries(72451);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1312->SetLineColor(ci);
   ThetaY_30_35__1312->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1312->SetMarkerColor(ci);
   ThetaY_30_35__1312->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1312->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1312->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1312->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1312->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1312->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1312->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1312->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1312->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1312->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1312->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1312->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1312->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1312->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1312->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1312->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1312->Draw("AEsame");
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
   
   Double_t _fx3438[14] = {
   -32.5,
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
   27.5,
   32.5};
   Double_t _fy3438[14] = {
   0,
   0.4836514,
   1,
   0.8629192,
   0.7379669,
   0.8853785,
   0.4991711,
   0.7425562,
   0.01835298,
   0,
   0.02325681,
   0,
   0,
   0};
   Double_t _felx3438[14] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3438[14] = {
   0,
   0.2317651,
   0.1852149,
   0.1416155,
   0.1210603,
   0.126415,
   0.09391893,
   0.1143976,
   0.01518278,
   0,
   0.01923968,
   0,
   0,
   0};
   Double_t _fehx3438[14] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3438[14] = {
   126.6134,
   0.3835258,
   0.2232192,
   0.1670358,
   0.1427779,
   0.1459133,
   0.1135162,
   0.1335581,
   0.0422117,
   0.03655302,
   0.05349339,
   0.06107273,
   0.2180033,
   87.34932};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3438,_fy3438,_felx3438,_fehx3438,_fely3438,_fehy3438);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3438 = new TH1F("Graph_Graph3438","",100,-100,100);
   Graph_Graph3438->SetMinimum(0);
   Graph_Graph3438->SetMaximum(1.5);
   Graph_Graph3438->SetDirectory(0);
   Graph_Graph3438->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3438->SetLineColor(ci);
   Graph_Graph3438->GetXaxis()->SetRange(1,100);
   Graph_Graph3438->GetXaxis()->CenterTitle(true);
   Graph_Graph3438->GetXaxis()->SetLabelFont(42);
   Graph_Graph3438->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3438->GetXaxis()->SetTitleFont(42);
   Graph_Graph3438->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3438->GetYaxis()->CenterTitle(true);
   Graph_Graph3438->GetYaxis()->SetLabelFont(42);
   Graph_Graph3438->GetYaxis()->SetTitleFont(42);
   Graph_Graph3438->GetZaxis()->SetLabelFont(42);
   Graph_Graph3438->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3438->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3438);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.145431,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1313 = new TH2D("ThetaY_vs_Y_30_35__1313","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8053,3);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8079,1236);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8105,4334);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8131,6408);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8157,7493);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8183,8271);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8209,8383);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8235,8453);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8261,8143);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8287,7528);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8313,6426);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8339,4506);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8365,1263);
   ThetaY_vs_Y_30_35__1313->SetBinContent(8391,4);
   ThetaY_vs_Y_30_35__1313->SetEntries(72451);
   ThetaY_vs_Y_30_35__1313->SetContour(20);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(1,422.65);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(2,845.3);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(3,1267.95);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(4,1690.6);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(5,2113.25);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(6,2535.9);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(7,2958.55);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(8,3381.2);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(9,3803.85);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(10,4226.5);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(11,4649.15);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(12,5071.8);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(13,5494.45);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(14,5917.1);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(15,6339.75);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(16,6762.4);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(17,7185.05);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(18,7607.7);
   ThetaY_vs_Y_30_35__1313->SetContourLevel(19,8030.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1313->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1313->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1313->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1313->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1313->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1313->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1313->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1313->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1313->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1313->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1313->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1313->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1313->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1313->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1313->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1313->Draw("COL");
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
