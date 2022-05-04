void S12_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.06728463,125,1.278408);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI35_mI30__1215 = new TH1D("S12_ThetaY_mI35_mI30__1215","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(314,0.08928571);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(315,0.75);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(316,0.6785714);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(317,1);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(318,0.5892857);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(319,0.4285714);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(320,0.5178571);
   S12_ThetaY_mI35_mI30__1215->SetBinContent(321,0.05357143);
   S12_ThetaY_mI35_mI30__1215->SetBinError(314,0.03992979);
   S12_ThetaY_mI35_mI30__1215->SetBinError(315,0.1157275);
   S12_ThetaY_mI35_mI30__1215->SetBinError(316,0.1100788);
   S12_ThetaY_mI35_mI30__1215->SetBinError(317,0.1336306);
   S12_ThetaY_mI35_mI30__1215->SetBinError(318,0.1025815);
   S12_ThetaY_mI35_mI30__1215->SetBinError(319,0.08748178);
   S12_ThetaY_mI35_mI30__1215->SetBinError(320,0.09616366);
   S12_ThetaY_mI35_mI30__1215->SetBinError(321,0.03092948);
   S12_ThetaY_mI35_mI30__1215->SetMinimum(0);
   S12_ThetaY_mI35_mI30__1215->SetMaximum(1.143839);
   S12_ThetaY_mI35_mI30__1215->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1215->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__1215->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1215->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__1215->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__1215->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__1215->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1215->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1215->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1215->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__1215->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__1215->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1215->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1215->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1215->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1215->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1215->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1216 = new TH1D("ThetaY_mI35_mI30__1216","",630,-1575,1575);
   ThetaY_mI35_mI30__1216->SetBinContent(309,0.0004889976);
   ThetaY_mI35_mI30__1216->SetBinContent(310,0.1513447);
   ThetaY_mI35_mI30__1216->SetBinContent(311,0.5639364);
   ThetaY_mI35_mI30__1216->SetBinContent(312,0.7801956);
   ThetaY_mI35_mI30__1216->SetBinContent(313,0.9295844);
   ThetaY_mI35_mI30__1216->SetBinContent(314,1.014914);
   ThetaY_mI35_mI30__1216->SetBinContent(315,1.011491);
   ThetaY_mI35_mI30__1216->SetBinContent(316,1.039853);
   ThetaY_mI35_mI30__1216->SetBinContent(317,1);
   ThetaY_mI35_mI30__1216->SetBinContent(318,0.9228606);
   ThetaY_mI35_mI30__1216->SetBinContent(319,0.7932763);
   ThetaY_mI35_mI30__1216->SetBinContent(320,0.5545232);
   ThetaY_mI35_mI30__1216->SetBinContent(321,0.1602689);
   ThetaY_mI35_mI30__1216->SetBinContent(322,0.0004889976);
   ThetaY_mI35_mI30__1216->SetBinError(309,0.0002444988);
   ThetaY_mI35_mI30__1216->SetBinError(310,0.004301372);
   ThetaY_mI35_mI30__1216->SetBinError(311,0.008303065);
   ThetaY_mI35_mI30__1216->SetBinError(312,0.009766188);
   ThetaY_mI35_mI30__1216->SetBinError(313,0.01066026);
   ThetaY_mI35_mI30__1216->SetBinError(314,0.01113879);
   ThetaY_mI35_mI30__1216->SetBinError(315,0.01111999);
   ThetaY_mI35_mI30__1216->SetBinError(316,0.01127481);
   ThetaY_mI35_mI30__1216->SetBinError(317,0.01105664);
   ThetaY_mI35_mI30__1216->SetBinError(318,0.01062164);
   ThetaY_mI35_mI30__1216->SetBinError(319,0.009847718);
   ThetaY_mI35_mI30__1216->SetBinError(320,0.008233476);
   ThetaY_mI35_mI30__1216->SetBinError(321,0.004426373);
   ThetaY_mI35_mI30__1216->SetBinError(322,0.0002444988);
   ThetaY_mI35_mI30__1216->SetEntries(72992);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1216->SetLineColor(ci);
   ThetaY_mI35_mI30__1216->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1216->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1216->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1216->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1216->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1216->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1216->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1216->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1216->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1216->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1216->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1216->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1216->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1216->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1216->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1216->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1216->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1216->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1216->Draw("AEsame");
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
   
   Double_t _fx3406[14] = {
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
   Double_t _fy3406[14] = {
   0,
   0,
   0,
   0,
   0,
   0.08797364,
   0.7414793,
   0.6525646,
   1,
   0.6385425,
   0.5402549,
   0.9338782,
   0.3342596,
   0};
   Double_t _felx3406[14] = {
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
   Double_t _fely3406[14] = {
   0,
   0,
   0,
   0,
   0,
   0.03800868,
   0.1142376,
   0.1056213,
   0.1336778,
   0.1108243,
   0.1096999,
   0.1729434,
   0.1820685,
   0};
   Double_t _fehx3406[14] = {
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
   Double_t _fehy3406[14] = {
   85.37563,
   0.2173835,
   0.0583079,
   0.04214344,
   0.03536997,
   0.05954373,
   0.1333728,
   0.1242905,
   0.1528835,
   0.1319749,
   0.1346293,
   0.2084218,
   0.325878,
   85.37563};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3406,_fy3406,_felx3406,_fehx3406,_fely3406,_fehy3406);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3406 = new TH1F("Graph_Graph3406","",100,-100,100);
   Graph_Graph3406->SetMinimum(0);
   Graph_Graph3406->SetMaximum(1.5);
   Graph_Graph3406->SetDirectory(0);
   Graph_Graph3406->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3406->SetLineColor(ci);
   Graph_Graph3406->GetXaxis()->SetRange(1,100);
   Graph_Graph3406->GetXaxis()->CenterTitle(true);
   Graph_Graph3406->GetXaxis()->SetLabelFont(42);
   Graph_Graph3406->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3406->GetXaxis()->SetTitleFont(42);
   Graph_Graph3406->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3406->GetYaxis()->CenterTitle(true);
   Graph_Graph3406->GetYaxis()->SetLabelFont(42);
   Graph_Graph3406->GetYaxis()->SetTitleFont(42);
   Graph_Graph3406->GetZaxis()->SetLabelFont(42);
   Graph_Graph3406->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3406->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3406);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.143839,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1217 = new TH2D("ThetaY_vs_Y_mI35_mI30__1217","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8040,4);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8066,1238);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8092,4613);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8118,6382);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8144,7604);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8170,8302);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8196,8274);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8222,8506);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8248,8180);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8274,7549);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8300,6489);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8326,4536);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8352,1311);
   ThetaY_vs_Y_mI35_mI30__1217->SetBinContent(8378,4);
   ThetaY_vs_Y_mI35_mI30__1217->SetEntries(72992);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1217->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1217->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1217->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1217->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1217->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1217->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1217->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1217->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1217->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1217->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1217->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1217->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1217->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1217->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1217->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1217->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
