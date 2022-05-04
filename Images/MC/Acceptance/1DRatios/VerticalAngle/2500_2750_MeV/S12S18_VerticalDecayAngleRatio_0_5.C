void S12S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:12 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06477247,125,1.230677);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__1863 = new TH1D("S12S18_ThetaY_0_5__1863","",630,-1575,1575);
   S12S18_ThetaY_0_5__1863->SetBinContent(313,0.1696113);
   S12S18_ThetaY_0_5__1863->SetBinContent(314,0.6961131);
   S12S18_ThetaY_0_5__1863->SetBinContent(315,1);
   S12S18_ThetaY_0_5__1863->SetBinContent(316,0.8551237);
   S12S18_ThetaY_0_5__1863->SetBinContent(317,0.5830389);
   S12S18_ThetaY_0_5__1863->SetBinContent(318,0.07420495);
   S12S18_ThetaY_0_5__1863->SetBinError(313,0.02448128);
   S12S18_ThetaY_0_5__1863->SetBinError(314,0.049596);
   S12S18_ThetaY_0_5__1863->SetBinError(315,0.05944383);
   S12S18_ThetaY_0_5__1863->SetBinError(316,0.05496943);
   S12S18_ThetaY_0_5__1863->SetBinError(317,0.04538951);
   S12S18_ThetaY_0_5__1863->SetBinError(318,0.01619285);
   S12S18_ThetaY_0_5__1863->SetMinimum(0);
   S12S18_ThetaY_0_5__1863->SetMaximum(1.101132);
   S12S18_ThetaY_0_5__1863->SetEntries(956);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1863->SetLineColor(ci);
   S12S18_ThetaY_0_5__1863->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__1863->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__1863->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__1863->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__1863->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1863->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1863->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1863->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__1863->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__1863->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1863->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1863->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__1863->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__1863->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__1863->Draw("AE");
   
   TH1D *ThetaY_0_5__1864 = new TH1D("ThetaY_0_5__1864","",630,-1575,1575);
   ThetaY_0_5__1864->SetBinContent(312,0.02158618);
   ThetaY_0_5__1864->SetBinContent(313,0.4266261);
   ThetaY_0_5__1864->SetBinContent(314,0.8456181);
   ThetaY_0_5__1864->SetBinContent(315,1);
   ThetaY_0_5__1864->SetBinContent(316,1.001029);
   ThetaY_0_5__1864->SetBinContent(317,0.847054);
   ThetaY_0_5__1864->SetBinContent(318,0.4222945);
   ThetaY_0_5__1864->SetBinContent(319,0.02041354);
   ThetaY_0_5__1864->SetBinError(312,0.0007187411);
   ThetaY_0_5__1864->SetBinError(313,0.003195276);
   ThetaY_0_5__1864->SetBinError(314,0.004498542);
   ThetaY_0_5__1864->SetBinError(315,0.004891979);
   ThetaY_0_5__1864->SetBinError(316,0.004894496);
   ThetaY_0_5__1864->SetBinError(317,0.004502359);
   ThetaY_0_5__1864->SetBinError(318,0.003179013);
   ThetaY_0_5__1864->SetBinError(319,0.0006989461);
   ThetaY_0_5__1864->SetEntries(191573);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1864->SetLineColor(ci);
   ThetaY_0_5__1864->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1864->SetMarkerColor(ci);
   ThetaY_0_5__1864->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1864->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1864->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1864->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1864->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1864->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1864->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1864->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1864->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1864->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1864->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1864->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1864->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1864->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1864->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1864->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1864->Draw("AEsame");
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
   
   Double_t _fx3622[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3622[8] = {
   0,
   0.3975643,
   0.8232003,
   1,
   0.8542446,
   0.6883137,
   0.1757185,
   0};
   Double_t _felx3622[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3622[8] = {
   0,
   0.05725822,
   0.05876312,
   0.05960886,
   0.05503286,
   0.05365471,
   0.03805888,
   0};
   Double_t _fehx3622[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3622[8] = {
   0.3016755,
   0.06616833,
   0.0631172,
   0.06327409,
   0.05869921,
   0.05801116,
   0.04735573,
   0.3190237};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3622,_fy3622,_felx3622,_fehx3622,_fely3622,_fehy3622);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3622 = new TH1F("Graph_Graph3622","",100,-100,100);
   Graph_Graph3622->SetMinimum(0);
   Graph_Graph3622->SetMaximum(1.5);
   Graph_Graph3622->SetDirectory(0);
   Graph_Graph3622->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3622->SetLineColor(ci);
   Graph_Graph3622->GetXaxis()->SetRange(1,100);
   Graph_Graph3622->GetXaxis()->CenterTitle(true);
   Graph_Graph3622->GetXaxis()->SetLabelFont(42);
   Graph_Graph3622->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3622->GetXaxis()->SetTitleFont(42);
   Graph_Graph3622->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3622->GetYaxis()->CenterTitle(true);
   Graph_Graph3622->GetYaxis()->SetLabelFont(42);
   Graph_Graph3622->GetYaxis()->SetTitleFont(42);
   Graph_Graph3622->GetZaxis()->SetLabelFont(42);
   Graph_Graph3622->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3622->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3622);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.101132,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1865 = new TH2D("ThetaY_vs_Y_0_5__1865","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8125,902);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8151,17827);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8177,35335);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8203,41786);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8229,41829);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8255,35395);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8281,17646);
   ThetaY_vs_Y_0_5__1865->SetBinContent(8307,853);
   ThetaY_vs_Y_0_5__1865->SetEntries(191573);
   ThetaY_vs_Y_0_5__1865->SetContour(20);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(1,2091.45);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(2,4182.9);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(3,6274.35);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(4,8365.8);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(5,10457.25);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(6,12548.7);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(7,14640.15);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(8,16731.6);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(9,18823.05);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(10,20914.5);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(11,23005.95);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(12,25097.4);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(13,27188.85);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(14,29280.3);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(15,31371.75);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(16,33463.2);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(17,35554.65);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(18,37646.1);
   ThetaY_vs_Y_0_5__1865->SetContourLevel(19,39737.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1865->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1865->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1865->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1865->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1865->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1865->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1865->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1865->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1865->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1865->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1865->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1865->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1865->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1865->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1865->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1865->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_0_5","Reco vertices","lpf");
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
