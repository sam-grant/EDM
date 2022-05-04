void S12S18_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.1332493,125,2.531736);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_35_40__1029 = new TH1D("S12S18_ThetaY_35_40__1029","",630,-1575,1575);
   S12S18_ThetaY_35_40__1029->SetBinContent(308,0.1515152);
   S12S18_ThetaY_35_40__1029->SetBinContent(309,1);
   S12S18_ThetaY_35_40__1029->SetBinContent(310,1.121212);
   S12S18_ThetaY_35_40__1029->SetBinContent(311,1.636364);
   S12S18_ThetaY_35_40__1029->SetBinContent(312,1.242424);
   S12S18_ThetaY_35_40__1029->SetBinContent(313,1.575758);
   S12S18_ThetaY_35_40__1029->SetBinContent(314,1.939394);
   S12S18_ThetaY_35_40__1029->SetBinContent(315,1.515152);
   S12S18_ThetaY_35_40__1029->SetBinContent(316,0.3636364);
   S12S18_ThetaY_35_40__1029->SetBinError(308,0.06775964);
   S12S18_ThetaY_35_40__1029->SetBinError(309,0.1740777);
   S12S18_ThetaY_35_40__1029->SetBinError(310,0.1843261);
   S12S18_ThetaY_35_40__1029->SetBinError(311,0.2226809);
   S12S18_ThetaY_35_40__1029->SetBinError(312,0.1940341);
   S12S18_ThetaY_35_40__1029->SetBinError(313,0.2185183);
   S12S18_ThetaY_35_40__1029->SetBinError(314,0.2424242);
   S12S18_ThetaY_35_40__1029->SetBinError(315,0.2142748);
   S12S18_ThetaY_35_40__1029->SetBinError(316,0.1049728);
   S12S18_ThetaY_35_40__1029->SetMinimum(0);
   S12S18_ThetaY_35_40__1029->SetMaximum(2.265237);
   S12S18_ThetaY_35_40__1029->SetEntries(348);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1029->SetLineColor(ci);
   S12S18_ThetaY_35_40__1029->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1029->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__1029->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__1029->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__1029->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1029->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1029->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1029->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__1029->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__1029->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1029->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1029->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1029->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1029->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1029->Draw("AE");
   
   TH1D *ThetaY_35_40__1030 = new TH1D("ThetaY_35_40__1030","",630,-1575,1575);
   ThetaY_35_40__1030->SetBinContent(307,0.01505474);
   ThetaY_35_40__1030->SetBinContent(308,0.3453467);
   ThetaY_35_40__1030->SetBinContent(309,1);
   ThetaY_35_40__1030->SetBinContent(310,1.415146);
   ThetaY_35_40__1030->SetBinContent(311,1.655566);
   ThetaY_35_40__1030->SetBinContent(312,1.854927);
   ThetaY_35_40__1030->SetBinContent(313,1.985401);
   ThetaY_35_40__1030->SetBinContent(314,2.059307);
   ThetaY_35_40__1030->SetBinContent(315,2.031022);
   ThetaY_35_40__1030->SetBinContent(316,2.050639);
   ThetaY_35_40__1030->SetBinContent(317,2.002737);
   ThetaY_35_40__1030->SetBinContent(318,1.974453);
   ThetaY_35_40__1030->SetBinContent(319,1.876369);
   ThetaY_35_40__1030->SetBinContent(320,1.749088);
   ThetaY_35_40__1030->SetBinContent(321,1.400547);
   ThetaY_35_40__1030->SetBinContent(322,1.023723);
   ThetaY_35_40__1030->SetBinContent(323,0.3800182);
   ThetaY_35_40__1030->SetBinContent(324,0.009580292);
   ThetaY_35_40__1030->SetBinError(307,0.002620695);
   ThetaY_35_40__1030->SetBinError(308,0.01255184);
   ThetaY_35_40__1030->SetBinError(309,0.02135894);
   ThetaY_35_40__1030->SetBinError(310,0.02540858);
   ThetaY_35_40__1030->SetBinError(311,0.02748229);
   ThetaY_35_40__1030->SetBinError(312,0.02908996);
   ThetaY_35_40__1030->SetBinError(313,0.03009566);
   ThetaY_35_40__1030->SetBinError(314,0.03065069);
   ThetaY_35_40__1030->SetBinError(315,0.03043947);
   ThetaY_35_40__1030->SetBinError(316,0.03058611);
   ThetaY_35_40__1030->SetBinError(317,0.03022677);
   ThetaY_35_40__1030->SetBinError(318,0.03001256);
   ThetaY_35_40__1030->SetBinError(319,0.02925761);
   ThetaY_35_40__1030->SetBinError(320,0.02824786);
   ThetaY_35_40__1030->SetBinError(321,0.02527718);
   ThetaY_35_40__1030->SetBinError(322,0.0216108);
   ThetaY_35_40__1030->SetBinError(323,0.01316685);
   ThetaY_35_40__1030->SetBinError(324,0.002090591);
   ThetaY_35_40__1030->SetEntries(54425);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1030->SetLineColor(ci);
   ThetaY_35_40__1030->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1030->SetMarkerColor(ci);
   ThetaY_35_40__1030->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1030->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1030->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1030->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1030->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1030->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1030->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1030->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1030->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1030->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1030->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1030->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1030->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1030->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1030->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1030->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1030->Draw("AEsame");
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
   
   Double_t _fx3344[18] = {
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
   Double_t _fy3344[18] = {
   0,
   0.4387334,
   1,
   0.7922943,
   0.9884015,
   0.6697968,
   0.793672,
   0.9417704,
   0.7460045,
   0.1773283,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3344[18] = {
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
   Double_t _fely3344[18] = {
   0,
   0.1900244,
   0.1744522,
   0.130412,
   0.1350627,
   0.1046879,
   0.1103487,
   0.1182297,
   0.1057244,
   0.05053087,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3344[18] = {
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
   Double_t _fehy3344[18] = {
   3.811029,
   0.2984443,
   0.2080055,
   0.1539243,
   0.1549561,
   0.1225162,
   0.1269019,
   0.1341236,
   0.1219137,
   0.06750619,
   0.02786198,
   0.0282612,
   0.02973884,
   0.03190345,
   0.03984532,
   0.05451811,
   0.1469672,
   6.086142};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3344,_fy3344,_felx3344,_fehx3344,_fely3344,_fehy3344);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3344 = new TH1F("Graph_Graph3344","",100,-100,100);
   Graph_Graph3344->SetMinimum(0);
   Graph_Graph3344->SetMaximum(1.5);
   Graph_Graph3344->SetDirectory(0);
   Graph_Graph3344->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3344->SetLineColor(ci);
   Graph_Graph3344->GetXaxis()->SetRange(1,100);
   Graph_Graph3344->GetXaxis()->CenterTitle(true);
   Graph_Graph3344->GetXaxis()->SetLabelFont(42);
   Graph_Graph3344->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3344->GetXaxis()->SetTitleFont(42);
   Graph_Graph3344->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3344->GetYaxis()->CenterTitle(true);
   Graph_Graph3344->GetYaxis()->SetLabelFont(42);
   Graph_Graph3344->GetYaxis()->SetTitleFont(42);
   Graph_Graph3344->GetZaxis()->SetLabelFont(42);
   Graph_Graph3344->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3344->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3344);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.265237,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1031 = new TH2D("ThetaY_vs_Y_35_40__1031","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8002,33);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8028,757);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8054,2192);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8080,3102);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8106,3629);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8132,4066);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8158,4352);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8184,4514);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8210,4452);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8236,4495);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8262,4390);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8288,4328);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8314,4113);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8340,3834);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8366,3070);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8392,2244);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8418,833);
   ThetaY_vs_Y_35_40__1031->SetBinContent(8444,21);
   ThetaY_vs_Y_35_40__1031->SetEntries(54425);
   ThetaY_vs_Y_35_40__1031->SetContour(20);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(1,225.7);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(2,451.4);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(3,677.1);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(4,902.8);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(5,1128.5);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(6,1354.2);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(7,1579.9);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(8,1805.6);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(9,2031.3);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(10,2257);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(11,2482.7);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(12,2708.4);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(13,2934.1);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(14,3159.8);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(15,3385.5);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(16,3611.2);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(17,3836.9);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(18,4062.6);
   ThetaY_vs_Y_35_40__1031->SetContourLevel(19,4288.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1031->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1031->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1031->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1031->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1031->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1031->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1031->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1031->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1031->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1031->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1031->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1031->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1031->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1031->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1031->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1031->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
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
