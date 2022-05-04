void S12S18_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.07301181,125,1.387224);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__1350 = new TH1D("S12S18_ThetaY_0_5__1350","",630,-1575,1575);
   S12S18_ThetaY_0_5__1350->SetBinContent(310,0.003361345);
   S12S18_ThetaY_0_5__1350->SetBinContent(311,0.1613445);
   S12S18_ThetaY_0_5__1350->SetBinContent(312,0.6689076);
   S12S18_ThetaY_0_5__1350->SetBinContent(313,1);
   S12S18_ThetaY_0_5__1350->SetBinContent(314,1.030252);
   S12S18_ThetaY_0_5__1350->SetBinContent(315,1.053782);
   S12S18_ThetaY_0_5__1350->SetBinContent(316,1.062185);
   S12S18_ThetaY_0_5__1350->SetBinContent(317,0.9546218);
   S12S18_ThetaY_0_5__1350->SetBinContent(318,0.8285714);
   S12S18_ThetaY_0_5__1350->SetBinContent(319,0.4134454);
   S12S18_ThetaY_0_5__1350->SetBinContent(320,0.04033613);
   S12S18_ThetaY_0_5__1350->SetBinError(310,0.00237683);
   S12S18_ThetaY_0_5__1350->SetBinError(311,0.01646716);
   S12S18_ThetaY_0_5__1350->SetBinError(312,0.03352931);
   S12S18_ThetaY_0_5__1350->SetBinError(313,0.040996);
   S12S18_ThetaY_0_5__1350->SetBinError(314,0.04161149);
   S12S18_ThetaY_0_5__1350->SetBinError(315,0.04208398);
   S12S18_ThetaY_0_5__1350->SetBinError(316,0.04225145);
   S12S18_ThetaY_0_5__1350->SetBinError(317,0.04005504);
   S12S18_ThetaY_0_5__1350->SetBinError(318,0.03731698);
   S12S18_ThetaY_0_5__1350->SetBinError(319,0.02636031);
   S12S18_ThetaY_0_5__1350->SetBinError(320,0.008233579);
   S12S18_ThetaY_0_5__1350->SetMinimum(0);
   S12S18_ThetaY_0_5__1350->SetMaximum(1.241201);
   S12S18_ThetaY_0_5__1350->SetEntries(4294);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1350->SetLineColor(ci);
   S12S18_ThetaY_0_5__1350->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1350->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__1350->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__1350->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__1350->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1350->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1350->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1350->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__1350->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__1350->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1350->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1350->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1350->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1350->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1350->Draw("AE");
   
   TH1D *ThetaY_0_5__1351 = new TH1D("ThetaY_0_5__1351","",630,-1575,1575);
   ThetaY_0_5__1351->SetBinContent(309,0.0007204212);
   ThetaY_0_5__1351->SetBinContent(310,0.1650503);
   ThetaY_0_5__1351->SetBinContent(311,0.5985592);
   ThetaY_0_5__1351->SetBinContent(312,0.8504664);
   ThetaY_0_5__1351->SetBinContent(313,1);
   ThetaY_0_5__1351->SetBinContent(314,1.084733);
   ThetaY_0_5__1351->SetBinContent(315,1.113808);
   ThetaY_0_5__1351->SetBinContent(316,1.128364);
   ThetaY_0_5__1351->SetBinContent(317,1.089665);
   ThetaY_0_5__1351->SetBinContent(318,1.003898);
   ThetaY_0_5__1351->SetBinContent(319,0.8439272);
   ThetaY_0_5__1351->SetBinContent(320,0.5921308);
   ThetaY_0_5__1351->SetBinContent(321,0.165623);
   ThetaY_0_5__1351->SetBinContent(322,0.0006834765);
   ThetaY_0_5__1351->SetBinError(309,0.0001153597);
   ThetaY_0_5__1351->SetBinError(310,0.0017461);
   ThetaY_0_5__1351->SetBinError(311,0.003325175);
   ThetaY_0_5__1351->SetBinError(312,0.003963597);
   ThetaY_0_5__1351->SetBinError(313,0.004297946);
   ThetaY_0_5__1351->SetBinError(314,0.004476332);
   ThetaY_0_5__1351->SetBinError(315,0.004535928);
   ThetaY_0_5__1351->SetBinError(316,0.004565471);
   ThetaY_0_5__1351->SetBinError(317,0.004486497);
   ThetaY_0_5__1351->SetBinError(318,0.004306314);
   ThetaY_0_5__1351->SetBinError(319,0.00394833);
   ThetaY_0_5__1351->SetBinError(320,0.003307271);
   ThetaY_0_5__1351->SetBinError(321,0.001749127);
   ThetaY_0_5__1351->SetBinError(322,0.0001123628);
   ThetaY_0_5__1351->SetEntries(521733);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1351->SetLineColor(ci);
   ThetaY_0_5__1351->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1351->SetMarkerColor(ci);
   ThetaY_0_5__1351->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1351->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1351->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1351->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1351->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1351->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1351->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1351->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1351->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1351->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1351->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1351->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1351->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1351->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1351->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1351->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1351->Draw("AEsame");
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
   
   Double_t _fx3451[14] = {
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
   Double_t _fy3451[14] = {
   0,
   0.02036557,
   0.2695549,
   0.7865185,
   1,
   0.9497752,
   0.9461069,
   0.9413493,
   0.8760693,
   0.8253545,
   0.4899064,
   0.06812031,
   0,
   0};
   Double_t _felx3451[14] = {
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
   Double_t _fely3451[14] = {
   0,
   0.0131552,
   0.02750358,
   0.03957761,
   0.04120874,
   0.03854994,
   0.03796939,
   0.03762783,
   0.03692444,
   0.03732733,
   0.03129766,
   0.01381242,
   0,
   0};
   Double_t _fehx3451[14] = {
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
   Double_t _fehy3451[14] = {
   4.39791,
   0.02686773,
   0.0304649,
   0.04162199,
   0.04294372,
   0.04014799,
   0.0395253,
   0.03916346,
   0.03851517,
   0.03905563,
   0.03336468,
   0.01694414,
   0.01868383,
   4.641601};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3451,_fy3451,_felx3451,_fehx3451,_fely3451,_fehy3451);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3451 = new TH1F("Graph_Graph3451","",100,-100,100);
   Graph_Graph3451->SetMinimum(0);
   Graph_Graph3451->SetMaximum(1.5);
   Graph_Graph3451->SetDirectory(0);
   Graph_Graph3451->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3451->SetLineColor(ci);
   Graph_Graph3451->GetXaxis()->SetRange(1,100);
   Graph_Graph3451->GetXaxis()->CenterTitle(true);
   Graph_Graph3451->GetXaxis()->SetLabelFont(42);
   Graph_Graph3451->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3451->GetXaxis()->SetTitleFont(42);
   Graph_Graph3451->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3451->GetYaxis()->CenterTitle(true);
   Graph_Graph3451->GetYaxis()->SetLabelFont(42);
   Graph_Graph3451->GetYaxis()->SetTitleFont(42);
   Graph_Graph3451->GetZaxis()->SetLabelFont(42);
   Graph_Graph3451->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3451->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3451);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.241201,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1352 = new TH2D("ThetaY_vs_Y_0_5__1352","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8047,39);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8073,8935);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8099,32403);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8125,46040);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8151,54135);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8177,58722);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8203,60296);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8229,61084);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8255,58989);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8281,54346);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8307,45686);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8333,32055);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8359,8966);
   ThetaY_vs_Y_0_5__1352->SetBinContent(8385,37);
   ThetaY_vs_Y_0_5__1352->SetEntries(521733);
   ThetaY_vs_Y_0_5__1352->SetContour(20);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(1,3054.2);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(2,6108.4);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(3,9162.6);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(4,12216.8);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(5,15271);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(6,18325.2);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(7,21379.4);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(8,24433.6);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(9,27487.8);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(10,30542);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(11,33596.2);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(12,36650.4);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(13,39704.6);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(14,42758.8);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(15,45813);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(16,48867.2);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(17,51921.4);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(18,54975.6);
   ThetaY_vs_Y_0_5__1352->SetContourLevel(19,58029.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1352->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1352->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1352->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1352->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1352->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1352->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1352->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1352->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1352->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1352->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1352->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1352->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1352->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1352->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1352->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1352->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_0_5","Reco vertices","lpf");
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
