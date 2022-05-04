void S12S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0656424,125,1.247206);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__672 = new TH1D("S12S18_ThetaY_10_15__672","",630,-1575,1575);
   S12S18_ThetaY_10_15__672->SetBinContent(304,0.00204499);
   S12S18_ThetaY_10_15__672->SetBinContent(305,0.03271984);
   S12S18_ThetaY_10_15__672->SetBinContent(306,0.07361963);
   S12S18_ThetaY_10_15__672->SetBinContent(307,0.4171779);
   S12S18_ThetaY_10_15__672->SetBinContent(308,0.7893661);
   S12S18_ThetaY_10_15__672->SetBinContent(309,0.7791411);
   S12S18_ThetaY_10_15__672->SetBinContent(310,0.8752556);
   S12S18_ThetaY_10_15__672->SetBinContent(311,0.8997955);
   S12S18_ThetaY_10_15__672->SetBinContent(312,1);
   S12S18_ThetaY_10_15__672->SetBinContent(313,0.9018405);
   S12S18_ThetaY_10_15__672->SetBinContent(314,0.8650307);
   S12S18_ThetaY_10_15__672->SetBinContent(315,0.8957055);
   S12S18_ThetaY_10_15__672->SetBinContent(316,0.9120654);
   S12S18_ThetaY_10_15__672->SetBinContent(317,0.8834356);
   S12S18_ThetaY_10_15__672->SetBinContent(318,0.9222904);
   S12S18_ThetaY_10_15__672->SetBinContent(319,0.8139059);
   S12S18_ThetaY_10_15__672->SetBinContent(320,0.5296524);
   S12S18_ThetaY_10_15__672->SetBinContent(321,0.05521472);
   S12S18_ThetaY_10_15__672->SetBinError(304,0.00204499);
   S12S18_ThetaY_10_15__672->SetBinError(305,0.008179959);
   S12S18_ThetaY_10_15__672->SetBinError(306,0.01226994);
   S12S18_ThetaY_10_15__672->SetBinError(307,0.0292083);
   S12S18_ThetaY_10_15__672->SetBinError(308,0.04017767);
   S12S18_ThetaY_10_15__672->SetBinError(309,0.03991661);
   S12S18_ThetaY_10_15__672->SetBinError(310,0.04230708);
   S12S18_ThetaY_10_15__672->SetBinError(311,0.04289607);
   S12S18_ThetaY_10_15__672->SetBinError(312,0.04522156);
   S12S18_ThetaY_10_15__672->SetBinError(313,0.04294479);
   S12S18_ThetaY_10_15__672->SetBinError(314,0.04205923);
   S12S18_ThetaY_10_15__672->SetBinError(315,0.04279847);
   S12S18_ThetaY_10_15__672->SetBinError(316,0.04318755);
   S12S18_ThetaY_10_15__672->SetBinError(317,0.04250431);
   S12S18_ThetaY_10_15__672->SetBinError(318,0.04342896);
   S12S18_ThetaY_10_15__672->SetBinError(319,0.04079742);
   S12S18_ThetaY_10_15__672->SetBinError(320,0.032911);
   S12S18_ThetaY_10_15__672->SetBinError(321,0.01062608);
   S12S18_ThetaY_10_15__672->SetMinimum(0);
   S12S18_ThetaY_10_15__672->SetMaximum(1.115921);
   S12S18_ThetaY_10_15__672->SetEntries(5696);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__672->SetLineColor(ci);
   S12S18_ThetaY_10_15__672->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__672->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__672->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__672->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__672->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__672->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__672->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__672->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__672->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__672->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__672->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__672->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__672->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__672->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__672->Draw("AE");
   
   TH1D *ThetaY_10_15__673 = new TH1D("ThetaY_10_15__673","",630,-1575,1575);
   ThetaY_10_15__673->SetBinContent(303,0.0004633668);
   ThetaY_10_15__673->SetBinContent(304,0.05304187);
   ThetaY_10_15__673->SetBinContent(305,0.2432403);
   ThetaY_10_15__673->SetBinContent(306,0.5085859);
   ThetaY_10_15__673->SetBinContent(307,0.7001472);
   ThetaY_10_15__673->SetBinContent(308,0.8122274);
   ThetaY_10_15__673->SetBinContent(309,0.9020116);
   ThetaY_10_15__673->SetBinContent(310,0.947476);
   ThetaY_10_15__673->SetBinContent(311,0.9861535);
   ThetaY_10_15__673->SetBinContent(312,1);
   ThetaY_10_15__673->SetBinContent(313,1.009349);
   ThetaY_10_15__673->SetBinContent(314,1.003298);
   ThetaY_10_15__673->SetBinContent(315,1.014473);
   ThetaY_10_15__673->SetBinContent(316,1.004743);
   ThetaY_10_15__673->SetBinContent(317,1.002262);
   ThetaY_10_15__673->SetBinContent(318,1.003053);
   ThetaY_10_15__673->SetBinContent(319,0.9971653);
   ThetaY_10_15__673->SetBinContent(320,0.9823103);
   ThetaY_10_15__673->SetBinContent(321,0.9520007);
   ThetaY_10_15__673->SetBinContent(322,0.9005669);
   ThetaY_10_15__673->SetBinContent(323,0.8353958);
   ThetaY_10_15__673->SetBinContent(324,0.6902257);
   ThetaY_10_15__673->SetBinContent(325,0.5042248);
   ThetaY_10_15__673->SetBinContent(326,0.2435674);
   ThetaY_10_15__673->SetBinContent(327,0.05475905);
   ThetaY_10_15__673->SetBinContent(328,0.000408853);
   ThetaY_10_15__673->SetBinError(303,0.0001123829);
   ThetaY_10_15__673->SetBinError(304,0.001202396);
   ThetaY_10_15__673->SetBinError(305,0.002574873);
   ThetaY_10_15__673->SetBinError(306,0.003723232);
   ThetaY_10_15__673->SetBinError(307,0.004368503);
   ThetaY_10_15__673->SetBinError(308,0.004705186);
   ThetaY_10_15__673->SetBinError(309,0.004958428);
   ThetaY_10_15__673->SetBinError(310,0.005081853);
   ThetaY_10_15__673->SetBinError(311,0.00518454);
   ThetaY_10_15__673->SetBinError(312,0.005220811);
   ThetaY_10_15__673->SetBinError(313,0.005245159);
   ThetaY_10_15__673->SetBinError(314,0.005229413);
   ThetaY_10_15__673->SetBinError(315,0.005258457);
   ThetaY_10_15__673->SetBinError(316,0.005233177);
   ThetaY_10_15__673->SetBinError(317,0.005226713);
   ThetaY_10_15__673->SetBinError(318,0.005228774);
   ThetaY_10_15__673->SetBinError(319,0.005213406);
   ThetaY_10_15__673->SetBinError(320,0.005174428);
   ThetaY_10_15__673->SetBinError(321,0.005093973);
   ThetaY_10_15__673->SetBinError(322,0.004954456);
   ThetaY_10_15__673->SetBinError(323,0.004771821);
   ThetaY_10_15__673->SetBinError(324,0.004337441);
   ThetaY_10_15__673->SetBinError(325,0.003707235);
   ThetaY_10_15__673->SetBinError(326,0.002576603);
   ThetaY_10_15__673->SetBinError(327,0.001221704);
   ThetaY_10_15__673->SetBinError(328,0.0001055654);
   ThetaY_10_15__673->SetEntries(673267);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__673->SetLineColor(ci);
   ThetaY_10_15__673->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__673->SetMarkerColor(ci);
   ThetaY_10_15__673->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__673->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__673->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__673->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__673->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__673->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__673->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__673->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__673->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__673->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__673->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__673->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__673->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__673->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__673->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__673->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__673->Draw("AEsame");
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
   
   Double_t _fx3225[26] = {
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
   Double_t _fy3225[26] = {
   0,
   0.03855426,
   0.1345165,
   0.1447536,
   0.5958432,
   0.9718535,
   0.8637817,
   0.923776,
   0.9124294,
   1,
   0.8934872,
   0.8621871,
   0.8829266,
   0.9077602,
   0.8814415,
   0.9194834,
   0.8162197,
   0.5391905,
   0.05799862,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3225[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3225[26] = {
   0,
   0.03189699,
   0.03330246,
   0.02403554,
   0.04184757,
   0.04976302,
   0.04448671,
   0.04490828,
   0.04374486,
   0.04550578,
   0.04278282,
   0.04214394,
   0.04241863,
   0.04322617,
   0.04263969,
   0.04354457,
   0.04111752,
   0.03360168,
   0.01109642,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3225[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3225[26] = {
   8.581306,
   0.08873172,
   0.04278524,
   0.02840259,
   0.04489691,
   0.05238052,
   0.04684051,
   0.04714774,
   0.04589543,
   0.04762652,
   0.04488335,
   0.04425729,
   0.04450841,
   0.04533647,
   0.04475525,
   0.04565849,
   0.04324411,
   0.03576491,
   0.01345401,
   0.004180672,
   0.004506826,
   0.005454748,
   0.007467022,
   0.0154588,
   0.06878491,
   9.797311};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3225,_fy3225,_felx3225,_fehx3225,_fely3225,_fehy3225);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3225 = new TH1F("Graph_Graph3225","",100,-100,100);
   Graph_Graph3225->SetMinimum(0);
   Graph_Graph3225->SetMaximum(1.5);
   Graph_Graph3225->SetDirectory(0);
   Graph_Graph3225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3225->SetLineColor(ci);
   Graph_Graph3225->GetXaxis()->SetRange(1,100);
   Graph_Graph3225->GetXaxis()->CenterTitle(true);
   Graph_Graph3225->GetXaxis()->SetLabelFont(42);
   Graph_Graph3225->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3225->GetXaxis()->SetTitleFont(42);
   Graph_Graph3225->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3225->GetYaxis()->CenterTitle(true);
   Graph_Graph3225->GetYaxis()->SetLabelFont(42);
   Graph_Graph3225->GetYaxis()->SetTitleFont(42);
   Graph_Graph3225->GetZaxis()->SetLabelFont(42);
   Graph_Graph3225->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3225->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3225);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.115921,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__674 = new TH2D("ThetaY_vs_Y_10_15__674","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__674->SetBinContent(7893,17);
   ThetaY_vs_Y_10_15__674->SetBinContent(7919,1946);
   ThetaY_vs_Y_10_15__674->SetBinContent(7945,8924);
   ThetaY_vs_Y_10_15__674->SetBinContent(7971,18659);
   ThetaY_vs_Y_10_15__674->SetBinContent(7997,25687);
   ThetaY_vs_Y_10_15__674->SetBinContent(8023,29799);
   ThetaY_vs_Y_10_15__674->SetBinContent(8049,33093);
   ThetaY_vs_Y_10_15__674->SetBinContent(8075,34761);
   ThetaY_vs_Y_10_15__674->SetBinContent(8101,36180);
   ThetaY_vs_Y_10_15__674->SetBinContent(8127,36688);
   ThetaY_vs_Y_10_15__674->SetBinContent(8153,37031);
   ThetaY_vs_Y_10_15__674->SetBinContent(8179,36809);
   ThetaY_vs_Y_10_15__674->SetBinContent(8205,37219);
   ThetaY_vs_Y_10_15__674->SetBinContent(8231,36862);
   ThetaY_vs_Y_10_15__674->SetBinContent(8257,36771);
   ThetaY_vs_Y_10_15__674->SetBinContent(8283,36800);
   ThetaY_vs_Y_10_15__674->SetBinContent(8309,36584);
   ThetaY_vs_Y_10_15__674->SetBinContent(8335,36039);
   ThetaY_vs_Y_10_15__674->SetBinContent(8361,34927);
   ThetaY_vs_Y_10_15__674->SetBinContent(8387,33040);
   ThetaY_vs_Y_10_15__674->SetBinContent(8413,30649);
   ThetaY_vs_Y_10_15__674->SetBinContent(8439,25323);
   ThetaY_vs_Y_10_15__674->SetBinContent(8465,18499);
   ThetaY_vs_Y_10_15__674->SetBinContent(8491,8936);
   ThetaY_vs_Y_10_15__674->SetBinContent(8517,2009);
   ThetaY_vs_Y_10_15__674->SetBinContent(8543,15);
   ThetaY_vs_Y_10_15__674->SetEntries(673267);
   ThetaY_vs_Y_10_15__674->SetContour(20);
   ThetaY_vs_Y_10_15__674->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__674->SetContourLevel(1,1860.95);
   ThetaY_vs_Y_10_15__674->SetContourLevel(2,3721.9);
   ThetaY_vs_Y_10_15__674->SetContourLevel(3,5582.85);
   ThetaY_vs_Y_10_15__674->SetContourLevel(4,7443.8);
   ThetaY_vs_Y_10_15__674->SetContourLevel(5,9304.75);
   ThetaY_vs_Y_10_15__674->SetContourLevel(6,11165.7);
   ThetaY_vs_Y_10_15__674->SetContourLevel(7,13026.65);
   ThetaY_vs_Y_10_15__674->SetContourLevel(8,14887.6);
   ThetaY_vs_Y_10_15__674->SetContourLevel(9,16748.55);
   ThetaY_vs_Y_10_15__674->SetContourLevel(10,18609.5);
   ThetaY_vs_Y_10_15__674->SetContourLevel(11,20470.45);
   ThetaY_vs_Y_10_15__674->SetContourLevel(12,22331.4);
   ThetaY_vs_Y_10_15__674->SetContourLevel(13,24192.35);
   ThetaY_vs_Y_10_15__674->SetContourLevel(14,26053.3);
   ThetaY_vs_Y_10_15__674->SetContourLevel(15,27914.25);
   ThetaY_vs_Y_10_15__674->SetContourLevel(16,29775.2);
   ThetaY_vs_Y_10_15__674->SetContourLevel(17,31636.15);
   ThetaY_vs_Y_10_15__674->SetContourLevel(18,33497.1);
   ThetaY_vs_Y_10_15__674->SetContourLevel(19,35358.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__674->SetLineColor(ci);
   ThetaY_vs_Y_10_15__674->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__674->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__674->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__674->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__674->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__674->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__674->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__674->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__674->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__674->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__674->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__674->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__674->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__674->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__674->Draw("COL");
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
