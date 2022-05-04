void S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:41 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06483092,125,1.231787);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI25_mI20__423 = new TH1D("S18_ThetaY_mI25_mI20__423","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__423->SetBinContent(311,0.05555556);
   S18_ThetaY_mI25_mI20__423->SetBinContent(312,0.3333333);
   S18_ThetaY_mI25_mI20__423->SetBinContent(313,0.9444444);
   S18_ThetaY_mI25_mI20__423->SetBinContent(314,0.7037037);
   S18_ThetaY_mI25_mI20__423->SetBinContent(315,0.8148148);
   S18_ThetaY_mI25_mI20__423->SetBinContent(316,0.8703704);
   S18_ThetaY_mI25_mI20__423->SetBinContent(317,0.5925926);
   S18_ThetaY_mI25_mI20__423->SetBinContent(318,0.9814815);
   S18_ThetaY_mI25_mI20__423->SetBinContent(319,0.5740741);
   S18_ThetaY_mI25_mI20__423->SetBinContent(320,0.7592593);
   S18_ThetaY_mI25_mI20__423->SetBinContent(321,1);
   S18_ThetaY_mI25_mI20__423->SetBinContent(322,0.5925926);
   S18_ThetaY_mI25_mI20__423->SetBinContent(323,0.9074074);
   S18_ThetaY_mI25_mI20__423->SetBinContent(324,0.7777778);
   S18_ThetaY_mI25_mI20__423->SetBinContent(325,0.537037);
   S18_ThetaY_mI25_mI20__423->SetBinContent(326,0.5555556);
   S18_ThetaY_mI25_mI20__423->SetBinContent(327,0.2962963);
   S18_ThetaY_mI25_mI20__423->SetBinContent(328,0.2222222);
   S18_ThetaY_mI25_mI20__423->SetBinContent(329,0.09259259);
   S18_ThetaY_mI25_mI20__423->SetBinError(311,0.03207501);
   S18_ThetaY_mI25_mI20__423->SetBinError(312,0.07856742);
   S18_ThetaY_mI25_mI20__423->SetBinError(313,0.1322487);
   S18_ThetaY_mI25_mI20__423->SetBinError(314,0.1141558);
   S18_ThetaY_mI25_mI20__423->SetBinError(315,0.122838);
   S18_ThetaY_mI25_mI20__423->SetBinError(316,0.1269566);
   S18_ThetaY_mI25_mI20__423->SetBinError(317,0.1047566);
   S18_ThetaY_mI25_mI20__423->SetBinError(318,0.1348168);
   S18_ThetaY_mI25_mI20__423->SetBinError(319,0.1031067);
   S18_ThetaY_mI25_mI20__423->SetBinError(320,0.1185764);
   S18_ThetaY_mI25_mI20__423->SetBinError(321,0.1360828);
   S18_ThetaY_mI25_mI20__423->SetBinError(322,0.1047566);
   S18_ThetaY_mI25_mI20__423->SetBinError(323,0.1296296);
   S18_ThetaY_mI25_mI20__423->SetBinError(324,0.1200137);
   S18_ThetaY_mI25_mI20__423->SetBinError(325,0.09972527);
   S18_ThetaY_mI25_mI20__423->SetBinError(326,0.1014301);
   S18_ThetaY_mI25_mI20__423->SetBinError(327,0.07407407);
   S18_ThetaY_mI25_mI20__423->SetBinError(328,0.06415003);
   S18_ThetaY_mI25_mI20__423->SetBinError(329,0.04140867);
   S18_ThetaY_mI25_mI20__423->SetMinimum(0);
   S18_ThetaY_mI25_mI20__423->SetMaximum(1.102126);
   S18_ThetaY_mI25_mI20__423->SetEntries(627);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__423->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__423->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__423->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__423->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__423->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__423->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__423->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__423->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__423->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__423->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__423->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__423->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__423->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__423->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__423->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__423->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__424 = new TH1D("ThetaY_mI25_mI20__424","",630,-1575,1575);
   ThetaY_mI25_mI20__424->SetBinContent(300,0.005990338);
   ThetaY_mI25_mI20__424->SetBinContent(301,0.06666667);
   ThetaY_mI25_mI20__424->SetBinContent(302,0.1972303);
   ThetaY_mI25_mI20__424->SetBinContent(303,0.3859581);
   ThetaY_mI25_mI20__424->SetBinContent(304,0.5927858);
   ThetaY_mI25_mI20__424->SetBinContent(305,0.742351);
   ThetaY_mI25_mI20__424->SetBinContent(306,0.8461836);
   ThetaY_mI25_mI20__424->SetBinContent(307,0.9108535);
   ThetaY_mI25_mI20__424->SetBinContent(308,0.9647021);
   ThetaY_mI25_mI20__424->SetBinContent(309,0.9836393);
   ThetaY_mI25_mI20__424->SetBinContent(310,0.998905);
   ThetaY_mI25_mI20__424->SetBinContent(311,0.9873108);
   ThetaY_mI25_mI20__424->SetBinContent(312,0.9955556);
   ThetaY_mI25_mI20__424->SetBinContent(313,0.9965217);
   ThetaY_mI25_mI20__424->SetBinContent(314,0.9715942);
   ThetaY_mI25_mI20__424->SetBinContent(315,0.9880193);
   ThetaY_mI25_mI20__424->SetBinContent(316,0.9866667);
   ThetaY_mI25_mI20__424->SetBinContent(317,0.9861514);
   ThetaY_mI25_mI20__424->SetBinContent(318,1.001932);
   ThetaY_mI25_mI20__424->SetBinContent(319,0.9811916);
   ThetaY_mI25_mI20__424->SetBinContent(320,0.9999356);
   ThetaY_mI25_mI20__424->SetBinContent(321,1);
   ThetaY_mI25_mI20__424->SetBinContent(322,0.9887279);
   ThetaY_mI25_mI20__424->SetBinContent(323,0.950467);
   ThetaY_mI25_mI20__424->SetBinContent(324,0.9027375);
   ThetaY_mI25_mI20__424->SetBinContent(325,0.8558454);
   ThetaY_mI25_mI20__424->SetBinContent(326,0.7438969);
   ThetaY_mI25_mI20__424->SetBinContent(327,0.6081159);
   ThetaY_mI25_mI20__424->SetBinContent(328,0.3902738);
   ThetaY_mI25_mI20__424->SetBinContent(329,0.1898229);
   ThetaY_mI25_mI20__424->SetBinContent(330,0.0626087);
   ThetaY_mI25_mI20__424->SetBinContent(331,0.005217391);
   ThetaY_mI25_mI20__424->SetBinError(300,0.0006211691);
   ThetaY_mI25_mI20__424->SetBinError(301,0.002072233);
   ThetaY_mI25_mI20__424->SetBinError(302,0.003564273);
   ThetaY_mI25_mI20__424->SetBinError(303,0.004986023);
   ThetaY_mI25_mI20__424->SetBinError(304,0.006179212);
   ThetaY_mI25_mI20__424->SetBinError(305,0.006914947);
   ThetaY_mI25_mI20__424->SetBinError(306,0.007382722);
   ThetaY_mI25_mI20__424->SetBinError(307,0.007659642);
   ThetaY_mI25_mI20__424->SetBinError(308,0.007882805);
   ThetaY_mI25_mI20__424->SetBinError(309,0.0079598);
   ThetaY_mI25_mI20__424->SetBinError(310,0.008021328);
   ThetaY_mI25_mI20__424->SetBinError(311,0.007974641);
   ThetaY_mI25_mI20__424->SetBinError(312,0.008007869);
   ThetaY_mI25_mI20__424->SetBinError(313,0.008011754);
   ThetaY_mI25_mI20__424->SetBinError(314,0.007910914);
   ThetaY_mI25_mI20__424->SetBinError(315,0.007977502);
   ThetaY_mI25_mI20__424->SetBinError(316,0.007972039);
   ThetaY_mI25_mI20__424->SetBinError(317,0.007969957);
   ThetaY_mI25_mI20__424->SetBinError(318,0.008033474);
   ThetaY_mI25_mI20__424->SetBinError(319,0.00794989);
   ThetaY_mI25_mI20__424->SetBinError(320,0.008025465);
   ThetaY_mI25_mI20__424->SetBinError(321,0.008025724);
   ThetaY_mI25_mI20__424->SetBinError(322,0.007980362);
   ThetaY_mI25_mI20__424->SetBinError(323,0.00782443);
   ThetaY_mI25_mI20__424->SetBinError(324,0.007625441);
   ThetaY_mI25_mI20__424->SetBinError(325,0.00742475);
   ThetaY_mI25_mI20__424->SetBinError(326,0.006922143);
   ThetaY_mI25_mI20__424->SetBinError(327,0.006258603);
   ThetaY_mI25_mI20__424->SetBinError(328,0.005013821);
   ThetaY_mI25_mI20__424->SetBinError(329,0.003496701);
   ThetaY_mI25_mI20__424->SetBinError(330,0.002008175);
   ThetaY_mI25_mI20__424->SetBinError(331,0.0005797101);
   ThetaY_mI25_mI20__424->SetEntries(361544);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__424->SetLineColor(ci);
   ThetaY_mI25_mI20__424->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__424->SetMarkerColor(ci);
   ThetaY_mI25_mI20__424->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__424->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__424->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__424->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__424->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__424->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__424->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__424->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__424->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__424->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__424->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__424->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__424->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__424->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__424->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__424->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__424->Draw("AEsame");
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
   
   Double_t _fx3142[32] = {
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
   Double_t _fy3142[32] = {
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
   0.05626957,
   0.3348214,
   0.9477409,
   0.7242774,
   0.8246952,
   0.8821321,
   0.6009144,
   0.9795886,
   0.5850784,
   0.7593082,
   1,
   0.5993485,
   0.9546964,
   0.8615769,
   0.627493,
   0.7468179,
   0.4872365,
   0.5694009,
   0.4877842,
   0,
   0};
   Double_t _felx3142[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3142[32] = {
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
   0.03062607,
   0.07822189,
   0.1324874,
   0.1171175,
   0.1240268,
   0.1284053,
   0.1057767,
   0.1343551,
   0.1046163,
   0.1182505,
   0.1358916,
   0.1055008,
   0.1361392,
   0.1326065,
   0.115969,
   0.1357558,
   0.1206203,
   0.1622029,
   0.2108411,
   0,
   0};
   Double_t _fehx3142[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3142[32] = {
   5.748037,
   0.51185,
   0.1729108,
   0.08834697,
   0.05751893,
   0.04592937,
   0.04029313,
   0.03743216,
   0.03534261,
   0.03466215,
   0.03413239,
   0.05474559,
   0.09905173,
   0.152452,
   0.1377899,
   0.1442551,
   0.1486195,
   0.1262717,
   0.1541894,
   0.1252405,
   0.1382833,
   0.1557538,
   0.1259422,
   0.1570998,
   0.1547861,
   0.1396846,
   0.163015,
   0.1549638,
   0.2166594,
   0.3304527,
   0.5450569,
   6.609316};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3142,_fy3142,_felx3142,_fehx3142,_fely3142,_fehy3142);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3142 = new TH1F("Graph_Graph3142","",100,-100,100);
   Graph_Graph3142->SetMinimum(0);
   Graph_Graph3142->SetMaximum(1.5);
   Graph_Graph3142->SetDirectory(0);
   Graph_Graph3142->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3142->SetLineColor(ci);
   Graph_Graph3142->GetXaxis()->SetRange(1,100);
   Graph_Graph3142->GetXaxis()->CenterTitle(true);
   Graph_Graph3142->GetXaxis()->SetLabelFont(42);
   Graph_Graph3142->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3142->GetXaxis()->SetTitleFont(42);
   Graph_Graph3142->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3142->GetYaxis()->CenterTitle(true);
   Graph_Graph3142->GetYaxis()->SetLabelFont(42);
   Graph_Graph3142->GetYaxis()->SetTitleFont(42);
   Graph_Graph3142->GetZaxis()->SetLabelFont(42);
   Graph_Graph3142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3142->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3142);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.102126,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__425 = new TH2D("ThetaY_vs_Y_mI25_mI20__425","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7808,93);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7834,1035);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7860,3062);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7886,5992);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7912,9203);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7938,11525);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7964,13137);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(7990,14141);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8016,14977);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8042,15271);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8068,15508);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8094,15328);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8120,15456);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8146,15471);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8172,15084);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8198,15339);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8224,15318);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8250,15310);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8276,15555);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8302,15233);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8328,15524);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8354,15525);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8380,15350);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8406,14756);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8432,14015);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8458,13287);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8484,11549);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8510,9441);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8536,6059);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8562,2947);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8588,972);
   ThetaY_vs_Y_mI25_mI20__425->SetBinContent(8614,81);
   ThetaY_vs_Y_mI25_mI20__425->SetEntries(361544);
   ThetaY_vs_Y_mI25_mI20__425->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(1,777.75);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(2,1555.5);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(3,2333.25);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(4,3111);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(5,3888.75);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(6,4666.5);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(7,5444.25);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(8,6222);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(9,6999.75);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(10,7777.5);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(11,8555.25);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(12,9333);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(13,10110.75);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(14,10888.5);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(15,11666.25);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(16,12444);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(17,13221.75);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(18,13999.5);
   ThetaY_vs_Y_mI25_mI20__425->SetContourLevel(19,14777.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__425->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__425->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__425->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__425->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__425->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__425->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__425->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__425->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__425->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__425->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__425->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__425->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__425->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__425->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__425->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__425->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-25_-20","Reco vertices","lpf");
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
