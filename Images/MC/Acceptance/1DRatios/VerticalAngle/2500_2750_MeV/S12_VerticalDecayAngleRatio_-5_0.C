void S12_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:10 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07638234,125,1.451264);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__1746 = new TH1D("S12_ThetaY_mI5_0__1746","",630,-1575,1575);
   S12_ThetaY_mI5_0__1746->SetBinContent(313,0.1478261);
   S12_ThetaY_mI5_0__1746->SetBinContent(314,0.8869565);
   S12_ThetaY_mI5_0__1746->SetBinContent(315,1.13913);
   S12_ThetaY_mI5_0__1746->SetBinContent(316,1.008696);
   S12_ThetaY_mI5_0__1746->SetBinContent(317,1);
   S12_ThetaY_mI5_0__1746->SetBinContent(318,0.2434783);
   S12_ThetaY_mI5_0__1746->SetBinError(313,0.03585309);
   S12_ThetaY_mI5_0__1746->SetBinError(314,0.08782178);
   S12_ThetaY_mI5_0__1746->SetBinError(315,0.09952629);
   S12_ThetaY_mI5_0__1746->SetBinError(316,0.09365504);
   S12_ThetaY_mI5_0__1746->SetBinError(317,0.09325048);
   S12_ThetaY_mI5_0__1746->SetBinError(318,0.04601307);
   S12_ThetaY_mI5_0__1746->SetMinimum(0);
   S12_ThetaY_mI5_0__1746->SetMaximum(1.2985);
   S12_ThetaY_mI5_0__1746->SetEntries(509);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1746->SetLineColor(ci);
   S12_ThetaY_mI5_0__1746->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1746->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__1746->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__1746->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__1746->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1746->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1746->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1746->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__1746->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__1746->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1746->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1746->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1746->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1746->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1746->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1747 = new TH1D("ThetaY_mI5_0__1747","",630,-1575,1575);
   ThetaY_mI5_0__1747->SetBinContent(312,0.02316777);
   ThetaY_mI5_0__1747->SetBinContent(313,0.4985591);
   ThetaY_mI5_0__1747->SetBinContent(314,1.001271);
   ThetaY_mI5_0__1747->SetBinContent(315,1.179268);
   ThetaY_mI5_0__1747->SetBinContent(316,1.180454);
   ThetaY_mI5_0__1747->SetBinContent(317,1);
   ThetaY_mI5_0__1747->SetBinContent(318,0.5017235);
   ThetaY_mI5_0__1747->SetBinContent(319,0.02333729);
   ThetaY_mI5_0__1747->SetBinError(312,0.0008090536);
   ThetaY_mI5_0__1747->SetBinError(313,0.003753129);
   ThetaY_mI5_0__1747->SetBinError(314,0.005318768);
   ThetaY_mI5_0__1747->SetBinError(315,0.0057722);
   ThetaY_mI5_0__1747->SetBinError(316,0.005775103);
   ThetaY_mI5_0__1747->SetBinError(317,0.005315391);
   ThetaY_mI5_0__1747->SetBinError(318,0.003765021);
   ThetaY_mI5_0__1747->SetBinError(319,0.0008120081);
   ThetaY_mI5_0__1747->SetEntries(191403);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1747->SetLineColor(ci);
   ThetaY_mI5_0__1747->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1747->SetMarkerColor(ci);
   ThetaY_mI5_0__1747->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1747->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1747->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1747->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1747->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1747->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1747->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1747->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1747->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1747->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1747->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1747->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1747->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1747->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1747->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1747->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1747->Draw("AEsame");
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
   
   Double_t _fx3583[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3583[8] = {
   0,
   0.2965067,
   0.8858303,
   0.9659643,
   0.8544978,
   1,
   0.4852838,
   0};
   Double_t _felx3583[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3583[8] = {
   0,
   0.07123212,
   0.08769101,
   0.08442006,
   0.07933262,
   0.09326461,
   0.09122845,
   0};
   Double_t _fehx3583[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3583[8] = {
   0.6917744,
   0.09081812,
   0.09683598,
   0.0921434,
   0.08706555,
   0.1023996,
   0.110239,
   0.6867438};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3583,_fy3583,_felx3583,_fehx3583,_fely3583,_fehy3583);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3583 = new TH1F("Graph_Graph3583","",100,-100,100);
   Graph_Graph3583->SetMinimum(0);
   Graph_Graph3583->SetMaximum(1.5);
   Graph_Graph3583->SetDirectory(0);
   Graph_Graph3583->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3583->SetLineColor(ci);
   Graph_Graph3583->GetXaxis()->SetRange(1,100);
   Graph_Graph3583->GetXaxis()->CenterTitle(true);
   Graph_Graph3583->GetXaxis()->SetLabelFont(42);
   Graph_Graph3583->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3583->GetXaxis()->SetTitleFont(42);
   Graph_Graph3583->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3583->GetYaxis()->CenterTitle(true);
   Graph_Graph3583->GetYaxis()->SetLabelFont(42);
   Graph_Graph3583->GetYaxis()->SetTitleFont(42);
   Graph_Graph3583->GetZaxis()->SetLabelFont(42);
   Graph_Graph3583->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3583->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3583);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.2985,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1748 = new TH2D("ThetaY_vs_Y_mI5_0__1748","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8124,820);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8150,17646);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8176,35439);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8202,41739);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8228,41781);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8254,35394);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8280,17758);
   ThetaY_vs_Y_mI5_0__1748->SetBinContent(8306,826);
   ThetaY_vs_Y_mI5_0__1748->SetEntries(191403);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1748->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1748->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1748->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1748->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1748->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1748->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1748->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1748->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1748->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1748->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1748->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1748->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1748->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1748->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1748->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1748->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
