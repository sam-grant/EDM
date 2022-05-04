void S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06472531,125,1.229781);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__1629 = new TH1D("S18_ThetaY_mI10_mI5__1629","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__1629->SetBinContent(313,0.2037037);
   S18_ThetaY_mI10_mI5__1629->SetBinContent(314,0.7777778);
   S18_ThetaY_mI10_mI5__1629->SetBinContent(315,1);
   S18_ThetaY_mI10_mI5__1629->SetBinContent(316,0.8888889);
   S18_ThetaY_mI10_mI5__1629->SetBinContent(317,0.7901235);
   S18_ThetaY_mI10_mI5__1629->SetBinContent(318,0.6790123);
   S18_ThetaY_mI10_mI5__1629->SetBinContent(319,0.0617284);
   S18_ThetaY_mI10_mI5__1629->SetBinError(313,0.03546026);
   S18_ThetaY_mI10_mI5__1629->SetBinError(314,0.06928995);
   S18_ThetaY_mI10_mI5__1629->SetBinError(315,0.07856742);
   S18_ThetaY_mI10_mI5__1629->SetBinError(316,0.07407407);
   S18_ThetaY_mI10_mI5__1629->SetBinError(317,0.06983771);
   S18_ThetaY_mI10_mI5__1629->SetBinError(318,0.06474129);
   S18_ThetaY_mI10_mI5__1629->SetBinError(319,0.01952023);
   S18_ThetaY_mI10_mI5__1629->SetMinimum(0);
   S18_ThetaY_mI10_mI5__1629->SetMaximum(1.10033);
   S18_ThetaY_mI10_mI5__1629->SetEntries(713);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1629->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__1629->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1629->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__1629->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__1629->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__1629->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1629->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1629->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1629->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__1629->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__1629->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1629->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1629->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1629->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1629->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1629->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1630 = new TH1D("ThetaY_mI10_mI5__1630","",630,-1575,1575);
   ThetaY_mI10_mI5__1630->SetBinContent(311,0.006023709);
   ThetaY_mI10_mI5__1630->SetBinContent(312,0.3003709);
   ThetaY_mI10_mI5__1630->SetBinContent(313,0.715921);
   ThetaY_mI10_mI5__1630->SetBinContent(314,0.9056786);
   ThetaY_mI10_mI5__1630->SetBinContent(315,1);
   ThetaY_mI10_mI5__1630->SetBinContent(316,1.0003);
   ThetaY_mI10_mI5__1630->SetBinContent(317,0.9222063);
   ThetaY_mI10_mI5__1630->SetBinContent(318,0.707132);
   ThetaY_mI10_mI5__1630->SetBinContent(319,0.3012712);
   ThetaY_mI10_mI5__1630->SetBinContent(320,0.006623936);
   ThetaY_mI10_mI5__1630->SetBinError(311,0.0003593444);
   ThetaY_mI10_mI5__1630->SetBinError(312,0.00253751);
   ThetaY_mI10_mI5__1630->SetBinError(313,0.003917522);
   ThetaY_mI10_mI5__1630->SetBinError(314,0.004406217);
   ThetaY_mI10_mI5__1630->SetBinError(315,0.004629977);
   ThetaY_mI10_mI5__1630->SetBinError(316,0.004630672);
   ThetaY_mI10_mI5__1630->SetBinError(317,0.00444624);
   ThetaY_mI10_mI5__1630->SetBinError(318,0.0038934);
   ThetaY_mI10_mI5__1630->SetBinError(319,0.00254131);
   ThetaY_mI10_mI5__1630->SetBinError(320,0.0003768226);
   ThetaY_mI10_mI5__1630->SetEntries(273621);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1630->SetLineColor(ci);
   ThetaY_mI10_mI5__1630->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1630->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1630->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1630->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1630->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1630->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1630->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1630->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1630->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1630->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1630->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1630->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1630->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1630->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1630->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1630->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1630->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1630->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1630->Draw("AEsame");
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
   
   Double_t _fx3544[10] = {
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
   Double_t _fy3544[10] = {
   0,
   0,
   0.2845338,
   0.858779,
   1,
   0.8886222,
   0.8567752,
   0.9602342,
   0.2048931,
   0};
   Double_t _felx3544[10] = {
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
   Double_t _fely3544[10] = {
   0,
   0,
   0.04930232,
   0.07651746,
   0.07862164,
   0.07407908,
   0.07574151,
   0.09156635,
   0.06371564,
   0};
   Double_t _fehx3544[10] = {
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
   Double_t _fehy3544[10] = {
   1.892794,
   0.03783682,
   0.05868828,
   0.08366098,
   0.08506189,
   0.08052959,
   0.08275457,
   0.1007469,
   0.08747124,
   1.720767};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3544,_fy3544,_felx3544,_fehx3544,_fely3544,_fehy3544);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3544 = new TH1F("Graph_Graph3544","",100,-100,100);
   Graph_Graph3544->SetMinimum(0);
   Graph_Graph3544->SetMaximum(1.5);
   Graph_Graph3544->SetDirectory(0);
   Graph_Graph3544->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3544->SetLineColor(ci);
   Graph_Graph3544->GetXaxis()->SetRange(1,100);
   Graph_Graph3544->GetXaxis()->CenterTitle(true);
   Graph_Graph3544->GetXaxis()->SetLabelFont(42);
   Graph_Graph3544->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3544->GetXaxis()->SetTitleFont(42);
   Graph_Graph3544->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3544->GetYaxis()->CenterTitle(true);
   Graph_Graph3544->GetYaxis()->SetLabelFont(42);
   Graph_Graph3544->GetYaxis()->SetTitleFont(42);
   Graph_Graph3544->GetZaxis()->SetLabelFont(42);
   Graph_Graph3544->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3544->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3544);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.10033,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1631 = new TH2D("ThetaY_vs_Y_mI10_mI5__1631","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8097,281);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8123,14012);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8149,33397);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8175,42249);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8201,46649);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8227,46663);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8253,43020);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8279,32987);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8305,14054);
   ThetaY_vs_Y_mI10_mI5__1631->SetBinContent(8331,309);
   ThetaY_vs_Y_mI10_mI5__1631->SetEntries(273621);
   ThetaY_vs_Y_mI10_mI5__1631->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(1,2333.15);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(2,4666.3);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(3,6999.45);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(4,9332.6);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(5,11665.75);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(6,13998.9);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(7,16332.05);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(8,18665.2);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(9,20998.35);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(10,23331.5);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(11,25664.65);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(12,27997.8);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(13,30330.95);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(14,32664.1);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(15,34997.25);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(16,37330.4);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(17,39663.55);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(18,41996.7);
   ThetaY_vs_Y_mI10_mI5__1631->SetContourLevel(19,44329.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1631->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1631->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1631->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1631->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1631->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1631->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1631->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1631->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1631->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1631->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1631->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1631->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1631->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1631->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1631->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1631->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-10_-5","Reco vertices","lpf");
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
