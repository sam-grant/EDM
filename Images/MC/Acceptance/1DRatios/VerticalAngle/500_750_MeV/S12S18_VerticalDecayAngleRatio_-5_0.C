void S12S18_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06599399,125,1.253886);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI5_0__492 = new TH1D("S12S18_ThetaY_mI5_0__492","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__492->SetBinContent(306,0.02016129);
   S12S18_ThetaY_mI5_0__492->SetBinContent(307,0.1129032);
   S12S18_ThetaY_mI5_0__492->SetBinContent(308,0.3346774);
   S12S18_ThetaY_mI5_0__492->SetBinContent(309,0.8225806);
   S12S18_ThetaY_mI5_0__492->SetBinContent(310,0.9596774);
   S12S18_ThetaY_mI5_0__492->SetBinContent(311,0.8548387);
   S12S18_ThetaY_mI5_0__492->SetBinContent(312,0.8467742);
   S12S18_ThetaY_mI5_0__492->SetBinContent(313,0.983871);
   S12S18_ThetaY_mI5_0__492->SetBinContent(314,0.8951613);
   S12S18_ThetaY_mI5_0__492->SetBinContent(315,1);
   S12S18_ThetaY_mI5_0__492->SetBinContent(316,0.9153226);
   S12S18_ThetaY_mI5_0__492->SetBinContent(317,0.9032258);
   S12S18_ThetaY_mI5_0__492->SetBinContent(318,0.9153226);
   S12S18_ThetaY_mI5_0__492->SetBinContent(319,0.9314516);
   S12S18_ThetaY_mI5_0__492->SetBinContent(320,0.9112903);
   S12S18_ThetaY_mI5_0__492->SetBinContent(321,0.8790323);
   S12S18_ThetaY_mI5_0__492->SetBinContent(322,0.8991935);
   S12S18_ThetaY_mI5_0__492->SetBinContent(323,0.7540323);
   S12S18_ThetaY_mI5_0__492->SetBinContent(324,0.3870968);
   S12S18_ThetaY_mI5_0__492->SetBinContent(325,0.1491935);
   S12S18_ThetaY_mI5_0__492->SetBinContent(326,0.02822581);
   S12S18_ThetaY_mI5_0__492->SetBinContent(327,0.008064516);
   S12S18_ThetaY_mI5_0__492->SetBinError(306,0.009016403);
   S12S18_ThetaY_mI5_0__492->SetBinError(307,0.0213367);
   S12S18_ThetaY_mI5_0__492->SetBinError(308,0.03673562);
   S12S18_ThetaY_mI5_0__492->SetBinError(309,0.05759216);
   S12S18_ThetaY_mI5_0__492->SetBinError(310,0.06220665);
   S12S18_ThetaY_mI5_0__492->SetBinError(311,0.05871056);
   S12S18_ThetaY_mI5_0__492->SetBinError(312,0.05843297);
   S12S18_ThetaY_mI5_0__492->SetBinError(313,0.06298588);
   S12S18_ThetaY_mI5_0__492->SetBinError(314,0.06007929);
   S12S18_ThetaY_mI5_0__492->SetBinError(315,0.06350006);
   S12S18_ThetaY_mI5_0__492->SetBinError(316,0.06075209);
   S12S18_ThetaY_mI5_0__492->SetBinError(317,0.06034931);
   S12S18_ThetaY_mI5_0__492->SetBinError(318,0.06075209);
   S12S18_ThetaY_mI5_0__492->SetBinError(319,0.06128502);
   S12S18_ThetaY_mI5_0__492->SetBinError(320,0.06061813);
   S12S18_ThetaY_mI5_0__492->SetBinError(321,0.05953558);
   S12S18_ThetaY_mI5_0__492->SetBinError(322,0.06021445);
   S12S18_ThetaY_mI5_0__492->SetBinError(323,0.0551403);
   S12S18_ThetaY_mI5_0__492->SetBinError(324,0.0395079);
   S12S18_ThetaY_mI5_0__492->SetBinError(325,0.02452727);
   S12S18_ThetaY_mI5_0__492->SetBinError(326,0.01066835);
   S12S18_ThetaY_mI5_0__492->SetBinError(327,0.005702474);
   S12S18_ThetaY_mI5_0__492->SetMinimum(0);
   S12S18_ThetaY_mI5_0__492->SetMaximum(1.121898);
   S12S18_ThetaY_mI5_0__492->SetEntries(3599);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__492->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__492->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__492->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__492->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__492->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__492->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__492->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__492->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__492->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__492->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__492->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__492->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__492->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__492->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__492->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__492->Draw("AE");
   
   TH1D *ThetaY_mI5_0__493 = new TH1D("ThetaY_mI5_0__493","",630,-1575,1575);
   ThetaY_mI5_0__493->SetBinContent(300,0.005207953);
   ThetaY_mI5_0__493->SetBinContent(301,0.06614587);
   ThetaY_mI5_0__493->SetBinContent(302,0.195931);
   ThetaY_mI5_0__493->SetBinContent(303,0.3955854);
   ThetaY_mI5_0__493->SetBinContent(304,0.6082354);
   ThetaY_mI5_0__493->SetBinContent(305,0.7608235);
   ThetaY_mI5_0__493->SetBinContent(306,0.8533499);
   ThetaY_mI5_0__493->SetBinContent(307,0.9302524);
   ThetaY_mI5_0__493->SetBinContent(308,0.974374);
   ThetaY_mI5_0__493->SetBinContent(309,0.9969093);
   ThetaY_mI5_0__493->SetBinContent(310,1.016451);
   ThetaY_mI5_0__493->SetBinContent(311,1.017352);
   ThetaY_mI5_0__493->SetBinContent(312,1.00365);
   ThetaY_mI5_0__493->SetBinContent(313,1.011511);
   ThetaY_mI5_0__493->SetBinContent(314,0.9973717);
   ThetaY_mI5_0__493->SetBinContent(315,1);
   ThetaY_mI5_0__493->SetBinContent(316,0.9963739);
   ThetaY_mI5_0__493->SetBinContent(317,1.007471);
   ThetaY_mI5_0__493->SetBinContent(318,1.014796);
   ThetaY_mI5_0__493->SetBinContent(319,1.012071);
   ThetaY_mI5_0__493->SetBinContent(320,1.019907);
   ThetaY_mI5_0__493->SetBinContent(321,1.00365);
   ThetaY_mI5_0__493->SetBinContent(322,1.006108);
   ThetaY_mI5_0__493->SetBinContent(323,0.9787058);
   ThetaY_mI5_0__493->SetBinContent(324,0.9184493);
   ThetaY_mI5_0__493->SetBinContent(325,0.8586552);
   ThetaY_mI5_0__493->SetBinContent(326,0.7609209);
   ThetaY_mI5_0__493->SetBinContent(327,0.6116911);
   ThetaY_mI5_0__493->SetBinContent(328,0.3900124);
   ThetaY_mI5_0__493->SetBinContent(329,0.1927673);
   ThetaY_mI5_0__493->SetBinContent(330,0.06317685);
   ThetaY_mI5_0__493->SetBinContent(331,0.005694678);
   ThetaY_mI5_0__493->SetBinError(300,0.0003560083);
   ThetaY_mI5_0__493->SetBinError(301,0.001268756);
   ThetaY_mI5_0__493->SetBinError(302,0.002183626);
   ThetaY_mI5_0__493->SetBinError(303,0.00310275);
   ThetaY_mI5_0__493->SetBinError(304,0.003847357);
   ThetaY_mI5_0__493->SetBinError(305,0.004302973);
   ThetaY_mI5_0__493->SetBinError(306,0.004557117);
   ThetaY_mI5_0__493->SetBinError(307,0.004758028);
   ThetaY_mI5_0__493->SetBinError(308,0.004869557);
   ThetaY_mI5_0__493->SetBinError(309,0.004925547);
   ThetaY_mI5_0__493->SetBinError(310,0.004973589);
   ThetaY_mI5_0__493->SetBinError(311,0.004975792);
   ThetaY_mI5_0__493->SetBinError(312,0.004942172);
   ThetaY_mI5_0__493->SetBinError(313,0.004961488);
   ThetaY_mI5_0__493->SetBinError(314,0.004926689);
   ThetaY_mI5_0__493->SetBinError(315,0.004933176);
   ThetaY_mI5_0__493->SetBinError(316,0.004924224);
   ThetaY_mI5_0__493->SetBinError(317,0.004951571);
   ThetaY_mI5_0__493->SetBinError(318,0.004969539);
   ThetaY_mI5_0__493->SetBinError(319,0.004962861);
   ThetaY_mI5_0__493->SetBinError(320,0.004982037);
   ThetaY_mI5_0__493->SetBinError(321,0.004942172);
   ThetaY_mI5_0__493->SetBinError(322,0.00494822);
   ThetaY_mI5_0__493->SetBinError(323,0.00488037);
   ThetaY_mI5_0__493->SetBinError(324,0.004727747);
   ThetaY_mI5_0__493->SetBinError(325,0.004571261);
   ThetaY_mI5_0__493->SetBinError(326,0.004303248);
   ThetaY_mI5_0__493->SetBinError(327,0.003858271);
   ThetaY_mI5_0__493->SetBinError(328,0.003080817);
   ThetaY_mI5_0__493->SetBinError(329,0.002165924);
   ThetaY_mI5_0__493->SetBinError(330,0.001239954);
   ThetaY_mI5_0__493->SetBinError(331,0.0003722727);
   ThetaY_mI5_0__493->SetEntries(972772);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__493->SetLineColor(ci);
   ThetaY_mI5_0__493->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__493->SetMarkerColor(ci);
   ThetaY_mI5_0__493->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__493->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__493->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__493->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__493->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__493->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__493->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__493->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__493->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__493->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__493->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__493->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__493->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__493->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__493->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__493->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__493->Draw("AEsame");
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
   
   Double_t _fx3165[32] = {
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
   Double_t _fy3165[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02362605,
   0.1213684,
   0.3434794,
   0.8251309,
   0.944145,
   0.8402588,
   0.8436943,
   0.9726745,
   0.8975203,
   1,
   0.9186537,
   0.8965276,
   0.9019766,
   0.9203424,
   0.8935033,
   0.8758351,
   0.8937343,
   0.7704381,
   0.4214678,
   0.1737526,
   0.03709427,
   0.01318397,
   0,
   0,
   0,
   0};
   Double_t _felx3165[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3165[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.0102056,
   0.02280673,
   0.03766419,
   0.05786623,
   0.06133012,
   0.05780905,
   0.05832132,
   0.06240809,
   0.06035434,
   0.06364771,
   0.06109623,
   0.06001808,
   0.0599841,
   0.06067737,
   0.05955022,
   0.05942929,
   0.05996437,
   0.05641966,
   0.04299486,
   0.02844957,
   0.01368102,
   0.008515834,
   0,
   0,
   0,
   0};
   Double_t _fehx3165[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3165[32] = {
   1.43156,
   0.1122669,
   0.03789254,
   0.01876686,
   0.01220539,
   0.009757444,
   0.01598481,
   0.02755626,
   0.04204043,
   0.0620755,
   0.06545113,
   0.06193145,
   0.06250076,
   0.06654835,
   0.06455766,
   0.06783531,
   0.06530279,
   0.06417862,
   0.06411385,
   0.06481756,
   0.06365935,
   0.06360698,
   0.06413078,
   0.06071224,
   0.04762292,
   0.03353903,
   0.01998284,
   0.01739033,
   0.01903504,
   0.03851451,
   0.1175448,
   1.308723};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3165,_fy3165,_felx3165,_fehx3165,_fely3165,_fehy3165);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3165 = new TH1F("Graph_Graph3165","",100,-100,100);
   Graph_Graph3165->SetMinimum(0);
   Graph_Graph3165->SetMaximum(1.5);
   Graph_Graph3165->SetDirectory(0);
   Graph_Graph3165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3165->SetLineColor(ci);
   Graph_Graph3165->GetXaxis()->SetRange(1,100);
   Graph_Graph3165->GetXaxis()->CenterTitle(true);
   Graph_Graph3165->GetXaxis()->SetLabelFont(42);
   Graph_Graph3165->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3165->GetXaxis()->SetTitleFont(42);
   Graph_Graph3165->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3165->GetYaxis()->CenterTitle(true);
   Graph_Graph3165->GetYaxis()->SetLabelFont(42);
   Graph_Graph3165->GetYaxis()->SetTitleFont(42);
   Graph_Graph3165->GetZaxis()->SetLabelFont(42);
   Graph_Graph3165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3165->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3165);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.121898,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__494 = new TH2D("ThetaY_vs_Y_mI5_0__494","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7812,214);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7838,2718);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7864,8051);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7890,16255);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7916,24993);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7942,31263);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7968,35065);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(7994,38225);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8020,40038);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8046,40964);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8072,41767);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8098,41804);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8124,41241);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8150,41564);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8176,40983);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8202,41091);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8228,40942);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8254,41398);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8280,41699);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8306,41587);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8332,41909);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8358,41241);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8384,41342);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8410,40216);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8436,37740);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8462,35283);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8488,31267);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8514,25135);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8540,16026);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8566,7921);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8592,2596);
   ThetaY_vs_Y_mI5_0__494->SetBinContent(8618,234);
   ThetaY_vs_Y_mI5_0__494->SetEntries(972772);
   ThetaY_vs_Y_mI5_0__494->SetContour(20);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(1,2095.45);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(2,4190.9);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(3,6286.35);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(4,8381.8);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(5,10477.25);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(6,12572.7);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(7,14668.15);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(8,16763.6);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(9,18859.05);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(10,20954.5);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(11,23049.95);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(12,25145.4);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(13,27240.85);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(14,29336.3);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(15,31431.75);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(16,33527.2);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(17,35622.65);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(18,37718.1);
   ThetaY_vs_Y_mI5_0__494->SetContourLevel(19,39813.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__494->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__494->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__494->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__494->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__494->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__494->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__494->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__494->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__494->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__494->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__494->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__494->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__494->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__494->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__494->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__494->Draw("COL");
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
