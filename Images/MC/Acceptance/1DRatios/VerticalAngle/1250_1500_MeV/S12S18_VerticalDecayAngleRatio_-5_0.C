void S12S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06717441,125,1.276314);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI5_0__1005 = new TH1D("S12S18_ThetaY_mI5_0__1005","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(309,0.002528445);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(310,0.1289507);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(311,0.585335);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(312,0.8836915);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(313,0.9228824);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(314,1.005057);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(315,0.9848293);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(316,1.016435);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(317,0.9785082);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(318,1);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(319,0.9064475);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(320,0.7231353);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(321,0.2920354);
   S12S18_ThetaY_mI5_0__1005->SetBinContent(322,0.04171934);
   S12S18_ThetaY_mI5_0__1005->SetBinError(309,0.001787881);
   S12S18_ThetaY_mI5_0__1005->SetBinError(310,0.01276802);
   S12S18_ThetaY_mI5_0__1005->SetBinError(311,0.02720283);
   S12S18_ThetaY_mI5_0__1005->SetBinError(312,0.03342428);
   S12S18_ThetaY_mI5_0__1005->SetBinError(313,0.03415741);
   S12S18_ThetaY_mI5_0__1005->SetBinError(314,0.03564569);
   S12S18_ThetaY_mI5_0__1005->SetBinError(315,0.03528517);
   S12S18_ThetaY_mI5_0__1005->SetBinError(316,0.03584689);
   S12S18_ThetaY_mI5_0__1005->SetBinError(317,0.03517175);
   S12S18_ThetaY_mI5_0__1005->SetBinError(318,0.03555591);
   S12S18_ThetaY_mI5_0__1005->SetBinError(319,0.0338519);
   S12S18_ThetaY_mI5_0__1005->SetBinError(320,0.0302358);
   S12S18_ThetaY_mI5_0__1005->SetBinError(321,0.01921452);
   S12S18_ThetaY_mI5_0__1005->SetBinError(322,0.007262405);
   S12S18_ThetaY_mI5_0__1005->SetMinimum(0);
   S12S18_ThetaY_mI5_0__1005->SetMaximum(1.141965);
   S12S18_ThetaY_mI5_0__1005->SetEntries(7492);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1005->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__1005->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1005->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__1005->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__1005->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__1005->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1005->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1005->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1005->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__1005->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__1005->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1005->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1005->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1005->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1005->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1005->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1006 = new TH1D("ThetaY_mI5_0__1006","",630,-1575,1575);
   ThetaY_mI5_0__1006->SetBinContent(307,0.005781347);
   ThetaY_mI5_0__1006->SetBinContent(308,0.1842588);
   ThetaY_mI5_0__1006->SetBinContent(309,0.5298761);
   ThetaY_mI5_0__1006->SetBinContent(310,0.734283);
   ThetaY_mI5_0__1006->SetBinContent(311,0.866077);
   ThetaY_mI5_0__1006->SetBinContent(312,0.9570207);
   ThetaY_mI5_0__1006->SetBinContent(313,0.9903413);
   ThetaY_mI5_0__1006->SetBinContent(314,1.025185);
   ThetaY_mI5_0__1006->SetBinContent(315,1.034013);
   ThetaY_mI5_0__1006->SetBinContent(316,1.03815);
   ThetaY_mI5_0__1006->SetBinContent(317,1.03519);
   ThetaY_mI5_0__1006->SetBinContent(318,1);
   ThetaY_mI5_0__1006->SetBinContent(319,0.9567611);
   ThetaY_mI5_0__1006->SetBinContent(320,0.8747663);
   ThetaY_mI5_0__1006->SetBinContent(321,0.7289517);
   ThetaY_mI5_0__1006->SetBinContent(322,0.5229523);
   ThetaY_mI5_0__1006->SetBinContent(323,0.1834106);
   ThetaY_mI5_0__1006->SetBinContent(324,0.005971751);
   ThetaY_mI5_0__1006->SetBinError(307,0.0003163413);
   ThetaY_mI5_0__1006->SetBinError(308,0.001785893);
   ThetaY_mI5_0__1006->SetBinError(309,0.003028506);
   ThetaY_mI5_0__1006->SetBinError(310,0.003565111);
   ThetaY_mI5_0__1006->SetBinError(311,0.003871859);
   ThetaY_mI5_0__1006->SetBinError(312,0.004070071);
   ThetaY_mI5_0__1006->SetBinError(313,0.004140319);
   ThetaY_mI5_0__1006->SetBinError(314,0.004212525);
   ThetaY_mI5_0__1006->SetBinError(315,0.004230623);
   ThetaY_mI5_0__1006->SetBinError(316,0.004239077);
   ThetaY_mI5_0__1006->SetBinError(317,0.00423303);
   ThetaY_mI5_0__1006->SetBinError(318,0.004160459);
   ThetaY_mI5_0__1006->SetBinError(319,0.004069519);
   ThetaY_mI5_0__1006->SetBinError(320,0.003891234);
   ThetaY_mI5_0__1006->SetBinError(321,0.003552145);
   ThetaY_mI5_0__1006->SetBinError(322,0.003008655);
   ThetaY_mI5_0__1006->SetBinError(323,0.001781778);
   ThetaY_mI5_0__1006->SetBinError(324,0.0003215083);
   ThetaY_mI5_0__1006->SetEntries(732144);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1006->SetLineColor(ci);
   ThetaY_mI5_0__1006->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1006->SetMarkerColor(ci);
   ThetaY_mI5_0__1006->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1006->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1006->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1006->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1006->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1006->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1006->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1006->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1006->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1006->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1006->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1006->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1006->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1006->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1006->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1006->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1006->Draw("AEsame");
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
   
   Double_t _fx3336[18] = {
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
   Double_t _fy3336[18] = {
   0,
   0,
   0.004771767,
   0.1756144,
   0.6758464,
   0.9233777,
   0.9318832,
   0.9803662,
   0.9524342,
   0.9790829,
   0.945245,
   1,
   0.9474127,
   0.8266611,
   0.4006238,
   0.07977657,
   0,
   0};
   Double_t _felx3336[18] = {
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
   Double_t _fely3336[18] = {
   0,
   0,
   0.003082182,
   0.01738053,
   0.03154254,
   0.03513672,
   0.03470164,
   0.03499494,
   0.03433863,
   0.03475276,
   0.03418762,
   0.03579063,
   0.03560191,
   0.03474901,
   0.02641187,
   0.01382391,
   0,
   0};
   Double_t _fehx3336[18] = {
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
   Double_t _fehy3336[18] = {
   0.4036926,
   0.01263257,
   0.006294102,
   0.01919255,
   0.03305084,
   0.03650056,
   0.0360192,
   0.03626759,
   0.03560015,
   0.03600937,
   0.03544766,
   0.03709575,
   0.03696624,
   0.03624204,
   0.02821395,
   0.01645585,
   0.01269099,
   0.3907869};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3336,_fy3336,_felx3336,_fehx3336,_fely3336,_fehy3336);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3336 = new TH1F("Graph_Graph3336","",100,-100,100);
   Graph_Graph3336->SetMinimum(0);
   Graph_Graph3336->SetMaximum(1.5);
   Graph_Graph3336->SetDirectory(0);
   Graph_Graph3336->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3336->SetLineColor(ci);
   Graph_Graph3336->GetXaxis()->SetRange(1,100);
   Graph_Graph3336->GetXaxis()->CenterTitle(true);
   Graph_Graph3336->GetXaxis()->SetLabelFont(42);
   Graph_Graph3336->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3336->GetXaxis()->SetTitleFont(42);
   Graph_Graph3336->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3336->GetYaxis()->CenterTitle(true);
   Graph_Graph3336->GetYaxis()->SetLabelFont(42);
   Graph_Graph3336->GetYaxis()->SetTitleFont(42);
   Graph_Graph3336->GetZaxis()->SetLabelFont(42);
   Graph_Graph3336->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3336->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3336);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.141965,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1007 = new TH2D("ThetaY_vs_Y_mI5_0__1007","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(7994,334);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8020,10645);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8046,30612);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8072,42421);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8098,50035);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8124,55289);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8150,57214);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8176,59227);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8202,59737);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8228,59976);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8254,59805);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8280,57772);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8306,55274);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8332,50537);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8358,42113);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8384,30212);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8410,10596);
   ThetaY_vs_Y_mI5_0__1007->SetBinContent(8436,345);
   ThetaY_vs_Y_mI5_0__1007->SetEntries(732144);
   ThetaY_vs_Y_mI5_0__1007->SetContour(20);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(1,2998.8);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(2,5997.6);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(3,8996.4);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(4,11995.2);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(5,14994);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(6,17992.8);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(7,20991.6);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(8,23990.4);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(9,26989.2);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(10,29988);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(11,32986.8);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(12,35985.6);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(13,38984.4);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(14,41983.2);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(15,44982);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(16,47980.8);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(17,50979.6);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(18,53978.4);
   ThetaY_vs_Y_mI5_0__1007->SetContourLevel(19,56977.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1007->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1007->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1007->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1007->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1007->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1007->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1007->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1007->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1007->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1007->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1007->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1007->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1007->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1007->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1007->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1007->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-5_0","Reco vertices","lpf");
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
