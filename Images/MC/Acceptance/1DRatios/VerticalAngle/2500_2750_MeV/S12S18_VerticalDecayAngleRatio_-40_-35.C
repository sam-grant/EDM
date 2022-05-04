void S12S18_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.1549484,125,2.944019);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI40_mI35__1839 = new TH1D("S12S18_ThetaY_mI40_mI35__1839","",630,-1575,1575);
   S12S18_ThetaY_mI40_mI35__1839->SetBinContent(315,0.5);
   S12S18_ThetaY_mI40_mI35__1839->SetBinContent(316,2);
   S12S18_ThetaY_mI40_mI35__1839->SetBinContent(317,1.2);
   S12S18_ThetaY_mI40_mI35__1839->SetBinContent(318,1);
   S12S18_ThetaY_mI40_mI35__1839->SetBinError(315,0.2236068);
   S12S18_ThetaY_mI40_mI35__1839->SetBinError(316,0.4472136);
   S12S18_ThetaY_mI40_mI35__1839->SetBinError(317,0.3464102);
   S12S18_ThetaY_mI40_mI35__1839->SetBinError(318,0.3162278);
   S12S18_ThetaY_mI40_mI35__1839->SetMinimum(0);
   S12S18_ThetaY_mI40_mI35__1839->SetMaximum(2.634122);
   S12S18_ThetaY_mI40_mI35__1839->SetEntries(47);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__1839->SetLineColor(ci);
   S12S18_ThetaY_mI40_mI35__1839->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__1839->SetMarkerColor(ci);
   S12S18_ThetaY_mI40_mI35__1839->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI40_mI35__1839->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI40_mI35__1839->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1839->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__1839->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1839->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI40_mI35__1839->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI40_mI35__1839->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1839->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1839->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1839->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__1839->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1839->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1840 = new TH1D("ThetaY_mI40_mI35__1840","",630,-1575,1575);
   ThetaY_mI40_mI35__1840->SetBinContent(312,0.04045802);
   ThetaY_mI40_mI35__1840->SetBinContent(313,1.030534);
   ThetaY_mI40_mI35__1840->SetBinContent(314,2.044275);
   ThetaY_mI40_mI35__1840->SetBinContent(315,2.394656);
   ThetaY_mI40_mI35__1840->SetBinContent(316,2.373282);
   ThetaY_mI40_mI35__1840->SetBinContent(317,1.984733);
   ThetaY_mI40_mI35__1840->SetBinContent(318,1);
   ThetaY_mI40_mI35__1840->SetBinContent(319,0.0480916);
   ThetaY_mI40_mI35__1840->SetBinError(312,0.005557336);
   ThetaY_mI40_mI35__1840->SetBinError(313,0.02804759);
   ThetaY_mI40_mI35__1840->SetBinError(314,0.03950336);
   ThetaY_mI40_mI35__1840->SetBinError(315,0.04275491);
   ThetaY_mI40_mI35__1840->SetBinError(316,0.04256367);
   ThetaY_mI40_mI35__1840->SetBinError(317,0.03892381);
   ThetaY_mI40_mI35__1840->SetBinError(318,0.02762895);
   ThetaY_mI40_mI35__1840->SetBinError(319,0.006058972);
   ThetaY_mI40_mI35__1840->SetEntries(14300);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1840->SetLineColor(ci);
   ThetaY_mI40_mI35__1840->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1840->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1840->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1840->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1840->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1840->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1840->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1840->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1840->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1840->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1840->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1840->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1840->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1840->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1840->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1840->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1840->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1840->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1840->Draw("AEsame");
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
   
   Double_t _fx3614[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3614[8] = {
   0,
   0,
   0,
   0.2087982,
   0.8427147,
   0.6046154,
   1,
   0};
   Double_t _felx3614[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3614[8] = {
   0,
   0,
   0,
   0.09024763,
   0.1874209,
   0.1724436,
   0.3119474,
   0};
   Double_t _fehx3614[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3614[8] = {
   4.630406,
   0.1787692,
   0.09008841,
   0.1414396,
   0.2346661,
   0.2304761,
   0.4290173,
   3.884639};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3614,_fy3614,_felx3614,_fehx3614,_fely3614,_fehy3614);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3614 = new TH1F("Graph_Graph3614","",100,-100,100);
   Graph_Graph3614->SetMinimum(0);
   Graph_Graph3614->SetMaximum(1.5);
   Graph_Graph3614->SetDirectory(0);
   Graph_Graph3614->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3614->SetLineColor(ci);
   Graph_Graph3614->GetXaxis()->SetRange(1,100);
   Graph_Graph3614->GetXaxis()->CenterTitle(true);
   Graph_Graph3614->GetXaxis()->SetLabelFont(42);
   Graph_Graph3614->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3614->GetXaxis()->SetTitleFont(42);
   Graph_Graph3614->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3614->GetYaxis()->CenterTitle(true);
   Graph_Graph3614->GetYaxis()->SetLabelFont(42);
   Graph_Graph3614->GetYaxis()->SetTitleFont(42);
   Graph_Graph3614->GetZaxis()->SetLabelFont(42);
   Graph_Graph3614->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3614->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3614);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.634122,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1841 = new TH2D("ThetaY_vs_Y_mI40_mI35__1841","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8117,53);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8143,1350);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8169,2678);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8195,3137);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8221,3109);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8247,2600);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8273,1310);
   ThetaY_vs_Y_mI40_mI35__1841->SetBinContent(8299,63);
   ThetaY_vs_Y_mI40_mI35__1841->SetEntries(14300);
   ThetaY_vs_Y_mI40_mI35__1841->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(1,156.85);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(2,313.7);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(3,470.55);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(4,627.4);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(5,784.25);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(6,941.1);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(7,1097.95);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(8,1254.8);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(9,1411.65);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(10,1568.5);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(11,1725.35);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(12,1882.2);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(13,2039.05);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(14,2195.9);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(15,2352.75);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(16,2509.6);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(17,2666.45);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(18,2823.3);
   ThetaY_vs_Y_mI40_mI35__1841->SetContourLevel(19,2980.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1841->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1841->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1841->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1841->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1841->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1841->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1841->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1841->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1841->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1841->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1841->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1841->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1841->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1841->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1841->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1841->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-40_-35","Reco vertices","lpf");
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
