void S18_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.07707626,125,1.464449);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__1140 = new TH1D("S18_ThetaY_30_35__1140","",630,-1575,1575);
   S18_ThetaY_30_35__1140->SetBinContent(309,0.137931);
   S18_ThetaY_30_35__1140->SetBinContent(310,0.3793103);
   S18_ThetaY_30_35__1140->SetBinContent(311,0.6896552);
   S18_ThetaY_30_35__1140->SetBinContent(312,1);
   S18_ThetaY_30_35__1140->SetBinContent(313,0.862069);
   S18_ThetaY_30_35__1140->SetBinContent(314,0.8965517);
   S18_ThetaY_30_35__1140->SetBinContent(315,0.8275862);
   S18_ThetaY_30_35__1140->SetBinContent(316,0.9482759);
   S18_ThetaY_30_35__1140->SetBinContent(317,0.03448276);
   S18_ThetaY_30_35__1140->SetBinError(309,0.04876598);
   S18_ThetaY_30_35__1140->SetBinError(310,0.08086924);
   S18_ThetaY_30_35__1140->SetBinError(311,0.1090441);
   S18_ThetaY_30_35__1140->SetBinError(312,0.1313064);
   S18_ThetaY_30_35__1140->SetBinError(313,0.121915);
   S18_ThetaY_30_35__1140->SetBinError(314,0.1243294);
   S18_ThetaY_30_35__1140->SetBinError(315,0.1194518);
   S18_ThetaY_30_35__1140->SetBinError(316,0.1278655);
   S18_ThetaY_30_35__1140->SetBinError(317,0.02438299);
   S18_ThetaY_30_35__1140->SetMinimum(0);
   S18_ThetaY_30_35__1140->SetMaximum(1.310296);
   S18_ThetaY_30_35__1140->SetEntries(335);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1140->SetLineColor(ci);
   S18_ThetaY_30_35__1140->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__1140->SetMarkerColor(ci);
   S18_ThetaY_30_35__1140->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__1140->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__1140->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1140->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1140->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1140->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__1140->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__1140->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1140->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1140->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__1140->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__1140->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__1140->Draw("AE");
   
   TH1D *ThetaY_30_35__1141 = new TH1D("ThetaY_30_35__1141","",630,-1575,1575);
   ThetaY_30_35__1141->SetBinContent(308,0.0004135079);
   ThetaY_30_35__1141->SetBinContent(309,0.1516196);
   ThetaY_30_35__1141->SetBinContent(310,0.5771192);
   ThetaY_30_35__1141->SetBinContent(311,0.8577533);
   ThetaY_30_35__1141->SetBinContent(312,1);
   ThetaY_30_35__1141->SetBinContent(313,1.109166);
   ThetaY_30_35__1141->SetBinContent(314,1.152309);
   ThetaY_30_35__1141->SetBinContent(315,1.184562);
   ThetaY_30_35__1141->SetBinContent(316,1.191178);
   ThetaY_30_35__1141->SetBinContent(317,1.16113);
   ThetaY_30_35__1141->SetBinContent(318,1.114404);
   ThetaY_30_35__1141->SetBinContent(319,1.011303);
   ThetaY_30_35__1141->SetBinContent(320,0.8471399);
   ThetaY_30_35__1141->SetBinContent(321,0.5888353);
   ThetaY_30_35__1141->SetBinContent(322,0.1604411);
   ThetaY_30_35__1141->SetBinContent(323,0.0005513439);
   ThetaY_30_35__1141->SetBinError(308,0.0002387389);
   ThetaY_30_35__1141->SetBinError(309,0.004571502);
   ThetaY_30_35__1141->SetBinError(310,0.008918957);
   ThetaY_30_35__1141->SetBinError(311,0.01087333);
   ThetaY_30_35__1141->SetBinError(312,0.01174036);
   ThetaY_30_35__1141->SetBinError(313,0.01236459);
   ThetaY_30_35__1141->SetBinError(314,0.01260276);
   ThetaY_30_35__1141->SetBinError(315,0.01277792);
   ThetaY_30_35__1141->SetBinError(316,0.01281356);
   ThetaY_30_35__1141->SetBinError(317,0.01265091);
   ThetaY_30_35__1141->SetBinError(318,0.01239375);
   ThetaY_30_35__1141->SetBinError(319,0.01180652);
   ThetaY_30_35__1141->SetBinError(320,0.01080585);
   ThetaY_30_35__1141->SetBinError(321,0.009009034);
   ThetaY_30_35__1141->SetBinError(322,0.004702611);
   ThetaY_30_35__1141->SetBinError(323,0.000275672);
   ThetaY_30_35__1141->SetEntries(87843);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1141->SetLineColor(ci);
   ThetaY_30_35__1141->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1141->SetMarkerColor(ci);
   ThetaY_30_35__1141->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1141->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1141->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1141->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1141->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1141->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1141->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1141->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1141->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1141->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1141->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1141->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1141->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1141->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1141->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1141->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1141->Draw("AEsame");
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
   
   Double_t _fx3381[16] = {
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
   Double_t _fy3381[16] = {
   0,
   0.9097179,
   0.6572478,
   0.8040251,
   1,
   0.7772226,
   0.7780482,
   0.698643,
   0.7960821,
   0.02969758,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3381[16] = {
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
   Double_t _fely3381[16] = {
   0,
   0.3158227,
   0.1394022,
   0.1269903,
   0.1314404,
   0.1098803,
   0.1078755,
   0.1007625,
   0.1073504,
   0.01918331,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3381[16] = {
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
   Double_t _fehy3381[16] = {
   105.9737,
   0.4510558,
   0.1726905,
   0.1488514,
   0.1499877,
   0.1266486,
   0.123995,
   0.1164737,
   0.1229179,
   0.03917981,
   0.02848641,
   0.03139094,
   0.03747493,
   0.05391761,
   0.1979971,
   73.11021};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3381,_fy3381,_felx3381,_fehx3381,_fely3381,_fehy3381);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3381 = new TH1F("Graph_Graph3381","",100,-100,100);
   Graph_Graph3381->SetMinimum(0);
   Graph_Graph3381->SetMaximum(1.5);
   Graph_Graph3381->SetDirectory(0);
   Graph_Graph3381->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3381->SetLineColor(ci);
   Graph_Graph3381->GetXaxis()->SetRange(1,100);
   Graph_Graph3381->GetXaxis()->CenterTitle(true);
   Graph_Graph3381->GetXaxis()->SetLabelFont(42);
   Graph_Graph3381->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3381->GetXaxis()->SetTitleFont(42);
   Graph_Graph3381->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3381->GetYaxis()->CenterTitle(true);
   Graph_Graph3381->GetYaxis()->SetLabelFont(42);
   Graph_Graph3381->GetYaxis()->SetTitleFont(42);
   Graph_Graph3381->GetZaxis()->SetLabelFont(42);
   Graph_Graph3381->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3381->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3381);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.310296,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1142 = new TH2D("ThetaY_vs_Y_30_35__1142","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8027,3);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8053,1100);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8079,4187);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8105,6223);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8131,7255);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8157,8047);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8183,8360);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8209,8594);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8235,8642);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8261,8424);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8287,8085);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8313,7337);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8339,6146);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8365,4272);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8391,1164);
   ThetaY_vs_Y_30_35__1142->SetBinContent(8417,4);
   ThetaY_vs_Y_30_35__1142->SetEntries(87843);
   ThetaY_vs_Y_30_35__1142->SetContour(20);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(1,432.1);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(2,864.2);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(3,1296.3);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(4,1728.4);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(5,2160.5);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(6,2592.6);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(7,3024.7);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(8,3456.8);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(9,3888.9);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(10,4321);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(11,4753.1);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(12,5185.2);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(13,5617.3);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(14,6049.4);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(15,6481.5);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(16,6913.6);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(17,7345.7);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(18,7777.8);
   ThetaY_vs_Y_30_35__1142->SetContourLevel(19,8209.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1142->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1142->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1142->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1142->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1142->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1142->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1142->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1142->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1142->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1142->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1142->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1142->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1142->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1142->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1142->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1142->Draw("COL");
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
