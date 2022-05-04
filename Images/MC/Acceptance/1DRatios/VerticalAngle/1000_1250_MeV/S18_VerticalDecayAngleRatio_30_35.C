void S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07767875,125,1.475896);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__798 = new TH1D("S18_ThetaY_30_35__798","",630,-1575,1575);
   S18_ThetaY_30_35__798->SetBinContent(306,0.015625);
   S18_ThetaY_30_35__798->SetBinContent(307,0.203125);
   S18_ThetaY_30_35__798->SetBinContent(308,0.5625);
   S18_ThetaY_30_35__798->SetBinContent(309,0.59375);
   S18_ThetaY_30_35__798->SetBinContent(310,1);
   S18_ThetaY_30_35__798->SetBinContent(311,0.921875);
   S18_ThetaY_30_35__798->SetBinContent(312,0.796875);
   S18_ThetaY_30_35__798->SetBinContent(313,0.71875);
   S18_ThetaY_30_35__798->SetBinContent(314,0.84375);
   S18_ThetaY_30_35__798->SetBinContent(315,0.765625);
   S18_ThetaY_30_35__798->SetBinContent(316,0.703125);
   S18_ThetaY_30_35__798->SetBinContent(317,0.171875);
   S18_ThetaY_30_35__798->SetBinError(306,0.015625);
   S18_ThetaY_30_35__798->SetBinError(307,0.05633674);
   S18_ThetaY_30_35__798->SetBinError(308,0.09375);
   S18_ThetaY_30_35__798->SetBinError(309,0.09631897);
   S18_ThetaY_30_35__798->SetBinError(310,0.125);
   S18_ThetaY_30_35__798->SetBinError(311,0.1200179);
   S18_ThetaY_30_35__798->SetBinError(312,0.1115848);
   S18_ThetaY_30_35__798->SetBinError(313,0.1059739);
   S18_ThetaY_30_35__798->SetBinError(314,0.1148198);
   S18_ThetaY_30_35__798->SetBinError(315,0.109375);
   S18_ThetaY_30_35__798->SetBinError(316,0.1048157);
   S18_ThetaY_30_35__798->SetBinError(317,0.05182226);
   S18_ThetaY_30_35__798->SetMinimum(0);
   S18_ThetaY_30_35__798->SetMaximum(1.320539);
   S18_ThetaY_30_35__798->SetEntries(467);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__798->SetLineColor(ci);
   S18_ThetaY_30_35__798->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__798->SetMarkerColor(ci);
   S18_ThetaY_30_35__798->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__798->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__798->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__798->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__798->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__798->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__798->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__798->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__798->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__798->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__798->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__798->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__798->Draw("AE");
   
   TH1D *ThetaY_30_35__799 = new TH1D("ThetaY_30_35__799","",630,-1575,1575);
   ThetaY_30_35__799->SetBinContent(305,0.0001530456);
   ThetaY_30_35__799->SetBinContent(306,0.05693297);
   ThetaY_30_35__799->SetBinContent(307,0.3572084);
   ThetaY_30_35__799->SetBinContent(308,0.6686563);
   ThetaY_30_35__799->SetBinContent(309,0.8512397);
   ThetaY_30_35__799->SetBinContent(310,1);
   ThetaY_30_35__799->SetBinContent(311,1.096725);
   ThetaY_30_35__799->SetBinContent(312,1.11708);
   ThetaY_30_35__799->SetBinContent(313,1.170493);
   ThetaY_30_35__799->SetBinContent(314,1.19146);
   ThetaY_30_35__799->SetBinContent(315,1.168044);
   ThetaY_30_35__799->SetBinContent(316,1.20049);
   ThetaY_30_35__799->SetBinContent(317,1.186103);
   ThetaY_30_35__799->SetBinContent(318,1.17738);
   ThetaY_30_35__799->SetBinContent(319,1.146465);
   ThetaY_30_35__799->SetBinContent(320,1.089073);
   ThetaY_30_35__799->SetBinContent(321,0.9937251);
   ThetaY_30_35__799->SetBinContent(322,0.8607285);
   ThetaY_30_35__799->SetBinContent(323,0.691307);
   ThetaY_30_35__799->SetBinContent(324,0.352464);
   ThetaY_30_35__799->SetBinContent(325,0.05479033);
   ThetaY_30_35__799->SetBinContent(326,0.0001530456);
   ThetaY_30_35__799->SetBinError(305,0.0001530456);
   ThetaY_30_35__799->SetBinError(306,0.002951837);
   ThetaY_30_35__799->SetBinError(307,0.007393861);
   ThetaY_30_35__799->SetBinError(308,0.01011607);
   ThetaY_30_35__799->SetBinError(309,0.01141396);
   ThetaY_30_35__799->SetBinError(310,0.01237116);
   ThetaY_30_35__799->SetBinError(311,0.01295565);
   ThetaY_30_35__799->SetBinError(312,0.01307533);
   ThetaY_30_35__799->SetBinError(313,0.01338427);
   ThetaY_30_35__799->SetBinError(314,0.01350362);
   ThetaY_30_35__799->SetBinError(315,0.01337027);
   ThetaY_30_35__799->SetBinError(316,0.01355469);
   ThetaY_30_35__799->SetBinError(317,0.01347323);
   ThetaY_30_35__799->SetBinError(318,0.01342359);
   ThetaY_30_35__799->SetBinError(319,0.01324618);
   ThetaY_30_35__799->SetBinError(320,0.01291037);
   ThetaY_30_35__799->SetBinError(321,0.01233229);
   ThetaY_30_35__799->SetBinError(322,0.0114774);
   ThetaY_30_35__799->SetBinError(323,0.01028599);
   ThetaY_30_35__799->SetBinError(324,0.007344595);
   ThetaY_30_35__799->SetBinError(325,0.002895759);
   ThetaY_30_35__799->SetBinError(326,0.0001530456);
   ThetaY_30_35__799->SetEntries(113892);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__799->SetLineColor(ci);
   ThetaY_30_35__799->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__799->SetMarkerColor(ci);
   ThetaY_30_35__799->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__799->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__799->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__799->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__799->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__799->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__799->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__799->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__799->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__799->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__799->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__799->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__799->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__799->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__799->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__799->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__799->Draw("AEsame");
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
   
   Double_t _fx3267[22] = {
   -52.5,
   -47.5,
   -42.5,
   -37.5,
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
   32.5,
   37.5,
   42.5,
   47.5,
   52.5};
   Double_t _fy3267[22] = {
   0,
   0.2744456,
   0.5686456,
   0.8412394,
   0.6975121,
   1,
   0.8405709,
   0.7133554,
   0.6140576,
   0.7081647,
   0.6554761,
   0.5856985,
   0.1449073,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3267[22] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3267[22] = {
   0,
   0.2271502,
   0.1560655,
   0.1401108,
   0.1130257,
   0.1252724,
   0.1095629,
   0.09990179,
   0.09047272,
   0.09639633,
   0.09361199,
   0.08722893,
   0.04304677,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3267[22] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3267[22] = {
   541.4005,
   0.6338981,
   0.2062597,
   0.1656836,
   0.1330375,
   0.1420647,
   0.1248851,
   0.114994,
   0.1049107,
   0.1105189,
   0.1080556,
   0.1013124,
   0.0582384,
   0.02443511,
   0.0250941,
   0.02641668,
   0.02895171,
   0.03342595,
   0.04161946,
   0.08164653,
   0.5263713,
   541.4005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3267,_fy3267,_felx3267,_fehx3267,_fely3267,_fehy3267);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3267 = new TH1F("Graph_Graph3267","",100,-100,100);
   Graph_Graph3267->SetMinimum(0);
   Graph_Graph3267->SetMaximum(1.5);
   Graph_Graph3267->SetDirectory(0);
   Graph_Graph3267->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3267->SetLineColor(ci);
   Graph_Graph3267->GetXaxis()->SetRange(1,100);
   Graph_Graph3267->GetXaxis()->CenterTitle(true);
   Graph_Graph3267->GetXaxis()->SetLabelFont(42);
   Graph_Graph3267->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3267->GetXaxis()->SetTitleFont(42);
   Graph_Graph3267->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3267->GetYaxis()->CenterTitle(true);
   Graph_Graph3267->GetYaxis()->SetLabelFont(42);
   Graph_Graph3267->GetYaxis()->SetTitleFont(42);
   Graph_Graph3267->GetZaxis()->SetLabelFont(42);
   Graph_Graph3267->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3267->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3267);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.320539,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__800 = new TH2D("ThetaY_vs_Y_30_35__800","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__800->SetBinContent(7949,1);
   ThetaY_vs_Y_30_35__800->SetBinContent(7975,372);
   ThetaY_vs_Y_30_35__800->SetBinContent(8001,2334);
   ThetaY_vs_Y_30_35__800->SetBinContent(8027,4369);
   ThetaY_vs_Y_30_35__800->SetBinContent(8053,5562);
   ThetaY_vs_Y_30_35__800->SetBinContent(8079,6534);
   ThetaY_vs_Y_30_35__800->SetBinContent(8105,7166);
   ThetaY_vs_Y_30_35__800->SetBinContent(8131,7299);
   ThetaY_vs_Y_30_35__800->SetBinContent(8157,7648);
   ThetaY_vs_Y_30_35__800->SetBinContent(8183,7785);
   ThetaY_vs_Y_30_35__800->SetBinContent(8209,7632);
   ThetaY_vs_Y_30_35__800->SetBinContent(8235,7844);
   ThetaY_vs_Y_30_35__800->SetBinContent(8261,7750);
   ThetaY_vs_Y_30_35__800->SetBinContent(8287,7693);
   ThetaY_vs_Y_30_35__800->SetBinContent(8313,7491);
   ThetaY_vs_Y_30_35__800->SetBinContent(8339,7116);
   ThetaY_vs_Y_30_35__800->SetBinContent(8365,6493);
   ThetaY_vs_Y_30_35__800->SetBinContent(8391,5624);
   ThetaY_vs_Y_30_35__800->SetBinContent(8417,4517);
   ThetaY_vs_Y_30_35__800->SetBinContent(8443,2303);
   ThetaY_vs_Y_30_35__800->SetBinContent(8469,358);
   ThetaY_vs_Y_30_35__800->SetBinContent(8495,1);
   ThetaY_vs_Y_30_35__800->SetEntries(113892);
   ThetaY_vs_Y_30_35__800->SetContour(20);
   ThetaY_vs_Y_30_35__800->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__800->SetContourLevel(1,392.2);
   ThetaY_vs_Y_30_35__800->SetContourLevel(2,784.4);
   ThetaY_vs_Y_30_35__800->SetContourLevel(3,1176.6);
   ThetaY_vs_Y_30_35__800->SetContourLevel(4,1568.8);
   ThetaY_vs_Y_30_35__800->SetContourLevel(5,1961);
   ThetaY_vs_Y_30_35__800->SetContourLevel(6,2353.2);
   ThetaY_vs_Y_30_35__800->SetContourLevel(7,2745.4);
   ThetaY_vs_Y_30_35__800->SetContourLevel(8,3137.6);
   ThetaY_vs_Y_30_35__800->SetContourLevel(9,3529.8);
   ThetaY_vs_Y_30_35__800->SetContourLevel(10,3922);
   ThetaY_vs_Y_30_35__800->SetContourLevel(11,4314.2);
   ThetaY_vs_Y_30_35__800->SetContourLevel(12,4706.4);
   ThetaY_vs_Y_30_35__800->SetContourLevel(13,5098.6);
   ThetaY_vs_Y_30_35__800->SetContourLevel(14,5490.8);
   ThetaY_vs_Y_30_35__800->SetContourLevel(15,5883);
   ThetaY_vs_Y_30_35__800->SetContourLevel(16,6275.2);
   ThetaY_vs_Y_30_35__800->SetContourLevel(17,6667.4);
   ThetaY_vs_Y_30_35__800->SetContourLevel(18,7059.6);
   ThetaY_vs_Y_30_35__800->SetContourLevel(19,7451.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__800->SetLineColor(ci);
   ThetaY_vs_Y_30_35__800->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__800->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__800->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__800->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__800->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__800->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__800->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__800->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__800->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__800->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__800->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__800->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__800->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__800->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__800->Draw("COL");
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
