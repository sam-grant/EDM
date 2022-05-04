void S18_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.1549484,125,2.944019);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI40_mI35__1782 = new TH1D("S18_ThetaY_mI40_mI35__1782","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__1782->SetBinContent(315,0.2857143);
   S18_ThetaY_mI40_mI35__1782->SetBinContent(316,1);
   S18_ThetaY_mI40_mI35__1782->SetBinContent(317,0.8571429);
   S18_ThetaY_mI40_mI35__1782->SetBinContent(318,1);
   S18_ThetaY_mI40_mI35__1782->SetBinError(315,0.2020305);
   S18_ThetaY_mI40_mI35__1782->SetBinError(316,0.3779645);
   S18_ThetaY_mI40_mI35__1782->SetBinError(317,0.3499271);
   S18_ThetaY_mI40_mI35__1782->SetBinError(318,0.3779645);
   S18_ThetaY_mI40_mI35__1782->SetMinimum(0);
   S18_ThetaY_mI40_mI35__1782->SetMaximum(2.634122);
   S18_ThetaY_mI40_mI35__1782->SetEntries(22);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1782->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__1782->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1782->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__1782->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__1782->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__1782->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1782->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1782->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1782->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__1782->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__1782->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1782->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1782->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1782->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1782->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1782->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1783 = new TH1D("ThetaY_mI40_mI35__1783","",630,-1575,1575);
   ThetaY_mI40_mI35__1783->SetBinContent(312,0.04045802);
   ThetaY_mI40_mI35__1783->SetBinContent(313,1.030534);
   ThetaY_mI40_mI35__1783->SetBinContent(314,2.044275);
   ThetaY_mI40_mI35__1783->SetBinContent(315,2.394656);
   ThetaY_mI40_mI35__1783->SetBinContent(316,2.373282);
   ThetaY_mI40_mI35__1783->SetBinContent(317,1.984733);
   ThetaY_mI40_mI35__1783->SetBinContent(318,1);
   ThetaY_mI40_mI35__1783->SetBinContent(319,0.0480916);
   ThetaY_mI40_mI35__1783->SetBinError(312,0.005557336);
   ThetaY_mI40_mI35__1783->SetBinError(313,0.02804759);
   ThetaY_mI40_mI35__1783->SetBinError(314,0.03950336);
   ThetaY_mI40_mI35__1783->SetBinError(315,0.04275491);
   ThetaY_mI40_mI35__1783->SetBinError(316,0.04256367);
   ThetaY_mI40_mI35__1783->SetBinError(317,0.03892381);
   ThetaY_mI40_mI35__1783->SetBinError(318,0.02762895);
   ThetaY_mI40_mI35__1783->SetBinError(319,0.006058972);
   ThetaY_mI40_mI35__1783->SetEntries(14300);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1783->SetLineColor(ci);
   ThetaY_mI40_mI35__1783->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1783->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1783->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1783->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1783->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1783->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1783->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1783->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1783->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1783->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1783->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1783->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1783->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1783->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1783->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1783->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1783->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1783->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1783->Draw("AEsame");
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
   
   Double_t _fx3595[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3595[8] = {
   0,
   0,
   0,
   0.1193133,
   0.4213573,
   0.4318681,
   1,
   0};
   Double_t _felx3595[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3595[8] = {
   0,
   0,
   0,
   0.07708073,
   0.1555419,
   0.171472,
   0.3696426,
   0};
   Double_t _fehx3595[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3595[8] = {
   6.614865,
   0.2553845,
   0.1286977,
   0.1574822,
   0.227341,
   0.2584188,
   0.5408253,
   5.549485};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3595,_fy3595,_felx3595,_fehx3595,_fely3595,_fehy3595);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3595 = new TH1F("Graph_Graph3595","",100,-100,100);
   Graph_Graph3595->SetMinimum(0);
   Graph_Graph3595->SetMaximum(1.5);
   Graph_Graph3595->SetDirectory(0);
   Graph_Graph3595->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3595->SetLineColor(ci);
   Graph_Graph3595->GetXaxis()->SetRange(1,100);
   Graph_Graph3595->GetXaxis()->CenterTitle(true);
   Graph_Graph3595->GetXaxis()->SetLabelFont(42);
   Graph_Graph3595->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3595->GetXaxis()->SetTitleFont(42);
   Graph_Graph3595->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3595->GetYaxis()->CenterTitle(true);
   Graph_Graph3595->GetYaxis()->SetLabelFont(42);
   Graph_Graph3595->GetYaxis()->SetTitleFont(42);
   Graph_Graph3595->GetZaxis()->SetLabelFont(42);
   Graph_Graph3595->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3595->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3595);
   
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1784 = new TH2D("ThetaY_vs_Y_mI40_mI35__1784","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8117,53);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8143,1350);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8169,2678);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8195,3137);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8221,3109);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8247,2600);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8273,1310);
   ThetaY_vs_Y_mI40_mI35__1784->SetBinContent(8299,63);
   ThetaY_vs_Y_mI40_mI35__1784->SetEntries(14300);
   ThetaY_vs_Y_mI40_mI35__1784->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(1,156.85);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(2,313.7);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(3,470.55);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(4,627.4);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(5,784.25);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(6,941.1);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(7,1097.95);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(8,1254.8);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(9,1411.65);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(10,1568.5);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(11,1725.35);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(12,1882.2);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(13,2039.05);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(14,2195.9);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(15,2352.75);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(16,2509.6);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(17,2666.45);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(18,2823.3);
   ThetaY_vs_Y_mI40_mI35__1784->SetContourLevel(19,2980.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1784->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1784->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1784->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1784->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1784->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1784->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1784->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1784->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1784->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1784->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1784->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1784->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1784->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1784->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1784->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1784->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-40_-35","Reco vertices","lpf");
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
