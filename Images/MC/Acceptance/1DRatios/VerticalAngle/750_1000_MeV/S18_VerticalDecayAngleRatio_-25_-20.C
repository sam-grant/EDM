void S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:45 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_mI25_mI20__594 = new TH1D("S18_ThetaY_mI25_mI20__594","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__594->SetBinContent(311,0.007575758);
   S18_ThetaY_mI25_mI20__594->SetBinContent(312,0.1287879);
   S18_ThetaY_mI25_mI20__594->SetBinContent(313,0.6893939);
   S18_ThetaY_mI25_mI20__594->SetBinContent(314,0.9090909);
   S18_ThetaY_mI25_mI20__594->SetBinContent(315,0.9242424);
   S18_ThetaY_mI25_mI20__594->SetBinContent(316,1);
   S18_ThetaY_mI25_mI20__594->SetBinContent(317,0.9318182);
   S18_ThetaY_mI25_mI20__594->SetBinContent(318,0.9469697);
   S18_ThetaY_mI25_mI20__594->SetBinContent(319,0.7954545);
   S18_ThetaY_mI25_mI20__594->SetBinContent(320,0.9015152);
   S18_ThetaY_mI25_mI20__594->SetBinContent(321,0.6515152);
   S18_ThetaY_mI25_mI20__594->SetBinContent(322,0.7954545);
   S18_ThetaY_mI25_mI20__594->SetBinContent(323,0.7121212);
   S18_ThetaY_mI25_mI20__594->SetBinContent(324,0.5681818);
   S18_ThetaY_mI25_mI20__594->SetBinContent(325,0.3484848);
   S18_ThetaY_mI25_mI20__594->SetBinContent(326,0.08333333);
   S18_ThetaY_mI25_mI20__594->SetBinContent(327,0.01515152);
   S18_ThetaY_mI25_mI20__594->SetBinError(311,0.007575758);
   S18_ThetaY_mI25_mI20__594->SetBinError(312,0.03123565);
   S18_ThetaY_mI25_mI20__594->SetBinError(313,0.07226812);
   S18_ThetaY_mI25_mI20__594->SetBinError(314,0.08298827);
   S18_ThetaY_mI25_mI20__594->SetBinError(315,0.08367698);
   S18_ThetaY_mI25_mI20__594->SetBinError(316,0.08703883);
   S18_ThetaY_mI25_mI20__594->SetBinError(317,0.08401922);
   S18_ThetaY_mI25_mI20__594->SetBinError(318,0.08469954);
   S18_ThetaY_mI25_mI20__594->SetBinError(319,0.07762841);
   S18_ThetaY_mI25_mI20__594->SetBinError(320,0.08264176);
   S18_ThetaY_mI25_mI20__594->SetBinError(321,0.07025469);
   S18_ThetaY_mI25_mI20__594->SetBinError(322,0.07762841);
   S18_ThetaY_mI25_mI20__594->SetBinError(323,0.07344969);
   S18_ThetaY_mI25_mI20__594->SetBinError(324,0.06560799);
   S18_ThetaY_mI25_mI20__594->SetBinError(325,0.05138129);
   S18_ThetaY_mI25_mI20__594->SetBinError(326,0.02512595);
   S18_ThetaY_mI25_mI20__594->SetBinError(327,0.01071374);
   S18_ThetaY_mI25_mI20__594->SetMinimum(0);
   S18_ThetaY_mI25_mI20__594->SetMaximum(1.1);
   S18_ThetaY_mI25_mI20__594->SetEntries(1374);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__594->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__594->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__594->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__594->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__594->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__594->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__594->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__594->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__594->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__594->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__594->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__594->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__594->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__594->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__594->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__594->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__595 = new TH1D("ThetaY_mI25_mI20__595","",630,-1575,1575);
   ThetaY_mI25_mI20__595->SetBinContent(303,0.0003752748);
   ThetaY_mI25_mI20__595->SetBinContent(304,0.05253847);
   ThetaY_mI25_mI20__595->SetBinContent(305,0.2371736);
   ThetaY_mI25_mI20__595->SetBinContent(306,0.4926285);
   ThetaY_mI25_mI20__595->SetBinContent(307,0.6915242);
   ThetaY_mI25_mI20__595->SetBinContent(308,0.812309);
   ThetaY_mI25_mI20__595->SetBinContent(309,0.8894548);
   ThetaY_mI25_mI20__595->SetBinContent(310,0.9457996);
   ThetaY_mI25_mI20__595->SetBinContent(311,0.9757144);
   ThetaY_mI25_mI20__595->SetBinContent(312,0.9955503);
   ThetaY_mI25_mI20__595->SetBinContent(313,0.9876159);
   ThetaY_mI25_mI20__595->SetBinContent(314,0.9922801);
   ThetaY_mI25_mI20__595->SetBinContent(315,0.9854179);
   ThetaY_mI25_mI20__595->SetBinContent(316,1);
   ThetaY_mI25_mI20__595->SetBinContent(317,0.9813435);
   ThetaY_mI25_mI20__595->SetBinContent(318,0.9943709);
   ThetaY_mI25_mI20__595->SetBinContent(319,0.9805393);
   ThetaY_mI25_mI20__595->SetBinContent(320,0.968048);
   ThetaY_mI25_mI20__595->SetBinContent(321,0.9553959);
   ThetaY_mI25_mI20__595->SetBinContent(322,0.8825926);
   ThetaY_mI25_mI20__595->SetBinContent(323,0.8171876);
   ThetaY_mI25_mI20__595->SetBinContent(324,0.6824639);
   ThetaY_mI25_mI20__595->SetBinContent(325,0.4974535);
   ThetaY_mI25_mI20__595->SetBinContent(326,0.2366911);
   ThetaY_mI25_mI20__595->SetBinContent(327,0.05275291);
   ThetaY_mI25_mI20__595->SetBinError(303,0.0001418405);
   ThetaY_mI25_mI20__595->SetBinError(304,0.00167828);
   ThetaY_mI25_mI20__595->SetBinError(305,0.003565816);
   ThetaY_mI25_mI20__595->SetBinError(306,0.005139081);
   ThetaY_mI25_mI20__595->SetBinError(307,0.006088767);
   ThetaY_mI25_mI20__595->SetBinError(308,0.006599124);
   ThetaY_mI25_mI20__595->SetBinError(309,0.00690538);
   ThetaY_mI25_mI20__595->SetBinError(310,0.007120741);
   ThetaY_mI25_mI20__595->SetBinError(311,0.007232476);
   ThetaY_mI25_mI20__595->SetBinError(312,0.007305623);
   ThetaY_mI25_mI20__595->SetBinError(313,0.007276453);
   ThetaY_mI25_mI20__595->SetBinError(314,0.007293614);
   ThetaY_mI25_mI20__595->SetBinError(315,0.007268351);
   ThetaY_mI25_mI20__595->SetBinError(316,0.007321931);
   ThetaY_mI25_mI20__595->SetBinError(317,0.007253309);
   ThetaY_mI25_mI20__595->SetBinError(318,0.007301294);
   ThetaY_mI25_mI20__595->SetBinError(319,0.007250336);
   ThetaY_mI25_mI20__595->SetBinError(320,0.007204007);
   ThetaY_mI25_mI20__595->SetBinError(321,0.007156775);
   ThetaY_mI25_mI20__595->SetBinError(322,0.006878691);
   ThetaY_mI25_mI20__595->SetBinError(323,0.006618911);
   ThetaY_mI25_mI20__595->SetBinError(324,0.006048748);
   ThetaY_mI25_mI20__595->SetBinError(325,0.005164186);
   ThetaY_mI25_mI20__595->SetBinError(326,0.003562187);
   ThetaY_mI25_mI20__595->SetBinError(327,0.001681701);
   ThetaY_mI25_mI20__595->SetEntries(337754);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__595->SetLineColor(ci);
   ThetaY_mI25_mI20__595->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__595->SetMarkerColor(ci);
   ThetaY_mI25_mI20__595->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__595->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__595->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__595->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__595->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__595->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__595->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__595->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__595->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__595->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__595->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__595->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__595->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__595->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__595->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__595->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__595->Draw("AEsame");
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
   
   Double_t _fx3199[25] = {
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
   57.5};
   Double_t _fy3199[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007764319,
   0.1293635,
   0.6980385,
   0.9161636,
   0.9379193,
   1,
   0.9495332,
   0.9523305,
   0.8112419,
   0.9312711,
   0.6819321,
   0.9012703,
   0.8714293,
   0.8325448,
   0.7005375,
   0.3520763,
   0.2872167};
   Double_t _felx3199[25] = {
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
   Double_t _fely3199[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006423071,
   0.03107731,
   0.07321789,
   0.08378536,
   0.08507743,
   0.08723325,
   0.08578452,
   0.0853489,
   0.07926732,
   0.08552755,
   0.07356627,
   0.08809173,
   0.08999429,
   0.0961977,
   0.1031612,
   0.1046407,
   0.1856336};
   Double_t _fehx3199[25] = {
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
   Double_t _fehy3199[25] = {
   42.51057,
   0.2657147,
   0.05881782,
   0.0283145,
   0.02017013,
   0.01717078,
   0.01568141,
   0.01474716,
   0.01785588,
   0.03962199,
   0.08133673,
   0.09182694,
   0.09317342,
   0.09520142,
   0.0939134,
   0.09336862,
   0.08742346,
   0.09377294,
   0.08197,
   0.09715945,
   0.09981188,
   0.1080199,
   0.119612,
   0.141606,
   0.3797118};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3199,_fy3199,_felx3199,_fehx3199,_fely3199,_fehy3199);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3199 = new TH1F("Graph_Graph3199","",100,-100,100);
   Graph_Graph3199->SetMinimum(0);
   Graph_Graph3199->SetMaximum(1.5);
   Graph_Graph3199->SetDirectory(0);
   Graph_Graph3199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3199->SetLineColor(ci);
   Graph_Graph3199->GetXaxis()->SetRange(1,100);
   Graph_Graph3199->GetXaxis()->CenterTitle(true);
   Graph_Graph3199->GetXaxis()->SetLabelFont(42);
   Graph_Graph3199->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3199->GetXaxis()->SetTitleFont(42);
   Graph_Graph3199->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3199->GetYaxis()->CenterTitle(true);
   Graph_Graph3199->GetYaxis()->SetLabelFont(42);
   Graph_Graph3199->GetYaxis()->SetTitleFont(42);
   Graph_Graph3199->GetZaxis()->SetLabelFont(42);
   Graph_Graph3199->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3199->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3199);
   
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__596 = new TH2D("ThetaY_vs_Y_mI25_mI20__596","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(7886,7);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(7912,980);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(7938,4424);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(7964,9189);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(7990,12899);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8016,15152);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8042,16591);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8068,17642);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8094,18200);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8120,18570);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8146,18422);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8172,18509);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8198,18381);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8224,18653);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8250,18305);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8276,18548);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8302,18290);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8328,18057);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8354,17821);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8380,16463);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8406,15243);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8432,12730);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8458,9279);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8484,4415);
   ThetaY_vs_Y_mI25_mI20__596->SetBinContent(8510,984);
   ThetaY_vs_Y_mI25_mI20__596->SetEntries(337754);
   ThetaY_vs_Y_mI25_mI20__596->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(1,932.65);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(2,1865.3);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(3,2797.95);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(4,3730.6);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(5,4663.25);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(6,5595.9);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(7,6528.55);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(8,7461.2);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(9,8393.85);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(10,9326.5);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(11,10259.15);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(12,11191.8);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(13,12124.45);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(14,13057.1);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(15,13989.75);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(16,14922.4);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(17,15855.05);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(18,16787.7);
   ThetaY_vs_Y_mI25_mI20__596->SetContourLevel(19,17720.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__596->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__596->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__596->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__596->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__596->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__596->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__596->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__596->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__596->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__596->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__596->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__596->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__596->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__596->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__596->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__596->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-25_-20","Reco vertices","lpf");
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
