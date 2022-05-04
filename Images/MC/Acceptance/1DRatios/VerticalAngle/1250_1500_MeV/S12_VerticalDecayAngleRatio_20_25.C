void S12_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-10.61605,125,201.7049);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__906 = new TH1D("S12_ThetaY_20_25__906","",630,-1575,1575);
   S12_ThetaY_20_25__906->SetBinContent(307,1);
   S12_ThetaY_20_25__906->SetBinContent(308,9);
   S12_ThetaY_20_25__906->SetBinContent(309,39.5);
   S12_ThetaY_20_25__906->SetBinContent(310,57.5);
   S12_ThetaY_20_25__906->SetBinContent(311,57);
   S12_ThetaY_20_25__906->SetBinContent(312,75.5);
   S12_ThetaY_20_25__906->SetBinContent(313,66.5);
   S12_ThetaY_20_25__906->SetBinContent(314,64);
   S12_ThetaY_20_25__906->SetBinContent(315,77);
   S12_ThetaY_20_25__906->SetBinContent(316,68);
   S12_ThetaY_20_25__906->SetBinContent(317,56);
   S12_ThetaY_20_25__906->SetBinContent(318,18.5);
   S12_ThetaY_20_25__906->SetBinContent(319,0.5);
   S12_ThetaY_20_25__906->SetBinError(307,0.7071068);
   S12_ThetaY_20_25__906->SetBinError(308,2.12132);
   S12_ThetaY_20_25__906->SetBinError(309,4.444097);
   S12_ThetaY_20_25__906->SetBinError(310,5.361903);
   S12_ThetaY_20_25__906->SetBinError(311,5.338539);
   S12_ThetaY_20_25__906->SetBinError(312,6.144103);
   S12_ThetaY_20_25__906->SetBinError(313,5.766281);
   S12_ThetaY_20_25__906->SetBinError(314,5.656854);
   S12_ThetaY_20_25__906->SetBinError(315,6.204837);
   S12_ThetaY_20_25__906->SetBinError(316,5.830952);
   S12_ThetaY_20_25__906->SetBinError(317,5.291503);
   S12_ThetaY_20_25__906->SetBinError(318,3.041381);
   S12_ThetaY_20_25__906->SetBinError(319,0.5);
   S12_ThetaY_20_25__906->SetMinimum(0);
   S12_ThetaY_20_25__906->SetMaximum(180.4728);
   S12_ThetaY_20_25__906->SetEntries(1180);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__906->SetLineColor(ci);
   S12_ThetaY_20_25__906->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__906->SetMarkerColor(ci);
   S12_ThetaY_20_25__906->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__906->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__906->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__906->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__906->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__906->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__906->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__906->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__906->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__906->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__906->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__906->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__906->Draw("AE");
   
   TH1D *ThetaY_20_25__907 = new TH1D("ThetaY_20_25__907","",630,-1575,1575);
   ThetaY_20_25__907->SetBinContent(307,1);
   ThetaY_20_25__907->SetBinContent(308,29.16912);
   ThetaY_20_25__907->SetBinContent(309,82.45588);
   ThetaY_20_25__907->SetBinContent(310,117.5074);
   ThetaY_20_25__907->SetBinContent(311,136.9926);
   ThetaY_20_25__907->SetBinContent(312,149.3529);
   ThetaY_20_25__907->SetBinContent(313,159.3603);
   ThetaY_20_25__907->SetBinContent(314,160.2868);
   ThetaY_20_25__907->SetBinContent(315,163.7647);
   ThetaY_20_25__907->SetBinContent(316,164.0662);
   ThetaY_20_25__907->SetBinContent(317,162.2206);
   ThetaY_20_25__907->SetBinContent(318,155.5882);
   ThetaY_20_25__907->SetBinContent(319,151.0074);
   ThetaY_20_25__907->SetBinContent(320,138.0441);
   ThetaY_20_25__907->SetBinContent(321,116.0147);
   ThetaY_20_25__907->SetBinContent(322,82.73529);
   ThetaY_20_25__907->SetBinContent(323,29.35294);
   ThetaY_20_25__907->SetBinContent(324,0.9044118);
   ThetaY_20_25__907->SetBinError(307,0.08574929);
   ThetaY_20_25__907->SetBinError(308,0.4631186);
   ThetaY_20_25__907->SetBinError(309,0.7786483);
   ThetaY_20_25__907->SetBinError(310,0.9295293);
   ThetaY_20_25__907->SetBinError(311,1.003643);
   ThetaY_20_25__907->SetBinError(312,1.047942);
   ThetaY_20_25__907->SetBinError(313,1.082482);
   ThetaY_20_25__907->SetBinError(314,1.085624);
   ThetaY_20_25__907->SetBinError(315,1.097339);
   ThetaY_20_25__907->SetBinError(316,1.098348);
   ThetaY_20_25__907->SetBinError(317,1.092153);
   ThetaY_20_25__907->SetBinError(318,1.069594);
   ThetaY_20_25__907->SetBinError(319,1.053731);
   ThetaY_20_25__907->SetBinError(320,1.007487);
   ThetaY_20_25__907->SetBinError(321,0.9236067);
   ThetaY_20_25__907->SetBinError(322,0.7799665);
   ThetaY_20_25__907->SetBinError(323,0.4645756);
   ThetaY_20_25__907->SetBinError(324,0.08154806);
   ThetaY_20_25__907->SetEntries(271976);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__907->SetLineColor(ci);
   ThetaY_20_25__907->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__907->SetMarkerColor(ci);
   ThetaY_20_25__907->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__907->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__907->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__907->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__907->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__907->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__907->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__907->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__907->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__907->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__907->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__907->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__907->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__907->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__907->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__907->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__907->Draw("AEsame");
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
   
   Double_t _fx3303[18] = {
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
   Double_t _fy3303[18] = {
   1,
   0.3085455,
   0.4790441,
   0.4893311,
   0.4160807,
   0.505514,
   0.4172934,
   0.3992844,
   0.4701868,
   0.4144669,
   0.345209,
   0.1189036,
   0.003311097,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3303[18] = {
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
   Double_t _fely3303[18] = {
   0.6488638,
   0.07219832,
   0.05396914,
   0.0457262,
   0.03903016,
   0.04124403,
   0.0362483,
   0.03534848,
   0.03797736,
   0.03560375,
   0.03265228,
   0.01947544,
   0.002739118,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3303[18] = {
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
   Double_t _fehy3303[18] = {
   1.341503,
   0.09147756,
   0.06042642,
   0.05021586,
   0.04287739,
   0.04475684,
   0.03954442,
   0.03862728,
   0.04117796,
   0.03880368,
   0.03589876,
   0.02296124,
   0.007614567,
   0.006668563,
   0.007934895,
   0.01112689,
   0.03136732,
   1.025456};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3303,_fy3303,_felx3303,_fehx3303,_fely3303,_fehy3303);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3303 = new TH1F("Graph_Graph3303","",100,-100,100);
   Graph_Graph3303->SetMinimum(0);
   Graph_Graph3303->SetMaximum(1.5);
   Graph_Graph3303->SetDirectory(0);
   Graph_Graph3303->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3303->SetLineColor(ci);
   Graph_Graph3303->GetXaxis()->SetRange(1,100);
   Graph_Graph3303->GetXaxis()->CenterTitle(true);
   Graph_Graph3303->GetXaxis()->SetLabelFont(42);
   Graph_Graph3303->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3303->GetXaxis()->SetTitleFont(42);
   Graph_Graph3303->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3303->GetYaxis()->CenterTitle(true);
   Graph_Graph3303->GetYaxis()->SetLabelFont(42);
   Graph_Graph3303->GetYaxis()->SetTitleFont(42);
   Graph_Graph3303->GetZaxis()->SetLabelFont(42);
   Graph_Graph3303->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3303->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3303);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,180.4728,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__908 = new TH2D("ThetaY_vs_Y_20_25__908","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__908->SetBinContent(7999,136);
   ThetaY_vs_Y_20_25__908->SetBinContent(8025,3967);
   ThetaY_vs_Y_20_25__908->SetBinContent(8051,11214);
   ThetaY_vs_Y_20_25__908->SetBinContent(8077,15981);
   ThetaY_vs_Y_20_25__908->SetBinContent(8103,18631);
   ThetaY_vs_Y_20_25__908->SetBinContent(8129,20312);
   ThetaY_vs_Y_20_25__908->SetBinContent(8155,21673);
   ThetaY_vs_Y_20_25__908->SetBinContent(8181,21799);
   ThetaY_vs_Y_20_25__908->SetBinContent(8207,22272);
   ThetaY_vs_Y_20_25__908->SetBinContent(8233,22313);
   ThetaY_vs_Y_20_25__908->SetBinContent(8259,22062);
   ThetaY_vs_Y_20_25__908->SetBinContent(8285,21160);
   ThetaY_vs_Y_20_25__908->SetBinContent(8311,20537);
   ThetaY_vs_Y_20_25__908->SetBinContent(8337,18774);
   ThetaY_vs_Y_20_25__908->SetBinContent(8363,15778);
   ThetaY_vs_Y_20_25__908->SetBinContent(8389,11252);
   ThetaY_vs_Y_20_25__908->SetBinContent(8415,3992);
   ThetaY_vs_Y_20_25__908->SetBinContent(8441,123);
   ThetaY_vs_Y_20_25__908->SetEntries(271976);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__908->SetLineColor(ci);
   ThetaY_vs_Y_20_25__908->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__908->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__908->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__908->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__908->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__908->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__908->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__908->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__908->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__908->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__908->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__908->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__908->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__908->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__908->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_20_25","Reco vertices","lpf");
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
