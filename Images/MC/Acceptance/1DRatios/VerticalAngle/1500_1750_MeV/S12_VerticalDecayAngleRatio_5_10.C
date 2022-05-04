void S12_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:55 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06550589,125,1.244612);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__1068 = new TH1D("S12_ThetaY_5_10__1068","",630,-1575,1575);
   S12_ThetaY_5_10__1068->SetBinContent(309,0.02425876);
   S12_ThetaY_5_10__1068->SetBinContent(310,0.2210243);
   S12_ThetaY_5_10__1068->SetBinContent(311,0.5849057);
   S12_ThetaY_5_10__1068->SetBinContent(312,0.7762803);
   S12_ThetaY_5_10__1068->SetBinContent(313,0.8328841);
   S12_ThetaY_5_10__1068->SetBinContent(314,0.8301887);
   S12_ThetaY_5_10__1068->SetBinContent(315,1);
   S12_ThetaY_5_10__1068->SetBinContent(316,0.9649596);
   S12_ThetaY_5_10__1068->SetBinContent(317,0.9407008);
   S12_ThetaY_5_10__1068->SetBinContent(318,0.8355795);
   S12_ThetaY_5_10__1068->SetBinContent(319,0.4420485);
   S12_ThetaY_5_10__1068->SetBinContent(320,0.03773585);
   S12_ThetaY_5_10__1068->SetBinError(309,0.008086253);
   S12_ThetaY_5_10__1068->SetBinError(310,0.02440805);
   S12_ThetaY_5_10__1068->SetBinError(311,0.03970598);
   S12_ThetaY_5_10__1068->SetBinError(312,0.04574276);
   S12_ThetaY_5_10__1068->SetBinError(313,0.04738112);
   S12_ThetaY_5_10__1068->SetBinError(314,0.04730439);
   S12_ThetaY_5_10__1068->SetBinError(315,0.05191741);
   S12_ThetaY_5_10__1068->SetBinError(316,0.0509997);
   S12_ThetaY_5_10__1068->SetBinError(317,0.05035456);
   S12_ThetaY_5_10__1068->SetBinError(318,0.04745773);
   S12_ThetaY_5_10__1068->SetBinError(319,0.03451819);
   S12_ThetaY_5_10__1068->SetBinError(320,0.01008533);
   S12_ThetaY_5_10__1068->SetMinimum(0);
   S12_ThetaY_5_10__1068->SetMaximum(1.1136);
   S12_ThetaY_5_10__1068->SetEntries(2779);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1068->SetLineColor(ci);
   S12_ThetaY_5_10__1068->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1068->SetMarkerColor(ci);
   S12_ThetaY_5_10__1068->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__1068->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__1068->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1068->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1068->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1068->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__1068->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__1068->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1068->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1068->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1068->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1068->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1068->Draw("AE");
   
   TH1D *ThetaY_5_10__1069 = new TH1D("ThetaY_5_10__1069","",630,-1575,1575);
   ThetaY_5_10__1069->SetBinContent(308,0.0007547577);
   ThetaY_5_10__1069->SetBinContent(309,0.1364314);
   ThetaY_5_10__1069->SetBinContent(310,0.4961993);
   ThetaY_5_10__1069->SetBinContent(311,0.7170737);
   ThetaY_5_10__1069->SetBinContent(312,0.8577821);
   ThetaY_5_10__1069->SetBinContent(313,0.9304545);
   ThetaY_5_10__1069->SetBinContent(314,0.982964);
   ThetaY_5_10__1069->SetBinContent(315,1);
   ThetaY_5_10__1069->SetBinContent(316,1.012364);
   ThetaY_5_10__1069->SetBinContent(317,0.9910328);
   ThetaY_5_10__1069->SetBinContent(318,0.9365105);
   ThetaY_5_10__1069->SetBinContent(319,0.8529121);
   ThetaY_5_10__1069->SetBinContent(320,0.7237946);
   ThetaY_5_10__1069->SetBinContent(321,0.4982838);
   ThetaY_5_10__1069->SetBinContent(322,0.1333765);
   ThetaY_5_10__1069->SetBinContent(323,0.0007906985);
   ThetaY_5_10__1069->SetBinError(308,0.0001164616);
   ThetaY_5_10__1069->SetBinError(309,0.0015658);
   ThetaY_5_10__1069->SetBinError(310,0.002986119);
   ThetaY_5_10__1069->SetBinError(311,0.003589724);
   ThetaY_5_10__1069->SetBinError(312,0.003926157);
   ThetaY_5_10__1069->SetBinError(313,0.00408909);
   ThetaY_5_10__1069->SetBinError(314,0.004202889);
   ThetaY_5_10__1069->SetBinError(315,0.004239153);
   ThetaY_5_10__1069->SetBinError(316,0.004265278);
   ThetaY_5_10__1069->SetBinError(317,0.004220104);
   ThetaY_5_10__1069->SetBinError(318,0.004102376);
   ThetaY_5_10__1069->SetBinError(319,0.003914995);
   ThetaY_5_10__1069->SetBinError(320,0.003606507);
   ThetaY_5_10__1069->SetBinError(321,0.002992385);
   ThetaY_5_10__1069->SetBinError(322,0.00154817);
   ThetaY_5_10__1069->SetBinError(323,0.0001192023);
   ThetaY_5_10__1069->SetEntries(571535);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1069->SetLineColor(ci);
   ThetaY_5_10__1069->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1069->SetMarkerColor(ci);
   ThetaY_5_10__1069->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1069->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1069->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1069->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1069->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1069->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1069->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1069->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1069->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1069->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1069->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1069->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1069->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1069->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1069->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1069->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1069->Draw("AEsame");
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
   
   Double_t _fx3357[16] = {
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
   Double_t _fy3357[16] = {
   0,
   0.1778092,
   0.4454345,
   0.8156842,
   0.9049855,
   0.8951369,
   0.8445769,
   1,
   0.9531748,
   0.9492126,
   0.8922265,
   0.5182814,
   0.05213613,
   0,
   0,
   0};
   Double_t _felx3357[16] = {
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
   Double_t _fely3357[16] = {
   0,
   0.05818377,
   0.04916149,
   0.05547915,
   0.05345583,
   0.05104618,
   0.04823292,
   0.05206628,
   0.05051265,
   0.05094585,
   0.05079768,
   0.04049908,
   0.01376804,
   0,
   0,
   0};
   Double_t _fehx3357[16] = {
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
   Double_t _fehy3357[16] = {
   6.720949,
   0.08127366,
   0.05491362,
   0.0593888,
   0.05671182,
   0.05404463,
   0.0510703,
   0.0548514,
   0.05326412,
   0.05375741,
   0.05377655,
   0.0437954,
   0.01799259,
   0.009959158,
   0.03721,
   6.409018};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3357,_fy3357,_felx3357,_fehx3357,_fely3357,_fehy3357);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3357 = new TH1F("Graph_Graph3357","",100,-100,100);
   Graph_Graph3357->SetMinimum(0);
   Graph_Graph3357->SetMaximum(1.5);
   Graph_Graph3357->SetDirectory(0);
   Graph_Graph3357->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3357->SetLineColor(ci);
   Graph_Graph3357->GetXaxis()->SetRange(1,100);
   Graph_Graph3357->GetXaxis()->CenterTitle(true);
   Graph_Graph3357->GetXaxis()->SetLabelFont(42);
   Graph_Graph3357->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3357->GetXaxis()->SetTitleFont(42);
   Graph_Graph3357->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3357->GetYaxis()->CenterTitle(true);
   Graph_Graph3357->GetYaxis()->SetLabelFont(42);
   Graph_Graph3357->GetYaxis()->SetTitleFont(42);
   Graph_Graph3357->GetZaxis()->SetLabelFont(42);
   Graph_Graph3357->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3357->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3357);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1136,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1070 = new TH2D("ThetaY_vs_Y_5_10__1070","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8022,42);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8048,7592);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8074,27612);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8100,39903);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8126,47733);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8152,51777);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8178,54699);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8204,55647);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8230,56335);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8256,55148);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8282,52114);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8308,47462);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8334,40277);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8360,27728);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8386,7422);
   ThetaY_vs_Y_5_10__1070->SetBinContent(8412,44);
   ThetaY_vs_Y_5_10__1070->SetEntries(571535);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1070->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1070->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1070->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1070->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1070->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1070->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1070->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1070->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1070->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1070->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1070->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1070->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1070->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1070->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1070->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1070->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
