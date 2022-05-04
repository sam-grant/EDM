void S12_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:06 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09236345,125,1.754905);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__1557 = new TH1D("S12_ThetaY_mI35_mI30__1557","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__1557->SetBinContent(315,0.56);
   S12_ThetaY_mI35_mI30__1557->SetBinContent(316,0.88);
   S12_ThetaY_mI35_mI30__1557->SetBinContent(317,1.08);
   S12_ThetaY_mI35_mI30__1557->SetBinContent(318,1);
   S12_ThetaY_mI35_mI30__1557->SetBinContent(319,0.4);
   S12_ThetaY_mI35_mI30__1557->SetBinError(315,0.1496663);
   S12_ThetaY_mI35_mI30__1557->SetBinError(316,0.1876166);
   S12_ThetaY_mI35_mI30__1557->SetBinError(317,0.2078461);
   S12_ThetaY_mI35_mI30__1557->SetBinError(318,0.2);
   S12_ThetaY_mI35_mI30__1557->SetBinError(319,0.1264911);
   S12_ThetaY_mI35_mI30__1557->SetMinimum(0);
   S12_ThetaY_mI35_mI30__1557->SetMaximum(1.570179);
   S12_ThetaY_mI35_mI30__1557->SetEntries(98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1557->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__1557->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1557->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__1557->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__1557->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__1557->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1557->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1557->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1557->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__1557->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__1557->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1557->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1557->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1557->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1557->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1557->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1558 = new TH1D("ThetaY_mI35_mI30__1558","",630,-1575,1575);
   ThetaY_mI35_mI30__1558->SetBinContent(311,0.008537059);
   ThetaY_mI35_mI30__1558->SetBinContent(312,0.4068685);
   ThetaY_mI35_mI30__1558->SetBinContent(313,0.9883586);
   ThetaY_mI35_mI30__1558->SetBinContent(314,1.23865);
   ThetaY_mI35_mI30__1558->SetBinContent(315,1.427435);
   ThetaY_mI35_mI30__1558->SetBinContent(316,1.390376);
   ThetaY_mI35_mI30__1558->SetBinContent(317,1.257858);
   ThetaY_mI35_mI30__1558->SetBinContent(318,1);
   ThetaY_mI35_mI30__1558->SetBinContent(319,0.4140473);
   ThetaY_mI35_mI30__1558->SetBinContent(320,0.008343035);
   ThetaY_mI35_mI30__1558->SetBinError(311,0.00128701);
   ThetaY_mI35_mI30__1558->SetBinError(312,0.008884946);
   ThetaY_mI35_mI30__1558->SetBinError(313,0.01384794);
   ThetaY_mI35_mI30__1558->SetBinError(314,0.01550251);
   ThetaY_mI35_mI30__1558->SetBinError(315,0.01664202);
   ThetaY_mI35_mI30__1558->SetBinError(316,0.01642457);
   ThetaY_mI35_mI30__1558->SetBinError(317,0.01562225);
   ThetaY_mI35_mI30__1558->SetBinError(318,0.01392925);
   ThetaY_mI35_mI30__1558->SetBinError(319,0.008962988);
   ThetaY_mI35_mI30__1558->SetBinError(320,0.001272301);
   ThetaY_mI35_mI30__1558->SetEntries(41956);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1558->SetLineColor(ci);
   ThetaY_mI35_mI30__1558->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1558->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1558->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1558->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1558->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1558->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1558->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1558->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1558->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1558->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1558->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1558->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1558->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1558->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1558->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1558->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1558->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1558->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1558->Draw("AEsame");
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
   
   Double_t _fx3520[10] = {
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
   Double_t _fy3520[10] = {
   0,
   0,
   0,
   0,
   0.3923121,
   0.6329221,
   0.8586025,
   1,
   0.9660731,
   0};
   Double_t _felx3520[10] = {
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
   Double_t _fely3520[10] = {
   0,
   0,
   0,
   0,
   0.1036765,
   0.134103,
   0.1645381,
   0.1991166,
   0.3009625,
   0};
   Double_t _fehx3520[10] = {
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
   Double_t _fehy3520[10] = {
   8.809029,
   0.1810738,
   0.07452172,
   0.05946111,
   0.1355315,
   0.1660708,
   0.1995867,
   0.2433944,
   0.4135961,
   9.018308};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3520,_fy3520,_felx3520,_fehx3520,_fely3520,_fehy3520);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3520 = new TH1F("Graph_Graph3520","",100,-100,100);
   Graph_Graph3520->SetMinimum(0);
   Graph_Graph3520->SetMaximum(1.5);
   Graph_Graph3520->SetDirectory(0);
   Graph_Graph3520->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3520->SetLineColor(ci);
   Graph_Graph3520->GetXaxis()->SetRange(1,100);
   Graph_Graph3520->GetXaxis()->CenterTitle(true);
   Graph_Graph3520->GetXaxis()->SetLabelFont(42);
   Graph_Graph3520->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3520->GetXaxis()->SetTitleFont(42);
   Graph_Graph3520->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3520->GetYaxis()->CenterTitle(true);
   Graph_Graph3520->GetYaxis()->SetLabelFont(42);
   Graph_Graph3520->GetYaxis()->SetTitleFont(42);
   Graph_Graph3520->GetZaxis()->SetLabelFont(42);
   Graph_Graph3520->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3520->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3520);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.570179,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1559 = new TH2D("ThetaY_vs_Y_mI35_mI30__1559","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8092,44);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8118,2097);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8144,5094);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8170,6384);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8196,7357);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8222,7166);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8248,6483);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8274,5154);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8300,2134);
   ThetaY_vs_Y_mI35_mI30__1559->SetBinContent(8326,43);
   ThetaY_vs_Y_mI35_mI30__1559->SetEntries(41956);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1559->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1559->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1559->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1559->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1559->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1559->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1559->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1559->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1559->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1559->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1559->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1559->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1559->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1559->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1559->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1559->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
