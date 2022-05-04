void S12S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_30_35__1368 = new TH1D("S12S18_ThetaY_30_35__1368","",630,-1575,1575);
   S12S18_ThetaY_30_35__1368->SetBinContent(310,0.2);
   S12S18_ThetaY_30_35__1368->SetBinContent(311,1);
   S12S18_ThetaY_30_35__1368->SetBinContent(312,1.46);
   S12S18_ThetaY_30_35__1368->SetBinContent(313,1.38);
   S12S18_ThetaY_30_35__1368->SetBinContent(314,1.9);
   S12S18_ThetaY_30_35__1368->SetBinContent(315,1.54);
   S12S18_ThetaY_30_35__1368->SetBinContent(316,1.5);
   S12S18_ThetaY_30_35__1368->SetBinContent(317,0.02);
   S12S18_ThetaY_30_35__1368->SetBinContent(319,0.02);
   S12S18_ThetaY_30_35__1368->SetBinError(310,0.06324555);
   S12S18_ThetaY_30_35__1368->SetBinError(311,0.1414214);
   S12S18_ThetaY_30_35__1368->SetBinError(312,0.1708801);
   S12S18_ThetaY_30_35__1368->SetBinError(313,0.1661325);
   S12S18_ThetaY_30_35__1368->SetBinError(314,0.1949359);
   S12S18_ThetaY_30_35__1368->SetBinError(315,0.1754993);
   S12S18_ThetaY_30_35__1368->SetBinError(316,0.1732051);
   S12S18_ThetaY_30_35__1368->SetBinError(317,0.02);
   S12S18_ThetaY_30_35__1368->SetBinError(319,0.02);
   S12S18_ThetaY_30_35__1368->SetMinimum(0);
   S12S18_ThetaY_30_35__1368->SetMaximum(2.145431);
   S12S18_ThetaY_30_35__1368->SetEntries(451);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1368->SetLineColor(ci);
   S12S18_ThetaY_30_35__1368->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1368->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__1368->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__1368->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__1368->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1368->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1368->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1368->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__1368->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__1368->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1368->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1368->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1368->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1368->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1368->Draw("AE");
   
   TH1D *ThetaY_30_35__1369 = new TH1D("ThetaY_30_35__1369","",630,-1575,1575);
   ThetaY_30_35__1369->SetBinContent(309,0.0006922012);
   ThetaY_30_35__1369->SetBinContent(310,0.2851869);
   ThetaY_30_35__1369->SetBinContent(311,1);
   ThetaY_30_35__1369->SetBinContent(312,1.478542);
   ThetaY_30_35__1369->SetBinContent(313,1.728888);
   ThetaY_30_35__1369->SetBinContent(314,1.908399);
   ThetaY_30_35__1369->SetBinContent(315,1.934241);
   ThetaY_30_35__1369->SetBinContent(316,1.950392);
   ThetaY_30_35__1369->SetBinContent(317,1.878865);
   ThetaY_30_35__1369->SetBinContent(318,1.736964);
   ThetaY_30_35__1369->SetBinContent(319,1.482695);
   ThetaY_30_35__1369->SetBinContent(320,1.039686);
   ThetaY_30_35__1369->SetBinContent(321,0.2914167);
   ThetaY_30_35__1369->SetBinContent(322,0.0009229349);
   ThetaY_30_35__1369->SetBinError(309,0.0003996425);
   ThetaY_30_35__1369->SetBinError(310,0.008111858);
   ThetaY_30_35__1369->SetBinError(311,0.01518992);
   ThetaY_30_35__1369->SetBinError(312,0.01847023);
   ThetaY_30_35__1369->SetBinError(313,0.0199728);
   ThetaY_30_35__1369->SetBinError(314,0.02098409);
   ThetaY_30_35__1369->SetBinError(315,0.02112569);
   ThetaY_30_35__1369->SetBinError(316,0.02121371);
   ThetaY_30_35__1369->SetBinError(317,0.02082108);
   ThetaY_30_35__1369->SetBinError(318,0.02001939);
   ThetaY_30_35__1369->SetBinError(319,0.01849615);
   ThetaY_30_35__1369->SetBinError(320,0.0154884);
   ThetaY_30_35__1369->SetBinError(321,0.00819998);
   ThetaY_30_35__1369->SetBinError(322,0.0004614675);
   ThetaY_30_35__1369->SetEntries(72451);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1369->SetLineColor(ci);
   ThetaY_30_35__1369->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1369->SetMarkerColor(ci);
   ThetaY_30_35__1369->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1369->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1369->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1369->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1369->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1369->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1369->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1369->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1369->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1369->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1369->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1369->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1369->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1369->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1369->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1369->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1369->Draw("AEsame");
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
   
   Double_t _fx3457[14] = {
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
   Double_t _fy3457[14] = {
   0,
   0.7012945,
   1,
   0.9874594,
   0.798201,
   0.9955991,
   0.796178,
   0.7690761,
   0.01064473,
   0,
   0.01348895,
   0,
   0,
   0};
   Double_t _felx3457[14] = {
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
   Double_t _fely3457[14] = {
   0,
   0.2188121,
   0.1417418,
   0.1159543,
   0.09629284,
   0.1025441,
   0.09094506,
   0.08899397,
   0.008806015,
   0,
   0.01115902,
   0,
   0,
   0};
   Double_t _fehx3457[14] = {
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
   Double_t _fehy3457[14] = {
   73.43576,
   0.3009649,
   0.1634509,
   0.1304618,
   0.1086891,
   0.1137059,
   0.1019904,
   0.099952,
   0.02448279,
   0.02120075,
   0.03102617,
   0.03542218,
   0.1264419,
   50.66261};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3457,_fy3457,_felx3457,_fehx3457,_fely3457,_fehy3457);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3457 = new TH1F("Graph_Graph3457","",100,-100,100);
   Graph_Graph3457->SetMinimum(0);
   Graph_Graph3457->SetMaximum(1.5);
   Graph_Graph3457->SetDirectory(0);
   Graph_Graph3457->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3457->SetLineColor(ci);
   Graph_Graph3457->GetXaxis()->SetRange(1,100);
   Graph_Graph3457->GetXaxis()->CenterTitle(true);
   Graph_Graph3457->GetXaxis()->SetLabelFont(42);
   Graph_Graph3457->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3457->GetXaxis()->SetTitleFont(42);
   Graph_Graph3457->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3457->GetYaxis()->CenterTitle(true);
   Graph_Graph3457->GetYaxis()->SetLabelFont(42);
   Graph_Graph3457->GetYaxis()->SetTitleFont(42);
   Graph_Graph3457->GetZaxis()->SetLabelFont(42);
   Graph_Graph3457->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3457->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3457);
   
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
   
   TH2D *ThetaY_vs_Y_30_35__1370 = new TH2D("ThetaY_vs_Y_30_35__1370","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8053,3);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8079,1236);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8105,4334);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8131,6408);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8157,7493);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8183,8271);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8209,8383);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8235,8453);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8261,8143);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8287,7528);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8313,6426);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8339,4506);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8365,1263);
   ThetaY_vs_Y_30_35__1370->SetBinContent(8391,4);
   ThetaY_vs_Y_30_35__1370->SetEntries(72451);
   ThetaY_vs_Y_30_35__1370->SetContour(20);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(1,422.65);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(2,845.3);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(3,1267.95);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(4,1690.6);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(5,2113.25);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(6,2535.9);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(7,2958.55);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(8,3381.2);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(9,3803.85);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(10,4226.5);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(11,4649.15);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(12,5071.8);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(13,5494.45);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(14,5917.1);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(15,6339.75);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(16,6762.4);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(17,7185.05);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(18,7607.7);
   ThetaY_vs_Y_30_35__1370->SetContourLevel(19,8030.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1370->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1370->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1370->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1370->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1370->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1370->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1370->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1370->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1370->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1370->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1370->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1370->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1370->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1370->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1370->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1370->Draw("COL");
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
