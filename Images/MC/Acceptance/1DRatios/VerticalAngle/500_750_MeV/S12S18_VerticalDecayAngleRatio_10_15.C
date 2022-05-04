void S12S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:43 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06551719,125,1.244826);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__501 = new TH1D("S12S18_ThetaY_10_15__501","",630,-1575,1575);
   S12S18_ThetaY_10_15__501->SetBinContent(303,0.01595745);
   S12S18_ThetaY_10_15__501->SetBinContent(304,0.1329787);
   S12S18_ThetaY_10_15__501->SetBinContent(305,0.2925532);
   S12S18_ThetaY_10_15__501->SetBinContent(306,0.6648936);
   S12S18_ThetaY_10_15__501->SetBinContent(307,0.7234043);
   S12S18_ThetaY_10_15__501->SetBinContent(308,0.9255319);
   S12S18_ThetaY_10_15__501->SetBinContent(309,0.9734043);
   S12S18_ThetaY_10_15__501->SetBinContent(310,1);
   S12S18_ThetaY_10_15__501->SetBinContent(311,0.8031915);
   S12S18_ThetaY_10_15__501->SetBinContent(312,0.893617);
   S12S18_ThetaY_10_15__501->SetBinContent(313,0.8404255);
   S12S18_ThetaY_10_15__501->SetBinContent(314,0.9840426);
   S12S18_ThetaY_10_15__501->SetBinContent(315,0.9255319);
   S12S18_ThetaY_10_15__501->SetBinContent(316,0.787234);
   S12S18_ThetaY_10_15__501->SetBinContent(317,0.8670213);
   S12S18_ThetaY_10_15__501->SetBinContent(318,0.893617);
   S12S18_ThetaY_10_15__501->SetBinContent(319,0.9414894);
   S12S18_ThetaY_10_15__501->SetBinContent(320,0.8244681);
   S12S18_ThetaY_10_15__501->SetBinContent(321,0.4308511);
   S12S18_ThetaY_10_15__501->SetBinContent(322,0.106383);
   S12S18_ThetaY_10_15__501->SetBinContent(323,0.01595745);
   S12S18_ThetaY_10_15__501->SetBinError(303,0.009213036);
   S12S18_ThetaY_10_15__501->SetBinError(304,0.02659574);
   S12S18_ThetaY_10_15__501->SetBinError(305,0.03944786);
   S12S18_ThetaY_10_15__501->SetBinError(306,0.05946989);
   S12S18_ThetaY_10_15__501->SetBinError(307,0.0620314);
   S12S18_ThetaY_10_15__501->SetBinError(308,0.07016439);
   S12S18_ThetaY_10_15__501->SetBinError(309,0.07195611);
   S12S18_ThetaY_10_15__501->SetBinError(310,0.0729325);
   S12S18_ThetaY_10_15__501->SetBinError(311,0.0653628);
   S12S18_ThetaY_10_15__501->SetBinError(312,0.06894405);
   S12S18_ThetaY_10_15__501->SetBinError(313,0.06686067);
   S12S18_ThetaY_10_15__501->SetBinError(314,0.07234825);
   S12S18_ThetaY_10_15__501->SetBinError(315,0.07016439);
   S12S18_ThetaY_10_15__501->SetBinError(316,0.06471024);
   S12S18_ThetaY_10_15__501->SetBinError(317,0.06791035);
   S12S18_ThetaY_10_15__501->SetBinError(318,0.06894405);
   S12S18_ThetaY_10_15__501->SetBinError(319,0.07076667);
   S12S18_ThetaY_10_15__501->SetBinError(320,0.06622287);
   S12S18_ThetaY_10_15__501->SetBinError(321,0.04787234);
   S12S18_ThetaY_10_15__501->SetBinError(322,0.02378796);
   S12S18_ThetaY_10_15__501->SetBinError(323,0.009213036);
   S12S18_ThetaY_10_15__501->SetMinimum(0);
   S12S18_ThetaY_10_15__501->SetMaximum(1.113792);
   S12S18_ThetaY_10_15__501->SetEntries(2640);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__501->SetLineColor(ci);
   S12S18_ThetaY_10_15__501->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__501->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__501->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__501->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__501->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__501->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__501->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__501->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__501->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__501->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__501->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__501->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__501->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__501->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__501->Draw("AE");
   
   TH1D *ThetaY_10_15__502 = new TH1D("ThetaY_10_15__502","",630,-1575,1575);
   ThetaY_10_15__502->SetBinContent(300,0.004834811);
   ThetaY_10_15__502->SetBinContent(301,0.06317486);
   ThetaY_10_15__502->SetBinContent(302,0.1889122);
   ThetaY_10_15__502->SetBinContent(303,0.3906849);
   ThetaY_10_15__502->SetBinContent(304,0.5902337);
   ThetaY_10_15__502->SetBinContent(305,0.7513296);
   ThetaY_10_15__502->SetBinContent(306,0.8461886);
   ThetaY_10_15__502->SetBinContent(307,0.9152619);
   ThetaY_10_15__502->SetBinContent(308,0.9639645);
   ThetaY_10_15__502->SetBinContent(309,0.9903626);
   ThetaY_10_15__502->SetBinContent(310,1);
   ThetaY_10_15__502->SetBinContent(311,0.9953586);
   ThetaY_10_15__502->SetBinContent(312,1.005479);
   ThetaY_10_15__502->SetBinContent(313,0.9955197);
   ThetaY_10_15__502->SetBinContent(314,0.9907816);
   ThetaY_10_15__502->SetBinContent(315,0.9855278);
   ThetaY_10_15__502->SetBinContent(316,0.9902015);
   ThetaY_10_15__502->SetBinContent(317,0.9893312);
   ThetaY_10_15__502->SetBinContent(318,0.9888799);
   ThetaY_10_15__502->SetBinContent(319,0.9896857);
   ThetaY_10_15__502->SetBinContent(320,1.012538);
   ThetaY_10_15__502->SetBinContent(321,0.9946172);
   ThetaY_10_15__502->SetBinContent(322,0.9925866);
   ThetaY_10_15__502->SetBinContent(323,0.9532957);
   ThetaY_10_15__502->SetBinContent(324,0.913199);
   ThetaY_10_15__502->SetBinContent(325,0.8426753);
   ThetaY_10_15__502->SetBinContent(326,0.7440129);
   ThetaY_10_15__502->SetBinContent(327,0.6045125);
   ThetaY_10_15__502->SetBinContent(328,0.3803062);
   ThetaY_10_15__502->SetBinContent(329,0.1882031);
   ThetaY_10_15__502->SetBinContent(330,0.06443191);
   ThetaY_10_15__502->SetBinContent(331,0.005157131);
   ThetaY_10_15__502->SetBinError(300,0.0003947606);
   ThetaY_10_15__502->SetBinError(301,0.001426975);
   ThetaY_10_15__502->SetBinError(302,0.002467596);
   ThetaY_10_15__502->SetBinError(303,0.003548603);
   ThetaY_10_15__502->SetBinError(304,0.004361703);
   ThetaY_10_15__502->SetBinError(305,0.004921068);
   ThetaY_10_15__502->SetBinError(306,0.005222491);
   ThetaY_10_15__502->SetBinError(307,0.005431463);
   ThetaY_10_15__502->SetBinError(308,0.005574098);
   ThetaY_10_15__502->SetBinError(309,0.005649906);
   ThetaY_10_15__502->SetBinError(310,0.00567733);
   ThetaY_10_15__502->SetBinError(311,0.005664139);
   ThetaY_10_15__502->SetBinError(312,0.005692863);
   ThetaY_10_15__502->SetBinError(313,0.005664597);
   ThetaY_10_15__502->SetBinError(314,0.005651101);
   ThetaY_10_15__502->SetBinError(315,0.005636098);
   ThetaY_10_15__502->SetBinError(316,0.005649446);
   ThetaY_10_15__502->SetBinError(317,0.005646963);
   ThetaY_10_15__502->SetBinError(318,0.005645675);
   ThetaY_10_15__502->SetBinError(319,0.005647975);
   ThetaY_10_15__502->SetBinError(320,0.005712811);
   ThetaY_10_15__502->SetBinError(321,0.005662029);
   ThetaY_10_15__502->SetBinError(322,0.005656246);
   ThetaY_10_15__502->SetBinError(323,0.005543167);
   ThetaY_10_15__502->SetBinError(324,0.005425338);
   ThetaY_10_15__502->SetBinError(325,0.005211638);
   ThetaY_10_15__502->SetBinError(326,0.004897048);
   ThetaY_10_15__502->SetBinError(327,0.004414147);
   ThetaY_10_15__502->SetBinError(328,0.003501151);
   ThetaY_10_15__502->SetBinError(329,0.002462961);
   ThetaY_10_15__502->SetBinError(330,0.001441102);
   ThetaY_10_15__502->SetBinError(331,0.000407707);
   ThetaY_10_15__502->SetEntries(723852);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__502->SetLineColor(ci);
   ThetaY_10_15__502->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__502->SetMarkerColor(ci);
   ThetaY_10_15__502->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__502->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__502->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__502->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__502->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__502->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__502->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__502->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__502->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__502->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__502->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__502->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__502->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__502->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__502->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__502->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__502->Draw("AEsame");
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
   
   Double_t _fx3168[32] = {
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
   Double_t _fy3168[32] = {
   0,
   0,
   0,
   0.0408448,
   0.2252984,
   0.3893806,
   0.7857511,
   0.7903795,
   0.9601307,
   0.9828766,
   1,
   0.8069368,
   0.8887472,
   0.8442078,
   0.9931982,
   0.9391231,
   0.7950241,
   0.8763711,
   0.9036658,
   0.9513013,
   0.8142587,
   0.4331828,
   0.1071775,
   0.01673924,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3168[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3168[32] = {
   0,
   0,
   0,
   0.02223119,
   0.0447857,
   0.05240458,
   0.07035121,
   0.06785184,
   0.07292739,
   0.07280462,
   0.07308691,
   0.06575397,
   0.0686832,
   0.06726078,
   0.07317342,
   0.07132726,
   0.06543272,
   0.06875298,
   0.06983925,
   0.07164109,
   0.06549221,
   0.04809411,
   0.02377102,
   0.009110419,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3168[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3168[32] = {
   2.037931,
   0.1550818,
   0.05184529,
   0.0397406,
   0.05471809,
   0.05998358,
   0.07695368,
   0.07394527,
   0.07869141,
   0.07841065,
   0.07863684,
   0.07134575,
   0.07421026,
   0.07284806,
   0.07877636,
   0.07696438,
   0.07105542,
   0.07437303,
   0.07545964,
   0.0772532,
   0.07098654,
   0.05375672,
   0.02973544,
   0.01628437,
   0.01072382,
   0.01162134,
   0.01316249,
   0.01620008,
   0.02575144,
   0.05204066,
   0.1520548,
   1.909826};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3168,_fy3168,_felx3168,_fehx3168,_fely3168,_fehy3168);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3168 = new TH1F("Graph_Graph3168","",100,-100,100);
   Graph_Graph3168->SetMinimum(0);
   Graph_Graph3168->SetMaximum(1.5);
   Graph_Graph3168->SetDirectory(0);
   Graph_Graph3168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3168->SetLineColor(ci);
   Graph_Graph3168->GetXaxis()->SetRange(1,100);
   Graph_Graph3168->GetXaxis()->CenterTitle(true);
   Graph_Graph3168->GetXaxis()->SetLabelFont(42);
   Graph_Graph3168->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3168->GetXaxis()->SetTitleFont(42);
   Graph_Graph3168->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3168->GetYaxis()->CenterTitle(true);
   Graph_Graph3168->GetYaxis()->SetLabelFont(42);
   Graph_Graph3168->GetYaxis()->SetTitleFont(42);
   Graph_Graph3168->GetZaxis()->SetLabelFont(42);
   Graph_Graph3168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3168->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3168);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.113792,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__503 = new TH2D("ThetaY_vs_Y_10_15__503","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__503->SetBinContent(7815,150);
   ThetaY_vs_Y_10_15__503->SetBinContent(7841,1960);
   ThetaY_vs_Y_10_15__503->SetBinContent(7867,5861);
   ThetaY_vs_Y_10_15__503->SetBinContent(7893,12121);
   ThetaY_vs_Y_10_15__503->SetBinContent(7919,18312);
   ThetaY_vs_Y_10_15__503->SetBinContent(7945,23310);
   ThetaY_vs_Y_10_15__503->SetBinContent(7971,26253);
   ThetaY_vs_Y_10_15__503->SetBinContent(7997,28396);
   ThetaY_vs_Y_10_15__503->SetBinContent(8023,29907);
   ThetaY_vs_Y_10_15__503->SetBinContent(8049,30726);
   ThetaY_vs_Y_10_15__503->SetBinContent(8075,31025);
   ThetaY_vs_Y_10_15__503->SetBinContent(8101,30881);
   ThetaY_vs_Y_10_15__503->SetBinContent(8127,31195);
   ThetaY_vs_Y_10_15__503->SetBinContent(8153,30886);
   ThetaY_vs_Y_10_15__503->SetBinContent(8179,30739);
   ThetaY_vs_Y_10_15__503->SetBinContent(8205,30576);
   ThetaY_vs_Y_10_15__503->SetBinContent(8231,30721);
   ThetaY_vs_Y_10_15__503->SetBinContent(8257,30694);
   ThetaY_vs_Y_10_15__503->SetBinContent(8283,30680);
   ThetaY_vs_Y_10_15__503->SetBinContent(8309,30705);
   ThetaY_vs_Y_10_15__503->SetBinContent(8335,31414);
   ThetaY_vs_Y_10_15__503->SetBinContent(8361,30858);
   ThetaY_vs_Y_10_15__503->SetBinContent(8387,30795);
   ThetaY_vs_Y_10_15__503->SetBinContent(8413,29576);
   ThetaY_vs_Y_10_15__503->SetBinContent(8439,28332);
   ThetaY_vs_Y_10_15__503->SetBinContent(8465,26144);
   ThetaY_vs_Y_10_15__503->SetBinContent(8491,23083);
   ThetaY_vs_Y_10_15__503->SetBinContent(8517,18755);
   ThetaY_vs_Y_10_15__503->SetBinContent(8543,11799);
   ThetaY_vs_Y_10_15__503->SetBinContent(8569,5839);
   ThetaY_vs_Y_10_15__503->SetBinContent(8595,1999);
   ThetaY_vs_Y_10_15__503->SetBinContent(8621,160);
   ThetaY_vs_Y_10_15__503->SetEntries(723852);
   ThetaY_vs_Y_10_15__503->SetContour(20);
   ThetaY_vs_Y_10_15__503->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__503->SetContourLevel(1,1570.7);
   ThetaY_vs_Y_10_15__503->SetContourLevel(2,3141.4);
   ThetaY_vs_Y_10_15__503->SetContourLevel(3,4712.1);
   ThetaY_vs_Y_10_15__503->SetContourLevel(4,6282.8);
   ThetaY_vs_Y_10_15__503->SetContourLevel(5,7853.5);
   ThetaY_vs_Y_10_15__503->SetContourLevel(6,9424.2);
   ThetaY_vs_Y_10_15__503->SetContourLevel(7,10994.9);
   ThetaY_vs_Y_10_15__503->SetContourLevel(8,12565.6);
   ThetaY_vs_Y_10_15__503->SetContourLevel(9,14136.3);
   ThetaY_vs_Y_10_15__503->SetContourLevel(10,15707);
   ThetaY_vs_Y_10_15__503->SetContourLevel(11,17277.7);
   ThetaY_vs_Y_10_15__503->SetContourLevel(12,18848.4);
   ThetaY_vs_Y_10_15__503->SetContourLevel(13,20419.1);
   ThetaY_vs_Y_10_15__503->SetContourLevel(14,21989.8);
   ThetaY_vs_Y_10_15__503->SetContourLevel(15,23560.5);
   ThetaY_vs_Y_10_15__503->SetContourLevel(16,25131.2);
   ThetaY_vs_Y_10_15__503->SetContourLevel(17,26701.9);
   ThetaY_vs_Y_10_15__503->SetContourLevel(18,28272.6);
   ThetaY_vs_Y_10_15__503->SetContourLevel(19,29843.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__503->SetLineColor(ci);
   ThetaY_vs_Y_10_15__503->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__503->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__503->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__503->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__503->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__503->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__503->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__503->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__503->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__503->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__503->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__503->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__503->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__503->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__503->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_10_15","Reco vertices","lpf");
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
