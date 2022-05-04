void S18_VerticalDecayAngleRatio_25_30()
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
   upper_pad->Range(-125,-0.08898411,125,1.690698);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_25_30__453 = new TH1D("S18_ThetaY_25_30__453","",630,-1575,1575);
   S18_ThetaY_25_30__453->SetBinContent(302,0.03571429);
   S18_ThetaY_25_30__453->SetBinContent(303,0.1785714);
   S18_ThetaY_25_30__453->SetBinContent(304,0.4285714);
   S18_ThetaY_25_30__453->SetBinContent(305,1);
   S18_ThetaY_25_30__453->SetBinContent(306,1.035714);
   S18_ThetaY_25_30__453->SetBinContent(307,0.8571429);
   S18_ThetaY_25_30__453->SetBinContent(308,0.8214286);
   S18_ThetaY_25_30__453->SetBinContent(309,1);
   S18_ThetaY_25_30__453->SetBinContent(310,0.9642857);
   S18_ThetaY_25_30__453->SetBinContent(311,0.7142857);
   S18_ThetaY_25_30__453->SetBinContent(312,0.7857143);
   S18_ThetaY_25_30__453->SetBinContent(313,0.6071429);
   S18_ThetaY_25_30__453->SetBinContent(314,1.107143);
   S18_ThetaY_25_30__453->SetBinContent(315,0.6071429);
   S18_ThetaY_25_30__453->SetBinContent(316,1.321429);
   S18_ThetaY_25_30__453->SetBinContent(317,1.142857);
   S18_ThetaY_25_30__453->SetBinContent(318,0.1785714);
   S18_ThetaY_25_30__453->SetBinError(302,0.03571429);
   S18_ThetaY_25_30__453->SetBinError(303,0.07985957);
   S18_ThetaY_25_30__453->SetBinError(304,0.1237179);
   S18_ThetaY_25_30__453->SetBinError(305,0.1889822);
   S18_ThetaY_25_30__453->SetBinError(306,0.1923273);
   S18_ThetaY_25_30__453->SetBinError(307,0.1749636);
   S18_ThetaY_25_30__453->SetBinError(308,0.1712797);
   S18_ThetaY_25_30__453->SetBinError(309,0.1889822);
   S18_ThetaY_25_30__453->SetBinError(310,0.1855769);
   S18_ThetaY_25_30__453->SetBinError(311,0.1597191);
   S18_ThetaY_25_30__453->SetBinError(312,0.1675148);
   S18_ThetaY_25_30__453->SetBinError(313,0.1472538);
   S18_ThetaY_25_30__453->SetBinError(314,0.1988487);
   S18_ThetaY_25_30__453->SetBinError(315,0.1472538);
   S18_ThetaY_25_30__453->SetBinError(316,0.2172415);
   S18_ThetaY_25_30__453->SetBinError(317,0.2020305);
   S18_ThetaY_25_30__453->SetBinError(318,0.07985957);
   S18_ThetaY_25_30__453->SetMinimum(0);
   S18_ThetaY_25_30__453->SetMaximum(1.51273);
   S18_ThetaY_25_30__453->SetEntries(358);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__453->SetLineColor(ci);
   S18_ThetaY_25_30__453->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__453->SetMarkerColor(ci);
   S18_ThetaY_25_30__453->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__453->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__453->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__453->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__453->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__453->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__453->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__453->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__453->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__453->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__453->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__453->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__453->Draw("AE");
   
   TH1D *ThetaY_25_30__454 = new TH1D("ThetaY_25_30__454","",630,-1575,1575);
   ThetaY_25_30__454->SetBinContent(300,0.008635097);
   ThetaY_25_30__454->SetBinContent(301,0.08844011);
   ThetaY_25_30__454->SetBinContent(302,0.2577994);
   ThetaY_25_30__454->SetBinContent(303,0.5171309);
   ThetaY_25_30__454->SetBinContent(304,0.8142061);
   ThetaY_25_30__454->SetBinContent(305,1);
   ThetaY_25_30__454->SetBinContent(306,1.141226);
   ThetaY_25_30__454->SetBinContent(307,1.241783);
   ThetaY_25_30__454->SetBinContent(308,1.322563);
   ThetaY_25_30__454->SetBinContent(309,1.367967);
   ThetaY_25_30__454->SetBinContent(310,1.35585);
   ThetaY_25_30__454->SetBinContent(311,1.339833);
   ThetaY_25_30__454->SetBinContent(312,1.334262);
   ThetaY_25_30__454->SetBinContent(313,1.357382);
   ThetaY_25_30__454->SetBinContent(314,1.343733);
   ThetaY_25_30__454->SetBinContent(315,1.367967);
   ThetaY_25_30__454->SetBinContent(316,1.34429);
   ThetaY_25_30__454->SetBinContent(317,1.361003);
   ThetaY_25_30__454->SetBinContent(318,1.375209);
   ThetaY_25_30__454->SetBinContent(319,1.372981);
   ThetaY_25_30__454->SetBinContent(320,1.36532);
   ThetaY_25_30__454->SetBinContent(321,1.342201);
   ThetaY_25_30__454->SetBinContent(322,1.311281);
   ThetaY_25_30__454->SetBinContent(323,1.287047);
   ThetaY_25_30__454->SetBinContent(324,1.237465);
   ThetaY_25_30__454->SetBinContent(325,1.138997);
   ThetaY_25_30__454->SetBinContent(326,1.016017);
   ThetaY_25_30__454->SetBinContent(327,0.8199164);
   ThetaY_25_30__454->SetBinContent(328,0.5270195);
   ThetaY_25_30__454->SetBinContent(329,0.2600279);
   ThetaY_25_30__454->SetBinContent(330,0.0862117);
   ThetaY_25_30__454->SetBinContent(331,0.006685237);
   ThetaY_25_30__454->SetBinError(300,0.001096658);
   ThetaY_25_30__454->SetBinError(301,0.003509639);
   ThetaY_25_30__454->SetBinError(302,0.005992096);
   ThetaY_25_30__454->SetBinError(303,0.008486684);
   ThetaY_25_30__454->SetBinError(304,0.01064891);
   ThetaY_25_30__454->SetBinError(305,0.01180152);
   ThetaY_25_30__454->SetBinError(306,0.01260734);
   ThetaY_25_30__454->SetBinError(307,0.01315105);
   ThetaY_25_30__454->SetBinError(308,0.01357206);
   ThetaY_25_30__454->SetBinError(309,0.01380306);
   ThetaY_25_30__454->SetBinError(310,0.0137418);
   ThetaY_25_30__454->SetBinError(311,0.01366039);
   ThetaY_25_30__454->SetBinError(312,0.01363196);
   ThetaY_25_30__454->SetBinError(313,0.01374956);
   ThetaY_25_30__454->SetBinError(314,0.01368026);
   ThetaY_25_30__454->SetBinError(315,0.01380306);
   ThetaY_25_30__454->SetBinError(316,0.01368309);
   ThetaY_25_30__454->SetBinError(317,0.01376789);
   ThetaY_25_30__454->SetBinError(318,0.01383955);
   ThetaY_25_30__454->SetBinError(319,0.01382834);
   ThetaY_25_30__454->SetBinError(320,0.01378971);
   ThetaY_25_30__454->SetBinError(321,0.01367245);
   ThetaY_25_30__454->SetBinError(322,0.01351406);
   ThetaY_25_30__454->SetBinError(323,0.0133886);
   ThetaY_25_30__454->SetBinError(324,0.01312817);
   ThetaY_25_30__454->SetBinError(325,0.01259503);
   ThetaY_25_30__454->SetBinError(326,0.01189565);
   ThetaY_25_30__454->SetBinError(327,0.01068618);
   ThetaY_25_30__454->SetBinError(328,0.008567441);
   ThetaY_25_30__454->SetBinError(329,0.006017938);
   ThetaY_25_30__454->SetBinError(330,0.003465141);
   ThetaY_25_30__454->SetBinError(331,0.0009649308);
   ThetaY_25_30__454->SetEntries(227681);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__454->SetLineColor(ci);
   ThetaY_25_30__454->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__454->SetMarkerColor(ci);
   ThetaY_25_30__454->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__454->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__454->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__454->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__454->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__454->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__454->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__454->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__454->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__454->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__454->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__454->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__454->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__454->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__454->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__454->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__454->Draw("AEsame");
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
   
   Double_t _fx3152[32] = {
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
   Double_t _fy3152[32] = {
   0,
   0,
   0.1385352,
   0.3453118,
   0.5263672,
   1,
   0.9075456,
   0.6902519,
   0.6210886,
   0.731012,
   0.7112041,
   0.5331155,
   0.5888756,
   0.4472897,
   0.8239309,
   0.4438287,
   0.9829939,
   0.839717,
   0.1298504,
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
   0};
   Double_t _felx3152[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3152[32] = {
   0,
   0,
   0.1146145,
   0.1492368,
   0.1499491,
   0.1882005,
   0.1678362,
   0.1400895,
   0.128707,
   0.1375073,
   0.1362003,
   0.1183208,
   0.1247243,
   0.1074956,
   0.1474088,
   0.1066631,
   0.1611696,
   0.147897,
   0.05609915,
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
   0};
   Double_t _fehx3152[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3152[32] = {
   7.728541,
   0.7445284,
   0.3188493,
   0.2338653,
   0.2002948,
   0.2274871,
   0.2021936,
   0.1719002,
   0.1586246,
   0.1661892,
   0.165182,
   0.148043,
   0.1544383,
   0.1370718,
   0.1764945,
   0.13601,
   0.1900596,
   0.1765781,
   0.08788037,
   0.04789355,
   0.04816229,
   0.04899197,
   0.05014729,
   0.05109161,
   0.05313894,
   0.05773339,
   0.06472243,
   0.08020458,
   0.12479,
   0.2529852,
   0.7638018,
   10.02627};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3152,_fy3152,_felx3152,_fehx3152,_fely3152,_fehy3152);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3152 = new TH1F("Graph_Graph3152","",100,-100,100);
   Graph_Graph3152->SetMinimum(0);
   Graph_Graph3152->SetMaximum(1.5);
   Graph_Graph3152->SetDirectory(0);
   Graph_Graph3152->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3152->SetLineColor(ci);
   Graph_Graph3152->GetXaxis()->SetRange(1,100);
   Graph_Graph3152->GetXaxis()->CenterTitle(true);
   Graph_Graph3152->GetXaxis()->SetLabelFont(42);
   Graph_Graph3152->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3152->GetXaxis()->SetTitleFont(42);
   Graph_Graph3152->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3152->GetYaxis()->CenterTitle(true);
   Graph_Graph3152->GetYaxis()->SetLabelFont(42);
   Graph_Graph3152->GetYaxis()->SetTitleFont(42);
   Graph_Graph3152->GetZaxis()->SetLabelFont(42);
   Graph_Graph3152->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3152->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3152);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.51273,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__455 = new TH2D("ThetaY_vs_Y_25_30__455","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__455->SetBinContent(7818,62);
   ThetaY_vs_Y_25_30__455->SetBinContent(7844,635);
   ThetaY_vs_Y_25_30__455->SetBinContent(7870,1851);
   ThetaY_vs_Y_25_30__455->SetBinContent(7896,3713);
   ThetaY_vs_Y_25_30__455->SetBinContent(7922,5846);
   ThetaY_vs_Y_25_30__455->SetBinContent(7948,7180);
   ThetaY_vs_Y_25_30__455->SetBinContent(7974,8194);
   ThetaY_vs_Y_25_30__455->SetBinContent(8000,8916);
   ThetaY_vs_Y_25_30__455->SetBinContent(8026,9496);
   ThetaY_vs_Y_25_30__455->SetBinContent(8052,9822);
   ThetaY_vs_Y_25_30__455->SetBinContent(8078,9735);
   ThetaY_vs_Y_25_30__455->SetBinContent(8104,9620);
   ThetaY_vs_Y_25_30__455->SetBinContent(8130,9580);
   ThetaY_vs_Y_25_30__455->SetBinContent(8156,9746);
   ThetaY_vs_Y_25_30__455->SetBinContent(8182,9648);
   ThetaY_vs_Y_25_30__455->SetBinContent(8208,9822);
   ThetaY_vs_Y_25_30__455->SetBinContent(8234,9652);
   ThetaY_vs_Y_25_30__455->SetBinContent(8260,9772);
   ThetaY_vs_Y_25_30__455->SetBinContent(8286,9874);
   ThetaY_vs_Y_25_30__455->SetBinContent(8312,9858);
   ThetaY_vs_Y_25_30__455->SetBinContent(8338,9803);
   ThetaY_vs_Y_25_30__455->SetBinContent(8364,9637);
   ThetaY_vs_Y_25_30__455->SetBinContent(8390,9415);
   ThetaY_vs_Y_25_30__455->SetBinContent(8416,9241);
   ThetaY_vs_Y_25_30__455->SetBinContent(8442,8885);
   ThetaY_vs_Y_25_30__455->SetBinContent(8468,8178);
   ThetaY_vs_Y_25_30__455->SetBinContent(8494,7295);
   ThetaY_vs_Y_25_30__455->SetBinContent(8520,5887);
   ThetaY_vs_Y_25_30__455->SetBinContent(8546,3784);
   ThetaY_vs_Y_25_30__455->SetBinContent(8572,1867);
   ThetaY_vs_Y_25_30__455->SetBinContent(8598,619);
   ThetaY_vs_Y_25_30__455->SetBinContent(8624,48);
   ThetaY_vs_Y_25_30__455->SetEntries(227681);
   ThetaY_vs_Y_25_30__455->SetContour(20);
   ThetaY_vs_Y_25_30__455->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__455->SetContourLevel(1,493.7);
   ThetaY_vs_Y_25_30__455->SetContourLevel(2,987.4);
   ThetaY_vs_Y_25_30__455->SetContourLevel(3,1481.1);
   ThetaY_vs_Y_25_30__455->SetContourLevel(4,1974.8);
   ThetaY_vs_Y_25_30__455->SetContourLevel(5,2468.5);
   ThetaY_vs_Y_25_30__455->SetContourLevel(6,2962.2);
   ThetaY_vs_Y_25_30__455->SetContourLevel(7,3455.9);
   ThetaY_vs_Y_25_30__455->SetContourLevel(8,3949.6);
   ThetaY_vs_Y_25_30__455->SetContourLevel(9,4443.3);
   ThetaY_vs_Y_25_30__455->SetContourLevel(10,4937);
   ThetaY_vs_Y_25_30__455->SetContourLevel(11,5430.7);
   ThetaY_vs_Y_25_30__455->SetContourLevel(12,5924.4);
   ThetaY_vs_Y_25_30__455->SetContourLevel(13,6418.1);
   ThetaY_vs_Y_25_30__455->SetContourLevel(14,6911.8);
   ThetaY_vs_Y_25_30__455->SetContourLevel(15,7405.5);
   ThetaY_vs_Y_25_30__455->SetContourLevel(16,7899.2);
   ThetaY_vs_Y_25_30__455->SetContourLevel(17,8392.9);
   ThetaY_vs_Y_25_30__455->SetContourLevel(18,8886.6);
   ThetaY_vs_Y_25_30__455->SetContourLevel(19,9380.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__455->SetLineColor(ci);
   ThetaY_vs_Y_25_30__455->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__455->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__455->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__455->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__455->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__455->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__455->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__455->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__455->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__455->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__455->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__455->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__455->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__455->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__455->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
