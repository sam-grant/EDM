void S12S18_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.07363676,125,1.399098);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_20_25__1362 = new TH1D("S12S18_ThetaY_20_25__1362","",630,-1575,1575);
   S12S18_ThetaY_20_25__1362->SetBinContent(310,0.1214575);
   S12S18_ThetaY_20_25__1362->SetBinContent(311,0.48583);
   S12S18_ThetaY_20_25__1362->SetBinContent(312,0.708502);
   S12S18_ThetaY_20_25__1362->SetBinContent(313,1);
   S12S18_ThetaY_20_25__1362->SetBinContent(314,0.9554656);
   S12S18_ThetaY_20_25__1362->SetBinContent(315,0.8947368);
   S12S18_ThetaY_20_25__1362->SetBinContent(316,0.9797571);
   S12S18_ThetaY_20_25__1362->SetBinContent(317,0.659919);
   S12S18_ThetaY_20_25__1362->SetBinContent(318,0.03238866);
   S12S18_ThetaY_20_25__1362->SetBinError(310,0.022175);
   S12S18_ThetaY_20_25__1362->SetBinError(311,0.04435);
   S12S18_ThetaY_20_25__1362->SetBinError(312,0.05355772);
   S12S18_ThetaY_20_25__1362->SetBinError(313,0.06362848);
   S12S18_ThetaY_20_25__1362->SetBinError(314,0.06219551);
   S12S18_ThetaY_20_25__1362->SetBinError(315,0.06018651);
   S12S18_ThetaY_20_25__1362->SetBinError(316,0.06298117);
   S12S18_ThetaY_20_25__1362->SetBinError(317,0.05168885);
   S12S18_ThetaY_20_25__1362->SetBinError(318,0.01145112);
   S12S18_ThetaY_20_25__1362->SetMinimum(0);
   S12S18_ThetaY_20_25__1362->SetMaximum(1.251825);
   S12S18_ThetaY_20_25__1362->SetEntries(1442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1362->SetLineColor(ci);
   S12S18_ThetaY_20_25__1362->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1362->SetMarkerColor(ci);
   S12S18_ThetaY_20_25__1362->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_20_25__1362->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_20_25__1362->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1362->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1362->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1362->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_20_25__1362->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_20_25__1362->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1362->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1362->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1362->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1362->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1362->Draw("AE");
   
   TH1D *ThetaY_20_25__1363 = new TH1D("ThetaY_20_25__1363","",630,-1575,1575);
   ThetaY_20_25__1363->SetBinContent(309,0.0009011264);
   ThetaY_20_25__1363->SetBinContent(310,0.1653066);
   ThetaY_20_25__1363->SetBinContent(311,0.614368);
   ThetaY_20_25__1363->SetBinContent(312,0.8585732);
   ThetaY_20_25__1363->SetBinContent(313,1);
   ThetaY_20_25__1363->SetBinContent(314,1.099474);
   ThetaY_20_25__1363->SetBinContent(315,1.117196);
   ThetaY_20_25__1363->SetBinContent(316,1.138023);
   ThetaY_20_25__1363->SetBinContent(317,1.10378);
   ThetaY_20_25__1363->SetBinContent(318,1.013166);
   ThetaY_20_25__1363->SetBinContent(319,0.8537672);
   ThetaY_20_25__1363->SetBinContent(320,0.5999499);
   ThetaY_20_25__1363->SetBinContent(321,0.1592991);
   ThetaY_20_25__1363->SetBinContent(322,0.0005506884);
   ThetaY_20_25__1363->SetBinError(309,0.0002123975);
   ThetaY_20_25__1363->SetBinError(310,0.002876748);
   ThetaY_20_25__1363->SetBinError(311,0.005545885);
   ThetaY_20_25__1363->SetBinError(312,0.006556096);
   ThetaY_20_25__1363->SetBinError(313,0.007075491);
   ThetaY_20_25__1363->SetBinError(314,0.007419065);
   ThetaY_20_25__1363->SetBinError(315,0.007478619);
   ThetaY_20_25__1363->SetBinError(316,0.007548003);
   ThetaY_20_25__1363->SetBinError(317,0.007433576);
   ThetaY_20_25__1363->SetBinError(318,0.007121919);
   ThetaY_20_25__1363->SetBinError(319,0.00653772);
   ThetaY_20_25__1363->SetBinError(320,0.005480423);
   ThetaY_20_25__1363->SetBinError(321,0.002823991);
   ThetaY_20_25__1363->SetBinError(322,0.0001660388);
   ThetaY_20_25__1363->SetEntries(194244);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1363->SetLineColor(ci);
   ThetaY_20_25__1363->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1363->SetMarkerColor(ci);
   ThetaY_20_25__1363->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1363->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1363->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1363->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1363->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1363->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1363->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1363->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1363->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1363->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1363->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1363->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1363->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1363->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1363->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1363->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1363->Draw("AEsame");
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
   
   Double_t _fx3455[14] = {
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
   Double_t _fy3455[14] = {
   0,
   0.7347406,
   0.7907801,
   0.8252086,
   1,
   0.8690204,
   0.8008769,
   0.8609294,
   0.597872,
   0.03196776,
   0,
   0,
   0,
   0};
   Double_t _felx3455[14] = {
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
   Double_t _fely3455[14] = {
   0,
   0.1339782,
   0.07243605,
   0.06263566,
   0.06397577,
   0.05682998,
   0.05409676,
   0.05559681,
   0.04695246,
   0.01106433,
   0,
   0,
   0,
   0};
   Double_t _fehx3455[14] = {
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
   Double_t _fehy3455[14] = {
   8.709137,
   0.1610103,
   0.07940241,
   0.06758438,
   0.06820916,
   0.06067652,
   0.05788296,
   0.05931115,
   0.05079526,
   0.01576932,
   0.008730637,
   0.01242454,
   0.04680305,
   14.7335};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3455,_fy3455,_felx3455,_fehx3455,_fely3455,_fehy3455);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3455 = new TH1F("Graph_Graph3455","",100,-100,100);
   Graph_Graph3455->SetMinimum(0);
   Graph_Graph3455->SetMaximum(1.5);
   Graph_Graph3455->SetDirectory(0);
   Graph_Graph3455->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3455->SetLineColor(ci);
   Graph_Graph3455->GetXaxis()->SetRange(1,100);
   Graph_Graph3455->GetXaxis()->CenterTitle(true);
   Graph_Graph3455->GetXaxis()->SetLabelFont(42);
   Graph_Graph3455->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3455->GetXaxis()->SetTitleFont(42);
   Graph_Graph3455->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3455->GetYaxis()->CenterTitle(true);
   Graph_Graph3455->GetYaxis()->SetLabelFont(42);
   Graph_Graph3455->GetYaxis()->SetTitleFont(42);
   Graph_Graph3455->GetZaxis()->SetLabelFont(42);
   Graph_Graph3455->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3455->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3455);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.251825,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1364 = new TH2D("ThetaY_vs_Y_20_25__1364","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8051,18);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8077,3302);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8103,12272);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8129,17150);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8155,19975);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8181,21962);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8207,22316);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8233,22732);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8259,22048);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8285,20238);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8311,17054);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8337,11984);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8363,3182);
   ThetaY_vs_Y_20_25__1364->SetBinContent(8389,11);
   ThetaY_vs_Y_20_25__1364->SetEntries(194244);
   ThetaY_vs_Y_20_25__1364->SetContour(20);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(1,1136.6);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(2,2273.2);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(3,3409.8);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(4,4546.4);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(5,5683);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(6,6819.6);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(7,7956.2);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(8,9092.8);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(9,10229.4);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(10,11366);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(11,12502.6);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(12,13639.2);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(13,14775.8);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(14,15912.4);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(15,17049);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(16,18185.6);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(17,19322.2);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(18,20458.8);
   ThetaY_vs_Y_20_25__1364->SetContourLevel(19,21595.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1364->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1364->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1364->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1364->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1364->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1364->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1364->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1364->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1364->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1364->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1364->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1364->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1364->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1364->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1364->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1364->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_20_25","Reco vertices","lpf");
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
