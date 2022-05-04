void S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08997011,125,1.709432);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__1641 = new TH1D("S18_ThetaY_10_15__1641","",630,-1575,1575);
   S18_ThetaY_10_15__1641->SetBinContent(312,0.25);
   S18_ThetaY_10_15__1641->SetBinContent(313,1);
   S18_ThetaY_10_15__1641->SetBinContent(314,1.135417);
   S18_ThetaY_10_15__1641->SetBinContent(315,1.166667);
   S18_ThetaY_10_15__1641->SetBinContent(316,1.1875);
   S18_ThetaY_10_15__1641->SetBinContent(317,0.8645833);
   S18_ThetaY_10_15__1641->SetBinContent(318,0.07291667);
   S18_ThetaY_10_15__1641->SetBinError(312,0.05103104);
   S18_ThetaY_10_15__1641->SetBinError(313,0.1020621);
   S18_ThetaY_10_15__1641->SetBinError(314,0.1087532);
   S18_ThetaY_10_15__1641->SetBinError(315,0.1102396);
   S18_ThetaY_10_15__1641->SetBinError(316,0.1112196);
   S18_ThetaY_10_15__1641->SetBinError(317,0.09490035);
   S18_ThetaY_10_15__1641->SetBinError(318,0.02755991);
   S18_ThetaY_10_15__1641->SetMinimum(0);
   S18_ThetaY_10_15__1641->SetMaximum(1.529492);
   S18_ThetaY_10_15__1641->SetEntries(545);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1641->SetLineColor(ci);
   S18_ThetaY_10_15__1641->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1641->SetMarkerColor(ci);
   S18_ThetaY_10_15__1641->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__1641->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__1641->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1641->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1641->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1641->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__1641->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__1641->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1641->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1641->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1641->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1641->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1641->Draw("AE");
   
   TH1D *ThetaY_10_15__1642 = new TH1D("ThetaY_10_15__1642","",630,-1575,1575);
   ThetaY_10_15__1642->SetBinContent(311,0.008294227);
   ThetaY_10_15__1642->SetBinContent(312,0.419295);
   ThetaY_10_15__1642->SetBinContent(313,1);
   ThetaY_10_15__1642->SetBinContent(314,1.272363);
   ThetaY_10_15__1642->SetBinContent(315,1.390447);
   ThetaY_10_15__1642->SetBinContent(316,1.380225);
   ThetaY_10_15__1642->SetBinContent(317,1.276438);
   ThetaY_10_15__1642->SetBinContent(318,0.9931245);
   ThetaY_10_15__1642->SetBinContent(319,0.4136564);
   ThetaY_10_15__1642->SetBinContent(320,0.008803521);
   ThetaY_10_15__1642->SetBinError(311,0.0005492986);
   ThetaY_10_15__1642->SetBinError(312,0.003905533);
   ThetaY_10_15__1642->SetBinError(313,0.006031433);
   ThetaY_10_15__1642->SetBinError(314,0.006803402);
   ThetaY_10_15__1642->SetBinError(315,0.007112098);
   ThetaY_10_15__1642->SetBinError(316,0.007085907);
   ThetaY_10_15__1642->SetBinError(317,0.006814286);
   ThetaY_10_15__1642->SetBinError(318,0.006010663);
   ThetaY_10_15__1642->SetBinError(319,0.003879184);
   ThetaY_10_15__1642->SetBinError(320,0.0005659118);
   ThetaY_10_15__1642->SetEntries(224383);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1642->SetLineColor(ci);
   ThetaY_10_15__1642->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1642->SetMarkerColor(ci);
   ThetaY_10_15__1642->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1642->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1642->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1642->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1642->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1642->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1642->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1642->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1642->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1642->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1642->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1642->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1642->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1642->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1642->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1642->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1642->Draw("AEsame");
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
   
   Double_t _fx3548[10] = {
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
   Double_t _fy3548[10] = {
   0,
   0.5962389,
   1,
   0.8923682,
   0.8390587,
   0.8603671,
   0.6773407,
   0.07342147,
   0,
   0};
   Double_t _felx3548[10] = {
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
   Double_t _fely3548[10] = {
   0,
   0.1209738,
   0.10206,
   0.08547378,
   0.07927998,
   0.0805822,
   0.07428442,
   0.02707952,
   0,
   0};
   Double_t _fehx3548[10] = {
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
   Double_t _fehy3548[10] = {
   2.321487,
   0.1484309,
   0.1130525,
   0.09408349,
   0.08715197,
   0.08850996,
   0.08291721,
   0.03955345,
   0.04636424,
   2.186675};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3548,_fy3548,_felx3548,_fehx3548,_fely3548,_fehy3548);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3548 = new TH1F("Graph_Graph3548","",100,-100,100);
   Graph_Graph3548->SetMinimum(0);
   Graph_Graph3548->SetMaximum(1.5);
   Graph_Graph3548->SetDirectory(0);
   Graph_Graph3548->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3548->SetLineColor(ci);
   Graph_Graph3548->GetXaxis()->SetRange(1,100);
   Graph_Graph3548->GetXaxis()->CenterTitle(true);
   Graph_Graph3548->GetXaxis()->SetLabelFont(42);
   Graph_Graph3548->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3548->GetXaxis()->SetTitleFont(42);
   Graph_Graph3548->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3548->GetYaxis()->CenterTitle(true);
   Graph_Graph3548->GetYaxis()->SetLabelFont(42);
   Graph_Graph3548->GetYaxis()->SetTitleFont(42);
   Graph_Graph3548->GetZaxis()->SetLabelFont(42);
   Graph_Graph3548->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3548->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3548);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.529492,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1643 = new TH2D("ThetaY_vs_Y_10_15__1643","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8101,228);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8127,11526);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8153,27489);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8179,34976);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8205,38222);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8231,37941);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8257,35088);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8283,27300);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8309,11371);
   ThetaY_vs_Y_10_15__1643->SetBinContent(8335,242);
   ThetaY_vs_Y_10_15__1643->SetEntries(224383);
   ThetaY_vs_Y_10_15__1643->SetContour(20);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(1,1911.1);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(2,3822.2);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(3,5733.3);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(4,7644.4);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(5,9555.5);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(6,11466.6);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(7,13377.7);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(8,15288.8);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(9,17199.9);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(10,19111);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(11,21022.1);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(12,22933.2);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(13,24844.3);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(14,26755.4);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(15,28666.5);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(16,30577.6);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(17,32488.7);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(18,34399.8);
   ThetaY_vs_Y_10_15__1643->SetContourLevel(19,36310.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1643->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1643->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1643->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1643->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1643->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1643->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1643->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1643->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1643->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1643->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1643->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1643->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1643->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1643->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1643->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1643->Draw("COL");
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
