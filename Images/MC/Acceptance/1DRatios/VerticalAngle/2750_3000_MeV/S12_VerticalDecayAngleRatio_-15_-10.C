void S12_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:16:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1202947,125,2.285599);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI15_mI10__21 = new TH1D("S12_ThetaY_mI15_mI10__21","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__21->SetBinContent(314,0.1428571);
   S12_ThetaY_mI15_mI10__21->SetBinContent(315,1.071429);
   S12_ThetaY_mI15_mI10__21->SetBinContent(316,1.071429);
   S12_ThetaY_mI15_mI10__21->SetBinContent(317,1);
   S12_ThetaY_mI15_mI10__21->SetBinError(314,0.1010153);
   S12_ThetaY_mI15_mI10__21->SetBinError(315,0.2766417);
   S12_ThetaY_mI15_mI10__21->SetBinError(316,0.2766417);
   S12_ThetaY_mI15_mI10__21->SetBinError(317,0.2672612);
   S12_ThetaY_mI15_mI10__21->SetMinimum(0);
   S12_ThetaY_mI15_mI10__21->SetMaximum(2.04501);
   S12_ThetaY_mI15_mI10__21->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__21->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__21->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__21->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__21->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__21->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__21->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__21->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__21->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__21->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__21->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__21->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__21->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__21->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__21->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__21->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__21->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__22 = new TH1D("ThetaY_mI15_mI10__22","",630,-1575,1575);
   ThetaY_mI15_mI10__22->SetBinContent(313,0.07697927);
   ThetaY_mI15_mI10__22->SetBinContent(314,1.041914);
   ThetaY_mI15_mI10__22->SetBinContent(315,1.842389);
   ThetaY_mI15_mI10__22->SetBinContent(316,1.8591);
   ThetaY_mI15_mI10__22->SetBinContent(317,1);
   ThetaY_mI15_mI10__22->SetBinContent(318,0.07460506);
   ThetaY_mI15_mI10__22->SetBinError(313,0.002651307);
   ThetaY_mI15_mI10__22->SetBinError(314,0.009754141);
   ThetaY_mI15_mI10__22->SetBinError(315,0.01297071);
   ThetaY_mI15_mI10__22->SetBinError(316,0.0130294);
   ThetaY_mI15_mI10__22->SetBinError(317,0.009555933);
   ThetaY_mI15_mI10__22->SetBinError(318,0.002610101);
   ThetaY_mI15_mI10__22->SetEntries(64556);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__22->SetLineColor(ci);
   ThetaY_mI15_mI10__22->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__22->SetMarkerColor(ci);
   ThetaY_mI15_mI10__22->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__22->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__22->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__22->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__22->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__22->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__22->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__22->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__22->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__22->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__22->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__22->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__22->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__22->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__22->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__22->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__22->Draw("AEsame");
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
   
   Double_t _fx3008[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3008[6] = {
   0,
   0.1371103,
   0.5815431,
   0.5763158,
   1,
   0};
   Double_t _felx3008[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3008[6] = {
   0,
   0.08856542,
   0.1485151,
   0.1471797,
   0.2641935,
   0};
   Double_t _fehx3008[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3008[6] = {
   1.710139,
   0.1808756,
   0.1923431,
   0.1906133,
   0.3453238,
   1.764623};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-100,100);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.5);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3008->SetLineColor(ci);
   Graph_Graph3008->GetXaxis()->SetRange(1,100);
   Graph_Graph3008->GetXaxis()->CenterTitle(true);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3008->GetYaxis()->CenterTitle(true);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.04501,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__23 = new TH2D("ThetaY_vs_Y_mI15_mI10__23","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__23->SetBinContent(8148,843);
   ThetaY_vs_Y_mI15_mI10__23->SetBinContent(8174,11410);
   ThetaY_vs_Y_mI15_mI10__23->SetBinContent(8200,20176);
   ThetaY_vs_Y_mI15_mI10__23->SetBinContent(8226,20359);
   ThetaY_vs_Y_mI15_mI10__23->SetBinContent(8252,10951);
   ThetaY_vs_Y_mI15_mI10__23->SetBinContent(8278,817);
   ThetaY_vs_Y_mI15_mI10__23->SetEntries(64556);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__23->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__23->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__23->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__23->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__23->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__23->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__23->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__23->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__23->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__23->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__23->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__23->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__23->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__23->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__23->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__23->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
