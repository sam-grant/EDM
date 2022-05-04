void S18_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__621 = new TH1D("S18_ThetaY_20_25__621","",630,-1575,1575);
   S18_ThetaY_20_25__621->SetBinContent(304,0.01526718);
   S18_ThetaY_20_25__621->SetBinContent(305,0.129771);
   S18_ThetaY_20_25__621->SetBinContent(306,0.5038168);
   S18_ThetaY_20_25__621->SetBinContent(307,0.519084);
   S18_ThetaY_20_25__621->SetBinContent(308,0.740458);
   S18_ThetaY_20_25__621->SetBinContent(309,0.6793893);
   S18_ThetaY_20_25__621->SetBinContent(310,0.9465649);
   S18_ThetaY_20_25__621->SetBinContent(311,0.6412214);
   S18_ThetaY_20_25__621->SetBinContent(312,0.9389313);
   S18_ThetaY_20_25__621->SetBinContent(313,0.8473282);
   S18_ThetaY_20_25__621->SetBinContent(314,0.8778626);
   S18_ThetaY_20_25__621->SetBinContent(315,1);
   S18_ThetaY_20_25__621->SetBinContent(316,0.6259542);
   S18_ThetaY_20_25__621->SetBinContent(317,0.7862595);
   S18_ThetaY_20_25__621->SetBinContent(318,0.6259542);
   S18_ThetaY_20_25__621->SetBinContent(319,0.09923664);
   S18_ThetaY_20_25__621->SetBinError(304,0.01079552);
   S18_ThetaY_20_25__621->SetBinError(305,0.03147409);
   S18_ThetaY_20_25__621->SetBinError(306,0.06201556);
   S18_ThetaY_20_25__621->SetBinError(307,0.06294818);
   S18_ThetaY_20_25__621->SetBinError(308,0.07518212);
   S18_ThetaY_20_25__621->SetBinError(309,0.07201512);
   S18_ThetaY_20_25__621->SetBinError(310,0.08500404);
   S18_ThetaY_20_25__621->SetBinError(311,0.06996299);
   S18_ThetaY_20_25__621->SetBinError(312,0.08466058);
   S18_ThetaY_20_25__621->SetBinError(313,0.08042484);
   S18_ThetaY_20_25__621->SetBinError(314,0.08186111);
   S18_ThetaY_20_25__621->SetBinError(315,0.08737041);
   S18_ThetaY_20_25__621->SetBinError(316,0.06912508);
   S18_ThetaY_20_25__621->SetBinError(317,0.07747245);
   S18_ThetaY_20_25__621->SetBinError(318,0.06912508);
   S18_ThetaY_20_25__621->SetBinError(319,0.02752329);
   S18_ThetaY_20_25__621->SetMinimum(0);
   S18_ThetaY_20_25__621->SetMaximum(1.1);
   S18_ThetaY_20_25__621->SetEntries(1307);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__621->SetLineColor(ci);
   S18_ThetaY_20_25__621->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__621->SetMarkerColor(ci);
   S18_ThetaY_20_25__621->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__621->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__621->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__621->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__621->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__621->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__621->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__621->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__621->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__621->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__621->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__621->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__621->Draw("AE");
   
   TH1D *ThetaY_20_25__622 = new TH1D("ThetaY_20_25__622","",630,-1575,1575);
   ThetaY_20_25__622->SetBinContent(303,0.0001611777);
   ThetaY_20_25__622->SetBinContent(304,0.05297373);
   ThetaY_20_25__622->SetBinContent(305,0.2339225);
   ThetaY_20_25__622->SetBinContent(306,0.5100736);
   ThetaY_20_25__622->SetBinContent(307,0.6915059);
   ThetaY_20_25__622->SetBinContent(308,0.8047601);
   ThetaY_20_25__622->SetBinContent(309,0.8924408);
   ThetaY_20_25__622->SetBinContent(310,0.9545479);
   ThetaY_20_25__622->SetBinContent(311,0.9678719);
   ThetaY_20_25__622->SetBinContent(312,0.9871595);
   ThetaY_20_25__622->SetBinContent(313,0.9887176);
   ThetaY_20_25__622->SetBinContent(314,0.9859775);
   ThetaY_20_25__622->SetBinContent(315,1);
   ThetaY_20_25__622->SetBinContent(316,0.9898458);
   ThetaY_20_25__622->SetBinContent(317,0.9734057);
   ThetaY_20_25__622->SetBinContent(318,0.9907591);
   ThetaY_20_25__622->SetBinContent(319,0.9938752);
   ThetaY_20_25__622->SetBinContent(320,0.97217);
   ThetaY_20_25__622->SetBinContent(321,0.9447161);
   ThetaY_20_25__622->SetBinContent(322,0.8956106);
   ThetaY_20_25__622->SetBinContent(323,0.7979369);
   ThetaY_20_25__622->SetBinContent(324,0.6784505);
   ThetaY_20_25__622->SetBinContent(325,0.4994359);
   ThetaY_20_25__622->SetBinContent(326,0.2375759);
   ThetaY_20_25__622->SetBinContent(327,0.05394079);
   ThetaY_20_25__622->SetBinContent(328,0.0003760812);
   ThetaY_20_25__622->SetBinError(303,9.305597e-05);
   ThetaY_20_25__622->SetBinError(304,0.001687027);
   ThetaY_20_25__622->SetBinError(305,0.003545095);
   ThetaY_20_25__622->SetBinError(306,0.005234898);
   ThetaY_20_25__622->SetBinError(307,0.006095225);
   ThetaY_20_25__622->SetBinError(308,0.006575443);
   ThetaY_20_25__622->SetBinError(309,0.00692439);
   ThetaY_20_25__622->SetBinError(310,0.00716128);
   ThetaY_20_25__622->SetBinError(311,0.007211087);
   ThetaY_20_25__622->SetBinError(312,0.007282584);
   ThetaY_20_25__622->SetBinError(313,0.007288328);
   ThetaY_20_25__622->SetBinError(314,0.007278222);
   ThetaY_20_25__622->SetBinError(315,0.007329795);
   ThetaY_20_25__622->SetBinError(316,0.007292486);
   ThetaY_20_25__622->SetBinError(317,0.007231673);
   ThetaY_20_25__622->SetBinError(318,0.007295849);
   ThetaY_20_25__622->SetBinError(319,0.007307314);
   ThetaY_20_25__622->SetBinError(320,0.007227081);
   ThetaY_20_25__622->SetBinError(321,0.007124304);
   ThetaY_20_25__622->SetBinError(322,0.006936676);
   ThetaY_20_25__622->SetBinError(323,0.006547509);
   ThetaY_20_25__622->SetBinError(324,0.006037413);
   ThetaY_20_25__622->SetBinError(325,0.005180023);
   ThetaY_20_25__622->SetBinError(326,0.003572671);
   ThetaY_20_25__622->SetBinError(327,0.001702356);
   ThetaY_20_25__622->SetBinError(328,0.0001421453);
   ThetaY_20_25__622->SetEntries(336862);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__622->SetLineColor(ci);
   ThetaY_20_25__622->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__622->SetMarkerColor(ci);
   ThetaY_20_25__622->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__622->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__622->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__622->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__622->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__622->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__622->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__622->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__622->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__622->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__622->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__622->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__622->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__622->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__622->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__622->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__622->Draw("AEsame");
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
   
   Double_t _fx3208[26] = {
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
   Double_t _fy3208[26] = {
   0,
   0.2882028,
   0.5547606,
   0.9877335,
   0.7506573,
   0.9200978,
   0.761271,
   0.9916369,
   0.6625064,
   0.9511445,
   0.8569973,
   0.8903475,
   1,
   0.6323755,
   0.8077409,
   0.6317925,
   0.09984819,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3208[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3208[26] = {
   0,
   0.1862707,
   0.1334595,
   0.1216874,
   0.09104232,
   0.09355895,
   0.08075583,
   0.08923878,
   0.07230727,
   0.08592902,
   0.08146233,
   0.08316162,
   0.08756303,
   0.06984459,
   0.0796831,
   0.06978007,
   0.0273417,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3208[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3208[26] = {
   120.3743,
   0.3810137,
   0.1702456,
   0.1377039,
   0.1028236,
   0.1035999,
   0.08981848,
   0.09766056,
   0.0806696,
   0.09407147,
   0.0896048,
   0.09132224,
   0.095593,
   0.07802453,
   0.087965,
   0.07795242,
   0.03609758,
   0.01445664,
   0.01487678,
   0.01569251,
   0.01761351,
   0.02071577,
   0.02814173,
   0.05916647,
   0.2607765,
   42.74323};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3208,_fy3208,_felx3208,_fehx3208,_fely3208,_fehy3208);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3208 = new TH1F("Graph_Graph3208","",100,-100,100);
   Graph_Graph3208->SetMinimum(0);
   Graph_Graph3208->SetMaximum(1.5);
   Graph_Graph3208->SetDirectory(0);
   Graph_Graph3208->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3208->SetLineColor(ci);
   Graph_Graph3208->GetXaxis()->SetRange(1,100);
   Graph_Graph3208->GetXaxis()->CenterTitle(true);
   Graph_Graph3208->GetXaxis()->SetLabelFont(42);
   Graph_Graph3208->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3208->GetXaxis()->SetTitleFont(42);
   Graph_Graph3208->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3208->GetYaxis()->CenterTitle(true);
   Graph_Graph3208->GetYaxis()->SetLabelFont(42);
   Graph_Graph3208->GetYaxis()->SetTitleFont(42);
   Graph_Graph3208->GetZaxis()->SetLabelFont(42);
   Graph_Graph3208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3208->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3208);
   
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
   
   TH2D *ThetaY_vs_Y_20_25__623 = new TH2D("ThetaY_vs_Y_20_25__623","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__623->SetBinContent(7895,3);
   ThetaY_vs_Y_20_25__623->SetBinContent(7921,986);
   ThetaY_vs_Y_20_25__623->SetBinContent(7947,4354);
   ThetaY_vs_Y_20_25__623->SetBinContent(7973,9494);
   ThetaY_vs_Y_20_25__623->SetBinContent(7999,12871);
   ThetaY_vs_Y_20_25__623->SetBinContent(8025,14979);
   ThetaY_vs_Y_20_25__623->SetBinContent(8051,16611);
   ThetaY_vs_Y_20_25__623->SetBinContent(8077,17767);
   ThetaY_vs_Y_20_25__623->SetBinContent(8103,18015);
   ThetaY_vs_Y_20_25__623->SetBinContent(8129,18374);
   ThetaY_vs_Y_20_25__623->SetBinContent(8155,18403);
   ThetaY_vs_Y_20_25__623->SetBinContent(8181,18352);
   ThetaY_vs_Y_20_25__623->SetBinContent(8207,18613);
   ThetaY_vs_Y_20_25__623->SetBinContent(8233,18424);
   ThetaY_vs_Y_20_25__623->SetBinContent(8259,18118);
   ThetaY_vs_Y_20_25__623->SetBinContent(8285,18441);
   ThetaY_vs_Y_20_25__623->SetBinContent(8311,18499);
   ThetaY_vs_Y_20_25__623->SetBinContent(8337,18095);
   ThetaY_vs_Y_20_25__623->SetBinContent(8363,17584);
   ThetaY_vs_Y_20_25__623->SetBinContent(8389,16670);
   ThetaY_vs_Y_20_25__623->SetBinContent(8415,14852);
   ThetaY_vs_Y_20_25__623->SetBinContent(8441,12628);
   ThetaY_vs_Y_20_25__623->SetBinContent(8467,9296);
   ThetaY_vs_Y_20_25__623->SetBinContent(8493,4422);
   ThetaY_vs_Y_20_25__623->SetBinContent(8519,1004);
   ThetaY_vs_Y_20_25__623->SetBinContent(8545,7);
   ThetaY_vs_Y_20_25__623->SetEntries(336862);
   ThetaY_vs_Y_20_25__623->SetContour(20);
   ThetaY_vs_Y_20_25__623->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__623->SetContourLevel(1,930.65);
   ThetaY_vs_Y_20_25__623->SetContourLevel(2,1861.3);
   ThetaY_vs_Y_20_25__623->SetContourLevel(3,2791.95);
   ThetaY_vs_Y_20_25__623->SetContourLevel(4,3722.6);
   ThetaY_vs_Y_20_25__623->SetContourLevel(5,4653.25);
   ThetaY_vs_Y_20_25__623->SetContourLevel(6,5583.9);
   ThetaY_vs_Y_20_25__623->SetContourLevel(7,6514.55);
   ThetaY_vs_Y_20_25__623->SetContourLevel(8,7445.2);
   ThetaY_vs_Y_20_25__623->SetContourLevel(9,8375.85);
   ThetaY_vs_Y_20_25__623->SetContourLevel(10,9306.5);
   ThetaY_vs_Y_20_25__623->SetContourLevel(11,10237.15);
   ThetaY_vs_Y_20_25__623->SetContourLevel(12,11167.8);
   ThetaY_vs_Y_20_25__623->SetContourLevel(13,12098.45);
   ThetaY_vs_Y_20_25__623->SetContourLevel(14,13029.1);
   ThetaY_vs_Y_20_25__623->SetContourLevel(15,13959.75);
   ThetaY_vs_Y_20_25__623->SetContourLevel(16,14890.4);
   ThetaY_vs_Y_20_25__623->SetContourLevel(17,15821.05);
   ThetaY_vs_Y_20_25__623->SetContourLevel(18,16751.7);
   ThetaY_vs_Y_20_25__623->SetContourLevel(19,17682.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__623->SetLineColor(ci);
   ThetaY_vs_Y_20_25__623->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__623->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__623->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__623->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__623->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__623->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__623->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__623->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__623->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__623->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__623->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__623->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__623->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__623->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__623->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
