void S12S18_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.06586095,125,1.251358);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI30_mI25__648 = new TH1D("S12S18_ThetaY_mI30_mI25__648","",630,-1575,1575);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(312,0.00621118);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(313,0.2919255);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(314,0.8322981);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(315,0.8136646);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(316,0.8571429);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(317,0.9440994);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(318,0.7950311);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(319,1);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(320,0.9378882);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(321,0.757764);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(322,0.8447205);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(323,0.7453416);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(324,0.5900621);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(325,0.4782609);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(326,0.1863354);
   S12S18_ThetaY_mI30_mI25__648->SetBinContent(327,0.02484472);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(312,0.00621118);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(313,0.04258171);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(314,0.07189961);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(315,0.07109021);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(316,0.07296485);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(317,0.07657657);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(318,0.07027148);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(319,0.07881104);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(320,0.07632426);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(321,0.06860473);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(322,0.07243419);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(323,0.06804007);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(324,0.0605391);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(325,0.05450288);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(326,0.03402003);
   S12S18_ThetaY_mI30_mI25__648->SetBinError(327,0.01242236);
   S12S18_ThetaY_mI30_mI25__648->SetMinimum(0);
   S12S18_ThetaY_mI30_mI25__648->SetMaximum(1.119636);
   S12S18_ThetaY_mI30_mI25__648->SetEntries(1627);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__648->SetLineColor(ci);
   S12S18_ThetaY_mI30_mI25__648->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__648->SetMarkerColor(ci);
   S12S18_ThetaY_mI30_mI25__648->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI30_mI25__648->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI30_mI25__648->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__648->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__648->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__648->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI30_mI25__648->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI30_mI25__648->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__648->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__648->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__648->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__648->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__648->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__649 = new TH1D("ThetaY_mI30_mI25__649","",630,-1575,1575);
   ThetaY_mI30_mI25__649->SetBinContent(303,0.0003449465);
   ThetaY_mI30_mI25__649->SetBinContent(304,0.04855122);
   ThetaY_mI30_mI25__649->SetBinContent(305,0.2400828);
   ThetaY_mI30_mI25__649->SetBinContent(306,0.506554);
   ThetaY_mI30_mI25__649->SetBinContent(307,0.7158503);
   ThetaY_mI30_mI25__649->SetBinContent(308,0.8348568);
   ThetaY_mI30_mI25__649->SetBinContent(309,0.8909969);
   ThetaY_mI30_mI25__649->SetBinContent(310,0.954812);
   ThetaY_mI30_mI25__649->SetBinContent(311,0.9718869);
   ThetaY_mI30_mI25__649->SetBinContent(312,0.9785271);
   ThetaY_mI30_mI25__649->SetBinContent(313,0.9968955);
   ThetaY_mI30_mI25__649->SetBinContent(314,1.017851);
   ThetaY_mI30_mI25__649->SetBinContent(315,0.9945671);
   ThetaY_mI30_mI25__649->SetBinContent(316,0.9859434);
   ThetaY_mI30_mI25__649->SetBinContent(317,1.000949);
   ThetaY_mI30_mI25__649->SetBinContent(318,1.003277);
   ThetaY_mI30_mI25__649->SetBinContent(319,1);
   ThetaY_mI30_mI25__649->SetBinContent(320,0.98396);
   ThetaY_mI30_mI25__649->SetBinContent(321,0.9594688);
   ThetaY_mI30_mI25__649->SetBinContent(322,0.8988444);
   ThetaY_mI30_mI25__649->SetBinContent(323,0.8326147);
   ThetaY_mI30_mI25__649->SetBinContent(324,0.6735943);
   ThetaY_mI30_mI25__649->SetBinContent(325,0.5134529);
   ThetaY_mI30_mI25__649->SetBinContent(326,0.2341325);
   ThetaY_mI30_mI25__649->SetBinContent(327,0.05010348);
   ThetaY_mI30_mI25__649->SetBinContent(328,0.0005174198);
   ThetaY_mI30_mI25__649->SetBinError(303,0.0001724733);
   ThetaY_mI30_mI25__649->SetBinError(304,0.00204619);
   ThetaY_mI30_mI25__649->SetBinError(305,0.004550157);
   ThetaY_mI30_mI25__649->SetBinError(306,0.00660935);
   ThetaY_mI30_mI25__649->SetBinError(307,0.007857004);
   ThetaY_mI30_mI25__649->SetBinError(308,0.008485001);
   ThetaY_mI30_mI25__649->SetBinError(309,0.008765647);
   ThetaY_mI30_mI25__649->SetBinError(310,0.009074127);
   ThetaY_mI30_mI25__649->SetBinError(311,0.009154903);
   ThetaY_mI30_mI25__649->SetBinError(312,0.009186124);
   ThetaY_mI30_mI25__649->SetBinError(313,0.009271942);
   ThetaY_mI30_mI25__649->SetBinError(314,0.009368887);
   ThetaY_mI30_mI25__649->SetBinError(315,0.009261108);
   ThetaY_mI30_mI25__649->SetBinError(316,0.00922087);
   ThetaY_mI30_mI25__649->SetBinError(317,0.009290772);
   ThetaY_mI30_mI25__649->SetBinError(318,0.009301571);
   ThetaY_mI30_mI25__649->SetBinError(319,0.009286368);
   ThetaY_mI30_mI25__649->SetBinError(320,0.00921159);
   ThetaY_mI30_mI25__649->SetBinError(321,0.009096228);
   ThetaY_mI30_mI25__649->SetBinError(322,0.008804165);
   ThetaY_mI30_mI25__649->SetBinError(323,0.008473599);
   ThetaY_mI30_mI25__649->SetBinError(324,0.007621582);
   ThetaY_mI30_mI25__649->SetBinError(325,0.006654205);
   ThetaY_mI30_mI25__649->SetBinError(326,0.004493417);
   ThetaY_mI30_mI25__649->SetBinError(327,0.002078643);
   ThetaY_mI30_mI25__649->SetBinError(328,0.0002112357);
   ThetaY_mI30_mI25__649->SetEntries(212075);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__649->SetLineColor(ci);
   ThetaY_mI30_mI25__649->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__649->SetMarkerColor(ci);
   ThetaY_mI30_mI25__649->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__649->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__649->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__649->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__649->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__649->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__649->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__649->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__649->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__649->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__649->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__649->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__649->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__649->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__649->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__649->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__649->Draw("AEsame");
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
   
   Double_t _fx3217[26] = {
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
   Double_t _fy3217[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006347479,
   0.2928346,
   0.8177014,
   0.8181093,
   0.8693631,
   0.9432047,
   0.7924343,
   1,
   0.9531772,
   0.7897745,
   0.939785,
   0.8951819,
   0.8759903,
   0.93146,
   0.7958546,
   0.4958681,
   0};
   Double_t _felx3217[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3217[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005251016,
   0.04264645,
   0.07094685,
   0.07178849,
   0.07435695,
   0.07691531,
   0.07033119,
   0.07927047,
   0.0779902,
   0.07179201,
   0.08100635,
   0.08210599,
   0.0902546,
   0.1065928,
   0.1452589,
   0.2379614,
   0};
   Double_t _fehx3217[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3217[26] = {
   42.09698,
   0.2359082,
   0.04764481,
   0.02257747,
   0.01597567,
   0.01369816,
   0.01283499,
   0.01197709,
   0.01176665,
   0.01459832,
   0.04936472,
   0.07739334,
   0.07838916,
   0.08101314,
   0.08346596,
   0.07687528,
   0.08582542,
   0.08465584,
   0.07864189,
   0.0883176,
   0.09001516,
   0.1000828,
   0.1195697,
   0.1746096,
   0.3944951,
   25.86551};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3217,_fy3217,_felx3217,_fehx3217,_fely3217,_fehy3217);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3217 = new TH1F("Graph_Graph3217","",100,-100,100);
   Graph_Graph3217->SetMinimum(0);
   Graph_Graph3217->SetMaximum(1.5);
   Graph_Graph3217->SetDirectory(0);
   Graph_Graph3217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3217->SetLineColor(ci);
   Graph_Graph3217->GetXaxis()->SetRange(1,100);
   Graph_Graph3217->GetXaxis()->CenterTitle(true);
   Graph_Graph3217->GetXaxis()->SetLabelFont(42);
   Graph_Graph3217->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3217->GetXaxis()->SetTitleFont(42);
   Graph_Graph3217->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3217->GetYaxis()->CenterTitle(true);
   Graph_Graph3217->GetYaxis()->SetLabelFont(42);
   Graph_Graph3217->GetYaxis()->SetTitleFont(42);
   Graph_Graph3217->GetZaxis()->SetLabelFont(42);
   Graph_Graph3217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3217->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3217);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.119636,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__650 = new TH2D("ThetaY_vs_Y_mI30_mI25__650","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(7885,4);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(7911,563);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(7937,2784);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(7963,5874);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(7989,8301);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8015,9681);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8041,10332);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8067,11072);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8093,11270);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8119,11347);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8145,11560);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8171,11803);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8197,11533);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8223,11433);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8249,11607);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8275,11634);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8301,11596);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8327,11410);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8353,11126);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8379,10423);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8405,9655);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8431,7811);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8457,5954);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8483,2715);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8509,581);
   ThetaY_vs_Y_mI30_mI25__650->SetBinContent(8535,6);
   ThetaY_vs_Y_mI30_mI25__650->SetEntries(212075);
   ThetaY_vs_Y_mI30_mI25__650->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(1,590.15);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(2,1180.3);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(3,1770.45);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(4,2360.6);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(5,2950.75);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(6,3540.9);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(7,4131.05);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(8,4721.2);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(9,5311.35);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(10,5901.5);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(11,6491.65);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(12,7081.8);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(13,7671.95);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(14,8262.1);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(15,8852.25);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(16,9442.4);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(17,10032.55);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(18,10622.7);
   ThetaY_vs_Y_mI30_mI25__650->SetContourLevel(19,11212.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__650->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__650->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__650->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__650->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__650->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__650->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__650->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__650->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__650->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__650->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__650->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__650->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__650->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__650->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__650->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__650->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-30_-25","Reco vertices","lpf");
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
