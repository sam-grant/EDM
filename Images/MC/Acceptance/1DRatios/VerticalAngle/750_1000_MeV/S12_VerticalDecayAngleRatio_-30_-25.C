void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.06586095,125,1.251358);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__534 = new TH1D("S12_ThetaY_mI30_mI25__534","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__534->SetBinContent(312,0.01149425);
   S12_ThetaY_mI30_mI25__534->SetBinContent(313,0.2298851);
   S12_ThetaY_mI30_mI25__534->SetBinContent(314,0.862069);
   S12_ThetaY_mI30_mI25__534->SetBinContent(315,0.816092);
   S12_ThetaY_mI30_mI25__534->SetBinContent(316,0.8390805);
   S12_ThetaY_mI30_mI25__534->SetBinContent(317,0.7356322);
   S12_ThetaY_mI30_mI25__534->SetBinContent(318,0.7816092);
   S12_ThetaY_mI30_mI25__534->SetBinContent(319,1);
   S12_ThetaY_mI30_mI25__534->SetBinContent(320,0.8390805);
   S12_ThetaY_mI30_mI25__534->SetBinContent(321,0.7586207);
   S12_ThetaY_mI30_mI25__534->SetBinContent(322,0.7816092);
   S12_ThetaY_mI30_mI25__534->SetBinContent(323,0.7241379);
   S12_ThetaY_mI30_mI25__534->SetBinContent(324,0.4597701);
   S12_ThetaY_mI30_mI25__534->SetBinContent(325,0.4482759);
   S12_ThetaY_mI30_mI25__534->SetBinContent(326,0.1724138);
   S12_ThetaY_mI30_mI25__534->SetBinContent(327,0.02298851);
   S12_ThetaY_mI30_mI25__534->SetBinError(312,0.01149425);
   S12_ThetaY_mI30_mI25__534->SetBinError(313,0.05140386);
   S12_ThetaY_mI30_mI25__534->SetBinError(314,0.09954315);
   S12_ThetaY_mI30_mI25__534->SetBinError(315,0.0968523);
   S12_ThetaY_mI30_mI25__534->SetBinError(316,0.09820694);
   S12_ThetaY_mI30_mI25__534->SetBinError(317,0.09195402);
   S12_ThetaY_mI30_mI25__534->SetBinError(318,0.09478404);
   S12_ThetaY_mI30_mI25__534->SetBinError(319,0.1072113);
   S12_ThetaY_mI30_mI25__534->SetBinError(320,0.09820694);
   S12_ThetaY_mI30_mI25__534->SetBinError(321,0.09337975);
   S12_ThetaY_mI30_mI25__534->SetBinError(322,0.09478404);
   S12_ThetaY_mI30_mI25__534->SetBinError(323,0.0912328);
   S12_ThetaY_mI30_mI25__534->SetBinError(324,0.07269604);
   S12_ThetaY_mI30_mI25__534->SetBinError(325,0.07178159);
   S12_ThetaY_mI30_mI25__534->SetBinError(326,0.04451705);
   S12_ThetaY_mI30_mI25__534->SetBinError(327,0.01625533);
   S12_ThetaY_mI30_mI25__534->SetMinimum(0);
   S12_ThetaY_mI30_mI25__534->SetMaximum(1.119636);
   S12_ThetaY_mI30_mI25__534->SetEntries(825);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__534->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__534->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__534->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__534->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__534->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__534->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__534->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__534->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__534->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__534->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__534->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__534->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__534->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__534->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__534->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__534->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__535 = new TH1D("ThetaY_mI30_mI25__535","",630,-1575,1575);
   ThetaY_mI30_mI25__535->SetBinContent(303,0.0003449465);
   ThetaY_mI30_mI25__535->SetBinContent(304,0.04855122);
   ThetaY_mI30_mI25__535->SetBinContent(305,0.2400828);
   ThetaY_mI30_mI25__535->SetBinContent(306,0.506554);
   ThetaY_mI30_mI25__535->SetBinContent(307,0.7158503);
   ThetaY_mI30_mI25__535->SetBinContent(308,0.8348568);
   ThetaY_mI30_mI25__535->SetBinContent(309,0.8909969);
   ThetaY_mI30_mI25__535->SetBinContent(310,0.954812);
   ThetaY_mI30_mI25__535->SetBinContent(311,0.9718869);
   ThetaY_mI30_mI25__535->SetBinContent(312,0.9785271);
   ThetaY_mI30_mI25__535->SetBinContent(313,0.9968955);
   ThetaY_mI30_mI25__535->SetBinContent(314,1.017851);
   ThetaY_mI30_mI25__535->SetBinContent(315,0.9945671);
   ThetaY_mI30_mI25__535->SetBinContent(316,0.9859434);
   ThetaY_mI30_mI25__535->SetBinContent(317,1.000949);
   ThetaY_mI30_mI25__535->SetBinContent(318,1.003277);
   ThetaY_mI30_mI25__535->SetBinContent(319,1);
   ThetaY_mI30_mI25__535->SetBinContent(320,0.98396);
   ThetaY_mI30_mI25__535->SetBinContent(321,0.9594688);
   ThetaY_mI30_mI25__535->SetBinContent(322,0.8988444);
   ThetaY_mI30_mI25__535->SetBinContent(323,0.8326147);
   ThetaY_mI30_mI25__535->SetBinContent(324,0.6735943);
   ThetaY_mI30_mI25__535->SetBinContent(325,0.5134529);
   ThetaY_mI30_mI25__535->SetBinContent(326,0.2341325);
   ThetaY_mI30_mI25__535->SetBinContent(327,0.05010348);
   ThetaY_mI30_mI25__535->SetBinContent(328,0.0005174198);
   ThetaY_mI30_mI25__535->SetBinError(303,0.0001724733);
   ThetaY_mI30_mI25__535->SetBinError(304,0.00204619);
   ThetaY_mI30_mI25__535->SetBinError(305,0.004550157);
   ThetaY_mI30_mI25__535->SetBinError(306,0.00660935);
   ThetaY_mI30_mI25__535->SetBinError(307,0.007857004);
   ThetaY_mI30_mI25__535->SetBinError(308,0.008485001);
   ThetaY_mI30_mI25__535->SetBinError(309,0.008765647);
   ThetaY_mI30_mI25__535->SetBinError(310,0.009074127);
   ThetaY_mI30_mI25__535->SetBinError(311,0.009154903);
   ThetaY_mI30_mI25__535->SetBinError(312,0.009186124);
   ThetaY_mI30_mI25__535->SetBinError(313,0.009271942);
   ThetaY_mI30_mI25__535->SetBinError(314,0.009368887);
   ThetaY_mI30_mI25__535->SetBinError(315,0.009261108);
   ThetaY_mI30_mI25__535->SetBinError(316,0.00922087);
   ThetaY_mI30_mI25__535->SetBinError(317,0.009290772);
   ThetaY_mI30_mI25__535->SetBinError(318,0.009301571);
   ThetaY_mI30_mI25__535->SetBinError(319,0.009286368);
   ThetaY_mI30_mI25__535->SetBinError(320,0.00921159);
   ThetaY_mI30_mI25__535->SetBinError(321,0.009096228);
   ThetaY_mI30_mI25__535->SetBinError(322,0.008804165);
   ThetaY_mI30_mI25__535->SetBinError(323,0.008473599);
   ThetaY_mI30_mI25__535->SetBinError(324,0.007621582);
   ThetaY_mI30_mI25__535->SetBinError(325,0.006654205);
   ThetaY_mI30_mI25__535->SetBinError(326,0.004493417);
   ThetaY_mI30_mI25__535->SetBinError(327,0.002078643);
   ThetaY_mI30_mI25__535->SetBinError(328,0.0002112357);
   ThetaY_mI30_mI25__535->SetEntries(212075);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__535->SetLineColor(ci);
   ThetaY_mI30_mI25__535->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__535->SetMarkerColor(ci);
   ThetaY_mI30_mI25__535->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__535->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__535->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__535->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__535->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__535->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__535->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__535->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__535->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__535->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__535->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__535->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__535->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__535->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__535->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__535->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__535->Draw("AEsame");
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
   
   Double_t _fx3179[26] = {
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
   Double_t _fy3179[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01174648,
   0.230601,
   0.8469501,
   0.8205499,
   0.8510432,
   0.734935,
   0.7790562,
   1,
   0.8527587,
   0.7906674,
   0.8695712,
   0.8697155,
   0.6825623,
   0.8730613,
   0.7363942,
   0.4588205,
   0};
   Double_t _felx3179[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3179[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009717398,
   0.05117156,
   0.09788439,
   0.097446,
   0.09969096,
   0.09187468,
   0.09451267,
   0.107401,
   0.09989254,
   0.09736052,
   0.1055288,
   0.1096327,
   0.1077377,
   0.1396436,
   0.1884825,
   0.2966752,
   0};
   Double_t _fehx3179[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3179[26] = {
   77.90361,
   0.4365658,
   0.08817028,
   0.0417813,
   0.02956416,
   0.02534947,
   0.02375211,
   0.0221645,
   0.02177506,
   0.02701528,
   0.06402228,
   0.1099175,
   0.1097771,
   0.1121233,
   0.1041554,
   0.1067476,
   0.1196159,
   0.1123502,
   0.1101666,
   0.1191958,
   0.1244205,
   0.1262675,
   0.1640173,
   0.2443334,
   0.6075695,
   47.86607};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3179,_fy3179,_felx3179,_fehx3179,_fely3179,_fehy3179);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3179 = new TH1F("Graph_Graph3179","",100,-100,100);
   Graph_Graph3179->SetMinimum(0);
   Graph_Graph3179->SetMaximum(1.5);
   Graph_Graph3179->SetDirectory(0);
   Graph_Graph3179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3179->SetLineColor(ci);
   Graph_Graph3179->GetXaxis()->SetRange(1,100);
   Graph_Graph3179->GetXaxis()->CenterTitle(true);
   Graph_Graph3179->GetXaxis()->SetLabelFont(42);
   Graph_Graph3179->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3179->GetXaxis()->SetTitleFont(42);
   Graph_Graph3179->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3179->GetYaxis()->CenterTitle(true);
   Graph_Graph3179->GetYaxis()->SetLabelFont(42);
   Graph_Graph3179->GetYaxis()->SetTitleFont(42);
   Graph_Graph3179->GetZaxis()->SetLabelFont(42);
   Graph_Graph3179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3179->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3179);
   
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__536 = new TH2D("ThetaY_vs_Y_mI30_mI25__536","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(7885,4);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(7911,563);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(7937,2784);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(7963,5874);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(7989,8301);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8015,9681);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8041,10332);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8067,11072);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8093,11270);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8119,11347);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8145,11560);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8171,11803);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8197,11533);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8223,11433);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8249,11607);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8275,11634);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8301,11596);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8327,11410);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8353,11126);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8379,10423);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8405,9655);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8431,7811);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8457,5954);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8483,2715);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8509,581);
   ThetaY_vs_Y_mI30_mI25__536->SetBinContent(8535,6);
   ThetaY_vs_Y_mI30_mI25__536->SetEntries(212075);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__536->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__536->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__536->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__536->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__536->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__536->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__536->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__536->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__536->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__536->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__536->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__536->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__536->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__536->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__536->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__536->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-30_-25","Reco vertices","lpf");
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
