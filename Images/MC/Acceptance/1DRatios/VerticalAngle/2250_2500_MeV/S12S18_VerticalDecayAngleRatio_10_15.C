void S12S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07071101,125,1.343509);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__1698 = new TH1D("S12S18_ThetaY_10_15__1698","",630,-1575,1575);
   S12S18_ThetaY_10_15__1698->SetBinContent(312,0.2320675);
   S12S18_ThetaY_10_15__1698->SetBinContent(313,0.7805907);
   S12S18_ThetaY_10_15__1698->SetBinContent(314,1);
   S12S18_ThetaY_10_15__1698->SetBinContent(315,0.9240506);
   S12S18_ThetaY_10_15__1698->SetBinContent(316,0.9831224);
   S12S18_ThetaY_10_15__1698->SetBinContent(317,0.7299578);
   S12S18_ThetaY_10_15__1698->SetBinContent(318,0.08016878);
   S12S18_ThetaY_10_15__1698->SetBinError(312,0.03129198);
   S12S18_ThetaY_10_15__1698->SetBinError(313,0.05739017);
   S12S18_ThetaY_10_15__1698->SetBinError(314,0.06495698);
   S12S18_ThetaY_10_15__1698->SetBinError(315,0.06244156);
   S12S18_ThetaY_10_15__1698->SetBinError(316,0.06440649);
   S12S18_ThetaY_10_15__1698->SetBinError(317,0.05549766);
   S12S18_ThetaY_10_15__1698->SetBinError(318,0.01839198);
   S12S18_ThetaY_10_15__1698->SetMinimum(0);
   S12S18_ThetaY_10_15__1698->SetMaximum(1.202087);
   S12S18_ThetaY_10_15__1698->SetEntries(1121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1698->SetLineColor(ci);
   S12S18_ThetaY_10_15__1698->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1698->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__1698->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__1698->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__1698->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1698->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1698->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1698->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__1698->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__1698->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1698->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1698->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1698->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1698->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1698->Draw("AE");
   
   TH1D *ThetaY_10_15__1699 = new TH1D("ThetaY_10_15__1699","",630,-1575,1575);
   ThetaY_10_15__1699->SetBinContent(311,0.006518756);
   ThetaY_10_15__1699->SetBinContent(312,0.3295403);
   ThetaY_10_15__1699->SetBinContent(313,0.7859389);
   ThetaY_10_15__1699->SetBinContent(314,1);
   ThetaY_10_15__1699->SetBinContent(315,1.092806);
   ThetaY_10_15__1699->SetBinContent(316,1.084772);
   ThetaY_10_15__1699->SetBinContent(317,1.003202);
   ThetaY_10_15__1699->SetBinContent(318,0.7805352);
   ThetaY_10_15__1699->SetBinContent(319,0.3251086);
   ThetaY_10_15__1699->SetBinContent(320,0.00691903);
   ThetaY_10_15__1699->SetBinError(311,0.0004317151);
   ThetaY_10_15__1699->SetBinError(312,0.003069511);
   ThetaY_10_15__1699->SetBinError(313,0.004740338);
   ThetaY_10_15__1699->SetBinError(314,0.005347058);
   ThetaY_10_15__1699->SetBinError(315,0.005589675);
   ThetaY_10_15__1699->SetBinError(316,0.00556909);
   ThetaY_10_15__1699->SetBinError(317,0.005355613);
   ThetaY_10_15__1699->SetBinError(318,0.004724014);
   ThetaY_10_15__1699->SetBinError(319,0.003048802);
   ThetaY_10_15__1699->SetBinError(320,0.0004447721);
   ThetaY_10_15__1699->SetEntries(224383);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1699->SetLineColor(ci);
   ThetaY_10_15__1699->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1699->SetMarkerColor(ci);
   ThetaY_10_15__1699->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1699->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1699->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1699->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1699->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1699->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1699->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1699->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1699->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1699->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1699->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1699->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1699->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1699->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1699->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1699->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1699->Draw("AEsame");
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
   
   Double_t _fx3567[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3567[10] = {
   0,
   0.704216,
   0.9931951,
   1,
   0.8455757,
   0.9062937,
   0.7276278,
   0.10271,
   0,
   0};
   Double_t _felx3567[10] = {
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
   Double_t _fely3567[10] = {
   0,
   0.09488851,
   0.07319893,
   0.0651298,
   0.05725769,
   0.0595118,
   0.05540234,
   0.02336193,
   0,
   0};
   Double_t _fehx3567[10] = {
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
   Double_t _fehy3567[10] = {
   1.196466,
   0.1086341,
   0.07880617,
   0.0695184,
   0.06127425,
   0.06355579,
   0.05979204,
   0.02939468,
   0.02389556,
   1.126985};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3567,_fy3567,_felx3567,_fehx3567,_fely3567,_fehy3567);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3567 = new TH1F("Graph_Graph3567","",100,-100,100);
   Graph_Graph3567->SetMinimum(0);
   Graph_Graph3567->SetMaximum(1.5);
   Graph_Graph3567->SetDirectory(0);
   Graph_Graph3567->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3567->SetLineColor(ci);
   Graph_Graph3567->GetXaxis()->SetRange(1,100);
   Graph_Graph3567->GetXaxis()->CenterTitle(true);
   Graph_Graph3567->GetXaxis()->SetLabelFont(42);
   Graph_Graph3567->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3567->GetXaxis()->SetTitleFont(42);
   Graph_Graph3567->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3567->GetYaxis()->CenterTitle(true);
   Graph_Graph3567->GetYaxis()->SetLabelFont(42);
   Graph_Graph3567->GetYaxis()->SetTitleFont(42);
   Graph_Graph3567->GetZaxis()->SetLabelFont(42);
   Graph_Graph3567->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3567->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3567);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.202087,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1700 = new TH2D("ThetaY_vs_Y_10_15__1700","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8101,228);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8127,11526);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8153,27489);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8179,34976);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8205,38222);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8231,37941);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8257,35088);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8283,27300);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8309,11371);
   ThetaY_vs_Y_10_15__1700->SetBinContent(8335,242);
   ThetaY_vs_Y_10_15__1700->SetEntries(224383);
   ThetaY_vs_Y_10_15__1700->SetContour(20);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(1,1911.1);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(2,3822.2);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(3,5733.3);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(4,7644.4);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(5,9555.5);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(6,11466.6);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(7,13377.7);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(8,15288.8);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(9,17199.9);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(10,19111);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(11,21022.1);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(12,22933.2);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(13,24844.3);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(14,26755.4);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(15,28666.5);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(16,30577.6);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(17,32488.7);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(18,34399.8);
   ThetaY_vs_Y_10_15__1700->SetContourLevel(19,36310.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1700->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1700->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1700->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1700->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1700->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1700->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1700->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1700->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1700->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1700->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1700->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1700->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1700->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1700->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1700->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1700->Draw("COL");
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
