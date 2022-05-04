void S12S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06688855,125,1.270882);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_30_35__1197 = new TH1D("S12S18_ThetaY_30_35__1197","",630,-1575,1575);
   S12S18_ThetaY_30_35__1197->SetBinContent(309,0.1101695);
   S12S18_ThetaY_30_35__1197->SetBinContent(310,0.4152542);
   S12S18_ThetaY_30_35__1197->SetBinContent(311,0.5932203);
   S12S18_ThetaY_30_35__1197->SetBinContent(312,0.7966102);
   S12S18_ThetaY_30_35__1197->SetBinContent(313,0.9152542);
   S12S18_ThetaY_30_35__1197->SetBinContent(314,1);
   S12S18_ThetaY_30_35__1197->SetBinContent(315,0.9237288);
   S12S18_ThetaY_30_35__1197->SetBinContent(316,0.7457627);
   S12S18_ThetaY_30_35__1197->SetBinContent(317,0.03389831);
   S12S18_ThetaY_30_35__1197->SetBinError(309,0.03055552);
   S12S18_ThetaY_30_35__1197->SetBinError(310,0.05932203);
   S12S18_ThetaY_30_35__1197->SetBinError(311,0.07090339);
   S12S18_ThetaY_30_35__1197->SetBinError(312,0.08216407);
   S12S18_ThetaY_30_35__1197->SetBinError(313,0.08807038);
   S12S18_ThetaY_30_35__1197->SetBinError(314,0.09205746);
   S12S18_ThetaY_30_35__1197->SetBinError(315,0.08847717);
   S12S18_ThetaY_30_35__1197->SetBinError(316,0.07949857);
   S12S18_ThetaY_30_35__1197->SetBinError(317,0.01694915);
   S12S18_ThetaY_30_35__1197->SetMinimum(0);
   S12S18_ThetaY_30_35__1197->SetMaximum(1.137105);
   S12S18_ThetaY_30_35__1197->SetEntries(653);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1197->SetLineColor(ci);
   S12S18_ThetaY_30_35__1197->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1197->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__1197->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__1197->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__1197->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1197->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1197->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1197->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__1197->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__1197->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1197->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1197->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1197->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1197->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1197->Draw("AE");
   
   TH1D *ThetaY_30_35__1198 = new TH1D("ThetaY_30_35__1198","",630,-1575,1575);
   ThetaY_30_35__1198->SetBinContent(308,0.0003588517);
   ThetaY_30_35__1198->SetBinContent(309,0.1315789);
   ThetaY_30_35__1198->SetBinContent(310,0.5008373);
   ThetaY_30_35__1198->SetBinContent(311,0.744378);
   ThetaY_30_35__1198->SetBinContent(312,0.867823);
   ThetaY_30_35__1198->SetBinContent(313,0.9625598);
   ThetaY_30_35__1198->SetBinContent(314,1);
   ThetaY_30_35__1198->SetBinContent(315,1.02799);
   ThetaY_30_35__1198->SetBinContent(316,1.033732);
   ThetaY_30_35__1198->SetBinContent(317,1.007656);
   ThetaY_30_35__1198->SetBinContent(318,0.9671053);
   ThetaY_30_35__1198->SetBinContent(319,0.8776316);
   ThetaY_30_35__1198->SetBinContent(320,0.7351675);
   ThetaY_30_35__1198->SetBinContent(321,0.5110048);
   ThetaY_30_35__1198->SetBinContent(322,0.1392344);
   ThetaY_30_35__1198->SetBinContent(323,0.0004784689);
   ThetaY_30_35__1198->SetBinError(308,0.0002071831);
   ThetaY_30_35__1198->SetBinError(309,0.003967255);
   ThetaY_30_35__1198->SetBinError(310,0.007740076);
   ThetaY_30_35__1198->SetBinError(311,0.009436124);
   ThetaY_30_35__1198->SetBinError(312,0.01018855);
   ThetaY_30_35__1198->SetBinError(313,0.01073027);
   ThetaY_30_35__1198->SetBinError(314,0.01093697);
   ThetaY_30_35__1198->SetBinError(315,0.01108897);
   ThetaY_30_35__1198->SetBinError(316,0.0111199);
   ThetaY_30_35__1198->SetBinError(317,0.01097875);
   ThetaY_30_35__1198->SetBinError(318,0.01075558);
   ThetaY_30_35__1198->SetBinError(319,0.01024597);
   ThetaY_30_35__1198->SetBinError(320,0.009377563);
   ThetaY_30_35__1198->SetBinError(321,0.007818246);
   ThetaY_30_35__1198->SetBinError(322,0.004081034);
   ThetaY_30_35__1198->SetBinError(323,0.0002392344);
   ThetaY_30_35__1198->SetEntries(87843);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1198->SetLineColor(ci);
   ThetaY_30_35__1198->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1198->SetMarkerColor(ci);
   ThetaY_30_35__1198->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1198->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1198->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1198->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1198->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1198->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1198->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1198->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1198->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1198->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1198->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1198->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1198->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1198->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1198->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1198->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1198->Draw("AEsame");
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
   
   Double_t _fx3400[16] = {
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
   Double_t _fy3400[16] = {
   0,
   0.8372881,
   0.82912,
   0.7969343,
   0.9179409,
   0.9508544,
   1,
   0.8985772,
   0.7214275,
   0.03364077,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3400[16] = {
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
   Double_t _fely3400[16] = {
   0,
   0.2304573,
   0.1187152,
   0.09554934,
   0.09511362,
   0.09195962,
   0.09256798,
   0.08647427,
   0.07714354,
   0.01610299,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3400[16] = {
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
   Double_t _fehy3400[16] = {
   60.02235,
   0.3049868,
   0.1370983,
   0.1077723,
   0.1055341,
   0.1013272,
   0.1015731,
   0.09523656,
   0.08587928,
   0.02661067,
   0.01613439,
   0.01777948,
   0.02122539,
   0.03053835,
   0.1121434,
   41.40882};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3400,_fy3400,_felx3400,_fehx3400,_fely3400,_fehy3400);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3400 = new TH1F("Graph_Graph3400","",100,-100,100);
   Graph_Graph3400->SetMinimum(0);
   Graph_Graph3400->SetMaximum(1.5);
   Graph_Graph3400->SetDirectory(0);
   Graph_Graph3400->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3400->SetLineColor(ci);
   Graph_Graph3400->GetXaxis()->SetRange(1,100);
   Graph_Graph3400->GetXaxis()->CenterTitle(true);
   Graph_Graph3400->GetXaxis()->SetLabelFont(42);
   Graph_Graph3400->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3400->GetXaxis()->SetTitleFont(42);
   Graph_Graph3400->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3400->GetYaxis()->CenterTitle(true);
   Graph_Graph3400->GetYaxis()->SetLabelFont(42);
   Graph_Graph3400->GetYaxis()->SetTitleFont(42);
   Graph_Graph3400->GetZaxis()->SetLabelFont(42);
   Graph_Graph3400->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3400->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3400);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.137105,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1199 = new TH2D("ThetaY_vs_Y_30_35__1199","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8027,3);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8053,1100);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8079,4187);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8105,6223);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8131,7255);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8157,8047);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8183,8360);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8209,8594);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8235,8642);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8261,8424);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8287,8085);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8313,7337);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8339,6146);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8365,4272);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8391,1164);
   ThetaY_vs_Y_30_35__1199->SetBinContent(8417,4);
   ThetaY_vs_Y_30_35__1199->SetEntries(87843);
   ThetaY_vs_Y_30_35__1199->SetContour(20);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(1,432.1);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(2,864.2);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(3,1296.3);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(4,1728.4);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(5,2160.5);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(6,2592.6);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(7,3024.7);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(8,3456.8);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(9,3888.9);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(10,4321);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(11,4753.1);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(12,5185.2);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(13,5617.3);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(14,6049.4);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(15,6481.5);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(16,6913.6);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(17,7345.7);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(18,7777.8);
   ThetaY_vs_Y_30_35__1199->SetContourLevel(19,8209.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1199->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1199->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1199->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1199->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1199->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1199->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1199->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1199->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1199->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1199->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1199->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1199->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1199->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1199->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1199->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1199->Draw("COL");
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
