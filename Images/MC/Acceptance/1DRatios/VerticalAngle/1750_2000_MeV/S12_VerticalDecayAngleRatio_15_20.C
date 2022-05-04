void S12_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.07262437,125,1.379863);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__1245 = new TH1D("S12_ThetaY_15_20__1245","",630,-1575,1575);
   S12_ThetaY_15_20__1245->SetBinContent(310,0.1166667);
   S12_ThetaY_15_20__1245->SetBinContent(311,0.5111111);
   S12_ThetaY_15_20__1245->SetBinContent(312,0.7888889);
   S12_ThetaY_15_20__1245->SetBinContent(313,1);
   S12_ThetaY_15_20__1245->SetBinContent(314,0.95);
   S12_ThetaY_15_20__1245->SetBinContent(315,0.8777778);
   S12_ThetaY_15_20__1245->SetBinContent(316,1.05);
   S12_ThetaY_15_20__1245->SetBinContent(317,0.9277778);
   S12_ThetaY_15_20__1245->SetBinContent(318,0.2555556);
   S12_ThetaY_15_20__1245->SetBinError(310,0.02545875);
   S12_ThetaY_15_20__1245->SetBinError(311,0.05328702);
   S12_ThetaY_15_20__1245->SetBinError(312,0.06620208);
   S12_ThetaY_15_20__1245->SetBinError(313,0.0745356);
   S12_ThetaY_15_20__1245->SetBinError(314,0.07264832);
   S12_ThetaY_15_20__1245->SetBinError(315,0.06983225);
   S12_ThetaY_15_20__1245->SetBinError(316,0.07637626);
   S12_ThetaY_15_20__1245->SetBinError(317,0.0717936);
   S12_ThetaY_15_20__1245->SetBinError(318,0.03767961);
   S12_ThetaY_15_20__1245->SetMinimum(0);
   S12_ThetaY_15_20__1245->SetMaximum(1.234614);
   S12_ThetaY_15_20__1245->SetEntries(1166);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1245->SetLineColor(ci);
   S12_ThetaY_15_20__1245->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1245->SetMarkerColor(ci);
   S12_ThetaY_15_20__1245->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__1245->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__1245->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1245->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1245->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1245->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__1245->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__1245->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1245->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1245->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1245->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1245->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1245->Draw("AE");
   
   TH1D *ThetaY_15_20__1246 = new TH1D("ThetaY_15_20__1246","",630,-1575,1575);
   ThetaY_15_20__1246->SetBinContent(309,0.0004351464);
   ThetaY_15_20__1246->SetBinContent(310,0.1647531);
   ThetaY_15_20__1246->SetBinContent(311,0.5997322);
   ThetaY_15_20__1246->SetBinContent(312,0.8465272);
   ThetaY_15_20__1246->SetBinContent(313,1);
   ThetaY_15_20__1246->SetBinContent(314,1.09436);
   ThetaY_15_20__1246->SetBinContent(315,1.114109);
   ThetaY_15_20__1246->SetBinContent(316,1.122377);
   ThetaY_15_20__1246->SetBinContent(317,1.074008);
   ThetaY_15_20__1246->SetBinContent(318,1.002577);
   ThetaY_15_20__1246->SetBinContent(319,0.8518159);
   ThetaY_15_20__1246->SetBinContent(320,0.6019079);
   ThetaY_15_20__1246->SetBinContent(321,0.1647866);
   ThetaY_15_20__1246->SetBinContent(322,0.0005020921);
   ThetaY_15_20__1246->SetBinError(309,0.0001206879);
   ThetaY_15_20__1246->SetBinError(310,0.00234835);
   ThetaY_15_20__1246->SetBinError(311,0.004480482);
   ThetaY_15_20__1246->SetBinError(312,0.005323123);
   ThetaY_15_20__1246->SetBinError(313,0.005785569);
   ThetaY_15_20__1246->SetBinError(314,0.006052379);
   ThetaY_15_20__1246->SetBinError(315,0.006106746);
   ThetaY_15_20__1246->SetBinError(316,0.006129363);
   ThetaY_15_20__1246->SetBinError(317,0.005995838);
   ThetaY_15_20__1246->SetBinError(318,0.00579302);
   ThetaY_15_20__1246->SetBinError(319,0.005339725);
   ThetaY_15_20__1246->SetBinError(320,0.004488602);
   ThetaY_15_20__1246->SetBinError(321,0.002348589);
   ThetaY_15_20__1246->SetBinError(322,0.0001296396);
   ThetaY_15_20__1246->SetEntries(287932);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1246->SetLineColor(ci);
   ThetaY_15_20__1246->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1246->SetMarkerColor(ci);
   ThetaY_15_20__1246->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1246->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1246->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1246->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1246->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1246->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1246->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1246->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1246->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1246->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1246->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1246->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1246->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1246->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1246->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1246->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1246->Draw("AEsame");
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
   
   Double_t _fx3416[14] = {
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
   Double_t _fy3416[14] = {
   0,
   0.7081302,
   0.8522322,
   0.931912,
   1,
   0.8680874,
   0.7878744,
   0.9355149,
   0.8638459,
   0.2548986,
   0,
   0,
   0,
   0};
   Double_t _felx3416[14] = {
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
   Double_t _fely3416[14] = {
   0,
   0.153599,
   0.08891461,
   0.07832965,
   0.07468912,
   0.06649159,
   0.06276108,
   0.06817883,
   0.066952,
   0.03747375,
   0,
   0,
   0,
   0};
   Double_t _fehx3416[14] = {
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
   Double_t _fehy3416[14] = {
   25.25024,
   0.1912115,
   0.09871856,
   0.08521076,
   0.08049006,
   0.07179279,
   0.06797342,
   0.07334054,
   0.07235591,
   0.04343541,
   0.0120076,
   0.01699333,
   0.06207914,
   21.6734};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3416,_fy3416,_felx3416,_fehx3416,_fely3416,_fehy3416);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3416 = new TH1F("Graph_Graph3416","",100,-100,100);
   Graph_Graph3416->SetMinimum(0);
   Graph_Graph3416->SetMaximum(1.5);
   Graph_Graph3416->SetDirectory(0);
   Graph_Graph3416->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3416->SetLineColor(ci);
   Graph_Graph3416->GetXaxis()->SetRange(1,100);
   Graph_Graph3416->GetXaxis()->CenterTitle(true);
   Graph_Graph3416->GetXaxis()->SetLabelFont(42);
   Graph_Graph3416->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3416->GetXaxis()->SetTitleFont(42);
   Graph_Graph3416->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3416->GetYaxis()->CenterTitle(true);
   Graph_Graph3416->GetYaxis()->SetLabelFont(42);
   Graph_Graph3416->GetYaxis()->SetTitleFont(42);
   Graph_Graph3416->GetZaxis()->SetLabelFont(42);
   Graph_Graph3416->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3416->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3416);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.234614,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1247 = new TH2D("ThetaY_vs_Y_15_20__1247","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8050,13);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8076,4922);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8102,17917);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8128,25290);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8154,29875);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8180,32694);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8206,33284);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8232,33531);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8258,32086);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8284,29952);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8310,25448);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8336,17982);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8362,4923);
   ThetaY_vs_Y_15_20__1247->SetBinContent(8388,15);
   ThetaY_vs_Y_15_20__1247->SetEntries(287932);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1247->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1247->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1247->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1247->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1247->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1247->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1247->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1247->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1247->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1247->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1247->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1247->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1247->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1247->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1247->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1247->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
