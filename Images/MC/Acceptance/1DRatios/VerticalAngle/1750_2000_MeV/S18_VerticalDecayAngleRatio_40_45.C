void S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0745515,125,1.416478);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_40_45__1317 = new TH1D("S18_ThetaY_40_45__1317","",630,-1575,1575);
   S18_ThetaY_40_45__1317->SetBinContent(310,0.09090909);
   S18_ThetaY_40_45__1317->SetBinContent(311,0.1818182);
   S18_ThetaY_40_45__1317->SetBinContent(312,0.2727273);
   S18_ThetaY_40_45__1317->SetBinContent(313,1);
   S18_ThetaY_40_45__1317->SetBinContent(314,0.2727273);
   S18_ThetaY_40_45__1317->SetBinContent(315,0.6363636);
   S18_ThetaY_40_45__1317->SetBinError(310,0.09090909);
   S18_ThetaY_40_45__1317->SetBinError(311,0.1285649);
   S18_ThetaY_40_45__1317->SetBinError(312,0.1574592);
   S18_ThetaY_40_45__1317->SetBinError(313,0.3015113);
   S18_ThetaY_40_45__1317->SetBinError(314,0.1574592);
   S18_ThetaY_40_45__1317->SetBinError(315,0.2405228);
   S18_ThetaY_40_45__1317->SetMinimum(0);
   S18_ThetaY_40_45__1317->SetMaximum(1.267375);
   S18_ThetaY_40_45__1317->SetEntries(27);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1317->SetLineColor(ci);
   S18_ThetaY_40_45__1317->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1317->SetMarkerColor(ci);
   S18_ThetaY_40_45__1317->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_40_45__1317->GetXaxis()->SetRange(296,335);
   S18_ThetaY_40_45__1317->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1317->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1317->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1317->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_40_45__1317->GetYaxis()->CenterTitle(true);
   S18_ThetaY_40_45__1317->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1317->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1317->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1317->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1317->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1317->Draw("AE");
   
   TH1D *ThetaY_40_45__1318 = new TH1D("ThetaY_40_45__1318","",630,-1575,1575);
   ThetaY_40_45__1318->SetBinContent(310,0.1627907);
   ThetaY_40_45__1318->SetBinContent(311,0.5813953);
   ThetaY_40_45__1318->SetBinContent(312,0.8657807);
   ThetaY_40_45__1318->SetBinContent(313,1);
   ThetaY_40_45__1318->SetBinContent(314,1.122924);
   ThetaY_40_45__1318->SetBinContent(315,1.152159);
   ThetaY_40_45__1318->SetBinContent(316,1.142857);
   ThetaY_40_45__1318->SetBinContent(317,1.093023);
   ThetaY_40_45__1318->SetBinContent(318,1.033223);
   ThetaY_40_45__1318->SetBinContent(319,0.8664452);
   ThetaY_40_45__1318->SetBinContent(320,0.6245847);
   ThetaY_40_45__1318->SetBinContent(321,0.145515);
   ThetaY_40_45__1318->SetBinError(310,0.01040032);
   ThetaY_40_45__1318->SetBinError(311,0.01965475);
   ThetaY_40_45__1318->SetBinError(312,0.02398478);
   ThetaY_40_45__1318->SetBinError(313,0.02577696);
   ThetaY_40_45__1318->SetBinError(314,0.02731536);
   ThetaY_40_45__1318->SetBinError(315,0.02766865);
   ThetaY_40_45__1318->SetBinError(316,0.02755673);
   ThetaY_40_45__1318->SetBinError(317,0.02694924);
   ThetaY_40_45__1318->SetBinError(318,0.02620165);
   ThetaY_40_45__1318->SetBinError(319,0.02399398);
   ThetaY_40_45__1318->SetBinError(320,0.02037171);
   ThetaY_40_45__1318->SetBinError(321,0.009832989);
   ThetaY_40_45__1318->SetEntries(14735);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1318->SetLineColor(ci);
   ThetaY_40_45__1318->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1318->SetMarkerColor(ci);
   ThetaY_40_45__1318->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1318->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1318->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1318->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1318->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1318->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1318->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1318->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1318->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1318->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1318->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1318->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1318->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1318->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1318->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1318->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1318->Draw("AEsame");
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
   
   Double_t _fx3440[12] = {
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
   Double_t _fy3440[12] = {
   0.5584416,
   0.3127273,
   0.3150073,
   1,
   0.2428725,
   0.5523225,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3440[12] = {
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
   Double_t _fely3440[12] = {
   0.4623271,
   0.2021376,
   0.1715828,
   0.2978649,
   0.1322658,
   0.2040458,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3440[12] = {
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
   Double_t _fehy3440[12] = {
   1.292819,
   0.4135591,
   0.3071127,
   0.4035571,
   0.2366628,
   0.2984111,
   0.1465233,
   0.1532074,
   0.16208,
   0.1932999,
   0.2682256,
   1.155009};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3440,_fy3440,_felx3440,_fehx3440,_fely3440,_fehy3440);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3440 = new TH1F("Graph_Graph3440","",100,-100,100);
   Graph_Graph3440->SetMinimum(0);
   Graph_Graph3440->SetMaximum(1.5);
   Graph_Graph3440->SetDirectory(0);
   Graph_Graph3440->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3440->SetLineColor(ci);
   Graph_Graph3440->GetXaxis()->SetRange(1,100);
   Graph_Graph3440->GetXaxis()->CenterTitle(true);
   Graph_Graph3440->GetXaxis()->SetLabelFont(42);
   Graph_Graph3440->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3440->GetXaxis()->SetTitleFont(42);
   Graph_Graph3440->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3440->GetYaxis()->CenterTitle(true);
   Graph_Graph3440->GetYaxis()->SetLabelFont(42);
   Graph_Graph3440->GetYaxis()->SetTitleFont(42);
   Graph_Graph3440->GetZaxis()->SetLabelFont(42);
   Graph_Graph3440->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3440->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3440);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.267375,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1319 = new TH2D("ThetaY_vs_Y_40_45__1319","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8081,245);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8107,875);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8133,1303);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8159,1505);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8185,1690);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8211,1734);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8237,1720);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8263,1645);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8289,1555);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8315,1304);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8341,940);
   ThetaY_vs_Y_40_45__1319->SetBinContent(8367,219);
   ThetaY_vs_Y_40_45__1319->SetEntries(14735);
   ThetaY_vs_Y_40_45__1319->SetContour(20);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(1,86.7);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(2,173.4);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(3,260.1);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(4,346.8);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(5,433.5);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(6,520.2);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(7,606.9);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(8,693.6);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(9,780.3);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(10,867);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(11,953.7);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(12,1040.4);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(13,1127.1);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(14,1213.8);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(15,1300.5);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(16,1387.2);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(17,1473.9);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(18,1560.6);
   ThetaY_vs_Y_40_45__1319->SetContourLevel(19,1647.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1319->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1319->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1319->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1319->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1319->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1319->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1319->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1319->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1319->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1319->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1319->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1319->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1319->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1319->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1319->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1319->Draw("COL");
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
