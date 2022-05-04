void S12_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:56 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.4552339,125,8.649444);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__1089 = new TH1D("S12_ThetaY_40_45__1089","",630,-1575,1575);
   S12_ThetaY_40_45__1089->SetBinContent(309,1);
   S12_ThetaY_40_45__1089->SetBinContent(310,1);
   S12_ThetaY_40_45__1089->SetBinContent(311,2.5);
   S12_ThetaY_40_45__1089->SetBinContent(312,5);
   S12_ThetaY_40_45__1089->SetBinContent(313,4.5);
   S12_ThetaY_40_45__1089->SetBinContent(314,3);
   S12_ThetaY_40_45__1089->SetBinContent(315,2.5);
   S12_ThetaY_40_45__1089->SetBinError(309,0.7071068);
   S12_ThetaY_40_45__1089->SetBinError(310,0.7071068);
   S12_ThetaY_40_45__1089->SetBinError(311,1.118034);
   S12_ThetaY_40_45__1089->SetBinError(312,1.581139);
   S12_ThetaY_40_45__1089->SetBinError(313,1.5);
   S12_ThetaY_40_45__1089->SetBinError(314,1.224745);
   S12_ThetaY_40_45__1089->SetBinError(315,1.118034);
   S12_ThetaY_40_45__1089->SetMinimum(0);
   S12_ThetaY_40_45__1089->SetMaximum(7.738976);
   S12_ThetaY_40_45__1089->SetEntries(39);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1089->SetLineColor(ci);
   S12_ThetaY_40_45__1089->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1089->SetMarkerColor(ci);
   S12_ThetaY_40_45__1089->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__1089->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__1089->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1089->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1089->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1089->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__1089->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__1089->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1089->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1089->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1089->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1089->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1089->Draw("AE");
   
   TH1D *ThetaY_40_45__1090 = new TH1D("ThetaY_40_45__1090","",630,-1575,1575);
   ThetaY_40_45__1090->SetBinContent(308,0.007874016);
   ThetaY_40_45__1090->SetBinContent(309,1);
   ThetaY_40_45__1090->SetBinContent(310,3.251969);
   ThetaY_40_45__1090->SetBinContent(311,4.555118);
   ThetaY_40_45__1090->SetBinContent(312,5.952756);
   ThetaY_40_45__1090->SetBinContent(313,6.314961);
   ThetaY_40_45__1090->SetBinContent(314,6.944882);
   ThetaY_40_45__1090->SetBinContent(315,7.035433);
   ThetaY_40_45__1090->SetBinContent(316,6.870079);
   ThetaY_40_45__1090->SetBinContent(317,6.913386);
   ThetaY_40_45__1090->SetBinContent(318,6.555118);
   ThetaY_40_45__1090->SetBinContent(319,5.933071);
   ThetaY_40_45__1090->SetBinContent(320,4.854331);
   ThetaY_40_45__1090->SetBinContent(321,3.566929);
   ThetaY_40_45__1090->SetBinContent(322,0.9527559);
   ThetaY_40_45__1090->SetBinContent(323,0.003937008);
   ThetaY_40_45__1090->SetBinError(308,0.00556777);
   ThetaY_40_45__1090->SetBinError(309,0.06274558);
   ThetaY_40_45__1090->SetBinError(310,0.1131505);
   ThetaY_40_45__1090->SetBinError(311,0.1339162);
   ThetaY_40_45__1090->SetBinError(312,0.1530884);
   ThetaY_40_45__1090->SetBinError(313,0.157677);
   ThetaY_40_45__1090->SetBinError(314,0.1653543);
   ThetaY_40_45__1090->SetBinError(315,0.1664288);
   ThetaY_40_45__1090->SetBinError(316,0.1644614);
   ThetaY_40_45__1090->SetBinError(317,0.164979);
   ThetaY_40_45__1090->SetBinError(318,0.1606473);
   ThetaY_40_45__1090->SetBinError(319,0.152835);
   ThetaY_40_45__1090->SetBinError(320,0.1382445);
   ThetaY_40_45__1090->SetBinError(321,0.1185033);
   ThetaY_40_45__1090->SetBinError(322,0.06124547);
   ThetaY_40_45__1090->SetBinError(323,0.003937008);
   ThetaY_40_45__1090->SetEntries(17961);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1090->SetLineColor(ci);
   ThetaY_40_45__1090->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1090->SetMarkerColor(ci);
   ThetaY_40_45__1090->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1090->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1090->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1090->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1090->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1090->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1090->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1090->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1090->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1090->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1090->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1090->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1090->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1090->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1090->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1090->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1090->Draw("AEsame");
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
   
   Double_t _fx3364[16] = {
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
   37.5};
   Double_t _fy3364[16] = {
   0,
   1,
   0.3075061,
   0.5488332,
   0.8399471,
   0.7125935,
   0.4319728,
   0.3553442,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3364[16] = {
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
   Double_t _fely3364[16] = {
   0,
   0.647497,
   0.1987712,
   0.237487,
   0.2618986,
   0.2336429,
   0.1715936,
   0.153665,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3364[16] = {
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
   Double_t _fehy3364[16] = {
   191.8427,
   1.330995,
   0.4067182,
   0.3726278,
   0.3600913,
   0.3267634,
   0.2587068,
   0.2409522,
   0.1340591,
   0.1332189,
   0.1405039,
   0.1552439,
   0.1897684,
   0.2583305,
   0.9698404,
   673.4777};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3364,_fy3364,_felx3364,_fehx3364,_fely3364,_fehy3364);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3364 = new TH1F("Graph_Graph3364","",100,-100,100);
   Graph_Graph3364->SetMinimum(0);
   Graph_Graph3364->SetMaximum(1.5);
   Graph_Graph3364->SetDirectory(0);
   Graph_Graph3364->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3364->SetLineColor(ci);
   Graph_Graph3364->GetXaxis()->SetRange(1,100);
   Graph_Graph3364->GetXaxis()->CenterTitle(true);
   Graph_Graph3364->GetXaxis()->SetLabelFont(42);
   Graph_Graph3364->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3364->GetXaxis()->SetTitleFont(42);
   Graph_Graph3364->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3364->GetYaxis()->CenterTitle(true);
   Graph_Graph3364->GetYaxis()->SetLabelFont(42);
   Graph_Graph3364->GetYaxis()->SetTitleFont(42);
   Graph_Graph3364->GetZaxis()->SetLabelFont(42);
   Graph_Graph3364->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3364->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3364);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,7.738976,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1091 = new TH2D("ThetaY_vs_Y_40_45__1091","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8029,2);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8055,254);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8081,826);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8107,1157);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8133,1512);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8159,1604);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8185,1764);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8211,1787);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8237,1745);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8263,1756);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8289,1665);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8315,1507);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8341,1233);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8367,906);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8393,242);
   ThetaY_vs_Y_40_45__1091->SetBinContent(8419,1);
   ThetaY_vs_Y_40_45__1091->SetEntries(17961);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1091->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1091->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1091->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1091->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1091->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1091->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1091->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1091->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1091->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1091->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1091->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1091->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1091->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1091->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1091->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1091->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
