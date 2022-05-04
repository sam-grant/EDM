void S12S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_40_45__1032 = new TH1D("S12S18_ThetaY_40_45__1032","",630,-1575,1575);
   S12S18_ThetaY_40_45__1032->SetBinContent(308,0.1538462);
   S12S18_ThetaY_40_45__1032->SetBinContent(309,0.3846154);
   S12S18_ThetaY_40_45__1032->SetBinContent(310,0.6153846);
   S12S18_ThetaY_40_45__1032->SetBinContent(311,0.7692308);
   S12S18_ThetaY_40_45__1032->SetBinContent(312,1);
   S12S18_ThetaY_40_45__1032->SetBinContent(313,0.8846154);
   S12S18_ThetaY_40_45__1032->SetBinContent(314,0.5384615);
   S12S18_ThetaY_40_45__1032->SetBinContent(315,0.5384615);
   S12S18_ThetaY_40_45__1032->SetBinContent(316,0.07692308);
   S12S18_ThetaY_40_45__1032->SetBinError(308,0.07692308);
   S12S18_ThetaY_40_45__1032->SetBinError(309,0.1216261);
   S12S18_ThetaY_40_45__1032->SetBinError(310,0.1538462);
   S12S18_ThetaY_40_45__1032->SetBinError(311,0.1720052);
   S12S18_ThetaY_40_45__1032->SetBinError(312,0.1961161);
   S12S18_ThetaY_40_45__1032->SetBinError(313,0.1844551);
   S12S18_ThetaY_40_45__1032->SetBinError(314,0.1439099);
   S12S18_ThetaY_40_45__1032->SetBinError(315,0.1439099);
   S12S18_ThetaY_40_45__1032->SetBinError(316,0.05439283);
   S12S18_ThetaY_40_45__1032->SetMinimum(0);
   S12S18_ThetaY_40_45__1032->SetMaximum(1.229994);
   S12S18_ThetaY_40_45__1032->SetEntries(129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1032->SetLineColor(ci);
   S12S18_ThetaY_40_45__1032->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1032->SetMarkerColor(ci);
   S12S18_ThetaY_40_45__1032->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_40_45__1032->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_40_45__1032->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1032->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1032->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1032->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_40_45__1032->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_40_45__1032->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1032->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1032->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1032->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1032->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1032->Draw("AE");
   
   TH1D *ThetaY_40_45__1033 = new TH1D("ThetaY_40_45__1033","",630,-1575,1575);
   ThetaY_40_45__1033->SetBinContent(307,0.006422608);
   ThetaY_40_45__1033->SetBinContent(308,0.194605);
   ThetaY_40_45__1033->SetBinContent(309,0.5452794);
   ThetaY_40_45__1033->SetBinContent(310,0.7777778);
   ThetaY_40_45__1033->SetBinContent(311,0.9441233);
   ThetaY_40_45__1033->SetBinContent(312,1);
   ThetaY_40_45__1033->SetBinContent(313,1.048812);
   ThetaY_40_45__1033->SetBinContent(314,1.100193);
   ThetaY_40_45__1033->SetBinContent(315,1.08799);
   ThetaY_40_45__1033->SetBinContent(316,1.118176);
   ThetaY_40_45__1033->SetBinContent(317,1.077071);
   ThetaY_40_45__1033->SetBinContent(318,1.035324);
   ThetaY_40_45__1033->SetBinContent(319,1.055877);
   ThetaY_40_45__1033->SetBinContent(320,0.9075145);
   ThetaY_40_45__1033->SetBinContent(321,0.793192);
   ThetaY_40_45__1033->SetBinContent(322,0.5786769);
   ThetaY_40_45__1033->SetBinContent(323,0.2125883);
   ThetaY_40_45__1033->SetBinContent(324,0.005780347);
   ThetaY_40_45__1033->SetBinError(307,0.002031007);
   ThetaY_40_45__1033->SetBinError(308,0.01117977);
   ThetaY_40_45__1033->SetBinError(309,0.01871394);
   ThetaY_40_45__1033->SetBinError(310,0.02235031);
   ThetaY_40_45__1033->SetBinError(311,0.02462465);
   ThetaY_40_45__1033->SetBinError(312,0.02534286);
   ThetaY_40_45__1033->SetBinError(313,0.02595401);
   ThetaY_40_45__1033->SetBinError(314,0.02658215);
   ThetaY_40_45__1033->SetBinError(315,0.02643432);
   ThetaY_40_45__1033->SetBinError(316,0.02679852);
   ThetaY_40_45__1033->SetBinError(317,0.02630134);
   ThetaY_40_45__1033->SetBinError(318,0.02578659);
   ThetaY_40_45__1033->SetBinError(319,0.02604128);
   ThetaY_40_45__1033->SetBinError(320,0.02414251);
   ThetaY_40_45__1033->SetBinError(321,0.02257069);
   ThetaY_40_45__1033->SetBinError(322,0.01927852);
   ThetaY_40_45__1033->SetBinError(323,0.01168491);
   ThetaY_40_45__1033->SetBinError(324,0.001926782);
   ThetaY_40_45__1033->SetEntries(21003);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1033->SetLineColor(ci);
   ThetaY_40_45__1033->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1033->SetMarkerColor(ci);
   ThetaY_40_45__1033->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1033->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1033->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1033->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1033->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1033->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1033->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1033->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1033->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1033->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1033->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1033->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1033->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1033->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1033->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1033->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1033->Draw("AEsame");
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
   
   Double_t _fx3345[18] = {
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
   Double_t _fy3345[18] = {
   0,
   0.790556,
   0.7053547,
   0.7912088,
   0.8147567,
   1,
   0.8434453,
   0.4894248,
   0.4949142,
   0.06879335,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3345[18] = {
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
   Double_t _fely3345[18] = {
   0,
   0.3803186,
   0.2204447,
   0.1969295,
   0.1818172,
   0.1964077,
   0.1757577,
   0.1297181,
   0.1311786,
   0.04445015,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3345[18] = {
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
   Double_t _fehy3345[18] = {
   12.10499,
   0.6324782,
   0.3034981,
   0.2535452,
   0.2279132,
   0.2395324,
   0.2169845,
   0.1697922,
   0.1717071,
   0.09085449,
   0.06577782,
   0.06843167,
   0.06709892,
   0.07807553,
   0.08933691,
   0.1224879,
   0.3340062,
   13.59276};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3345,_fy3345,_felx3345,_fehx3345,_fely3345,_fehy3345);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3345 = new TH1F("Graph_Graph3345","",100,-100,100);
   Graph_Graph3345->SetMinimum(0);
   Graph_Graph3345->SetMaximum(1.5);
   Graph_Graph3345->SetDirectory(0);
   Graph_Graph3345->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3345->SetLineColor(ci);
   Graph_Graph3345->GetXaxis()->SetRange(1,100);
   Graph_Graph3345->GetXaxis()->CenterTitle(true);
   Graph_Graph3345->GetXaxis()->SetLabelFont(42);
   Graph_Graph3345->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3345->GetXaxis()->SetTitleFont(42);
   Graph_Graph3345->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3345->GetYaxis()->CenterTitle(true);
   Graph_Graph3345->GetYaxis()->SetLabelFont(42);
   Graph_Graph3345->GetYaxis()->SetTitleFont(42);
   Graph_Graph3345->GetZaxis()->SetLabelFont(42);
   Graph_Graph3345->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3345->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3345);
   
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
   
   TH2D *ThetaY_vs_Y_40_45__1034 = new TH2D("ThetaY_vs_Y_40_45__1034","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8003,10);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8029,303);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8055,849);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8081,1211);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8107,1470);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8133,1557);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8159,1633);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8185,1713);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8211,1694);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8237,1741);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8263,1677);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8289,1612);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8315,1644);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8341,1413);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8367,1235);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8393,901);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8419,331);
   ThetaY_vs_Y_40_45__1034->SetBinContent(8445,9);
   ThetaY_vs_Y_40_45__1034->SetEntries(21003);
   ThetaY_vs_Y_40_45__1034->SetContour(20);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(1,87.05);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(2,174.1);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(3,261.15);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(4,348.2);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(5,435.25);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(6,522.3);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(7,609.35);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(8,696.4);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(9,783.45);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(10,870.5);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(11,957.55);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(12,1044.6);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(13,1131.65);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(14,1218.7);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(15,1305.75);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(16,1392.8);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(17,1479.85);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(18,1566.9);
   ThetaY_vs_Y_40_45__1034->SetContourLevel(19,1653.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1034->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1034->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1034->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1034->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1034->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1034->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1034->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1034->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1034->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1034->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1034->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1034->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1034->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1034->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1034->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1034->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_40_45","Reco vertices","lpf");
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
