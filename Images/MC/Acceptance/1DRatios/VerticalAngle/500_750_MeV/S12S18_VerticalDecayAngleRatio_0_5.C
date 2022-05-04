void S12S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06638798,125,1.261372);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_0_5__495 = new TH1D("S12S18_ThetaY_0_5__495","",630,-1575,1575);
   S12S18_ThetaY_0_5__495->SetBinContent(304,0.008064516);
   S12S18_ThetaY_0_5__495->SetBinContent(305,0.02016129);
   S12S18_ThetaY_0_5__495->SetBinContent(306,0.1209677);
   S12S18_ThetaY_0_5__495->SetBinContent(307,0.4637097);
   S12S18_ThetaY_0_5__495->SetBinContent(308,0.7782258);
   S12S18_ThetaY_0_5__495->SetBinContent(309,0.891129);
   S12S18_ThetaY_0_5__495->SetBinContent(310,0.8991935);
   S12S18_ThetaY_0_5__495->SetBinContent(311,0.8870968);
   S12S18_ThetaY_0_5__495->SetBinContent(312,0.9032258);
   S12S18_ThetaY_0_5__495->SetBinContent(313,0.8508065);
   S12S18_ThetaY_0_5__495->SetBinContent(314,0.9677419);
   S12S18_ThetaY_0_5__495->SetBinContent(315,0.9556452);
   S12S18_ThetaY_0_5__495->SetBinContent(316,1);
   S12S18_ThetaY_0_5__495->SetBinContent(317,1);
   S12S18_ThetaY_0_5__495->SetBinContent(318,0.9516129);
   S12S18_ThetaY_0_5__495->SetBinContent(319,0.9072581);
   S12S18_ThetaY_0_5__495->SetBinContent(320,0.9072581);
   S12S18_ThetaY_0_5__495->SetBinContent(321,0.8387097);
   S12S18_ThetaY_0_5__495->SetBinContent(322,0.7903226);
   S12S18_ThetaY_0_5__495->SetBinContent(323,0.4112903);
   S12S18_ThetaY_0_5__495->SetBinContent(324,0.1491935);
   S12S18_ThetaY_0_5__495->SetBinContent(325,0.01209677);
   S12S18_ThetaY_0_5__495->SetBinContent(326,0.004032258);
   S12S18_ThetaY_0_5__495->SetBinError(304,0.005702474);
   S12S18_ThetaY_0_5__495->SetBinError(305,0.009016403);
   S12S18_ThetaY_0_5__495->SetBinError(306,0.02208559);
   S12S18_ThetaY_0_5__495->SetBinError(307,0.04324115);
   S12S18_ThetaY_0_5__495->SetBinError(308,0.05601792);
   S12S18_ThetaY_0_5__495->SetBinError(309,0.05994383);
   S12S18_ThetaY_0_5__495->SetBinError(310,0.06021445);
   S12S18_ThetaY_0_5__495->SetBinError(311,0.05980805);
   S12S18_ThetaY_0_5__495->SetBinError(312,0.06034931);
   S12S18_ThetaY_0_5__495->SetBinError(313,0.05857193);
   S12S18_ThetaY_0_5__495->SetBinError(314,0.06246747);
   S12S18_ThetaY_0_5__495->SetBinError(315,0.06207582);
   S12S18_ThetaY_0_5__495->SetBinError(316,0.06350006);
   S12S18_ThetaY_0_5__495->SetBinError(317,0.06350006);
   S12S18_ThetaY_0_5__495->SetBinError(318,0.06194472);
   S12S18_ThetaY_0_5__495->SetBinError(319,0.06048387);
   S12S18_ThetaY_0_5__495->SetBinError(320,0.06048387);
   S12S18_ThetaY_0_5__495->SetBinError(321,0.05815405);
   S12S18_ThetaY_0_5__495->SetBinError(322,0.05645161);
   S12S18_ThetaY_0_5__495->SetBinError(323,0.04072381);
   S12S18_ThetaY_0_5__495->SetBinError(324,0.02452727);
   S12S18_ThetaY_0_5__495->SetBinError(325,0.006984076);
   S12S18_ThetaY_0_5__495->SetBinError(326,0.004032258);
   S12S18_ThetaY_0_5__495->SetMinimum(0);
   S12S18_ThetaY_0_5__495->SetMaximum(1.128596);
   S12S18_ThetaY_0_5__495->SetEntries(3650);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__495->SetLineColor(ci);
   S12S18_ThetaY_0_5__495->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_0_5__495->SetMarkerColor(ci);
   S12S18_ThetaY_0_5__495->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_0_5__495->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_0_5__495->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__495->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__495->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__495->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_0_5__495->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_0_5__495->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__495->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__495->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_0_5__495->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_0_5__495->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_0_5__495->Draw("AE");
   
   TH1D *ThetaY_0_5__496 = new TH1D("ThetaY_0_5__496","",630,-1575,1575);
   ThetaY_0_5__496->SetBinContent(300,0.005831332);
   ThetaY_0_5__496->SetBinContent(301,0.06532072);
   ThetaY_0_5__496->SetBinContent(302,0.193169);
   ThetaY_0_5__496->SetBinContent(303,0.3932229);
   ThetaY_0_5__496->SetBinContent(304,0.6181212);
   ThetaY_0_5__496->SetBinContent(305,0.7596168);
   ThetaY_0_5__496->SetBinContent(306,0.8654873);
   ThetaY_0_5__496->SetBinContent(307,0.9321311);
   ThetaY_0_5__496->SetBinContent(308,0.9930906);
   ThetaY_0_5__496->SetBinContent(309,1.008771);
   ThetaY_0_5__496->SetBinContent(310,1.020483);
   ThetaY_0_5__496->SetBinContent(311,1.012398);
   ThetaY_0_5__496->SetBinContent(312,1.017739);
   ThetaY_0_5__496->SetBinContent(313,1.014652);
   ThetaY_0_5__496->SetBinContent(314,1.000466);
   ThetaY_0_5__496->SetBinContent(315,1.00664);
   ThetaY_0_5__496->SetBinContent(316,1.010217);
   ThetaY_0_5__496->SetBinContent(317,1);
   ThetaY_0_5__496->SetBinContent(318,1.025996);
   ThetaY_0_5__496->SetBinContent(319,1.01965);
   ThetaY_0_5__496->SetBinContent(320,1.024207);
   ThetaY_0_5__496->SetBinContent(321,1.02406);
   ThetaY_0_5__496->SetBinContent(322,1.00958);
   ThetaY_0_5__496->SetBinContent(323,0.9813054);
   ThetaY_0_5__496->SetBinContent(324,0.9384525);
   ThetaY_0_5__496->SetBinContent(325,0.8686235);
   ThetaY_0_5__496->SetBinContent(326,0.7601803);
   ThetaY_0_5__496->SetBinContent(327,0.6125839);
   ThetaY_0_5__496->SetBinContent(328,0.3917038);
   ThetaY_0_5__496->SetBinContent(329,0.1946391);
   ThetaY_0_5__496->SetBinContent(330,0.06522272);
   ThetaY_0_5__496->SetBinContent(331,0.005047288);
   ThetaY_0_5__496->SetBinError(300,0.0003779891);
   ThetaY_0_5__496->SetBinError(301,0.001265089);
   ThetaY_0_5__496->SetBinError(302,0.002175525);
   ThetaY_0_5__496->SetBinError(303,0.003103951);
   ThetaY_0_5__496->SetBinError(304,0.003891636);
   ThetaY_0_5__496->SetBinError(305,0.004314125);
   ThetaY_0_5__496->SetBinError(306,0.004604959);
   ThetaY_0_5__496->SetBinError(307,0.004778966);
   ThetaY_0_5__496->SetBinError(308,0.004932759);
   ThetaY_0_5__496->SetBinError(309,0.00497155);
   ThetaY_0_5__496->SetBinError(310,0.005000326);
   ThetaY_0_5__496->SetBinError(311,0.004980478);
   ThetaY_0_5__496->SetBinError(312,0.004993599);
   ThetaY_0_5__496->SetBinError(313,0.004986019);
   ThetaY_0_5__496->SetBinError(314,0.004951041);
   ThetaY_0_5__496->SetBinError(315,0.004966295);
   ThetaY_0_5__496->SetBinError(316,0.004975111);
   ThetaY_0_5__496->SetBinError(317,0.004949889);
   ThetaY_0_5__496->SetBinError(318,0.005013814);
   ThetaY_0_5__496->SetBinError(319,0.004998285);
   ThetaY_0_5__496->SetBinError(320,0.005009442);
   ThetaY_0_5__496->SetBinError(321,0.005009083);
   ThetaY_0_5__496->SetBinError(322,0.004973542);
   ThetaY_0_5__496->SetBinError(323,0.004903402);
   ThetaY_0_5__496->SetBinError(324,0.004795143);
   ThetaY_0_5__496->SetBinError(325,0.004613295);
   ThetaY_0_5__496->SetBinError(326,0.004315725);
   ThetaY_0_5__496->SetBinError(327,0.003874166);
   ThetaY_0_5__496->SetBinError(328,0.003097949);
   ThetaY_0_5__496->SetBinError(329,0.002183788);
   ThetaY_0_5__496->SetBinError(330,0.001264139);
   ThetaY_0_5__496->SetBinError(331,0.0003516612);
   ThetaY_0_5__496->SetEntries(972949);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__496->SetLineColor(ci);
   ThetaY_0_5__496->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__496->SetMarkerColor(ci);
   ThetaY_0_5__496->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__496->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__496->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__496->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__496->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__496->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__496->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__496->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__496->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__496->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__496->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__496->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__496->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__496->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__496->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__496->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__496->Draw("AEsame");
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
   
   Double_t _fx3166[32] = {
   -77.5,
   -72.5,
   -67.5,
   -62.5,
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
   62.5,
   67.5,
   72.5,
   77.5};
   Double_t _fy3166[32] = {
   0,
   0,
   0,
   0,
   0.01304682,
   0.0265414,
   0.1397684,
   0.4974726,
   0.7836403,
   0.8833805,
   0.8811449,
   0.8762335,
   0.8874827,
   0.8385206,
   0.9672916,
   0.9493416,
   0.9898863,
   1,
   0.9275016,
   0.8897739,
   0.8858148,
   0.8190041,
   0.7828231,
   0.4191257,
   0.1589783,
   0.01392637,
   0.005304344,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3166[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3166[32] = {
   0,
   0,
   0,
   0,
   0.008427245,
   0.01146501,
   0.02538549,
   0.0463914,
   0.05649213,
   0.05953609,
   0.05911853,
   0.05918699,
   0.05941203,
   0.05782647,
   0.06257726,
   0.06179961,
   0.06300335,
   0.063649,
   0.06050151,
   0.05943351,
   0.05916835,
   0.05688242,
   0.05600028,
   0.04148373,
   0.02602943,
   0.007579453,
   0.004388026,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3166[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3166[32] = {
   1.277969,
   0.1136858,
   0.03843443,
   0.01887962,
   0.01720942,
   0.01795754,
   0.03047615,
   0.05093464,
   0.06072067,
   0.063692,
   0.06322607,
   0.06332813,
   0.06353051,
   0.06196028,
   0.06676437,
   0.06596138,
   0.06714851,
   0.06783678,
   0.06458446,
   0.06354403,
   0.06326048,
   0.06097872,
   0.06015861,
   0.04580901,
   0.03068567,
   0.01354771,
   0.01219813,
   0.01211874,
   0.01895284,
   0.03814411,
   0.1138567,
   1.477377};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3166,_fy3166,_felx3166,_fehx3166,_fely3166,_fehy3166);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3166 = new TH1F("Graph_Graph3166","",100,-100,100);
   Graph_Graph3166->SetMinimum(0);
   Graph_Graph3166->SetMaximum(1.5);
   Graph_Graph3166->SetDirectory(0);
   Graph_Graph3166->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3166->SetLineColor(ci);
   Graph_Graph3166->GetXaxis()->SetRange(1,100);
   Graph_Graph3166->GetXaxis()->CenterTitle(true);
   Graph_Graph3166->GetXaxis()->SetLabelFont(42);
   Graph_Graph3166->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3166->GetXaxis()->SetTitleFont(42);
   Graph_Graph3166->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3166->GetYaxis()->CenterTitle(true);
   Graph_Graph3166->GetYaxis()->SetLabelFont(42);
   Graph_Graph3166->GetYaxis()->SetTitleFont(42);
   Graph_Graph3166->GetZaxis()->SetLabelFont(42);
   Graph_Graph3166->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3166->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3166);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.128596,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__497 = new TH2D("ThetaY_vs_Y_0_5__497","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__497->SetBinContent(7813,238);
   ThetaY_vs_Y_0_5__497->SetBinContent(7839,2666);
   ThetaY_vs_Y_0_5__497->SetBinContent(7865,7884);
   ThetaY_vs_Y_0_5__497->SetBinContent(7891,16049);
   ThetaY_vs_Y_0_5__497->SetBinContent(7917,25228);
   ThetaY_vs_Y_0_5__497->SetBinContent(7943,31003);
   ThetaY_vs_Y_0_5__497->SetBinContent(7969,35324);
   ThetaY_vs_Y_0_5__497->SetBinContent(7995,38044);
   ThetaY_vs_Y_0_5__497->SetBinContent(8021,40532);
   ThetaY_vs_Y_0_5__497->SetBinContent(8047,41172);
   ThetaY_vs_Y_0_5__497->SetBinContent(8073,41650);
   ThetaY_vs_Y_0_5__497->SetBinContent(8099,41320);
   ThetaY_vs_Y_0_5__497->SetBinContent(8125,41538);
   ThetaY_vs_Y_0_5__497->SetBinContent(8151,41412);
   ThetaY_vs_Y_0_5__497->SetBinContent(8177,40833);
   ThetaY_vs_Y_0_5__497->SetBinContent(8203,41085);
   ThetaY_vs_Y_0_5__497->SetBinContent(8229,41231);
   ThetaY_vs_Y_0_5__497->SetBinContent(8255,40814);
   ThetaY_vs_Y_0_5__497->SetBinContent(8281,41875);
   ThetaY_vs_Y_0_5__497->SetBinContent(8307,41616);
   ThetaY_vs_Y_0_5__497->SetBinContent(8333,41802);
   ThetaY_vs_Y_0_5__497->SetBinContent(8359,41796);
   ThetaY_vs_Y_0_5__497->SetBinContent(8385,41205);
   ThetaY_vs_Y_0_5__497->SetBinContent(8411,40051);
   ThetaY_vs_Y_0_5__497->SetBinContent(8437,38302);
   ThetaY_vs_Y_0_5__497->SetBinContent(8463,35452);
   ThetaY_vs_Y_0_5__497->SetBinContent(8489,31026);
   ThetaY_vs_Y_0_5__497->SetBinContent(8515,25002);
   ThetaY_vs_Y_0_5__497->SetBinContent(8541,15987);
   ThetaY_vs_Y_0_5__497->SetBinContent(8567,7944);
   ThetaY_vs_Y_0_5__497->SetBinContent(8593,2662);
   ThetaY_vs_Y_0_5__497->SetBinContent(8619,206);
   ThetaY_vs_Y_0_5__497->SetEntries(972949);
   ThetaY_vs_Y_0_5__497->SetContour(20);
   ThetaY_vs_Y_0_5__497->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__497->SetContourLevel(1,2093.75);
   ThetaY_vs_Y_0_5__497->SetContourLevel(2,4187.5);
   ThetaY_vs_Y_0_5__497->SetContourLevel(3,6281.25);
   ThetaY_vs_Y_0_5__497->SetContourLevel(4,8375);
   ThetaY_vs_Y_0_5__497->SetContourLevel(5,10468.75);
   ThetaY_vs_Y_0_5__497->SetContourLevel(6,12562.5);
   ThetaY_vs_Y_0_5__497->SetContourLevel(7,14656.25);
   ThetaY_vs_Y_0_5__497->SetContourLevel(8,16750);
   ThetaY_vs_Y_0_5__497->SetContourLevel(9,18843.75);
   ThetaY_vs_Y_0_5__497->SetContourLevel(10,20937.5);
   ThetaY_vs_Y_0_5__497->SetContourLevel(11,23031.25);
   ThetaY_vs_Y_0_5__497->SetContourLevel(12,25125);
   ThetaY_vs_Y_0_5__497->SetContourLevel(13,27218.75);
   ThetaY_vs_Y_0_5__497->SetContourLevel(14,29312.5);
   ThetaY_vs_Y_0_5__497->SetContourLevel(15,31406.25);
   ThetaY_vs_Y_0_5__497->SetContourLevel(16,33500);
   ThetaY_vs_Y_0_5__497->SetContourLevel(17,35593.75);
   ThetaY_vs_Y_0_5__497->SetContourLevel(18,37687.5);
   ThetaY_vs_Y_0_5__497->SetContourLevel(19,39781.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__497->SetLineColor(ci);
   ThetaY_vs_Y_0_5__497->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__497->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__497->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__497->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__497->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__497->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__497->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__497->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__497->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__497->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__497->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__497->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__497->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__497->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__497->Draw("COL");
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
