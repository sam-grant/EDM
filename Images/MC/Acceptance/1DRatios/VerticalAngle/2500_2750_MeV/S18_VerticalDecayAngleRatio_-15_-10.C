void S18_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07632637,125,1.450201);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI15_mI10__1797 = new TH1D("S18_ThetaY_mI15_mI10__1797","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__1797->SetBinContent(314,0.5555556);
   S18_ThetaY_mI15_mI10__1797->SetBinContent(315,1.033333);
   S18_ThetaY_mI15_mI10__1797->SetBinContent(316,0.9222222);
   S18_ThetaY_mI15_mI10__1797->SetBinContent(317,1);
   S18_ThetaY_mI15_mI10__1797->SetBinContent(318,0.4666667);
   S18_ThetaY_mI15_mI10__1797->SetBinError(314,0.07856742);
   S18_ThetaY_mI15_mI10__1797->SetBinError(315,0.1071517);
   S18_ThetaY_mI15_mI10__1797->SetBinError(316,0.101227);
   S18_ThetaY_mI15_mI10__1797->SetBinError(317,0.1054093);
   S18_ThetaY_mI15_mI10__1797->SetBinError(318,0.07200823);
   S18_ThetaY_mI15_mI10__1797->SetMinimum(0);
   S18_ThetaY_mI15_mI10__1797->SetMaximum(1.297548);
   S18_ThetaY_mI15_mI10__1797->SetEntries(358);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1797->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__1797->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1797->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__1797->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__1797->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__1797->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1797->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1797->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1797->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__1797->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__1797->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1797->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1797->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1797->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1797->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1797->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1798 = new TH1D("ThetaY_mI15_mI10__1798","",630,-1575,1575);
   ThetaY_mI15_mI10__1798->SetBinContent(312,0.02417549);
   ThetaY_mI15_mI10__1798->SetBinContent(313,0.5022582);
   ThetaY_mI15_mI10__1798->SetBinContent(314,0.996053);
   ThetaY_mI15_mI10__1798->SetBinContent(315,1.179589);
   ThetaY_mI15_mI10__1798->SetBinContent(316,1.16828);
   ThetaY_mI15_mI10__1798->SetBinContent(317,1);
   ThetaY_mI15_mI10__1798->SetBinContent(318,0.5013853);
   ThetaY_mI15_mI10__1798->SetBinContent(319,0.02592129);
   ThetaY_mI15_mI10__1798->SetBinError(312,0.0009578678);
   ThetaY_mI15_mI10__1798->SetBinError(313,0.004365977);
   ThetaY_mI15_mI10__1798->SetBinError(314,0.006148358);
   ThetaY_mI15_mI10__1798->SetBinError(315,0.006690882);
   ThetaY_mI15_mI10__1798->SetBinError(316,0.006658729);
   ThetaY_mI15_mI10__1798->SetBinError(317,0.006160528);
   ThetaY_mI15_mI10__1798->SetBinError(318,0.004362181);
   ThetaY_mI15_mI10__1798->SetBinError(319,0.0009918505);
   ThetaY_mI15_mI10__1798->SetEntries(142223);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1798->SetLineColor(ci);
   ThetaY_mI15_mI10__1798->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1798->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1798->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1798->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1798->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1798->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1798->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1798->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1798->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1798->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1798->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1798->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1798->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1798->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1798->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1798->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1798->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1798->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1798->Draw("AEsame");
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
   
   Double_t _fx3600[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3600[8] = {
   0,
   0,
   0.557757,
   0.8760111,
   0.7893848,
   1,
   0.9307547,
   0};
   Double_t _felx3600[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3600[8] = {
   0,
   0,
   0.07868745,
   0.09080867,
   0.08658649,
   0.1053907,
   0.1432664,
   0};
   Double_t _fehx3600[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3600[8] = {
   0.8473617,
   0.04073049,
   0.09066017,
   0.1007511,
   0.09665108,
   0.1171339,
   0.1672321,
   0.790215};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3600,_fy3600,_felx3600,_fehx3600,_fely3600,_fehy3600);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3600 = new TH1F("Graph_Graph3600","",100,-100,100);
   Graph_Graph3600->SetMinimum(0);
   Graph_Graph3600->SetMaximum(1.5);
   Graph_Graph3600->SetDirectory(0);
   Graph_Graph3600->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3600->SetLineColor(ci);
   Graph_Graph3600->GetXaxis()->SetRange(1,100);
   Graph_Graph3600->GetXaxis()->CenterTitle(true);
   Graph_Graph3600->GetXaxis()->SetLabelFont(42);
   Graph_Graph3600->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3600->GetXaxis()->SetTitleFont(42);
   Graph_Graph3600->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3600->GetYaxis()->CenterTitle(true);
   Graph_Graph3600->GetYaxis()->SetLabelFont(42);
   Graph_Graph3600->GetYaxis()->SetTitleFont(42);
   Graph_Graph3600->GetZaxis()->SetLabelFont(42);
   Graph_Graph3600->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3600->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3600);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.297548,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1799 = new TH2D("ThetaY_vs_Y_mI15_mI10__1799","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8122,637);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8148,13234);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8174,26245);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8200,31081);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8226,30783);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8252,26349);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8278,13211);
   ThetaY_vs_Y_mI15_mI10__1799->SetBinContent(8304,683);
   ThetaY_vs_Y_mI15_mI10__1799->SetEntries(142223);
   ThetaY_vs_Y_mI15_mI10__1799->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(1,1554.05);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(2,3108.1);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(3,4662.15);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(4,6216.2);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(5,7770.25);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(6,9324.3);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(7,10878.35);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(8,12432.4);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(9,13986.45);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(10,15540.5);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(11,17094.55);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(12,18648.6);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(13,20202.65);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(14,21756.7);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(15,23310.75);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(16,24864.8);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(17,26418.85);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(18,27972.9);
   ThetaY_vs_Y_mI15_mI10__1799->SetContourLevel(19,29526.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1799->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1799->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1799->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1799->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1799->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1799->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1799->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1799->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1799->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1799->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1799->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1799->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1799->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1799->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1799->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1799->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-15_-10","Reco vertices","lpf");
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
