void S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:46 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09467975,125,1.798915);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_35_40__630 = new TH1D("S18_ThetaY_35_40__630","",630,-1575,1575);
   S18_ThetaY_35_40__630->SetBinContent(305,0.1052632);
   S18_ThetaY_35_40__630->SetBinContent(306,0.4736842);
   S18_ThetaY_35_40__630->SetBinContent(307,1);
   S18_ThetaY_35_40__630->SetBinContent(308,0.8421053);
   S18_ThetaY_35_40__630->SetBinContent(309,1.052632);
   S18_ThetaY_35_40__630->SetBinContent(310,1.263158);
   S18_ThetaY_35_40__630->SetBinContent(311,1.368421);
   S18_ThetaY_35_40__630->SetBinContent(312,1);
   S18_ThetaY_35_40__630->SetBinContent(313,1.421053);
   S18_ThetaY_35_40__630->SetBinContent(314,1.315789);
   S18_ThetaY_35_40__630->SetBinContent(315,0.8421053);
   S18_ThetaY_35_40__630->SetBinContent(316,0.8421053);
   S18_ThetaY_35_40__630->SetBinError(305,0.07443229);
   S18_ThetaY_35_40__630->SetBinError(306,0.1578947);
   S18_ThetaY_35_40__630->SetBinError(307,0.2294157);
   S18_ThetaY_35_40__630->SetBinError(308,0.2105263);
   S18_ThetaY_35_40__630->SetBinError(309,0.2353756);
   S18_ThetaY_35_40__630->SetBinError(310,0.257841);
   S18_ThetaY_35_40__630->SetBinError(311,0.2683694);
   S18_ThetaY_35_40__630->SetBinError(312,0.2294157);
   S18_ThetaY_35_40__630->SetBinError(313,0.2734817);
   S18_ThetaY_35_40__630->SetBinError(314,0.2631579);
   S18_ThetaY_35_40__630->SetBinError(315,0.2105263);
   S18_ThetaY_35_40__630->SetBinError(316,0.2105263);
   S18_ThetaY_35_40__630->SetMinimum(0);
   S18_ThetaY_35_40__630->SetMaximum(1.609556);
   S18_ThetaY_35_40__630->SetEntries(219);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__630->SetLineColor(ci);
   S18_ThetaY_35_40__630->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__630->SetMarkerColor(ci);
   S18_ThetaY_35_40__630->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__630->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__630->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__630->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__630->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__630->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__630->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__630->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__630->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__630->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__630->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__630->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__630->Draw("AE");
   
   TH1D *ThetaY_35_40__631 = new TH1D("ThetaY_35_40__631","",630,-1575,1575);
   ThetaY_35_40__631->SetBinContent(304,0.07353519);
   ThetaY_35_40__631->SetBinContent(305,0.3617774);
   ThetaY_35_40__631->SetBinContent(306,0.7660244);
   ThetaY_35_40__631->SetBinContent(307,1);
   ThetaY_35_40__631->SetBinContent(308,1.149037);
   ThetaY_35_40__631->SetBinContent(309,1.291388);
   ThetaY_35_40__631->SetBinContent(310,1.394023);
   ThetaY_35_40__631->SetBinContent(311,1.432953);
   ThetaY_35_40__631->SetBinContent(312,1.443571);
   ThetaY_35_40__631->SetBinContent(313,1.461659);
   ThetaY_35_40__631->SetBinContent(314,1.422729);
   ThetaY_35_40__631->SetBinContent(315,1.428234);
   ThetaY_35_40__631->SetBinContent(316,1.449469);
   ThetaY_35_40__631->SetBinContent(317,1.462839);
   ThetaY_35_40__631->SetBinContent(318,1.443571);
   ThetaY_35_40__631->SetBinContent(319,1.463232);
   ThetaY_35_40__631->SetBinContent(320,1.434526);
   ThetaY_35_40__631->SetBinContent(321,1.356665);
   ThetaY_35_40__631->SetBinContent(322,1.28431);
   ThetaY_35_40__631->SetBinContent(323,1.16162);
   ThetaY_35_40__631->SetBinContent(324,0.9952812);
   ThetaY_35_40__631->SetBinContent(325,0.7546205);
   ThetaY_35_40__631->SetBinContent(326,0.352733);
   ThetaY_35_40__631->SetBinContent(327,0.07550138);
   ThetaY_35_40__631->SetBinContent(328,0.0007864727);
   ThetaY_35_40__631->SetBinError(304,0.005377426);
   ThetaY_35_40__631->SetBinError(305,0.01192745);
   ThetaY_35_40__631->SetBinError(306,0.01735594);
   ThetaY_35_40__631->SetBinError(307,0.01983019);
   ThetaY_35_40__631->SetBinError(308,0.0212566);
   ThetaY_35_40__631->SetBinError(309,0.02253488);
   ThetaY_35_40__631->SetBinError(310,0.02341325);
   ThetaY_35_40__631->SetBinError(311,0.02373793);
   ThetaY_35_40__631->SetBinError(312,0.02382571);
   ThetaY_35_40__631->SetBinError(313,0.02397452);
   ThetaY_35_40__631->SetBinError(314,0.02365309);
   ThetaY_35_40__631->SetBinError(315,0.02369881);
   ThetaY_35_40__631->SetBinError(316,0.02387434);
   ThetaY_35_40__631->SetBinError(317,0.02398419);
   ThetaY_35_40__631->SetBinError(318,0.02382571);
   ThetaY_35_40__631->SetBinError(319,0.02398742);
   ThetaY_35_40__631->SetBinError(320,0.02375095);
   ThetaY_35_40__631->SetBinError(321,0.0230974);
   ThetaY_35_40__631->SetBinError(322,0.02247304);
   ThetaY_35_40__631->SetBinError(323,0.02137268);
   ThetaY_35_40__631->SetBinError(324,0.01978334);
   ThetaY_35_40__631->SetBinError(325,0.01722627);
   ThetaY_35_40__631->SetBinError(326,0.01177741);
   ThetaY_35_40__631->SetBinError(327,0.005448842);
   ThetaY_35_40__631->SetBinError(328,0.0005561202);
   ThetaY_35_40__631->SetEntries(67288);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__631->SetLineColor(ci);
   ThetaY_35_40__631->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__631->SetMarkerColor(ci);
   ThetaY_35_40__631->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__631->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__631->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__631->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__631->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__631->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__631->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__631->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__631->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__631->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__631->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__631->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__631->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__631->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__631->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__631->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__631->Draw("AEsame");
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
   
   Double_t _fx3211[25] = {
   -57.5,
   -52.5,
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
   47.5,
   52.5,
   57.5,
   62.5};
   Double_t _fy3211[25] = {
   0,
   0.2909611,
   0.618367,
   1,
   0.7328794,
   0.8151164,
   0.9061243,
   0.9549656,
   0.6927268,
   0.9722187,
   0.9248349,
   0.5896128,
   0.580975,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3211[25] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3211[25] = {
   0,
   0.188062,
   0.2026582,
   0.2281864,
   0.1817541,
   0.1812535,
   0.1842607,
   0.1867106,
   0.1578994,
   0.1865882,
   0.1843314,
   0.1461506,
   0.1440051,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3211[25] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3211[25] = {
   1.324188,
   0.3847251,
   0.2833517,
   0.2874361,
   0.2336691,
   0.2269315,
   0.2262339,
   0.2274104,
   0.1988226,
   0.226427,
   0.2253863,
   0.1878584,
   0.1850985,
   0.06625462,
   0.0671392,
   0.06623681,
   0.06756261,
   0.07144115,
   0.07546714,
   0.08344042,
   0.0973907,
   0.1284651,
   0.2749824,
   1.289538,
   202.1782};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3211,_fy3211,_felx3211,_fehx3211,_fely3211,_fehy3211);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3211 = new TH1F("Graph_Graph3211","",100,-100,100);
   Graph_Graph3211->SetMinimum(0);
   Graph_Graph3211->SetMaximum(1.5);
   Graph_Graph3211->SetDirectory(0);
   Graph_Graph3211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3211->SetLineColor(ci);
   Graph_Graph3211->GetXaxis()->SetRange(1,100);
   Graph_Graph3211->GetXaxis()->CenterTitle(true);
   Graph_Graph3211->GetXaxis()->SetLabelFont(42);
   Graph_Graph3211->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3211->GetXaxis()->SetTitleFont(42);
   Graph_Graph3211->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3211->GetYaxis()->CenterTitle(true);
   Graph_Graph3211->GetYaxis()->SetLabelFont(42);
   Graph_Graph3211->GetYaxis()->SetTitleFont(42);
   Graph_Graph3211->GetZaxis()->SetLabelFont(42);
   Graph_Graph3211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3211->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3211);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.609556,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__632 = new TH2D("ThetaY_vs_Y_35_40__632","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__632->SetBinContent(7924,187);
   ThetaY_vs_Y_35_40__632->SetBinContent(7950,920);
   ThetaY_vs_Y_35_40__632->SetBinContent(7976,1948);
   ThetaY_vs_Y_35_40__632->SetBinContent(8002,2543);
   ThetaY_vs_Y_35_40__632->SetBinContent(8028,2922);
   ThetaY_vs_Y_35_40__632->SetBinContent(8054,3284);
   ThetaY_vs_Y_35_40__632->SetBinContent(8080,3545);
   ThetaY_vs_Y_35_40__632->SetBinContent(8106,3644);
   ThetaY_vs_Y_35_40__632->SetBinContent(8132,3671);
   ThetaY_vs_Y_35_40__632->SetBinContent(8158,3717);
   ThetaY_vs_Y_35_40__632->SetBinContent(8184,3618);
   ThetaY_vs_Y_35_40__632->SetBinContent(8210,3632);
   ThetaY_vs_Y_35_40__632->SetBinContent(8236,3686);
   ThetaY_vs_Y_35_40__632->SetBinContent(8262,3720);
   ThetaY_vs_Y_35_40__632->SetBinContent(8288,3671);
   ThetaY_vs_Y_35_40__632->SetBinContent(8314,3721);
   ThetaY_vs_Y_35_40__632->SetBinContent(8340,3648);
   ThetaY_vs_Y_35_40__632->SetBinContent(8366,3450);
   ThetaY_vs_Y_35_40__632->SetBinContent(8392,3266);
   ThetaY_vs_Y_35_40__632->SetBinContent(8418,2954);
   ThetaY_vs_Y_35_40__632->SetBinContent(8444,2531);
   ThetaY_vs_Y_35_40__632->SetBinContent(8470,1919);
   ThetaY_vs_Y_35_40__632->SetBinContent(8496,897);
   ThetaY_vs_Y_35_40__632->SetBinContent(8522,192);
   ThetaY_vs_Y_35_40__632->SetBinContent(8548,2);
   ThetaY_vs_Y_35_40__632->SetEntries(67288);
   ThetaY_vs_Y_35_40__632->SetContour(20);
   ThetaY_vs_Y_35_40__632->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__632->SetContourLevel(1,186.05);
   ThetaY_vs_Y_35_40__632->SetContourLevel(2,372.1);
   ThetaY_vs_Y_35_40__632->SetContourLevel(3,558.15);
   ThetaY_vs_Y_35_40__632->SetContourLevel(4,744.2);
   ThetaY_vs_Y_35_40__632->SetContourLevel(5,930.25);
   ThetaY_vs_Y_35_40__632->SetContourLevel(6,1116.3);
   ThetaY_vs_Y_35_40__632->SetContourLevel(7,1302.35);
   ThetaY_vs_Y_35_40__632->SetContourLevel(8,1488.4);
   ThetaY_vs_Y_35_40__632->SetContourLevel(9,1674.45);
   ThetaY_vs_Y_35_40__632->SetContourLevel(10,1860.5);
   ThetaY_vs_Y_35_40__632->SetContourLevel(11,2046.55);
   ThetaY_vs_Y_35_40__632->SetContourLevel(12,2232.6);
   ThetaY_vs_Y_35_40__632->SetContourLevel(13,2418.65);
   ThetaY_vs_Y_35_40__632->SetContourLevel(14,2604.7);
   ThetaY_vs_Y_35_40__632->SetContourLevel(15,2790.75);
   ThetaY_vs_Y_35_40__632->SetContourLevel(16,2976.8);
   ThetaY_vs_Y_35_40__632->SetContourLevel(17,3162.85);
   ThetaY_vs_Y_35_40__632->SetContourLevel(18,3348.9);
   ThetaY_vs_Y_35_40__632->SetContourLevel(19,3534.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__632->SetLineColor(ci);
   ThetaY_vs_Y_35_40__632->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__632->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__632->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__632->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__632->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__632->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__632->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__632->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__632->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__632->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__632->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__632->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__632->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__632->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__632->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_35_40","Reco vertices","lpf");
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
