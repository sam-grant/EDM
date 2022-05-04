void S12S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2098467,125,3.987086);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_35_40__1713 = new TH1D("S12S18_ThetaY_35_40__1713","",630,-1575,1575);
   S12S18_ThetaY_35_40__1713->SetBinContent(312,1);
   S12S18_ThetaY_35_40__1713->SetBinContent(313,1.625);
   S12S18_ThetaY_35_40__1713->SetBinContent(314,2);
   S12S18_ThetaY_35_40__1713->SetBinContent(315,2.625);
   S12S18_ThetaY_35_40__1713->SetBinContent(316,0.875);
   S12S18_ThetaY_35_40__1713->SetBinError(312,0.3535534);
   S12S18_ThetaY_35_40__1713->SetBinError(313,0.4506939);
   S12S18_ThetaY_35_40__1713->SetBinError(314,0.5);
   S12S18_ThetaY_35_40__1713->SetBinError(315,0.572822);
   S12S18_ThetaY_35_40__1713->SetBinError(316,0.3307189);
   S12S18_ThetaY_35_40__1713->SetMinimum(0);
   S12S18_ThetaY_35_40__1713->SetMaximum(3.567393);
   S12S18_ThetaY_35_40__1713->SetEntries(65);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1713->SetLineColor(ci);
   S12S18_ThetaY_35_40__1713->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1713->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__1713->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__1713->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__1713->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1713->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1713->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1713->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__1713->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__1713->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1713->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1713->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1713->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1713->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1713->Draw("AE");
   
   TH1D *ThetaY_35_40__1714 = new TH1D("ThetaY_35_40__1714","",630,-1575,1575);
   ThetaY_35_40__1714->SetBinContent(311,0.02347024);
   ThetaY_35_40__1714->SetBinContent(312,1);
   ThetaY_35_40__1714->SetBinContent(313,2.295893);
   ThetaY_35_40__1714->SetBinContent(314,2.923722);
   ThetaY_35_40__1714->SetBinContent(315,3.243085);
   ThetaY_35_40__1714->SetBinContent(316,3.203688);
   ThetaY_35_40__1714->SetBinContent(317,3.039396);
   ThetaY_35_40__1714->SetBinContent(318,2.28751);
   ThetaY_35_40__1714->SetBinContent(319,0.9346186);
   ThetaY_35_40__1714->SetBinContent(320,0.01676446);
   ThetaY_35_40__1714->SetBinError(311,0.004435459);
   ThetaY_35_40__1714->SetBinError(312,0.02895208);
   ThetaY_35_40__1714->SetBinError(313,0.04386878);
   ThetaY_35_40__1714->SetBinError(314,0.04950486);
   ThetaY_35_40__1714->SetBinError(315,0.05213855);
   ThetaY_35_40__1714->SetBinError(316,0.05182089);
   ThetaY_35_40__1714->SetBinError(317,0.05047467);
   ThetaY_35_40__1714->SetBinError(318,0.04378863);
   ThetaY_35_40__1714->SetBinError(319,0.02798962);
   ThetaY_35_40__1714->SetBinError(320,0.003748647);
   ThetaY_35_40__1714->SetEntries(22629);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1714->SetLineColor(ci);
   ThetaY_35_40__1714->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1714->SetMarkerColor(ci);
   ThetaY_35_40__1714->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1714->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1714->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1714->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1714->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1714->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1714->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1714->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1714->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1714->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1714->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1714->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1714->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1714->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1714->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1714->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1714->Draw("AEsame");
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
   
   Double_t _fx3572[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3572[10] = {
   0,
   1,
   0.7077857,
   0.6840596,
   0.8094146,
   0.2731227,
   0,
   0,
   0,
   0};
   Double_t _felx3572[10] = {
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
   Double_t _fely3572[10] = {
   0,
   0.3470786,
   0.1941787,
   0.1695761,
   0.1756654,
   0.1008033,
   0,
   0,
   0,
   0};
   Double_t _fehx3572[10] = {
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
   Double_t _fehy3572[10] = {
   10.13461,
   0.4956108,
   0.2565855,
   0.2179765,
   0.2187211,
   0.1473143,
   0.07573416,
   0.1006358,
   0.2464297,
   14.37876};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3572,_fy3572,_felx3572,_fehx3572,_fely3572,_fehy3572);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3572 = new TH1F("Graph_Graph3572","",100,-100,100);
   Graph_Graph3572->SetMinimum(0);
   Graph_Graph3572->SetMaximum(1.5);
   Graph_Graph3572->SetDirectory(0);
   Graph_Graph3572->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3572->SetLineColor(ci);
   Graph_Graph3572->GetXaxis()->SetRange(1,100);
   Graph_Graph3572->GetXaxis()->CenterTitle(true);
   Graph_Graph3572->GetXaxis()->SetLabelFont(42);
   Graph_Graph3572->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3572->GetXaxis()->SetTitleFont(42);
   Graph_Graph3572->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3572->GetYaxis()->CenterTitle(true);
   Graph_Graph3572->GetYaxis()->SetLabelFont(42);
   Graph_Graph3572->GetYaxis()->SetTitleFont(42);
   Graph_Graph3572->GetZaxis()->SetLabelFont(42);
   Graph_Graph3572->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3572->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3572);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.567393,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1715 = new TH2D("ThetaY_vs_Y_35_40__1715","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8106,28);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8132,1193);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8158,2739);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8184,3488);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8210,3869);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8236,3822);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8262,3626);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8288,2729);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8314,1115);
   ThetaY_vs_Y_35_40__1715->SetBinContent(8340,20);
   ThetaY_vs_Y_35_40__1715->SetEntries(22629);
   ThetaY_vs_Y_35_40__1715->SetContour(20);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(1,193.45);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(2,386.9);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(3,580.35);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(4,773.8);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(5,967.25);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(6,1160.7);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(7,1354.15);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(8,1547.6);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(9,1741.05);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(10,1934.5);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(11,2127.95);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(12,2321.4);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(13,2514.85);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(14,2708.3);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(15,2901.75);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(16,3095.2);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(17,3288.65);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(18,3482.1);
   ThetaY_vs_Y_35_40__1715->SetContourLevel(19,3675.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1715->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1715->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1715->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1715->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1715->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1715->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1715->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1715->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1715->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1715->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1715->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1715->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1715->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1715->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1715->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1715->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
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
