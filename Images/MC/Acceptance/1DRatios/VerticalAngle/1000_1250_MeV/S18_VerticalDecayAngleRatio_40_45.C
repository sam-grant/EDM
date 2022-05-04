void S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07111502,125,1.351185);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_40_45__804 = new TH1D("S18_ThetaY_40_45__804","",630,-1575,1575);
   S18_ThetaY_40_45__804->SetBinContent(307,0.0952381);
   S18_ThetaY_40_45__804->SetBinContent(308,0.1904762);
   S18_ThetaY_40_45__804->SetBinContent(309,0.4761905);
   S18_ThetaY_40_45__804->SetBinContent(310,0.2380952);
   S18_ThetaY_40_45__804->SetBinContent(311,1);
   S18_ThetaY_40_45__804->SetBinContent(312,0.4761905);
   S18_ThetaY_40_45__804->SetBinContent(313,0.2857143);
   S18_ThetaY_40_45__804->SetBinContent(314,0.5714286);
   S18_ThetaY_40_45__804->SetBinContent(315,0.2380952);
   S18_ThetaY_40_45__804->SetBinError(307,0.0673435);
   S18_ThetaY_40_45__804->SetBinError(308,0.0952381);
   S18_ThetaY_40_45__804->SetBinError(309,0.1505847);
   S18_ThetaY_40_45__804->SetBinError(310,0.1064794);
   S18_ThetaY_40_45__804->SetBinError(311,0.2182179);
   S18_ThetaY_40_45__804->SetBinError(312,0.1505847);
   S18_ThetaY_40_45__804->SetBinError(313,0.1166424);
   S18_ThetaY_40_45__804->SetBinError(314,0.1649572);
   S18_ThetaY_40_45__804->SetBinError(315,0.1064794);
   S18_ThetaY_40_45__804->SetMinimum(0);
   S18_ThetaY_40_45__804->SetMaximum(1.208955);
   S18_ThetaY_40_45__804->SetEntries(75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__804->SetLineColor(ci);
   S18_ThetaY_40_45__804->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__804->SetMarkerColor(ci);
   S18_ThetaY_40_45__804->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_40_45__804->GetXaxis()->SetRange(296,335);
   S18_ThetaY_40_45__804->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__804->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__804->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__804->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_40_45__804->GetYaxis()->CenterTitle(true);
   S18_ThetaY_40_45__804->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__804->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__804->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__804->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__804->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__804->Draw("AE");
   
   TH1D *ThetaY_40_45__805 = new TH1D("ThetaY_40_45__805","",630,-1575,1575);
   ThetaY_40_45__805->SetBinContent(306,0.04748982);
   ThetaY_40_45__805->SetBinContent(307,0.3134328);
   ThetaY_40_45__805->SetBinContent(308,0.6404342);
   ThetaY_40_45__805->SetBinContent(309,0.7781547);
   ThetaY_40_45__805->SetBinContent(310,0.9118046);
   ThetaY_40_45__805->SetBinContent(311,1);
   ThetaY_40_45__805->SetBinContent(312,1.08209);
   ThetaY_40_45__805->SetBinContent(313,1.019674);
   ThetaY_40_45__805->SetBinContent(314,1.09905);
   ThetaY_40_45__805->SetBinContent(315,1.088195);
   ThetaY_40_45__805->SetBinContent(316,1.068521);
   ThetaY_40_45__805->SetBinContent(317,1.076662);
   ThetaY_40_45__805->SetBinContent(318,1.074627);
   ThetaY_40_45__805->SetBinContent(319,1.012212);
   ThetaY_40_45__805->SetBinContent(320,1.014925);
   ThetaY_40_45__805->SetBinContent(321,0.9009498);
   ThetaY_40_45__805->SetBinContent(322,0.8324288);
   ThetaY_40_45__805->SetBinContent(323,0.5888738);
   ThetaY_40_45__805->SetBinContent(324,0.3331072);
   ThetaY_40_45__805->SetBinContent(325,0.05630936);
   ThetaY_40_45__805->SetBinError(306,0.00567612);
   ThetaY_40_45__805->SetBinError(307,0.01458222);
   ThetaY_40_45__805->SetBinError(308,0.02084436);
   ThetaY_40_45__805->SetBinError(309,0.02297652);
   ThetaY_40_45__805->SetBinError(310,0.02487151);
   ThetaY_40_45__805->SetBinError(311,0.02604661);
   ThetaY_40_45__805->SetBinError(312,0.02709461);
   ThetaY_40_45__805->SetBinError(313,0.02630159);
   ThetaY_40_45__805->SetBinError(314,0.02730612);
   ThetaY_40_45__805->SetBinError(315,0.02717094);
   ThetaY_40_45__805->SetBinError(316,0.0269242);
   ThetaY_40_45__805->SetBinError(317,0.02702657);
   ThetaY_40_45__805->SetBinError(318,0.02700102);
   ThetaY_40_45__805->SetBinError(319,0.02620517);
   ThetaY_40_45__805->SetBinError(320,0.02624027);
   ThetaY_40_45__805->SetBinError(321,0.02472302);
   ThetaY_40_45__805->SetBinError(322,0.02376429);
   ThetaY_40_45__805->SetBinError(323,0.01998768);
   ThetaY_40_45__805->SetBinError(324,0.01503292);
   ThetaY_40_45__805->SetBinError(325,0.006180755);
   ThetaY_40_45__805->SetEntries(23494);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__805->SetLineColor(ci);
   ThetaY_40_45__805->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__805->SetMarkerColor(ci);
   ThetaY_40_45__805->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__805->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__805->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__805->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__805->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__805->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__805->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__805->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__805->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__805->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__805->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__805->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__805->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__805->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__805->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__805->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__805->Draw("AEsame");
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
   
   Double_t _fx3269[20] = {
   -47.5,
   -42.5,
   -37.5,
   -32.5,
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
   27.5,
   32.5,
   37.5,
   42.5,
   47.5};
   Double_t _fy3269[20] = {
   0,
   0.3038549,
   0.2974173,
   0.6119484,
   0.2611253,
   1,
   0.4400657,
   0.2802015,
   0.5199295,
   0.2187982,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3269[20] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3269[20] = {
   0,
   0.1965282,
   0.1425783,
   0.1909891,
   0.1129641,
   0.2179348,
   0.1371927,
   0.1113332,
   0.1484804,
   0.09462959,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3269[20] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3269[20] = {
   1.870521,
   0.402777,
   0.2360568,
   0.2627383,
   0.1772008,
   0.2717248,
   0.1886133,
   0.1678905,
   0.1985745,
   0.1484026,
   0.0820938,
   0.0814727,
   0.08162709,
   0.0866635,
   0.08643164,
   0.09737334,
   0.1053946,
   0.1490315,
   0.2636757,
   1.574289};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3269,_fy3269,_felx3269,_fehx3269,_fely3269,_fehy3269);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3269 = new TH1F("Graph_Graph3269","",100,-100,100);
   Graph_Graph3269->SetMinimum(0);
   Graph_Graph3269->SetMaximum(1.5);
   Graph_Graph3269->SetDirectory(0);
   Graph_Graph3269->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3269->SetLineColor(ci);
   Graph_Graph3269->GetXaxis()->SetRange(1,100);
   Graph_Graph3269->GetXaxis()->CenterTitle(true);
   Graph_Graph3269->GetXaxis()->SetLabelFont(42);
   Graph_Graph3269->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3269->GetXaxis()->SetTitleFont(42);
   Graph_Graph3269->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3269->GetYaxis()->CenterTitle(true);
   Graph_Graph3269->GetYaxis()->SetLabelFont(42);
   Graph_Graph3269->GetYaxis()->SetTitleFont(42);
   Graph_Graph3269->GetZaxis()->SetLabelFont(42);
   Graph_Graph3269->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3269->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3269);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.208955,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__806 = new TH2D("ThetaY_vs_Y_40_45__806","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__806->SetBinContent(7977,70);
   ThetaY_vs_Y_40_45__806->SetBinContent(8003,462);
   ThetaY_vs_Y_40_45__806->SetBinContent(8029,944);
   ThetaY_vs_Y_40_45__806->SetBinContent(8055,1147);
   ThetaY_vs_Y_40_45__806->SetBinContent(8081,1344);
   ThetaY_vs_Y_40_45__806->SetBinContent(8107,1474);
   ThetaY_vs_Y_40_45__806->SetBinContent(8133,1595);
   ThetaY_vs_Y_40_45__806->SetBinContent(8159,1503);
   ThetaY_vs_Y_40_45__806->SetBinContent(8185,1620);
   ThetaY_vs_Y_40_45__806->SetBinContent(8211,1604);
   ThetaY_vs_Y_40_45__806->SetBinContent(8237,1575);
   ThetaY_vs_Y_40_45__806->SetBinContent(8263,1587);
   ThetaY_vs_Y_40_45__806->SetBinContent(8289,1584);
   ThetaY_vs_Y_40_45__806->SetBinContent(8315,1492);
   ThetaY_vs_Y_40_45__806->SetBinContent(8341,1496);
   ThetaY_vs_Y_40_45__806->SetBinContent(8367,1328);
   ThetaY_vs_Y_40_45__806->SetBinContent(8393,1227);
   ThetaY_vs_Y_40_45__806->SetBinContent(8419,868);
   ThetaY_vs_Y_40_45__806->SetBinContent(8445,491);
   ThetaY_vs_Y_40_45__806->SetBinContent(8471,83);
   ThetaY_vs_Y_40_45__806->SetEntries(23494);
   ThetaY_vs_Y_40_45__806->SetContour(20);
   ThetaY_vs_Y_40_45__806->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__806->SetContourLevel(1,81);
   ThetaY_vs_Y_40_45__806->SetContourLevel(2,162);
   ThetaY_vs_Y_40_45__806->SetContourLevel(3,243);
   ThetaY_vs_Y_40_45__806->SetContourLevel(4,324);
   ThetaY_vs_Y_40_45__806->SetContourLevel(5,405);
   ThetaY_vs_Y_40_45__806->SetContourLevel(6,486);
   ThetaY_vs_Y_40_45__806->SetContourLevel(7,567);
   ThetaY_vs_Y_40_45__806->SetContourLevel(8,648);
   ThetaY_vs_Y_40_45__806->SetContourLevel(9,729);
   ThetaY_vs_Y_40_45__806->SetContourLevel(10,810);
   ThetaY_vs_Y_40_45__806->SetContourLevel(11,891);
   ThetaY_vs_Y_40_45__806->SetContourLevel(12,972);
   ThetaY_vs_Y_40_45__806->SetContourLevel(13,1053);
   ThetaY_vs_Y_40_45__806->SetContourLevel(14,1134);
   ThetaY_vs_Y_40_45__806->SetContourLevel(15,1215);
   ThetaY_vs_Y_40_45__806->SetContourLevel(16,1296);
   ThetaY_vs_Y_40_45__806->SetContourLevel(17,1377);
   ThetaY_vs_Y_40_45__806->SetContourLevel(18,1458);
   ThetaY_vs_Y_40_45__806->SetContourLevel(19,1539);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__806->SetLineColor(ci);
   ThetaY_vs_Y_40_45__806->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__806->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__806->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__806->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__806->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__806->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__806->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__806->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__806->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__806->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__806->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__806->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__806->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__806->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__806->Draw("COL");
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
