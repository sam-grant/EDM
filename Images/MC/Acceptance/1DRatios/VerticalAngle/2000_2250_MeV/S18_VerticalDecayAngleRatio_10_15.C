void S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__1470 = new TH1D("S18_ThetaY_10_15__1470","",630,-1575,1575);
   S18_ThetaY_10_15__1470->SetBinContent(311,0.1011236);
   S18_ThetaY_10_15__1470->SetBinContent(312,0.4606742);
   S18_ThetaY_10_15__1470->SetBinContent(313,0.7696629);
   S18_ThetaY_10_15__1470->SetBinContent(314,0.8314607);
   S18_ThetaY_10_15__1470->SetBinContent(315,0.9325843);
   S18_ThetaY_10_15__1470->SetBinContent(316,1);
   S18_ThetaY_10_15__1470->SetBinContent(317,0.9213483);
   S18_ThetaY_10_15__1470->SetBinContent(318,0.3146067);
   S18_ThetaY_10_15__1470->SetBinContent(319,0.01123596);
   S18_ThetaY_10_15__1470->SetBinError(311,0.02383506);
   S18_ThetaY_10_15__1470->SetBinError(312,0.05087295);
   S18_ThetaY_10_15__1470->SetBinError(313,0.06575674);
   S18_ThetaY_10_15__1470->SetBinError(314,0.06834565);
   S18_ThetaY_10_15__1470->SetBinError(315,0.07238258);
   S18_ThetaY_10_15__1470->SetBinError(316,0.07495317);
   S18_ThetaY_10_15__1470->SetBinError(317,0.07194522);
   S18_ThetaY_10_15__1470->SetBinError(318,0.04204109);
   S18_ThetaY_10_15__1470->SetBinError(319,0.00794502);
   S18_ThetaY_10_15__1470->SetMinimum(0);
   S18_ThetaY_10_15__1470->SetMaximum(1.1);
   S18_ThetaY_10_15__1470->SetEntries(951);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1470->SetLineColor(ci);
   S18_ThetaY_10_15__1470->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1470->SetMarkerColor(ci);
   S18_ThetaY_10_15__1470->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__1470->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__1470->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1470->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1470->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1470->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__1470->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__1470->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1470->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1470->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1470->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1470->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1470->Draw("AE");
   
   TH1D *ThetaY_10_15__1471 = new TH1D("ThetaY_10_15__1471","",630,-1575,1575);
   ThetaY_10_15__1471->SetBinContent(310,0.001534099);
   ThetaY_10_15__1471->SetBinContent(311,0.1987588);
   ThetaY_10_15__1471->SetBinContent(312,0.608061);
   ThetaY_10_15__1471->SetBinContent(313,0.8237646);
   ThetaY_10_15__1471->SetBinContent(314,0.9338246);
   ThetaY_10_15__1471->SetBinContent(315,0.9912835);
   ThetaY_10_15__1471->SetBinContent(316,1);
   ThetaY_10_15__1471->SetBinContent(317,0.9478639);
   ThetaY_10_15__1471->SetBinContent(318,0.8203012);
   ThetaY_10_15__1471->SetBinContent(319,0.606155);
   ThetaY_10_15__1471->SetBinContent(320,0.2002929);
   ThetaY_10_15__1471->SetBinContent(321,0.001580587);
   ThetaY_10_15__1471->SetBinError(310,0.0001888345);
   ThetaY_10_15__1471->SetBinError(311,0.002149403);
   ThetaY_10_15__1471->SetBinError(312,0.003759484);
   ThetaY_10_15__1471->SetBinError(313,0.004375788);
   ThetaY_10_15__1471->SetBinError(314,0.004658942);
   ThetaY_10_15__1471->SetBinError(315,0.004800137);
   ThetaY_10_15__1471->SetBinError(316,0.004821195);
   ThetaY_10_15__1471->SetBinError(317,0.004693834);
   ThetaY_10_15__1471->SetBinError(318,0.00436658);
   ThetaY_10_15__1471->SetBinError(319,0.003753588);
   ThetaY_10_15__1471->SetBinError(320,0.002157682);
   ThetaY_10_15__1471->SetBinError(321,0.0001916743);
   ThetaY_10_15__1471->SetEntries(306894);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1471->SetLineColor(ci);
   ThetaY_10_15__1471->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1471->SetMarkerColor(ci);
   ThetaY_10_15__1471->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1471->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1471->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1471->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1471->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1471->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1471->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1471->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1471->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1471->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1471->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1471->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1471->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1471->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1471->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1471->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1471->Draw("AEsame");
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
   
   Double_t _fx3491[12] = {
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
   Double_t _fy3491[12] = {
   0,
   0.5087755,
   0.7576118,
   0.9343239,
   0.8903821,
   0.9407846,
   1,
   0.972026,
   0.3835259,
   0.01853644,
   0,
   0};
   Double_t _felx3491[12] = {
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
   Double_t _fely3491[12] = {
   0,
   0.1189145,
   0.0836225,
   0.07988003,
   0.07323987,
   0.07308646,
   0.07503664,
   0.07597647,
   0.05113712,
   0.01197311,
   0,
   0};
   Double_t _fehx3491[12] = {
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
   Double_t _fehy3491[12] = {
   6.836862,
   0.1506049,
   0.09340777,
   0.08702225,
   0.07952915,
   0.07899932,
   0.08089192,
   0.08216248,
   0.05845806,
   0.02445044,
   0.05164399,
   6.633044};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3491,_fy3491,_felx3491,_fehx3491,_fely3491,_fehy3491);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3491 = new TH1F("Graph_Graph3491","",100,-100,100);
   Graph_Graph3491->SetMinimum(0);
   Graph_Graph3491->SetMaximum(1.5);
   Graph_Graph3491->SetDirectory(0);
   Graph_Graph3491->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3491->SetLineColor(ci);
   Graph_Graph3491->GetXaxis()->SetRange(1,100);
   Graph_Graph3491->GetXaxis()->CenterTitle(true);
   Graph_Graph3491->GetXaxis()->SetLabelFont(42);
   Graph_Graph3491->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3491->GetXaxis()->SetTitleFont(42);
   Graph_Graph3491->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3491->GetYaxis()->CenterTitle(true);
   Graph_Graph3491->GetYaxis()->SetLabelFont(42);
   Graph_Graph3491->GetYaxis()->SetTitleFont(42);
   Graph_Graph3491->GetZaxis()->SetLabelFont(42);
   Graph_Graph3491->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3491->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3491);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1472 = new TH2D("ThetaY_vs_Y_10_15__1472","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8075,66);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8101,8551);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8127,26160);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8153,35440);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8179,40175);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8205,42647);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8231,43022);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8257,40779);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8283,35291);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8309,26078);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8335,8617);
   ThetaY_vs_Y_10_15__1472->SetBinContent(8361,68);
   ThetaY_vs_Y_10_15__1472->SetEntries(306894);
   ThetaY_vs_Y_10_15__1472->SetContour(20);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(1,2151.1);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(2,4302.2);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(3,6453.3);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(4,8604.4);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(5,10755.5);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(6,12906.6);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(7,15057.7);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(8,17208.8);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(9,19359.9);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(10,21511);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(11,23662.1);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(12,25813.2);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(13,27964.3);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(14,30115.4);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(15,32266.5);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(16,34417.6);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(17,36568.7);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(18,38719.8);
   ThetaY_vs_Y_10_15__1472->SetContourLevel(19,40870.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1472->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1472->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1472->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1472->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1472->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1472->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1472->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1472->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1472->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1472->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1472->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1472->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1472->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1472->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1472->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1472->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
