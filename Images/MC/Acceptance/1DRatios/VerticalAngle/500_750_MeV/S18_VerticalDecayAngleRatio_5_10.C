void S18_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.06587123,125,1.251553);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_5_10__441 = new TH1D("S18_ThetaY_5_10__441","",630,-1575,1575);
   S18_ThetaY_5_10__441->SetBinContent(303,0.008264463);
   S18_ThetaY_5_10__441->SetBinContent(304,0.008264463);
   S18_ThetaY_5_10__441->SetBinContent(305,0.1157025);
   S18_ThetaY_5_10__441->SetBinContent(306,0.3471074);
   S18_ThetaY_5_10__441->SetBinContent(307,0.6033058);
   S18_ThetaY_5_10__441->SetBinContent(308,0.9338843);
   S18_ThetaY_5_10__441->SetBinContent(309,1);
   S18_ThetaY_5_10__441->SetBinContent(310,0.8760331);
   S18_ThetaY_5_10__441->SetBinContent(311,0.7355372);
   S18_ThetaY_5_10__441->SetBinContent(312,0.9338843);
   S18_ThetaY_5_10__441->SetBinContent(313,0.9090909);
   S18_ThetaY_5_10__441->SetBinContent(314,0.661157);
   S18_ThetaY_5_10__441->SetBinContent(315,0.9586777);
   S18_ThetaY_5_10__441->SetBinContent(316,0.8099174);
   S18_ThetaY_5_10__441->SetBinContent(317,0.8760331);
   S18_ThetaY_5_10__441->SetBinContent(318,0.7520661);
   S18_ThetaY_5_10__441->SetBinContent(319,0.9586777);
   S18_ThetaY_5_10__441->SetBinContent(320,0.8181818);
   S18_ThetaY_5_10__441->SetBinContent(321,0.7603306);
   S18_ThetaY_5_10__441->SetBinContent(322,0.5206612);
   S18_ThetaY_5_10__441->SetBinContent(323,0.1322314);
   S18_ThetaY_5_10__441->SetBinContent(324,0.01652893);
   S18_ThetaY_5_10__441->SetBinError(303,0.008264463);
   S18_ThetaY_5_10__441->SetBinError(304,0.008264463);
   S18_ThetaY_5_10__441->SetBinError(305,0.03092279);
   S18_ThetaY_5_10__441->SetBinError(306,0.05355984);
   S18_ThetaY_5_10__441->SetBinError(307,0.0706116);
   S18_ThetaY_5_10__441->SetBinError(308,0.08785244);
   S18_ThetaY_5_10__441->SetBinError(309,0.09090909);
   S18_ThetaY_5_10__441->SetBinError(310,0.08508785);
   S18_ThetaY_5_10__441->SetBinError(311,0.07796679);
   S18_ThetaY_5_10__441->SetBinError(312,0.08785244);
   S18_ThetaY_5_10__441->SetBinError(313,0.08667842);
   S18_ThetaY_5_10__441->SetBinError(314,0.0739196);
   S18_ThetaY_5_10__441->SetBinError(315,0.08901099);
   S18_ThetaY_5_10__441->SetBinError(316,0.08181401);
   S18_ThetaY_5_10__441->SetBinError(317,0.08508785);
   S18_ThetaY_5_10__441->SetBinError(318,0.07883795);
   S18_ThetaY_5_10__441->SetBinError(319,0.08901099);
   S18_ThetaY_5_10__441->SetBinError(320,0.08223037);
   S18_ThetaY_5_10__441->SetBinError(321,0.07926994);
   S18_ThetaY_5_10__441->SetBinError(322,0.06559714);
   S18_ThetaY_5_10__441->SetBinError(323,0.03305785);
   S18_ThetaY_5_10__441->SetBinError(324,0.01168772);
   S18_ThetaY_5_10__441->SetMinimum(0);
   S18_ThetaY_5_10__441->SetMaximum(1.119811);
   S18_ThetaY_5_10__441->SetEntries(1662);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__441->SetLineColor(ci);
   S18_ThetaY_5_10__441->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__441->SetMarkerColor(ci);
   S18_ThetaY_5_10__441->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__441->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__441->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__441->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__441->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__441->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__441->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__441->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__441->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__441->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__441->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__441->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__441->Draw("AE");
   
   TH1D *ThetaY_5_10__442 = new TH1D("ThetaY_5_10__442","",630,-1575,1575);
   ThetaY_5_10__442->SetBinContent(300,0.005638093);
   ThetaY_5_10__442->SetBinContent(301,0.06418341);
   ThetaY_5_10__442->SetBinContent(302,0.1920693);
   ThetaY_5_10__442->SetBinContent(303,0.3958422);
   ThetaY_5_10__442->SetBinContent(304,0.6057343);
   ThetaY_5_10__442->SetBinContent(305,0.7583102);
   ThetaY_5_10__442->SetBinContent(306,0.8606776);
   ThetaY_5_10__442->SetBinContent(307,0.9278271);
   ThetaY_5_10__442->SetBinContent(308,0.979612);
   ThetaY_5_10__442->SetBinContent(309,1);
   ThetaY_5_10__442->SetBinContent(310,1.01801);
   ThetaY_5_10__442->SetBinContent(311,1.010368);
   ThetaY_5_10__442->SetBinContent(312,1.001737);
   ThetaY_5_10__442->SetBinContent(313,0.9953506);
   ThetaY_5_10__442->SetBinContent(314,0.9997862);
   ThetaY_5_10__442->SetBinContent(315,0.9926785);
   ThetaY_5_10__442->SetBinContent(316,0.9921708);
   ThetaY_5_10__442->SetBinContent(317,0.9983433);
   ThetaY_5_10__442->SetBinContent(318,1.006466);
   ThetaY_5_10__442->SetBinContent(319,1.012559);
   ThetaY_5_10__442->SetBinContent(320,1.01491);
   ThetaY_5_10__442->SetBinContent(321,1.004997);
   ThetaY_5_10__442->SetBinContent(322,1.006787);
   ThetaY_5_10__442->SetBinContent(323,0.9780889);
   ThetaY_5_10__442->SetBinContent(324,0.9322627);
   ThetaY_5_10__442->SetBinContent(325,0.8553602);
   ThetaY_5_10__442->SetBinContent(326,0.7558519);
   ThetaY_5_10__442->SetBinContent(327,0.6017262);
   ThetaY_5_10__442->SetBinContent(328,0.3911661);
   ThetaY_5_10__442->SetBinContent(329,0.195062);
   ThetaY_5_10__442->SetBinContent(330,0.06461094);
   ThetaY_5_10__442->SetBinContent(331,0.004676144);
   ThetaY_5_10__442->SetBinError(300,0.0003881423);
   ThetaY_5_10__442->SetBinError(301,0.001309593);
   ThetaY_5_10__442->SetBinError(302,0.002265447);
   ThetaY_5_10__442->SetBinError(303,0.003252265);
   ThetaY_5_10__442->SetBinError(304,0.004023148);
   ThetaY_5_10__442->SetBinError(305,0.004501408);
   ThetaY_5_10__442->SetBinError(306,0.004795624);
   ThetaY_5_10__442->SetBinError(307,0.004979187);
   ThetaY_5_10__442->SetBinError(308,0.005116252);
   ThetaY_5_10__442->SetBinError(309,0.005169219);
   ThetaY_5_10__442->SetBinError(310,0.005215559);
   ThetaY_5_10__442->SetBinError(311,0.005195946);
   ThetaY_5_10__442->SetBinError(312,0.005173706);
   ThetaY_5_10__442->SetBinError(313,0.005157188);
   ThetaY_5_10__442->SetBinError(314,0.005168666);
   ThetaY_5_10__442->SetBinError(315,0.005150261);
   ThetaY_5_10__442->SetBinError(316,0.005148943);
   ThetaY_5_10__442->SetBinError(317,0.005164935);
   ThetaY_5_10__442->SetBinError(318,0.005185905);
   ThetaY_5_10__442->SetBinError(319,0.005201577);
   ThetaY_5_10__442->SetBinError(320,0.005207613);
   ThetaY_5_10__442->SetBinError(321,0.005182117);
   ThetaY_5_10__442->SetBinError(322,0.005186731);
   ThetaY_5_10__442->SetBinError(323,0.005112273);
   ThetaY_5_10__442->SetBinError(324,0.004991075);
   ThetaY_5_10__442->SetBinError(325,0.004780787);
   ThetaY_5_10__442->SetBinError(326,0.004494105);
   ThetaY_5_10__442->SetBinError(327,0.004009815);
   ThetaY_5_10__442->SetBinError(328,0.003232998);
   ThetaY_5_10__442->SetBinError(329,0.002283028);
   ThetaY_5_10__442->SetBinError(330,0.001313947);
   ThetaY_5_10__442->SetBinError(331,0.0003534832);
   ThetaY_5_10__442->SetEntries(884062);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__442->SetLineColor(ci);
   ThetaY_5_10__442->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__442->SetMarkerColor(ci);
   ThetaY_5_10__442->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__442->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__442->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__442->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__442->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__442->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__442->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__442->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__442->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__442->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__442->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__442->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__442->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__442->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__442->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__442->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__442->Draw("AEsame");
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
   
   Double_t _fx3148[32] = {
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
   Double_t _fy3148[32] = {
   0,
   0,
   0,
   0.02087817,
   0.01364371,
   0.1525794,
   0.4032955,
   0.6502352,
   0.9533206,
   1,
   0.860535,
   0.7279896,
   0.9322651,
   0.9133374,
   0.6612984,
   0.9657484,
   0.8163084,
   0.8774868,
   0.7472342,
   0.9467872,
   0.8061618,
   0.7565503,
   0.5171512,
   0.1351936,
   0.0177299,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3148[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3148[32] = {
   0,
   0,
   0,
   0.01727161,
   0.0112868,
   0.04029569,
   0.06202054,
   0.07600827,
   0.08968471,
   0.0909288,
   0.08356547,
   0.07711112,
   0.08770094,
   0.08707793,
   0.07385844,
   0.08967661,
   0.08242618,
   0.08521395,
   0.07828064,
   0.08791326,
   0.08098957,
   0.07882744,
   0.065035,
   0.03344874,
   0.01145208,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3148[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3148[32] = {
   2.710424,
   0.2371467,
   0.07922665,
   0.04801526,
   0.03137636,
   0.05266149,
   0.07238166,
   0.08546081,
   0.09854926,
   0.0996008,
   0.09210539,
   0.08574823,
   0.09636904,
   0.09580641,
   0.0826091,
   0.09841969,
   0.0912035,
   0.09392263,
   0.08694697,
   0.09648409,
   0.08956781,
   0.08750436,
   0.073779,
   0.04296225,
   0.02338605,
   0.0177884,
   0.02013033,
   0.02528671,
   0.03889911,
   0.07801096,
   0.2355769,
   3.270936};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3148,_fy3148,_felx3148,_fehx3148,_fely3148,_fehy3148);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3148 = new TH1F("Graph_Graph3148","",100,-100,100);
   Graph_Graph3148->SetMinimum(0);
   Graph_Graph3148->SetMaximum(1.5);
   Graph_Graph3148->SetDirectory(0);
   Graph_Graph3148->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3148->SetLineColor(ci);
   Graph_Graph3148->GetXaxis()->SetRange(1,100);
   Graph_Graph3148->GetXaxis()->CenterTitle(true);
   Graph_Graph3148->GetXaxis()->SetLabelFont(42);
   Graph_Graph3148->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3148->GetXaxis()->SetTitleFont(42);
   Graph_Graph3148->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3148->GetYaxis()->CenterTitle(true);
   Graph_Graph3148->GetYaxis()->SetLabelFont(42);
   Graph_Graph3148->GetYaxis()->SetTitleFont(42);
   Graph_Graph3148->GetZaxis()->SetLabelFont(42);
   Graph_Graph3148->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3148->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3148);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.119811,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__443 = new TH2D("ThetaY_vs_Y_5_10__443","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__443->SetBinContent(7814,211);
   ThetaY_vs_Y_5_10__443->SetBinContent(7840,2402);
   ThetaY_vs_Y_5_10__443->SetBinContent(7866,7188);
   ThetaY_vs_Y_5_10__443->SetBinContent(7892,14814);
   ThetaY_vs_Y_5_10__443->SetBinContent(7918,22669);
   ThetaY_vs_Y_5_10__443->SetBinContent(7944,28379);
   ThetaY_vs_Y_5_10__443->SetBinContent(7970,32210);
   ThetaY_vs_Y_5_10__443->SetBinContent(7996,34723);
   ThetaY_vs_Y_5_10__443->SetBinContent(8022,36661);
   ThetaY_vs_Y_5_10__443->SetBinContent(8048,37424);
   ThetaY_vs_Y_5_10__443->SetBinContent(8074,38098);
   ThetaY_vs_Y_5_10__443->SetBinContent(8100,37812);
   ThetaY_vs_Y_5_10__443->SetBinContent(8126,37489);
   ThetaY_vs_Y_5_10__443->SetBinContent(8152,37250);
   ThetaY_vs_Y_5_10__443->SetBinContent(8178,37416);
   ThetaY_vs_Y_5_10__443->SetBinContent(8204,37150);
   ThetaY_vs_Y_5_10__443->SetBinContent(8230,37131);
   ThetaY_vs_Y_5_10__443->SetBinContent(8256,37362);
   ThetaY_vs_Y_5_10__443->SetBinContent(8282,37666);
   ThetaY_vs_Y_5_10__443->SetBinContent(8308,37894);
   ThetaY_vs_Y_5_10__443->SetBinContent(8334,37982);
   ThetaY_vs_Y_5_10__443->SetBinContent(8360,37611);
   ThetaY_vs_Y_5_10__443->SetBinContent(8386,37678);
   ThetaY_vs_Y_5_10__443->SetBinContent(8412,36604);
   ThetaY_vs_Y_5_10__443->SetBinContent(8438,34889);
   ThetaY_vs_Y_5_10__443->SetBinContent(8464,32011);
   ThetaY_vs_Y_5_10__443->SetBinContent(8490,28287);
   ThetaY_vs_Y_5_10__443->SetBinContent(8516,22519);
   ThetaY_vs_Y_5_10__443->SetBinContent(8542,14639);
   ThetaY_vs_Y_5_10__443->SetBinContent(8568,7300);
   ThetaY_vs_Y_5_10__443->SetBinContent(8594,2418);
   ThetaY_vs_Y_5_10__443->SetBinContent(8620,175);
   ThetaY_vs_Y_5_10__443->SetEntries(884062);
   ThetaY_vs_Y_5_10__443->SetContour(20);
   ThetaY_vs_Y_5_10__443->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__443->SetContourLevel(1,1904.9);
   ThetaY_vs_Y_5_10__443->SetContourLevel(2,3809.8);
   ThetaY_vs_Y_5_10__443->SetContourLevel(3,5714.7);
   ThetaY_vs_Y_5_10__443->SetContourLevel(4,7619.6);
   ThetaY_vs_Y_5_10__443->SetContourLevel(5,9524.5);
   ThetaY_vs_Y_5_10__443->SetContourLevel(6,11429.4);
   ThetaY_vs_Y_5_10__443->SetContourLevel(7,13334.3);
   ThetaY_vs_Y_5_10__443->SetContourLevel(8,15239.2);
   ThetaY_vs_Y_5_10__443->SetContourLevel(9,17144.1);
   ThetaY_vs_Y_5_10__443->SetContourLevel(10,19049);
   ThetaY_vs_Y_5_10__443->SetContourLevel(11,20953.9);
   ThetaY_vs_Y_5_10__443->SetContourLevel(12,22858.8);
   ThetaY_vs_Y_5_10__443->SetContourLevel(13,24763.7);
   ThetaY_vs_Y_5_10__443->SetContourLevel(14,26668.6);
   ThetaY_vs_Y_5_10__443->SetContourLevel(15,28573.5);
   ThetaY_vs_Y_5_10__443->SetContourLevel(16,30478.4);
   ThetaY_vs_Y_5_10__443->SetContourLevel(17,32383.3);
   ThetaY_vs_Y_5_10__443->SetContourLevel(18,34288.2);
   ThetaY_vs_Y_5_10__443->SetContourLevel(19,36193.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__443->SetLineColor(ci);
   ThetaY_vs_Y_5_10__443->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__443->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__443->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__443->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__443->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__443->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__443->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__443->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__443->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__443->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__443->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__443->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__443->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__443->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__443->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_5_10","Reco vertices","lpf");
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
