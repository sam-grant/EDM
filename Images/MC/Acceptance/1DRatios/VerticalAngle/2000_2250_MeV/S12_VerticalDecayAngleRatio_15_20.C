void S12_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07775208,125,1.47729);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__1416 = new TH1D("S12_ThetaY_15_20__1416","",630,-1575,1575);
   S12_ThetaY_15_20__1416->SetBinContent(311,0.1370968);
   S12_ThetaY_15_20__1416->SetBinContent(312,0.6370968);
   S12_ThetaY_15_20__1416->SetBinContent(313,1);
   S12_ThetaY_15_20__1416->SetBinContent(314,1.120968);
   S12_ThetaY_15_20__1416->SetBinContent(315,0.9758065);
   S12_ThetaY_15_20__1416->SetBinContent(316,0.9919355);
   S12_ThetaY_15_20__1416->SetBinContent(317,0.9919355);
   S12_ThetaY_15_20__1416->SetBinContent(318,0.05645161);
   S12_ThetaY_15_20__1416->SetBinError(311,0.03325085);
   S12_ThetaY_15_20__1416->SetBinError(312,0.07167899);
   S12_ThetaY_15_20__1416->SetBinError(313,0.08980265);
   S12_ThetaY_15_20__1416->SetBinError(314,0.09507924);
   S12_ThetaY_15_20__1416->SetBinError(315,0.08870968);
   S12_ThetaY_15_20__1416->SetBinError(316,0.08943981);
   S12_ThetaY_15_20__1416->SetBinError(317,0.08943981);
   S12_ThetaY_15_20__1416->SetBinError(318,0.0213367);
   S12_ThetaY_15_20__1416->SetMinimum(0);
   S12_ThetaY_15_20__1416->SetMaximum(1.321785);
   S12_ThetaY_15_20__1416->SetEntries(733);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1416->SetLineColor(ci);
   S12_ThetaY_15_20__1416->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1416->SetMarkerColor(ci);
   S12_ThetaY_15_20__1416->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__1416->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__1416->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1416->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1416->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1416->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__1416->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__1416->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1416->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1416->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1416->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1416->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1416->Draw("AE");
   
   TH1D *ThetaY_15_20__1417 = new TH1D("ThetaY_15_20__1417","",630,-1575,1575);
   ThetaY_15_20__1417->SetBinContent(310,0.002362175);
   ThetaY_15_20__1417->SetBinContent(311,0.2424658);
   ThetaY_15_20__1417->SetBinContent(312,0.7320075);
   ThetaY_15_20__1417->SetBinContent(313,1);
   ThetaY_15_20__1417->SetBinContent(314,1.13853);
   ThetaY_15_20__1417->SetBinContent(315,1.201623);
   ThetaY_15_20__1417->SetBinContent(316,1.193965);
   ThetaY_15_20__1417->SetBinContent(317,1.14314);
   ThetaY_15_20__1417->SetBinContent(318,1.00381);
   ThetaY_15_20__1417->SetBinContent(319,0.7224826);
   ThetaY_15_20__1417->SetBinContent(320,0.2415895);
   ThetaY_15_20__1417->SetBinContent(321,0.001714482);
   ThetaY_15_20__1417->SetBinError(310,0.0002999965);
   ThetaY_15_20__1417->SetBinError(311,0.003039383);
   ThetaY_15_20__1417->SetBinError(312,0.005281021);
   ThetaY_15_20__1417->SetBinError(313,0.006172487);
   ThetaY_15_20__1417->SetBinError(314,0.006586162);
   ThetaY_15_20__1417->SetBinError(315,0.006766192);
   ThetaY_15_20__1417->SetBinError(316,0.006744596);
   ThetaY_15_20__1417->SetBinError(317,0.006599483);
   ThetaY_15_20__1417->SetBinError(318,0.006184234);
   ThetaY_15_20__1417->SetBinError(319,0.00524655);
   ThetaY_15_20__1417->SetBinError(320,0.003033886);
   ThetaY_15_20__1417->SetBinError(321,0.0002555798);
   ThetaY_15_20__1417->SetEntries(226346);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1417->SetLineColor(ci);
   ThetaY_15_20__1417->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1417->SetMarkerColor(ci);
   ThetaY_15_20__1417->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1417->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1417->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1417->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1417->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1417->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1417->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1417->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1417->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1417->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1417->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1417->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1417->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1417->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1417->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1417->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1417->Draw("AEsame");
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
   
   Double_t _fx3473[12] = {
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
   27.5};
   Double_t _fy3473[12] = {
   0,
   0.5654273,
   0.8703419,
   1,
   0.9845745,
   0.8120737,
   0.8307911,
   0.8677287,
   0.05623735,
   0,
   0,
   0};
   Double_t _felx3473[12] = {
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
   Double_t _fely3473[12] = {
   0,
   0.1359466,
   0.09791166,
   0.08989137,
   0.0836024,
   0.07386291,
   0.07495348,
   0.07829272,
   0.02074171,
   0,
   0,
   0};
   Double_t _fehx3473[12] = {
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
   Double_t _fehy3473[12] = {
   6.379536,
   0.1733798,
   0.1096044,
   0.09836303,
   0.09102465,
   0.08090993,
   0.08204385,
   0.08569976,
   0.03029628,
   0.0205509,
   0.06146419,
   8.839313};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3473,_fy3473,_felx3473,_fehx3473,_fely3473,_fehy3473);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3473 = new TH1F("Graph_Graph3473","",100,-100,100);
   Graph_Graph3473->SetMinimum(0);
   Graph_Graph3473->SetMaximum(1.5);
   Graph_Graph3473->SetDirectory(0);
   Graph_Graph3473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3473->SetLineColor(ci);
   Graph_Graph3473->GetXaxis()->SetRange(1,100);
   Graph_Graph3473->GetXaxis()->CenterTitle(true);
   Graph_Graph3473->GetXaxis()->SetLabelFont(42);
   Graph_Graph3473->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3473->GetXaxis()->SetTitleFont(42);
   Graph_Graph3473->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3473->GetYaxis()->CenterTitle(true);
   Graph_Graph3473->GetYaxis()->SetLabelFont(42);
   Graph_Graph3473->GetYaxis()->SetTitleFont(42);
   Graph_Graph3473->GetZaxis()->SetLabelFont(42);
   Graph_Graph3473->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3473->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3473);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.321785,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1418 = new TH2D("ThetaY_vs_Y_15_20__1418","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8076,62);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8102,6364);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8128,19213);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8154,26247);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8180,29883);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8206,31539);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8232,31338);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8258,30004);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8284,26347);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8310,18963);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8336,6341);
   ThetaY_vs_Y_15_20__1418->SetBinContent(8362,45);
   ThetaY_vs_Y_15_20__1418->SetEntries(226346);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1418->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1418->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1418->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1418->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1418->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1418->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1418->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1418->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1418->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1418->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1418->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1418->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1418->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1418->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1418->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1418->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
