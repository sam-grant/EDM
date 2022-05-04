void S12_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07310801,125,1.389052);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__1230 = new TH1D("S12_ThetaY_mI10_mI5__1230","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(311,0.01098901);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(312,0.2893773);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(313,1);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(314,1.076923);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(315,1.087912);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(316,1.003663);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(317,1.007326);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(318,0.9084249);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(319,0.7326007);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(320,0.3076923);
   S12_ThetaY_mI10_mI5__1230->SetBinContent(321,0.03663004);
   S12_ThetaY_mI10_mI5__1230->SetBinError(311,0.006344508);
   S12_ThetaY_mI10_mI5__1230->SetBinError(312,0.03255749);
   S12_ThetaY_mI10_mI5__1230->SetBinError(313,0.06052275);
   S12_ThetaY_mI10_mI5__1230->SetBinError(314,0.06280743);
   S12_ThetaY_mI10_mI5__1230->SetBinError(315,0.06312706);
   S12_ThetaY_mI10_mI5__1230->SetBinError(316,0.0606335);
   S12_ThetaY_mI10_mI5__1230->SetBinError(317,0.06074404);
   S12_ThetaY_mI10_mI5__1230->SetBinError(318,0.05768504);
   S12_ThetaY_mI10_mI5__1230->SetBinError(319,0.05180269);
   S12_ThetaY_mI10_mI5__1230->SetBinError(320,0.03357198);
   S12_ThetaY_mI10_mI5__1230->SetBinError(321,0.01158343);
   S12_ThetaY_mI10_mI5__1230->SetMinimum(0);
   S12_ThetaY_mI10_mI5__1230->SetMaximum(1.242836);
   S12_ThetaY_mI10_mI5__1230->SetEntries(2037);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1230->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__1230->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1230->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__1230->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__1230->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__1230->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1230->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1230->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1230->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__1230->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__1230->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1230->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1230->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1230->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1230->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1230->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1231 = new TH1D("ThetaY_mI10_mI5__1231","",630,-1575,1575);
   ThetaY_mI10_mI5__1231->SetBinContent(309,0.0005313388);
   ThetaY_mI10_mI5__1231->SetBinContent(310,0.164245);
   ThetaY_mI10_mI5__1231->SetBinContent(311,0.5993093);
   ThetaY_mI10_mI5__1231->SetBinContent(312,0.8584391);
   ThetaY_mI10_mI5__1231->SetBinContent(313,1);
   ThetaY_mI10_mI5__1231->SetBinContent(314,1.083686);
   ThetaY_mI10_mI5__1231->SetBinContent(315,1.125886);
   ThetaY_mI10_mI5__1231->SetBinContent(316,1.129851);
   ThetaY_mI10_mI5__1231->SetBinContent(317,1.089428);
   ThetaY_mI10_mI5__1231->SetBinContent(318,1.004639);
   ThetaY_mI10_mI5__1231->SetBinContent(319,0.8493246);
   ThetaY_mI10_mI5__1231->SetBinContent(320,0.5958556);
   ThetaY_mI10_mI5__1231->SetBinContent(321,0.1641224);
   ThetaY_mI10_mI5__1231->SetBinContent(322,0.0007152637);
   ThetaY_mI10_mI5__1231->SetBinError(309,0.0001042041);
   ThetaY_mI10_mI5__1231->SetBinError(310,0.001832083);
   ThetaY_mI10_mI5__1231->SetBinError(311,0.00349965);
   ThetaY_mI10_mI5__1231->SetBinError(312,0.004188455);
   ThetaY_mI10_mI5__1231->SetBinError(313,0.004520631);
   ThetaY_mI10_mI5__1231->SetBinError(314,0.004705988);
   ThetaY_mI10_mI5__1231->SetBinError(315,0.004796742);
   ThetaY_mI10_mI5__1231->SetBinError(316,0.00480518);
   ThetaY_mI10_mI5__1231->SetBinError(317,0.00471844);
   ThetaY_mI10_mI5__1231->SetBinError(318,0.004531105);
   ThetaY_mI10_mI5__1231->SetBinError(319,0.00416616);
   ThetaY_mI10_mI5__1231->SetBinError(320,0.003489551);
   ThetaY_mI10_mI5__1231->SetBinError(321,0.001831399);
   ThetaY_mI10_mI5__1231->SetBinError(322,0.0001209016);
   ThetaY_mI10_mI5__1231->SetEntries(472988);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1231->SetLineColor(ci);
   ThetaY_mI10_mI5__1231->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1231->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1231->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1231->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1231->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1231->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1231->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1231->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1231->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1231->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1231->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1231->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1231->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1231->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1231->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1231->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1231->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1231->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1231->Draw("AEsame");
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
   
   Double_t _fx3411[14] = {
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
   Double_t _fy3411[14] = {
   0,
   0,
   0.01833613,
   0.3370971,
   1,
   0.9937595,
   0.9662716,
   0.8883145,
   0.9246372,
   0.9042302,
   0.8625686,
   0.5163874,
   0.2231873,
   0};
   Double_t _felx3411[14] = {
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
   Double_t _fely3411[14] = {
   0,
   0,
   0.009979536,
   0.03788108,
   0.06065358,
   0.0580841,
   0.05618756,
   0.05376456,
   0.05586686,
   0.05752395,
   0.06108756,
   0.05631013,
   0.06942145,
   0};
   Double_t _fehx3411[14] = {
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
   Double_t _fehy3411[14] = {
   13.15199,
   0.0410633,
   0.01783788,
   0.04239839,
   0.06445026,
   0.06158364,
   0.05955489,
   0.05712247,
   0.05934993,
   0.06130648,
   0.06557654,
   0.06281496,
   0.0953175,
   9.680598};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3411,_fy3411,_felx3411,_fehx3411,_fely3411,_fehy3411);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3411 = new TH1F("Graph_Graph3411","",100,-100,100);
   Graph_Graph3411->SetMinimum(0);
   Graph_Graph3411->SetMaximum(1.5);
   Graph_Graph3411->SetDirectory(0);
   Graph_Graph3411->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3411->SetLineColor(ci);
   Graph_Graph3411->GetXaxis()->SetRange(1,100);
   Graph_Graph3411->GetXaxis()->CenterTitle(true);
   Graph_Graph3411->GetXaxis()->SetLabelFont(42);
   Graph_Graph3411->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3411->GetXaxis()->SetTitleFont(42);
   Graph_Graph3411->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3411->GetYaxis()->CenterTitle(true);
   Graph_Graph3411->GetYaxis()->SetLabelFont(42);
   Graph_Graph3411->GetYaxis()->SetTitleFont(42);
   Graph_Graph3411->GetZaxis()->SetLabelFont(42);
   Graph_Graph3411->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3411->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3411);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.242836,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1232 = new TH2D("ThetaY_vs_Y_mI10_mI5__1232","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8045,26);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8071,8037);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8097,29326);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8123,42006);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8149,48933);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8175,53028);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8201,55093);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8227,55287);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8253,53309);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8279,49160);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8305,41560);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8331,29157);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8357,8031);
   ThetaY_vs_Y_mI10_mI5__1232->SetBinContent(8383,35);
   ThetaY_vs_Y_mI10_mI5__1232->SetEntries(472988);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1232->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1232->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1232->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1232->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1232->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1232->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1232->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1232->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1232->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1232->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1232->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1232->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1232->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1232->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1232->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1232->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
