void S12_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08081776,125,1.535537);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__558 = new TH1D("S12_ThetaY_10_15__558","",630,-1575,1575);
   S12_ThetaY_10_15__558->SetBinContent(304,0.005050505);
   S12_ThetaY_10_15__558->SetBinContent(305,0.06565657);
   S12_ThetaY_10_15__558->SetBinContent(306,0.1060606);
   S12_ThetaY_10_15__558->SetBinContent(307,0.6060606);
   S12_ThetaY_10_15__558->SetBinContent(308,1);
   S12_ThetaY_10_15__558->SetBinContent(309,0.8888889);
   S12_ThetaY_10_15__558->SetBinContent(310,1.146465);
   S12_ThetaY_10_15__558->SetBinContent(311,1.045455);
   S12_ThetaY_10_15__558->SetBinContent(312,1.136364);
   S12_ThetaY_10_15__558->SetBinContent(313,1.111111);
   S12_ThetaY_10_15__558->SetBinContent(314,1.065657);
   S12_ThetaY_10_15__558->SetBinContent(315,1.060606);
   S12_ThetaY_10_15__558->SetBinContent(316,1.217172);
   S12_ThetaY_10_15__558->SetBinContent(317,0.9949495);
   S12_ThetaY_10_15__558->SetBinContent(318,1.106061);
   S12_ThetaY_10_15__558->SetBinContent(319,1);
   S12_ThetaY_10_15__558->SetBinContent(320,0.6818182);
   S12_ThetaY_10_15__558->SetBinContent(321,0.07575758);
   S12_ThetaY_10_15__558->SetBinError(304,0.005050505);
   S12_ThetaY_10_15__558->SetBinError(305,0.01820985);
   S12_ThetaY_10_15__558->SetBinError(306,0.02314432);
   S12_ThetaY_10_15__558->SetBinError(307,0.05532551);
   S12_ThetaY_10_15__558->SetBinError(308,0.07106691);
   S12_ThetaY_10_15__558->SetBinError(309,0.06700252);
   S12_ThetaY_10_15__558->SetBinError(310,0.07609353);
   S12_ThetaY_10_15__558->SetBinError(311,0.07266411);
   S12_ThetaY_10_15__558->SetBinError(312,0.07575758);
   S12_ThetaY_10_15__558->SetBinError(313,0.0749111);
   S12_ThetaY_10_15__558->SetBinError(314,0.07336282);
   S12_ThetaY_10_15__558->SetBinError(315,0.07318877);
   S12_ThetaY_10_15__558->SetBinError(316,0.07840492);
   S12_ThetaY_10_15__558->SetBinError(317,0.07088722);
   S12_ThetaY_10_15__558->SetBinError(318,0.07474065);
   S12_ThetaY_10_15__558->SetBinError(319,0.07106691);
   S12_ThetaY_10_15__558->SetBinError(320,0.05868157);
   S12_ThetaY_10_15__558->SetBinError(321,0.01956052);
   S12_ThetaY_10_15__558->SetMinimum(0);
   S12_ThetaY_10_15__558->SetMaximum(1.373902);
   S12_ThetaY_10_15__558->SetEntries(2834);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__558->SetLineColor(ci);
   S12_ThetaY_10_15__558->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__558->SetMarkerColor(ci);
   S12_ThetaY_10_15__558->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__558->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__558->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__558->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__558->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__558->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__558->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__558->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__558->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__558->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__558->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__558->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__558->Draw("AE");
   
   TH1D *ThetaY_10_15__559 = new TH1D("ThetaY_10_15__559","",630,-1575,1575);
   ThetaY_10_15__559->SetBinContent(303,0.0005704889);
   ThetaY_10_15__559->SetBinContent(304,0.0653042);
   ThetaY_10_15__559->SetBinContent(305,0.2994731);
   ThetaY_10_15__559->SetBinContent(306,0.626162);
   ThetaY_10_15__559->SetBinContent(307,0.8620088);
   ThetaY_10_15__559->SetBinContent(308,1);
   ThetaY_10_15__559->SetBinContent(309,1.110541);
   ThetaY_10_15__559->SetBinContent(310,1.166516);
   ThetaY_10_15__559->SetBinContent(311,1.214135);
   ThetaY_10_15__559->SetBinContent(312,1.231182);
   ThetaY_10_15__559->SetBinContent(313,1.242693);
   ThetaY_10_15__559->SetBinContent(314,1.235243);
   ThetaY_10_15__559->SetBinContent(315,1.249002);
   ThetaY_10_15__559->SetBinContent(316,1.237021);
   ThetaY_10_15__559->SetBinContent(317,1.233968);
   ThetaY_10_15__559->SetBinContent(318,1.234941);
   ThetaY_10_15__559->SetBinContent(319,1.227692);
   ThetaY_10_15__559->SetBinContent(320,1.209403);
   ThetaY_10_15__559->SetBinContent(321,1.172086);
   ThetaY_10_15__559->SetBinContent(322,1.108762);
   ThetaY_10_15__559->SetBinContent(323,1.028524);
   ThetaY_10_15__559->SetBinContent(324,0.8497936);
   ThetaY_10_15__559->SetBinContent(325,0.6207926);
   ThetaY_10_15__559->SetBinContent(326,0.2998758);
   ThetaY_10_15__559->SetBinContent(327,0.06741837);
   ThetaY_10_15__559->SetBinContent(328,0.0005033726);
   ThetaY_10_15__559->SetBinError(303,0.0001383639);
   ThetaY_10_15__559->SetBinError(304,0.001480368);
   ThetaY_10_15__559->SetBinError(305,0.003170137);
   ThetaY_10_15__559->SetBinError(306,0.004583978);
   ThetaY_10_15__559->SetBinError(307,0.005378424);
   ThetaY_10_15__559->SetBinError(308,0.005792942);
   ThetaY_10_15__559->SetBinError(309,0.006104729);
   ThetaY_10_15__559->SetBinError(310,0.006256687);
   ThetaY_10_15__559->SetBinError(311,0.006383114);
   ThetaY_10_15__559->SetBinError(312,0.00642777);
   ThetaY_10_15__559->SetBinError(313,0.006457747);
   ThetaY_10_15__559->SetBinError(314,0.006438361);
   ThetaY_10_15__559->SetBinError(315,0.006474119);
   ThetaY_10_15__559->SetBinError(316,0.006442994);
   ThetaY_10_15__559->SetBinError(317,0.006435037);
   ThetaY_10_15__559->SetBinError(318,0.006437574);
   ThetaY_10_15__559->SetBinError(319,0.006418653);
   ThetaY_10_15__559->SetBinError(320,0.006370664);
   ThetaY_10_15__559->SetBinError(321,0.006271609);
   ThetaY_10_15__559->SetBinError(322,0.006099838);
   ThetaY_10_15__559->SetBinError(323,0.005874981);
   ThetaY_10_15__559->SetBinError(324,0.00534018);
   ThetaY_10_15__559->SetBinError(325,0.004564282);
   ThetaY_10_15__559->SetBinError(326,0.003172268);
   ThetaY_10_15__559->SetBinError(327,0.00150414);
   ThetaY_10_15__559->SetBinError(328,0.0001299702);
   ThetaY_10_15__559->SetEntries(673267);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__559->SetLineColor(ci);
   ThetaY_10_15__559->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__559->SetMarkerColor(ci);
   ThetaY_10_15__559->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__559->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__559->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__559->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__559->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__559->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__559->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__559->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__559->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__559->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__559->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__559->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__559->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__559->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__559->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__559->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__559->Draw("AEsame");
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
   
   Double_t _fx3187[26] = {
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
   Double_t _fy3187[26] = {
   0,
   0.07733813,
   0.2192403,
   0.1693821,
   0.7030794,
   1,
   0.800411,
   0.9828112,
   0.8610697,
   0.9229857,
   0.8941157,
   0.8627102,
   0.8491631,
   0.9839537,
   0.8063012,
   0.8956386,
   0.8145364,
   0.5637643,
   0.06463481,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3187[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3187[26] = {
   0,
   0.06398394,
   0.06005619,
   0.03668534,
   0.06424087,
   0.07124123,
   0.06043509,
   0.065395,
   0.05997015,
   0.06167409,
   0.06041333,
   0.05951341,
   0.05871534,
   0.06354393,
   0.0575506,
   0.06065432,
   0.05799322,
   0.04855098,
   0.01650408,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3187[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3187[26] = {
   17.21372,
   0.1779919,
   0.0793014,
   0.04564621,
   0.07039974,
   0.07650936,
   0.06518206,
   0.06990012,
   0.06430149,
   0.06594139,
   0.06464179,
   0.0637694,
   0.06292437,
   0.06778822,
   0.06181429,
   0.06490969,
   0.06227859,
   0.05292515,
   0.02137325,
   0.008386243,
   0.009040493,
   0.01094198,
   0.01497851,
   0.03100966,
   0.1379795,
   19.65297};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3187,_fy3187,_felx3187,_fehx3187,_fely3187,_fehy3187);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3187 = new TH1F("Graph_Graph3187","",100,-100,100);
   Graph_Graph3187->SetMinimum(0);
   Graph_Graph3187->SetMaximum(1.5);
   Graph_Graph3187->SetDirectory(0);
   Graph_Graph3187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3187->SetLineColor(ci);
   Graph_Graph3187->GetXaxis()->SetRange(1,100);
   Graph_Graph3187->GetXaxis()->CenterTitle(true);
   Graph_Graph3187->GetXaxis()->SetLabelFont(42);
   Graph_Graph3187->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3187->GetXaxis()->SetTitleFont(42);
   Graph_Graph3187->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3187->GetYaxis()->CenterTitle(true);
   Graph_Graph3187->GetYaxis()->SetLabelFont(42);
   Graph_Graph3187->GetYaxis()->SetTitleFont(42);
   Graph_Graph3187->GetZaxis()->SetLabelFont(42);
   Graph_Graph3187->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3187->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3187);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.373902,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__560 = new TH2D("ThetaY_vs_Y_10_15__560","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__560->SetBinContent(7893,17);
   ThetaY_vs_Y_10_15__560->SetBinContent(7919,1946);
   ThetaY_vs_Y_10_15__560->SetBinContent(7945,8924);
   ThetaY_vs_Y_10_15__560->SetBinContent(7971,18659);
   ThetaY_vs_Y_10_15__560->SetBinContent(7997,25687);
   ThetaY_vs_Y_10_15__560->SetBinContent(8023,29799);
   ThetaY_vs_Y_10_15__560->SetBinContent(8049,33093);
   ThetaY_vs_Y_10_15__560->SetBinContent(8075,34761);
   ThetaY_vs_Y_10_15__560->SetBinContent(8101,36180);
   ThetaY_vs_Y_10_15__560->SetBinContent(8127,36688);
   ThetaY_vs_Y_10_15__560->SetBinContent(8153,37031);
   ThetaY_vs_Y_10_15__560->SetBinContent(8179,36809);
   ThetaY_vs_Y_10_15__560->SetBinContent(8205,37219);
   ThetaY_vs_Y_10_15__560->SetBinContent(8231,36862);
   ThetaY_vs_Y_10_15__560->SetBinContent(8257,36771);
   ThetaY_vs_Y_10_15__560->SetBinContent(8283,36800);
   ThetaY_vs_Y_10_15__560->SetBinContent(8309,36584);
   ThetaY_vs_Y_10_15__560->SetBinContent(8335,36039);
   ThetaY_vs_Y_10_15__560->SetBinContent(8361,34927);
   ThetaY_vs_Y_10_15__560->SetBinContent(8387,33040);
   ThetaY_vs_Y_10_15__560->SetBinContent(8413,30649);
   ThetaY_vs_Y_10_15__560->SetBinContent(8439,25323);
   ThetaY_vs_Y_10_15__560->SetBinContent(8465,18499);
   ThetaY_vs_Y_10_15__560->SetBinContent(8491,8936);
   ThetaY_vs_Y_10_15__560->SetBinContent(8517,2009);
   ThetaY_vs_Y_10_15__560->SetBinContent(8543,15);
   ThetaY_vs_Y_10_15__560->SetEntries(673267);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__560->SetLineColor(ci);
   ThetaY_vs_Y_10_15__560->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__560->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__560->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__560->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__560->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__560->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__560->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__560->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__560->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__560->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__560->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__560->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__560->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__560->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__560->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_10_15","Reco vertices","lpf");
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
