void S12S18_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06645711,125,1.262685);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI5_0__663 = new TH1D("S12S18_ThetaY_mI5_0__663","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__663->SetBinContent(307,0.006525285);
   S12S18_ThetaY_mI5_0__663->SetBinContent(308,0.0766721);
   S12S18_ThetaY_mI5_0__663->SetBinContent(309,0.3458401);
   S12S18_ThetaY_mI5_0__663->SetBinContent(310,0.8597064);
   S12S18_ThetaY_mI5_0__663->SetBinContent(311,1);
   S12S18_ThetaY_mI5_0__663->SetBinContent(312,0.9869494);
   S12S18_ThetaY_mI5_0__663->SetBinContent(313,1.016313);
   S12S18_ThetaY_mI5_0__663->SetBinContent(314,1.017945);
   S12S18_ThetaY_mI5_0__663->SetBinContent(315,0.9575856);
   S12S18_ThetaY_mI5_0__663->SetBinContent(316,0.9869494);
   S12S18_ThetaY_mI5_0__663->SetBinContent(317,1.022838);
   S12S18_ThetaY_mI5_0__663->SetBinContent(318,0.9885808);
   S12S18_ThetaY_mI5_0__663->SetBinContent(319,0.9608483);
   S12S18_ThetaY_mI5_0__663->SetBinContent(320,0.9608483);
   S12S18_ThetaY_mI5_0__663->SetBinContent(321,0.9070147);
   S12S18_ThetaY_mI5_0__663->SetBinContent(322,0.5464927);
   S12S18_ThetaY_mI5_0__663->SetBinContent(323,0.2495922);
   S12S18_ThetaY_mI5_0__663->SetBinContent(324,0.02446982);
   S12S18_ThetaY_mI5_0__663->SetBinContent(325,0.001631321);
   S12S18_ThetaY_mI5_0__663->SetBinError(307,0.003262643);
   S12S18_ThetaY_mI5_0__663->SetBinError(308,0.01118378);
   S12S18_ThetaY_mI5_0__663->SetBinError(309,0.0237524);
   S12S18_ThetaY_mI5_0__663->SetBinError(310,0.0374494);
   S12S18_ThetaY_mI5_0__663->SetBinError(311,0.04038962);
   S12S18_ThetaY_mI5_0__663->SetBinError(312,0.0401252);
   S12S18_ThetaY_mI5_0__663->SetBinError(313,0.04071773);
   S12S18_ThetaY_mI5_0__663->SetBinError(314,0.04075039);
   S12S18_ThetaY_mI5_0__663->SetBinError(315,0.03952379);
   S12S18_ThetaY_mI5_0__663->SetBinError(316,0.0401252);
   S12S18_ThetaY_mI5_0__663->SetBinError(317,0.04084823);
   S12S18_ThetaY_mI5_0__663->SetBinError(318,0.04015835);
   S12S18_ThetaY_mI5_0__663->SetBinError(319,0.03959106);
   S12S18_ThetaY_mI5_0__663->SetBinError(320,0.03959106);
   S12S18_ThetaY_mI5_0__663->SetBinError(321,0.03846599);
   S12S18_ThetaY_mI5_0__663->SetBinError(322,0.02985808);
   S12S18_ThetaY_mI5_0__663->SetBinError(323,0.02017833);
   S12S18_ThetaY_mI5_0__663->SetBinError(324,0.00631808);
   S12S18_ThetaY_mI5_0__663->SetBinError(325,0.001631321);
   S12S18_ThetaY_mI5_0__663->SetMinimum(0);
   S12S18_ThetaY_mI5_0__663->SetMaximum(1.129771);
   S12S18_ThetaY_mI5_0__663->SetEntries(7918);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__663->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__663->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__663->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__663->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__663->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__663->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__663->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__663->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__663->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__663->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__663->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__663->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__663->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__663->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__663->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__663->Draw("AE");
   
   TH1D *ThetaY_mI5_0__664 = new TH1D("ThetaY_mI5_0__664","",630,-1575,1575);
   ThetaY_mI5_0__664->SetBinContent(303,0.0004128819);
   ThetaY_mI5_0__664->SetBinContent(304,0.05398431);
   ThetaY_mI5_0__664->SetBinContent(305,0.2472543);
   ThetaY_mI5_0__664->SetBinContent(306,0.5174649);
   ThetaY_mI5_0__664->SetBinContent(307,0.7078035);
   ThetaY_mI5_0__664->SetBinContent(308,0.8406689);
   ThetaY_mI5_0__664->SetBinContent(309,0.9261354);
   ThetaY_mI5_0__664->SetBinContent(310,0.9720685);
   ThetaY_mI5_0__664->SetBinContent(311,1);
   ThetaY_mI5_0__664->SetBinContent(312,1.014327);
   ThetaY_mI5_0__664->SetBinContent(313,1.022048);
   ThetaY_mI5_0__664->SetBinContent(314,1.018415);
   ThetaY_mI5_0__664->SetBinContent(315,1.019055);
   ThetaY_mI5_0__664->SetBinContent(316,1.01026);
   ThetaY_mI5_0__664->SetBinContent(317,1.027064);
   ThetaY_mI5_0__664->SetBinContent(318,1.019178);
   ThetaY_mI5_0__664->SetBinContent(319,1.020995);
   ThetaY_mI5_0__664->SetBinContent(320,1.003365);
   ThetaY_mI5_0__664->SetBinContent(321,0.9739059);
   ThetaY_mI5_0__664->SetBinContent(322,0.9169282);
   ThetaY_mI5_0__664->SetBinContent(323,0.8365607);
   ThetaY_mI5_0__664->SetBinContent(324,0.7038398);
   ThetaY_mI5_0__664->SetBinContent(325,0.5223163);
   ThetaY_mI5_0__664->SetBinContent(326,0.2454583);
   ThetaY_mI5_0__664->SetBinContent(327,0.05284889);
   ThetaY_mI5_0__664->SetBinContent(328,0.0002890173);
   ThetaY_mI5_0__664->SetBinError(303,9.23232e-05);
   ThetaY_mI5_0__664->SetBinError(304,0.001055679);
   ThetaY_mI5_0__664->SetBinError(305,0.002259279);
   ThetaY_mI5_0__664->SetBinError(306,0.003268424);
   ThetaY_mI5_0__664->SetBinError(307,0.00382256);
   ThetaY_mI5_0__664->SetBinError(308,0.004165915);
   ThetaY_mI5_0__664->SetBinError(309,0.004372554);
   ThetaY_mI5_0__664->SetBinError(310,0.004479674);
   ThetaY_mI5_0__664->SetBinError(311,0.004543577);
   ThetaY_mI5_0__664->SetBinError(312,0.00457601);
   ThetaY_mI5_0__664->SetBinError(313,0.004593392);
   ThetaY_mI5_0__664->SetBinError(314,0.004585221);
   ThetaY_mI5_0__664->SetBinError(315,0.004586661);
   ThetaY_mI5_0__664->SetBinError(316,0.004566827);
   ThetaY_mI5_0__664->SetBinError(317,0.004604652);
   ThetaY_mI5_0__664->SetBinError(318,0.00458694);
   ThetaY_mI5_0__664->SetBinError(319,0.004591026);
   ThetaY_mI5_0__664->SetBinError(320,0.004551216);
   ThetaY_mI5_0__664->SetBinError(321,0.004483905);
   ThetaY_mI5_0__664->SetBinError(322,0.004350765);
   ThetaY_mI5_0__664->SetBinError(323,0.004155724);
   ThetaY_mI5_0__664->SetBinError(324,0.003811842);
   ThetaY_mI5_0__664->SetBinError(325,0.003283709);
   ThetaY_mI5_0__664->SetBinError(326,0.002251059);
   ThetaY_mI5_0__664->SetBinError(327,0.001044518);
   ThetaY_mI5_0__664->SetBinError(328,7.724313e-05);
   ThetaY_mI5_0__664->SetEntries(904503);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__664->SetLineColor(ci);
   ThetaY_mI5_0__664->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__664->SetMarkerColor(ci);
   ThetaY_mI5_0__664->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__664->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__664->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__664->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__664->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__664->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__664->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__664->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__664->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__664->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__664->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__664->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__664->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__664->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__664->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__664->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__664->Draw("AEsame");
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
   
   Double_t _fx3222[26] = {
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
   Double_t _fy3222[26] = {
   0,
   0,
   0,
   0,
   0.009219064,
   0.09120369,
   0.3734229,
   0.8844092,
   1,
   0.9730091,
   0.994389,
   0.9995385,
   0.9396805,
   0.9769261,
   0.9958854,
   0.9699782,
   0.9410901,
   0.9576259,
   0.9313166,
   0.5960038,
   0.2983551,
   0.03476618,
   0.003123244,
   0,
   0,
   0};
   Double_t _felx3222[26] = {
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
   Double_t _fely3222[26] = {
   0,
   0,
   0,
   0,
   0.004412308,
   0.01326341,
   0.02568676,
   0.03872778,
   0.04063289,
   0.03978986,
   0.04007809,
   0.04025466,
   0.0390032,
   0.03995102,
   0.04001061,
   0.03963244,
   0.03899571,
   0.039685,
   0.03971634,
   0.03266907,
   0.02413936,
   0.008877361,
   0.002583712,
   0,
   0,
   0};
   Double_t _fehx3222[26] = {
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
   Double_t _fehy3222[26] = {
   7.61929,
   0.05565238,
   0.01214753,
   0.005804081,
   0.007290167,
   0.01534864,
   0.02751813,
   0.04046281,
   0.04231933,
   0.04145211,
   0.04172775,
   0.04191029,
   0.04065753,
   0.04162004,
   0.04165214,
   0.04128669,
   0.04064687,
   0.04136553,
   0.04144816,
   0.03451159,
   0.0261768,
   0.01149646,
   0.007182452,
   0.01223642,
   0.05684847,
   11.10561};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3222,_fy3222,_felx3222,_fehx3222,_fely3222,_fehy3222);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3222 = new TH1F("Graph_Graph3222","",100,-100,100);
   Graph_Graph3222->SetMinimum(0);
   Graph_Graph3222->SetMaximum(1.5);
   Graph_Graph3222->SetDirectory(0);
   Graph_Graph3222->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3222->SetLineColor(ci);
   Graph_Graph3222->GetXaxis()->SetRange(1,100);
   Graph_Graph3222->GetXaxis()->CenterTitle(true);
   Graph_Graph3222->GetXaxis()->SetLabelFont(42);
   Graph_Graph3222->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3222->GetXaxis()->SetTitleFont(42);
   Graph_Graph3222->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3222->GetYaxis()->CenterTitle(true);
   Graph_Graph3222->GetYaxis()->SetLabelFont(42);
   Graph_Graph3222->GetYaxis()->SetTitleFont(42);
   Graph_Graph3222->GetZaxis()->SetLabelFont(42);
   Graph_Graph3222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3222->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3222);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.129771,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__665 = new TH2D("ThetaY_vs_Y_mI5_0__665","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(7890,20);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(7916,2615);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(7942,11977);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(7968,25066);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(7994,34286);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8020,40722);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8046,44862);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8072,47087);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8098,48440);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8124,49134);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8150,49508);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8176,49332);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8202,49363);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8228,48937);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8254,49751);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8280,49369);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8306,49457);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8332,48603);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8358,47176);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8384,44416);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8410,40523);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8436,34094);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8462,25301);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8488,11890);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8514,2560);
   ThetaY_vs_Y_mI5_0__665->SetBinContent(8540,14);
   ThetaY_vs_Y_mI5_0__665->SetEntries(904503);
   ThetaY_vs_Y_mI5_0__665->SetContour(20);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(1,2487.55);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(2,4975.1);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(3,7462.65);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(4,9950.2);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(5,12437.75);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(6,14925.3);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(7,17412.85);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(8,19900.4);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(9,22387.95);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(10,24875.5);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(11,27363.05);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(12,29850.6);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(13,32338.15);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(14,34825.7);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(15,37313.25);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(16,39800.8);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(17,42288.35);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(18,44775.9);
   ThetaY_vs_Y_mI5_0__665->SetContourLevel(19,47263.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__665->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__665->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__665->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__665->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__665->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__665->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__665->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__665->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__665->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__665->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__665->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__665->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__665->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__665->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__665->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__665->Draw("COL");
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
