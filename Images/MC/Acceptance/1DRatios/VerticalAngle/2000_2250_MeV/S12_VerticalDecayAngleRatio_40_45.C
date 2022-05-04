void S12_VerticalDecayAngleRatio_40_45()
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
   upper_pad->Range(-125,-0.115911,125,2.202308);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__1431 = new TH1D("S12_ThetaY_40_45__1431","",630,-1575,1575);
   S12_ThetaY_40_45__1431->SetBinContent(312,1);
   S12_ThetaY_40_45__1431->SetBinContent(313,0.375);
   S12_ThetaY_40_45__1431->SetBinContent(314,0.375);
   S12_ThetaY_40_45__1431->SetBinContent(315,0.75);
   S12_ThetaY_40_45__1431->SetBinContent(316,0.125);
   S12_ThetaY_40_45__1431->SetBinError(312,0.3535534);
   S12_ThetaY_40_45__1431->SetBinError(313,0.2165064);
   S12_ThetaY_40_45__1431->SetBinError(314,0.2165064);
   S12_ThetaY_40_45__1431->SetBinError(315,0.3061862);
   S12_ThetaY_40_45__1431->SetBinError(316,0.125);
   S12_ThetaY_40_45__1431->SetMinimum(0);
   S12_ThetaY_40_45__1431->SetMaximum(1.970486);
   S12_ThetaY_40_45__1431->SetEntries(21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1431->SetLineColor(ci);
   S12_ThetaY_40_45__1431->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1431->SetMarkerColor(ci);
   S12_ThetaY_40_45__1431->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__1431->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__1431->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1431->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1431->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1431->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__1431->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__1431->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1431->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1431->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1431->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1431->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1431->Draw("AE");
   
   TH1D *ThetaY_40_45__1432 = new TH1D("ThetaY_40_45__1432","",630,-1575,1575);
   ThetaY_40_45__1432->SetBinContent(310,0.001081081);
   ThetaY_40_45__1432->SetBinContent(311,0.3189189);
   ThetaY_40_45__1432->SetBinContent(312,1);
   ThetaY_40_45__1432->SetBinContent(313,1.462703);
   ThetaY_40_45__1432->SetBinContent(314,1.606486);
   ThetaY_40_45__1432->SetBinContent(315,1.716757);
   ThetaY_40_45__1432->SetBinContent(316,1.791351);
   ThetaY_40_45__1432->SetBinContent(317,1.637838);
   ThetaY_40_45__1432->SetBinContent(318,1.496216);
   ThetaY_40_45__1432->SetBinContent(319,1.064865);
   ThetaY_40_45__1432->SetBinContent(320,0.3383784);
   ThetaY_40_45__1432->SetBinContent(321,0.002162162);
   ThetaY_40_45__1432->SetBinError(310,0.001081081);
   ThetaY_40_45__1432->SetBinError(311,0.01856818);
   ThetaY_40_45__1432->SetBinError(312,0.0328798);
   ThetaY_40_45__1432->SetBinError(313,0.03976557);
   ThetaY_40_45__1432->SetBinError(314,0.04167424);
   ThetaY_40_45__1432->SetBinError(315,0.04308078);
   ThetaY_40_45__1432->SetBinError(316,0.04400677);
   ThetaY_40_45__1432->SetBinError(317,0.04207892);
   ThetaY_40_45__1432->SetBinError(318,0.04021854);
   ThetaY_40_45__1432->SetBinError(319,0.03392942);
   ThetaY_40_45__1432->SetBinError(320,0.01912628);
   ThetaY_40_45__1432->SetBinError(321,0.00152888);
   ThetaY_40_45__1432->SetEntries(11504);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1432->SetLineColor(ci);
   ThetaY_40_45__1432->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1432->SetMarkerColor(ci);
   ThetaY_40_45__1432->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1432->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1432->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1432->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1432->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1432->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1432->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1432->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1432->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1432->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1432->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1432->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1432->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1432->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1432->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1432->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1432->Draw("AEsame");
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
   
   Double_t _fx3478[12] = {
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
   Double_t _fy3478[12] = {
   0,
   0,
   1,
   0.2563747,
   0.2334287,
   0.4368703,
   0.06977972,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3478[12] = {
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
   Double_t _fely3478[12] = {
   0,
   0,
   0.3473762,
   0.1396416,
   0.1271342,
   0.173567,
   0.05773165,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3478[12] = {
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
   Double_t _fehy3478[12] = {
   613.1564,
   0.7238432,
   0.4963257,
   0.2499286,
   0.227515,
   0.2617184,
   0.1606201,
   0.1405924,
   0.1539088,
   0.2163119,
   0.6820939,
   174.6599};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3478,_fy3478,_felx3478,_fehx3478,_fely3478,_fehy3478);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3478 = new TH1F("Graph_Graph3478","",100,-100,100);
   Graph_Graph3478->SetMinimum(0);
   Graph_Graph3478->SetMaximum(1.5);
   Graph_Graph3478->SetDirectory(0);
   Graph_Graph3478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3478->SetLineColor(ci);
   Graph_Graph3478->GetXaxis()->SetRange(1,100);
   Graph_Graph3478->GetXaxis()->CenterTitle(true);
   Graph_Graph3478->GetXaxis()->SetLabelFont(42);
   Graph_Graph3478->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3478->GetXaxis()->SetTitleFont(42);
   Graph_Graph3478->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3478->GetYaxis()->CenterTitle(true);
   Graph_Graph3478->GetYaxis()->SetLabelFont(42);
   Graph_Graph3478->GetYaxis()->SetTitleFont(42);
   Graph_Graph3478->GetZaxis()->SetLabelFont(42);
   Graph_Graph3478->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3478->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3478);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.970486,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1433 = new TH2D("ThetaY_vs_Y_40_45__1433","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8081,1);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8107,295);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8133,925);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8159,1353);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8185,1486);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8211,1588);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8237,1657);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8263,1515);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8289,1384);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8315,985);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8341,313);
   ThetaY_vs_Y_40_45__1433->SetBinContent(8367,2);
   ThetaY_vs_Y_40_45__1433->SetEntries(11504);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1433->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1433->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1433->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1433->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1433->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1433->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1433->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1433->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1433->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1433->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1433->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1433->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1433->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1433->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1433->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1433->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
