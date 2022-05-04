void S12S18_VerticalDecayAngleRatio_40_45()
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
   upper_pad->Range(-125,-0.2083585,125,3.958811);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_40_45__1716 = new TH1D("S12S18_ThetaY_40_45__1716","",630,-1575,1575);
   S12S18_ThetaY_40_45__1716->SetBinContent(312,1);
   S12S18_ThetaY_40_45__1716->SetBinContent(313,1.166667);
   S12S18_ThetaY_40_45__1716->SetBinContent(314,2);
   S12S18_ThetaY_40_45__1716->SetBinContent(315,1.333333);
   S12S18_ThetaY_40_45__1716->SetBinError(312,0.4082483);
   S12S18_ThetaY_40_45__1716->SetBinError(313,0.4409586);
   S12S18_ThetaY_40_45__1716->SetBinError(314,0.5773503);
   S12S18_ThetaY_40_45__1716->SetBinError(315,0.4714045);
   S12S18_ThetaY_40_45__1716->SetMinimum(0);
   S12S18_ThetaY_40_45__1716->SetMaximum(3.542094);
   S12S18_ThetaY_40_45__1716->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1716->SetLineColor(ci);
   S12S18_ThetaY_40_45__1716->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_40_45__1716->SetMarkerColor(ci);
   S12S18_ThetaY_40_45__1716->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_40_45__1716->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_40_45__1716->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1716->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1716->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1716->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_40_45__1716->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_40_45__1716->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1716->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1716->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_40_45__1716->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_40_45__1716->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_40_45__1716->Draw("AE");
   
   TH1D *ThetaY_40_45__1717 = new TH1D("ThetaY_40_45__1717","",630,-1575,1575);
   ThetaY_40_45__1717->SetBinContent(311,0.01068376);
   ThetaY_40_45__1717->SetBinContent(312,1);
   ThetaY_40_45__1717->SetBinContent(313,2.237179);
   ThetaY_40_45__1717->SetBinContent(314,3.07906);
   ThetaY_40_45__1717->SetBinContent(315,3.147436);
   ThetaY_40_45__1717->SetBinContent(316,3.220085);
   ThetaY_40_45__1717->SetBinContent(317,2.861111);
   ThetaY_40_45__1717->SetBinContent(318,2.087607);
   ThetaY_40_45__1717->SetBinContent(319,1.098291);
   ThetaY_40_45__1717->SetBinContent(320,0.01068376);
   ThetaY_40_45__1717->SetBinError(311,0.004777923);
   ThetaY_40_45__1717->SetBinError(312,0.04622502);
   ThetaY_40_45__1717->SetBinError(313,0.0691397);
   ThetaY_40_45__1717->SetBinError(314,0.08111219);
   ThetaY_40_45__1717->SetBinError(315,0.08200787);
   ThetaY_40_45__1717->SetBinError(316,0.08294893);
   ThetaY_40_45__1717->SetBinError(317,0.07818878);
   ThetaY_40_45__1717->SetBinError(318,0.06678846);
   ThetaY_40_45__1717->SetBinError(319,0.04844352);
   ThetaY_40_45__1717->SetBinError(320,0.004777923);
   ThetaY_40_45__1717->SetEntries(8776);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1717->SetLineColor(ci);
   ThetaY_40_45__1717->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1717->SetMarkerColor(ci);
   ThetaY_40_45__1717->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1717->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1717->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1717->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1717->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1717->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1717->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1717->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1717->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1717->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1717->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1717->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1717->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1717->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1717->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1717->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1717->Draw("AEsame");
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
   
   Double_t _fx3573[10] = {
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
   Double_t _fy3573[10] = {
   0,
   1,
   0.52149,
   0.6495489,
   0.4236253,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3573[10] = {
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
   Double_t _fely3573[10] = {
   0,
   0.398823,
   0.1928775,
   0.1855752,
   0.1469485,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3573[10] = {
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
   Double_t _fehy3573[10] = {
   34.72071,
   0.6033887,
   0.2823249,
   0.248236,
   0.2097546,
   0.09534667,
   0.1073177,
   0.1471188,
   0.2798778,
   34.72071};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3573,_fy3573,_felx3573,_fehx3573,_fely3573,_fehy3573);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3573 = new TH1F("Graph_Graph3573","",100,-100,100);
   Graph_Graph3573->SetMinimum(0);
   Graph_Graph3573->SetMaximum(1.5);
   Graph_Graph3573->SetDirectory(0);
   Graph_Graph3573->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3573->SetLineColor(ci);
   Graph_Graph3573->GetXaxis()->SetRange(1,100);
   Graph_Graph3573->GetXaxis()->CenterTitle(true);
   Graph_Graph3573->GetXaxis()->SetLabelFont(42);
   Graph_Graph3573->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3573->GetXaxis()->SetTitleFont(42);
   Graph_Graph3573->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3573->GetYaxis()->CenterTitle(true);
   Graph_Graph3573->GetYaxis()->SetLabelFont(42);
   Graph_Graph3573->GetYaxis()->SetTitleFont(42);
   Graph_Graph3573->GetZaxis()->SetLabelFont(42);
   Graph_Graph3573->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3573->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3573);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.542094,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1718 = new TH2D("ThetaY_vs_Y_40_45__1718","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8107,5);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8133,468);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8159,1047);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8185,1441);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8211,1473);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8237,1507);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8263,1339);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8289,977);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8315,514);
   ThetaY_vs_Y_40_45__1718->SetBinContent(8341,5);
   ThetaY_vs_Y_40_45__1718->SetEntries(8776);
   ThetaY_vs_Y_40_45__1718->SetContour(20);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(1,75.35);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(2,150.7);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(3,226.05);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(4,301.4);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(5,376.75);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(6,452.1);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(7,527.45);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(8,602.8);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(9,678.15);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(10,753.5);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(11,828.85);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(12,904.2);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(13,979.55);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(14,1054.9);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(15,1130.25);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(16,1205.6);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(17,1280.95);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(18,1356.3);
   ThetaY_vs_Y_40_45__1718->SetContourLevel(19,1431.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1718->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1718->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1718->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1718->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1718->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1718->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1718->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1718->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1718->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1718->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1718->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1718->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1718->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1718->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1718->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1718->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_40_45","Reco vertices","lpf");
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
