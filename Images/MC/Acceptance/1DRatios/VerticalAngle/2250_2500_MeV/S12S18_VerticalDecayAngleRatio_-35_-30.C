void S12S18_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI35_mI30__1671 = new TH1D("S12S18_ThetaY_mI35_mI30__1671","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__1671->SetBinContent(314,0.06976744);
   S12S18_ThetaY_mI35_mI30__1671->SetBinContent(315,0.5813953);
   S12S18_ThetaY_mI35_mI30__1671->SetBinContent(316,1.046512);
   S12S18_ThetaY_mI35_mI30__1671->SetBinContent(317,1.255814);
   S12S18_ThetaY_mI35_mI30__1671->SetBinContent(318,1);
   S12S18_ThetaY_mI35_mI30__1671->SetBinContent(319,0.3953488);
   S12S18_ThetaY_mI35_mI30__1671->SetBinError(314,0.04028025);
   S12S18_ThetaY_mI35_mI30__1671->SetBinError(315,0.1162791);
   S12S18_ThetaY_mI35_mI30__1671->SetBinError(316,0.1560047);
   S12S18_ThetaY_mI35_mI30__1671->SetBinError(317,0.1708946);
   S12S18_ThetaY_mI35_mI30__1671->SetBinError(318,0.1524986);
   S12S18_ThetaY_mI35_mI30__1671->SetBinError(319,0.09588618);
   S12S18_ThetaY_mI35_mI30__1671->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__1671->SetMaximum(1.570179);
   S12S18_ThetaY_mI35_mI30__1671->SetEntries(187);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1671->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__1671->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1671->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__1671->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__1671->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__1671->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1671->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1671->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1671->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__1671->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__1671->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1671->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1671->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1671->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1671->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1671->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1672 = new TH1D("ThetaY_mI35_mI30__1672","",630,-1575,1575);
   ThetaY_mI35_mI30__1672->SetBinContent(311,0.008537059);
   ThetaY_mI35_mI30__1672->SetBinContent(312,0.4068685);
   ThetaY_mI35_mI30__1672->SetBinContent(313,0.9883586);
   ThetaY_mI35_mI30__1672->SetBinContent(314,1.23865);
   ThetaY_mI35_mI30__1672->SetBinContent(315,1.427435);
   ThetaY_mI35_mI30__1672->SetBinContent(316,1.390376);
   ThetaY_mI35_mI30__1672->SetBinContent(317,1.257858);
   ThetaY_mI35_mI30__1672->SetBinContent(318,1);
   ThetaY_mI35_mI30__1672->SetBinContent(319,0.4140473);
   ThetaY_mI35_mI30__1672->SetBinContent(320,0.008343035);
   ThetaY_mI35_mI30__1672->SetBinError(311,0.00128701);
   ThetaY_mI35_mI30__1672->SetBinError(312,0.008884946);
   ThetaY_mI35_mI30__1672->SetBinError(313,0.01384794);
   ThetaY_mI35_mI30__1672->SetBinError(314,0.01550251);
   ThetaY_mI35_mI30__1672->SetBinError(315,0.01664202);
   ThetaY_mI35_mI30__1672->SetBinError(316,0.01642457);
   ThetaY_mI35_mI30__1672->SetBinError(317,0.01562225);
   ThetaY_mI35_mI30__1672->SetBinError(318,0.01392925);
   ThetaY_mI35_mI30__1672->SetBinError(319,0.008962988);
   ThetaY_mI35_mI30__1672->SetBinError(320,0.001272301);
   ThetaY_mI35_mI30__1672->SetEntries(41956);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1672->SetLineColor(ci);
   ThetaY_mI35_mI30__1672->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1672->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1672->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1672->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1672->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1672->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1672->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1672->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1672->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1672->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1672->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1672->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1672->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1672->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1672->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1672->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1672->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1672->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1672->Draw("AEsame");
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
   
   Double_t _fx3558[10] = {
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
   Double_t _fy3558[10] = {
   0,
   0,
   0,
   0.05632541,
   0.4073008,
   0.7526822,
   0.998375,
   1,
   0.9548397,
   0};
   Double_t _felx3558[10] = {
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
   Double_t _fely3558[10] = {
   0,
   0,
   0,
   0.03065954,
   0.08104389,
   0.1121277,
   0.1359924,
   0.1525214,
   0.2301461,
   0};
   Double_t _fehx3558[10] = {
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
   Double_t _fehy3558[10] = {
   5.121529,
   0.1052754,
   0.04332658,
   0.05481473,
   0.09904563,
   0.130238,
   0.1559348,
   0.1778042,
   0.2937967,
   5.243202};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3558,_fy3558,_felx3558,_fehx3558,_fely3558,_fehy3558);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3558 = new TH1F("Graph_Graph3558","",100,-100,100);
   Graph_Graph3558->SetMinimum(0);
   Graph_Graph3558->SetMaximum(1.5);
   Graph_Graph3558->SetDirectory(0);
   Graph_Graph3558->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3558->SetLineColor(ci);
   Graph_Graph3558->GetXaxis()->SetRange(1,100);
   Graph_Graph3558->GetXaxis()->CenterTitle(true);
   Graph_Graph3558->GetXaxis()->SetLabelFont(42);
   Graph_Graph3558->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3558->GetXaxis()->SetTitleFont(42);
   Graph_Graph3558->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3558->GetYaxis()->CenterTitle(true);
   Graph_Graph3558->GetYaxis()->SetLabelFont(42);
   Graph_Graph3558->GetYaxis()->SetTitleFont(42);
   Graph_Graph3558->GetZaxis()->SetLabelFont(42);
   Graph_Graph3558->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3558->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3558);
   
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1673 = new TH2D("ThetaY_vs_Y_mI35_mI30__1673","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8092,44);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8118,2097);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8144,5094);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8170,6384);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8196,7357);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8222,7166);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8248,6483);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8274,5154);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8300,2134);
   ThetaY_vs_Y_mI35_mI30__1673->SetBinContent(8326,43);
   ThetaY_vs_Y_mI35_mI30__1673->SetEntries(41956);
   ThetaY_vs_Y_mI35_mI30__1673->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(1,367.85);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(2,735.7);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(3,1103.55);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(4,1471.4);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(5,1839.25);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(6,2207.1);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(7,2574.95);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(8,2942.8);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(9,3310.65);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(10,3678.5);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(11,4046.35);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(12,4414.2);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(13,4782.05);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(14,5149.9);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(15,5517.75);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(16,5885.6);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(17,6253.45);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(18,6621.3);
   ThetaY_vs_Y_mI35_mI30__1673->SetContourLevel(19,6989.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1673->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1673->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1673->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1673->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1673->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1673->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1673->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1673->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1673->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1673->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1673->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1673->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1673->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1673->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1673->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1673->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-35_-30","Reco vertices","lpf");
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
