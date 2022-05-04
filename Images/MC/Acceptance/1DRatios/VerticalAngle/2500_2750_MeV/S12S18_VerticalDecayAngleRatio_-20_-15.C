void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:12 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1536972,125,2.920246);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__1851 = new TH1D("S12S18_ThetaY_mI20_mI15__1851","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__1851->SetBinContent(314,0.546875);
   S12S18_ThetaY_mI20_mI15__1851->SetBinContent(315,2.140625);
   S12S18_ThetaY_mI20_mI15__1851->SetBinContent(316,1.84375);
   S12S18_ThetaY_mI20_mI15__1851->SetBinContent(317,1.78125);
   S12S18_ThetaY_mI20_mI15__1851->SetBinContent(318,1);
   S12S18_ThetaY_mI20_mI15__1851->SetBinError(314,0.09243875);
   S12S18_ThetaY_mI20_mI15__1851->SetBinError(315,0.1828859);
   S12S18_ThetaY_mI20_mI15__1851->SetBinError(316,0.1697309);
   S12S18_ThetaY_mI20_mI15__1851->SetBinError(317,0.1668293);
   S12S18_ThetaY_mI20_mI15__1851->SetBinError(318,0.125);
   S12S18_ThetaY_mI20_mI15__1851->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__1851->SetMaximum(2.612851);
   S12S18_ThetaY_mI20_mI15__1851->SetEntries(468);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1851->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__1851->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1851->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__1851->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__1851->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__1851->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1851->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1851->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1851->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__1851->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__1851->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1851->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1851->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1851->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1851->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1851->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1852 = new TH1D("ThetaY_mI20_mI15__1852","",630,-1575,1575);
   ThetaY_mI20_mI15__1852->SetBinContent(312,0.05060832);
   ThetaY_mI20_mI15__1852->SetBinContent(313,1.017176);
   ThetaY_mI20_mI15__1852->SetBinContent(314,1.959207);
   ThetaY_mI20_mI15__1852->SetBinContent(315,2.375319);
   ThetaY_mI20_mI15__1852->SetBinContent(316,2.362846);
   ThetaY_mI20_mI15__1852->SetBinContent(317,1.964216);
   ThetaY_mI20_mI15__1852->SetBinContent(318,1);
   ThetaY_mI20_mI15__1852->SetBinContent(319,0.0508128);
   ThetaY_mI20_mI15__1852->SetBinError(312,0.002274675);
   ThetaY_mI20_mI15__1852->SetBinError(313,0.0101978);
   ThetaY_mI20_mI15__1852->SetBinError(314,0.014153);
   ThetaY_mI20_mI15__1852->SetBinError(315,0.01558366);
   ThetaY_mI20_mI15__1852->SetBinError(316,0.01554269);
   ThetaY_mI20_mI15__1852->SetBinError(317,0.01417108);
   ThetaY_mI20_mI15__1852->SetBinError(318,0.01011133);
   ThetaY_mI20_mI15__1852->SetBinError(319,0.002279266);
   ThetaY_mI20_mI15__1852->SetEntries(105441);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1852->SetLineColor(ci);
   ThetaY_mI20_mI15__1852->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1852->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1852->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1852->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1852->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1852->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1852->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1852->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1852->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1852->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1852->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1852->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1852->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1852->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1852->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1852->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1852->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1852->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1852->Draw("AEsame");
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
   
   Double_t _fx3618[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3618[8] = {
   0,
   0,
   0.2791308,
   0.9011946,
   0.7803089,
   0.9068502,
   1,
   0};
   Double_t _felx3618[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3618[8] = {
   0,
   0,
   0.04699689,
   0.07712499,
   0.07191274,
   0.08505869,
   0.1250736,
   0};
   Double_t _fehx3618[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3618[8] = {
   0.5694621,
   0.02828283,
   0.05566701,
   0.08402939,
   0.07886993,
   0.09344204,
   0.1418033,
   0.5671663};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3618,_fy3618,_felx3618,_fehx3618,_fely3618,_fehy3618);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3618 = new TH1F("Graph_Graph3618","",100,-100,100);
   Graph_Graph3618->SetMinimum(0);
   Graph_Graph3618->SetMaximum(1.5);
   Graph_Graph3618->SetDirectory(0);
   Graph_Graph3618->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3618->SetLineColor(ci);
   Graph_Graph3618->GetXaxis()->SetRange(1,100);
   Graph_Graph3618->GetXaxis()->CenterTitle(true);
   Graph_Graph3618->GetXaxis()->SetLabelFont(42);
   Graph_Graph3618->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3618->GetXaxis()->SetTitleFont(42);
   Graph_Graph3618->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3618->GetYaxis()->CenterTitle(true);
   Graph_Graph3618->GetYaxis()->SetLabelFont(42);
   Graph_Graph3618->GetYaxis()->SetTitleFont(42);
   Graph_Graph3618->GetZaxis()->SetLabelFont(42);
   Graph_Graph3618->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3618->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3618);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.612851,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1853 = new TH2D("ThetaY_vs_Y_mI20_mI15__1853","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8121,495);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8147,9949);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8173,19163);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8199,23233);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8225,23111);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8251,19212);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8277,9781);
   ThetaY_vs_Y_mI20_mI15__1853->SetBinContent(8303,497);
   ThetaY_vs_Y_mI20_mI15__1853->SetEntries(105441);
   ThetaY_vs_Y_mI20_mI15__1853->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(1,1161.65);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(2,2323.3);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(3,3484.95);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(4,4646.6);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(5,5808.25);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(6,6969.9);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(7,8131.55);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(8,9293.2);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(9,10454.85);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(10,11616.5);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(11,12778.15);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(12,13939.8);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(13,15101.45);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(14,16263.1);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(15,17424.75);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(16,18586.4);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(17,19748.05);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(18,20909.7);
   ThetaY_vs_Y_mI20_mI15__1853->SetContourLevel(19,22071.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1853->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1853->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1853->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1853->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1853->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1853->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1853->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1853->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1853->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1853->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1853->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1853->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1853->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1853->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1853->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1853->Draw("COL");
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
