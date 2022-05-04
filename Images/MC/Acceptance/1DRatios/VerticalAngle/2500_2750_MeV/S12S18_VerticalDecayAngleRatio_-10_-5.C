void S12S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06528357,125,1.240388);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__1857 = new TH1D("S12S18_ThetaY_mI10_mI5__1857","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__1857->SetBinContent(313,0.02118644);
   S12S18_ThetaY_mI10_mI5__1857->SetBinContent(314,0.8305085);
   S12S18_ThetaY_mI10_mI5__1857->SetBinContent(315,0.9915254);
   S12S18_ThetaY_mI10_mI5__1857->SetBinContent(316,1);
   S12S18_ThetaY_mI10_mI5__1857->SetBinContent(317,0.8135593);
   S12S18_ThetaY_mI10_mI5__1857->SetBinContent(318,0.2627119);
   S12S18_ThetaY_mI10_mI5__1857->SetBinContent(319,0.004237288);
   S12S18_ThetaY_mI10_mI5__1857->SetBinError(313,0.009474864);
   S12S18_ThetaY_mI10_mI5__1857->SetBinError(314,0.05932203);
   S12S18_ThetaY_mI10_mI5__1857->SetBinError(315,0.06481804);
   S12S18_ThetaY_mI10_mI5__1857->SetBinError(316,0.06509446);
   S12S18_ThetaY_mI10_mI5__1857->SetBinError(317,0.05871359);
   S12S18_ThetaY_mI10_mI5__1857->SetBinError(318,0.03336444);
   S12S18_ThetaY_mI10_mI5__1857->SetBinError(319,0.004237288);
   S12S18_ThetaY_mI10_mI5__1857->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__1857->SetMaximum(1.109821);
   S12S18_ThetaY_mI10_mI5__1857->SetEntries(926);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1857->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__1857->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1857->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__1857->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__1857->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__1857->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1857->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1857->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1857->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__1857->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__1857->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1857->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1857->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1857->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1857->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1857->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1858 = new TH1D("ThetaY_mI10_mI5__1858","",630,-1575,1575);
   ThetaY_mI10_mI5__1858->SetBinContent(312,0.02054994);
   ThetaY_mI10_mI5__1858->SetBinContent(313,0.4185266);
   ThetaY_mI10_mI5__1858->SetBinContent(314,0.8396682);
   ThetaY_mI10_mI5__1858->SetBinContent(315,1.008928);
   ThetaY_mI10_mI5__1858->SetBinContent(316,1);
   ThetaY_mI10_mI5__1858->SetBinContent(317,0.8455585);
   ThetaY_mI10_mI5__1858->SetBinContent(318,0.4248659);
   ThetaY_mI10_mI5__1858->SetBinContent(319,0.02121028);
   ThetaY_mI10_mI5__1858->SetBinError(312,0.0007367509);
   ThetaY_mI10_mI5__1858->SetBinError(313,0.003324888);
   ThetaY_mI10_mI5__1858->SetBinError(314,0.00470944);
   ThetaY_mI10_mI5__1858->SetBinError(315,0.005162327);
   ThetaY_mI10_mI5__1858->SetBinError(316,0.005139436);
   ThetaY_mI10_mI5__1858->SetBinError(317,0.00472593);
   ThetaY_mI10_mI5__1858->SetBinError(318,0.003349974);
   ThetaY_mI10_mI5__1858->SetBinError(319,0.0007484945);
   ThetaY_mI10_mI5__1858->SetEntries(173368);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1858->SetLineColor(ci);
   ThetaY_mI10_mI5__1858->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1858->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1858->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1858->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1858->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1858->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1858->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1858->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1858->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1858->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1858->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1858->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1858->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1858->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1858->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1858->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1858->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1858->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1858->Draw("AEsame");
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
   
   Double_t _fx3620[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3620[8] = {
   0,
   0.05062149,
   0.9890912,
   0.9827516,
   1,
   0.9621561,
   0.6183406,
   0.1997752};
   Double_t _felx3620[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3620[8] = {
   0,
   0.02186822,
   0.07080529,
   0.0643941,
   0.06524993,
   0.06958384,
   0.07846541,
   0.1653025};
   Double_t _fehx3620[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3620[8] = {
   0.3800584,
   0.03425422,
   0.07606733,
   0.06876014,
   0.06965486,
   0.07481018,
   0.0891209,
   0.4603329};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3620,_fy3620,_felx3620,_fehx3620,_fely3620,_fehy3620);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3620 = new TH1F("Graph_Graph3620","",100,-100,100);
   Graph_Graph3620->SetMinimum(0);
   Graph_Graph3620->SetMaximum(1.5);
   Graph_Graph3620->SetDirectory(0);
   Graph_Graph3620->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3620->SetLineColor(ci);
   Graph_Graph3620->GetXaxis()->SetRange(1,100);
   Graph_Graph3620->GetXaxis()->CenterTitle(true);
   Graph_Graph3620->GetXaxis()->SetLabelFont(42);
   Graph_Graph3620->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3620->GetXaxis()->SetTitleFont(42);
   Graph_Graph3620->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3620->GetYaxis()->CenterTitle(true);
   Graph_Graph3620->GetYaxis()->SetLabelFont(42);
   Graph_Graph3620->GetYaxis()->SetTitleFont(42);
   Graph_Graph3620->GetZaxis()->SetLabelFont(42);
   Graph_Graph3620->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3620->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3620);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.109821,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1859 = new TH2D("ThetaY_vs_Y_mI10_mI5__1859","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8123,778);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8149,15845);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8175,31789);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8201,38197);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8227,37859);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8253,32012);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8279,16085);
   ThetaY_vs_Y_mI10_mI5__1859->SetBinContent(8305,803);
   ThetaY_vs_Y_mI10_mI5__1859->SetEntries(173368);
   ThetaY_vs_Y_mI10_mI5__1859->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(1,1909.85);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(2,3819.7);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(3,5729.55);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(4,7639.4);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(5,9549.25);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(6,11459.1);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(7,13368.95);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(8,15278.8);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(9,17188.65);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(10,19098.5);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(11,21008.35);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(12,22918.2);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(13,24828.05);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(14,26737.9);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(15,28647.75);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(16,30557.6);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(17,32467.45);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(18,34377.3);
   ThetaY_vs_Y_mI10_mI5__1859->SetContourLevel(19,36287.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1859->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1859->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1859->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1859->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1859->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1859->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1859->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1859->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1859->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1859->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1859->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1859->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1859->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1859->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1859->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1859->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-10_-5","Reco vertices","lpf");
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
