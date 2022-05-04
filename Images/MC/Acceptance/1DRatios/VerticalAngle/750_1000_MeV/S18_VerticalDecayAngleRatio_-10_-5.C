void S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06508954,125,1.236701);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__603 = new TH1D("S18_ThetaY_mI10_mI5__603","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__603->SetBinContent(308,0.009584665);
   S18_ThetaY_mI10_mI5__603->SetBinContent(309,0.07667732);
   S18_ThetaY_mI10_mI5__603->SetBinContent(310,0.4313099);
   S18_ThetaY_mI10_mI5__603->SetBinContent(311,0.8210863);
   S18_ThetaY_mI10_mI5__603->SetBinContent(312,0.8530351);
   S18_ThetaY_mI10_mI5__603->SetBinContent(313,0.8498403);
   S18_ThetaY_mI10_mI5__603->SetBinContent(314,0.9201278);
   S18_ThetaY_mI10_mI5__603->SetBinContent(315,0.9329073);
   S18_ThetaY_mI10_mI5__603->SetBinContent(316,1);
   S18_ThetaY_mI10_mI5__603->SetBinContent(317,0.8690096);
   S18_ThetaY_mI10_mI5__603->SetBinContent(318,0.8498403);
   S18_ThetaY_mI10_mI5__603->SetBinContent(319,0.8434505);
   S18_ThetaY_mI10_mI5__603->SetBinContent(320,0.7923323);
   S18_ThetaY_mI10_mI5__603->SetBinContent(321,0.8817891);
   S18_ThetaY_mI10_mI5__603->SetBinContent(322,0.7476038);
   S18_ThetaY_mI10_mI5__603->SetBinContent(323,0.4408946);
   S18_ThetaY_mI10_mI5__603->SetBinContent(324,0.1533546);
   S18_ThetaY_mI10_mI5__603->SetBinContent(325,0.02555911);
   S18_ThetaY_mI10_mI5__603->SetBinContent(326,0.003194888);
   S18_ThetaY_mI10_mI5__603->SetBinError(308,0.005533709);
   S18_ThetaY_mI10_mI5__603->SetBinError(309,0.01565169);
   S18_ThetaY_mI10_mI5__603->SetBinError(310,0.03712125);
   S18_ThetaY_mI10_mI5__603->SetBinError(311,0.05121795);
   S18_ThetaY_mI10_mI5__603->SetBinError(312,0.0522049);
   S18_ThetaY_mI10_mI5__603->SetBinError(313,0.05210705);
   S18_ThetaY_mI10_mI5__603->SetBinError(314,0.05421905);
   S18_ThetaY_mI10_mI5__603->SetBinError(315,0.05459427);
   S18_ThetaY_mI10_mI5__603->SetBinError(316,0.05652334);
   S18_ThetaY_mI10_mI5__603->SetBinError(317,0.05269145);
   S18_ThetaY_mI10_mI5__603->SetBinError(318,0.05210705);
   S18_ThetaY_mI10_mI5__603->SetBinError(319,0.05191079);
   S18_ThetaY_mI10_mI5__603->SetBinError(320,0.05031315);
   S18_ThetaY_mI10_mI5__603->SetBinError(321,0.05307747);
   S18_ThetaY_mI10_mI5__603->SetBinError(322,0.04887239);
   S18_ThetaY_mI10_mI5__603->SetBinError(323,0.03753144);
   S18_ThetaY_mI10_mI5__603->SetBinError(324,0.02213483);
   S18_ThetaY_mI10_mI5__603->SetBinError(325,0.009036508);
   S18_ThetaY_mI10_mI5__603->SetBinError(326,0.003194888);
   S18_ThetaY_mI10_mI5__603->SetMinimum(0);
   S18_ThetaY_mI10_mI5__603->SetMaximum(1.106522);
   S18_ThetaY_mI10_mI5__603->SetEntries(3600);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__603->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__603->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__603->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__603->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__603->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__603->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__603->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__603->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__603->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__603->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__603->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__603->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__603->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__603->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__603->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__603->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__604 = new TH1D("ThetaY_mI10_mI5__604","",630,-1575,1575);
   ThetaY_mI10_mI5__604->SetBinContent(303,0.0004012215);
   ThetaY_mI10_mI5__604->SetBinContent(304,0.05287208);
   ThetaY_mI10_mI5__604->SetBinContent(305,0.2408221);
   ThetaY_mI10_mI5__604->SetBinContent(306,0.5088603);
   ThetaY_mI10_mI5__604->SetBinContent(307,0.6913938);
   ThetaY_mI10_mI5__604->SetBinContent(308,0.8172659);
   ThetaY_mI10_mI5__604->SetBinContent(309,0.8921829);
   ThetaY_mI10_mI5__604->SetBinContent(310,0.9485991);
   ThetaY_mI10_mI5__604->SetBinContent(311,0.986626);
   ThetaY_mI10_mI5__604->SetBinContent(312,0.9923991);
   ThetaY_mI10_mI5__604->SetBinContent(313,1.004569);
   ThetaY_mI10_mI5__604->SetBinContent(314,1.000134);
   ThetaY_mI10_mI5__604->SetBinContent(315,1.002987);
   ThetaY_mI10_mI5__604->SetBinContent(316,1);
   ThetaY_mI10_mI5__604->SetBinContent(317,1.005929);
   ThetaY_mI10_mI5__604->SetBinContent(318,1.005194);
   ThetaY_mI10_mI5__604->SetBinContent(319,1.000312);
   ThetaY_mI10_mI5__604->SetBinContent(320,0.9813655);
   ThetaY_mI10_mI5__604->SetBinContent(321,0.9610369);
   ThetaY_mI10_mI5__604->SetBinContent(322,0.8967746);
   ThetaY_mI10_mI5__604->SetBinContent(323,0.817199);
   ThetaY_mI10_mI5__604->SetBinContent(324,0.6973007);
   ThetaY_mI10_mI5__604->SetBinContent(325,0.5167287);
   ThetaY_mI10_mI5__604->SetBinContent(326,0.2421372);
   ThetaY_mI10_mI5__604->SetBinContent(327,0.05224795);
   ThetaY_mI10_mI5__604->SetBinContent(328,0.0004012215);
   ThetaY_mI10_mI5__604->SetBinError(303,9.456881e-05);
   ThetaY_mI10_mI5__604->SetBinError(304,0.001085598);
   ThetaY_mI10_mI5__604->SetBinError(305,0.002316882);
   ThetaY_mI10_mI5__604->SetBinError(306,0.003367869);
   ThetaY_mI10_mI5__604->SetBinError(307,0.003925713);
   ThetaY_mI10_mI5__604->SetBinError(308,0.004268129);
   ThetaY_mI10_mI5__604->SetBinError(309,0.004459465);
   ThetaY_mI10_mI5__604->SetBinError(310,0.004598299);
   ThetaY_mI10_mI5__604->SetBinError(311,0.00468956);
   ThetaY_mI10_mI5__604->SetBinError(312,0.00470326);
   ThetaY_mI10_mI5__604->SetBinError(313,0.004732012);
   ThetaY_mI10_mI5__604->SetBinError(314,0.004721553);
   ThetaY_mI10_mI5__604->SetBinError(315,0.004728283);
   ThetaY_mI10_mI5__604->SetBinError(316,0.004721237);
   ThetaY_mI10_mI5__604->SetBinError(317,0.004735213);
   ThetaY_mI10_mI5__604->SetBinError(318,0.004733482);
   ThetaY_mI10_mI5__604->SetBinError(319,0.004721974);
   ThetaY_mI10_mI5__604->SetBinError(320,0.004677042);
   ThetaY_mI10_mI5__604->SetBinError(321,0.004628347);
   ThetaY_mI10_mI5__604->SetBinError(322,0.004470926);
   ThetaY_mI10_mI5__604->SetBinError(323,0.004267954);
   ThetaY_mI10_mI5__604->SetBinError(324,0.003942447);
   ThetaY_mI10_mI5__604->SetBinError(325,0.003393807);
   ThetaY_mI10_mI5__604->SetBinError(326,0.0023232);
   ThetaY_mI10_mI5__604->SetBinError(327,0.001079172);
   ThetaY_mI10_mI5__604->SetBinError(328,9.456881e-05);
   ThetaY_mI10_mI5__604->SetEntries(821699);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__604->SetLineColor(ci);
   ThetaY_mI10_mI5__604->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__604->SetMarkerColor(ci);
   ThetaY_mI10_mI5__604->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__604->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__604->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__604->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__604->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__604->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__604->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__604->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__604->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__604->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__604->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__604->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__604->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__604->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__604->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__604->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__604->Draw("AEsame");
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
   
   Double_t _fx3202[26] = {
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
   Double_t _fy3202[26] = {
   0,
   0,
   0,
   0,
   0,
   0.01172772,
   0.0859435,
   0.4546809,
   0.8322164,
   0.8595687,
   0.8459746,
   0.9200048,
   0.9301292,
   1,
   0.8638875,
   0.8454493,
   0.8431874,
   0.8073773,
   0.9175393,
   0.8336586,
   0.5395192,
   0.2199261,
   0.0494633,
   0.01319454,
   0,
   0};
   Double_t _felx3202[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3202[26] = {
   0,
   0,
   0,
   0,
   0,
   0.006382826,
   0.01742509,
   0.03914569,
   0.05202828,
   0.05272864,
   0.05198963,
   0.05435335,
   0.05457617,
   0.05668927,
   0.05250563,
   0.05195725,
   0.05201349,
   0.05137748,
   0.05537169,
   0.05461651,
   0.04595688,
   0.03165639,
   0.01711932,
   0.01091532,
   0,
   0};
   Double_t _fehx3202[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3202[26] = {
   15.4358,
   0.1112902,
   0.02442617,
   0.01155935,
   0.0085075,
   0.01140881,
   0.02137546,
   0.04267127,
   0.05538854,
   0.05606808,
   0.05528847,
   0.05766474,
   0.05787773,
   0.05999913,
   0.05579935,
   0.05525403,
   0.05532668,
   0.05475699,
   0.05881989,
   0.05831894,
   0.05005014,
   0.03657859,
   0.02439875,
   0.0303458,
   0.1126201,
   15.4358};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3202,_fy3202,_felx3202,_fehx3202,_fely3202,_fehy3202);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3202 = new TH1F("Graph_Graph3202","",100,-100,100);
   Graph_Graph3202->SetMinimum(0);
   Graph_Graph3202->SetMaximum(1.5);
   Graph_Graph3202->SetDirectory(0);
   Graph_Graph3202->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3202->SetLineColor(ci);
   Graph_Graph3202->GetXaxis()->SetRange(1,100);
   Graph_Graph3202->GetXaxis()->CenterTitle(true);
   Graph_Graph3202->GetXaxis()->SetLabelFont(42);
   Graph_Graph3202->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3202->GetXaxis()->SetTitleFont(42);
   Graph_Graph3202->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3202->GetYaxis()->CenterTitle(true);
   Graph_Graph3202->GetYaxis()->SetLabelFont(42);
   Graph_Graph3202->GetYaxis()->SetTitleFont(42);
   Graph_Graph3202->GetZaxis()->SetLabelFont(42);
   Graph_Graph3202->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3202->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3202);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106522,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__605 = new TH2D("ThetaY_vs_Y_mI10_mI5__605","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(7889,18);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(7915,2372);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(7941,10804);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(7967,22829);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(7993,31018);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8019,36665);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8045,40026);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8071,42557);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8097,44263);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8123,44522);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8149,45068);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8175,44869);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8201,44997);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8227,44863);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8253,45129);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8279,45096);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8305,44877);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8331,44027);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8357,43115);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8383,40232);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8409,36662);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8435,31283);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8461,23182);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8487,10863);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8513,2344);
   ThetaY_vs_Y_mI10_mI5__605->SetBinContent(8539,18);
   ThetaY_vs_Y_mI10_mI5__605->SetEntries(821699);
   ThetaY_vs_Y_mI10_mI5__605->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(1,2256.45);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(2,4512.9);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(3,6769.35);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(4,9025.8);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(5,11282.25);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(6,13538.7);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(7,15795.15);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(8,18051.6);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(9,20308.05);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(10,22564.5);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(11,24820.95);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(12,27077.4);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(13,29333.85);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(14,31590.3);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(15,33846.75);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(16,36103.2);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(17,38359.65);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(18,40616.1);
   ThetaY_vs_Y_mI10_mI5__605->SetContourLevel(19,42872.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__605->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__605->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__605->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__605->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__605->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__605->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__605->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__605->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__605->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__605->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__605->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__605->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__605->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__605->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__605->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__605->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-10_-5","Reco vertices","lpf");
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
