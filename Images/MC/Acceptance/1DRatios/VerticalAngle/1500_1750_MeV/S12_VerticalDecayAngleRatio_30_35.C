void S12_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.06688855,125,1.270882);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__1083 = new TH1D("S12_ThetaY_30_35__1083","",630,-1575,1575);
   S12_ThetaY_30_35__1083->SetBinContent(309,0.07575758);
   S12_ThetaY_30_35__1083->SetBinContent(310,0.4090909);
   S12_ThetaY_30_35__1083->SetBinContent(311,0.4545455);
   S12_ThetaY_30_35__1083->SetBinContent(312,0.5454545);
   S12_ThetaY_30_35__1083->SetBinContent(313,0.8787879);
   S12_ThetaY_30_35__1083->SetBinContent(314,1);
   S12_ThetaY_30_35__1083->SetBinContent(315,0.9242424);
   S12_ThetaY_30_35__1083->SetBinContent(316,0.5);
   S12_ThetaY_30_35__1083->SetBinContent(317,0.03030303);
   S12_ThetaY_30_35__1083->SetBinError(309,0.03387982);
   S12_ThetaY_30_35__1083->SetBinError(310,0.07872958);
   S12_ThetaY_30_35__1083->SetBinError(311,0.08298827);
   S12_ThetaY_30_35__1083->SetBinError(312,0.09090909);
   S12_ThetaY_30_35__1083->SetBinError(313,0.1153905);
   S12_ThetaY_30_35__1083->SetBinError(314,0.1230915);
   S12_ThetaY_30_35__1083->SetBinError(315,0.1183371);
   S12_ThetaY_30_35__1083->SetBinError(316,0.08703883);
   S12_ThetaY_30_35__1083->SetBinError(317,0.02142748);
   S12_ThetaY_30_35__1083->SetMinimum(0);
   S12_ThetaY_30_35__1083->SetMaximum(1.137105);
   S12_ThetaY_30_35__1083->SetEntries(318);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1083->SetLineColor(ci);
   S12_ThetaY_30_35__1083->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1083->SetMarkerColor(ci);
   S12_ThetaY_30_35__1083->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__1083->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__1083->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1083->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1083->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1083->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__1083->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__1083->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1083->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1083->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1083->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1083->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1083->Draw("AE");
   
   TH1D *ThetaY_30_35__1084 = new TH1D("ThetaY_30_35__1084","",630,-1575,1575);
   ThetaY_30_35__1084->SetBinContent(308,0.0003588517);
   ThetaY_30_35__1084->SetBinContent(309,0.1315789);
   ThetaY_30_35__1084->SetBinContent(310,0.5008373);
   ThetaY_30_35__1084->SetBinContent(311,0.744378);
   ThetaY_30_35__1084->SetBinContent(312,0.867823);
   ThetaY_30_35__1084->SetBinContent(313,0.9625598);
   ThetaY_30_35__1084->SetBinContent(314,1);
   ThetaY_30_35__1084->SetBinContent(315,1.02799);
   ThetaY_30_35__1084->SetBinContent(316,1.033732);
   ThetaY_30_35__1084->SetBinContent(317,1.007656);
   ThetaY_30_35__1084->SetBinContent(318,0.9671053);
   ThetaY_30_35__1084->SetBinContent(319,0.8776316);
   ThetaY_30_35__1084->SetBinContent(320,0.7351675);
   ThetaY_30_35__1084->SetBinContent(321,0.5110048);
   ThetaY_30_35__1084->SetBinContent(322,0.1392344);
   ThetaY_30_35__1084->SetBinContent(323,0.0004784689);
   ThetaY_30_35__1084->SetBinError(308,0.0002071831);
   ThetaY_30_35__1084->SetBinError(309,0.003967255);
   ThetaY_30_35__1084->SetBinError(310,0.007740076);
   ThetaY_30_35__1084->SetBinError(311,0.009436124);
   ThetaY_30_35__1084->SetBinError(312,0.01018855);
   ThetaY_30_35__1084->SetBinError(313,0.01073027);
   ThetaY_30_35__1084->SetBinError(314,0.01093697);
   ThetaY_30_35__1084->SetBinError(315,0.01108897);
   ThetaY_30_35__1084->SetBinError(316,0.0111199);
   ThetaY_30_35__1084->SetBinError(317,0.01097875);
   ThetaY_30_35__1084->SetBinError(318,0.01075558);
   ThetaY_30_35__1084->SetBinError(319,0.01024597);
   ThetaY_30_35__1084->SetBinError(320,0.009377563);
   ThetaY_30_35__1084->SetBinError(321,0.007818246);
   ThetaY_30_35__1084->SetBinError(322,0.004081034);
   ThetaY_30_35__1084->SetBinError(323,0.0002392344);
   ThetaY_30_35__1084->SetEntries(87843);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1084->SetLineColor(ci);
   ThetaY_30_35__1084->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1084->SetMarkerColor(ci);
   ThetaY_30_35__1084->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1084->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1084->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1084->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1084->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1084->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1084->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1084->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1084->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1084->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1084->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1084->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1084->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1084->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1084->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1084->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1084->Draw("AEsame");
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
   
   Double_t _fx3362[16] = {
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
   Double_t _fy3362[16] = {
   0,
   0.5757576,
   0.8168139,
   0.610638,
   0.628532,
   0.9129696,
   1,
   0.8990769,
   0.4836843,
   0.03007281,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3362[16] = {
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
   Double_t _fely3362[16] = {
   0,
   0.2491606,
   0.1567017,
   0.1111203,
   0.104518,
   0.119955,
   0.1232554,
   0.1151988,
   0.08392497,
   0.01942569,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3362[16] = {
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
   Double_t _fehy3362[16] = {
   107.3127,
   0.3909811,
   0.1901387,
   0.1334697,
   0.1235496,
   0.1368728,
   0.1394884,
   0.131013,
   0.09993538,
   0.03967484,
   0.02884634,
   0.03178756,
   0.03794842,
   0.05459886,
   0.2004988,
   74.03396};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3362,_fy3362,_felx3362,_fehx3362,_fely3362,_fehy3362);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3362 = new TH1F("Graph_Graph3362","",100,-100,100);
   Graph_Graph3362->SetMinimum(0);
   Graph_Graph3362->SetMaximum(1.5);
   Graph_Graph3362->SetDirectory(0);
   Graph_Graph3362->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3362->SetLineColor(ci);
   Graph_Graph3362->GetXaxis()->SetRange(1,100);
   Graph_Graph3362->GetXaxis()->CenterTitle(true);
   Graph_Graph3362->GetXaxis()->SetLabelFont(42);
   Graph_Graph3362->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3362->GetXaxis()->SetTitleFont(42);
   Graph_Graph3362->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3362->GetYaxis()->CenterTitle(true);
   Graph_Graph3362->GetYaxis()->SetLabelFont(42);
   Graph_Graph3362->GetYaxis()->SetTitleFont(42);
   Graph_Graph3362->GetZaxis()->SetLabelFont(42);
   Graph_Graph3362->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3362->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3362);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.137105,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1085 = new TH2D("ThetaY_vs_Y_30_35__1085","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8027,3);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8053,1100);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8079,4187);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8105,6223);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8131,7255);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8157,8047);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8183,8360);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8209,8594);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8235,8642);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8261,8424);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8287,8085);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8313,7337);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8339,6146);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8365,4272);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8391,1164);
   ThetaY_vs_Y_30_35__1085->SetBinContent(8417,4);
   ThetaY_vs_Y_30_35__1085->SetEntries(87843);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1085->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1085->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1085->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1085->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1085->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1085->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1085->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1085->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1085->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1085->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1085->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1085->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1085->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1085->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1085->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1085->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
