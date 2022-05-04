void S12S18_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.07499279,125,1.424863);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__1836 = new TH1D("S12S18_ThetaY_mI45_mI40__1836","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__1836->SetBinContent(315,0.3333333);
   S12S18_ThetaY_mI45_mI40__1836->SetBinContent(316,0.3333333);
   S12S18_ThetaY_mI45_mI40__1836->SetBinContent(317,1);
   S12S18_ThetaY_mI45_mI40__1836->SetBinError(315,0.2357023);
   S12S18_ThetaY_mI45_mI40__1836->SetBinError(316,0.2357023);
   S12S18_ThetaY_mI45_mI40__1836->SetBinError(317,0.4082483);
   S12S18_ThetaY_mI45_mI40__1836->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__1836->SetMaximum(1.274877);
   S12S18_ThetaY_mI45_mI40__1836->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1836->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__1836->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1836->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__1836->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__1836->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__1836->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1836->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1836->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1836->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__1836->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__1836->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1836->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1836->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1836->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1836->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1836->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1837 = new TH1D("ThetaY_mI45_mI40__1837","",630,-1575,1575);
   ThetaY_mI45_mI40__1837->SetBinContent(312,0.01864573);
   ThetaY_mI45_mI40__1837->SetBinContent(313,0.4798822);
   ThetaY_mI45_mI40__1837->SetBinContent(314,0.9774289);
   ThetaY_mI45_mI40__1837->SetBinContent(315,1.158979);
   ThetaY_mI45_mI40__1837->SetBinContent(316,1.15211);
   ThetaY_mI45_mI40__1837->SetBinContent(317,1);
   ThetaY_mI45_mI40__1837->SetBinContent(318,0.4867517);
   ThetaY_mI45_mI40__1837->SetBinContent(319,0.02158979);
   ThetaY_mI45_mI40__1837->SetBinError(312,0.004277624);
   ThetaY_mI45_mI40__1837->SetBinError(313,0.02170102);
   ThetaY_mI45_mI40__1837->SetBinError(314,0.03097102);
   ThetaY_mI45_mI40__1837->SetBinError(315,0.03372491);
   ThetaY_mI45_mI40__1837->SetBinError(316,0.03362481);
   ThetaY_mI45_mI40__1837->SetBinError(317,0.03132657);
   ThetaY_mI45_mI40__1837->SetBinError(318,0.0218558);
   ThetaY_mI45_mI40__1837->SetBinError(319,0.00460296);
   ThetaY_mI45_mI40__1837->SetEntries(5396);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1837->SetLineColor(ci);
   ThetaY_mI45_mI40__1837->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1837->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1837->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1837->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1837->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1837->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1837->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1837->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1837->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1837->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1837->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1837->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1837->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1837->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1837->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1837->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1837->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1837->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1837->Draw("AEsame");
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
   
   Double_t _fx3613[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3613[8] = {
   0,
   0,
   0,
   0.2876094,
   0.2893242,
   1,
   0,
   0};
   Double_t _felx3613[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3613[8] = {
   0,
   0,
   0,
   0.1858677,
   0.1869765,
   0.3976535,
   0,
   0};
   Double_t _fehx3613[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3613[8] = {
   17.2798,
   0.6406056,
   0.3142128,
   0.3800817,
   0.3823524,
   0.6000822,
   0.631548,
   14.82373};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3613,_fy3613,_felx3613,_fehx3613,_fely3613,_fehy3613);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3613 = new TH1F("Graph_Graph3613","",100,-100,100);
   Graph_Graph3613->SetMinimum(0);
   Graph_Graph3613->SetMaximum(1.5);
   Graph_Graph3613->SetDirectory(0);
   Graph_Graph3613->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3613->SetLineColor(ci);
   Graph_Graph3613->GetXaxis()->SetRange(1,100);
   Graph_Graph3613->GetXaxis()->CenterTitle(true);
   Graph_Graph3613->GetXaxis()->SetLabelFont(42);
   Graph_Graph3613->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3613->GetXaxis()->SetTitleFont(42);
   Graph_Graph3613->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3613->GetYaxis()->CenterTitle(true);
   Graph_Graph3613->GetYaxis()->SetLabelFont(42);
   Graph_Graph3613->GetYaxis()->SetTitleFont(42);
   Graph_Graph3613->GetZaxis()->SetLabelFont(42);
   Graph_Graph3613->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3613->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3613);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.274877,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1838 = new TH2D("ThetaY_vs_Y_mI45_mI40__1838","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8116,19);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8142,489);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8168,996);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8194,1181);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8220,1174);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8246,1019);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8272,496);
   ThetaY_vs_Y_mI45_mI40__1838->SetBinContent(8298,22);
   ThetaY_vs_Y_mI45_mI40__1838->SetEntries(5396);
   ThetaY_vs_Y_mI45_mI40__1838->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(1,59.05);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(2,118.1);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(3,177.15);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(4,236.2);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(5,295.25);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(6,354.3);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(7,413.35);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(8,472.4);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(9,531.45);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(10,590.5);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(11,649.55);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(12,708.6);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(13,767.65);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(14,826.7);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(15,885.75);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(16,944.8);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(17,1003.85);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(18,1062.9);
   ThetaY_vs_Y_mI45_mI40__1838->SetContourLevel(19,1121.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1838->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1838->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1838->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1838->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1838->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1838->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1838->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1838->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1838->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1838->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1838->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1838->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1838->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1838->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1838->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1838->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
