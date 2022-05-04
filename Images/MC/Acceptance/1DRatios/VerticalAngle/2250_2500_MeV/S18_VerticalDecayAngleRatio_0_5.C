void S18_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06488651,125,1.232844);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__1635 = new TH1D("S18_ThetaY_0_5__1635","",630,-1575,1575);
   S18_ThetaY_0_5__1635->SetBinContent(312,0.05729167);
   S18_ThetaY_0_5__1635->SetBinContent(313,0.40625);
   S18_ThetaY_0_5__1635->SetBinContent(314,0.859375);
   S18_ThetaY_0_5__1635->SetBinContent(315,1);
   S18_ThetaY_0_5__1635->SetBinContent(316,0.9322917);
   S18_ThetaY_0_5__1635->SetBinContent(317,0.8177083);
   S18_ThetaY_0_5__1635->SetBinContent(318,0.34375);
   S18_ThetaY_0_5__1635->SetBinContent(319,0.02083333);
   S18_ThetaY_0_5__1635->SetBinError(312,0.01727409);
   S18_ThetaY_0_5__1635->SetBinError(313,0.04599875);
   S18_ThetaY_0_5__1635->SetBinError(314,0.06690225);
   S18_ThetaY_0_5__1635->SetBinError(315,0.07216878);
   S18_ThetaY_0_5__1635->SetBinError(316,0.06968275);
   S18_ThetaY_0_5__1635->SetBinError(317,0.06526023);
   S18_ThetaY_0_5__1635->SetBinError(318,0.0423127);
   S18_ThetaY_0_5__1635->SetBinError(319,0.01041667);
   S18_ThetaY_0_5__1635->SetMinimum(0);
   S18_ThetaY_0_5__1635->SetMaximum(1.103071);
   S18_ThetaY_0_5__1635->SetEntries(852);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1635->SetLineColor(ci);
   S18_ThetaY_0_5__1635->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__1635->SetMarkerColor(ci);
   S18_ThetaY_0_5__1635->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__1635->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__1635->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1635->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1635->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1635->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__1635->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__1635->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1635->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1635->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__1635->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__1635->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__1635->Draw("AE");
   
   TH1D *ThetaY_0_5__1636 = new TH1D("ThetaY_0_5__1636","",630,-1575,1575);
   ThetaY_0_5__1636->SetBinContent(311,0.006656646);
   ThetaY_0_5__1636->SetBinContent(312,0.2997248);
   ThetaY_0_5__1636->SetBinContent(313,0.7165167);
   ThetaY_0_5__1636->SetBinContent(314,0.9170359);
   ThetaY_0_5__1636->SetBinContent(315,1);
   ThetaY_0_5__1636->SetBinContent(316,1.002791);
   ThetaY_0_5__1636->SetBinContent(317,0.9072755);
   ThetaY_0_5__1636->SetBinContent(318,0.7124563);
   ThetaY_0_5__1636->SetBinContent(319,0.2947469);
   ThetaY_0_5__1636->SetBinContent(320,0.006676167);
   ThetaY_0_5__1636->SetBinError(311,0.0003604776);
   ThetaY_0_5__1636->SetBinError(312,0.002418866);
   ThetaY_0_5__1636->SetBinError(313,0.003739932);
   ThetaY_0_5__1636->SetBinError(314,0.004231007);
   ThetaY_0_5__1636->SetBinError(315,0.004418253);
   ThetaY_0_5__1636->SetBinError(316,0.004424415);
   ThetaY_0_5__1636->SetBinError(317,0.00420843);
   ThetaY_0_5__1636->SetBinError(318,0.00372932);
   ThetaY_0_5__1636->SetBinError(319,0.002398696);
   ThetaY_0_5__1636->SetBinError(320,0.0003610058);
   ThetaY_0_5__1636->SetEntries(300389);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1636->SetLineColor(ci);
   ThetaY_0_5__1636->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1636->SetMarkerColor(ci);
   ThetaY_0_5__1636->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1636->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1636->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1636->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1636->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1636->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1636->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1636->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1636->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1636->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1636->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1636->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1636->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1636->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1636->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1636->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1636->Draw("AEsame");
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
   
   Double_t _fx3546[10] = {
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
   Double_t _fy3546[10] = {
   0,
   0.1911476,
   0.5669791,
   0.9371225,
   1,
   0.9296964,
   0.901279,
   0.4824857,
   0.07068211,
   0};
   Double_t _felx3546[10] = {
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
   Double_t _fely3546[10] = {
   0,
   0.05676482,
   0.06412702,
   0.07300805,
   0.07224024,
   0.06954404,
   0.07197376,
   0.05929179,
   0.03383094,
   0};
   Double_t _fehx3546[10] = {
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
   Double_t _fehy3546[10] = {
   1.444359,
   0.07678464,
   0.07182709,
   0.07893181,
   0.07765889,
   0.07495285,
   0.07796607,
   0.06706938,
   0.05590077,
   1.440124};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3546,_fy3546,_felx3546,_fehx3546,_fely3546,_fehy3546);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3546 = new TH1F("Graph_Graph3546","",100,-100,100);
   Graph_Graph3546->SetMinimum(0);
   Graph_Graph3546->SetMaximum(1.5);
   Graph_Graph3546->SetDirectory(0);
   Graph_Graph3546->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3546->SetLineColor(ci);
   Graph_Graph3546->GetXaxis()->SetRange(1,100);
   Graph_Graph3546->GetXaxis()->CenterTitle(true);
   Graph_Graph3546->GetXaxis()->SetLabelFont(42);
   Graph_Graph3546->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3546->GetXaxis()->SetTitleFont(42);
   Graph_Graph3546->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3546->GetYaxis()->CenterTitle(true);
   Graph_Graph3546->GetYaxis()->SetLabelFont(42);
   Graph_Graph3546->GetYaxis()->SetTitleFont(42);
   Graph_Graph3546->GetZaxis()->SetLabelFont(42);
   Graph_Graph3546->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3546->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3546);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.103071,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1637 = new TH2D("ThetaY_vs_Y_0_5__1637","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8099,341);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8125,15354);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8151,36705);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8177,46977);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8203,51227);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8229,51370);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8255,46477);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8281,36497);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8307,15099);
   ThetaY_vs_Y_0_5__1637->SetBinContent(8333,342);
   ThetaY_vs_Y_0_5__1637->SetEntries(300389);
   ThetaY_vs_Y_0_5__1637->SetContour(20);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(1,2568.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(2,5137);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(3,7705.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(4,10274);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(5,12842.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(6,15411);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(7,17979.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(8,20548);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(9,23116.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(10,25685);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(11,28253.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(12,30822);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(13,33390.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(14,35959);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(15,38527.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(16,41096);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(17,43664.5);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(18,46233);
   ThetaY_vs_Y_0_5__1637->SetContourLevel(19,48801.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1637->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1637->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1637->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1637->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1637->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1637->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1637->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1637->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1637->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1637->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1637->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1637->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1637->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1637->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1637->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1637->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
