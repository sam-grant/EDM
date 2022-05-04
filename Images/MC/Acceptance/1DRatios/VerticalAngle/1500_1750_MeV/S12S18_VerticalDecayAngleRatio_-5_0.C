void S12S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI5_0__1176 = new TH1D("S12S18_ThetaY_mI5_0__1176","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(310,0.01971091);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(311,0.2667543);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(312,0.7030223);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(313,0.9408673);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(314,0.9067017);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(315,1.015769);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(316,0.9802891);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(317,1);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(318,0.8567674);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(319,0.7726675);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(320,0.4375821);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(321,0.0696452);
   S12S18_ThetaY_mI5_0__1176->SetBinContent(322,0.00131406);
   S12S18_ThetaY_mI5_0__1176->SetBinError(310,0.005089334);
   S12S18_ThetaY_mI5_0__1176->SetBinError(311,0.01872248);
   S12S18_ThetaY_mI5_0__1176->SetBinError(312,0.03039431);
   S12S18_ThetaY_mI5_0__1176->SetBinError(313,0.03516186);
   S12S18_ThetaY_mI5_0__1176->SetBinError(314,0.03451754);
   S12S18_ThetaY_mI5_0__1176->SetBinError(315,0.03653466);
   S12S18_ThetaY_mI5_0__1176->SetBinError(316,0.03589093);
   S12S18_ThetaY_mI5_0__1176->SetBinError(317,0.03624997);
   S12S18_ThetaY_mI5_0__1176->SetBinError(318,0.0335536);
   S12S18_ThetaY_mI5_0__1176->SetBinError(319,0.03186427);
   S12S18_ThetaY_mI5_0__1176->SetBinError(320,0.02397935);
   S12S18_ThetaY_mI5_0__1176->SetBinError(321,0.009566504);
   S12S18_ThetaY_mI5_0__1176->SetBinError(322,0.00131406);
   S12S18_ThetaY_mI5_0__1176->SetMinimum(0);
   S12S18_ThetaY_mI5_0__1176->SetMaximum(1.122821);
   S12S18_ThetaY_mI5_0__1176->SetEntries(6066);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1176->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__1176->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1176->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__1176->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__1176->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__1176->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1176->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1176->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1176->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__1176->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__1176->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1176->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1176->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1176->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1176->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1176->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1177 = new TH1D("ThetaY_mI5_0__1177","",630,-1575,1575);
   ThetaY_mI5_0__1177->SetBinContent(308,0.001125902);
   ThetaY_mI5_0__1177->SetBinContent(309,0.1401583);
   ThetaY_mI5_0__1177->SetBinContent(310,0.5029307);
   ThetaY_mI5_0__1177->SetBinContent(311,0.7345188);
   ThetaY_mI5_0__1177->SetBinContent(312,0.8721439);
   ThetaY_mI5_0__1177->SetBinContent(313,0.9544837);
   ThetaY_mI5_0__1177->SetBinContent(314,0.999851);
   ThetaY_mI5_0__1177->SetBinContent(315,1.020746);
   ThetaY_mI5_0__1177->SetBinContent(316,1.017667);
   ThetaY_mI5_0__1177->SetBinContent(317,1);
   ThetaY_mI5_0__1177->SetBinContent(318,0.9510067);
   ThetaY_mI5_0__1177->SetBinContent(319,0.8669117);
   ThetaY_mI5_0__1177->SetBinContent(320,0.7294523);
   ThetaY_mI5_0__1177->SetBinContent(321,0.5020697);
   ThetaY_mI5_0__1177->SetBinContent(322,0.1339989);
   ThetaY_mI5_0__1177->SetBinContent(323,0.0008609842);
   ThetaY_mI5_0__1177->SetBinError(308,0.0001365357);
   ThetaY_mI5_0__1177->SetBinError(309,0.00152337);
   ThetaY_mI5_0__1177->SetBinError(310,0.002885692);
   ThetaY_mI5_0__1177->SetBinError(311,0.003487365);
   ThetaY_mI5_0__1177->SetBinError(312,0.003800056);
   ThetaY_mI5_0__1177->SetBinError(313,0.003975394);
   ThetaY_mI5_0__1177->SetBinError(314,0.004068774);
   ThetaY_mI5_0__1177->SetBinError(315,0.00411107);
   ThetaY_mI5_0__1177->SetBinError(316,0.004104863);
   ThetaY_mI5_0__1177->SetBinError(317,0.004069077);
   ThetaY_mI5_0__1177->SetBinError(318,0.003968147);
   ThetaY_mI5_0__1177->SetBinError(319,0.00378864);
   ThetaY_mI5_0__1177->SetBinError(320,0.003475316);
   ThetaY_mI5_0__1177->SetBinError(321,0.002883221);
   ThetaY_mI5_0__1177->SetBinError(322,0.001489521);
   ThetaY_mI5_0__1177->SetBinError(323,0.000119397);
   ThetaY_mI5_0__1177->SetEntries(629805);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1177->SetLineColor(ci);
   ThetaY_mI5_0__1177->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1177->SetMarkerColor(ci);
   ThetaY_mI5_0__1177->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1177->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1177->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1177->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1177->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1177->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1177->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1177->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1177->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1177->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1177->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1177->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1177->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1177->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1177->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1177->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1177->Draw("AEsame");
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
   
   Double_t _fx3393[16] = {
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
   Double_t _fy3393[16] = {
   0,
   0,
   0.0391921,
   0.3631687,
   0.8060853,
   0.9857342,
   0.9068368,
   0.9951235,
   0.9632712,
   1,
   0.9009058,
   0.8912875,
   0.5998777,
   0.1387162,
   0.009806499,
   0};
   Double_t _felx3393[16] = {
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
   Double_t _fely3393[16] = {
   0,
   0,
   0.01000775,
   0.02552638,
   0.03501538,
   0.03705773,
   0.03471068,
   0.03600773,
   0.03547302,
   0.03646933,
   0.03547249,
   0.03695105,
   0.03298017,
   0.01901012,
   0.00811258,
   0};
   Double_t _fehx3393[16] = {
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
   Double_t _fehy3393[16] = {
   2.17804,
   0.01726246,
   0.01296048,
   0.02738749,
   0.03657117,
   0.03847844,
   0.03606601,
   0.03733543,
   0.03680463,
   0.03782486,
   0.03689811,
   0.03851641,
   0.03484599,
   0.02181334,
   0.0225549,
   2.860156};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3393,_fy3393,_felx3393,_fehx3393,_fely3393,_fehy3393);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3393 = new TH1F("Graph_Graph3393","",100,-100,100);
   Graph_Graph3393->SetMinimum(0);
   Graph_Graph3393->SetMaximum(1.5);
   Graph_Graph3393->SetDirectory(0);
   Graph_Graph3393->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3393->SetLineColor(ci);
   Graph_Graph3393->GetXaxis()->SetRange(1,100);
   Graph_Graph3393->GetXaxis()->CenterTitle(true);
   Graph_Graph3393->GetXaxis()->SetLabelFont(42);
   Graph_Graph3393->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3393->GetXaxis()->SetTitleFont(42);
   Graph_Graph3393->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3393->GetYaxis()->CenterTitle(true);
   Graph_Graph3393->GetYaxis()->SetLabelFont(42);
   Graph_Graph3393->GetYaxis()->SetTitleFont(42);
   Graph_Graph3393->GetZaxis()->SetLabelFont(42);
   Graph_Graph3393->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3393->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3393);
   
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1178 = new TH2D("ThetaY_vs_Y_mI5_0__1178","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8020,68);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8046,8465);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8072,30375);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8098,44362);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8124,52674);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8150,57647);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8176,60387);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8202,61649);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8228,61463);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8254,60396);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8280,57437);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8306,52358);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8332,44056);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8358,30323);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8384,8093);
   ThetaY_vs_Y_mI5_0__1178->SetBinContent(8410,52);
   ThetaY_vs_Y_mI5_0__1178->SetEntries(629805);
   ThetaY_vs_Y_mI5_0__1178->SetContour(20);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(1,3082.45);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(2,6164.9);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(3,9247.35);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(4,12329.8);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(5,15412.25);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(6,18494.7);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(7,21577.15);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(8,24659.6);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(9,27742.05);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(10,30824.5);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(11,33906.95);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(12,36989.4);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(13,40071.85);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(14,43154.3);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(15,46236.75);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(16,49319.2);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(17,52401.65);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(18,55484.1);
   ThetaY_vs_Y_mI5_0__1178->SetContourLevel(19,58566.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1178->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1178->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1178->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1178->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1178->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1178->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1178->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1178->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1178->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1178->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1178->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1178->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1178->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1178->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1178->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1178->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-5_0","Reco vertices","lpf");
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
