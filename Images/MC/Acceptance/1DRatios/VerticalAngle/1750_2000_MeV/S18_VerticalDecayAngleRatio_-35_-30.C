void S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.1213378,125,2.305418);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__1272 = new TH1D("S18_ThetaY_mI35_mI30__1272","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__1272->SetBinContent(315,1.62069);
   S18_ThetaY_mI35_mI30__1272->SetBinContent(316,1.689655);
   S18_ThetaY_mI35_mI30__1272->SetBinContent(317,1.413793);
   S18_ThetaY_mI35_mI30__1272->SetBinContent(318,1.62069);
   S18_ThetaY_mI35_mI30__1272->SetBinContent(319,1.275862);
   S18_ThetaY_mI35_mI30__1272->SetBinContent(320,1);
   S18_ThetaY_mI35_mI30__1272->SetBinContent(321,0.03448276);
   S18_ThetaY_mI35_mI30__1272->SetBinError(315,0.2364019);
   S18_ThetaY_mI35_mI30__1272->SetBinError(316,0.2413793);
   S18_ThetaY_mI35_mI30__1272->SetBinError(317,0.2207974);
   S18_ThetaY_mI35_mI30__1272->SetBinError(318,0.2364019);
   S18_ThetaY_mI35_mI30__1272->SetBinError(319,0.2097504);
   S18_ThetaY_mI35_mI30__1272->SetBinError(320,0.1856953);
   S18_ThetaY_mI35_mI30__1272->SetBinError(321,0.03448276);
   S18_ThetaY_mI35_mI30__1272->SetMinimum(0);
   S18_ThetaY_mI35_mI30__1272->SetMaximum(2.062743);
   S18_ThetaY_mI35_mI30__1272->SetEntries(251);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1272->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__1272->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1272->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__1272->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__1272->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__1272->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1272->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1272->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1272->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__1272->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__1272->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1272->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1272->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1272->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1272->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1272->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1273 = new TH1D("ThetaY_mI35_mI30__1273","",630,-1575,1575);
   ThetaY_mI35_mI30__1273->SetBinContent(309,0.0008818342);
   ThetaY_mI35_mI30__1273->SetBinContent(310,0.2729277);
   ThetaY_mI35_mI30__1273->SetBinContent(311,1.016975);
   ThetaY_mI35_mI30__1273->SetBinContent(312,1.406966);
   ThetaY_mI35_mI30__1273->SetBinContent(313,1.676367);
   ThetaY_mI35_mI30__1273->SetBinContent(314,1.830247);
   ThetaY_mI35_mI30__1273->SetBinContent(315,1.824074);
   ThetaY_mI35_mI30__1273->SetBinContent(316,1.87522);
   ThetaY_mI35_mI30__1273->SetBinContent(317,1.803351);
   ThetaY_mI35_mI30__1273->SetBinContent(318,1.664242);
   ThetaY_mI35_mI30__1273->SetBinContent(319,1.430556);
   ThetaY_mI35_mI30__1273->SetBinContent(320,1);
   ThetaY_mI35_mI30__1273->SetBinContent(321,0.2890212);
   ThetaY_mI35_mI30__1273->SetBinContent(322,0.0008818342);
   ThetaY_mI35_mI30__1273->SetBinError(309,0.0004409171);
   ThetaY_mI35_mI30__1273->SetBinError(310,0.007756884);
   ThetaY_mI35_mI30__1273->SetBinError(311,0.01497334);
   ThetaY_mI35_mI30__1273->SetBinError(312,0.01761187);
   ThetaY_mI35_mI30__1273->SetBinError(313,0.01922419);
   ThetaY_mI35_mI30__1273->SetBinError(314,0.02008715);
   ThetaY_mI35_mI30__1273->SetBinError(315,0.02005325);
   ThetaY_mI35_mI30__1273->SetBinError(316,0.02033245);
   ThetaY_mI35_mI30__1273->SetBinError(317,0.01993901);
   ThetaY_mI35_mI30__1273->SetBinError(318,0.01915454);
   ThetaY_mI35_mI30__1273->SetBinError(319,0.01775889);
   ThetaY_mI35_mI30__1273->SetBinError(320,0.01484785);
   ThetaY_mI35_mI30__1273->SetBinError(321,0.007982305);
   ThetaY_mI35_mI30__1273->SetBinError(322,0.0004409171);
   ThetaY_mI35_mI30__1273->SetEntries(72992);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1273->SetLineColor(ci);
   ThetaY_mI35_mI30__1273->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1273->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1273->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1273->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1273->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1273->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1273->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1273->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1273->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1273->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1273->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1273->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1273->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1273->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1273->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1273->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1273->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1273->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1273->Draw("AEsame");
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
   
   Double_t _fx3425[14] = {
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
   Double_t _fy3425[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.8884999,
   0.9010435,
   0.7839811,
   0.9738307,
   0.8918647,
   1,
   0.1193088,
   0};
   Double_t _felx3425[14] = {
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
   Double_t _fely3425[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.129497,
   0.1286414,
   0.1222339,
   0.1419715,
   0.1463608,
   0.1851884,
   0.09871208,
   0};
   Double_t _fehx3425[14] = {
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
   Double_t _fehy3425[14] = {
   91.42052,
   0.232775,
   0.0624363,
   0.04512735,
   0.03787428,
   0.03468961,
   0.14992,
   0.1484808,
   0.1429761,
   0.1643703,
   0.1726314,
   0.2231788,
   0.2746991,
   91.42052};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3425,_fy3425,_felx3425,_fehx3425,_fely3425,_fehy3425);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3425 = new TH1F("Graph_Graph3425","",100,-100,100);
   Graph_Graph3425->SetMinimum(0);
   Graph_Graph3425->SetMaximum(1.5);
   Graph_Graph3425->SetDirectory(0);
   Graph_Graph3425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3425->SetLineColor(ci);
   Graph_Graph3425->GetXaxis()->SetRange(1,100);
   Graph_Graph3425->GetXaxis()->CenterTitle(true);
   Graph_Graph3425->GetXaxis()->SetLabelFont(42);
   Graph_Graph3425->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3425->GetXaxis()->SetTitleFont(42);
   Graph_Graph3425->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3425->GetYaxis()->CenterTitle(true);
   Graph_Graph3425->GetYaxis()->SetLabelFont(42);
   Graph_Graph3425->GetYaxis()->SetTitleFont(42);
   Graph_Graph3425->GetZaxis()->SetLabelFont(42);
   Graph_Graph3425->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3425->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3425);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.062743,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1274 = new TH2D("ThetaY_vs_Y_mI35_mI30__1274","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8040,4);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8066,1238);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8092,4613);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8118,6382);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8144,7604);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8170,8302);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8196,8274);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8222,8506);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8248,8180);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8274,7549);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8300,6489);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8326,4536);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8352,1311);
   ThetaY_vs_Y_mI35_mI30__1274->SetBinContent(8378,4);
   ThetaY_vs_Y_mI35_mI30__1274->SetEntries(72992);
   ThetaY_vs_Y_mI35_mI30__1274->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(1,425.3);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(2,850.6);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(3,1275.9);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(4,1701.2);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(5,2126.5);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(6,2551.8);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(7,2977.1);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(8,3402.4);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(9,3827.7);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(10,4253);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(11,4678.3);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(12,5103.6);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(13,5528.9);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(14,5954.2);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(15,6379.5);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(16,6804.8);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(17,7230.1);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(18,7655.4);
   ThetaY_vs_Y_mI35_mI30__1274->SetContourLevel(19,8080.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1274->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1274->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1274->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1274->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1274->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1274->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1274->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1274->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1274->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1274->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1274->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1274->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1274->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1274->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1274->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1274->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
