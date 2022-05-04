void S12S18_VerticalDecayAngleRatio_25_30()
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
   upper_pad->Range(-125,-0.06512338,125,1.237344);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__1707 = new TH1D("S12S18_ThetaY_25_30__1707","",630,-1575,1575);
   S12S18_ThetaY_25_30__1707->SetBinContent(312,0.1910112);
   S12S18_ThetaY_25_30__1707->SetBinContent(313,0.6966292);
   S12S18_ThetaY_25_30__1707->SetBinContent(314,0.7303371);
   S12S18_ThetaY_25_30__1707->SetBinContent(315,1);
   S12S18_ThetaY_25_30__1707->SetBinContent(316,0.8314607);
   S12S18_ThetaY_25_30__1707->SetBinContent(317,0.07865169);
   S12S18_ThetaY_25_30__1707->SetBinError(312,0.04632703);
   S12S18_ThetaY_25_30__1707->SetBinError(313,0.088472);
   S12S18_ThetaY_25_30__1707->SetBinError(314,0.09058717);
   S12S18_ThetaY_25_30__1707->SetBinError(315,0.1059998);
   S12S18_ThetaY_25_30__1707->SetBinError(316,0.09665534);
   S12S18_ThetaY_25_30__1707->SetBinError(317,0.02972754);
   S12S18_ThetaY_25_30__1707->SetMinimum(0);
   S12S18_ThetaY_25_30__1707->SetMaximum(1.107097);
   S12S18_ThetaY_25_30__1707->SetEntries(314);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1707->SetLineColor(ci);
   S12S18_ThetaY_25_30__1707->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1707->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__1707->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__1707->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__1707->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1707->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1707->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1707->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__1707->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__1707->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1707->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1707->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1707->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1707->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1707->Draw("AE");
   
   TH1D *ThetaY_25_30__1708 = new TH1D("ThetaY_25_30__1708","",630,-1575,1575);
   ThetaY_25_30__1708->SetBinContent(311,0.005865594);
   ThetaY_25_30__1708->SetBinContent(312,0.2945366);
   ThetaY_25_30__1708->SetBinContent(313,0.7117479);
   ThetaY_25_30__1708->SetBinContent(314,0.9110106);
   ThetaY_25_30__1708->SetBinContent(315,1);
   ThetaY_25_30__1708->SetBinContent(316,1.006452);
   ThetaY_25_30__1708->SetBinContent(317,0.9162896);
   ThetaY_25_30__1708->SetBinContent(318,0.7207977);
   ThetaY_25_30__1708->SetBinContent(319,0.3052623);
   ThetaY_25_30__1708->SetBinContent(320,0.006535948);
   ThetaY_25_30__1708->SetBinError(311,0.0007010726);
   ThetaY_25_30__1708->SetBinError(312,0.004967943);
   ThetaY_25_30__1708->SetBinError(313,0.007722717);
   ThetaY_25_30__1708->SetBinError(314,0.008737128);
   ThetaY_25_30__1708->SetBinError(315,0.009153917);
   ThetaY_25_30__1708->SetBinError(316,0.009183401);
   ThetaY_25_30__1708->SetBinError(317,0.008762406);
   ThetaY_25_30__1708->SetBinError(318,0.007771658);
   ThetaY_25_30__1708->SetBinError(319,0.005057589);
   ThetaY_25_30__1708->SetBinError(320,0.0007400503);
   ThetaY_25_30__1708->SetEntries(70154);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1708->SetLineColor(ci);
   ThetaY_25_30__1708->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1708->SetMarkerColor(ci);
   ThetaY_25_30__1708->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1708->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1708->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1708->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1708->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1708->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1708->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1708->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1708->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1708->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1708->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1708->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1708->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1708->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1708->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1708->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1708->Draw("AEsame");
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
   
   Double_t _fx3570[10] = {
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
   Double_t _fy3570[10] = {
   0,
   0.6485144,
   0.9787583,
   0.801678,
   1,
   0.8261304,
   0.08583715,
   0,
   0,
   0};
   Double_t _felx3570[10] = {
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
   Double_t _fely3570[10] = {
   0,
   0.1560825,
   0.1244108,
   0.09947108,
   0.1061898,
   0.09610907,
   0.03166402,
   0,
   0,
   0};
   Double_t _fehx3570[10] = {
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
   Double_t _fehy3570[10] = {
   3.57339,
   0.1991376,
   0.1413443,
   0.1126619,
   0.1181226,
   0.1080068,
   0.04625565,
   0.02870133,
   0.06778061,
   3.202548};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3570,_fy3570,_felx3570,_fehx3570,_fely3570,_fehy3570);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3570 = new TH1F("Graph_Graph3570","",100,-100,100);
   Graph_Graph3570->SetMinimum(0);
   Graph_Graph3570->SetMaximum(1.5);
   Graph_Graph3570->SetDirectory(0);
   Graph_Graph3570->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3570->SetLineColor(ci);
   Graph_Graph3570->GetXaxis()->SetRange(1,100);
   Graph_Graph3570->GetXaxis()->CenterTitle(true);
   Graph_Graph3570->GetXaxis()->SetLabelFont(42);
   Graph_Graph3570->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3570->GetXaxis()->SetTitleFont(42);
   Graph_Graph3570->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3570->GetYaxis()->CenterTitle(true);
   Graph_Graph3570->GetYaxis()->SetLabelFont(42);
   Graph_Graph3570->GetYaxis()->SetTitleFont(42);
   Graph_Graph3570->GetZaxis()->SetLabelFont(42);
   Graph_Graph3570->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3570->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3570);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.107097,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1709 = new TH2D("ThetaY_vs_Y_25_30__1709","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8104,70);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8130,3515);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8156,8494);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8182,10872);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8208,11934);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8234,12011);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8260,10935);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8286,8602);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8312,3643);
   ThetaY_vs_Y_25_30__1709->SetBinContent(8338,78);
   ThetaY_vs_Y_25_30__1709->SetEntries(70154);
   ThetaY_vs_Y_25_30__1709->SetContour(20);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(1,600.55);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(2,1201.1);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(3,1801.65);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(4,2402.2);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(5,3002.75);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(6,3603.3);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(7,4203.85);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(8,4804.4);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(9,5404.95);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(10,6005.5);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(11,6606.05);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(12,7206.6);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(13,7807.15);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(14,8407.7);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(15,9008.25);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(16,9608.8);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(17,10209.35);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(18,10809.9);
   ThetaY_vs_Y_25_30__1709->SetContourLevel(19,11410.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1709->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1709->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1709->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1709->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1709->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1709->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1709->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1709->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1709->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1709->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1709->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1709->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1709->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1709->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1709->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1709->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
