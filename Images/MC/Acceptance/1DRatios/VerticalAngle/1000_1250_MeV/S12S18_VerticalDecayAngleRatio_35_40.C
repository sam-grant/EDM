void S12S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_35_40__858 = new TH1D("S12S18_ThetaY_35_40__858","",630,-1575,1575);
   S12S18_ThetaY_35_40__858->SetBinContent(306,0.02857143);
   S12S18_ThetaY_35_40__858->SetBinContent(307,0.2571429);
   S12S18_ThetaY_35_40__858->SetBinContent(308,0.4);
   S12S18_ThetaY_35_40__858->SetBinContent(309,0.7);
   S12S18_ThetaY_35_40__858->SetBinContent(310,0.7142857);
   S12S18_ThetaY_35_40__858->SetBinContent(311,0.6428571);
   S12S18_ThetaY_35_40__858->SetBinContent(312,0.8);
   S12S18_ThetaY_35_40__858->SetBinContent(313,1);
   S12S18_ThetaY_35_40__858->SetBinContent(314,0.8714286);
   S12S18_ThetaY_35_40__858->SetBinContent(315,0.7714286);
   S12S18_ThetaY_35_40__858->SetBinContent(316,0.5);
   S12S18_ThetaY_35_40__858->SetBinContent(317,0.01428571);
   S12S18_ThetaY_35_40__858->SetBinError(306,0.02020305);
   S12S18_ThetaY_35_40__858->SetBinError(307,0.06060915);
   S12S18_ThetaY_35_40__858->SetBinError(308,0.07559289);
   S12S18_ThetaY_35_40__858->SetBinError(309,0.1);
   S12S18_ThetaY_35_40__858->SetBinError(310,0.1010153);
   S12S18_ThetaY_35_40__858->SetBinError(311,0.09583148);
   S12S18_ThetaY_35_40__858->SetBinError(312,0.1069045);
   S12S18_ThetaY_35_40__858->SetBinError(313,0.1195229);
   S12S18_ThetaY_35_40__858->SetBinError(314,0.111575);
   S12S18_ThetaY_35_40__858->SetBinError(315,0.1049781);
   S12S18_ThetaY_35_40__858->SetBinError(316,0.08451543);
   S12S18_ThetaY_35_40__858->SetBinError(317,0.01428571);
   S12S18_ThetaY_35_40__858->SetMinimum(0);
   S12S18_ThetaY_35_40__858->SetMaximum(1.1);
   S12S18_ThetaY_35_40__858->SetEntries(469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__858->SetLineColor(ci);
   S12S18_ThetaY_35_40__858->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__858->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__858->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__858->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__858->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__858->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__858->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__858->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__858->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__858->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__858->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__858->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__858->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__858->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__858->Draw("AE");
   
   TH1D *ThetaY_35_40__859 = new TH1D("ThetaY_35_40__859","",630,-1575,1575);
   ThetaY_35_40__859->SetBinContent(306,0.04971182);
   ThetaY_35_40__859->SetBinContent(307,0.2982709);
   ThetaY_35_40__859->SetBinContent(308,0.5410663);
   ThetaY_35_40__859->SetBinContent(309,0.7442363);
   ThetaY_35_40__859->SetBinContent(310,0.8446206);
   ThetaY_35_40__859->SetBinContent(311,0.917147);
   ThetaY_35_40__859->SetBinContent(312,0.9613353);
   ThetaY_35_40__859->SetBinContent(313,1);
   ThetaY_35_40__859->SetBinContent(314,0.9920749);
   ThetaY_35_40__859->SetBinContent(315,0.9920749);
   ThetaY_35_40__859->SetBinContent(316,0.9987992);
   ThetaY_35_40__859->SetBinContent(317,0.9644573);
   ThetaY_35_40__859->SetBinContent(318,0.9918348);
   ThetaY_35_40__859->SetBinContent(319,0.9598943);
   ThetaY_35_40__859->SetBinContent(320,0.9193084);
   ThetaY_35_40__859->SetBinContent(321,0.8511047);
   ThetaY_35_40__859->SetBinContent(322,0.73439);
   ThetaY_35_40__859->SetBinContent(323,0.5739673);
   ThetaY_35_40__859->SetBinContent(324,0.3054755);
   ThetaY_35_40__859->SetBinContent(325,0.0487512);
   ThetaY_35_40__859->SetBinError(306,0.00345521);
   ThetaY_35_40__859->SetBinError(307,0.008463502);
   ThetaY_35_40__859->SetBinError(308,0.01139908);
   ThetaY_35_40__859->SetBinError(309,0.01336904);
   ThetaY_35_40__859->SetBinError(310,0.01424215);
   ThetaY_35_40__859->SetBinError(311,0.01484103);
   ThetaY_35_40__859->SetBinError(312,0.01519435);
   ThetaY_35_40__859->SetBinError(313,0.01549689);
   ThetaY_35_40__859->SetBinError(314,0.01543536);
   ThetaY_35_40__859->SetBinError(315,0.01543536);
   ThetaY_35_40__859->SetBinError(316,0.01548759);
   ThetaY_35_40__859->SetBinError(317,0.015219);
   ThetaY_35_40__859->SetBinError(318,0.0154335);
   ThetaY_35_40__859->SetBinError(319,0.01518296);
   ThetaY_35_40__859->SetBinError(320,0.01485851);
   ThetaY_35_40__859->SetBinError(321,0.01429671);
   ThetaY_35_40__859->SetBinError(322,0.0132803);
   ThetaY_35_40__859->SetBinError(323,0.01174054);
   ThetaY_35_40__859->SetBinError(324,0.008565108);
   ThetaY_35_40__859->SetBinError(325,0.003421664);
   ThetaY_35_40__859->SetEntries(61163);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__859->SetLineColor(ci);
   ThetaY_35_40__859->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__859->SetMarkerColor(ci);
   ThetaY_35_40__859->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__859->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__859->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__859->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__859->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__859->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__859->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__859->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__859->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__859->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__859->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__859->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__859->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__859->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__859->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__859->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__859->Draw("AEsame");
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
   
   Double_t _fx3287[20] = {
   -47.5,
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
   42.5,
   47.5};
   Double_t _fy3287[20] = {
   0.5747412,
   0.8621118,
   0.739281,
   0.9405615,
   0.8456883,
   0.7009314,
   0.8321759,
   1,
   0.8783899,
   0.777591,
   0.5006011,
   0.01481218,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3287[20] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3287[20] = {
   0.3723494,
   0.2026758,
   0.1397027,
   0.1349394,
   0.120025,
   0.1046974,
   0.1116305,
   0.1202208,
   0.112969,
   0.1061629,
   0.08455474,
   0.0122539,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3287[20] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3287[20] = {
   0.7665562,
   0.2572387,
   0.1690526,
   0.1558933,
   0.1384415,
   0.1216721,
   0.1277456,
   0.1356554,
   0.128556,
   0.1217807,
   0.1002281,
   0.034075,
   0.02652274,
   0.02740548,
   0.02861568,
   0.03090941,
   0.03582324,
   0.04583961,
   0.08615863,
   0.5419339};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3287,_fy3287,_felx3287,_fehx3287,_fely3287,_fehy3287);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3287 = new TH1F("Graph_Graph3287","",100,-100,100);
   Graph_Graph3287->SetMinimum(0);
   Graph_Graph3287->SetMaximum(1.5);
   Graph_Graph3287->SetDirectory(0);
   Graph_Graph3287->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3287->SetLineColor(ci);
   Graph_Graph3287->GetXaxis()->SetRange(1,100);
   Graph_Graph3287->GetXaxis()->CenterTitle(true);
   Graph_Graph3287->GetXaxis()->SetLabelFont(42);
   Graph_Graph3287->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3287->GetXaxis()->SetTitleFont(42);
   Graph_Graph3287->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3287->GetYaxis()->CenterTitle(true);
   Graph_Graph3287->GetYaxis()->SetLabelFont(42);
   Graph_Graph3287->GetYaxis()->SetTitleFont(42);
   Graph_Graph3287->GetZaxis()->SetLabelFont(42);
   Graph_Graph3287->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3287->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3287);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__860 = new TH2D("ThetaY_vs_Y_35_40__860","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__860->SetBinContent(7976,207);
   ThetaY_vs_Y_35_40__860->SetBinContent(8002,1242);
   ThetaY_vs_Y_35_40__860->SetBinContent(8028,2253);
   ThetaY_vs_Y_35_40__860->SetBinContent(8054,3099);
   ThetaY_vs_Y_35_40__860->SetBinContent(8080,3517);
   ThetaY_vs_Y_35_40__860->SetBinContent(8106,3819);
   ThetaY_vs_Y_35_40__860->SetBinContent(8132,4003);
   ThetaY_vs_Y_35_40__860->SetBinContent(8158,4164);
   ThetaY_vs_Y_35_40__860->SetBinContent(8184,4131);
   ThetaY_vs_Y_35_40__860->SetBinContent(8210,4131);
   ThetaY_vs_Y_35_40__860->SetBinContent(8236,4159);
   ThetaY_vs_Y_35_40__860->SetBinContent(8262,4016);
   ThetaY_vs_Y_35_40__860->SetBinContent(8288,4130);
   ThetaY_vs_Y_35_40__860->SetBinContent(8314,3997);
   ThetaY_vs_Y_35_40__860->SetBinContent(8340,3828);
   ThetaY_vs_Y_35_40__860->SetBinContent(8366,3544);
   ThetaY_vs_Y_35_40__860->SetBinContent(8392,3058);
   ThetaY_vs_Y_35_40__860->SetBinContent(8418,2390);
   ThetaY_vs_Y_35_40__860->SetBinContent(8444,1272);
   ThetaY_vs_Y_35_40__860->SetBinContent(8470,203);
   ThetaY_vs_Y_35_40__860->SetEntries(61163);
   ThetaY_vs_Y_35_40__860->SetContour(20);
   ThetaY_vs_Y_35_40__860->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__860->SetContourLevel(1,208.2);
   ThetaY_vs_Y_35_40__860->SetContourLevel(2,416.4);
   ThetaY_vs_Y_35_40__860->SetContourLevel(3,624.6);
   ThetaY_vs_Y_35_40__860->SetContourLevel(4,832.8);
   ThetaY_vs_Y_35_40__860->SetContourLevel(5,1041);
   ThetaY_vs_Y_35_40__860->SetContourLevel(6,1249.2);
   ThetaY_vs_Y_35_40__860->SetContourLevel(7,1457.4);
   ThetaY_vs_Y_35_40__860->SetContourLevel(8,1665.6);
   ThetaY_vs_Y_35_40__860->SetContourLevel(9,1873.8);
   ThetaY_vs_Y_35_40__860->SetContourLevel(10,2082);
   ThetaY_vs_Y_35_40__860->SetContourLevel(11,2290.2);
   ThetaY_vs_Y_35_40__860->SetContourLevel(12,2498.4);
   ThetaY_vs_Y_35_40__860->SetContourLevel(13,2706.6);
   ThetaY_vs_Y_35_40__860->SetContourLevel(14,2914.8);
   ThetaY_vs_Y_35_40__860->SetContourLevel(15,3123);
   ThetaY_vs_Y_35_40__860->SetContourLevel(16,3331.2);
   ThetaY_vs_Y_35_40__860->SetContourLevel(17,3539.4);
   ThetaY_vs_Y_35_40__860->SetContourLevel(18,3747.6);
   ThetaY_vs_Y_35_40__860->SetContourLevel(19,3955.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__860->SetLineColor(ci);
   ThetaY_vs_Y_35_40__860->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__860->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__860->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__860->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__860->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__860->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__860->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__860->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__860->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__860->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__860->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__860->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__860->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__860->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__860->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
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
