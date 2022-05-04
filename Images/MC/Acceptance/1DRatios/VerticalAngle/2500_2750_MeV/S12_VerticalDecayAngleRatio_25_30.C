void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:10 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-3.01035,125,57.19664);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__1764 = new TH1D("S12_ThetaY_25_30__1764","",630,-1575,1575);
   S12_ThetaY_25_30__1764->SetBinContent(312,1);
   S12_ThetaY_25_30__1764->SetBinContent(313,5);
   S12_ThetaY_25_30__1764->SetBinContent(314,31);
   S12_ThetaY_25_30__1764->SetBinContent(315,33);
   S12_ThetaY_25_30__1764->SetBinContent(316,17);
   S12_ThetaY_25_30__1764->SetBinContent(317,2);
   S12_ThetaY_25_30__1764->SetBinError(312,1);
   S12_ThetaY_25_30__1764->SetBinError(313,2.236068);
   S12_ThetaY_25_30__1764->SetBinError(314,5.567764);
   S12_ThetaY_25_30__1764->SetBinError(315,5.744563);
   S12_ThetaY_25_30__1764->SetBinError(316,4.123106);
   S12_ThetaY_25_30__1764->SetBinError(317,1.414214);
   S12_ThetaY_25_30__1764->SetMinimum(0);
   S12_ThetaY_25_30__1764->SetMaximum(51.17594);
   S12_ThetaY_25_30__1764->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1764->SetLineColor(ci);
   S12_ThetaY_25_30__1764->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1764->SetMarkerColor(ci);
   S12_ThetaY_25_30__1764->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__1764->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__1764->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1764->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1764->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1764->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__1764->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__1764->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1764->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1764->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1764->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1764->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1764->Draw("AE");
   
   TH1D *ThetaY_25_30__1765 = new TH1D("ThetaY_25_30__1765","",630,-1575,1575);
   ThetaY_25_30__1765->SetBinContent(312,1);
   ThetaY_25_30__1765->SetBinContent(313,19.75472);
   ThetaY_25_30__1765->SetBinContent(314,39.03774);
   ThetaY_25_30__1765->SetBinContent(315,46.52358);
   ThetaY_25_30__1765->SetBinContent(316,45.58019);
   ThetaY_25_30__1765->SetBinContent(317,38.51887);
   ThetaY_25_30__1765->SetBinContent(318,18.68868);
   ThetaY_25_30__1765->SetBinContent(319,1.037736);
   ThetaY_25_30__1765->SetBinError(312,0.06868028);
   ThetaY_25_30__1765->SetBinError(313,0.3052583);
   ThetaY_25_30__1765->SetBinError(314,0.4291157);
   ThetaY_25_30__1765->SetBinError(315,0.4684558);
   ThetaY_25_30__1765->SetBinError(316,0.4636819);
   ThetaY_25_30__1765->SetBinError(317,0.4262544);
   ThetaY_25_30__1765->SetBinError(318,0.2969076);
   ThetaY_25_30__1765->SetBinError(319,0.06996414);
   ThetaY_25_30__1765->SetEntries(44550);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1765->SetLineColor(ci);
   ThetaY_25_30__1765->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1765->SetMarkerColor(ci);
   ThetaY_25_30__1765->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1765->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1765->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1765->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1765->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1765->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1765->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1765->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1765->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1765->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1765->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1765->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1765->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1765->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1765->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1765->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1765->Draw("AEsame");
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
   
   Double_t _fx3589[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3589[8] = {
   1,
   0.2531041,
   0.7941034,
   0.7093177,
   0.3729691,
   0.05192261,
   0,
   0};
   Double_t _felx3589[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3589[8] = {
   0.8279875,
   0.1093796,
   0.142109,
   0.1230469,
   0.08963498,
   0.03353977,
   0,
   0};
   Double_t _fehx3589[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3589[8] = {
   2.317471,
   0.1713949,
   0.1701599,
   0.1465125,
   0.1142974,
   0.06850172,
   0.09853288,
   1.781519};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3589,_fy3589,_felx3589,_fehx3589,_fely3589,_fehy3589);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3589 = new TH1F("Graph_Graph3589","",100,-100,100);
   Graph_Graph3589->SetMinimum(0);
   Graph_Graph3589->SetMaximum(1.5);
   Graph_Graph3589->SetDirectory(0);
   Graph_Graph3589->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3589->SetLineColor(ci);
   Graph_Graph3589->GetXaxis()->SetRange(1,100);
   Graph_Graph3589->GetXaxis()->CenterTitle(true);
   Graph_Graph3589->GetXaxis()->SetLabelFont(42);
   Graph_Graph3589->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3589->GetXaxis()->SetTitleFont(42);
   Graph_Graph3589->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3589->GetYaxis()->CenterTitle(true);
   Graph_Graph3589->GetYaxis()->SetLabelFont(42);
   Graph_Graph3589->GetYaxis()->SetTitleFont(42);
   Graph_Graph3589->GetZaxis()->SetLabelFont(42);
   Graph_Graph3589->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3589->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3589);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,51.17594,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1766 = new TH2D("ThetaY_vs_Y_25_30__1766","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8130,212);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8156,4188);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8182,8276);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8208,9863);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8234,9663);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8260,8166);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8286,3962);
   ThetaY_vs_Y_25_30__1766->SetBinContent(8312,220);
   ThetaY_vs_Y_25_30__1766->SetEntries(44550);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1766->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1766->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1766->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1766->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1766->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1766->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1766->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1766->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1766->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1766->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1766->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1766->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1766->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1766->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1766->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1766->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
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
