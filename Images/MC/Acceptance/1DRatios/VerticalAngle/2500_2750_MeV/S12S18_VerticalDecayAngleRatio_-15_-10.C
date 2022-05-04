void S12S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.07632637,125,1.450201);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI15_mI10__1854 = new TH1D("S12S18_ThetaY_mI15_mI10__1854","",630,-1575,1575);
   S12S18_ThetaY_mI15_mI10__1854->SetBinContent(314,0.5568182);
   S12S18_ThetaY_mI15_mI10__1854->SetBinContent(315,1.130682);
   S12S18_ThetaY_mI15_mI10__1854->SetBinContent(316,0.9886364);
   S12S18_ThetaY_mI15_mI10__1854->SetBinContent(317,1);
   S12S18_ThetaY_mI15_mI10__1854->SetBinContent(318,0.4204545);
   S12S18_ThetaY_mI15_mI10__1854->SetBinContent(319,0.005681818);
   S12S18_ThetaY_mI15_mI10__1854->SetBinError(314,0.05624713);
   S12S18_ThetaY_mI15_mI10__1854->SetBinError(315,0.08015191);
   S12S18_ThetaY_mI15_mI10__1854->SetBinError(316,0.07494833);
   S12S18_ThetaY_mI15_mI10__1854->SetBinError(317,0.07537784);
   S12S18_ThetaY_mI15_mI10__1854->SetBinError(318,0.04887685);
   S12S18_ThetaY_mI15_mI10__1854->SetBinError(319,0.005681818);
   S12S18_ThetaY_mI15_mI10__1854->SetMinimum(0);
   S12S18_ThetaY_mI15_mI10__1854->SetMaximum(1.297548);
   S12S18_ThetaY_mI15_mI10__1854->SetEntries(722);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__1854->SetLineColor(ci);
   S12S18_ThetaY_mI15_mI10__1854->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__1854->SetMarkerColor(ci);
   S12S18_ThetaY_mI15_mI10__1854->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI15_mI10__1854->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI15_mI10__1854->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1854->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__1854->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1854->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI15_mI10__1854->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI15_mI10__1854->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1854->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1854->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1854->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__1854->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1854->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1855 = new TH1D("ThetaY_mI15_mI10__1855","",630,-1575,1575);
   ThetaY_mI15_mI10__1855->SetBinContent(312,0.02417549);
   ThetaY_mI15_mI10__1855->SetBinContent(313,0.5022582);
   ThetaY_mI15_mI10__1855->SetBinContent(314,0.996053);
   ThetaY_mI15_mI10__1855->SetBinContent(315,1.179589);
   ThetaY_mI15_mI10__1855->SetBinContent(316,1.16828);
   ThetaY_mI15_mI10__1855->SetBinContent(317,1);
   ThetaY_mI15_mI10__1855->SetBinContent(318,0.5013853);
   ThetaY_mI15_mI10__1855->SetBinContent(319,0.02592129);
   ThetaY_mI15_mI10__1855->SetBinError(312,0.0009578678);
   ThetaY_mI15_mI10__1855->SetBinError(313,0.004365977);
   ThetaY_mI15_mI10__1855->SetBinError(314,0.006148358);
   ThetaY_mI15_mI10__1855->SetBinError(315,0.006690882);
   ThetaY_mI15_mI10__1855->SetBinError(316,0.006658729);
   ThetaY_mI15_mI10__1855->SetBinError(317,0.006160528);
   ThetaY_mI15_mI10__1855->SetBinError(318,0.004362181);
   ThetaY_mI15_mI10__1855->SetBinError(319,0.0009918505);
   ThetaY_mI15_mI10__1855->SetEntries(142223);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1855->SetLineColor(ci);
   ThetaY_mI15_mI10__1855->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1855->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1855->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1855->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1855->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1855->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1855->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1855->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1855->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1855->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1855->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1855->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1855->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1855->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1855->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1855->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1855->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1855->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1855->Draw("AEsame");
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
   
   Double_t _fx3619[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3619[8] = {
   0,
   0,
   0.5590247,
   0.9585385,
   0.8462326,
   1,
   0.8385858,
   0.2191951};
   Double_t _felx3619[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3619[8] = {
   0,
   0,
   0.05647764,
   0.06810782,
   0.06427093,
   0.07555589,
   0.09753132,
   0.1813789};
   Double_t _fehx3619[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3619[8] = {
   0.43331,
   0.02082809,
   0.06249592,
   0.07313039,
   0.06935026,
   0.08149535,
   0.1096008,
   0.5052634};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3619,_fy3619,_felx3619,_fehx3619,_fely3619,_fehy3619);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3619 = new TH1F("Graph_Graph3619","",100,-100,100);
   Graph_Graph3619->SetMinimum(0);
   Graph_Graph3619->SetMaximum(1.5);
   Graph_Graph3619->SetDirectory(0);
   Graph_Graph3619->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3619->SetLineColor(ci);
   Graph_Graph3619->GetXaxis()->SetRange(1,100);
   Graph_Graph3619->GetXaxis()->CenterTitle(true);
   Graph_Graph3619->GetXaxis()->SetLabelFont(42);
   Graph_Graph3619->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3619->GetXaxis()->SetTitleFont(42);
   Graph_Graph3619->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3619->GetYaxis()->CenterTitle(true);
   Graph_Graph3619->GetYaxis()->SetLabelFont(42);
   Graph_Graph3619->GetYaxis()->SetTitleFont(42);
   Graph_Graph3619->GetZaxis()->SetLabelFont(42);
   Graph_Graph3619->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3619->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3619);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.297548,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1856 = new TH2D("ThetaY_vs_Y_mI15_mI10__1856","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8122,637);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8148,13234);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8174,26245);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8200,31081);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8226,30783);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8252,26349);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8278,13211);
   ThetaY_vs_Y_mI15_mI10__1856->SetBinContent(8304,683);
   ThetaY_vs_Y_mI15_mI10__1856->SetEntries(142223);
   ThetaY_vs_Y_mI15_mI10__1856->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(1,1554.05);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(2,3108.1);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(3,4662.15);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(4,6216.2);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(5,7770.25);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(6,9324.3);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(7,10878.35);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(8,12432.4);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(9,13986.45);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(10,15540.5);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(11,17094.55);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(12,18648.6);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(13,20202.65);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(14,21756.7);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(15,23310.75);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(16,24864.8);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(17,26418.85);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(18,27972.9);
   ThetaY_vs_Y_mI15_mI10__1856->SetContourLevel(19,29526.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1856->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1856->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1856->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1856->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1856->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1856->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1856->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1856->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1856->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1856->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1856->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1856->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1856->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1856->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1856->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1856->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-15_-10","Reco vertices","lpf");
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
