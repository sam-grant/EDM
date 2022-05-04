void S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1286973,125,2.445249);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__933 = new TH1D("S18_ThetaY_mI30_mI25__933","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__933->SetBinContent(313,0.1272727);
   S18_ThetaY_mI30_mI25__933->SetBinContent(314,1.345455);
   S18_ThetaY_mI30_mI25__933->SetBinContent(315,1.509091);
   S18_ThetaY_mI30_mI25__933->SetBinContent(316,1.709091);
   S18_ThetaY_mI30_mI25__933->SetBinContent(317,1.745455);
   S18_ThetaY_mI30_mI25__933->SetBinContent(318,1.545455);
   S18_ThetaY_mI30_mI25__933->SetBinContent(319,1.545455);
   S18_ThetaY_mI30_mI25__933->SetBinContent(320,1.381818);
   S18_ThetaY_mI30_mI25__933->SetBinContent(321,1.054545);
   S18_ThetaY_mI30_mI25__933->SetBinContent(322,1);
   S18_ThetaY_mI30_mI25__933->SetBinContent(323,0.2727273);
   S18_ThetaY_mI30_mI25__933->SetBinError(313,0.04810457);
   S18_ThetaY_mI30_mI25__933->SetBinError(314,0.1564059);
   S18_ThetaY_mI30_mI25__933->SetBinError(315,0.1656442);
   S18_ThetaY_mI30_mI25__933->SetBinError(316,0.1762793);
   S18_ThetaY_mI30_mI25__933->SetBinError(317,0.1781447);
   S18_ThetaY_mI30_mI25__933->SetBinError(318,0.1676281);
   S18_ThetaY_mI30_mI25__933->SetBinError(319,0.1676281);
   S18_ThetaY_mI30_mI25__933->SetBinError(320,0.1585054);
   S18_ThetaY_mI30_mI25__933->SetBinError(321,0.1384686);
   S18_ThetaY_mI30_mI25__933->SetBinError(322,0.13484);
   S18_ThetaY_mI30_mI25__933->SetBinError(323,0.07041788);
   S18_ThetaY_mI30_mI25__933->SetMinimum(0);
   S18_ThetaY_mI30_mI25__933->SetMaximum(2.187855);
   S18_ThetaY_mI30_mI25__933->SetEntries(728);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__933->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__933->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__933->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__933->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__933->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__933->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__933->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__933->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__933->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__933->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__933->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__933->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__933->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__933->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__933->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__933->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__934 = new TH1D("ThetaY_mI30_mI25__934","",630,-1575,1575);
   ThetaY_mI30_mI25__934->SetBinContent(307,0.009783368);
   ThetaY_mI30_mI25__934->SetBinContent(308,0.3534591);
   ThetaY_mI30_mI25__934->SetBinContent(309,0.9948288);
   ThetaY_mI30_mI25__934->SetBinContent(310,1.37638);
   ThetaY_mI30_mI25__934->SetBinContent(311,1.634941);
   ThetaY_mI30_mI25__934->SetBinContent(312,1.807268);
   ThetaY_mI30_mI25__934->SetBinContent(313,1.857023);
   ThetaY_mI30_mI25__934->SetBinContent(314,1.938784);
   ThetaY_mI30_mI25__934->SetBinContent(315,1.988959);
   ThetaY_mI30_mI25__934->SetBinContent(316,1.973585);
   ThetaY_mI30_mI25__934->SetBinContent(317,1.899092);
   ThetaY_mI30_mI25__934->SetBinContent(318,1.904962);
   ThetaY_mI30_mI25__934->SetBinContent(319,1.802096);
   ThetaY_mI30_mI25__934->SetBinContent(320,1.645003);
   ThetaY_mI30_mI25__934->SetBinContent(321,1.399441);
   ThetaY_mI30_mI25__934->SetBinContent(322,1);
   ThetaY_mI30_mI25__934->SetBinContent(323,0.3572327);
   ThetaY_mI30_mI25__934->SetBinContent(324,0.01048218);
   ThetaY_mI30_mI25__934->SetBinError(307,0.001169336);
   ThetaY_mI30_mI25__934->SetBinError(308,0.007028534);
   ThetaY_mI30_mI25__934->SetBinError(309,0.01179151);
   ThetaY_mI30_mI25__934->SetBinError(310,0.01386961);
   ThetaY_mI30_mI25__934->SetBinError(311,0.01511632);
   ThetaY_mI30_mI25__934->SetBinError(312,0.01589302);
   ThetaY_mI30_mI25__934->SetBinError(313,0.01611031);
   ThetaY_mI30_mI25__934->SetBinError(314,0.01646114);
   ThetaY_mI30_mI25__934->SetBinError(315,0.01667278);
   ThetaY_mI30_mI25__934->SetBinError(316,0.01660822);
   ThetaY_mI30_mI25__934->SetBinError(317,0.01629176);
   ThetaY_mI30_mI25__934->SetBinError(318,0.01631692);
   ThetaY_mI30_mI25__934->SetBinError(319,0.01587027);
   ThetaY_mI30_mI25__934->SetBinError(320,0.01516277);
   ThetaY_mI30_mI25__934->SetBinError(321,0.01398532);
   ThetaY_mI30_mI25__934->SetBinError(322,0.01182212);
   ThetaY_mI30_mI25__934->SetBinError(323,0.007065954);
   ThetaY_mI30_mI25__934->SetBinError(324,0.001210378);
   ThetaY_mI30_mI25__934->SetEntries(171386);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__934->SetLineColor(ci);
   ThetaY_mI30_mI25__934->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__934->SetMarkerColor(ci);
   ThetaY_mI30_mI25__934->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__934->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__934->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__934->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__934->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__934->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__934->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__934->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__934->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__934->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__934->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__934->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__934->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__934->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__934->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__934->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__934->Draw("AEsame");
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
   
   Double_t _fx3312[18] = {
   -42.5,
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
   37.5,
   42.5};
   Double_t _fy3312[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.06853589,
   0.6939682,
   0.7587341,
   0.865983,
   0.9190997,
   0.8112786,
   0.857587,
   0.8400093,
   0.7535477,
   1,
   0.7634443,
   0};
   Double_t _felx3312[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3312[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.0252806,
   0.08070107,
   0.08335298,
   0.08945339,
   0.09396845,
   0.08809239,
   0.09313705,
   0.09644917,
   0.09894014,
   0.1349354,
   0.1954374,
   0};
   Double_t _fehx3312[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3312[18] = {
   3.466821,
   0.09473601,
   0.03365147,
   0.02432195,
   0.02047521,
   0.01852272,
   0.03692918,
   0.09068606,
   0.09306121,
   0.09921498,
   0.1041123,
   0.09822695,
   0.1038544,
   0.1082237,
   0.1128809,
   0.1545207,
   0.2533661,
   3.232852};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3312,_fy3312,_felx3312,_fehx3312,_fely3312,_fehy3312);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3312 = new TH1F("Graph_Graph3312","",100,-100,100);
   Graph_Graph3312->SetMinimum(0);
   Graph_Graph3312->SetMaximum(1.5);
   Graph_Graph3312->SetDirectory(0);
   Graph_Graph3312->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3312->SetLineColor(ci);
   Graph_Graph3312->GetXaxis()->SetRange(1,100);
   Graph_Graph3312->GetXaxis()->CenterTitle(true);
   Graph_Graph3312->GetXaxis()->SetLabelFont(42);
   Graph_Graph3312->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3312->GetXaxis()->SetTitleFont(42);
   Graph_Graph3312->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3312->GetYaxis()->CenterTitle(true);
   Graph_Graph3312->GetYaxis()->SetLabelFont(42);
   Graph_Graph3312->GetYaxis()->SetTitleFont(42);
   Graph_Graph3312->GetZaxis()->SetLabelFont(42);
   Graph_Graph3312->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3312->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3312);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.187855,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__935 = new TH2D("ThetaY_vs_Y_mI30_mI25__935","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(7989,70);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8015,2529);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8041,7118);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8067,9848);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8093,11698);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8119,12931);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8145,13287);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8171,13872);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8197,14231);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8223,14121);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8249,13588);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8275,13630);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8301,12894);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8327,11770);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8353,10013);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8379,7155);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8405,2556);
   ThetaY_vs_Y_mI30_mI25__935->SetBinContent(8431,75);
   ThetaY_vs_Y_mI30_mI25__935->SetEntries(171386);
   ThetaY_vs_Y_mI30_mI25__935->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(1,711.55);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(2,1423.1);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(3,2134.65);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(4,2846.2);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(5,3557.75);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(6,4269.3);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(7,4980.85);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(8,5692.4);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(9,6403.95);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(10,7115.5);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(11,7827.05);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(12,8538.6);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(13,9250.15);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(14,9961.7);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(15,10673.25);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(16,11384.8);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(17,12096.35);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(18,12807.9);
   ThetaY_vs_Y_mI30_mI25__935->SetContourLevel(19,13519.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__935->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__935->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__935->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__935->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__935->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__935->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__935->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__935->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__935->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__935->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__935->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__935->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__935->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__935->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__935->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__935->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-30_-25","Reco vertices","lpf");
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
