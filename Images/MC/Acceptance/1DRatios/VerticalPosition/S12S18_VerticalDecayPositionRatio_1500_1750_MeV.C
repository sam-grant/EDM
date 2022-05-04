void S12S18_VerticalDecayPositionRatio_1500_1750_MeV()
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
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.0625563,81.25,1.18857);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__1150 = new TH1D("S12S18_Y__1150","",24,-60,60);
   S12S18_Y__1150->SetBinContent(4,0.0151117);
   S12S18_Y__1150->SetBinContent(5,0.05157687);
   S12S18_Y__1150->SetBinContent(6,0.1075887);
   S12S18_Y__1150->SetBinContent(7,0.1966163);
   S12S18_Y__1150->SetBinContent(8,0.3293364);
   S12S18_Y__1150->SetBinContent(9,0.531866);
   S12S18_Y__1150->SetBinContent(10,0.7365309);
   S12S18_Y__1150->SetBinContent(11,0.8771353);
   S12S18_Y__1150->SetBinContent(12,0.9963863);
   S12S18_Y__1150->SetBinContent(13,1);
   S12S18_Y__1150->SetBinContent(14,0.8899474);
   S12S18_Y__1150->SetBinContent(15,0.7097569);
   S12S18_Y__1150->SetBinContent(16,0.511498);
   S12S18_Y__1150->SetBinContent(17,0.3198095);
   S12S18_Y__1150->SetBinContent(18,0.1819974);
   S12S18_Y__1150->SetBinContent(19,0.1072602);
   S12S18_Y__1150->SetBinContent(20,0.04730618);
   S12S18_Y__1150->SetBinContent(21,0.01527595);
   S12S18_Y__1150->SetBinError(4,0.001575503);
   S12S18_Y__1150->SetBinError(5,0.002910651);
   S12S18_Y__1150->SetBinError(6,0.004203838);
   S12S18_Y__1150->SetBinError(7,0.005682932);
   S12S18_Y__1150->SetBinError(8,0.007354998);
   S12S18_Y__1150->SetBinError(9,0.009346818);
   S12S18_Y__1150->SetBinError(10,0.01099913);
   S12S18_Y__1150->SetBinError(11,0.01200317);
   S12S18_Y__1150->SetBinError(12,0.01279312);
   S12S18_Y__1150->SetBinError(13,0.0128163);
   S12S18_Y__1150->SetBinError(14,0.01209052);
   S12S18_Y__1150->SetBinError(15,0.01079736);
   S12S18_Y__1150->SetBinError(16,0.009166101);
   S12S18_Y__1150->SetBinError(17,0.007247836);
   S12S18_Y__1150->SetBinError(18,0.005467581);
   S12S18_Y__1150->SetBinError(19,0.004197415);
   S12S18_Y__1150->SetBinError(20,0.002787543);
   S12S18_Y__1150->SetBinError(21,0.001584043);
   S12S18_Y__1150->SetEntries(46421);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1150->SetLineColor(ci);
   S12S18_Y__1150->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1150->SetMarkerColor(ci);
   S12S18_Y__1150->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__1150->GetXaxis()->SetRange(0,25);
   S12S18_Y__1150->GetXaxis()->SetLabelFont(42);
   S12S18_Y__1150->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__1150->GetXaxis()->SetTitleFont(42);
   S12S18_Y__1150->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__1150->GetYaxis()->CenterTitle(true);
   S12S18_Y__1150->GetYaxis()->SetLabelFont(42);
   S12S18_Y__1150->GetYaxis()->SetTitleFont(42);
   S12S18_Y__1150->GetZaxis()->SetLabelFont(42);
   S12S18_Y__1150->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__1150->GetZaxis()->SetTitleFont(42);
   S12S18_Y__1150->Draw("AE");
   
   TH1D *Y__1151 = new TH1D("Y__1151","",24,-60,60);
   Y__1151->SetBinContent(4,0.02840338);
   Y__1151->SetBinContent(5,0.07450623);
   Y__1151->SetBinContent(6,0.1389616);
   Y__1151->SetBinContent(7,0.2356843);
   Y__1151->SetBinContent(8,0.3726678);
   Y__1151->SetBinContent(9,0.5521968);
   Y__1151->SetBinContent(10,0.7450337);
   Y__1151->SetBinContent(11,0.9111705);
   Y__1151->SetBinContent(12,1.000648);
   Y__1151->SetBinContent(13,1);
   Y__1151->SetBinContent(14,0.9080676);
   Y__1151->SetBinContent(15,0.7458107);
   Y__1151->SetBinContent(16,0.5514596);
   Y__1151->SetBinContent(17,0.3715175);
   Y__1151->SetBinContent(18,0.2362166);
   Y__1151->SetBinContent(19,0.1395669);
   Y__1151->SetBinContent(20,0.0742123);
   Y__1151->SetBinContent(21,0.02853684);
   Y__1151->SetBinError(4,0.0002124333);
   Y__1151->SetBinError(5,0.0003440598);
   Y__1151->SetBinError(6,0.0004698779);
   Y__1151->SetBinError(7,0.0006119318);
   Y__1151->SetBinError(8,0.0007694822);
   Y__1151->SetBinError(9,0.0009366657);
   Y__1151->SetBinError(10,0.001087992);
   Y__1151->SetBinError(11,0.001203199);
   Y__1151->SetBinError(12,0.001260893);
   Y__1151->SetBinError(13,0.001260485);
   Y__1151->SetBinError(14,0.001201149);
   Y__1151->SetBinError(15,0.001088559);
   Y__1151->SetBinError(16,0.0009360402);
   Y__1151->SetBinError(17,0.0007682938);
   Y__1151->SetBinError(18,0.0006126224);
   Y__1151->SetBinError(19,0.0004709002);
   Y__1151->SetBinError(20,0.0003433805);
   Y__1151->SetBinError(21,0.0002129318);
   Y__1151->SetEntries(5107343);

   ci = TColor::GetColor("#ff0000");
   Y__1151->SetLineColor(ci);
   Y__1151->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1151->SetMarkerColor(ci);
   Y__1151->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1151->GetXaxis()->CenterTitle(true);
   Y__1151->GetXaxis()->SetLabelFont(42);
   Y__1151->GetXaxis()->SetTitleSize(0.04);
   Y__1151->GetXaxis()->SetTitleOffset(1.1);
   Y__1151->GetXaxis()->SetTitleFont(42);
   Y__1151->GetYaxis()->SetTitle("Decays");
   Y__1151->GetYaxis()->CenterTitle(true);
   Y__1151->GetYaxis()->SetNdivisions(4000510);
   Y__1151->GetYaxis()->SetLabelFont(42);
   Y__1151->GetYaxis()->SetTitleSize(0.04);
   Y__1151->GetYaxis()->SetTitleOffset(1.1);
   Y__1151->GetYaxis()->SetTitleFont(42);
   Y__1151->GetZaxis()->SetLabelFont(42);
   Y__1151->GetZaxis()->SetTitleOffset(1);
   Y__1151->GetZaxis()->SetTitleFont(42);
   Y__1151->Draw("AEsame");
   upper_pad->Modified();
   c->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-81.25,-0.5769231,81.25,1.346154);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3384[18] = {
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
   Double_t _fy3384[18] = {
   0.5320387,
   0.6922491,
   0.7742334,
   0.8342358,
   0.8837265,
   0.9631819,
   0.9885873,
   0.9626467,
   0.9957409,
   1,
   0.9800454,
   0.9516583,
   0.927535,
   0.8608194,
   0.7704683,
   0.7685215,
   0.6374439,
   0.5353064};
   Double_t _felx3384[18] = {
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
   Double_t _fely3384[18] = {
   0.05550867,
   0.03917518,
   0.03035696,
   0.02420611,
   0.01981855,
   0.01700437,
   0.01483311,
   0.01323412,
   0.01284589,
   0.01287777,
   0.01337709,
   0.01454325,
   0.01669501,
   0.01958806,
   0.02322899,
   0.03017826,
   0.0376551,
   0.0555505};
   Double_t _fehx3384[18] = {
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
   Double_t _fehy3384[18] = {
   0.06162925,
   0.04145835,
   0.03157158,
   0.02491904,
   0.02026815,
   0.01730731,
   0.01505739,
   0.01341734,
   0.01301272,
   0.01304471,
   0.01356097,
   0.01476725,
   0.01699829,
   0.02003903,
   0.02394027,
   0.03138758,
   0.03994885,
   0.06164101};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3384,_fy3384,_felx3384,_fehx3384,_fely3384,_fehy3384);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3384 = new TH1F("Graph_Graph3384","",100,-65,65);
   Graph_Graph3384->SetMinimum(0);
   Graph_Graph3384->SetMaximum(1.25);
   Graph_Graph3384->SetDirectory(0);
   Graph_Graph3384->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3384->SetLineColor(ci);
   Graph_Graph3384->GetXaxis()->SetRange(1,100);
   Graph_Graph3384->GetXaxis()->CenterTitle(true);
   Graph_Graph3384->GetXaxis()->SetLabelFont(42);
   Graph_Graph3384->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3384->GetXaxis()->SetTitleFont(42);
   Graph_Graph3384->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3384->GetYaxis()->CenterTitle(true);
   Graph_Graph3384->GetYaxis()->SetLabelFont(42);
   Graph_Graph3384->GetYaxis()->SetTitleFont(42);
   Graph_Graph3384->GetZaxis()->SetLabelFont(42);
   Graph_Graph3384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3384->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3384);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   c->cd();
  
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-65,65,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.063457,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-65,65,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Decay y-position [mm]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.25,510,"-S");
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
   c->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Y","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_Y","Truth vertices","lpf");
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
