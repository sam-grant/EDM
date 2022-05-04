void S18_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.06579853,125,1.250172);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__591 = new TH1D("S18_ThetaY_mI30_mI25__591","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__591->SetBinContent(313,0.3068182);
   S18_ThetaY_mI30_mI25__591->SetBinContent(314,0.6704545);
   S18_ThetaY_mI30_mI25__591->SetBinContent(315,0.6818182);
   S18_ThetaY_mI30_mI25__591->SetBinContent(316,0.7386364);
   S18_ThetaY_mI30_mI25__591->SetBinContent(317,1);
   S18_ThetaY_mI30_mI25__591->SetBinContent(318,0.6818182);
   S18_ThetaY_mI30_mI25__591->SetBinContent(319,0.8409091);
   S18_ThetaY_mI30_mI25__591->SetBinContent(320,0.8863636);
   S18_ThetaY_mI30_mI25__591->SetBinContent(321,0.6363636);
   S18_ThetaY_mI30_mI25__591->SetBinContent(322,0.7727273);
   S18_ThetaY_mI30_mI25__591->SetBinContent(323,0.6477273);
   S18_ThetaY_mI30_mI25__591->SetBinContent(324,0.625);
   S18_ThetaY_mI30_mI25__591->SetBinContent(325,0.4318182);
   S18_ThetaY_mI30_mI25__591->SetBinContent(326,0.1704545);
   S18_ThetaY_mI30_mI25__591->SetBinContent(327,0.02272727);
   S18_ThetaY_mI30_mI25__591->SetBinError(313,0.05904719);
   S18_ThetaY_mI30_mI25__591->SetBinError(314,0.08728575);
   S18_ThetaY_mI30_mI25__591->SetBinError(315,0.08802235);
   S18_ThetaY_mI30_mI25__591->SetBinError(316,0.09161657);
   S18_ThetaY_mI30_mI25__591->SetBinError(317,0.1066004);
   S18_ThetaY_mI30_mI25__591->SetBinError(318,0.08802235);
   S18_ThetaY_mI30_mI25__591->SetBinError(319,0.0977537);
   S18_ThetaY_mI30_mI25__591->SetBinError(320,0.1003609);
   S18_ThetaY_mI30_mI25__591->SetBinError(321,0.08503767);
   S18_ThetaY_mI30_mI25__591->SetBinError(322,0.09370695);
   S18_ThetaY_mI30_mI25__591->SetBinError(323,0.08579357);
   S18_ThetaY_mI30_mI25__591->SetBinError(324,0.08427498);
   S18_ThetaY_mI30_mI25__591->SetBinError(325,0.07005016);
   S18_ThetaY_mI30_mI25__591->SetBinError(326,0.04401117);
   S18_ThetaY_mI30_mI25__591->SetBinError(327,0.01607061);
   S18_ThetaY_mI30_mI25__591->SetMinimum(0);
   S18_ThetaY_mI30_mI25__591->SetMaximum(1.118575);
   S18_ThetaY_mI30_mI25__591->SetEntries(802);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__591->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__591->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__591->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__591->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__591->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__591->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__591->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__591->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__591->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__591->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__591->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__591->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__591->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__591->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__591->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__591->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__592 = new TH1D("ThetaY_mI30_mI25__592","",630,-1575,1575);
   ThetaY_mI30_mI25__592->SetBinContent(303,0.0003446196);
   ThetaY_mI30_mI25__592->SetBinContent(304,0.04850521);
   ThetaY_mI30_mI25__592->SetBinContent(305,0.2398553);
   ThetaY_mI30_mI25__592->SetBinContent(306,0.5060739);
   ThetaY_mI30_mI25__592->SetBinContent(307,0.7151719);
   ThetaY_mI30_mI25__592->SetBinContent(308,0.8340657);
   ThetaY_mI30_mI25__592->SetBinContent(309,0.8901525);
   ThetaY_mI30_mI25__592->SetBinContent(310,0.9539071);
   ThetaY_mI30_mI25__592->SetBinContent(311,0.9709658);
   ThetaY_mI30_mI25__592->SetBinContent(312,0.9775997);
   ThetaY_mI30_mI25__592->SetBinContent(313,0.9959507);
   ThetaY_mI30_mI25__592->SetBinContent(314,1.016886);
   ThetaY_mI30_mI25__592->SetBinContent(315,0.9936245);
   ThetaY_mI30_mI25__592->SetBinContent(316,0.985009);
   ThetaY_mI30_mI25__592->SetBinContent(317,1);
   ThetaY_mI30_mI25__592->SetBinContent(318,1.002326);
   ThetaY_mI30_mI25__592->SetBinContent(319,0.9990523);
   ThetaY_mI30_mI25__592->SetBinContent(320,0.9830275);
   ThetaY_mI30_mI25__592->SetBinContent(321,0.9585595);
   ThetaY_mI30_mI25__592->SetBinContent(322,0.8979926);
   ThetaY_mI30_mI25__592->SetBinContent(323,0.8318256);
   ThetaY_mI30_mI25__592->SetBinContent(324,0.672956);
   ThetaY_mI30_mI25__592->SetBinContent(325,0.5129663);
   ThetaY_mI30_mI25__592->SetBinContent(326,0.2339106);
   ThetaY_mI30_mI25__592->SetBinContent(327,0.050056);
   ThetaY_mI30_mI25__592->SetBinContent(328,0.0005169294);
   ThetaY_mI30_mI25__592->SetBinError(303,0.0001723098);
   ThetaY_mI30_mI25__592->SetBinError(304,0.002044251);
   ThetaY_mI30_mI25__592->SetBinError(305,0.004545845);
   ThetaY_mI30_mI25__592->SetBinError(306,0.006603087);
   ThetaY_mI30_mI25__592->SetBinError(307,0.007849558);
   ThetaY_mI30_mI25__592->SetBinError(308,0.00847696);
   ThetaY_mI30_mI25__592->SetBinError(309,0.00875734);
   ThetaY_mI30_mI25__592->SetBinError(310,0.009065527);
   ThetaY_mI30_mI25__592->SetBinError(311,0.009146227);
   ThetaY_mI30_mI25__592->SetBinError(312,0.009177419);
   ThetaY_mI30_mI25__592->SetBinError(313,0.009263155);
   ThetaY_mI30_mI25__592->SetBinError(314,0.009360008);
   ThetaY_mI30_mI25__592->SetBinError(315,0.009252331);
   ThetaY_mI30_mI25__592->SetBinError(316,0.009212131);
   ThetaY_mI30_mI25__592->SetBinError(317,0.009281967);
   ThetaY_mI30_mI25__592->SetBinError(318,0.009292756);
   ThetaY_mI30_mI25__592->SetBinError(319,0.009277567);
   ThetaY_mI30_mI25__592->SetBinError(320,0.00920286);
   ThetaY_mI30_mI25__592->SetBinError(321,0.009087607);
   ThetaY_mI30_mI25__592->SetBinError(322,0.008795821);
   ThetaY_mI30_mI25__592->SetBinError(323,0.008465569);
   ThetaY_mI30_mI25__592->SetBinError(324,0.007614359);
   ThetaY_mI30_mI25__592->SetBinError(325,0.006647899);
   ThetaY_mI30_mI25__592->SetBinError(326,0.004489158);
   ThetaY_mI30_mI25__592->SetBinError(327,0.002076673);
   ThetaY_mI30_mI25__592->SetBinError(328,0.0002110356);
   ThetaY_mI30_mI25__592->SetEntries(212075);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__592->SetLineColor(ci);
   ThetaY_mI30_mI25__592->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__592->SetMarkerColor(ci);
   ThetaY_mI30_mI25__592->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__592->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__592->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__592->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__592->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__592->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__592->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__592->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__592->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__592->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__592->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__592->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__592->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__592->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__592->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__592->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__592->Draw("AEsame");
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
   
   Double_t _fx3198[26] = {
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
   Double_t _fy3198[26] = {
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
   0.3080656,
   0.659321,
   0.686193,
   0.7498777,
   1,
   0.6802358,
   0.8417068,
   0.9016672,
   0.663875,
   0.8605052,
   0.7786816,
   0.9287383,
   0.8418061,
   0.7287167,
   0.4540369,
   0};
   Double_t _felx3198[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3198[26] = {
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
   0.05898417,
   0.08580248,
   0.08856535,
   0.09303042,
   0.1067956,
   0.08779453,
   0.09793177,
   0.1022177,
   0.0886668,
   0.1044285,
   0.1031334,
   0.1252802,
   0.1363776,
   0.1865174,
   0.2935822,
   0};
   Double_t _fehx3198[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3198[26] = {
   77.0914,
   0.4320143,
   0.08725103,
   0.0413457,
   0.02925593,
   0.02508518,
   0.02350447,
   0.02193341,
   0.02154804,
   0.0214018,
   0.07153109,
   0.09777588,
   0.1008156,
   0.1053647,
   0.1188692,
   0.09993778,
   0.1100569,
   0.1145289,
   0.1013901,
   0.1179531,
   0.1178018,
   0.1434562,
   0.1605162,
   0.241786,
   0.6012351,
   47.36702};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3198,_fy3198,_felx3198,_fehx3198,_fely3198,_fehy3198);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3198 = new TH1F("Graph_Graph3198","",100,-100,100);
   Graph_Graph3198->SetMinimum(0);
   Graph_Graph3198->SetMaximum(1.5);
   Graph_Graph3198->SetDirectory(0);
   Graph_Graph3198->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3198->SetLineColor(ci);
   Graph_Graph3198->GetXaxis()->SetRange(1,100);
   Graph_Graph3198->GetXaxis()->CenterTitle(true);
   Graph_Graph3198->GetXaxis()->SetLabelFont(42);
   Graph_Graph3198->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3198->GetXaxis()->SetTitleFont(42);
   Graph_Graph3198->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3198->GetYaxis()->CenterTitle(true);
   Graph_Graph3198->GetYaxis()->SetLabelFont(42);
   Graph_Graph3198->GetYaxis()->SetTitleFont(42);
   Graph_Graph3198->GetZaxis()->SetLabelFont(42);
   Graph_Graph3198->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3198->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3198);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.118575,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__593 = new TH2D("ThetaY_vs_Y_mI30_mI25__593","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(7885,4);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(7911,563);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(7937,2784);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(7963,5874);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(7989,8301);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8015,9681);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8041,10332);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8067,11072);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8093,11270);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8119,11347);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8145,11560);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8171,11803);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8197,11533);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8223,11433);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8249,11607);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8275,11634);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8301,11596);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8327,11410);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8353,11126);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8379,10423);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8405,9655);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8431,7811);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8457,5954);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8483,2715);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8509,581);
   ThetaY_vs_Y_mI30_mI25__593->SetBinContent(8535,6);
   ThetaY_vs_Y_mI30_mI25__593->SetEntries(212075);
   ThetaY_vs_Y_mI30_mI25__593->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(1,590.15);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(2,1180.3);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(3,1770.45);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(4,2360.6);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(5,2950.75);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(6,3540.9);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(7,4131.05);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(8,4721.2);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(9,5311.35);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(10,5901.5);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(11,6491.65);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(12,7081.8);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(13,7671.95);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(14,8262.1);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(15,8852.25);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(16,9442.4);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(17,10032.55);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(18,10622.7);
   ThetaY_vs_Y_mI30_mI25__593->SetContourLevel(19,11212.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__593->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__593->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__593->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__593->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__593->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__593->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__593->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__593->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__593->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__593->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__593->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__593->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__593->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__593->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__593->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__593->Draw("COL");
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
