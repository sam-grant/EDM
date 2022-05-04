void S18_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.06662301,125,1.265837);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__618 = new TH1D("S18_ThetaY_15_20__618","",630,-1575,1575);
   S18_ThetaY_15_20__618->SetBinContent(304,0.005555556);
   S18_ThetaY_15_20__618->SetBinContent(305,0.07222222);
   S18_ThetaY_15_20__618->SetBinContent(306,0.2833333);
   S18_ThetaY_15_20__618->SetBinContent(307,0.5);
   S18_ThetaY_15_20__618->SetBinContent(308,0.7277778);
   S18_ThetaY_15_20__618->SetBinContent(309,0.9111111);
   S18_ThetaY_15_20__618->SetBinContent(310,0.75);
   S18_ThetaY_15_20__618->SetBinContent(311,1);
   S18_ThetaY_15_20__618->SetBinContent(312,0.9666667);
   S18_ThetaY_15_20__618->SetBinContent(313,0.9888889);
   S18_ThetaY_15_20__618->SetBinContent(314,0.8944444);
   S18_ThetaY_15_20__618->SetBinContent(315,0.8111111);
   S18_ThetaY_15_20__618->SetBinContent(316,0.8888889);
   S18_ThetaY_15_20__618->SetBinContent(317,0.8611111);
   S18_ThetaY_15_20__618->SetBinContent(318,0.9944444);
   S18_ThetaY_15_20__618->SetBinContent(319,0.6111111);
   S18_ThetaY_15_20__618->SetBinContent(320,0.1388889);
   S18_ThetaY_15_20__618->SetBinError(304,0.005555556);
   S18_ThetaY_15_20__618->SetBinError(305,0.02003084);
   S18_ThetaY_15_20__618->SetBinError(306,0.0396746);
   S18_ThetaY_15_20__618->SetBinError(307,0.05270463);
   S18_ThetaY_15_20__618->SetBinError(308,0.06358624);
   S18_ThetaY_15_20__618->SetBinError(309,0.07114582);
   S18_ThetaY_15_20__618->SetBinError(310,0.06454972);
   S18_ThetaY_15_20__618->SetBinError(311,0.0745356);
   S18_ThetaY_15_20__618->SetBinError(312,0.07328281);
   S18_ThetaY_15_20__618->SetBinError(313,0.07412036);
   S18_ThetaY_15_20__618->SetBinError(314,0.0704921);
   S18_ThetaY_15_20__618->SetBinError(315,0.06712803);
   S18_ThetaY_15_20__618->SetBinError(316,0.07027284);
   S18_ThetaY_15_20__618->SetBinError(317,0.06916611);
   S18_ThetaY_15_20__618->SetBinError(318,0.07432827);
   S18_ThetaY_15_20__618->SetBinError(319,0.05826716);
   S18_ThetaY_15_20__618->SetBinError(320,0.02777778);
   S18_ThetaY_15_20__618->SetMinimum(0);
   S18_ThetaY_15_20__618->SetMaximum(1.132591);
   S18_ThetaY_15_20__618->SetEntries(2053);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__618->SetLineColor(ci);
   S18_ThetaY_15_20__618->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__618->SetMarkerColor(ci);
   S18_ThetaY_15_20__618->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__618->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__618->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__618->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__618->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__618->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__618->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__618->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__618->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__618->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__618->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__618->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__618->Draw("AE");
   
   TH1D *ThetaY_15_20__619 = new TH1D("ThetaY_15_20__619","",630,-1575,1575);
   ThetaY_15_20__619->SetBinContent(303,0.0006008261);
   ThetaY_15_20__619->SetBinContent(304,0.05208412);
   ThetaY_15_20__619->SetBinContent(305,0.2466391);
   ThetaY_15_20__619->SetBinContent(306,0.5241833);
   ThetaY_15_20__619->SetBinContent(307,0.709463);
   ThetaY_15_20__619->SetBinContent(308,0.8366504);
   ThetaY_15_20__619->SetBinContent(309,0.922531);
   ThetaY_15_20__619->SetBinContent(310,0.9747278);
   ThetaY_15_20__619->SetBinContent(311,1);
   ThetaY_15_20__619->SetBinContent(312,1.018551);
   ThetaY_15_20__619->SetBinContent(313,1.013594);
   ThetaY_15_20__619->SetBinContent(314,1.029628);
   ThetaY_15_20__619->SetBinContent(315,1.019414);
   ThetaY_15_20__619->SetBinContent(316,1.01472);
   ThetaY_15_20__619->SetBinContent(317,1.015584);
   ThetaY_15_20__619->SetBinContent(318,1.014457);
   ThetaY_15_20__619->SetBinContent(319,1.027075);
   ThetaY_15_20__619->SetBinContent(320,1.002929);
   ThetaY_15_20__619->SetBinContent(321,0.9765678);
   ThetaY_15_20__619->SetBinContent(322,0.9331956);
   ThetaY_15_20__619->SetBinContent(323,0.8331956);
   ThetaY_15_20__619->SetBinContent(324,0.7140443);
   ThetaY_15_20__619->SetBinContent(325,0.5157717);
   ThetaY_15_20__619->SetBinContent(326,0.2435974);
   ThetaY_15_20__619->SetBinContent(327,0.0506196);
   ThetaY_15_20__619->SetBinContent(328,0.000413068);
   ThetaY_15_20__619->SetBinError(303,0.0001502065);
   ThetaY_15_20__619->SetBinError(304,0.001398515);
   ThetaY_15_20__619->SetBinError(305,0.003043304);
   ThetaY_15_20__619->SetBinError(306,0.004436658);
   ThetaY_15_20__619->SetBinError(307,0.00516154);
   ThetaY_15_20__619->SetBinError(308,0.00560514);
   ThetaY_15_20__619->SetBinError(309,0.005885792);
   ThetaY_15_20__619->SetBinError(310,0.00605001);
   ThetaY_15_20__619->SetBinError(311,0.006127939);
   ThetaY_15_20__619->SetBinError(312,0.006184516);
   ThetaY_15_20__619->SetBinError(313,0.006169449);
   ThetaY_15_20__619->SetBinError(314,0.006218056);
   ThetaY_15_20__619->SetBinError(315,0.006187137);
   ThetaY_15_20__619->SetBinError(316,0.006172876);
   ThetaY_15_20__619->SetBinError(317,0.006175503);
   ThetaY_15_20__619->SetBinError(318,0.006172077);
   ThetaY_15_20__619->SetBinError(319,0.006210341);
   ThetaY_15_20__619->SetBinError(320,0.006136907);
   ThetaY_15_20__619->SetBinError(321,0.006055718);
   ThetaY_15_20__619->SetBinError(322,0.005919715);
   ThetaY_15_20__619->SetBinError(323,0.005593555);
   ThetaY_15_20__619->SetBinError(324,0.005178178);
   ThetaY_15_20__619->SetBinError(325,0.004400917);
   ThetaY_15_20__619->SetBinError(326,0.00302448);
   ThetaY_15_20__619->SetBinError(327,0.001378713);
   ThetaY_15_20__619->SetBinError(328,0.0001245447);
   ThetaY_15_20__619->SetEntries(497721);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__619->SetLineColor(ci);
   ThetaY_15_20__619->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__619->SetMarkerColor(ci);
   ThetaY_15_20__619->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__619->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__619->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__619->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__619->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__619->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__619->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__619->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__619->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__619->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__619->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__619->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__619->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__619->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__619->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__619->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__619->Draw("AEsame");
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
   
   Double_t _fx3207[26] = {
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
   Double_t _fy3207[26] = {
   0,
   0.1066651,
   0.2928255,
   0.5405234,
   0.7047584,
   0.8698708,
   0.9876212,
   0.7694456,
   1,
   0.9490611,
   0.9756265,
   0.8687062,
   0.7956639,
   0.875994,
   0.8478975,
   0.9802723,
   0.5950016,
   0.1384833,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3207[26] = {
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
   Double_t _fely3207[26] = {
   0,
   0.0882504,
   0.08023276,
   0.07557451,
   0.0743243,
   0.07612504,
   0.07729678,
   0.06631178,
   0.07471622,
   0.07210786,
   0.07329676,
   0.06859179,
   0.06594961,
   0.06938427,
   0.06822471,
   0.07344132,
   0.05675762,
   0.02752256,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3207[26] = {
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
   Double_t _fehy3207[26] = {
   18.0411,
   0.245571,
   0.1059555,
   0.08696566,
   0.08261305,
   0.08310115,
   0.08360029,
   0.07229139,
   0.08052179,
   0.07780913,
   0.07902462,
   0.07423668,
   0.071659,
   0.07511309,
   0.07395102,
   0.0791639,
   0.06245066,
   0.03362439,
   0.01047368,
   0.01096049,
   0.01227602,
   0.01432459,
   0.01983161,
   0.04199284,
   0.2021921,
   26.95347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3207,_fy3207,_felx3207,_fehx3207,_fely3207,_fehy3207);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3207 = new TH1F("Graph_Graph3207","",100,-100,100);
   Graph_Graph3207->SetMinimum(0);
   Graph_Graph3207->SetMaximum(1.5);
   Graph_Graph3207->SetDirectory(0);
   Graph_Graph3207->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3207->SetLineColor(ci);
   Graph_Graph3207->GetXaxis()->SetRange(1,100);
   Graph_Graph3207->GetXaxis()->CenterTitle(true);
   Graph_Graph3207->GetXaxis()->SetLabelFont(42);
   Graph_Graph3207->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3207->GetXaxis()->SetTitleFont(42);
   Graph_Graph3207->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3207->GetYaxis()->CenterTitle(true);
   Graph_Graph3207->GetYaxis()->SetLabelFont(42);
   Graph_Graph3207->GetYaxis()->SetTitleFont(42);
   Graph_Graph3207->GetZaxis()->SetLabelFont(42);
   Graph_Graph3207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3207->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3207);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.132591,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__620 = new TH2D("ThetaY_vs_Y_15_20__620","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__620->SetBinContent(7894,16);
   ThetaY_vs_Y_15_20__620->SetBinContent(7920,1387);
   ThetaY_vs_Y_15_20__620->SetBinContent(7946,6568);
   ThetaY_vs_Y_15_20__620->SetBinContent(7972,13959);
   ThetaY_vs_Y_15_20__620->SetBinContent(7998,18893);
   ThetaY_vs_Y_15_20__620->SetBinContent(8024,22280);
   ThetaY_vs_Y_15_20__620->SetBinContent(8050,24567);
   ThetaY_vs_Y_15_20__620->SetBinContent(8076,25957);
   ThetaY_vs_Y_15_20__620->SetBinContent(8102,26630);
   ThetaY_vs_Y_15_20__620->SetBinContent(8128,27124);
   ThetaY_vs_Y_15_20__620->SetBinContent(8154,26992);
   ThetaY_vs_Y_15_20__620->SetBinContent(8180,27419);
   ThetaY_vs_Y_15_20__620->SetBinContent(8206,27147);
   ThetaY_vs_Y_15_20__620->SetBinContent(8232,27022);
   ThetaY_vs_Y_15_20__620->SetBinContent(8258,27045);
   ThetaY_vs_Y_15_20__620->SetBinContent(8284,27015);
   ThetaY_vs_Y_15_20__620->SetBinContent(8310,27351);
   ThetaY_vs_Y_15_20__620->SetBinContent(8336,26708);
   ThetaY_vs_Y_15_20__620->SetBinContent(8362,26006);
   ThetaY_vs_Y_15_20__620->SetBinContent(8388,24851);
   ThetaY_vs_Y_15_20__620->SetBinContent(8414,22188);
   ThetaY_vs_Y_15_20__620->SetBinContent(8440,19015);
   ThetaY_vs_Y_15_20__620->SetBinContent(8466,13735);
   ThetaY_vs_Y_15_20__620->SetBinContent(8492,6487);
   ThetaY_vs_Y_15_20__620->SetBinContent(8518,1348);
   ThetaY_vs_Y_15_20__620->SetBinContent(8544,11);
   ThetaY_vs_Y_15_20__620->SetEntries(497721);
   ThetaY_vs_Y_15_20__620->SetContour(20);
   ThetaY_vs_Y_15_20__620->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__620->SetContourLevel(1,1370.95);
   ThetaY_vs_Y_15_20__620->SetContourLevel(2,2741.9);
   ThetaY_vs_Y_15_20__620->SetContourLevel(3,4112.85);
   ThetaY_vs_Y_15_20__620->SetContourLevel(4,5483.8);
   ThetaY_vs_Y_15_20__620->SetContourLevel(5,6854.75);
   ThetaY_vs_Y_15_20__620->SetContourLevel(6,8225.7);
   ThetaY_vs_Y_15_20__620->SetContourLevel(7,9596.65);
   ThetaY_vs_Y_15_20__620->SetContourLevel(8,10967.6);
   ThetaY_vs_Y_15_20__620->SetContourLevel(9,12338.55);
   ThetaY_vs_Y_15_20__620->SetContourLevel(10,13709.5);
   ThetaY_vs_Y_15_20__620->SetContourLevel(11,15080.45);
   ThetaY_vs_Y_15_20__620->SetContourLevel(12,16451.4);
   ThetaY_vs_Y_15_20__620->SetContourLevel(13,17822.35);
   ThetaY_vs_Y_15_20__620->SetContourLevel(14,19193.3);
   ThetaY_vs_Y_15_20__620->SetContourLevel(15,20564.25);
   ThetaY_vs_Y_15_20__620->SetContourLevel(16,21935.2);
   ThetaY_vs_Y_15_20__620->SetContourLevel(17,23306.15);
   ThetaY_vs_Y_15_20__620->SetContourLevel(18,24677.1);
   ThetaY_vs_Y_15_20__620->SetContourLevel(19,26048.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__620->SetLineColor(ci);
   ThetaY_vs_Y_15_20__620->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__620->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__620->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__620->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__620->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__620->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__620->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__620->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__620->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__620->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__620->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__620->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__620->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__620->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__620->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
