void S12S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI10_mI5__1002 = new TH1D("S12S18_ThetaY_mI10_mI5__1002","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(310,0.02396804);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(311,0.2876165);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(312,0.7336884);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(313,0.9360852);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(314,0.9227696);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(315,1);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(316,0.9174434);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(317,0.9107856);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(318,0.9494008);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(319,0.7856192);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(320,0.8109188);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(321,0.5046605);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(322,0.1225033);
   S12S18_ThetaY_mI10_mI5__1002->SetBinContent(323,0.003994674);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(310,0.005649322);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(311,0.01956982);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(312,0.03125618);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(313,0.03530512);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(314,0.03505312);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(315,0.03649052);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(316,0.03495181);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(317,0.03482476);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(318,0.03555534);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(319,0.03234343);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(320,0.03286009);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(321,0.02592267);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(322,0.01277185);
   S12S18_ThetaY_mI10_mI5__1002->SetBinError(323,0.002306326);
   S12S18_ThetaY_mI10_mI5__1002->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__1002->SetMaximum(1.1);
   S12S18_ThetaY_mI10_mI5__1002->SetEntries(6691);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1002->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__1002->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1002->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__1002->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__1002->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__1002->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1002->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1002->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1002->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__1002->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__1002->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1002->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1002->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1002->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1002->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1002->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1003 = new TH1D("ThetaY_mI10_mI5__1003","",630,-1575,1575);
   ThetaY_mI10_mI5__1003->SetBinContent(307,0.005036302);
   ThetaY_mI10_mI5__1003->SetBinContent(308,0.1794504);
   ThetaY_mI10_mI5__1003->SetBinContent(309,0.5067181);
   ThetaY_mI10_mI5__1003->SetBinContent(310,0.707196);
   ThetaY_mI10_mI5__1003->SetBinContent(311,0.8346476);
   ThetaY_mI10_mI5__1003->SetBinContent(312,0.9195111);
   ThetaY_mI10_mI5__1003->SetBinContent(313,0.9591398);
   ThetaY_mI10_mI5__1003->SetBinContent(314,0.9898355);
   ThetaY_mI10_mI5__1003->SetBinContent(315,1);
   ThetaY_mI10_mI5__1003->SetBinContent(316,0.9999449);
   ThetaY_mI10_mI5__1003->SetBinContent(317,0.9885488);
   ThetaY_mI10_mI5__1003->SetBinContent(318,0.9704071);
   ThetaY_mI10_mI5__1003->SetBinContent(319,0.9152651);
   ThetaY_mI10_mI5__1003->SetBinContent(320,0.8340594);
   ThetaY_mI10_mI5__1003->SetBinContent(321,0.7092363);
   ThetaY_mI10_mI5__1003->SetBinContent(322,0.5040713);
   ThetaY_mI10_mI5__1003->SetBinContent(323,0.1761051);
   ThetaY_mI10_mI5__1003->SetBinContent(324,0.00582667);
   ThetaY_mI10_mI5__1003->SetBinError(307,0.0003042541);
   ThetaY_mI10_mI5__1003->SetBinError(308,0.001816155);
   ThetaY_mI10_mI5__1003->SetBinError(309,0.003051854);
   ThetaY_mI10_mI5__1003->SetBinError(310,0.003605375);
   ThetaY_mI10_mI5__1003->SetBinError(311,0.003916807);
   ThetaY_mI10_mI5__1003->SetBinError(312,0.00411111);
   ThetaY_mI10_mI5__1003->SetBinError(313,0.004198765);
   ThetaY_mI10_mI5__1003->SetBinError(314,0.004265423);
   ThetaY_mI10_mI5__1003->SetBinError(315,0.004287268);
   ThetaY_mI10_mI5__1003->SetBinError(316,0.004287149);
   ThetaY_mI10_mI5__1003->SetBinError(317,0.00426265);
   ThetaY_mI10_mI5__1003->SetBinError(318,0.004223355);
   ThetaY_mI10_mI5__1003->SetBinError(319,0.004101607);
   ThetaY_mI10_mI5__1003->SetBinError(320,0.003915426);
   ThetaY_mI10_mI5__1003->SetBinError(321,0.003610572);
   ThetaY_mI10_mI5__1003->SetBinError(322,0.003043873);
   ThetaY_mI10_mI5__1003->SetBinError(323,0.001799147);
   ThetaY_mI10_mI5__1003->SetBinError(324,0.0003272584);
   ThetaY_mI10_mI5__1003->SetEntries(664013);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1003->SetLineColor(ci);
   ThetaY_mI10_mI5__1003->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1003->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1003->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1003->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1003->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1003->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1003->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1003->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1003->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1003->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1003->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1003->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1003->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1003->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1003->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1003->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1003->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1003->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1003->Draw("AEsame");
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
   
   Double_t _fx3335[18] = {
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
   Double_t _fy3335[18] = {
   0,
   0,
   0,
   0.03389165,
   0.3445964,
   0.7979115,
   0.9759633,
   0.9322455,
   1,
   0.917494,
   0.921336,
   0.9783531,
   0.8583515,
   0.9722555,
   0.7115548,
   0.2430278,
   0.02268346,
   0};
   Double_t _felx3335[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3335[18] = {
   0,
   0,
   0,
   0.007915245,
   0.02348407,
   0.03416816,
   0.03704712,
   0.03563129,
   0.03673301,
   0.03516554,
   0.03544249,
   0.03687721,
   0.03553609,
   0.03964997,
   0.03671252,
   0.02533321,
   0.01234655,
   0};
   Double_t _fehx3335[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3335[18] = {
   0.4883903,
   0.01366204,
   0.004838013,
   0.0100218,
   0.0251423,
   0.03566432,
   0.03848157,
   0.03702059,
   0.03810846,
   0.03654058,
   0.03683355,
   0.03829486,
   0.03703941,
   0.04130181,
   0.03865839,
   0.02812337,
   0.02207167,
   0.4219493};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3335,_fy3335,_felx3335,_fehx3335,_fely3335,_fehy3335);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3335 = new TH1F("Graph_Graph3335","",100,-100,100);
   Graph_Graph3335->SetMinimum(0);
   Graph_Graph3335->SetMaximum(1.5);
   Graph_Graph3335->SetDirectory(0);
   Graph_Graph3335->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3335->SetLineColor(ci);
   Graph_Graph3335->GetXaxis()->SetRange(1,100);
   Graph_Graph3335->GetXaxis()->CenterTitle(true);
   Graph_Graph3335->GetXaxis()->SetLabelFont(42);
   Graph_Graph3335->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3335->GetXaxis()->SetTitleFont(42);
   Graph_Graph3335->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3335->GetYaxis()->CenterTitle(true);
   Graph_Graph3335->GetYaxis()->SetLabelFont(42);
   Graph_Graph3335->GetYaxis()->SetTitleFont(42);
   Graph_Graph3335->GetZaxis()->SetLabelFont(42);
   Graph_Graph3335->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3335->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3335);
   
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1004 = new TH2D("ThetaY_vs_Y_mI10_mI5__1004","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(7993,274);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8019,9763);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8045,27568);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8071,38475);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8097,45409);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8123,50026);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8149,52182);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8175,53852);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8201,54405);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8227,54402);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8253,53782);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8279,52795);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8305,49795);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8331,45377);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8357,38586);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8383,27424);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8409,9581);
   ThetaY_vs_Y_mI10_mI5__1004->SetBinContent(8435,317);
   ThetaY_vs_Y_mI10_mI5__1004->SetEntries(664013);
   ThetaY_vs_Y_mI10_mI5__1004->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(1,2720.25);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(2,5440.5);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(3,8160.75);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(4,10881);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(5,13601.25);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(6,16321.5);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(7,19041.75);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(8,21762);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(9,24482.25);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(10,27202.5);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(11,29922.75);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(12,32643);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(13,35363.25);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(14,38083.5);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(15,40803.75);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(16,43524);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(17,46244.25);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(18,48964.5);
   ThetaY_vs_Y_mI10_mI5__1004->SetContourLevel(19,51684.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1004->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1004->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1004->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1004->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1004->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1004->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1004->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1004->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1004->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1004->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1004->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1004->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1004->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1004->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1004->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1004->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-10_-5","Reco vertices","lpf");
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
