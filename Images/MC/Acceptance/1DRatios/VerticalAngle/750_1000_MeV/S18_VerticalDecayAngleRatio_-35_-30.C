void S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.08068593,125,1.533033);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__588 = new TH1D("S18_ThetaY_mI35_mI30__588","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__588->SetBinContent(313,0.02222222);
   S18_ThetaY_mI35_mI30__588->SetBinContent(314,0.4);
   S18_ThetaY_mI35_mI30__588->SetBinContent(315,0.9777778);
   S18_ThetaY_mI35_mI30__588->SetBinContent(316,1.022222);
   S18_ThetaY_mI35_mI30__588->SetBinContent(317,0.8444444);
   S18_ThetaY_mI35_mI30__588->SetBinContent(318,0.9555556);
   S18_ThetaY_mI35_mI30__588->SetBinContent(319,0.8888889);
   S18_ThetaY_mI35_mI30__588->SetBinContent(320,1);
   S18_ThetaY_mI35_mI30__588->SetBinContent(321,0.5555556);
   S18_ThetaY_mI35_mI30__588->SetBinContent(322,0.8444444);
   S18_ThetaY_mI35_mI30__588->SetBinContent(323,1);
   S18_ThetaY_mI35_mI30__588->SetBinContent(324,0.8);
   S18_ThetaY_mI35_mI30__588->SetBinContent(325,0.4666667);
   S18_ThetaY_mI35_mI30__588->SetBinContent(326,0.2666667);
   S18_ThetaY_mI35_mI30__588->SetBinContent(327,0.04444444);
   S18_ThetaY_mI35_mI30__588->SetBinError(313,0.02222222);
   S18_ThetaY_mI35_mI30__588->SetBinError(314,0.0942809);
   S18_ThetaY_mI35_mI30__588->SetBinError(315,0.1474055);
   S18_ThetaY_mI35_mI30__588->SetBinError(316,0.1507184);
   S18_ThetaY_mI35_mI30__588->SetBinError(317,0.136987);
   S18_ThetaY_mI35_mI30__588->SetBinError(318,0.1457209);
   S18_ThetaY_mI35_mI30__588->SetBinError(319,0.1405457);
   S18_ThetaY_mI35_mI30__588->SetBinError(320,0.1490712);
   S18_ThetaY_mI35_mI30__588->SetBinError(321,0.1111111);
   S18_ThetaY_mI35_mI30__588->SetBinError(322,0.136987);
   S18_ThetaY_mI35_mI30__588->SetBinError(323,0.1490712);
   S18_ThetaY_mI35_mI30__588->SetBinError(324,0.1333333);
   S18_ThetaY_mI35_mI30__588->SetBinError(325,0.101835);
   S18_ThetaY_mI35_mI30__588->SetBinError(326,0.07698004);
   S18_ThetaY_mI35_mI30__588->SetBinError(327,0.03142697);
   S18_ThetaY_mI35_mI30__588->SetMinimum(0);
   S18_ThetaY_mI35_mI30__588->SetMaximum(1.371661);
   S18_ThetaY_mI35_mI30__588->SetEntries(454);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__588->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__588->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__588->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__588->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__588->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__588->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__588->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__588->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__588->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__588->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__588->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__588->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__588->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__588->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__588->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__588->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__589 = new TH1D("ThetaY_mI35_mI30__589","",630,-1575,1575);
   ThetaY_mI35_mI30__589->SetBinContent(303,0.00125);
   ThetaY_mI35_mI30__589->SetBinContent(304,0.06446429);
   ThetaY_mI35_mI30__589->SetBinContent(305,0.2853571);
   ThetaY_mI35_mI30__589->SetBinContent(306,0.6260714);
   ThetaY_mI35_mI30__589->SetBinContent(307,0.8526786);
   ThetaY_mI35_mI30__589->SetBinContent(308,1.002321);
   ThetaY_mI35_mI30__589->SetBinContent(309,1.121071);
   ThetaY_mI35_mI30__589->SetBinContent(310,1.164286);
   ThetaY_mI35_mI30__589->SetBinContent(311,1.214464);
   ThetaY_mI35_mI30__589->SetBinContent(312,1.221607);
   ThetaY_mI35_mI30__589->SetBinContent(313,1.239464);
   ThetaY_mI35_mI30__589->SetBinContent(314,1.246964);
   ThetaY_mI35_mI30__589->SetBinContent(315,1.215357);
   ThetaY_mI35_mI30__589->SetBinContent(316,1.223571);
   ThetaY_mI35_mI30__589->SetBinContent(317,1.2175);
   ThetaY_mI35_mI30__589->SetBinContent(318,1.221964);
   ThetaY_mI35_mI30__589->SetBinContent(319,1.232679);
   ThetaY_mI35_mI30__589->SetBinContent(320,1.212321);
   ThetaY_mI35_mI30__589->SetBinContent(321,1.17);
   ThetaY_mI35_mI30__589->SetBinContent(322,1.080357);
   ThetaY_mI35_mI30__589->SetBinContent(323,1);
   ThetaY_mI35_mI30__589->SetBinContent(324,0.8416071);
   ThetaY_mI35_mI30__589->SetBinContent(325,0.6255357);
   ThetaY_mI35_mI30__589->SetBinContent(326,0.2898214);
   ThetaY_mI35_mI30__589->SetBinContent(327,0.06535714);
   ThetaY_mI35_mI30__589->SetBinContent(328,0.0005357143);
   ThetaY_mI35_mI30__589->SetBinError(303,0.0004724556);
   ThetaY_mI35_mI30__589->SetBinError(304,0.003392857);
   ThetaY_mI35_mI30__589->SetBinError(305,0.007138391);
   ThetaY_mI35_mI30__589->SetBinError(306,0.01057348);
   ThetaY_mI35_mI30__589->SetBinError(307,0.01233953);
   ThetaY_mI35_mI30__589->SetBinError(308,0.01337856);
   ThetaY_mI35_mI30__589->SetBinError(309,0.0141489);
   ThetaY_mI35_mI30__589->SetBinError(310,0.01441902);
   ThetaY_mI35_mI30__589->SetBinError(311,0.01472646);
   ThetaY_mI35_mI30__589->SetBinError(312,0.0147697);
   ThetaY_mI35_mI30__589->SetBinError(313,0.01487726);
   ThetaY_mI35_mI30__589->SetBinError(314,0.0149222);
   ThetaY_mI35_mI30__589->SetBinError(315,0.01473187);
   ThetaY_mI35_mI30__589->SetBinError(316,0.01478157);
   ThetaY_mI35_mI30__589->SetBinError(317,0.01474485);
   ThetaY_mI35_mI30__589->SetBinError(318,0.01477186);
   ThetaY_mI35_mI30__589->SetBinError(319,0.01483648);
   ThetaY_mI35_mI30__589->SetBinError(320,0.01471346);
   ThetaY_mI35_mI30__589->SetBinError(321,0.01445436);
   ThetaY_mI35_mI30__589->SetBinError(322,0.0138896);
   ThetaY_mI35_mI30__589->SetBinError(323,0.01336306);
   ThetaY_mI35_mI30__589->SetBinError(324,0.01225916);
   ThetaY_mI35_mI30__589->SetBinError(325,0.01056895);
   ThetaY_mI35_mI30__589->SetBinError(326,0.007194013);
   ThetaY_mI35_mI30__589->SetBinError(327,0.003416273);
   ThetaY_mI35_mI30__589->SetBinError(328,0.0003092948);
   ThetaY_mI35_mI30__589->SetEntries(125645);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__589->SetLineColor(ci);
   ThetaY_mI35_mI30__589->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__589->SetMarkerColor(ci);
   ThetaY_mI35_mI30__589->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__589->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__589->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__589->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__589->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__589->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__589->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__589->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__589->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__589->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__589->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__589->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__589->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__589->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__589->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__589->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__589->Draw("AEsame");
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
   
   Double_t _fx3197[26] = {
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
   62.5};
   Double_t _fy3197[26] = {
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
   0.01792889,
   0.320779,
   0.8045189,
   0.8354414,
   0.6935889,
   0.7819832,
   0.7211035,
   0.8248638,
   0.4748338,
   0.7816345,
   1,
   0.9505623,
   0.7460272,
   0.9201068,
   0.6800243,
   0};
   Double_t _felx3197[26] = {
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
   Double_t _fely3197[26] = {
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
   0.01483202,
   0.07499142,
   0.1212045,
   0.1231323,
   0.1123215,
   0.11915,
   0.1138584,
   0.1229014,
   0.0945004,
   0.1266232,
   0.1490979,
   0.1582728,
   0.1619522,
   0.2627607,
   0.439984,
   0};
   Double_t _fehx3197[26] = {
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
   Double_t _fehy3197[26] = {
   37.43671,
   0.6362607,
   0.1434524,
   0.06536368,
   0.04798934,
   0.04082353,
   0.03649865,
   0.03514375,
   0.03369151,
   0.03349448,
   0.04123777,
   0.09498427,
   0.1410221,
   0.1427918,
   0.1321907,
   0.1388726,
   0.1334502,
   0.1427567,
   0.1154979,
   0.1490337,
   0.1732089,
   0.1871481,
   0.2016647,
   0.3514092,
   0.9025948,
   105.43};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3197,_fy3197,_felx3197,_fehx3197,_fely3197,_fehy3197);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3197 = new TH1F("Graph_Graph3197","",100,-100,100);
   Graph_Graph3197->SetMinimum(0);
   Graph_Graph3197->SetMaximum(1.5);
   Graph_Graph3197->SetDirectory(0);
   Graph_Graph3197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3197->SetLineColor(ci);
   Graph_Graph3197->GetXaxis()->SetRange(1,100);
   Graph_Graph3197->GetXaxis()->CenterTitle(true);
   Graph_Graph3197->GetXaxis()->SetLabelFont(42);
   Graph_Graph3197->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3197->GetXaxis()->SetTitleFont(42);
   Graph_Graph3197->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3197->GetYaxis()->CenterTitle(true);
   Graph_Graph3197->GetYaxis()->SetLabelFont(42);
   Graph_Graph3197->GetYaxis()->SetTitleFont(42);
   Graph_Graph3197->GetZaxis()->SetLabelFont(42);
   Graph_Graph3197->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3197->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3197);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.371661,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__590 = new TH2D("ThetaY_vs_Y_mI35_mI30__590","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(7884,7);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(7910,361);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(7936,1598);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(7962,3506);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(7988,4775);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8014,5613);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8040,6278);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8066,6520);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8092,6801);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8118,6841);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8144,6941);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8170,6983);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8196,6806);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8222,6852);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8248,6818);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8274,6843);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8300,6903);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8326,6789);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8352,6552);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8378,6050);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8404,5600);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8430,4713);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8456,3503);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8482,1623);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8508,366);
   ThetaY_vs_Y_mI35_mI30__590->SetBinContent(8534,3);
   ThetaY_vs_Y_mI35_mI30__590->SetEntries(125645);
   ThetaY_vs_Y_mI35_mI30__590->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(1,349.15);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(2,698.3);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(3,1047.45);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(4,1396.6);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(5,1745.75);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(6,2094.9);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(7,2444.05);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(8,2793.2);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(9,3142.35);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(10,3491.5);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(11,3840.65);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(12,4189.8);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(13,4538.95);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(14,4888.1);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(15,5237.25);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(16,5586.4);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(17,5935.55);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(18,6284.7);
   ThetaY_vs_Y_mI35_mI30__590->SetContourLevel(19,6633.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__590->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__590->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__590->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__590->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__590->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__590->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__590->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__590->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__590->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__590->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__590->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__590->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__590->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__590->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__590->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__590->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
