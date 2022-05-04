void S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.4712213,125,8.953205);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_25_30__1137 = new TH1D("S18_ThetaY_25_30__1137","",630,-1575,1575);
   S18_ThetaY_25_30__1137->SetBinContent(309,1);
   S18_ThetaY_25_30__1137->SetBinContent(310,2.6);
   S18_ThetaY_25_30__1137->SetBinContent(311,4.666667);
   S18_ThetaY_25_30__1137->SetBinContent(312,5.466667);
   S18_ThetaY_25_30__1137->SetBinContent(313,4.8);
   S18_ThetaY_25_30__1137->SetBinContent(314,5.2);
   S18_ThetaY_25_30__1137->SetBinContent(315,4.466667);
   S18_ThetaY_25_30__1137->SetBinContent(316,6.266667);
   S18_ThetaY_25_30__1137->SetBinContent(317,3.266667);
   S18_ThetaY_25_30__1137->SetBinContent(318,0.06666667);
   S18_ThetaY_25_30__1137->SetBinError(309,0.2581989);
   S18_ThetaY_25_30__1137->SetBinError(310,0.4163332);
   S18_ThetaY_25_30__1137->SetBinError(311,0.5577734);
   S18_ThetaY_25_30__1137->SetBinError(312,0.6036923);
   S18_ThetaY_25_30__1137->SetBinError(313,0.5656854);
   S18_ThetaY_25_30__1137->SetBinError(314,0.5887841);
   S18_ThetaY_25_30__1137->SetBinError(315,0.5456902);
   S18_ThetaY_25_30__1137->SetBinError(316,0.6463573);
   S18_ThetaY_25_30__1137->SetBinError(317,0.4666667);
   S18_ThetaY_25_30__1137->SetBinError(318,0.06666667);
   S18_ThetaY_25_30__1137->SetMinimum(0);
   S18_ThetaY_25_30__1137->SetMaximum(8.010762);
   S18_ThetaY_25_30__1137->SetEntries(567);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1137->SetLineColor(ci);
   S18_ThetaY_25_30__1137->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1137->SetMarkerColor(ci);
   S18_ThetaY_25_30__1137->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__1137->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__1137->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1137->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1137->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1137->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__1137->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__1137->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1137->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1137->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1137->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1137->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1137->Draw("AE");
   
   TH1D *ThetaY_25_30__1138 = new TH1D("ThetaY_25_30__1138","",630,-1575,1575);
   ThetaY_25_30__1138->SetBinContent(308,0.005979073);
   ThetaY_25_30__1138->SetBinContent(309,1);
   ThetaY_25_30__1138->SetBinContent(310,3.56851);
   ThetaY_25_30__1138->SetBinContent(311,5.134529);
   ThetaY_25_30__1138->SetBinContent(312,6.146487);
   ThetaY_25_30__1138->SetBinContent(313,6.778276);
   ThetaY_25_30__1138->SetBinContent(314,7.073742);
   ThetaY_25_30__1138->SetBinContent(315,7.282511);
   ThetaY_25_30__1138->SetBinContent(316,7.206776);
   ThetaY_25_30__1138->SetBinContent(317,7.075237);
   ThetaY_25_30__1138->SetBinContent(318,6.725461);
   ThetaY_25_30__1138->SetBinContent(319,6.252616);
   ThetaY_25_30__1138->SetBinContent(320,5.225212);
   ThetaY_25_30__1138->SetBinContent(321,3.606378);
   ThetaY_25_30__1138->SetBinContent(322,0.9940209);
   ThetaY_25_30__1138->SetBinContent(323,0.001993024);
   ThetaY_25_30__1138->SetBinError(308,0.00172601);
   ThetaY_25_30__1138->SetBinError(309,0.02232165);
   ThetaY_25_30__1138->SetBinError(310,0.04216672);
   ThetaY_25_30__1138->SetBinError(311,0.05057974);
   ThetaY_25_30__1138->SetBinError(312,0.05534008);
   ThetaY_25_30__1138->SetBinError(313,0.05811469);
   ThetaY_25_30__1138->SetBinError(314,0.05936779);
   ThetaY_25_30__1138->SetBinError(315,0.06023749);
   ThetaY_25_30__1138->SetBinError(316,0.05992345);
   ThetaY_25_30__1138->SetBinError(317,0.05937407);
   ThetaY_25_30__1138->SetBinError(318,0.05788784);
   ThetaY_25_30__1138->SetBinError(319,0.0558158);
   ThetaY_25_30__1138->SetBinError(320,0.05102444);
   ThetaY_25_30__1138->SetBinError(321,0.04238985);
   ThetaY_25_30__1138->SetBinError(322,0.02225482);
   ThetaY_25_30__1138->SetBinError(323,0.0009965122);
   ThetaY_25_30__1138->SetEntries(148674);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1138->SetLineColor(ci);
   ThetaY_25_30__1138->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1138->SetMarkerColor(ci);
   ThetaY_25_30__1138->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1138->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1138->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1138->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1138->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1138->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1138->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1138->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1138->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1138->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1138->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1138->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1138->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1138->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1138->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1138->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1138->Draw("AEsame");
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
   
   Double_t _fx3380[16] = {
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
   37.5};
   Double_t _fy3380[16] = {
   0,
   1,
   0.7285954,
   0.9088792,
   0.8893969,
   0.7081447,
   0.7351131,
   0.6133415,
   0.869552,
   0.4617042,
   0.00991258,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3380[16] = {
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
   Double_t _fely3380[16] = {
   0,
   0.2561859,
   0.1164743,
   0.1087341,
   0.09833817,
   0.08347847,
   0.08328138,
   0.07491277,
   0.08981509,
   0.06584296,
   0.00820026,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3380[16] = {
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
   Double_t _fehy3380[16] = {
   22.18574,
   0.332225,
   0.136788,
   0.1226034,
   0.1098714,
   0.09395803,
   0.0933032,
   0.08467903,
   0.09961518,
   0.07598135,
   0.02279703,
   0.01963079,
   0.02349102,
   0.03403703,
   0.12353,
   78.20324};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3380,_fy3380,_felx3380,_fehx3380,_fely3380,_fehy3380);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3380 = new TH1F("Graph_Graph3380","",100,-100,100);
   Graph_Graph3380->SetMinimum(0);
   Graph_Graph3380->SetMaximum(1.5);
   Graph_Graph3380->SetDirectory(0);
   Graph_Graph3380->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3380->SetLineColor(ci);
   Graph_Graph3380->GetXaxis()->SetRange(1,100);
   Graph_Graph3380->GetXaxis()->CenterTitle(true);
   Graph_Graph3380->GetXaxis()->SetLabelFont(42);
   Graph_Graph3380->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3380->GetXaxis()->SetTitleFont(42);
   Graph_Graph3380->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3380->GetYaxis()->CenterTitle(true);
   Graph_Graph3380->GetYaxis()->SetLabelFont(42);
   Graph_Graph3380->GetYaxis()->SetTitleFont(42);
   Graph_Graph3380->GetZaxis()->SetLabelFont(42);
   Graph_Graph3380->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3380->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3380);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,8.010762,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1139 = new TH2D("ThetaY_vs_Y_25_30__1139","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8026,12);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8052,2007);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8078,7162);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8104,10305);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8130,12336);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8156,13604);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8182,14197);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8208,14616);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8234,14464);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8260,14200);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8286,13498);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8312,12549);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8338,10487);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8364,7238);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8390,1995);
   ThetaY_vs_Y_25_30__1139->SetBinContent(8416,4);
   ThetaY_vs_Y_25_30__1139->SetEntries(148674);
   ThetaY_vs_Y_25_30__1139->SetContour(20);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(1,730.8);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(2,1461.6);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(3,2192.4);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(4,2923.2);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(5,3654);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(6,4384.8);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(7,5115.6);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(8,5846.4);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(9,6577.2);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(10,7308);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(11,8038.8);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(12,8769.6);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(13,9500.4);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(14,10231.2);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(15,10962);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(16,11692.8);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(17,12423.6);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(18,13154.4);
   ThetaY_vs_Y_25_30__1139->SetContourLevel(19,13885.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1139->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1139->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1139->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1139->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1139->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1139->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1139->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1139->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1139->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1139->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1139->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1139->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1139->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1139->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1139->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1139->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
