void S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06695026,125,1.272055);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__762 = new TH1D("S18_ThetaY_mI30_mI25__762","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__762->SetBinContent(313,0.1157895);
   S18_ThetaY_mI30_mI25__762->SetBinContent(314,0.8736842);
   S18_ThetaY_mI30_mI25__762->SetBinContent(315,0.9789474);
   S18_ThetaY_mI30_mI25__762->SetBinContent(316,0.8105263);
   S18_ThetaY_mI30_mI25__762->SetBinContent(317,0.9263158);
   S18_ThetaY_mI30_mI25__762->SetBinContent(318,0.8631579);
   S18_ThetaY_mI30_mI25__762->SetBinContent(319,1);
   S18_ThetaY_mI30_mI25__762->SetBinContent(320,0.9263158);
   S18_ThetaY_mI30_mI25__762->SetBinContent(321,0.8);
   S18_ThetaY_mI30_mI25__762->SetBinContent(322,0.6842105);
   S18_ThetaY_mI30_mI25__762->SetBinContent(323,0.5263158);
   S18_ThetaY_mI30_mI25__762->SetBinContent(324,0.1684211);
   S18_ThetaY_mI30_mI25__762->SetBinContent(325,0.01052632);
   S18_ThetaY_mI30_mI25__762->SetBinError(313,0.03491184);
   S18_ThetaY_mI30_mI25__762->SetBinError(314,0.0958993);
   S18_ThetaY_mI30_mI25__762->SetBinError(315,0.1015121);
   S18_ThetaY_mI30_mI25__762->SetBinError(316,0.09236805);
   S18_ThetaY_mI30_mI25__762->SetBinError(317,0.09874559);
   S18_ThetaY_mI30_mI25__762->SetBinError(318,0.09531984);
   S18_ThetaY_mI30_mI25__762->SetBinError(319,0.1025978);
   S18_ThetaY_mI30_mI25__762->SetBinError(320,0.09874559);
   S18_ThetaY_mI30_mI25__762->SetBinError(321,0.09176629);
   S18_ThetaY_mI30_mI25__762->SetBinError(322,0.08486587);
   S18_ThetaY_mI30_mI25__762->SetBinError(323,0.07443229);
   S18_ThetaY_mI30_mI25__762->SetBinError(324,0.04210526);
   S18_ThetaY_mI30_mI25__762->SetBinError(325,0.01052632);
   S18_ThetaY_mI30_mI25__762->SetMinimum(0);
   S18_ThetaY_mI30_mI25__762->SetMaximum(1.138154);
   S18_ThetaY_mI30_mI25__762->SetEntries(825);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__762->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__762->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__762->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__762->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__762->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__762->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__762->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__762->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__762->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__762->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__762->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__762->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__762->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__762->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__762->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__762->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__763 = new TH1D("ThetaY_mI30_mI25__763","",630,-1575,1575);
   ThetaY_mI30_mI25__763->SetBinContent(305,7.847446e-05);
   ThetaY_mI30_mI25__763->SetBinContent(306,0.04967433);
   ThetaY_mI30_mI25__763->SetBinContent(307,0.3070705);
   ThetaY_mI30_mI25__763->SetBinContent(308,0.5921682);
   ThetaY_mI30_mI25__763->SetBinContent(309,0.7619085);
   ThetaY_mI30_mI25__763->SetBinContent(310,0.8781292);
   ThetaY_mI30_mI25__763->SetBinContent(311,0.9455387);
   ThetaY_mI30_mI25__763->SetBinContent(312,1.00926);
   ThetaY_mI30_mI25__763->SetBinContent(313,1.026132);
   ThetaY_mI30_mI25__763->SetBinContent(314,1.02574);
   ThetaY_mI30_mI25__763->SetBinContent(315,1.034686);
   ThetaY_mI30_mI25__763->SetBinContent(316,1.019776);
   ThetaY_mI30_mI25__763->SetBinContent(317,1.011222);
   ThetaY_mI30_mI25__763->SetBinContent(318,0.9961548);
   ThetaY_mI30_mI25__763->SetBinContent(319,1);
   ThetaY_mI30_mI25__763->SetBinContent(320,0.9548772);
   ThetaY_mI30_mI25__763->SetBinContent(321,0.8684768);
   ThetaY_mI30_mI25__763->SetBinContent(322,0.7601036);
   ThetaY_mI30_mI25__763->SetBinContent(323,0.5889508);
   ThetaY_mI30_mI25__763->SetBinContent(324,0.3080907);
   ThetaY_mI30_mI25__763->SetBinContent(325,0.05210704);
   ThetaY_mI30_mI25__763->SetBinError(305,7.847446e-05);
   ThetaY_mI30_mI25__763->SetBinError(306,0.001974377);
   ThetaY_mI30_mI25__763->SetBinError(307,0.004908889);
   ThetaY_mI30_mI25__763->SetBinError(308,0.006816897);
   ThetaY_mI30_mI25__763->SetBinError(309,0.007732422);
   ThetaY_mI30_mI25__763->SetBinError(310,0.008301247);
   ThetaY_mI30_mI25__763->SetBinError(311,0.008613979);
   ThetaY_mI30_mI25__763->SetBinError(312,0.008899502);
   ThetaY_mI30_mI25__763->SetBinError(313,0.008973581);
   ThetaY_mI30_mI25__763->SetBinError(314,0.008971865);
   ThetaY_mI30_mI25__763->SetBinError(315,0.009010904);
   ThetaY_mI30_mI25__763->SetBinError(316,0.008945744);
   ThetaY_mI30_mI25__763->SetBinError(317,0.008908147);
   ThetaY_mI30_mI25__763->SetBinError(318,0.008841533);
   ThetaY_mI30_mI25__763->SetBinError(319,0.008858581);
   ThetaY_mI30_mI25__763->SetBinError(320,0.008656412);
   ThetaY_mI30_mI25__763->SetBinError(321,0.008255498);
   ThetaY_mI30_mI25__763->SetBinError(322,0.007723258);
   ThetaY_mI30_mI25__763->SetBinError(323,0.006798352);
   ThetaY_mI30_mI25__763->SetBinError(324,0.004917037);
   ThetaY_mI30_mI25__763->SetBinError(325,0.002022145);
   ThetaY_mI30_mI25__763->SetEntries(193568);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__763->SetLineColor(ci);
   ThetaY_mI30_mI25__763->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__763->SetMarkerColor(ci);
   ThetaY_mI30_mI25__763->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__763->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__763->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__763->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__763->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__763->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__763->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__763->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__763->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__763->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__763->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__763->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__763->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__763->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__763->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__763->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__763->Draw("AEsame");
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
   
   Double_t _fx3255[21] = {
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
   47.5};
   Double_t _fy3255[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1128407,
   0.8517602,
   0.9461302,
   0.7948085,
   0.9160362,
   0.8664898,
   1,
   0.9700889,
   0.921153,
   0.9001543,
   0.8936498,
   0.5466606,
   0.2020133};
   Double_t _felx3255[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3255[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03351206,
   0.09359643,
   0.09827362,
   0.09064373,
   0.09779247,
   0.09579657,
   0.1027941,
   0.1035834,
   0.1057873,
   0.1117299,
   0.1263679,
   0.1354828,
   0.1671627};
   Double_t _fehx3255[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3255[21] = {
   711.3242,
   0.3906924,
   0.0631247,
   0.03272978,
   0.02543745,
   0.02207052,
   0.02049695,
   0.01920275,
   0.04533247,
   0.1045013,
   0.109061,
   0.1016294,
   0.108843,
   0.1070304,
   0.1139548,
   0.1152913,
   0.1187052,
   0.1265535,
   0.1456582,
   0.1741356,
   0.4656902};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3255,_fy3255,_felx3255,_fehx3255,_fely3255,_fehy3255);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3255 = new TH1F("Graph_Graph3255","",100,-100,100);
   Graph_Graph3255->SetMinimum(0);
   Graph_Graph3255->SetMaximum(1.5);
   Graph_Graph3255->SetDirectory(0);
   Graph_Graph3255->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3255->SetLineColor(ci);
   Graph_Graph3255->GetXaxis()->SetRange(1,100);
   Graph_Graph3255->GetXaxis()->CenterTitle(true);
   Graph_Graph3255->GetXaxis()->SetLabelFont(42);
   Graph_Graph3255->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3255->GetXaxis()->SetTitleFont(42);
   Graph_Graph3255->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3255->GetYaxis()->CenterTitle(true);
   Graph_Graph3255->GetYaxis()->SetLabelFont(42);
   Graph_Graph3255->GetYaxis()->SetTitleFont(42);
   Graph_Graph3255->GetZaxis()->SetLabelFont(42);
   Graph_Graph3255->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3255->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3255);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.138154,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__764 = new TH2D("ThetaY_vs_Y_mI30_mI25__764","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(7937,1);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(7963,633);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(7989,3913);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8015,7546);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8041,9709);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8067,11190);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8093,12049);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8119,12861);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8145,13076);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8171,13071);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8197,13185);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8223,12995);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8249,12886);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8275,12694);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8301,12743);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8327,12168);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8353,11067);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8379,9686);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8405,7505);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8431,3926);
   ThetaY_vs_Y_mI30_mI25__764->SetBinContent(8457,664);
   ThetaY_vs_Y_mI30_mI25__764->SetEntries(193568);
   ThetaY_vs_Y_mI30_mI25__764->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(1,659.25);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(2,1318.5);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(3,1977.75);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(4,2637);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(5,3296.25);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(6,3955.5);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(7,4614.75);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(8,5274);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(9,5933.25);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(10,6592.5);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(11,7251.75);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(12,7911);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(13,8570.25);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(14,9229.5);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(15,9888.75);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(16,10548);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(17,11207.25);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(18,11866.5);
   ThetaY_vs_Y_mI30_mI25__764->SetContourLevel(19,12525.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__764->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__764->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__764->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__764->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__764->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__764->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__764->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__764->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__764->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__764->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__764->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__764->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__764->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__764->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__764->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__764->Draw("COL");
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
