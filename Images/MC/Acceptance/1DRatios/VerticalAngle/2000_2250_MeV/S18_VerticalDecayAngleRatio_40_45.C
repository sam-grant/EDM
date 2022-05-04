void S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.3634497,125,6.905543);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_40_45__1488 = new TH1D("S18_ThetaY_40_45__1488","",630,-1575,1575);
   S18_ThetaY_40_45__1488->SetBinContent(311,1);
   S18_ThetaY_40_45__1488->SetBinContent(312,2);
   S18_ThetaY_40_45__1488->SetBinContent(313,4);
   S18_ThetaY_40_45__1488->SetBinContent(314,1.5);
   S18_ThetaY_40_45__1488->SetBinContent(315,3);
   S18_ThetaY_40_45__1488->SetBinError(311,0.7071068);
   S18_ThetaY_40_45__1488->SetBinError(312,1);
   S18_ThetaY_40_45__1488->SetBinError(313,1.414214);
   S18_ThetaY_40_45__1488->SetBinError(314,0.8660254);
   S18_ThetaY_40_45__1488->SetBinError(315,1.224745);
   S18_ThetaY_40_45__1488->SetMinimum(0);
   S18_ThetaY_40_45__1488->SetMaximum(6.178644);
   S18_ThetaY_40_45__1488->SetEntries(23);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1488->SetLineColor(ci);
   S18_ThetaY_40_45__1488->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1488->SetMarkerColor(ci);
   S18_ThetaY_40_45__1488->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_40_45__1488->GetXaxis()->SetRange(296,335);
   S18_ThetaY_40_45__1488->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1488->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1488->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1488->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_40_45__1488->GetYaxis()->CenterTitle(true);
   S18_ThetaY_40_45__1488->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1488->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1488->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1488->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1488->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1488->Draw("AE");
   
   TH1D *ThetaY_40_45__1489 = new TH1D("ThetaY_40_45__1489","",630,-1575,1575);
   ThetaY_40_45__1489->SetBinContent(310,0.003389831);
   ThetaY_40_45__1489->SetBinContent(311,1);
   ThetaY_40_45__1489->SetBinContent(312,3.135593);
   ThetaY_40_45__1489->SetBinContent(313,4.586441);
   ThetaY_40_45__1489->SetBinContent(314,5.037288);
   ThetaY_40_45__1489->SetBinContent(315,5.383051);
   ThetaY_40_45__1489->SetBinContent(316,5.616949);
   ThetaY_40_45__1489->SetBinContent(317,5.135593);
   ThetaY_40_45__1489->SetBinContent(318,4.691525);
   ThetaY_40_45__1489->SetBinContent(319,3.338983);
   ThetaY_40_45__1489->SetBinContent(320,1.061017);
   ThetaY_40_45__1489->SetBinContent(321,0.006779661);
   ThetaY_40_45__1489->SetBinError(310,0.003389831);
   ThetaY_40_45__1489->SetBinError(311,0.05822225);
   ThetaY_40_45__1489->SetBinError(312,0.1030977);
   ThetaY_40_45__1489->SetBinError(313,0.1246886);
   ThetaY_40_45__1489->SetBinError(314,0.1306735);
   ThetaY_40_45__1489->SetBinError(315,0.1350838);
   ThetaY_40_45__1489->SetBinError(316,0.1379873);
   ThetaY_40_45__1489->SetBinError(317,0.1319424);
   ThetaY_40_45__1489->SetBinError(318,0.126109);
   ThetaY_40_45__1489->SetBinError(319,0.1063888);
   ThetaY_40_45__1489->SetBinError(320,0.05997222);
   ThetaY_40_45__1489->SetBinError(321,0.004793944);
   ThetaY_40_45__1489->SetEntries(11504);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1489->SetLineColor(ci);
   ThetaY_40_45__1489->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1489->SetMarkerColor(ci);
   ThetaY_40_45__1489->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1489->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1489->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1489->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1489->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1489->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1489->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1489->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1489->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1489->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1489->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1489->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1489->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1489->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1489->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1489->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1489->Draw("AEsame");
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
   
   Double_t _fx3497[12] = {
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
   27.5};
   Double_t _fy3497[12] = {
   0,
   1,
   0.6378378,
   0.872136,
   0.2977793,
   0.5573048,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3497[12] = {
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
   Double_t _fely3497[12] = {
   0,
   0.647277,
   0.3057824,
   0.3025937,
   0.162182,
   0.2214152,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3497[12] = {
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
   Double_t _fehy3497[12] = {
   782.1887,
   1.329315,
   0.5062841,
   0.4319855,
   0.2902354,
   0.3338678,
   0.163972,
   0.1793503,
   0.1963377,
   0.2759438,
   0.8701306,
   222.8094};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3497,_fy3497,_felx3497,_fehx3497,_fely3497,_fehy3497);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3497 = new TH1F("Graph_Graph3497","",100,-100,100);
   Graph_Graph3497->SetMinimum(0);
   Graph_Graph3497->SetMaximum(1.5);
   Graph_Graph3497->SetDirectory(0);
   Graph_Graph3497->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3497->SetLineColor(ci);
   Graph_Graph3497->GetXaxis()->SetRange(1,100);
   Graph_Graph3497->GetXaxis()->CenterTitle(true);
   Graph_Graph3497->GetXaxis()->SetLabelFont(42);
   Graph_Graph3497->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3497->GetXaxis()->SetTitleFont(42);
   Graph_Graph3497->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3497->GetYaxis()->CenterTitle(true);
   Graph_Graph3497->GetYaxis()->SetLabelFont(42);
   Graph_Graph3497->GetYaxis()->SetTitleFont(42);
   Graph_Graph3497->GetZaxis()->SetLabelFont(42);
   Graph_Graph3497->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3497->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3497);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,6.178644,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1490 = new TH2D("ThetaY_vs_Y_40_45__1490","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8081,1);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8107,295);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8133,925);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8159,1353);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8185,1486);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8211,1588);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8237,1657);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8263,1515);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8289,1384);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8315,985);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8341,313);
   ThetaY_vs_Y_40_45__1490->SetBinContent(8367,2);
   ThetaY_vs_Y_40_45__1490->SetEntries(11504);
   ThetaY_vs_Y_40_45__1490->SetContour(20);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(1,82.85);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(2,165.7);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(3,248.55);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(4,331.4);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(5,414.25);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(6,497.1);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(7,579.95);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(8,662.8);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(9,745.65);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(10,828.5);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(11,911.35);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(12,994.2);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(13,1077.05);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(14,1159.9);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(15,1242.75);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(16,1325.6);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(17,1408.45);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(18,1491.3);
   ThetaY_vs_Y_40_45__1490->SetContourLevel(19,1574.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1490->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1490->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1490->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1490->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1490->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1490->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1490->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1490->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1490->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1490->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1490->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1490->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1490->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1490->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1490->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1490->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_40_45","Reco vertices","lpf");
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
