void S18_VerticalDecayAngleRatio_40_45()
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
   upper_pad->Range(-125,-0.07235257,125,1.374699);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_40_45__975 = new TH1D("S18_ThetaY_40_45__975","",630,-1575,1575);
   S18_ThetaY_40_45__975->SetBinContent(308,0.1764706);
   S18_ThetaY_40_45__975->SetBinContent(309,0.1176471);
   S18_ThetaY_40_45__975->SetBinContent(310,0.7058824);
   S18_ThetaY_40_45__975->SetBinContent(311,0.6470588);
   S18_ThetaY_40_45__975->SetBinContent(312,1);
   S18_ThetaY_40_45__975->SetBinContent(313,0.5882353);
   S18_ThetaY_40_45__975->SetBinContent(314,0.4117647);
   S18_ThetaY_40_45__975->SetBinContent(315,0.4705882);
   S18_ThetaY_40_45__975->SetBinContent(316,0.05882353);
   S18_ThetaY_40_45__975->SetBinError(308,0.1018853);
   S18_ThetaY_40_45__975->SetBinError(309,0.08318903);
   S18_ThetaY_40_45__975->SetBinError(310,0.2037707);
   S18_ThetaY_40_45__975->SetBinError(311,0.1950956);
   S18_ThetaY_40_45__975->SetBinError(312,0.2425356);
   S18_ThetaY_40_45__975->SetBinError(313,0.1860163);
   S18_ThetaY_40_45__975->SetBinError(314,0.1556324);
   S18_ThetaY_40_45__975->SetBinError(315,0.1663781);
   S18_ThetaY_40_45__975->SetBinError(316,0.05882353);
   S18_ThetaY_40_45__975->SetMinimum(0);
   S18_ThetaY_40_45__975->SetMaximum(1.229994);
   S18_ThetaY_40_45__975->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__975->SetLineColor(ci);
   S18_ThetaY_40_45__975->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__975->SetMarkerColor(ci);
   S18_ThetaY_40_45__975->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_40_45__975->GetXaxis()->SetRange(296,335);
   S18_ThetaY_40_45__975->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__975->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__975->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__975->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_40_45__975->GetYaxis()->CenterTitle(true);
   S18_ThetaY_40_45__975->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__975->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__975->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__975->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__975->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__975->Draw("AE");
   
   TH1D *ThetaY_40_45__976 = new TH1D("ThetaY_40_45__976","",630,-1575,1575);
   ThetaY_40_45__976->SetBinContent(307,0.006422608);
   ThetaY_40_45__976->SetBinContent(308,0.194605);
   ThetaY_40_45__976->SetBinContent(309,0.5452794);
   ThetaY_40_45__976->SetBinContent(310,0.7777778);
   ThetaY_40_45__976->SetBinContent(311,0.9441233);
   ThetaY_40_45__976->SetBinContent(312,1);
   ThetaY_40_45__976->SetBinContent(313,1.048812);
   ThetaY_40_45__976->SetBinContent(314,1.100193);
   ThetaY_40_45__976->SetBinContent(315,1.08799);
   ThetaY_40_45__976->SetBinContent(316,1.118176);
   ThetaY_40_45__976->SetBinContent(317,1.077071);
   ThetaY_40_45__976->SetBinContent(318,1.035324);
   ThetaY_40_45__976->SetBinContent(319,1.055877);
   ThetaY_40_45__976->SetBinContent(320,0.9075145);
   ThetaY_40_45__976->SetBinContent(321,0.793192);
   ThetaY_40_45__976->SetBinContent(322,0.5786769);
   ThetaY_40_45__976->SetBinContent(323,0.2125883);
   ThetaY_40_45__976->SetBinContent(324,0.005780347);
   ThetaY_40_45__976->SetBinError(307,0.002031007);
   ThetaY_40_45__976->SetBinError(308,0.01117977);
   ThetaY_40_45__976->SetBinError(309,0.01871394);
   ThetaY_40_45__976->SetBinError(310,0.02235031);
   ThetaY_40_45__976->SetBinError(311,0.02462465);
   ThetaY_40_45__976->SetBinError(312,0.02534286);
   ThetaY_40_45__976->SetBinError(313,0.02595401);
   ThetaY_40_45__976->SetBinError(314,0.02658215);
   ThetaY_40_45__976->SetBinError(315,0.02643432);
   ThetaY_40_45__976->SetBinError(316,0.02679852);
   ThetaY_40_45__976->SetBinError(317,0.02630134);
   ThetaY_40_45__976->SetBinError(318,0.02578659);
   ThetaY_40_45__976->SetBinError(319,0.02604128);
   ThetaY_40_45__976->SetBinError(320,0.02414251);
   ThetaY_40_45__976->SetBinError(321,0.02257069);
   ThetaY_40_45__976->SetBinError(322,0.01927852);
   ThetaY_40_45__976->SetBinError(323,0.01168491);
   ThetaY_40_45__976->SetBinError(324,0.001926782);
   ThetaY_40_45__976->SetEntries(21003);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__976->SetLineColor(ci);
   ThetaY_40_45__976->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__976->SetMarkerColor(ci);
   ThetaY_40_45__976->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__976->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__976->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__976->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__976->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__976->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__976->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__976->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__976->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__976->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__976->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__976->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__976->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__976->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__976->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__976->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__976->Draw("AEsame");
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
   
   Double_t _fx3326[18] = {
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
   Double_t _fy3326[18] = {
   0,
   0.9068142,
   0.2157556,
   0.907563,
   0.6853541,
   1,
   0.5608588,
   0.374266,
   0.43253,
   0.05260668,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3326[18] = {
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
   Double_t _fely3326[18] = {
   0,
   0.4953064,
   0.1394611,
   0.2594772,
   0.2041591,
   0.2413645,
   0.1748391,
   0.138269,
   0.1499903,
   0.04352345,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3326[18] = {
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
   Double_t _fehy3326[18] = {
   18.51352,
   0.8907098,
   0.2853442,
   0.3472161,
   0.276613,
   0.308281,
   0.2403606,
   0.2022176,
   0.2140509,
   0.1210851,
   0.1006014,
   0.1046602,
   0.1026219,
   0.1194096,
   0.1366329,
   0.1873344,
   0.510833,
   20.78893};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3326,_fy3326,_felx3326,_fehx3326,_fely3326,_fehy3326);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3326 = new TH1F("Graph_Graph3326","",100,-100,100);
   Graph_Graph3326->SetMinimum(0);
   Graph_Graph3326->SetMaximum(1.5);
   Graph_Graph3326->SetDirectory(0);
   Graph_Graph3326->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3326->SetLineColor(ci);
   Graph_Graph3326->GetXaxis()->SetRange(1,100);
   Graph_Graph3326->GetXaxis()->CenterTitle(true);
   Graph_Graph3326->GetXaxis()->SetLabelFont(42);
   Graph_Graph3326->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3326->GetXaxis()->SetTitleFont(42);
   Graph_Graph3326->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3326->GetYaxis()->CenterTitle(true);
   Graph_Graph3326->GetYaxis()->SetLabelFont(42);
   Graph_Graph3326->GetYaxis()->SetTitleFont(42);
   Graph_Graph3326->GetZaxis()->SetLabelFont(42);
   Graph_Graph3326->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3326->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3326);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.229994,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__977 = new TH2D("ThetaY_vs_Y_40_45__977","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__977->SetBinContent(8003,10);
   ThetaY_vs_Y_40_45__977->SetBinContent(8029,303);
   ThetaY_vs_Y_40_45__977->SetBinContent(8055,849);
   ThetaY_vs_Y_40_45__977->SetBinContent(8081,1211);
   ThetaY_vs_Y_40_45__977->SetBinContent(8107,1470);
   ThetaY_vs_Y_40_45__977->SetBinContent(8133,1557);
   ThetaY_vs_Y_40_45__977->SetBinContent(8159,1633);
   ThetaY_vs_Y_40_45__977->SetBinContent(8185,1713);
   ThetaY_vs_Y_40_45__977->SetBinContent(8211,1694);
   ThetaY_vs_Y_40_45__977->SetBinContent(8237,1741);
   ThetaY_vs_Y_40_45__977->SetBinContent(8263,1677);
   ThetaY_vs_Y_40_45__977->SetBinContent(8289,1612);
   ThetaY_vs_Y_40_45__977->SetBinContent(8315,1644);
   ThetaY_vs_Y_40_45__977->SetBinContent(8341,1413);
   ThetaY_vs_Y_40_45__977->SetBinContent(8367,1235);
   ThetaY_vs_Y_40_45__977->SetBinContent(8393,901);
   ThetaY_vs_Y_40_45__977->SetBinContent(8419,331);
   ThetaY_vs_Y_40_45__977->SetBinContent(8445,9);
   ThetaY_vs_Y_40_45__977->SetEntries(21003);
   ThetaY_vs_Y_40_45__977->SetContour(20);
   ThetaY_vs_Y_40_45__977->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__977->SetContourLevel(1,87.05);
   ThetaY_vs_Y_40_45__977->SetContourLevel(2,174.1);
   ThetaY_vs_Y_40_45__977->SetContourLevel(3,261.15);
   ThetaY_vs_Y_40_45__977->SetContourLevel(4,348.2);
   ThetaY_vs_Y_40_45__977->SetContourLevel(5,435.25);
   ThetaY_vs_Y_40_45__977->SetContourLevel(6,522.3);
   ThetaY_vs_Y_40_45__977->SetContourLevel(7,609.35);
   ThetaY_vs_Y_40_45__977->SetContourLevel(8,696.4);
   ThetaY_vs_Y_40_45__977->SetContourLevel(9,783.45);
   ThetaY_vs_Y_40_45__977->SetContourLevel(10,870.5);
   ThetaY_vs_Y_40_45__977->SetContourLevel(11,957.55);
   ThetaY_vs_Y_40_45__977->SetContourLevel(12,1044.6);
   ThetaY_vs_Y_40_45__977->SetContourLevel(13,1131.65);
   ThetaY_vs_Y_40_45__977->SetContourLevel(14,1218.7);
   ThetaY_vs_Y_40_45__977->SetContourLevel(15,1305.75);
   ThetaY_vs_Y_40_45__977->SetContourLevel(16,1392.8);
   ThetaY_vs_Y_40_45__977->SetContourLevel(17,1479.85);
   ThetaY_vs_Y_40_45__977->SetContourLevel(18,1566.9);
   ThetaY_vs_Y_40_45__977->SetContourLevel(19,1653.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__977->SetLineColor(ci);
   ThetaY_vs_Y_40_45__977->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__977->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__977->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__977->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__977->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__977->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__977->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__977->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__977->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__977->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__977->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__977->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__977->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__977->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__977->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_40_45","Reco vertices","lpf");
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
