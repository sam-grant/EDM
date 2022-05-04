void S12S18_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_20_25__678 = new TH1D("S12S18_ThetaY_20_25__678","",630,-1575,1575);
   S12S18_ThetaY_20_25__678->SetBinContent(304,0.01153846);
   S12S18_ThetaY_20_25__678->SetBinContent(305,0.1384615);
   S12S18_ThetaY_20_25__678->SetBinContent(306,0.4115385);
   S12S18_ThetaY_20_25__678->SetBinContent(307,0.5807692);
   S12S18_ThetaY_20_25__678->SetBinContent(308,0.7730769);
   S12S18_ThetaY_20_25__678->SetBinContent(309,0.7538462);
   S12S18_ThetaY_20_25__678->SetBinContent(310,0.9230769);
   S12S18_ThetaY_20_25__678->SetBinContent(311,0.75);
   S12S18_ThetaY_20_25__678->SetBinContent(312,0.8846154);
   S12S18_ThetaY_20_25__678->SetBinContent(313,0.9807692);
   S12S18_ThetaY_20_25__678->SetBinContent(314,0.9115385);
   S12S18_ThetaY_20_25__678->SetBinContent(315,1);
   S12S18_ThetaY_20_25__678->SetBinContent(316,0.7115385);
   S12S18_ThetaY_20_25__678->SetBinContent(317,0.8423077);
   S12S18_ThetaY_20_25__678->SetBinContent(318,0.7);
   S12S18_ThetaY_20_25__678->SetBinContent(319,0.1461538);
   S12S18_ThetaY_20_25__678->SetBinContent(320,0.003846154);
   S12S18_ThetaY_20_25__678->SetBinError(304,0.006661734);
   S12S18_ThetaY_20_25__678->SetBinError(305,0.02307692);
   S12S18_ThetaY_20_25__678->SetBinError(306,0.03978492);
   S12S18_ThetaY_20_25__678->SetBinError(307,0.04726233);
   S12S18_ThetaY_20_25__678->SetBinError(308,0.05452864);
   S12S18_ThetaY_20_25__678->SetBinError(309,0.05384615);
   S12S18_ThetaY_20_25__678->SetBinError(310,0.05958436);
   S12S18_ThetaY_20_25__678->SetBinError(311,0.05370862);
   S12S18_ThetaY_20_25__678->SetBinError(312,0.05832981);
   S12S18_ThetaY_20_25__678->SetBinError(313,0.06141815);
   S12S18_ThetaY_20_25__678->SetBinError(314,0.05921079);
   S12S18_ThetaY_20_25__678->SetBinError(315,0.06201737);
   S12S18_ThetaY_20_25__678->SetBinError(316,0.05231335);
   S12S18_ThetaY_20_25__678->SetBinError(317,0.05691788);
   S12S18_ThetaY_20_25__678->SetBinError(318,0.05188745);
   S12S18_ThetaY_20_25__678->SetBinError(319,0.02370928);
   S12S18_ThetaY_20_25__678->SetBinError(320,0.003846154);
   S12S18_ThetaY_20_25__678->SetMinimum(0);
   S12S18_ThetaY_20_25__678->SetMaximum(1.1);
   S12S18_ThetaY_20_25__678->SetEntries(2736);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__678->SetLineColor(ci);
   S12S18_ThetaY_20_25__678->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__678->SetMarkerColor(ci);
   S12S18_ThetaY_20_25__678->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_20_25__678->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_20_25__678->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__678->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__678->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__678->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_20_25__678->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_20_25__678->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__678->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__678->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__678->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__678->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__678->Draw("AE");
   
   TH1D *ThetaY_20_25__679 = new TH1D("ThetaY_20_25__679","",630,-1575,1575);
   ThetaY_20_25__679->SetBinContent(303,0.0001611777);
   ThetaY_20_25__679->SetBinContent(304,0.05297373);
   ThetaY_20_25__679->SetBinContent(305,0.2339225);
   ThetaY_20_25__679->SetBinContent(306,0.5100736);
   ThetaY_20_25__679->SetBinContent(307,0.6915059);
   ThetaY_20_25__679->SetBinContent(308,0.8047601);
   ThetaY_20_25__679->SetBinContent(309,0.8924408);
   ThetaY_20_25__679->SetBinContent(310,0.9545479);
   ThetaY_20_25__679->SetBinContent(311,0.9678719);
   ThetaY_20_25__679->SetBinContent(312,0.9871595);
   ThetaY_20_25__679->SetBinContent(313,0.9887176);
   ThetaY_20_25__679->SetBinContent(314,0.9859775);
   ThetaY_20_25__679->SetBinContent(315,1);
   ThetaY_20_25__679->SetBinContent(316,0.9898458);
   ThetaY_20_25__679->SetBinContent(317,0.9734057);
   ThetaY_20_25__679->SetBinContent(318,0.9907591);
   ThetaY_20_25__679->SetBinContent(319,0.9938752);
   ThetaY_20_25__679->SetBinContent(320,0.97217);
   ThetaY_20_25__679->SetBinContent(321,0.9447161);
   ThetaY_20_25__679->SetBinContent(322,0.8956106);
   ThetaY_20_25__679->SetBinContent(323,0.7979369);
   ThetaY_20_25__679->SetBinContent(324,0.6784505);
   ThetaY_20_25__679->SetBinContent(325,0.4994359);
   ThetaY_20_25__679->SetBinContent(326,0.2375759);
   ThetaY_20_25__679->SetBinContent(327,0.05394079);
   ThetaY_20_25__679->SetBinContent(328,0.0003760812);
   ThetaY_20_25__679->SetBinError(303,9.305597e-05);
   ThetaY_20_25__679->SetBinError(304,0.001687027);
   ThetaY_20_25__679->SetBinError(305,0.003545095);
   ThetaY_20_25__679->SetBinError(306,0.005234898);
   ThetaY_20_25__679->SetBinError(307,0.006095225);
   ThetaY_20_25__679->SetBinError(308,0.006575443);
   ThetaY_20_25__679->SetBinError(309,0.00692439);
   ThetaY_20_25__679->SetBinError(310,0.00716128);
   ThetaY_20_25__679->SetBinError(311,0.007211087);
   ThetaY_20_25__679->SetBinError(312,0.007282584);
   ThetaY_20_25__679->SetBinError(313,0.007288328);
   ThetaY_20_25__679->SetBinError(314,0.007278222);
   ThetaY_20_25__679->SetBinError(315,0.007329795);
   ThetaY_20_25__679->SetBinError(316,0.007292486);
   ThetaY_20_25__679->SetBinError(317,0.007231673);
   ThetaY_20_25__679->SetBinError(318,0.007295849);
   ThetaY_20_25__679->SetBinError(319,0.007307314);
   ThetaY_20_25__679->SetBinError(320,0.007227081);
   ThetaY_20_25__679->SetBinError(321,0.007124304);
   ThetaY_20_25__679->SetBinError(322,0.006936676);
   ThetaY_20_25__679->SetBinError(323,0.006547509);
   ThetaY_20_25__679->SetBinError(324,0.006037413);
   ThetaY_20_25__679->SetBinError(325,0.005180023);
   ThetaY_20_25__679->SetBinError(326,0.003572671);
   ThetaY_20_25__679->SetBinError(327,0.001702356);
   ThetaY_20_25__679->SetBinError(328,0.0001421453);
   ThetaY_20_25__679->SetEntries(336862);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__679->SetLineColor(ci);
   ThetaY_20_25__679->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__679->SetMarkerColor(ci);
   ThetaY_20_25__679->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__679->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__679->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__679->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__679->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__679->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__679->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__679->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__679->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__679->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__679->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__679->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__679->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__679->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__679->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__679->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__679->Draw("AEsame");
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
   
   Double_t _fx3227[26] = {
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
   Double_t _fy3227[26] = {
   0,
   0.2178148,
   0.5919119,
   0.8068217,
   0.8398615,
   0.9606303,
   0.8447016,
   0.9670305,
   0.7748959,
   0.896122,
   0.991961,
   0.9245023,
   1,
   0.7188377,
   0.8653203,
   0.7065289,
   0.1470545,
   0.003956257,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3227[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3227[26] = {
   0,
   0.1186747,
   0.09858594,
   0.07830997,
   0.06866794,
   0.06815176,
   0.06063718,
   0.06279623,
   0.05574161,
   0.05941241,
   0.06250523,
   0.06039515,
   0.06240722,
   0.05306525,
   0.05877876,
   0.05257945,
   0.02377371,
   0.003272833,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3227[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3227[26] = {
   60.65013,
   0.2125108,
   0.1165801,
   0.08631557,
   0.07453156,
   0.07317216,
   0.06515848,
   0.06701654,
   0.05990654,
   0.06349182,
   0.06657725,
   0.06447917,
   0.06643255,
   0.05713815,
   0.0629173,
   0.05664906,
   0.02796862,
   0.009098346,
   0.00749561,
   0.00790661,
   0.0088745,
   0.01043756,
   0.0141791,
   0.0298108,
   0.1313913,
   21.53601};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3227,_fy3227,_felx3227,_fehx3227,_fely3227,_fehy3227);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3227 = new TH1F("Graph_Graph3227","",100,-100,100);
   Graph_Graph3227->SetMinimum(0);
   Graph_Graph3227->SetMaximum(1.5);
   Graph_Graph3227->SetDirectory(0);
   Graph_Graph3227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3227->SetLineColor(ci);
   Graph_Graph3227->GetXaxis()->SetRange(1,100);
   Graph_Graph3227->GetXaxis()->CenterTitle(true);
   Graph_Graph3227->GetXaxis()->SetLabelFont(42);
   Graph_Graph3227->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3227->GetXaxis()->SetTitleFont(42);
   Graph_Graph3227->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3227->GetYaxis()->CenterTitle(true);
   Graph_Graph3227->GetYaxis()->SetLabelFont(42);
   Graph_Graph3227->GetYaxis()->SetTitleFont(42);
   Graph_Graph3227->GetZaxis()->SetLabelFont(42);
   Graph_Graph3227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3227->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3227);
   
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
   
   TH2D *ThetaY_vs_Y_20_25__680 = new TH2D("ThetaY_vs_Y_20_25__680","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__680->SetBinContent(7895,3);
   ThetaY_vs_Y_20_25__680->SetBinContent(7921,986);
   ThetaY_vs_Y_20_25__680->SetBinContent(7947,4354);
   ThetaY_vs_Y_20_25__680->SetBinContent(7973,9494);
   ThetaY_vs_Y_20_25__680->SetBinContent(7999,12871);
   ThetaY_vs_Y_20_25__680->SetBinContent(8025,14979);
   ThetaY_vs_Y_20_25__680->SetBinContent(8051,16611);
   ThetaY_vs_Y_20_25__680->SetBinContent(8077,17767);
   ThetaY_vs_Y_20_25__680->SetBinContent(8103,18015);
   ThetaY_vs_Y_20_25__680->SetBinContent(8129,18374);
   ThetaY_vs_Y_20_25__680->SetBinContent(8155,18403);
   ThetaY_vs_Y_20_25__680->SetBinContent(8181,18352);
   ThetaY_vs_Y_20_25__680->SetBinContent(8207,18613);
   ThetaY_vs_Y_20_25__680->SetBinContent(8233,18424);
   ThetaY_vs_Y_20_25__680->SetBinContent(8259,18118);
   ThetaY_vs_Y_20_25__680->SetBinContent(8285,18441);
   ThetaY_vs_Y_20_25__680->SetBinContent(8311,18499);
   ThetaY_vs_Y_20_25__680->SetBinContent(8337,18095);
   ThetaY_vs_Y_20_25__680->SetBinContent(8363,17584);
   ThetaY_vs_Y_20_25__680->SetBinContent(8389,16670);
   ThetaY_vs_Y_20_25__680->SetBinContent(8415,14852);
   ThetaY_vs_Y_20_25__680->SetBinContent(8441,12628);
   ThetaY_vs_Y_20_25__680->SetBinContent(8467,9296);
   ThetaY_vs_Y_20_25__680->SetBinContent(8493,4422);
   ThetaY_vs_Y_20_25__680->SetBinContent(8519,1004);
   ThetaY_vs_Y_20_25__680->SetBinContent(8545,7);
   ThetaY_vs_Y_20_25__680->SetEntries(336862);
   ThetaY_vs_Y_20_25__680->SetContour(20);
   ThetaY_vs_Y_20_25__680->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__680->SetContourLevel(1,930.65);
   ThetaY_vs_Y_20_25__680->SetContourLevel(2,1861.3);
   ThetaY_vs_Y_20_25__680->SetContourLevel(3,2791.95);
   ThetaY_vs_Y_20_25__680->SetContourLevel(4,3722.6);
   ThetaY_vs_Y_20_25__680->SetContourLevel(5,4653.25);
   ThetaY_vs_Y_20_25__680->SetContourLevel(6,5583.9);
   ThetaY_vs_Y_20_25__680->SetContourLevel(7,6514.55);
   ThetaY_vs_Y_20_25__680->SetContourLevel(8,7445.2);
   ThetaY_vs_Y_20_25__680->SetContourLevel(9,8375.85);
   ThetaY_vs_Y_20_25__680->SetContourLevel(10,9306.5);
   ThetaY_vs_Y_20_25__680->SetContourLevel(11,10237.15);
   ThetaY_vs_Y_20_25__680->SetContourLevel(12,11167.8);
   ThetaY_vs_Y_20_25__680->SetContourLevel(13,12098.45);
   ThetaY_vs_Y_20_25__680->SetContourLevel(14,13029.1);
   ThetaY_vs_Y_20_25__680->SetContourLevel(15,13959.75);
   ThetaY_vs_Y_20_25__680->SetContourLevel(16,14890.4);
   ThetaY_vs_Y_20_25__680->SetContourLevel(17,15821.05);
   ThetaY_vs_Y_20_25__680->SetContourLevel(18,16751.7);
   ThetaY_vs_Y_20_25__680->SetContourLevel(19,17682.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__680->SetLineColor(ci);
   ThetaY_vs_Y_20_25__680->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__680->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__680->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__680->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__680->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__680->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__680->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__680->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__680->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__680->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__680->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__680->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__680->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__680->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__680->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_20_25","Reco vertices","lpf");
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
