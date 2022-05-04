void S12S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.06508183,125,1.236555);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI35_mI30__474 = new TH1D("S12S18_ThetaY_mI35_mI30__474","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(313,0.07692308);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(314,0.3846154);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(315,0.6923077);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(316,0.6410256);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(317,0.7948718);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(318,0.8974359);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(319,0.7948718);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(320,1);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(321,0.5897436);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(322,0.8461538);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(323,0.6923077);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(324,0.6410256);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(325,0.7435897);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(326,0.6410256);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(327,0.4358974);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(328,0.3589744);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(329,0.02564103);
   S12S18_ThetaY_mI35_mI30__474->SetBinContent(330,0.05128205);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(313,0.04441156);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(314,0.09930727);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(315,0.1332347);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(316,0.1282051);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(317,0.1427632);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(318,0.1516944);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(319,0.1427632);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(320,0.1601282);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(321,0.12297);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(322,0.1472965);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(323,0.1332347);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(324,0.1282051);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(325,0.1380811);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(326,0.1282051);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(327,0.1057207);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(328,0.09593993);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(329,0.02564103);
   S12S18_ThetaY_mI35_mI30__474->SetBinError(330,0.03626189);
   S12S18_ThetaY_mI35_mI30__474->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__474->SetMaximum(1.106391);
   S12S18_ThetaY_mI35_mI30__474->SetEntries(402);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__474->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__474->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__474->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__474->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__474->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__474->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__474->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__474->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__474->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__474->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__474->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__474->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__474->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__474->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__474->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__474->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__475 = new TH1D("ThetaY_mI35_mI30__475","",630,-1575,1575);
   ThetaY_mI35_mI30__475->SetBinContent(300,0.005126452);
   ThetaY_mI35_mI30__475->SetBinContent(301,0.0608339);
   ThetaY_mI35_mI30__475->SetBinContent(302,0.1978811);
   ThetaY_mI35_mI30__475->SetBinContent(303,0.3754272);
   ThetaY_mI35_mI30__475->SetBinContent(304,0.5936432);
   ThetaY_mI35_mI30__475->SetBinContent(305,0.7496582);
   ThetaY_mI35_mI30__475->SetBinContent(306,0.819378);
   ThetaY_mI35_mI30__475->SetBinContent(307,0.8983254);
   ThetaY_mI35_mI30__475->SetBinContent(308,0.9569378);
   ThetaY_mI35_mI30__475->SetBinContent(309,0.9823992);
   ThetaY_mI35_mI30__475->SetBinContent(310,1.00581);
   ThetaY_mI35_mI30__475->SetBinContent(311,0.9789815);
   ThetaY_mI35_mI30__475->SetBinContent(312,0.9906015);
   ThetaY_mI35_mI30__475->SetBinContent(313,0.9752221);
   ThetaY_mI35_mI30__475->SetBinContent(314,0.9728298);
   ThetaY_mI35_mI30__475->SetBinContent(315,0.9743677);
   ThetaY_mI35_mI30__475->SetBinContent(316,0.99419);
   ThetaY_mI35_mI30__475->SetBinContent(317,0.9545455);
   ThetaY_mI35_mI30__475->SetBinContent(318,0.9914559);
   ThetaY_mI35_mI30__475->SetBinContent(319,0.9984621);
   ThetaY_mI35_mI30__475->SetBinContent(320,1);
   ThetaY_mI35_mI30__475->SetBinContent(321,0.997095);
   ThetaY_mI35_mI30__475->SetBinContent(322,0.958134);
   ThetaY_mI35_mI30__475->SetBinContent(323,0.9482228);
   ThetaY_mI35_mI30__475->SetBinContent(324,0.9055024);
   ThetaY_mI35_mI30__475->SetBinContent(325,0.8472317);
   ThetaY_mI35_mI30__475->SetBinContent(326,0.7378674);
   ThetaY_mI35_mI30__475->SetBinContent(327,0.5746753);
   ThetaY_mI35_mI30__475->SetBinContent(328,0.3896104);
   ThetaY_mI35_mI30__475->SetBinContent(329,0.187799);
   ThetaY_mI35_mI30__475->SetBinContent(330,0.06220096);
   ThetaY_mI35_mI30__475->SetBinContent(331,0.004272044);
   ThetaY_mI35_mI30__475->SetBinError(300,0.0009359579);
   ThetaY_mI35_mI30__475->SetBinError(301,0.00322419);
   ThetaY_mI35_mI30__475->SetBinError(302,0.005815003);
   ThetaY_mI35_mI30__475->SetBinError(303,0.008009598);
   ThetaY_mI35_mI30__475->SetBinError(304,0.01007188);
   ThetaY_mI35_mI30__475->SetBinError(305,0.01131826);
   ThetaY_mI35_mI30__475->SetBinError(306,0.01183287);
   ThetaY_mI35_mI30__475->SetBinError(307,0.01238981);
   ThetaY_mI35_mI30__475->SetBinError(308,0.01278762);
   ThetaY_mI35_mI30__475->SetBinError(309,0.01295662);
   ThetaY_mI35_mI30__475->SetBinError(310,0.01311009);
   ThetaY_mI35_mI30__475->SetBinError(311,0.01293407);
   ThetaY_mI35_mI30__475->SetBinError(312,0.0130106);
   ThetaY_mI35_mI30__475->SetBinError(313,0.01290921);
   ThetaY_mI35_mI30__475->SetBinError(314,0.01289336);
   ThetaY_mI35_mI30__475->SetBinError(315,0.01290355);
   ThetaY_mI35_mI30__475->SetBinError(316,0.01303414);
   ThetaY_mI35_mI30__475->SetBinError(317,0.01277162);
   ThetaY_mI35_mI30__475->SetBinError(318,0.01301621);
   ThetaY_mI35_mI30__475->SetBinError(319,0.01306212);
   ThetaY_mI35_mI30__475->SetBinError(320,0.01307217);
   ThetaY_mI35_mI30__475->SetBinError(321,0.01305317);
   ThetaY_mI35_mI30__475->SetBinError(322,0.01279561);
   ThetaY_mI35_mI30__475->SetBinError(323,0.01272926);
   ThetaY_mI35_mI30__475->SetBinError(324,0.01243921);
   ThetaY_mI35_mI30__475->SetBinError(325,0.01203231);
   ThetaY_mI35_mI30__475->SetBinError(326,0.01122889);
   ThetaY_mI35_mI30__475->SetBinError(327,0.009909668);
   ThetaY_mI35_mI30__475->SetBinError(328,0.008159492);
   ThetaY_mI35_mI30__475->SetBinError(329,0.00566493);
   ThetaY_mI35_mI30__475->SetBinError(330,0.003260216);
   ThetaY_mI35_mI30__475->SetBinError(331,0.0008544087);
   ThetaY_mI35_mI30__475->SetEntries(135115);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__475->SetLineColor(ci);
   ThetaY_mI35_mI30__475->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__475->SetMarkerColor(ci);
   ThetaY_mI35_mI30__475->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__475->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__475->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__475->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__475->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__475->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__475->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__475->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__475->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__475->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__475->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__475->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__475->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__475->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__475->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__475->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__475->Draw("AEsame");
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
   
   Double_t _fx3159[32] = {
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
   Double_t _fy3159[32] = {
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
   0,
   0,
   0,
   0.07887749,
   0.3953573,
   0.7105199,
   0.6447718,
   0.8327228,
   0.9051697,
   0.7960961,
   1,
   0.5914618,
   0.8831269,
   0.7301108,
   0.7079226,
   0.8776699,
   0.8687545,
   0.7585108,
   0.9213675,
   0.1365344,
   0.8244576,
   0};
   Double_t _felx3159[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3159[32] = {
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
   0,
   0,
   0,
   0.04293617,
   0.1010563,
   0.1361977,
   0.1283507,
   0.1491498,
   0.1527131,
   0.1425728,
   0.159956,
   0.1226566,
   0.1533861,
   0.1399618,
   0.1409502,
   0.1624917,
   0.1730612,
   0.1825749,
   0.243971,
   0.1129671,
   0.5334391,
   0};
   Double_t _fehx3159[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3159[32] = {
   9.496668,
   0.7779865,
   0.2387456,
   0.1257913,
   0.07953969,
   0.06298282,
   0.05762267,
   0.05255774,
   0.04933805,
   0.04805912,
   0.04694034,
   0.04822692,
   0.04766112,
   0.07676618,
   0.1309273,
   0.1652219,
   0.1568801,
   0.1786299,
   0.180972,
   0.1707478,
   0.1878772,
   0.1512017,
   0.1826919,
   0.1697911,
   0.1722903,
   0.1958126,
   0.2115728,
   0.232947,
   0.3192088,
   0.314436,
   1.094339,
   11.46694};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3159,_fy3159,_felx3159,_fehx3159,_fely3159,_fehy3159);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3159 = new TH1F("Graph_Graph3159","",100,-100,100);
   Graph_Graph3159->SetMinimum(0);
   Graph_Graph3159->SetMaximum(1.5);
   Graph_Graph3159->SetDirectory(0);
   Graph_Graph3159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3159->SetLineColor(ci);
   Graph_Graph3159->GetXaxis()->SetRange(1,100);
   Graph_Graph3159->GetXaxis()->CenterTitle(true);
   Graph_Graph3159->GetXaxis()->SetLabelFont(42);
   Graph_Graph3159->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3159->GetXaxis()->SetTitleFont(42);
   Graph_Graph3159->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3159->GetYaxis()->CenterTitle(true);
   Graph_Graph3159->GetYaxis()->SetLabelFont(42);
   Graph_Graph3159->GetYaxis()->SetTitleFont(42);
   Graph_Graph3159->GetZaxis()->SetLabelFont(42);
   Graph_Graph3159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3159->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3159);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106391,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__476 = new TH2D("ThetaY_vs_Y_mI35_mI30__476","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7806,30);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7832,356);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7858,1158);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7884,2197);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7910,3474);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7936,4387);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7962,4795);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(7988,5257);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8014,5600);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8040,5749);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8066,5886);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8092,5729);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8118,5797);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8144,5707);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8170,5693);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8196,5702);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8222,5818);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8248,5586);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8274,5802);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8300,5843);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8326,5852);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8352,5835);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8378,5607);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8404,5549);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8430,5299);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8456,4958);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8482,4318);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8508,3363);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8534,2280);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8560,1099);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8586,364);
   ThetaY_vs_Y_mI35_mI30__476->SetBinContent(8612,25);
   ThetaY_vs_Y_mI35_mI30__476->SetEntries(135115);
   ThetaY_vs_Y_mI35_mI30__476->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(1,294.3);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(2,588.6);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(3,882.9);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(4,1177.2);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(5,1471.5);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(6,1765.8);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(7,2060.1);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(8,2354.4);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(9,2648.7);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(10,2943);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(11,3237.3);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(12,3531.6);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(13,3825.9);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(14,4120.2);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(15,4414.5);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(16,4708.8);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(17,5003.1);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(18,5297.4);
   ThetaY_vs_Y_mI35_mI30__476->SetContourLevel(19,5591.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__476->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__476->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__476->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__476->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__476->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__476->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__476->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__476->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__476->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__476->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__476->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__476->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__476->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__476->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__476->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__476->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-35_-30","Reco vertices","lpf");
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
