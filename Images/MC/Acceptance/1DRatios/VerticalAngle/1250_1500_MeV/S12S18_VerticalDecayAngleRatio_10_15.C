void S12S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07064763,125,1.342305);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__1014 = new TH1D("S12S18_ThetaY_10_15__1014","",630,-1575,1575);
   S12S18_ThetaY_10_15__1014->SetBinContent(308,0.05485893);
   S12S18_ThetaY_10_15__1014->SetBinContent(309,0.3322884);
   S12S18_ThetaY_10_15__1014->SetBinContent(310,0.6050157);
   S12S18_ThetaY_10_15__1014->SetBinContent(311,0.7351097);
   S12S18_ThetaY_10_15__1014->SetBinContent(312,1);
   S12S18_ThetaY_10_15__1014->SetBinContent(313,0.8949843);
   S12S18_ThetaY_10_15__1014->SetBinContent(314,0.9639498);
   S12S18_ThetaY_10_15__1014->SetBinContent(315,0.9012539);
   S12S18_ThetaY_10_15__1014->SetBinContent(316,0.8918495);
   S12S18_ThetaY_10_15__1014->SetBinContent(317,0.8777429);
   S12S18_ThetaY_10_15__1014->SetBinContent(318,0.8134796);
   S12S18_ThetaY_10_15__1014->SetBinContent(319,0.4373041);
   S12S18_ThetaY_10_15__1014->SetBinContent(320,0.03134796);
   S12S18_ThetaY_10_15__1014->SetBinError(308,0.009272852);
   S12S18_ThetaY_10_15__1014->SetBinError(309,0.02282166);
   S12S18_ThetaY_10_15__1014->SetBinError(310,0.03079449);
   S12S18_ThetaY_10_15__1014->SetBinError(311,0.03394421);
   S12S18_ThetaY_10_15__1014->SetBinError(312,0.03959038);
   S12S18_ThetaY_10_15__1014->SetBinError(313,0.03745393);
   S12S18_ThetaY_10_15__1014->SetBinError(314,0.03887021);
   S12S18_ThetaY_10_15__1014->SetBinError(315,0.03758489);
   S12S18_ThetaY_10_15__1014->SetBinError(316,0.03738828);
   S12S18_ThetaY_10_15__1014->SetBinError(317,0.03709141);
   S12S18_ThetaY_10_15__1014->SetBinError(318,0.03570779);
   S12S18_ThetaY_10_15__1014->SetBinError(319,0.02618071);
   S12S18_ThetaY_10_15__1014->SetBinError(320,0.007009617);
   S12S18_ThetaY_10_15__1014->SetMinimum(0);
   S12S18_ThetaY_10_15__1014->SetMaximum(1.20101);
   S12S18_ThetaY_10_15__1014->SetEntries(5448);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1014->SetLineColor(ci);
   S12S18_ThetaY_10_15__1014->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1014->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__1014->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__1014->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__1014->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1014->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1014->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1014->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__1014->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__1014->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1014->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1014->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1014->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1014->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1014->Draw("AE");
   
   TH1D *ThetaY_10_15__1015 = new TH1D("ThetaY_10_15__1015","",630,-1575,1575);
   ThetaY_10_15__1015->SetBinContent(307,0.006445289);
   ThetaY_10_15__1015->SetBinContent(308,0.1926725);
   ThetaY_10_15__1015->SetBinContent(309,0.5561328);
   ThetaY_10_15__1015->SetBinContent(310,0.7826982);
   ThetaY_10_15__1015->SetBinContent(311,0.9155741);
   ThetaY_10_15__1015->SetBinContent(312,1);
   ThetaY_10_15__1015->SetBinContent(313,1.061855);
   ThetaY_10_15__1015->SetBinContent(314,1.091827);
   ThetaY_10_15__1015->SetBinContent(315,1.082588);
   ThetaY_10_15__1015->SetBinContent(316,1.087293);
   ThetaY_10_15__1015->SetBinContent(317,1.088543);
   ThetaY_10_15__1015->SetBinContent(318,1.054528);
   ThetaY_10_15__1015->SetBinContent(319,0.9942164);
   ThetaY_10_15__1015->SetBinContent(320,0.9166279);
   ThetaY_10_15__1015->SetBinContent(321,0.77466);
   ThetaY_10_15__1015->SetBinContent(322,0.5543928);
   ThetaY_10_15__1015->SetBinContent(323,0.1956623);
   ThetaY_10_15__1015->SetBinContent(324,0.006420782);
   ThetaY_10_15__1015->SetBinError(307,0.0003974335);
   ThetaY_10_15__1015->SetBinError(308,0.002172967);
   ThetaY_10_15__1015->SetBinError(309,0.003691752);
   ThetaY_10_15__1015->SetBinError(310,0.004379661);
   ThetaY_10_15__1015->SetBinError(311,0.004736855);
   ThetaY_10_15__1015->SetBinError(312,0.004950434);
   ThetaY_10_15__1015->SetBinError(313,0.005101242);
   ThetaY_10_15__1015->SetBinError(314,0.005172735);
   ThetaY_10_15__1015->SetBinError(315,0.005150802);
   ThetaY_10_15__1015->SetBinError(316,0.005161984);
   ThetaY_10_15__1015->SetBinError(317,0.00516495);
   ThetaY_10_15__1015->SetBinError(318,0.005083611);
   ThetaY_10_15__1015->SetBinError(319,0.004936098);
   ThetaY_10_15__1015->SetBinError(320,0.00473958);
   ThetaY_10_15__1015->SetBinError(321,0.004357113);
   ThetaY_10_15__1015->SetBinError(322,0.003685973);
   ThetaY_10_15__1015->SetBinError(323,0.002189762);
   ThetaY_10_15__1015->SetBinError(324,0.0003966772);
   ThetaY_10_15__1015->SetEntries(545242);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1015->SetLineColor(ci);
   ThetaY_10_15__1015->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1015->SetMarkerColor(ci);
   ThetaY_10_15__1015->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1015->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1015->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1015->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1015->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1015->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1015->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1015->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1015->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1015->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1015->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1015->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1015->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1015->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1015->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1015->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1015->Draw("AEsame");
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
   
   Double_t _fx3339[18] = {
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
   42.5};
   Double_t _fy3339[18] = {
   0,
   0.2847264,
   0.5974983,
   0.7729872,
   0.8028949,
   1,
   0.8428497,
   0.8828778,
   0.8324995,
   0.8202475,
   0.8063465,
   0.7714161,
   0.439848,
   0.03419922,
   0,
   0,
   0,
   0};
   Double_t _felx3339[18] = {
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
   Double_t _fely3339[18] = {
   0,
   0.04800008,
   0.04119418,
   0.03956331,
   0.03729244,
   0.03988776,
   0.03549303,
   0.03583582,
   0.03493231,
   0.03459582,
   0.03427788,
   0.03405365,
   0.02640726,
   0.007584667,
   0,
   0,
   0,
   0};
   Double_t _fehx3339[18] = {
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
   Double_t _fehy3339[18] = {
   0.4492797,
   0.05687213,
   0.04413911,
   0.04164331,
   0.03906721,
   0.04151246,
   0.03702095,
   0.03732161,
   0.03643061,
   0.0360875,
   0.03576776,
   0.035592,
   0.02804304,
   0.009487572,
   0.003725116,
   0.00520521,
   0.01474963,
   0.4510005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3339,_fy3339,_felx3339,_fehx3339,_fely3339,_fehy3339);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3339 = new TH1F("Graph_Graph3339","",100,-100,100);
   Graph_Graph3339->SetMinimum(0);
   Graph_Graph3339->SetMaximum(1.5);
   Graph_Graph3339->SetDirectory(0);
   Graph_Graph3339->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3339->SetLineColor(ci);
   Graph_Graph3339->GetXaxis()->SetRange(1,100);
   Graph_Graph3339->GetXaxis()->CenterTitle(true);
   Graph_Graph3339->GetXaxis()->SetLabelFont(42);
   Graph_Graph3339->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3339->GetXaxis()->SetTitleFont(42);
   Graph_Graph3339->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3339->GetYaxis()->CenterTitle(true);
   Graph_Graph3339->GetYaxis()->SetLabelFont(42);
   Graph_Graph3339->GetYaxis()->SetTitleFont(42);
   Graph_Graph3339->GetZaxis()->SetLabelFont(42);
   Graph_Graph3339->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3339->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3339);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.20101,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1016 = new TH2D("ThetaY_vs_Y_10_15__1016","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1016->SetBinContent(7997,263);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8023,7862);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8049,22693);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8075,31938);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8101,37360);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8127,40805);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8153,43329);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8179,44552);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8205,44175);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8231,44367);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8257,44418);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8283,43030);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8309,40569);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8335,37403);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8361,31610);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8387,22622);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8413,7984);
   ThetaY_vs_Y_10_15__1016->SetBinContent(8439,262);
   ThetaY_vs_Y_10_15__1016->SetEntries(545242);
   ThetaY_vs_Y_10_15__1016->SetContour(20);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(1,2227.6);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(2,4455.2);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(3,6682.8);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(4,8910.4);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(5,11138);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(6,13365.6);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(7,15593.2);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(8,17820.8);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(9,20048.4);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(10,22276);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(11,24503.6);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(12,26731.2);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(13,28958.8);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(14,31186.4);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(15,33414);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(16,35641.6);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(17,37869.2);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(18,40096.8);
   ThetaY_vs_Y_10_15__1016->SetContourLevel(19,42324.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1016->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1016->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1016->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1016->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1016->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1016->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1016->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1016->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1016->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1016->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1016->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1016->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1016->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1016->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1016->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1016->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_10_15","Reco vertices","lpf");
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
