void S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_0_5__1293 = new TH1D("S18_ThetaY_0_5__1293","",630,-1575,1575);
   S18_ThetaY_0_5__1293->SetBinContent(310,0.006666667);
   S18_ThetaY_0_5__1293->SetBinContent(311,0.1333333);
   S18_ThetaY_0_5__1293->SetBinContent(312,0.6366667);
   S18_ThetaY_0_5__1293->SetBinContent(313,1);
   S18_ThetaY_0_5__1293->SetBinContent(314,1.01);
   S18_ThetaY_0_5__1293->SetBinContent(315,1.09);
   S18_ThetaY_0_5__1293->SetBinContent(316,1.026667);
   S18_ThetaY_0_5__1293->SetBinContent(317,0.9233333);
   S18_ThetaY_0_5__1293->SetBinContent(318,0.8166667);
   S18_ThetaY_0_5__1293->SetBinContent(319,0.3766667);
   S18_ThetaY_0_5__1293->SetBinContent(320,0.04666667);
   S18_ThetaY_0_5__1293->SetBinError(310,0.004714045);
   S18_ThetaY_0_5__1293->SetBinError(311,0.02108185);
   S18_ThetaY_0_5__1293->SetBinError(312,0.04606758);
   S18_ThetaY_0_5__1293->SetBinError(313,0.05773503);
   S18_ThetaY_0_5__1293->SetBinError(314,0.05802298);
   S18_ThetaY_0_5__1293->SetBinError(315,0.06027714);
   S18_ThetaY_0_5__1293->SetBinError(316,0.05849976);
   S18_ThetaY_0_5__1293->SetBinError(317,0.05547772);
   S18_ThetaY_0_5__1293->SetBinError(318,0.05217492);
   S18_ThetaY_0_5__1293->SetBinError(319,0.03543382);
   S18_ThetaY_0_5__1293->SetBinError(320,0.01247219);
   S18_ThetaY_0_5__1293->SetMinimum(0);
   S18_ThetaY_0_5__1293->SetMaximum(1.241201);
   S18_ThetaY_0_5__1293->SetEntries(2120);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1293->SetLineColor(ci);
   S18_ThetaY_0_5__1293->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1293->SetMarkerColor(ci);
   S18_ThetaY_0_5__1293->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__1293->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__1293->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1293->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1293->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1293->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__1293->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__1293->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1293->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1293->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1293->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1293->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1293->Draw("AE");
   
   TH1D *ThetaY_0_5__1294 = new TH1D("ThetaY_0_5__1294","",630,-1575,1575);
   ThetaY_0_5__1294->SetBinContent(309,0.0007204212);
   ThetaY_0_5__1294->SetBinContent(310,0.1650503);
   ThetaY_0_5__1294->SetBinContent(311,0.5985592);
   ThetaY_0_5__1294->SetBinContent(312,0.8504664);
   ThetaY_0_5__1294->SetBinContent(313,1);
   ThetaY_0_5__1294->SetBinContent(314,1.084733);
   ThetaY_0_5__1294->SetBinContent(315,1.113808);
   ThetaY_0_5__1294->SetBinContent(316,1.128364);
   ThetaY_0_5__1294->SetBinContent(317,1.089665);
   ThetaY_0_5__1294->SetBinContent(318,1.003898);
   ThetaY_0_5__1294->SetBinContent(319,0.8439272);
   ThetaY_0_5__1294->SetBinContent(320,0.5921308);
   ThetaY_0_5__1294->SetBinContent(321,0.165623);
   ThetaY_0_5__1294->SetBinContent(322,0.0006834765);
   ThetaY_0_5__1294->SetBinError(309,0.0001153597);
   ThetaY_0_5__1294->SetBinError(310,0.0017461);
   ThetaY_0_5__1294->SetBinError(311,0.003325175);
   ThetaY_0_5__1294->SetBinError(312,0.003963597);
   ThetaY_0_5__1294->SetBinError(313,0.004297946);
   ThetaY_0_5__1294->SetBinError(314,0.004476332);
   ThetaY_0_5__1294->SetBinError(315,0.004535928);
   ThetaY_0_5__1294->SetBinError(316,0.004565471);
   ThetaY_0_5__1294->SetBinError(317,0.004486497);
   ThetaY_0_5__1294->SetBinError(318,0.004306314);
   ThetaY_0_5__1294->SetBinError(319,0.00394833);
   ThetaY_0_5__1294->SetBinError(320,0.003307271);
   ThetaY_0_5__1294->SetBinError(321,0.001749127);
   ThetaY_0_5__1294->SetBinError(322,0.0001123628);
   ThetaY_0_5__1294->SetEntries(521733);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1294->SetLineColor(ci);
   ThetaY_0_5__1294->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1294->SetMarkerColor(ci);
   ThetaY_0_5__1294->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1294->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1294->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1294->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1294->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1294->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1294->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1294->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1294->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1294->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1294->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1294->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1294->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1294->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1294->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1294->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1294->Draw("AEsame");
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
   
   Double_t _fx3432[14] = {
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
   Double_t _fy3432[14] = {
   0,
   0.04039172,
   0.2227572,
   0.7486088,
   1,
   0.931105,
   0.9786246,
   0.9098717,
   0.8473554,
   0.8134959,
   0.446326,
   0.07881142,
   0,
   0};
   Double_t _felx3432[14] = {
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
   Double_t _fely3432[14] = {
   0,
   0.02609114,
   0.03509424,
   0.05423158,
   0.05786201,
   0.05359839,
   0.05423644,
   0.05194667,
   0.05100084,
   0.05205336,
   0.04197599,
   0.02081328,
   0,
   0};
   Double_t _fehx3432[14] = {
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
   Double_t _fehy3432[14] = {
   8.722522,
   0.05328767,
   0.04111347,
   0.05831142,
   0.06131209,
   0.05677723,
   0.05732988,
   0.0550015,
   0.05416783,
   0.05549667,
   0.04612338,
   0.02720007,
   0.03705626,
   9.205842};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3432,_fy3432,_felx3432,_fehx3432,_fely3432,_fehy3432);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3432 = new TH1F("Graph_Graph3432","",100,-100,100);
   Graph_Graph3432->SetMinimum(0);
   Graph_Graph3432->SetMaximum(1.5);
   Graph_Graph3432->SetDirectory(0);
   Graph_Graph3432->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3432->SetLineColor(ci);
   Graph_Graph3432->GetXaxis()->SetRange(1,100);
   Graph_Graph3432->GetXaxis()->CenterTitle(true);
   Graph_Graph3432->GetXaxis()->SetLabelFont(42);
   Graph_Graph3432->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3432->GetXaxis()->SetTitleFont(42);
   Graph_Graph3432->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3432->GetYaxis()->CenterTitle(true);
   Graph_Graph3432->GetYaxis()->SetLabelFont(42);
   Graph_Graph3432->GetYaxis()->SetTitleFont(42);
   Graph_Graph3432->GetZaxis()->SetLabelFont(42);
   Graph_Graph3432->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3432->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3432);
   
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
   
   TH2D *ThetaY_vs_Y_0_5__1295 = new TH2D("ThetaY_vs_Y_0_5__1295","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8047,39);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8073,8935);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8099,32403);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8125,46040);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8151,54135);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8177,58722);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8203,60296);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8229,61084);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8255,58989);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8281,54346);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8307,45686);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8333,32055);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8359,8966);
   ThetaY_vs_Y_0_5__1295->SetBinContent(8385,37);
   ThetaY_vs_Y_0_5__1295->SetEntries(521733);
   ThetaY_vs_Y_0_5__1295->SetContour(20);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(1,3054.2);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(2,6108.4);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(3,9162.6);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(4,12216.8);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(5,15271);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(6,18325.2);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(7,21379.4);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(8,24433.6);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(9,27487.8);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(10,30542);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(11,33596.2);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(12,36650.4);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(13,39704.6);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(14,42758.8);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(15,45813);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(16,48867.2);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(17,51921.4);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(18,54975.6);
   ThetaY_vs_Y_0_5__1295->SetContourLevel(19,58029.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1295->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1295->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1295->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1295->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1295->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1295->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1295->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1295->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1295->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1295->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1295->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1295->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1295->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1295->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1295->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1295->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
