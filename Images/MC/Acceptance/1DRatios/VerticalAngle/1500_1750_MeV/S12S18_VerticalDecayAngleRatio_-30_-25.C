void S12S18_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.09020266,125,1.71385);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI30_mI25__1161 = new TH1D("S12S18_ThetaY_mI30_mI25__1161","",630,-1575,1575);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(313,0.01388889);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(314,0.7152778);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(315,1.229167);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(316,1.243056);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(317,1.25);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(318,1.041667);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(319,1.076389);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(320,1);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(321,0.6041667);
   S12S18_ThetaY_mI30_mI25__1161->SetBinContent(322,0.1388889);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(313,0.009820928);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(314,0.07047841);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(315,0.09238982);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(316,0.09291033);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(317,0.0931695);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(318,0.08505173);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(319,0.08645764);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(320,0.08333333);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(321,0.06477347);
   S12S18_ThetaY_mI30_mI25__1161->SetBinError(322,0.0310565);
   S12S18_ThetaY_mI30_mI25__1161->SetMinimum(0);
   S12S18_ThetaY_mI30_mI25__1161->SetMaximum(1.533445);
   S12S18_ThetaY_mI30_mI25__1161->SetEntries(1197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1161->SetLineColor(ci);
   S12S18_ThetaY_mI30_mI25__1161->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1161->SetMarkerColor(ci);
   S12S18_ThetaY_mI30_mI25__1161->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI30_mI25__1161->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI30_mI25__1161->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1161->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1161->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1161->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI30_mI25__1161->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI30_mI25__1161->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1161->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1161->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1161->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1161->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1161->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1162 = new TH1D("ThetaY_mI30_mI25__1162","",630,-1575,1575);
   ThetaY_mI30_mI25__1162->SetBinContent(308,0.001053842);
   ThetaY_mI30_mI25__1162->SetBinContent(309,0.1872006);
   ThetaY_mI30_mI25__1162->SetBinContent(310,0.6894999);
   ThetaY_mI30_mI25__1162->SetBinContent(311,0.994635);
   ThetaY_mI30_mI25__1162->SetBinContent(312,1.196302);
   ThetaY_mI30_mI25__1162->SetBinContent(313,1.297088);
   ThetaY_mI30_mI25__1162->SetBinContent(314,1.36645);
   ThetaY_mI30_mI25__1162->SetBinContent(315,1.394041);
   ThetaY_mI30_mI25__1162->SetBinContent(316,1.385131);
   ThetaY_mI30_mI25__1162->SetBinContent(317,1.345947);
   ThetaY_mI30_mI25__1162->SetBinContent(318,1.296417);
   ThetaY_mI30_mI25__1162->SetBinContent(319,1.18059);
   ThetaY_mI30_mI25__1162->SetBinContent(320,1);
   ThetaY_mI30_mI25__1162->SetBinContent(321,0.6872006);
   ThetaY_mI30_mI25__1162->SetBinContent(322,0.1888293);
   ThetaY_mI30_mI25__1162->SetBinContent(323,0.001053842);
   ThetaY_mI30_mI25__1162->SetBinError(308,0.0003177452);
   ThetaY_mI30_mI25__1162->SetBinError(309,0.004234918);
   ThetaY_mI30_mI25__1162->SetBinError(310,0.008127528);
   ThetaY_mI30_mI25__1162->SetBinError(311,0.00976165);
   ThetaY_mI30_mI25__1162->SetBinError(312,0.01070562);
   ThetaY_mI30_mI25__1162->SetBinError(313,0.01114746);
   ThetaY_mI30_mI25__1162->SetBinError(314,0.01144164);
   ThetaY_mI30_mI25__1162->SetBinError(315,0.01155657);
   ThetaY_mI30_mI25__1162->SetBinError(316,0.01151958);
   ThetaY_mI30_mI25__1162->SetBinError(317,0.01135548);
   ThetaY_mI30_mI25__1162->SetBinError(318,0.01114458);
   ThetaY_mI30_mI25__1162->SetBinError(319,0.01063508);
   ThetaY_mI30_mI25__1162->SetBinError(320,0.009787941);
   ThetaY_mI30_mI25__1162->SetBinError(321,0.008113965);
   ThetaY_mI30_mI25__1162->SetBinError(322,0.0042533);
   ThetaY_mI30_mI25__1162->SetBinError(323,0.0003177452);
   ThetaY_mI30_mI25__1162->SetEntries(148339);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1162->SetLineColor(ci);
   ThetaY_mI30_mI25__1162->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1162->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1162->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1162->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1162->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1162->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1162->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1162->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1162->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1162->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1162->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1162->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1162->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1162->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1162->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1162->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1162->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1162->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1162->Draw("AEsame");
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
   
   Double_t _fx3388[16] = {
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
   Double_t _fy3388[16] = {
   0,
   0,
   0,
   0,
   0,
   0.01070775,
   0.5234572,
   0.8817292,
   0.897428,
   0.9287138,
   0.8034966,
   0.911738,
   1,
   0.8791707,
   0.7355262,
   0};
   Double_t _felx3388[16] = {
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
   Double_t _fely3388[16] = {
   0,
   0,
   0,
   0,
   0,
   0.006916534,
   0.05167776,
   0.06661145,
   0.06742553,
   0.06959712,
   0.06589188,
   0.07360923,
   0.08380478,
   0.09463792,
   0.1638694,
   0};
   Double_t _fehx3388[16] = {
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
   Double_t _fehy3388[16] = {
   13.20598,
   0.06832722,
   0.01854461,
   0.01285497,
   0.01068778,
   0.01412519,
   0.05705407,
   0.07184936,
   0.07269726,
   0.07502429,
   0.07153579,
   0.07981285,
   0.09114943,
   0.1054329,
   0.2053007,
   13.20598};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3388,_fy3388,_felx3388,_fehx3388,_fely3388,_fehy3388);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3388 = new TH1F("Graph_Graph3388","",100,-100,100);
   Graph_Graph3388->SetMinimum(0);
   Graph_Graph3388->SetMaximum(1.5);
   Graph_Graph3388->SetDirectory(0);
   Graph_Graph3388->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3388->SetLineColor(ci);
   Graph_Graph3388->GetXaxis()->SetRange(1,100);
   Graph_Graph3388->GetXaxis()->CenterTitle(true);
   Graph_Graph3388->GetXaxis()->SetLabelFont(42);
   Graph_Graph3388->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3388->GetXaxis()->SetTitleFont(42);
   Graph_Graph3388->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3388->GetYaxis()->CenterTitle(true);
   Graph_Graph3388->GetYaxis()->SetLabelFont(42);
   Graph_Graph3388->GetYaxis()->SetTitleFont(42);
   Graph_Graph3388->GetZaxis()->SetLabelFont(42);
   Graph_Graph3388->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3388->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3388);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.533445,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1163 = new TH2D("ThetaY_vs_Y_mI30_mI25__1163","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8015,11);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8041,1954);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8067,7197);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8093,10382);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8119,12487);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8145,13539);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8171,14263);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8197,14551);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8223,14458);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8249,14049);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8275,13532);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8301,12323);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8327,10438);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8353,7173);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8379,1971);
   ThetaY_vs_Y_mI30_mI25__1163->SetBinContent(8405,11);
   ThetaY_vs_Y_mI30_mI25__1163->SetEntries(148339);
   ThetaY_vs_Y_mI30_mI25__1163->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(1,727.55);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(2,1455.1);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(3,2182.65);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(4,2910.2);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(5,3637.75);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(6,4365.3);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(7,5092.85);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(8,5820.4);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(9,6547.95);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(10,7275.5);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(11,8003.05);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(12,8730.6);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(13,9458.15);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(14,10185.7);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(15,10913.25);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(16,11640.8);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(17,12368.35);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(18,13095.9);
   ThetaY_vs_Y_mI30_mI25__1163->SetContourLevel(19,13823.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1163->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1163->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1163->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1163->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1163->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1163->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1163->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1163->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1163->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1163->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1163->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1163->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1163->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1163->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1163->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1163->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-30_-25","Reco vertices","lpf");
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
