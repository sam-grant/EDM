void S12_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2900953,125,5.51181);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__570 = new TH1D("S12_ThetaY_30_35__570","",630,-1575,1575);
   S12_ThetaY_30_35__570->SetBinContent(305,1);
   S12_ThetaY_30_35__570->SetBinContent(306,1.25);
   S12_ThetaY_30_35__570->SetBinContent(307,1.9375);
   S12_ThetaY_30_35__570->SetBinContent(308,2);
   S12_ThetaY_30_35__570->SetBinContent(309,2.375);
   S12_ThetaY_30_35__570->SetBinContent(310,3.0625);
   S12_ThetaY_30_35__570->SetBinContent(311,2.0625);
   S12_ThetaY_30_35__570->SetBinContent(312,2.3125);
   S12_ThetaY_30_35__570->SetBinContent(313,3);
   S12_ThetaY_30_35__570->SetBinContent(314,2.5625);
   S12_ThetaY_30_35__570->SetBinContent(315,2.375);
   S12_ThetaY_30_35__570->SetBinContent(316,2.5625);
   S12_ThetaY_30_35__570->SetBinContent(317,1.0625);
   S12_ThetaY_30_35__570->SetBinContent(318,0.0625);
   S12_ThetaY_30_35__570->SetBinError(305,0.25);
   S12_ThetaY_30_35__570->SetBinError(306,0.2795085);
   S12_ThetaY_30_35__570->SetBinError(307,0.3479853);
   S12_ThetaY_30_35__570->SetBinError(308,0.3535534);
   S12_ThetaY_30_35__570->SetBinError(309,0.3852759);
   S12_ThetaY_30_35__570->SetBinError(310,0.4375);
   S12_ThetaY_30_35__570->SetBinError(311,0.3590352);
   S12_ThetaY_30_35__570->SetBinError(312,0.3801727);
   S12_ThetaY_30_35__570->SetBinError(313,0.4330127);
   S12_ThetaY_30_35__570->SetBinError(314,0.4001953);
   S12_ThetaY_30_35__570->SetBinError(315,0.3852759);
   S12_ThetaY_30_35__570->SetBinError(316,0.4001953);
   S12_ThetaY_30_35__570->SetBinError(317,0.2576941);
   S12_ThetaY_30_35__570->SetBinError(318,0.0625);
   S12_ThetaY_30_35__570->SetMinimum(0);
   S12_ThetaY_30_35__570->SetMaximum(4.93162);
   S12_ThetaY_30_35__570->SetEntries(442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__570->SetLineColor(ci);
   S12_ThetaY_30_35__570->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__570->SetMarkerColor(ci);
   S12_ThetaY_30_35__570->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__570->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__570->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__570->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__570->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__570->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__570->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__570->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__570->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__570->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__570->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__570->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__570->Draw("AE");
   
   TH1D *ThetaY_30_35__571 = new TH1D("ThetaY_30_35__571","",630,-1575,1575);
   ThetaY_30_35__571->SetBinContent(303,0.001285347);
   ThetaY_30_35__571->SetBinContent(304,0.2249357);
   ThetaY_30_35__571->SetBinContent(305,1);
   ThetaY_30_35__571->SetBinContent(306,2.255784);
   ThetaY_30_35__571->SetBinContent(307,3.129177);
   ThetaY_30_35__571->SetBinContent(308,3.626607);
   ThetaY_30_35__571->SetBinContent(309,4.056555);
   ThetaY_30_35__571->SetBinContent(310,4.26671);
   ThetaY_30_35__571->SetBinContent(311,4.262853);
   ThetaY_30_35__571->SetBinContent(312,4.346401);
   ThetaY_30_35__571->SetBinContent(313,4.431877);
   ThetaY_30_35__571->SetBinContent(314,4.48329);
   ThetaY_30_35__571->SetBinContent(315,4.406812);
   ThetaY_30_35__571->SetBinContent(316,4.452442);
   ThetaY_30_35__571->SetBinContent(317,4.456298);
   ThetaY_30_35__571->SetBinContent(318,4.349614);
   ThetaY_30_35__571->SetBinContent(319,4.474936);
   ThetaY_30_35__571->SetBinContent(320,4.384319);
   ThetaY_30_35__571->SetBinContent(321,4.244216);
   ThetaY_30_35__571->SetBinContent(322,3.878535);
   ThetaY_30_35__571->SetBinContent(323,3.580334);
   ThetaY_30_35__571->SetBinContent(324,3.001928);
   ThetaY_30_35__571->SetBinContent(325,2.283419);
   ThetaY_30_35__571->SetBinContent(326,1.047558);
   ThetaY_30_35__571->SetBinContent(327,0.2544987);
   ThetaY_30_35__571->SetBinContent(328,0.0006426735);
   ThetaY_30_35__571->SetBinError(303,0.0009088776);
   ThetaY_30_35__571->SetBinError(304,0.01202332);
   ThetaY_30_35__571->SetBinError(305,0.02535101);
   ThetaY_30_35__571->SetBinError(306,0.03807536);
   ThetaY_30_35__571->SetBinError(307,0.04484461);
   ThetaY_30_35__571->SetBinError(308,0.04827757);
   ThetaY_30_35__571->SetBinError(309,0.05105919);
   ThetaY_30_35__571->SetBinError(310,0.05236508);
   ThetaY_30_35__571->SetBinError(311,0.05234141);
   ThetaY_30_35__571->SetBinError(312,0.05285184);
   ThetaY_30_35__571->SetBinError(313,0.053369);
   ThetaY_30_35__571->SetBinError(314,0.05367767);
   ThetaY_30_35__571->SetBinError(315,0.05321787);
   ThetaY_30_35__571->SetBinError(316,0.05349268);
   ThetaY_30_35__571->SetBinError(317,0.05351584);
   ThetaY_30_35__571->SetBinError(318,0.05287137);
   ThetaY_30_35__571->SetBinError(319,0.05362763);
   ThetaY_30_35__571->SetBinError(320,0.05308188);
   ThetaY_30_35__571->SetBinError(321,0.05222686);
   ThetaY_30_35__571->SetBinError(322,0.04992626);
   ThetaY_30_35__571->SetBinError(323,0.04796859);
   ThetaY_30_35__571->SetBinError(324,0.04392334);
   ThetaY_30_35__571->SetBinError(325,0.03830787);
   ThetaY_30_35__571->SetBinError(326,0.02594682);
   ThetaY_30_35__571->SetBinError(327,0.01278904);
   ThetaY_30_35__571->SetBinError(328,0.0006426735);
   ThetaY_30_35__571->SetEntries(125882);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__571->SetLineColor(ci);
   ThetaY_30_35__571->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__571->SetMarkerColor(ci);
   ThetaY_30_35__571->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__571->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__571->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__571->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__571->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__571->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__571->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__571->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__571->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__571->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__571->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__571->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__571->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__571->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__571->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__571->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__571->Draw("AEsame");
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
   
   Double_t _fx3191[26] = {
   -62.5,
   -57.5,
   -52.5,
   -47.5,
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
   42.5,
   47.5,
   52.5,
   57.5,
   62.5};
   Double_t _fy3191[26] = {
   0,
   0,
   1,
   0.5541311,
   0.6191723,
   0.5514797,
   0.5854721,
   0.7177662,
   0.4838308,
   0.5320494,
   0.6769142,
   0.5715668,
   0.5389383,
   0.5755268,
   0.2384266,
   0.01436909,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3191[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3191[26] = {
   0,
   0,
   0.2485578,
   0.1231966,
   0.1109443,
   0.09724305,
   0.09483335,
   0.1025559,
   0.08399735,
   0.08730296,
   0.09769403,
   0.08915291,
   0.08727567,
   0.08977238,
   0.05731936,
   0.01188711,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3191[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3191[26] = {
   146.9032,
   0.5128887,
   0.3198414,
   0.1542338,
   0.1328861,
   0.1161342,
   0.1116143,
   0.1183899,
   0.1000351,
   0.1029706,
   0.1129412,
   0.1042907,
   0.102714,
   0.1050158,
   0.07309947,
   0.03305016,
   0.02571636,
   0.02624795,
   0.02711452,
   0.02967136,
   0.03214305,
   0.03833754,
   0.05040409,
   0.1099021,
   0.4531722,
   515.7143};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3191,_fy3191,_felx3191,_fehx3191,_fely3191,_fehy3191);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3191 = new TH1F("Graph_Graph3191","",100,-100,100);
   Graph_Graph3191->SetMinimum(0);
   Graph_Graph3191->SetMaximum(1.5);
   Graph_Graph3191->SetDirectory(0);
   Graph_Graph3191->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3191->SetLineColor(ci);
   Graph_Graph3191->GetXaxis()->SetRange(1,100);
   Graph_Graph3191->GetXaxis()->CenterTitle(true);
   Graph_Graph3191->GetXaxis()->SetLabelFont(42);
   Graph_Graph3191->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3191->GetXaxis()->SetTitleFont(42);
   Graph_Graph3191->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3191->GetYaxis()->CenterTitle(true);
   Graph_Graph3191->GetYaxis()->SetLabelFont(42);
   Graph_Graph3191->GetYaxis()->SetTitleFont(42);
   Graph_Graph3191->GetZaxis()->SetLabelFont(42);
   Graph_Graph3191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3191->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3191);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,4.93162,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__572 = new TH2D("ThetaY_vs_Y_30_35__572","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__572->SetBinContent(7897,2);
   ThetaY_vs_Y_30_35__572->SetBinContent(7923,350);
   ThetaY_vs_Y_30_35__572->SetBinContent(7949,1556);
   ThetaY_vs_Y_30_35__572->SetBinContent(7975,3510);
   ThetaY_vs_Y_30_35__572->SetBinContent(8001,4869);
   ThetaY_vs_Y_30_35__572->SetBinContent(8027,5643);
   ThetaY_vs_Y_30_35__572->SetBinContent(8053,6312);
   ThetaY_vs_Y_30_35__572->SetBinContent(8079,6639);
   ThetaY_vs_Y_30_35__572->SetBinContent(8105,6633);
   ThetaY_vs_Y_30_35__572->SetBinContent(8131,6763);
   ThetaY_vs_Y_30_35__572->SetBinContent(8157,6896);
   ThetaY_vs_Y_30_35__572->SetBinContent(8183,6976);
   ThetaY_vs_Y_30_35__572->SetBinContent(8209,6857);
   ThetaY_vs_Y_30_35__572->SetBinContent(8235,6928);
   ThetaY_vs_Y_30_35__572->SetBinContent(8261,6934);
   ThetaY_vs_Y_30_35__572->SetBinContent(8287,6768);
   ThetaY_vs_Y_30_35__572->SetBinContent(8313,6963);
   ThetaY_vs_Y_30_35__572->SetBinContent(8339,6822);
   ThetaY_vs_Y_30_35__572->SetBinContent(8365,6604);
   ThetaY_vs_Y_30_35__572->SetBinContent(8391,6035);
   ThetaY_vs_Y_30_35__572->SetBinContent(8417,5571);
   ThetaY_vs_Y_30_35__572->SetBinContent(8443,4671);
   ThetaY_vs_Y_30_35__572->SetBinContent(8469,3553);
   ThetaY_vs_Y_30_35__572->SetBinContent(8495,1630);
   ThetaY_vs_Y_30_35__572->SetBinContent(8521,396);
   ThetaY_vs_Y_30_35__572->SetBinContent(8547,1);
   ThetaY_vs_Y_30_35__572->SetEntries(125882);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__572->SetLineColor(ci);
   ThetaY_vs_Y_30_35__572->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__572->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__572->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__572->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__572->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__572->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__572->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__572->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__572->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__572->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__572->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__572->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__572->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__572->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__572->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
