void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI20_mI15__1509 = new TH1D("S12S18_ThetaY_mI20_mI15__1509","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(313,0.1260163);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(314,0.804878);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(315,0.9796748);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(316,1.04065);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(317,1.085366);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(318,1);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(319,0.6341463);
   S12S18_ThetaY_mI20_mI15__1509->SetBinContent(320,0.1422764);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(313,0.02263319);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(314,0.05720019);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(315,0.0631064);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(316,0.06504065);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(317,0.06642331);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(318,0.06375767);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(319,0.05077234);
   S12S18_ThetaY_mI20_mI15__1509->SetBinError(320,0.0240491);
   S12S18_ThetaY_mI20_mI15__1509->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__1509->SetMaximum(1.323031);
   S12S18_ThetaY_mI20_mI15__1509->SetEntries(1430);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1509->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__1509->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1509->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__1509->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__1509->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__1509->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1509->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1509->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1509->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__1509->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__1509->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1509->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1509->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1509->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1509->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1509->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1510 = new TH1D("ThetaY_mI20_mI15__1510","",630,-1575,1575);
   ThetaY_mI20_mI15__1510->SetBinContent(310,0.001665342);
   ThetaY_mI20_mI15__1510->SetBinContent(311,0.2475682);
   ThetaY_mI20_mI15__1510->SetBinContent(312,0.730366);
   ThetaY_mI20_mI15__1510->SetBinContent(313,0.9898566);
   ThetaY_mI20_mI15__1510->SetBinContent(314,1.133871);
   ThetaY_mI20_mI15__1510->SetBinContent(315,1.201052);
   ThetaY_mI20_mI15__1510->SetBinContent(316,1.202755);
   ThetaY_mI20_mI15__1510->SetBinContent(317,1.128496);
   ThetaY_mI20_mI15__1510->SetBinContent(318,1);
   ThetaY_mI20_mI15__1510->SetBinContent(319,0.731123);
   ThetaY_mI20_mI15__1510->SetBinContent(320,0.2396578);
   ThetaY_mI20_mI15__1510->SetBinContent(321,0.002081677);
   ThetaY_mI20_mI15__1510->SetBinError(310,0.0002510597);
   ThetaY_mI20_mI15__1510->SetBinError(311,0.003061067);
   ThetaY_mI20_mI15__1510->SetBinError(312,0.005257698);
   ThetaY_mI20_mI15__1510->SetBinError(313,0.006120847);
   ThetaY_mI20_mI15__1510->SetBinError(314,0.006550993);
   ThetaY_mI20_mI15__1510->SetBinError(315,0.006742273);
   ThetaY_mI20_mI15__1510->SetBinError(316,0.006747052);
   ThetaY_mI20_mI15__1510->SetBinError(317,0.006535449);
   ThetaY_mI20_mI15__1510->SetBinError(318,0.006152128);
   ThetaY_mI20_mI15__1510->SetBinError(319,0.005260422);
   ThetaY_mI20_mI15__1510->SetBinError(320,0.003011766);
   ThetaY_mI20_mI15__1510->SetBinError(321,0.0002806933);
   ThetaY_mI20_mI15__1510->SetEntries(227445);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1510->SetLineColor(ci);
   ThetaY_mI20_mI15__1510->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1510->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1510->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1510->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1510->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1510->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1510->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1510->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1510->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1510->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1510->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1510->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1510->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1510->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1510->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1510->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1510->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1510->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1510->Draw("AEsame");
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
   
   Double_t _fx3504[12] = {
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
   Double_t _fy3504[12] = {
   0,
   0,
   0,
   0.1273076,
   0.7098499,
   0.8156805,
   0.865222,
   0.9617806,
   1,
   0.8673593,
   0.5936648,
   0};
   Double_t _felx3504[12] = {
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
   Double_t _fely3504[12] = {
   0,
   0,
   0,
   0.02275417,
   0.0505697,
   0.05270434,
   0.05425747,
   0.05908499,
   0.06400909,
   0.06964764,
   0.100134,
   0};
   Double_t _fehx3504[12] = {
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
   Double_t _fehy3504[12] = {
   4.589208,
   0.03023361,
   0.01024717,
   0.02723712,
   0.05430914,
   0.05622677,
   0.05777331,
   0.06283336,
   0.06824611,
   0.07548204,
   0.1186566,
   3.655941};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3504,_fy3504,_felx3504,_fehx3504,_fely3504,_fehy3504);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3504 = new TH1F("Graph_Graph3504","",100,-100,100);
   Graph_Graph3504->SetMinimum(0);
   Graph_Graph3504->SetMaximum(1.5);
   Graph_Graph3504->SetDirectory(0);
   Graph_Graph3504->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3504->SetLineColor(ci);
   Graph_Graph3504->GetXaxis()->SetRange(1,100);
   Graph_Graph3504->GetXaxis()->CenterTitle(true);
   Graph_Graph3504->GetXaxis()->SetLabelFont(42);
   Graph_Graph3504->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3504->GetXaxis()->SetTitleFont(42);
   Graph_Graph3504->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3504->GetYaxis()->CenterTitle(true);
   Graph_Graph3504->GetYaxis()->SetLabelFont(42);
   Graph_Graph3504->GetYaxis()->SetTitleFont(42);
   Graph_Graph3504->GetZaxis()->SetLabelFont(42);
   Graph_Graph3504->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3504->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3504);
   
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1511 = new TH2D("ThetaY_vs_Y_mI20_mI15__1511","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8069,44);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8095,6541);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8121,19297);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8147,26153);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8173,29958);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8199,31733);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8225,31778);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8251,29816);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8277,26421);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8303,19317);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8329,6332);
   ThetaY_vs_Y_mI20_mI15__1511->SetBinContent(8355,55);
   ThetaY_vs_Y_mI20_mI15__1511->SetEntries(227445);
   ThetaY_vs_Y_mI20_mI15__1511->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(1,1588.9);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(2,3177.8);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(3,4766.7);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(4,6355.6);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(5,7944.5);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(6,9533.4);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(7,11122.3);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(8,12711.2);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(9,14300.1);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(10,15889);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(11,17477.9);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(12,19066.8);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(13,20655.7);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(14,22244.6);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(15,23833.5);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(16,25422.4);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(17,27011.3);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(18,28600.2);
   ThetaY_vs_Y_mI20_mI15__1511->SetContourLevel(19,30189.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1511->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1511->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1511->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1511->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1511->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1511->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1511->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1511->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1511->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1511->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1511->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1511->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1511->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1511->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1511->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1511->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-20_-15","Reco vertices","lpf");
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
