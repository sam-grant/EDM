void S12_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:40 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0664844,125,1.263203);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__393 = new TH1D("S12_ThetaY_20_25__393","",630,-1575,1575);
   S12_ThetaY_20_25__393->SetBinContent(302,0.03508772);
   S12_ThetaY_20_25__393->SetBinContent(303,0.2807018);
   S12_ThetaY_20_25__393->SetBinContent(304,0.2807018);
   S12_ThetaY_20_25__393->SetBinContent(305,0.6315789);
   S12_ThetaY_20_25__393->SetBinContent(306,0.6666667);
   S12_ThetaY_20_25__393->SetBinContent(307,0.4385965);
   S12_ThetaY_20_25__393->SetBinContent(308,0.6491228);
   S12_ThetaY_20_25__393->SetBinContent(309,0.9298246);
   S12_ThetaY_20_25__393->SetBinContent(310,0.754386);
   S12_ThetaY_20_25__393->SetBinContent(311,0.9122807);
   S12_ThetaY_20_25__393->SetBinContent(312,0.8596491);
   S12_ThetaY_20_25__393->SetBinContent(313,1);
   S12_ThetaY_20_25__393->SetBinContent(314,0.9473684);
   S12_ThetaY_20_25__393->SetBinContent(315,0.7368421);
   S12_ThetaY_20_25__393->SetBinContent(316,0.8070175);
   S12_ThetaY_20_25__393->SetBinContent(317,0.8947368);
   S12_ThetaY_20_25__393->SetBinContent(318,0.7192982);
   S12_ThetaY_20_25__393->SetBinContent(319,0.4210526);
   S12_ThetaY_20_25__393->SetBinError(302,0.02481076);
   S12_ThetaY_20_25__393->SetBinError(303,0.07017544);
   S12_ThetaY_20_25__393->SetBinError(304,0.07017544);
   S12_ThetaY_20_25__393->SetBinError(305,0.1052632);
   S12_ThetaY_20_25__393->SetBinError(306,0.1081476);
   S12_ThetaY_20_25__393->SetBinError(307,0.0877193);
   S12_ThetaY_20_25__393->SetBinError(308,0.1067151);
   S12_ThetaY_20_25__393->SetBinError(309,0.1277212);
   S12_ThetaY_20_25__393->SetBinError(310,0.1150428);
   S12_ThetaY_20_25__393->SetBinError(311,0.1265106);
   S12_ThetaY_20_25__393->SetBinError(312,0.122807);
   S12_ThetaY_20_25__393->SetBinError(313,0.1324532);
   S12_ThetaY_20_25__393->SetBinError(314,0.1289205);
   S12_ThetaY_20_25__393->SetBinError(315,0.1136972);
   S12_ThetaY_20_25__393->SetBinError(316,0.1189882);
   S12_ThetaY_20_25__393->SetBinError(317,0.1252882);
   S12_ThetaY_20_25__393->SetBinError(318,0.1123355);
   S12_ThetaY_20_25__393->SetBinError(319,0.08594701);
   S12_ThetaY_20_25__393->SetMinimum(0);
   S12_ThetaY_20_25__393->SetMaximum(1.130235);
   S12_ThetaY_20_25__393->SetEntries(682);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__393->SetLineColor(ci);
   S12_ThetaY_20_25__393->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__393->SetMarkerColor(ci);
   S12_ThetaY_20_25__393->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__393->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__393->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__393->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__393->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__393->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__393->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__393->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__393->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__393->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__393->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__393->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__393->Draw("AE");
   
   TH1D *ThetaY_20_25__394 = new TH1D("ThetaY_20_25__394","",630,-1575,1575);
   ThetaY_20_25__394->SetBinContent(300,0.004602619);
   ThetaY_20_25__394->SetBinContent(301,0.06534422);
   ThetaY_20_25__394->SetBinContent(302,0.1879943);
   ThetaY_20_25__394->SetBinContent(303,0.3857773);
   ThetaY_20_25__394->SetBinContent(304,0.5994425);
   ThetaY_20_25__394->SetBinContent(305,0.7464022);
   ThetaY_20_25__394->SetBinContent(306,0.8528458);
   ThetaY_20_25__394->SetBinContent(307,0.9227927);
   ThetaY_20_25__394->SetBinContent(308,0.9703747);
   ThetaY_20_25__394->SetBinContent(309,0.9707636);
   ThetaY_20_25__394->SetBinContent(310,1.002593);
   ThetaY_20_25__394->SetBinContent(311,0.9983145);
   ThetaY_20_25__394->SetBinContent(312,1.005251);
   ThetaY_20_25__394->SetBinContent(313,1);
   ThetaY_20_25__394->SetBinContent(314,1.027486);
   ThetaY_20_25__394->SetBinContent(315,0.9945546);
   ThetaY_20_25__394->SetBinContent(316,1.008233);
   ThetaY_20_25__394->SetBinContent(317,1.015882);
   ThetaY_20_25__394->SetBinContent(318,0.9972125);
   ThetaY_20_25__394->SetBinContent(319,1.003047);
   ThetaY_20_25__394->SetBinContent(320,1.000194);
   ThetaY_20_25__394->SetBinContent(321,1.016725);
   ThetaY_20_25__394->SetBinContent(322,0.991443);
   ThetaY_20_25__394->SetBinContent(323,0.9587061);
   ThetaY_20_25__394->SetBinContent(324,0.9177363);
   ThetaY_20_25__394->SetBinContent(325,0.8560223);
   ThetaY_20_25__394->SetBinContent(326,0.7436795);
   ThetaY_20_25__394->SetBinContent(327,0.5997666);
   ThetaY_20_25__394->SetBinContent(328,0.3842863);
   ThetaY_20_25__394->SetBinContent(329,0.1891612);
   ThetaY_20_25__394->SetBinContent(330,0.06482562);
   ThetaY_20_25__394->SetBinContent(331,0.004667445);
   ThetaY_20_25__394->SetBinError(300,0.0005462304);
   ThetaY_20_25__394->SetBinError(301,0.00205815);
   ThetaY_20_25__394->SetBinError(302,0.003490966);
   ThetaY_20_25__394->SetBinError(303,0.005000825);
   ThetaY_20_25__394->SetBinError(304,0.006233717);
   ThetaY_20_25__394->SetBinError(305,0.006956003);
   ThetaY_20_25__394->SetBinError(306,0.007435473);
   ThetaY_20_25__394->SetBinError(307,0.007734378);
   ThetaY_20_25__394->SetBinError(308,0.007931276);
   ThetaY_20_25__394->SetBinError(309,0.007932865);
   ThetaY_20_25__394->SetBinError(310,0.008061868);
   ThetaY_20_25__394->SetBinError(311,0.008044648);
   ThetaY_20_25__394->SetBinError(312,0.008072547);
   ThetaY_20_25__394->SetBinError(313,0.008051436);
   ThetaY_20_25__394->SetBinError(314,0.008161337);
   ThetaY_20_25__394->SetBinError(315,0.008029484);
   ThetaY_20_25__394->SetBinError(316,0.008084511);
   ThetaY_20_25__394->SetBinError(317,0.008115122);
   ThetaY_20_25__394->SetBinError(318,0.008040206);
   ThetaY_20_25__394->SetBinError(319,0.008063692);
   ThetaY_20_25__394->SetBinError(320,0.008052219);
   ThetaY_20_25__394->SetBinError(321,0.008118487);
   ThetaY_20_25__394->SetBinError(322,0.008016914);
   ThetaY_20_25__394->SetBinError(323,0.007883446);
   ThetaY_20_25__394->SetBinError(324,0.007713159);
   ThetaY_20_25__394->SetBinError(325,0.007449307);
   ThetaY_20_25__394->SetBinError(326,0.006943305);
   ThetaY_20_25__394->SetBinError(327,0.006235402);
   ThetaY_20_25__394->SetBinError(328,0.004991152);
   ThetaY_20_25__394->SetBinError(329,0.003501784);
   ThetaY_20_25__394->SetBinError(330,0.002049966);
   ThetaY_20_25__394->SetBinError(331,0.0005500636);
   ThetaY_20_25__394->SetEntries(362297);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__394->SetLineColor(ci);
   ThetaY_20_25__394->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__394->SetMarkerColor(ci);
   ThetaY_20_25__394->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__394->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__394->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__394->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__394->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__394->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__394->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__394->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__394->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__394->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__394->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__394->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__394->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__394->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__394->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__394->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__394->Draw("AEsame");
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
   
   Double_t _fx3132[32] = {
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
   Double_t _fy3132[32] = {
   0,
   0,
   0.1866425,
   0.7276265,
   0.4682714,
   0.8461644,
   0.7816966,
   0.4752926,
   0.6689404,
   0.957828,
   0.7524349,
   0.9138209,
   0.8551588,
   1,
   0.9220256,
   0.7408764,
   0.8004277,
   0.8807485,
   0.7213089,
   0.4197737,
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
   0};
   Double_t _felx3132[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3132[32] = {
   0,
   0,
   0.1205798,
   0.1802155,
   0.1159272,
   0.1405827,
   0.126425,
   0.09449825,
   0.1096055,
   0.131379,
   0.1144525,
   0.1265244,
   0.1219356,
   0.1323031,
   0.1252911,
   0.1140149,
   0.1177561,
   0.1231198,
   0.1123341,
   0.08514824,
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
   0};
   Double_t _fehx3132[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3132[32] = {
   7.109217,
   0.494736,
   0.2463652,
   0.2315702,
   0.1489354,
   0.1661474,
   0.1487462,
   0.115462,
   0.1292334,
   0.1507757,
   0.1333511,
   0.145394,
   0.1407073,
   0.1510924,
   0.1436031,
   0.1330814,
   0.1365083,
   0.1416723,
   0.1313648,
   0.1044661,
   0.03229427,
   0.03176918,
   0.03257935,
   0.03369191,
   0.03519609,
   0.03773369,
   0.04343432,
   0.05385735,
   0.0840614,
   0.1708005,
   0.4986975,
   7.00921};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3132,_fy3132,_felx3132,_fehx3132,_fely3132,_fehy3132);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3132 = new TH1F("Graph_Graph3132","",100,-100,100);
   Graph_Graph3132->SetMinimum(0);
   Graph_Graph3132->SetMaximum(1.5);
   Graph_Graph3132->SetDirectory(0);
   Graph_Graph3132->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3132->SetLineColor(ci);
   Graph_Graph3132->GetXaxis()->SetRange(1,100);
   Graph_Graph3132->GetXaxis()->CenterTitle(true);
   Graph_Graph3132->GetXaxis()->SetLabelFont(42);
   Graph_Graph3132->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3132->GetXaxis()->SetTitleFont(42);
   Graph_Graph3132->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3132->GetYaxis()->CenterTitle(true);
   Graph_Graph3132->GetYaxis()->SetLabelFont(42);
   Graph_Graph3132->GetYaxis()->SetTitleFont(42);
   Graph_Graph3132->GetZaxis()->SetLabelFont(42);
   Graph_Graph3132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3132->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3132);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.130235,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__395 = new TH2D("ThetaY_vs_Y_20_25__395","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__395->SetBinContent(7817,71);
   ThetaY_vs_Y_20_25__395->SetBinContent(7843,1008);
   ThetaY_vs_Y_20_25__395->SetBinContent(7869,2900);
   ThetaY_vs_Y_20_25__395->SetBinContent(7895,5951);
   ThetaY_vs_Y_20_25__395->SetBinContent(7921,9247);
   ThetaY_vs_Y_20_25__395->SetBinContent(7947,11514);
   ThetaY_vs_Y_20_25__395->SetBinContent(7973,13156);
   ThetaY_vs_Y_20_25__395->SetBinContent(7999,14235);
   ThetaY_vs_Y_20_25__395->SetBinContent(8025,14969);
   ThetaY_vs_Y_20_25__395->SetBinContent(8051,14975);
   ThetaY_vs_Y_20_25__395->SetBinContent(8077,15466);
   ThetaY_vs_Y_20_25__395->SetBinContent(8103,15400);
   ThetaY_vs_Y_20_25__395->SetBinContent(8129,15507);
   ThetaY_vs_Y_20_25__395->SetBinContent(8155,15426);
   ThetaY_vs_Y_20_25__395->SetBinContent(8181,15850);
   ThetaY_vs_Y_20_25__395->SetBinContent(8207,15342);
   ThetaY_vs_Y_20_25__395->SetBinContent(8233,15553);
   ThetaY_vs_Y_20_25__395->SetBinContent(8259,15671);
   ThetaY_vs_Y_20_25__395->SetBinContent(8285,15383);
   ThetaY_vs_Y_20_25__395->SetBinContent(8311,15473);
   ThetaY_vs_Y_20_25__395->SetBinContent(8337,15429);
   ThetaY_vs_Y_20_25__395->SetBinContent(8363,15684);
   ThetaY_vs_Y_20_25__395->SetBinContent(8389,15294);
   ThetaY_vs_Y_20_25__395->SetBinContent(8415,14789);
   ThetaY_vs_Y_20_25__395->SetBinContent(8441,14157);
   ThetaY_vs_Y_20_25__395->SetBinContent(8467,13205);
   ThetaY_vs_Y_20_25__395->SetBinContent(8493,11472);
   ThetaY_vs_Y_20_25__395->SetBinContent(8519,9252);
   ThetaY_vs_Y_20_25__395->SetBinContent(8545,5928);
   ThetaY_vs_Y_20_25__395->SetBinContent(8571,2918);
   ThetaY_vs_Y_20_25__395->SetBinContent(8597,1000);
   ThetaY_vs_Y_20_25__395->SetBinContent(8623,72);
   ThetaY_vs_Y_20_25__395->SetEntries(362297);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__395->SetLineColor(ci);
   ThetaY_vs_Y_20_25__395->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__395->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__395->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__395->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__395->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__395->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__395->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__395->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__395->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__395->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__395->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__395->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__395->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__395->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__395->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_20_25","Reco vertices","lpf");
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
