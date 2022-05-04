void S12_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.078549,125,1.492431);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__1413 = new TH1D("S12_ThetaY_10_15__1413","",630,-1575,1575);
   S12_ThetaY_10_15__1413->SetBinContent(311,0.1075949);
   S12_ThetaY_10_15__1413->SetBinContent(312,0.7278481);
   S12_ThetaY_10_15__1413->SetBinContent(313,1);
   S12_ThetaY_10_15__1413->SetBinContent(314,1.094937);
   S12_ThetaY_10_15__1413->SetBinContent(315,1.031646);
   S12_ThetaY_10_15__1413->SetBinContent(316,0.9177215);
   S12_ThetaY_10_15__1413->SetBinContent(317,1.082278);
   S12_ThetaY_10_15__1413->SetBinContent(318,0.3101266);
   S12_ThetaY_10_15__1413->SetBinContent(319,0.006329114);
   S12_ThetaY_10_15__1413->SetBinError(311,0.02609561);
   S12_ThetaY_10_15__1413->SetBinError(312,0.06787219);
   S12_ThetaY_10_15__1413->SetBinError(313,0.07955573);
   S12_ThetaY_10_15__1413->SetBinError(314,0.0832465);
   S12_ThetaY_10_15__1413->SetBinError(315,0.08080472);
   S12_ThetaY_10_15__1413->SetBinError(316,0.07621262);
   S12_ThetaY_10_15__1413->SetBinError(317,0.0827639);
   S12_ThetaY_10_15__1413->SetBinError(318,0.0443038);
   S12_ThetaY_10_15__1413->SetBinError(319,0.006329114);
   S12_ThetaY_10_15__1413->SetMinimum(0);
   S12_ThetaY_10_15__1413->SetMaximum(1.335333);
   S12_ThetaY_10_15__1413->SetEntries(992);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1413->SetLineColor(ci);
   S12_ThetaY_10_15__1413->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1413->SetMarkerColor(ci);
   S12_ThetaY_10_15__1413->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__1413->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__1413->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1413->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1413->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1413->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__1413->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__1413->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1413->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1413->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1413->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1413->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1413->Draw("AE");
   
   TH1D *ThetaY_10_15__1414 = new TH1D("ThetaY_10_15__1414","",630,-1575,1575);
   ThetaY_10_15__1414->SetBinContent(310,0.001862302);
   ThetaY_10_15__1414->SetBinContent(311,0.241281);
   ThetaY_10_15__1414->SetBinContent(312,0.738149);
   ThetaY_10_15__1414->SetBinContent(313,1);
   ThetaY_10_15__1414->SetBinContent(314,1.133606);
   ThetaY_10_15__1414->SetBinContent(315,1.203358);
   ThetaY_10_15__1414->SetBinContent(316,1.213939);
   ThetaY_10_15__1414->SetBinContent(317,1.150649);
   ThetaY_10_15__1414->SetBinContent(318,0.9957957);
   ThetaY_10_15__1414->SetBinContent(319,0.7358352);
   ThetaY_10_15__1414->SetBinContent(320,0.2431433);
   ThetaY_10_15__1414->SetBinContent(321,0.001918736);
   ThetaY_10_15__1414->SetBinError(310,0.0002292336);
   ThetaY_10_15__1414->SetBinError(311,0.002609244);
   ThetaY_10_15__1414->SetBinError(312,0.004563785);
   ThetaY_10_15__1414->SetBinError(313,0.00531194);
   ThetaY_10_15__1414->SetBinError(314,0.005655672);
   ThetaY_10_15__1414->SetBinError(315,0.005827074);
   ThetaY_10_15__1414->SetBinError(316,0.005852637);
   ThetaY_10_15__1414->SetBinError(317,0.005698028);
   ThetaY_10_15__1414->SetBinError(318,0.005300762);
   ThetaY_10_15__1414->SetBinError(319,0.004556626);
   ThetaY_10_15__1414->SetBinError(320,0.002619295);
   ThetaY_10_15__1414->SetBinError(321,0.0002326809);
   ThetaY_10_15__1414->SetEntries(306894);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1414->SetLineColor(ci);
   ThetaY_10_15__1414->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1414->SetMarkerColor(ci);
   ThetaY_10_15__1414->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1414->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1414->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1414->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1414->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1414->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1414->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1414->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1414->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1414->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1414->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1414->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1414->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1414->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1414->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1414->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1414->Draw("AEsame");
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
   
   Double_t _fx3472[12] = {
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
   Double_t _fy3472[12] = {
   0,
   0.445932,
   0.986045,
   1,
   0.9658882,
   0.8573058,
   0.7559865,
   0.9405809,
   0.3114359,
   0.008601265,
   0,
   0};
   Double_t _felx3472[12] = {
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
   Double_t _fely3472[12] = {
   0,
   0.1071816,
   0.09201521,
   0.07964736,
   0.07352102,
   0.06720776,
   0.0628137,
   0.07200731,
   0.04436865,
   0.007115416,
   0,
   0};
   Double_t _fehx3472[12] = {
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
   Double_t _fehy3472[12] = {
   6.344871,
   0.1366775,
   0.1010342,
   0.08626097,
   0.07934414,
   0.07269661,
   0.0682645,
   0.07774472,
   0.05119077,
   0.01978009,
   0.04792762,
   6.15572};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3472,_fy3472,_felx3472,_fehx3472,_fely3472,_fehy3472);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3472 = new TH1F("Graph_Graph3472","",100,-100,100);
   Graph_Graph3472->SetMinimum(0);
   Graph_Graph3472->SetMaximum(1.5);
   Graph_Graph3472->SetDirectory(0);
   Graph_Graph3472->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3472->SetLineColor(ci);
   Graph_Graph3472->GetXaxis()->SetRange(1,100);
   Graph_Graph3472->GetXaxis()->CenterTitle(true);
   Graph_Graph3472->GetXaxis()->SetLabelFont(42);
   Graph_Graph3472->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3472->GetXaxis()->SetTitleFont(42);
   Graph_Graph3472->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3472->GetYaxis()->CenterTitle(true);
   Graph_Graph3472->GetYaxis()->SetLabelFont(42);
   Graph_Graph3472->GetYaxis()->SetTitleFont(42);
   Graph_Graph3472->GetZaxis()->SetLabelFont(42);
   Graph_Graph3472->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3472->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3472);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.335333,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1415 = new TH2D("ThetaY_vs_Y_10_15__1415","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8075,66);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8101,8551);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8127,26160);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8153,35440);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8179,40175);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8205,42647);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8231,43022);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8257,40779);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8283,35291);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8309,26078);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8335,8617);
   ThetaY_vs_Y_10_15__1415->SetBinContent(8361,68);
   ThetaY_vs_Y_10_15__1415->SetEntries(306894);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1415->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1415->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1415->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1415->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1415->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1415->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1415->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1415->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1415->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1415->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1415->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1415->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1415->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1415->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1415->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1415->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_10_15","Reco vertices","lpf");
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
