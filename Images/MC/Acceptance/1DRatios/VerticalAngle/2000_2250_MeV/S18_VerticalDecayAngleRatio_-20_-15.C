void S18_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.07782535,125,1.478682);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__1452 = new TH1D("S18_ThetaY_mI20_mI15__1452","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(313,0.1416667);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(314,0.8416667);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(315,1);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(316,1.016667);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(317,1.033333);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(318,1);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(319,0.6);
   S18_ThetaY_mI20_mI15__1452->SetBinContent(320,0.1583333);
   S18_ThetaY_mI20_mI15__1452->SetBinError(313,0.03435921);
   S18_ThetaY_mI20_mI15__1452->SetBinError(314,0.08374896);
   S18_ThetaY_mI20_mI15__1452->SetBinError(315,0.09128709);
   S18_ThetaY_mI20_mI15__1452->SetBinError(316,0.09204468);
   S18_ThetaY_mI20_mI15__1452->SetBinError(317,0.09279607);
   S18_ThetaY_mI20_mI15__1452->SetBinError(318,0.09128709);
   S18_ThetaY_mI20_mI15__1452->SetBinError(319,0.07071068);
   S18_ThetaY_mI20_mI15__1452->SetBinError(320,0.03632416);
   S18_ThetaY_mI20_mI15__1452->SetMinimum(0);
   S18_ThetaY_mI20_mI15__1452->SetMaximum(1.323031);
   S18_ThetaY_mI20_mI15__1452->SetEntries(695);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1452->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__1452->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1452->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__1452->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__1452->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__1452->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1452->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1452->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1452->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__1452->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__1452->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1452->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1452->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1452->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1452->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1452->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1453 = new TH1D("ThetaY_mI20_mI15__1453","",630,-1575,1575);
   ThetaY_mI20_mI15__1453->SetBinContent(310,0.001665342);
   ThetaY_mI20_mI15__1453->SetBinContent(311,0.2475682);
   ThetaY_mI20_mI15__1453->SetBinContent(312,0.730366);
   ThetaY_mI20_mI15__1453->SetBinContent(313,0.9898566);
   ThetaY_mI20_mI15__1453->SetBinContent(314,1.133871);
   ThetaY_mI20_mI15__1453->SetBinContent(315,1.201052);
   ThetaY_mI20_mI15__1453->SetBinContent(316,1.202755);
   ThetaY_mI20_mI15__1453->SetBinContent(317,1.128496);
   ThetaY_mI20_mI15__1453->SetBinContent(318,1);
   ThetaY_mI20_mI15__1453->SetBinContent(319,0.731123);
   ThetaY_mI20_mI15__1453->SetBinContent(320,0.2396578);
   ThetaY_mI20_mI15__1453->SetBinContent(321,0.002081677);
   ThetaY_mI20_mI15__1453->SetBinError(310,0.0002510597);
   ThetaY_mI20_mI15__1453->SetBinError(311,0.003061067);
   ThetaY_mI20_mI15__1453->SetBinError(312,0.005257698);
   ThetaY_mI20_mI15__1453->SetBinError(313,0.006120847);
   ThetaY_mI20_mI15__1453->SetBinError(314,0.006550993);
   ThetaY_mI20_mI15__1453->SetBinError(315,0.006742273);
   ThetaY_mI20_mI15__1453->SetBinError(316,0.006747052);
   ThetaY_mI20_mI15__1453->SetBinError(317,0.006535449);
   ThetaY_mI20_mI15__1453->SetBinError(318,0.006152128);
   ThetaY_mI20_mI15__1453->SetBinError(319,0.005260422);
   ThetaY_mI20_mI15__1453->SetBinError(320,0.003011766);
   ThetaY_mI20_mI15__1453->SetBinError(321,0.0002806933);
   ThetaY_mI20_mI15__1453->SetEntries(227445);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1453->SetLineColor(ci);
   ThetaY_mI20_mI15__1453->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1453->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1453->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1453->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1453->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1453->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1453->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1453->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1453->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1453->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1453->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1453->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1453->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1453->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1453->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1453->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1453->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1453->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1453->Draw("AEsame");
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
   
   Double_t _fx3485[12] = {
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
   Double_t _fy3485[12] = {
   0,
   0,
   0,
   0.1431184,
   0.742295,
   0.8326033,
   0.8452813,
   0.9156728,
   1,
   0.8206554,
   0.6606641,
   0};
   Double_t _felx3485[12] = {
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
   Double_t _fely3485[12] = {
   0,
   0,
   0,
   0.03437736,
   0.07386167,
   0.07604213,
   0.07656857,
   0.0822881,
   0.09136487,
   0.09666728,
   0.150436,
   0};
   Double_t _fehx3485[12] = {
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
   Double_t _fehy3485[12] = {
   9.407877,
   0.0619789,
   0.0210067,
   0.04382729,
   0.08160682,
   0.0833284,
   0.08384235,
   0.0900405,
   0.1001235,
   0.1087901,
   0.189356,
   7.49468};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3485,_fy3485,_felx3485,_fehx3485,_fely3485,_fehy3485);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3485 = new TH1F("Graph_Graph3485","",100,-100,100);
   Graph_Graph3485->SetMinimum(0);
   Graph_Graph3485->SetMaximum(1.5);
   Graph_Graph3485->SetDirectory(0);
   Graph_Graph3485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3485->SetLineColor(ci);
   Graph_Graph3485->GetXaxis()->SetRange(1,100);
   Graph_Graph3485->GetXaxis()->CenterTitle(true);
   Graph_Graph3485->GetXaxis()->SetLabelFont(42);
   Graph_Graph3485->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3485->GetXaxis()->SetTitleFont(42);
   Graph_Graph3485->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3485->GetYaxis()->CenterTitle(true);
   Graph_Graph3485->GetYaxis()->SetLabelFont(42);
   Graph_Graph3485->GetYaxis()->SetTitleFont(42);
   Graph_Graph3485->GetZaxis()->SetLabelFont(42);
   Graph_Graph3485->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3485->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3485);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.323031,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1454 = new TH2D("ThetaY_vs_Y_mI20_mI15__1454","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8069,44);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8095,6541);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8121,19297);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8147,26153);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8173,29958);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8199,31733);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8225,31778);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8251,29816);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8277,26421);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8303,19317);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8329,6332);
   ThetaY_vs_Y_mI20_mI15__1454->SetBinContent(8355,55);
   ThetaY_vs_Y_mI20_mI15__1454->SetEntries(227445);
   ThetaY_vs_Y_mI20_mI15__1454->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(1,1588.9);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(2,3177.8);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(3,4766.7);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(4,6355.6);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(5,7944.5);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(6,9533.4);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(7,11122.3);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(8,12711.2);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(9,14300.1);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(10,15889);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(11,17477.9);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(12,19066.8);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(13,20655.7);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(14,22244.6);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(15,23833.5);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(16,25422.4);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(17,27011.3);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(18,28600.2);
   ThetaY_vs_Y_mI20_mI15__1454->SetContourLevel(19,30189.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1454->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1454->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1454->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1454->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1454->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1454->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1454->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1454->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1454->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1454->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1454->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1454->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1454->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1454->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1454->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1454->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
