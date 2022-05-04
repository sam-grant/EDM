void S18_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.1551463,125,2.94778);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__1815 = new TH1D("S18_ThetaY_15_20__1815","",630,-1575,1575);
   S18_ThetaY_15_20__1815->SetBinContent(312,0.03333333);
   S18_ThetaY_15_20__1815->SetBinContent(313,1);
   S18_ThetaY_15_20__1815->SetBinContent(314,1.833333);
   S18_ThetaY_15_20__1815->SetBinContent(315,2.333333);
   S18_ThetaY_15_20__1815->SetBinContent(316,2.166667);
   S18_ThetaY_15_20__1815->SetBinContent(317,0.7);
   S18_ThetaY_15_20__1815->SetBinError(312,0.03333333);
   S18_ThetaY_15_20__1815->SetBinError(313,0.1825742);
   S18_ThetaY_15_20__1815->SetBinError(314,0.2472066);
   S18_ThetaY_15_20__1815->SetBinError(315,0.2788867);
   S18_ThetaY_15_20__1815->SetBinError(316,0.2687419);
   S18_ThetaY_15_20__1815->SetBinError(317,0.1527525);
   S18_ThetaY_15_20__1815->SetMinimum(0);
   S18_ThetaY_15_20__1815->SetMaximum(2.637487);
   S18_ThetaY_15_20__1815->SetEntries(242);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1815->SetLineColor(ci);
   S18_ThetaY_15_20__1815->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1815->SetMarkerColor(ci);
   S18_ThetaY_15_20__1815->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__1815->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__1815->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1815->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1815->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1815->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__1815->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__1815->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1815->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1815->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1815->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1815->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1815->Draw("AE");
   
   TH1D *ThetaY_15_20__1816 = new TH1D("ThetaY_15_20__1816","",630,-1575,1575);
   ThetaY_15_20__1816->SetBinContent(312,0.04610002);
   ThetaY_15_20__1816->SetBinContent(313,1);
   ThetaY_15_20__1816->SetBinContent(314,1.992385);
   ThetaY_15_20__1816->SetBinContent(315,2.349455);
   ThetaY_15_20__1816->SetBinContent(316,2.397716);
   ThetaY_15_20__1816->SetBinContent(317,2.008541);
   ThetaY_15_20__1816->SetBinContent(318,1.007203);
   ThetaY_15_20__1816->SetBinContent(319,0.04980449);
   ThetaY_15_20__1816->SetBinError(312,0.002178021);
   ThetaY_15_20__1816->SetBinError(313,0.01014405);
   ThetaY_15_20__1816->SetBinError(314,0.01431852);
   ThetaY_15_20__1816->SetBinError(315,0.01554874);
   ThetaY_15_20__1816->SetBinError(316,0.01570762);
   ThetaY_15_20__1816->SetBinError(317,0.01437646);
   ThetaY_15_20__1816->SetBinError(318,0.01018052);
   ThetaY_15_20__1816->SetBinError(319,0.00226384);
   ThetaY_15_20__1816->SetEntries(105452);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1816->SetLineColor(ci);
   ThetaY_15_20__1816->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1816->SetMarkerColor(ci);
   ThetaY_15_20__1816->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1816->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1816->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1816->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1816->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1816->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1816->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1816->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1816->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1816->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1816->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1816->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1816->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1816->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1816->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1816->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1816->Draw("AEsame");
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
   
   Double_t _fx3606[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3606[8] = {
   0.7230655,
   1,
   0.9201701,
   0.9931383,
   0.9036379,
   0.3485117,
   0,
   0};
   Double_t _felx3606[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3606[8] = {
   0.5984074,
   0.181822,
   0.1238698,
   0.1185974,
   0.1119469,
   0.07548006,
   0,
   0};
   Double_t _fehx3606[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3606[8] = {
   1.668839,
   0.2183444,
   0.1417903,
   0.133688,
   0.1267609,
   0.09391632,
   0.06093424,
   1.234512};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3606,_fy3606,_felx3606,_fehx3606,_fely3606,_fehy3606);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3606 = new TH1F("Graph_Graph3606","",100,-100,100);
   Graph_Graph3606->SetMinimum(0);
   Graph_Graph3606->SetMaximum(1.5);
   Graph_Graph3606->SetDirectory(0);
   Graph_Graph3606->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3606->SetLineColor(ci);
   Graph_Graph3606->GetXaxis()->SetRange(1,100);
   Graph_Graph3606->GetXaxis()->CenterTitle(true);
   Graph_Graph3606->GetXaxis()->SetLabelFont(42);
   Graph_Graph3606->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3606->GetXaxis()->SetTitleFont(42);
   Graph_Graph3606->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3606->GetYaxis()->CenterTitle(true);
   Graph_Graph3606->GetYaxis()->SetLabelFont(42);
   Graph_Graph3606->GetYaxis()->SetTitleFont(42);
   Graph_Graph3606->GetZaxis()->SetLabelFont(42);
   Graph_Graph3606->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3606->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3606);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.637487,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1817 = new TH2D("ThetaY_vs_Y_15_20__1817","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8128,448);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8154,9718);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8180,19362);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8206,22832);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8232,23301);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8258,19519);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8284,9788);
   ThetaY_vs_Y_15_20__1817->SetBinContent(8310,484);
   ThetaY_vs_Y_15_20__1817->SetEntries(105452);
   ThetaY_vs_Y_15_20__1817->SetContour(20);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(1,1165.05);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(2,2330.1);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(3,3495.15);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(4,4660.2);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(5,5825.25);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(6,6990.3);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(7,8155.35);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(8,9320.4);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(9,10485.45);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(10,11650.5);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(11,12815.55);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(12,13980.6);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(13,15145.65);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(14,16310.7);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(15,17475.75);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(16,18640.8);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(17,19805.85);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(18,20970.9);
   ThetaY_vs_Y_15_20__1817->SetContourLevel(19,22135.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1817->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1817->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1817->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1817->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1817->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1817->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1817->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1817->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1817->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1817->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1817->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1817->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1817->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1817->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1817->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1817->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
