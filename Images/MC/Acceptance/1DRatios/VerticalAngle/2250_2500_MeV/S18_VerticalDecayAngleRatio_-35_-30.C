void S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.07342915,125,1.395154);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__1614 = new TH1D("S18_ThetaY_mI35_mI30__1614","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__1614->SetBinContent(314,0.1111111);
   S18_ThetaY_mI35_mI30__1614->SetBinContent(315,0.4074074);
   S18_ThetaY_mI35_mI30__1614->SetBinContent(316,0.8518519);
   S18_ThetaY_mI35_mI30__1614->SetBinContent(317,1);
   S18_ThetaY_mI35_mI30__1614->SetBinContent(318,0.6666667);
   S18_ThetaY_mI35_mI30__1614->SetBinContent(319,0.2592593);
   S18_ThetaY_mI35_mI30__1614->SetBinError(314,0.06415003);
   S18_ThetaY_mI35_mI30__1614->SetBinError(315,0.122838);
   S18_ThetaY_mI35_mI30__1614->SetBinError(316,0.1776234);
   S18_ThetaY_mI35_mI30__1614->SetBinError(317,0.1924501);
   S18_ThetaY_mI35_mI30__1614->SetBinError(318,0.1571348);
   S18_ThetaY_mI35_mI30__1614->SetBinError(319,0.09799079);
   S18_ThetaY_mI35_mI30__1614->SetMinimum(0);
   S18_ThetaY_mI35_mI30__1614->SetMaximum(1.248296);
   S18_ThetaY_mI35_mI30__1614->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1614->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__1614->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1614->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__1614->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__1614->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__1614->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1614->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1614->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1614->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__1614->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__1614->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1614->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1614->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1614->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1614->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1614->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1615 = new TH1D("ThetaY_mI35_mI30__1615","",630,-1575,1575);
   ThetaY_mI35_mI30__1615->SetBinContent(311,0.006786981);
   ThetaY_mI35_mI30__1615->SetBinContent(312,0.3234614);
   ThetaY_mI35_mI30__1615->SetBinContent(313,0.7857473);
   ThetaY_mI35_mI30__1615->SetBinContent(314,0.9847293);
   ThetaY_mI35_mI30__1615->SetBinContent(315,1.134814);
   ThetaY_mI35_mI30__1615->SetBinContent(316,1.105352);
   ThetaY_mI35_mI30__1615->SetBinContent(317,1);
   ThetaY_mI35_mI30__1615->SetBinContent(318,0.7950023);
   ThetaY_mI35_mI30__1615->SetBinContent(319,0.3291686);
   ThetaY_mI35_mI30__1615->SetBinContent(320,0.006632732);
   ThetaY_mI35_mI30__1615->SetBinError(311,0.001023176);
   ThetaY_mI35_mI30__1615->SetBinError(312,0.007063553);
   ThetaY_mI35_mI30__1615->SetBinError(313,0.01100914);
   ThetaY_mI35_mI30__1615->SetBinError(314,0.01232453);
   ThetaY_mI35_mI30__1615->SetBinError(315,0.01323044);
   ThetaY_mI35_mI30__1615->SetBinError(316,0.01305757);
   ThetaY_mI35_mI30__1615->SetBinError(317,0.01241973);
   ThetaY_mI35_mI30__1615->SetBinError(318,0.01107379);
   ThetaY_mI35_mI30__1615->SetBinError(319,0.007125596);
   ThetaY_mI35_mI30__1615->SetBinError(320,0.001011482);
   ThetaY_mI35_mI30__1615->SetEntries(41956);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1615->SetLineColor(ci);
   ThetaY_mI35_mI30__1615->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1615->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1615->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1615->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1615->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1615->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1615->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1615->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1615->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1615->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1615->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1615->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1615->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1615->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1615->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1615->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1615->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1615->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1615->Draw("AEsame");
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
   
   Double_t _fx3539[10] = {
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
   Double_t _fy3539[10] = {
   0,
   0,
   0,
   0.1128342,
   0.359008,
   0.7706608,
   1,
   0.838572,
   0.7876185,
   0};
   Double_t _felx3539[10] = {
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
   Double_t _fely3539[10] = {
   0,
   0,
   0,
   0.06141889,
   0.1066522,
   0.1597627,
   0.1916348,
   0.1961254,
   0.2908758,
   0};
   Double_t _fehx3539[10] = {
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
   Double_t _fehy3539[10] = {
   10.25973,
   0.2108936,
   0.0867942,
   0.1098079,
   0.1442934,
   0.196922,
   0.2324553,
   0.2484521,
   0.4252908,
   10.50347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3539,_fy3539,_felx3539,_fehx3539,_fely3539,_fehy3539);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3539 = new TH1F("Graph_Graph3539","",100,-100,100);
   Graph_Graph3539->SetMinimum(0);
   Graph_Graph3539->SetMaximum(1.5);
   Graph_Graph3539->SetDirectory(0);
   Graph_Graph3539->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3539->SetLineColor(ci);
   Graph_Graph3539->GetXaxis()->SetRange(1,100);
   Graph_Graph3539->GetXaxis()->CenterTitle(true);
   Graph_Graph3539->GetXaxis()->SetLabelFont(42);
   Graph_Graph3539->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3539->GetXaxis()->SetTitleFont(42);
   Graph_Graph3539->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3539->GetYaxis()->CenterTitle(true);
   Graph_Graph3539->GetYaxis()->SetLabelFont(42);
   Graph_Graph3539->GetYaxis()->SetTitleFont(42);
   Graph_Graph3539->GetZaxis()->SetLabelFont(42);
   Graph_Graph3539->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3539->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3539);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.248296,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1616 = new TH2D("ThetaY_vs_Y_mI35_mI30__1616","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8092,44);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8118,2097);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8144,5094);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8170,6384);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8196,7357);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8222,7166);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8248,6483);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8274,5154);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8300,2134);
   ThetaY_vs_Y_mI35_mI30__1616->SetBinContent(8326,43);
   ThetaY_vs_Y_mI35_mI30__1616->SetEntries(41956);
   ThetaY_vs_Y_mI35_mI30__1616->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(1,367.85);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(2,735.7);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(3,1103.55);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(4,1471.4);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(5,1839.25);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(6,2207.1);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(7,2574.95);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(8,2942.8);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(9,3310.65);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(10,3678.5);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(11,4046.35);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(12,4414.2);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(13,4782.05);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(14,5149.9);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(15,5517.75);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(16,5885.6);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(17,6253.45);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(18,6621.3);
   ThetaY_vs_Y_mI35_mI30__1616->SetContourLevel(19,6989.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1616->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1616->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1616->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1616->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1616->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1616->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1616->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1616->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1616->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1616->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1616->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1616->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1616->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1616->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1616->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1616->Draw("COL");
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
