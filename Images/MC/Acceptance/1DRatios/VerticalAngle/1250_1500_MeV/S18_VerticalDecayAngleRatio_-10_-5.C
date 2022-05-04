void S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__945 = new TH1D("S18_ThetaY_mI10_mI5__945","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__945->SetBinContent(310,0.02290076);
   S18_ThetaY_mI10_mI5__945->SetBinContent(311,0.2417303);
   S18_ThetaY_mI10_mI5__945->SetBinContent(312,0.6717557);
   S18_ThetaY_mI10_mI5__945->SetBinContent(313,0.8651399);
   S18_ThetaY_mI10_mI5__945->SetBinContent(314,0.9160305);
   S18_ThetaY_mI10_mI5__945->SetBinContent(315,1);
   S18_ThetaY_mI10_mI5__945->SetBinContent(316,0.8982188);
   S18_ThetaY_mI10_mI5__945->SetBinContent(317,0.8676845);
   S18_ThetaY_mI10_mI5__945->SetBinContent(318,0.8956743);
   S18_ThetaY_mI10_mI5__945->SetBinContent(319,0.7175573);
   S18_ThetaY_mI10_mI5__945->SetBinContent(320,0.8320611);
   S18_ThetaY_mI10_mI5__945->SetBinContent(321,0.4783715);
   S18_ThetaY_mI10_mI5__945->SetBinContent(322,0.1119593);
   S18_ThetaY_mI10_mI5__945->SetBinError(310,0.007633588);
   S18_ThetaY_mI10_mI5__945->SetBinError(311,0.024801);
   S18_ThetaY_mI10_mI5__945->SetBinError(312,0.04134371);
   S18_ThetaY_mI10_mI5__945->SetBinError(313,0.0469188);
   S18_ThetaY_mI10_mI5__945->SetBinError(314,0.04827905);
   S18_ThetaY_mI10_mI5__945->SetBinError(315,0.05044333);
   S18_ThetaY_mI10_mI5__945->SetBinError(316,0.04780736);
   S18_ThetaY_mI10_mI5__945->SetBinError(317,0.04698775);
   S18_ThetaY_mI10_mI5__945->SetBinError(318,0.0477396);
   S18_ThetaY_mI10_mI5__945->SetBinError(319,0.04272991);
   S18_ThetaY_mI10_mI5__945->SetBinError(320,0.04601308);
   S18_ThetaY_mI10_mI5__945->SetBinError(321,0.03488883);
   S18_ThetaY_mI10_mI5__945->SetBinError(322,0.0168785);
   S18_ThetaY_mI10_mI5__945->SetMinimum(0);
   S18_ThetaY_mI10_mI5__945->SetMaximum(1.1);
   S18_ThetaY_mI10_mI5__945->SetEntries(3348);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__945->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__945->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__945->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__945->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__945->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__945->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__945->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__945->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__945->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__945->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__945->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__945->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__945->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__945->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__945->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__945->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__946 = new TH1D("ThetaY_mI10_mI5__946","",630,-1575,1575);
   ThetaY_mI10_mI5__946->SetBinContent(307,0.005036302);
   ThetaY_mI10_mI5__946->SetBinContent(308,0.1794504);
   ThetaY_mI10_mI5__946->SetBinContent(309,0.5067181);
   ThetaY_mI10_mI5__946->SetBinContent(310,0.707196);
   ThetaY_mI10_mI5__946->SetBinContent(311,0.8346476);
   ThetaY_mI10_mI5__946->SetBinContent(312,0.9195111);
   ThetaY_mI10_mI5__946->SetBinContent(313,0.9591398);
   ThetaY_mI10_mI5__946->SetBinContent(314,0.9898355);
   ThetaY_mI10_mI5__946->SetBinContent(315,1);
   ThetaY_mI10_mI5__946->SetBinContent(316,0.9999449);
   ThetaY_mI10_mI5__946->SetBinContent(317,0.9885488);
   ThetaY_mI10_mI5__946->SetBinContent(318,0.9704071);
   ThetaY_mI10_mI5__946->SetBinContent(319,0.9152651);
   ThetaY_mI10_mI5__946->SetBinContent(320,0.8340594);
   ThetaY_mI10_mI5__946->SetBinContent(321,0.7092363);
   ThetaY_mI10_mI5__946->SetBinContent(322,0.5040713);
   ThetaY_mI10_mI5__946->SetBinContent(323,0.1761051);
   ThetaY_mI10_mI5__946->SetBinContent(324,0.00582667);
   ThetaY_mI10_mI5__946->SetBinError(307,0.0003042541);
   ThetaY_mI10_mI5__946->SetBinError(308,0.001816155);
   ThetaY_mI10_mI5__946->SetBinError(309,0.003051854);
   ThetaY_mI10_mI5__946->SetBinError(310,0.003605375);
   ThetaY_mI10_mI5__946->SetBinError(311,0.003916807);
   ThetaY_mI10_mI5__946->SetBinError(312,0.00411111);
   ThetaY_mI10_mI5__946->SetBinError(313,0.004198765);
   ThetaY_mI10_mI5__946->SetBinError(314,0.004265423);
   ThetaY_mI10_mI5__946->SetBinError(315,0.004287268);
   ThetaY_mI10_mI5__946->SetBinError(316,0.004287149);
   ThetaY_mI10_mI5__946->SetBinError(317,0.00426265);
   ThetaY_mI10_mI5__946->SetBinError(318,0.004223355);
   ThetaY_mI10_mI5__946->SetBinError(319,0.004101607);
   ThetaY_mI10_mI5__946->SetBinError(320,0.003915426);
   ThetaY_mI10_mI5__946->SetBinError(321,0.003610572);
   ThetaY_mI10_mI5__946->SetBinError(322,0.003043873);
   ThetaY_mI10_mI5__946->SetBinError(323,0.001799147);
   ThetaY_mI10_mI5__946->SetBinError(324,0.0003272584);
   ThetaY_mI10_mI5__946->SetEntries(664013);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__946->SetLineColor(ci);
   ThetaY_mI10_mI5__946->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__946->SetMarkerColor(ci);
   ThetaY_mI10_mI5__946->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__946->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__946->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__946->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__946->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__946->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__946->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__946->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__946->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__946->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__946->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__946->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__946->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__946->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__946->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__946->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__946->Draw("AEsame");
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
   
   Double_t _fx3316[18] = {
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
   42.5};
   Double_t _fy3316[18] = {
   0,
   0,
   0,
   0.03238248,
   0.2896196,
   0.7305575,
   0.9019957,
   0.9254371,
   1,
   0.8982684,
   0.8777356,
   0.9229882,
   0.7839884,
   0.9976041,
   0.6744882,
   0.22211,
   0,
   0};
   Double_t _felx3316[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3316[18] = {
   0,
   0,
   0,
   0.01059185,
   0.02969266,
   0.04505221,
   0.04905211,
   0.04891442,
   0.05060321,
   0.04794173,
   0.04765869,
   0.04933527,
   0.04678963,
   0.05533716,
   0.04926731,
   0.03338275,
   0,
   0};
   Double_t _fehx3316[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3316[18] = {
   0.9332853,
   0.02610735,
   0.009245159,
   0.01479125,
   0.03290558,
   0.04792097,
   0.05179604,
   0.05157172,
   0.05323204,
   0.05057229,
   0.05032039,
   0.05204653,
   0.04967006,
   0.05849658,
   0.05300585,
   0.03882255,
   0.02660333,
   0.8063203};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3316,_fy3316,_felx3316,_fehx3316,_fely3316,_fehy3316);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3316 = new TH1F("Graph_Graph3316","",100,-100,100);
   Graph_Graph3316->SetMinimum(0);
   Graph_Graph3316->SetMaximum(1.5);
   Graph_Graph3316->SetDirectory(0);
   Graph_Graph3316->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3316->SetLineColor(ci);
   Graph_Graph3316->GetXaxis()->SetRange(1,100);
   Graph_Graph3316->GetXaxis()->CenterTitle(true);
   Graph_Graph3316->GetXaxis()->SetLabelFont(42);
   Graph_Graph3316->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3316->GetXaxis()->SetTitleFont(42);
   Graph_Graph3316->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3316->GetYaxis()->CenterTitle(true);
   Graph_Graph3316->GetYaxis()->SetLabelFont(42);
   Graph_Graph3316->GetYaxis()->SetTitleFont(42);
   Graph_Graph3316->GetZaxis()->SetLabelFont(42);
   Graph_Graph3316->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3316->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3316);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__947 = new TH2D("ThetaY_vs_Y_mI10_mI5__947","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(7993,274);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8019,9763);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8045,27568);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8071,38475);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8097,45409);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8123,50026);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8149,52182);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8175,53852);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8201,54405);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8227,54402);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8253,53782);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8279,52795);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8305,49795);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8331,45377);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8357,38586);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8383,27424);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8409,9581);
   ThetaY_vs_Y_mI10_mI5__947->SetBinContent(8435,317);
   ThetaY_vs_Y_mI10_mI5__947->SetEntries(664013);
   ThetaY_vs_Y_mI10_mI5__947->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(1,2720.25);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(2,5440.5);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(3,8160.75);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(4,10881);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(5,13601.25);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(6,16321.5);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(7,19041.75);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(8,21762);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(9,24482.25);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(10,27202.5);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(11,29922.75);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(12,32643);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(13,35363.25);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(14,38083.5);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(15,40803.75);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(16,43524);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(17,46244.25);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(18,48964.5);
   ThetaY_vs_Y_mI10_mI5__947->SetContourLevel(19,51684.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__947->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__947->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__947->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__947->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__947->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__947->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__947->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__947->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__947->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__947->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__947->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__947->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__947->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__947->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__947->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__947->Draw("COL");
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
