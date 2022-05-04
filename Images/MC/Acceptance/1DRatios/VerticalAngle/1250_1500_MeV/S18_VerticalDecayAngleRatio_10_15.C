void S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_10_15__957 = new TH1D("S18_ThetaY_10_15__957","",630,-1575,1575);
   S18_ThetaY_10_15__957->SetBinContent(308,0.05993691);
   S18_ThetaY_10_15__957->SetBinContent(309,0.340694);
   S18_ThetaY_10_15__957->SetBinContent(310,0.5835962);
   S18_ThetaY_10_15__957->SetBinContent(311,0.7287066);
   S18_ThetaY_10_15__957->SetBinContent(312,1);
   S18_ThetaY_10_15__957->SetBinContent(313,0.9022082);
   S18_ThetaY_10_15__957->SetBinContent(314,0.9905363);
   S18_ThetaY_10_15__957->SetBinContent(315,0.9242902);
   S18_ThetaY_10_15__957->SetBinContent(316,0.9116719);
   S18_ThetaY_10_15__957->SetBinContent(317,0.8643533);
   S18_ThetaY_10_15__957->SetBinContent(318,0.7949527);
   S18_ThetaY_10_15__957->SetBinContent(319,0.4763407);
   S18_ThetaY_10_15__957->SetBinContent(320,0.04100946);
   S18_ThetaY_10_15__957->SetBinError(308,0.01375047);
   S18_ThetaY_10_15__957->SetBinError(309,0.0327833);
   S18_ThetaY_10_15__957->SetBinError(310,0.04290685);
   S18_ThetaY_10_15__957->SetBinError(311,0.04794538);
   S18_ThetaY_10_15__957->SetBinError(312,0.0561656);
   S18_ThetaY_10_15__957->SetBinError(313,0.05334869);
   S18_ThetaY_10_15__957->SetBinError(314,0.0558992);
   S18_ThetaY_10_15__957->SetBinError(315,0.05399761);
   S18_ThetaY_10_15__957->SetBinError(316,0.05362776);
   S18_ThetaY_10_15__957->SetBinError(317,0.05221749);
   S18_ThetaY_10_15__957->SetBinError(318,0.05007731);
   S18_ThetaY_10_15__957->SetBinError(319,0.03876406);
   S18_ThetaY_10_15__957->SetBinError(320,0.01137398);
   S18_ThetaY_10_15__957->SetMinimum(0);
   S18_ThetaY_10_15__957->SetMaximum(1.20101);
   S18_ThetaY_10_15__957->SetEntries(2732);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__957->SetLineColor(ci);
   S18_ThetaY_10_15__957->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__957->SetMarkerColor(ci);
   S18_ThetaY_10_15__957->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__957->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__957->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__957->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__957->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__957->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__957->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__957->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__957->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__957->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__957->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__957->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__957->Draw("AE");
   
   TH1D *ThetaY_10_15__958 = new TH1D("ThetaY_10_15__958","",630,-1575,1575);
   ThetaY_10_15__958->SetBinContent(307,0.006445289);
   ThetaY_10_15__958->SetBinContent(308,0.1926725);
   ThetaY_10_15__958->SetBinContent(309,0.5561328);
   ThetaY_10_15__958->SetBinContent(310,0.7826982);
   ThetaY_10_15__958->SetBinContent(311,0.9155741);
   ThetaY_10_15__958->SetBinContent(312,1);
   ThetaY_10_15__958->SetBinContent(313,1.061855);
   ThetaY_10_15__958->SetBinContent(314,1.091827);
   ThetaY_10_15__958->SetBinContent(315,1.082588);
   ThetaY_10_15__958->SetBinContent(316,1.087293);
   ThetaY_10_15__958->SetBinContent(317,1.088543);
   ThetaY_10_15__958->SetBinContent(318,1.054528);
   ThetaY_10_15__958->SetBinContent(319,0.9942164);
   ThetaY_10_15__958->SetBinContent(320,0.9166279);
   ThetaY_10_15__958->SetBinContent(321,0.77466);
   ThetaY_10_15__958->SetBinContent(322,0.5543928);
   ThetaY_10_15__958->SetBinContent(323,0.1956623);
   ThetaY_10_15__958->SetBinContent(324,0.006420782);
   ThetaY_10_15__958->SetBinError(307,0.0003974335);
   ThetaY_10_15__958->SetBinError(308,0.002172967);
   ThetaY_10_15__958->SetBinError(309,0.003691752);
   ThetaY_10_15__958->SetBinError(310,0.004379661);
   ThetaY_10_15__958->SetBinError(311,0.004736855);
   ThetaY_10_15__958->SetBinError(312,0.004950434);
   ThetaY_10_15__958->SetBinError(313,0.005101242);
   ThetaY_10_15__958->SetBinError(314,0.005172735);
   ThetaY_10_15__958->SetBinError(315,0.005150802);
   ThetaY_10_15__958->SetBinError(316,0.005161984);
   ThetaY_10_15__958->SetBinError(317,0.00516495);
   ThetaY_10_15__958->SetBinError(318,0.005083611);
   ThetaY_10_15__958->SetBinError(319,0.004936098);
   ThetaY_10_15__958->SetBinError(320,0.00473958);
   ThetaY_10_15__958->SetBinError(321,0.004357113);
   ThetaY_10_15__958->SetBinError(322,0.003685973);
   ThetaY_10_15__958->SetBinError(323,0.002189762);
   ThetaY_10_15__958->SetBinError(324,0.0003966772);
   ThetaY_10_15__958->SetEntries(545242);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__958->SetLineColor(ci);
   ThetaY_10_15__958->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__958->SetMarkerColor(ci);
   ThetaY_10_15__958->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__958->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__958->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__958->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__958->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__958->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__958->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__958->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__958->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__958->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__958->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__958->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__958->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__958->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__958->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__958->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__958->Draw("AEsame");
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
   
   Double_t _fx3320[18] = {
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
   Double_t _fy3320[18] = {
   0,
   0.3110819,
   0.6126127,
   0.745621,
   0.7959013,
   1,
   0.8496528,
   0.9072282,
   0.8537784,
   0.8384784,
   0.794046,
   0.7538472,
   0.4791117,
   0.04473949,
   0,
   0,
   0,
   0};
   Double_t _felx3320[18] = {
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
   Double_t _fely3320[18] = {
   0,
   0.07081505,
   0.05899593,
   0.05492715,
   0.0524894,
   0.05635294,
   0.05037654,
   0.05135005,
   0.05001431,
   0.04945348,
   0.04808792,
   0.04759463,
   0.0390183,
   0.01224911,
   0,
   0,
   0,
   0};
   Double_t _fehx3320[18] = {
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
   Double_t _fehy3320[18] = {
   0.9042285,
   0.08912724,
   0.06497347,
   0.05913239,
   0.05607222,
   0.0596232,
   0.053457,
   0.05434337,
   0.05303482,
   0.05246114,
   0.05109338,
   0.05069995,
   0.04233412,
   0.01617052,
   0.007497236,
   0.0104761,
   0.02968538,
   0.9076919};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3320,_fy3320,_felx3320,_fehx3320,_fely3320,_fehy3320);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3320 = new TH1F("Graph_Graph3320","",100,-100,100);
   Graph_Graph3320->SetMinimum(0);
   Graph_Graph3320->SetMaximum(1.5);
   Graph_Graph3320->SetDirectory(0);
   Graph_Graph3320->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3320->SetLineColor(ci);
   Graph_Graph3320->GetXaxis()->SetRange(1,100);
   Graph_Graph3320->GetXaxis()->CenterTitle(true);
   Graph_Graph3320->GetXaxis()->SetLabelFont(42);
   Graph_Graph3320->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3320->GetXaxis()->SetTitleFont(42);
   Graph_Graph3320->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3320->GetYaxis()->CenterTitle(true);
   Graph_Graph3320->GetYaxis()->SetLabelFont(42);
   Graph_Graph3320->GetYaxis()->SetTitleFont(42);
   Graph_Graph3320->GetZaxis()->SetLabelFont(42);
   Graph_Graph3320->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3320->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3320);
   
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
   
   TH2D *ThetaY_vs_Y_10_15__959 = new TH2D("ThetaY_vs_Y_10_15__959","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__959->SetBinContent(7997,263);
   ThetaY_vs_Y_10_15__959->SetBinContent(8023,7862);
   ThetaY_vs_Y_10_15__959->SetBinContent(8049,22693);
   ThetaY_vs_Y_10_15__959->SetBinContent(8075,31938);
   ThetaY_vs_Y_10_15__959->SetBinContent(8101,37360);
   ThetaY_vs_Y_10_15__959->SetBinContent(8127,40805);
   ThetaY_vs_Y_10_15__959->SetBinContent(8153,43329);
   ThetaY_vs_Y_10_15__959->SetBinContent(8179,44552);
   ThetaY_vs_Y_10_15__959->SetBinContent(8205,44175);
   ThetaY_vs_Y_10_15__959->SetBinContent(8231,44367);
   ThetaY_vs_Y_10_15__959->SetBinContent(8257,44418);
   ThetaY_vs_Y_10_15__959->SetBinContent(8283,43030);
   ThetaY_vs_Y_10_15__959->SetBinContent(8309,40569);
   ThetaY_vs_Y_10_15__959->SetBinContent(8335,37403);
   ThetaY_vs_Y_10_15__959->SetBinContent(8361,31610);
   ThetaY_vs_Y_10_15__959->SetBinContent(8387,22622);
   ThetaY_vs_Y_10_15__959->SetBinContent(8413,7984);
   ThetaY_vs_Y_10_15__959->SetBinContent(8439,262);
   ThetaY_vs_Y_10_15__959->SetEntries(545242);
   ThetaY_vs_Y_10_15__959->SetContour(20);
   ThetaY_vs_Y_10_15__959->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__959->SetContourLevel(1,2227.6);
   ThetaY_vs_Y_10_15__959->SetContourLevel(2,4455.2);
   ThetaY_vs_Y_10_15__959->SetContourLevel(3,6682.8);
   ThetaY_vs_Y_10_15__959->SetContourLevel(4,8910.4);
   ThetaY_vs_Y_10_15__959->SetContourLevel(5,11138);
   ThetaY_vs_Y_10_15__959->SetContourLevel(6,13365.6);
   ThetaY_vs_Y_10_15__959->SetContourLevel(7,15593.2);
   ThetaY_vs_Y_10_15__959->SetContourLevel(8,17820.8);
   ThetaY_vs_Y_10_15__959->SetContourLevel(9,20048.4);
   ThetaY_vs_Y_10_15__959->SetContourLevel(10,22276);
   ThetaY_vs_Y_10_15__959->SetContourLevel(11,24503.6);
   ThetaY_vs_Y_10_15__959->SetContourLevel(12,26731.2);
   ThetaY_vs_Y_10_15__959->SetContourLevel(13,28958.8);
   ThetaY_vs_Y_10_15__959->SetContourLevel(14,31186.4);
   ThetaY_vs_Y_10_15__959->SetContourLevel(15,33414);
   ThetaY_vs_Y_10_15__959->SetContourLevel(16,35641.6);
   ThetaY_vs_Y_10_15__959->SetContourLevel(17,37869.2);
   ThetaY_vs_Y_10_15__959->SetContourLevel(18,40096.8);
   ThetaY_vs_Y_10_15__959->SetContourLevel(19,42324.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__959->SetLineColor(ci);
   ThetaY_vs_Y_10_15__959->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__959->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__959->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__959->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__959->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__959->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__959->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__959->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__959->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__959->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__959->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__959->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__959->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__959->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__959->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
