void S12_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.0660483,125,1.254918);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__1062 = new TH1D("S12_ThetaY_mI5_0__1062","",630,-1575,1575);
   S12_ThetaY_mI5_0__1062->SetBinContent(310,0.01724138);
   S12_ThetaY_mI5_0__1062->SetBinContent(311,0.2610837);
   S12_ThetaY_mI5_0__1062->SetBinContent(312,0.6108374);
   S12_ThetaY_mI5_0__1062->SetBinContent(313,0.9064039);
   S12_ThetaY_mI5_0__1062->SetBinContent(314,0.8891626);
   S12_ThetaY_mI5_0__1062->SetBinContent(315,1.019704);
   S12_ThetaY_mI5_0__1062->SetBinContent(316,0.9679803);
   S12_ThetaY_mI5_0__1062->SetBinContent(317,1);
   S12_ThetaY_mI5_0__1062->SetBinContent(318,0.8078818);
   S12_ThetaY_mI5_0__1062->SetBinContent(319,0.7536946);
   S12_ThetaY_mI5_0__1062->SetBinContent(320,0.3768473);
   S12_ThetaY_mI5_0__1062->SetBinContent(321,0.06403941);
   S12_ThetaY_mI5_0__1062->SetBinContent(322,0.002463054);
   S12_ThetaY_mI5_0__1062->SetBinError(310,0.006516629);
   S12_ThetaY_mI5_0__1062->SetBinError(311,0.02535869);
   S12_ThetaY_mI5_0__1062->SetBinError(312,0.03878822);
   S12_ThetaY_mI5_0__1062->SetBinError(313,0.04724957);
   S12_ThetaY_mI5_0__1062->SetBinError(314,0.04679803);
   S12_ThetaY_mI5_0__1062->SetBinError(315,0.05011574);
   S12_ThetaY_mI5_0__1062->SetBinError(316,0.04882815);
   S12_ThetaY_mI5_0__1062->SetBinError(317,0.04962917);
   S12_ThetaY_mI5_0__1062->SetBinError(318,0.04460781);
   S12_ThetaY_mI5_0__1062->SetBinError(319,0.04308585);
   S12_ThetaY_mI5_0__1062->SetBinError(320,0.0304663);
   S12_ThetaY_mI5_0__1062->SetBinError(321,0.01255916);
   S12_ThetaY_mI5_0__1062->SetBinError(322,0.002463054);
   S12_ThetaY_mI5_0__1062->SetMinimum(0);
   S12_ThetaY_mI5_0__1062->SetMaximum(1.122821);
   S12_ThetaY_mI5_0__1062->SetEntries(3117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1062->SetLineColor(ci);
   S12_ThetaY_mI5_0__1062->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1062->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__1062->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__1062->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__1062->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1062->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1062->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1062->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__1062->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__1062->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1062->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1062->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1062->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1062->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1062->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1063 = new TH1D("ThetaY_mI5_0__1063","",630,-1575,1575);
   ThetaY_mI5_0__1063->SetBinContent(308,0.001125902);
   ThetaY_mI5_0__1063->SetBinContent(309,0.1401583);
   ThetaY_mI5_0__1063->SetBinContent(310,0.5029307);
   ThetaY_mI5_0__1063->SetBinContent(311,0.7345188);
   ThetaY_mI5_0__1063->SetBinContent(312,0.8721439);
   ThetaY_mI5_0__1063->SetBinContent(313,0.9544837);
   ThetaY_mI5_0__1063->SetBinContent(314,0.999851);
   ThetaY_mI5_0__1063->SetBinContent(315,1.020746);
   ThetaY_mI5_0__1063->SetBinContent(316,1.017667);
   ThetaY_mI5_0__1063->SetBinContent(317,1);
   ThetaY_mI5_0__1063->SetBinContent(318,0.9510067);
   ThetaY_mI5_0__1063->SetBinContent(319,0.8669117);
   ThetaY_mI5_0__1063->SetBinContent(320,0.7294523);
   ThetaY_mI5_0__1063->SetBinContent(321,0.5020697);
   ThetaY_mI5_0__1063->SetBinContent(322,0.1339989);
   ThetaY_mI5_0__1063->SetBinContent(323,0.0008609842);
   ThetaY_mI5_0__1063->SetBinError(308,0.0001365357);
   ThetaY_mI5_0__1063->SetBinError(309,0.00152337);
   ThetaY_mI5_0__1063->SetBinError(310,0.002885692);
   ThetaY_mI5_0__1063->SetBinError(311,0.003487365);
   ThetaY_mI5_0__1063->SetBinError(312,0.003800056);
   ThetaY_mI5_0__1063->SetBinError(313,0.003975394);
   ThetaY_mI5_0__1063->SetBinError(314,0.004068774);
   ThetaY_mI5_0__1063->SetBinError(315,0.00411107);
   ThetaY_mI5_0__1063->SetBinError(316,0.004104863);
   ThetaY_mI5_0__1063->SetBinError(317,0.004069077);
   ThetaY_mI5_0__1063->SetBinError(318,0.003968147);
   ThetaY_mI5_0__1063->SetBinError(319,0.00378864);
   ThetaY_mI5_0__1063->SetBinError(320,0.003475316);
   ThetaY_mI5_0__1063->SetBinError(321,0.002883221);
   ThetaY_mI5_0__1063->SetBinError(322,0.001489521);
   ThetaY_mI5_0__1063->SetBinError(323,0.000119397);
   ThetaY_mI5_0__1063->SetEntries(629805);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1063->SetLineColor(ci);
   ThetaY_mI5_0__1063->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1063->SetMarkerColor(ci);
   ThetaY_mI5_0__1063->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1063->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1063->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1063->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1063->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1063->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1063->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1063->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1063->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1063->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1063->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1063->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1063->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1063->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1063->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1063->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1063->Draw("AEsame");
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
   
   Double_t _fx3355[16] = {
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
   Double_t _fy3355[16] = {
   0,
   0,
   0.03428182,
   0.3554487,
   0.7003861,
   0.9496274,
   0.8892951,
   0.9989792,
   0.9511761,
   1,
   0.8495017,
   0.8694018,
   0.5166168,
   0.1275508,
   0.01838115,
   0};
   Double_t _felx3355[16] = {
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
   Double_t _fely3355[16] = {
   0,
   0,
   0.01264378,
   0.03451048,
   0.04454868,
   0.04963754,
   0.04692259,
   0.04924146,
   0.04811279,
   0.0497748,
   0.04701526,
   0.04981773,
   0.04179224,
   0.02486313,
   0.01520609,
   0};
   Double_t _fehx3355[16] = {
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
   Double_t _fehy3355[16] = {
   4.082483,
   0.03235648,
   0.01846786,
   0.03803638,
   0.04747743,
   0.0523034,
   0.04946704,
   0.05173145,
   0.05061108,
   0.05231708,
   0.04969306,
   0.05275854,
   0.04531901,
   0.03025699,
   0.04227655,
   5.361031};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3355,_fy3355,_felx3355,_fehx3355,_fely3355,_fehy3355);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3355 = new TH1F("Graph_Graph3355","",100,-100,100);
   Graph_Graph3355->SetMinimum(0);
   Graph_Graph3355->SetMaximum(1.5);
   Graph_Graph3355->SetDirectory(0);
   Graph_Graph3355->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3355->SetLineColor(ci);
   Graph_Graph3355->GetXaxis()->SetRange(1,100);
   Graph_Graph3355->GetXaxis()->CenterTitle(true);
   Graph_Graph3355->GetXaxis()->SetLabelFont(42);
   Graph_Graph3355->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3355->GetXaxis()->SetTitleFont(42);
   Graph_Graph3355->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3355->GetYaxis()->CenterTitle(true);
   Graph_Graph3355->GetYaxis()->SetLabelFont(42);
   Graph_Graph3355->GetYaxis()->SetTitleFont(42);
   Graph_Graph3355->GetZaxis()->SetLabelFont(42);
   Graph_Graph3355->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3355->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3355);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.122821,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1064 = new TH2D("ThetaY_vs_Y_mI5_0__1064","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8020,68);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8046,8465);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8072,30375);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8098,44362);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8124,52674);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8150,57647);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8176,60387);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8202,61649);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8228,61463);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8254,60396);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8280,57437);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8306,52358);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8332,44056);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8358,30323);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8384,8093);
   ThetaY_vs_Y_mI5_0__1064->SetBinContent(8410,52);
   ThetaY_vs_Y_mI5_0__1064->SetEntries(629805);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1064->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1064->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1064->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1064->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1064->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1064->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1064->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1064->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1064->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1064->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1064->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1064->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1064->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1064->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1064->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1064->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
