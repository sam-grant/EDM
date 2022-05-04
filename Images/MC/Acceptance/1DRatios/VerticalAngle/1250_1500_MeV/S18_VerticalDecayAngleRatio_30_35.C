void S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09138402,125,1.736296);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__969 = new TH1D("S18_ThetaY_30_35__969","",630,-1575,1575);
   S18_ThetaY_30_35__969->SetBinContent(308,0.2);
   S18_ThetaY_30_35__969->SetBinContent(309,0.54);
   S18_ThetaY_30_35__969->SetBinContent(310,1);
   S18_ThetaY_30_35__969->SetBinContent(311,0.88);
   S18_ThetaY_30_35__969->SetBinContent(312,1);
   S18_ThetaY_30_35__969->SetBinContent(313,0.96);
   S18_ThetaY_30_35__969->SetBinContent(314,1.34);
   S18_ThetaY_30_35__969->SetBinContent(315,1);
   S18_ThetaY_30_35__969->SetBinContent(316,1.28);
   S18_ThetaY_30_35__969->SetBinContent(317,0.12);
   S18_ThetaY_30_35__969->SetBinError(308,0.06324555);
   S18_ThetaY_30_35__969->SetBinError(309,0.103923);
   S18_ThetaY_30_35__969->SetBinError(310,0.1414214);
   S18_ThetaY_30_35__969->SetBinError(311,0.132665);
   S18_ThetaY_30_35__969->SetBinError(312,0.1414214);
   S18_ThetaY_30_35__969->SetBinError(313,0.1385641);
   S18_ThetaY_30_35__969->SetBinError(314,0.1637071);
   S18_ThetaY_30_35__969->SetBinError(315,0.1414214);
   S18_ThetaY_30_35__969->SetBinError(316,0.16);
   S18_ThetaY_30_35__969->SetBinError(317,0.04898979);
   S18_ThetaY_30_35__969->SetMinimum(0);
   S18_ThetaY_30_35__969->SetMaximum(1.553528);
   S18_ThetaY_30_35__969->SetEntries(416);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__969->SetLineColor(ci);
   S18_ThetaY_30_35__969->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__969->SetMarkerColor(ci);
   S18_ThetaY_30_35__969->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__969->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__969->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__969->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__969->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__969->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__969->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__969->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__969->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__969->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__969->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__969->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__969->Draw("AE");
   
   TH1D *ThetaY_30_35__970 = new TH1D("ThetaY_30_35__970","",630,-1575,1575);
   ThetaY_30_35__970->SetBinContent(307,0.006552419);
   ThetaY_30_35__970->SetBinContent(308,0.2523522);
   ThetaY_30_35__970->SetBinContent(309,0.7172379);
   ThetaY_30_35__970->SetBinContent(310,1);
   ThetaY_30_35__970->SetBinContent(311,1.142305);
   ThetaY_30_35__970->SetBinContent(312,1.300403);
   ThetaY_30_35__970->SetBinContent(313,1.356855);
   ThetaY_30_35__970->SetBinContent(314,1.387097);
   ThetaY_30_35__970->SetBinContent(315,1.400874);
   ThetaY_30_35__970->SetBinContent(316,1.399866);
   ThetaY_30_35__970->SetBinContent(317,1.412298);
   ThetaY_30_35__970->SetBinContent(318,1.355679);
   ThetaY_30_35__970->SetBinContent(319,1.280914);
   ThetaY_30_35__970->SetBinContent(320,1.179435);
   ThetaY_30_35__970->SetBinContent(321,0.9816868);
   ThetaY_30_35__970->SetBinContent(322,0.6928763);
   ThetaY_30_35__970->SetBinContent(323,0.2476478);
   ThetaY_30_35__970->SetBinContent(324,0.007560484);
   ThetaY_30_35__970->SetBinError(307,0.001049227);
   ThetaY_30_35__970->SetBinError(308,0.006511365);
   ThetaY_30_35__970->SetBinError(309,0.01097742);
   ThetaY_30_35__970->SetBinError(310,0.0129619);
   ThetaY_30_35__970->SetBinError(311,0.0138535);
   ThetaY_30_35__970->SetBinError(312,0.01478113);
   ThetaY_30_35__970->SetBinError(313,0.01509855);
   ThetaY_30_35__970->SetBinError(314,0.01526588);
   ThetaY_30_35__970->SetBinError(315,0.01534151);
   ThetaY_30_35__970->SetBinError(316,0.01533599);
   ThetaY_30_35__970->SetBinError(317,0.01540394);
   ThetaY_30_35__970->SetBinError(318,0.015092);
   ThetaY_30_35__970->SetBinError(319,0.01466995);
   ThetaY_30_35__970->SetBinError(320,0.01407685);
   ThetaY_30_35__970->SetBinError(321,0.01284266);
   ThetaY_30_35__970->SetBinError(322,0.01078938);
   ThetaY_30_35__970->SetBinError(323,0.006450388);
   ThetaY_30_35__970->SetBinError(324,0.00112705);
   ThetaY_30_35__970->SetEntries(101908);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__970->SetLineColor(ci);
   ThetaY_30_35__970->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__970->SetMarkerColor(ci);
   ThetaY_30_35__970->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__970->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__970->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__970->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__970->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__970->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__970->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__970->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__970->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__970->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__970->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__970->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__970->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__970->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__970->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__970->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__970->Draw("AEsame");
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
   
   Double_t _fx3324[18] = {
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
   42.5};
   Double_t _fy3324[18] = {
   0,
   0.7925433,
   0.7528883,
   1,
   0.7703721,
   0.7689922,
   0.7075186,
   0.9660465,
   0.7138402,
   0.9143735,
   0.08496788,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3324[18] = {
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
   Double_t _fely3324[18] = {
   0,
   0.2471228,
   0.1444293,
   0.1415262,
   0.1160605,
   0.1087298,
   0.1020604,
   0.1181959,
   0.1009089,
   0.1144277,
   0.03371326,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3324[18] = {
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
   Double_t _fehy3324[18] = {
   5.754109,
   0.3397796,
   0.1752447,
   0.163156,
   0.1350372,
   0.1253253,
   0.1179779,
   0.1336407,
   0.1163058,
   0.1297448,
   0.050778,
   0.02716324,
   0.02874891,
   0.03122279,
   0.03751322,
   0.05315328,
   0.1487735,
   4.971111};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3324,_fy3324,_felx3324,_fehx3324,_fely3324,_fehy3324);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3324 = new TH1F("Graph_Graph3324","",100,-100,100);
   Graph_Graph3324->SetMinimum(0);
   Graph_Graph3324->SetMaximum(1.5);
   Graph_Graph3324->SetDirectory(0);
   Graph_Graph3324->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3324->SetLineColor(ci);
   Graph_Graph3324->GetXaxis()->SetRange(1,100);
   Graph_Graph3324->GetXaxis()->CenterTitle(true);
   Graph_Graph3324->GetXaxis()->SetLabelFont(42);
   Graph_Graph3324->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3324->GetXaxis()->SetTitleFont(42);
   Graph_Graph3324->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3324->GetYaxis()->CenterTitle(true);
   Graph_Graph3324->GetYaxis()->SetLabelFont(42);
   Graph_Graph3324->GetYaxis()->SetTitleFont(42);
   Graph_Graph3324->GetZaxis()->SetLabelFont(42);
   Graph_Graph3324->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3324->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3324);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.553528,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__971 = new TH2D("ThetaY_vs_Y_30_35__971","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__971->SetBinContent(8001,39);
   ThetaY_vs_Y_30_35__971->SetBinContent(8027,1502);
   ThetaY_vs_Y_30_35__971->SetBinContent(8053,4269);
   ThetaY_vs_Y_30_35__971->SetBinContent(8079,5952);
   ThetaY_vs_Y_30_35__971->SetBinContent(8105,6799);
   ThetaY_vs_Y_30_35__971->SetBinContent(8131,7740);
   ThetaY_vs_Y_30_35__971->SetBinContent(8157,8076);
   ThetaY_vs_Y_30_35__971->SetBinContent(8183,8256);
   ThetaY_vs_Y_30_35__971->SetBinContent(8209,8338);
   ThetaY_vs_Y_30_35__971->SetBinContent(8235,8332);
   ThetaY_vs_Y_30_35__971->SetBinContent(8261,8406);
   ThetaY_vs_Y_30_35__971->SetBinContent(8287,8069);
   ThetaY_vs_Y_30_35__971->SetBinContent(8313,7624);
   ThetaY_vs_Y_30_35__971->SetBinContent(8339,7020);
   ThetaY_vs_Y_30_35__971->SetBinContent(8365,5843);
   ThetaY_vs_Y_30_35__971->SetBinContent(8391,4124);
   ThetaY_vs_Y_30_35__971->SetBinContent(8417,1474);
   ThetaY_vs_Y_30_35__971->SetBinContent(8443,45);
   ThetaY_vs_Y_30_35__971->SetEntries(101908);
   ThetaY_vs_Y_30_35__971->SetContour(20);
   ThetaY_vs_Y_30_35__971->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__971->SetContourLevel(1,420.3);
   ThetaY_vs_Y_30_35__971->SetContourLevel(2,840.6);
   ThetaY_vs_Y_30_35__971->SetContourLevel(3,1260.9);
   ThetaY_vs_Y_30_35__971->SetContourLevel(4,1681.2);
   ThetaY_vs_Y_30_35__971->SetContourLevel(5,2101.5);
   ThetaY_vs_Y_30_35__971->SetContourLevel(6,2521.8);
   ThetaY_vs_Y_30_35__971->SetContourLevel(7,2942.1);
   ThetaY_vs_Y_30_35__971->SetContourLevel(8,3362.4);
   ThetaY_vs_Y_30_35__971->SetContourLevel(9,3782.7);
   ThetaY_vs_Y_30_35__971->SetContourLevel(10,4203);
   ThetaY_vs_Y_30_35__971->SetContourLevel(11,4623.3);
   ThetaY_vs_Y_30_35__971->SetContourLevel(12,5043.6);
   ThetaY_vs_Y_30_35__971->SetContourLevel(13,5463.9);
   ThetaY_vs_Y_30_35__971->SetContourLevel(14,5884.2);
   ThetaY_vs_Y_30_35__971->SetContourLevel(15,6304.5);
   ThetaY_vs_Y_30_35__971->SetContourLevel(16,6724.8);
   ThetaY_vs_Y_30_35__971->SetContourLevel(17,7145.1);
   ThetaY_vs_Y_30_35__971->SetContourLevel(18,7565.4);
   ThetaY_vs_Y_30_35__971->SetContourLevel(19,7985.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__971->SetLineColor(ci);
   ThetaY_vs_Y_30_35__971->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__971->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__971->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__971->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__971->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__971->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__971->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__971->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__971->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__971->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__971->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__971->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__971->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__971->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__971->Draw("COL");
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
