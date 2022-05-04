void S12_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07301181,125,1.387224);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__1236 = new TH1D("S12_ThetaY_0_5__1236","",630,-1575,1575);
   S12_ThetaY_0_5__1236->SetBinContent(311,0.1898305);
   S12_ThetaY_0_5__1236->SetBinContent(312,0.7016949);
   S12_ThetaY_0_5__1236->SetBinContent(313,1);
   S12_ThetaY_0_5__1236->SetBinContent(314,1.050847);
   S12_ThetaY_0_5__1236->SetBinContent(315,1.016949);
   S12_ThetaY_0_5__1236->SetBinContent(316,1.098305);
   S12_ThetaY_0_5__1236->SetBinContent(317,0.9864407);
   S12_ThetaY_0_5__1236->SetBinContent(318,0.840678);
   S12_ThetaY_0_5__1236->SetBinContent(319,0.4508475);
   S12_ThetaY_0_5__1236->SetBinContent(320,0.03389831);
   S12_ThetaY_0_5__1236->SetBinError(311,0.02536717);
   S12_ThetaY_0_5__1236->SetBinError(312,0.04877117);
   S12_ThetaY_0_5__1236->SetBinError(313,0.05822225);
   S12_ThetaY_0_5__1236->SetBinError(314,0.05968412);
   S12_ThetaY_0_5__1236->SetBinError(315,0.05871359);
   S12_ThetaY_0_5__1236->SetBinError(316,0.06101695);
   S12_ThetaY_0_5__1236->SetBinError(317,0.05782618);
   S12_ThetaY_0_5__1236->SetBinError(318,0.0533831);
   S12_ThetaY_0_5__1236->SetBinError(319,0.03909343);
   S12_ThetaY_0_5__1236->SetBinError(320,0.01071959);
   S12_ThetaY_0_5__1236->SetMinimum(0);
   S12_ThetaY_0_5__1236->SetMaximum(1.241201);
   S12_ThetaY_0_5__1236->SetEntries(2174);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1236->SetLineColor(ci);
   S12_ThetaY_0_5__1236->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1236->SetMarkerColor(ci);
   S12_ThetaY_0_5__1236->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__1236->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__1236->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1236->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1236->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1236->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__1236->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__1236->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1236->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1236->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1236->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1236->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1236->Draw("AE");
   
   TH1D *ThetaY_0_5__1237 = new TH1D("ThetaY_0_5__1237","",630,-1575,1575);
   ThetaY_0_5__1237->SetBinContent(309,0.0007204212);
   ThetaY_0_5__1237->SetBinContent(310,0.1650503);
   ThetaY_0_5__1237->SetBinContent(311,0.5985592);
   ThetaY_0_5__1237->SetBinContent(312,0.8504664);
   ThetaY_0_5__1237->SetBinContent(313,1);
   ThetaY_0_5__1237->SetBinContent(314,1.084733);
   ThetaY_0_5__1237->SetBinContent(315,1.113808);
   ThetaY_0_5__1237->SetBinContent(316,1.128364);
   ThetaY_0_5__1237->SetBinContent(317,1.089665);
   ThetaY_0_5__1237->SetBinContent(318,1.003898);
   ThetaY_0_5__1237->SetBinContent(319,0.8439272);
   ThetaY_0_5__1237->SetBinContent(320,0.5921308);
   ThetaY_0_5__1237->SetBinContent(321,0.165623);
   ThetaY_0_5__1237->SetBinContent(322,0.0006834765);
   ThetaY_0_5__1237->SetBinError(309,0.0001153597);
   ThetaY_0_5__1237->SetBinError(310,0.0017461);
   ThetaY_0_5__1237->SetBinError(311,0.003325175);
   ThetaY_0_5__1237->SetBinError(312,0.003963597);
   ThetaY_0_5__1237->SetBinError(313,0.004297946);
   ThetaY_0_5__1237->SetBinError(314,0.004476332);
   ThetaY_0_5__1237->SetBinError(315,0.004535928);
   ThetaY_0_5__1237->SetBinError(316,0.004565471);
   ThetaY_0_5__1237->SetBinError(317,0.004486497);
   ThetaY_0_5__1237->SetBinError(318,0.004306314);
   ThetaY_0_5__1237->SetBinError(319,0.00394833);
   ThetaY_0_5__1237->SetBinError(320,0.003307271);
   ThetaY_0_5__1237->SetBinError(321,0.001749127);
   ThetaY_0_5__1237->SetBinError(322,0.0001123628);
   ThetaY_0_5__1237->SetEntries(521733);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1237->SetLineColor(ci);
   ThetaY_0_5__1237->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1237->SetMarkerColor(ci);
   ThetaY_0_5__1237->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1237->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1237->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1237->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1237->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1237->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1237->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1237->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1237->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1237->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1237->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1237->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1237->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1237->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1237->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1237->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1237->Draw("AEsame");
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
   
   Double_t _fx3413[14] = {
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
   32.5};
   Double_t _fy3413[14] = {
   0,
   0,
   0.3171458,
   0.8250707,
   1,
   0.9687617,
   0.9130381,
   0.9733604,
   0.9052699,
   0.837414,
   0.5342255,
   0.057248,
   0,
   0};
   Double_t _felx3413[14] = {
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
   Double_t _fely3413[14] = {
   0,
   0,
   0.04228932,
   0.05742811,
   0.05834707,
   0.05513681,
   0.05281539,
   0.0541904,
   0.0531676,
   0.05326063,
   0.04633174,
   0.01779918,
   0,
   0};
   Double_t _fehx3413[14] = {
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
   Double_t _fehy3413[14] = {
   8.870362,
   0.0378151,
   0.04834416,
   0.06157287,
   0.06185613,
   0.0583689,
   0.05596354,
   0.05729569,
   0.05638677,
   0.05676184,
   0.05053649,
   0.02443287,
   0.03768434,
   9.361873};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3413,_fy3413,_felx3413,_fehx3413,_fely3413,_fehy3413);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3413 = new TH1F("Graph_Graph3413","",100,-100,100);
   Graph_Graph3413->SetMinimum(0);
   Graph_Graph3413->SetMaximum(1.5);
   Graph_Graph3413->SetDirectory(0);
   Graph_Graph3413->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3413->SetLineColor(ci);
   Graph_Graph3413->GetXaxis()->SetRange(1,100);
   Graph_Graph3413->GetXaxis()->CenterTitle(true);
   Graph_Graph3413->GetXaxis()->SetLabelFont(42);
   Graph_Graph3413->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3413->GetXaxis()->SetTitleFont(42);
   Graph_Graph3413->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3413->GetYaxis()->CenterTitle(true);
   Graph_Graph3413->GetYaxis()->SetLabelFont(42);
   Graph_Graph3413->GetYaxis()->SetTitleFont(42);
   Graph_Graph3413->GetZaxis()->SetLabelFont(42);
   Graph_Graph3413->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3413->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3413);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.241201,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1238 = new TH2D("ThetaY_vs_Y_0_5__1238","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8047,39);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8073,8935);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8099,32403);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8125,46040);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8151,54135);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8177,58722);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8203,60296);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8229,61084);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8255,58989);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8281,54346);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8307,45686);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8333,32055);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8359,8966);
   ThetaY_vs_Y_0_5__1238->SetBinContent(8385,37);
   ThetaY_vs_Y_0_5__1238->SetEntries(521733);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1238->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1238->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1238->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1238->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1238->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1238->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1238->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1238->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1238->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1238->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1238->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1238->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1238->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1238->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1238->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1238->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_0_5","Reco vertices","lpf");
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
