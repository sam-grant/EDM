void S12_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.06581204,125,1.250429);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__387 = new TH1D("S12_ThetaY_10_15__387","",630,-1575,1575);
   S12_ThetaY_10_15__387->SetBinContent(303,0.0212766);
   S12_ThetaY_10_15__387->SetBinContent(304,0.1382979);
   S12_ThetaY_10_15__387->SetBinContent(305,0.2340426);
   S12_ThetaY_10_15__387->SetBinContent(306,0.6382979);
   S12_ThetaY_10_15__387->SetBinContent(307,0.8297872);
   S12_ThetaY_10_15__387->SetBinContent(308,0.9255319);
   S12_ThetaY_10_15__387->SetBinContent(309,0.9468085);
   S12_ThetaY_10_15__387->SetBinContent(310,0.9893617);
   S12_ThetaY_10_15__387->SetBinContent(311,0.8404255);
   S12_ThetaY_10_15__387->SetBinContent(312,0.8617021);
   S12_ThetaY_10_15__387->SetBinContent(313,1);
   S12_ThetaY_10_15__387->SetBinContent(314,0.9361702);
   S12_ThetaY_10_15__387->SetBinContent(315,0.9042553);
   S12_ThetaY_10_15__387->SetBinContent(316,0.7021277);
   S12_ThetaY_10_15__387->SetBinContent(317,0.8617021);
   S12_ThetaY_10_15__387->SetBinContent(318,0.9148936);
   S12_ThetaY_10_15__387->SetBinContent(319,0.9680851);
   S12_ThetaY_10_15__387->SetBinContent(320,0.787234);
   S12_ThetaY_10_15__387->SetBinContent(321,0.5);
   S12_ThetaY_10_15__387->SetBinContent(322,0.1276596);
   S12_ThetaY_10_15__387->SetBinContent(323,0.0212766);
   S12_ThetaY_10_15__387->SetBinError(303,0.01504483);
   S12_ThetaY_10_15__387->SetBinError(304,0.03835693);
   S12_ThetaY_10_15__387->SetBinError(305,0.04989804);
   S12_ThetaY_10_15__387->SetBinError(306,0.0824039);
   S12_ThetaY_10_15__387->SetBinError(307,0.0939549);
   S12_ThetaY_10_15__387->SetBinError(308,0.09922744);
   S12_ThetaY_10_15__387->SetBinError(309,0.1003615);
   S12_ThetaY_10_15__387->SetBinError(310,0.102592);
   S12_ThetaY_10_15__387->SetBinError(311,0.09455526);
   S12_ThetaY_10_15__387->SetBinError(312,0.09574468);
   S12_ThetaY_10_15__387->SetBinError(313,0.1031421);
   S12_ThetaY_10_15__387->SetBinError(314,0.09979608);
   S12_ThetaY_10_15__387->SetBinError(315,0.09808026);
   S12_ThetaY_10_15__387->SetBinError(316,0.08642594);
   S12_ThetaY_10_15__387->SetBinError(317,0.09574468);
   S12_ThetaY_10_15__387->SetBinError(318,0.09865552);
   S12_ThetaY_10_15__387->SetBinError(319,0.1014829);
   S12_ThetaY_10_15__387->SetBinError(320,0.0915141);
   S12_ThetaY_10_15__387->SetBinError(321,0.0729325);
   S12_ThetaY_10_15__387->SetBinError(322,0.03685214);
   S12_ThetaY_10_15__387->SetBinError(323,0.01504483);
   S12_ThetaY_10_15__387->SetMinimum(0);
   S12_ThetaY_10_15__387->SetMaximum(1.118805);
   S12_ThetaY_10_15__387->SetEntries(1330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__387->SetLineColor(ci);
   S12_ThetaY_10_15__387->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__387->SetMarkerColor(ci);
   S12_ThetaY_10_15__387->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__387->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__387->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__387->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__387->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__387->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__387->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__387->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__387->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__387->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__387->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__387->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__387->Draw("AE");
   
   TH1D *ThetaY_10_15__388 = new TH1D("ThetaY_10_15__388","",630,-1575,1575);
   ThetaY_10_15__388->SetBinContent(300,0.004856569);
   ThetaY_10_15__388->SetBinContent(301,0.06345917);
   ThetaY_10_15__388->SetBinContent(302,0.1897624);
   ThetaY_10_15__388->SetBinContent(303,0.3924432);
   ThetaY_10_15__388->SetBinContent(304,0.59289);
   ThetaY_10_15__388->SetBinContent(305,0.7547109);
   ThetaY_10_15__388->SetBinContent(306,0.8499968);
   ThetaY_10_15__388->SetBinContent(307,0.9193809);
   ThetaY_10_15__388->SetBinContent(308,0.9683028);
   ThetaY_10_15__388->SetBinContent(309,0.9948197);
   ThetaY_10_15__388->SetBinContent(310,1.0045);
   ThetaY_10_15__388->SetBinContent(311,0.9998381);
   ThetaY_10_15__388->SetBinContent(312,1.010005);
   ThetaY_10_15__388->SetBinContent(313,1);
   ThetaY_10_15__388->SetBinContent(314,0.9952406);
   ThetaY_10_15__388->SetBinContent(315,0.9899631);
   ThetaY_10_15__388->SetBinContent(316,0.9946578);
   ThetaY_10_15__388->SetBinContent(317,0.9937836);
   ThetaY_10_15__388->SetBinContent(318,0.9933303);
   ThetaY_10_15__388->SetBinContent(319,0.9941397);
   ThetaY_10_15__388->SetBinContent(320,1.017095);
   ThetaY_10_15__388->SetBinContent(321,0.9990934);
   ThetaY_10_15__388->SetBinContent(322,0.9970537);
   ThetaY_10_15__388->SetBinContent(323,0.957586);
   ThetaY_10_15__388->SetBinContent(324,0.9173088);
   ThetaY_10_15__388->SetBinContent(325,0.8464677);
   ThetaY_10_15__388->SetBinContent(326,0.7473613);
   ThetaY_10_15__388->SetBinContent(327,0.6072331);
   ThetaY_10_15__388->SetBinContent(328,0.3820177);
   ThetaY_10_15__388->SetBinContent(329,0.1890501);
   ThetaY_10_15__388->SetBinContent(330,0.06472188);
   ThetaY_10_15__388->SetBinContent(331,0.005180341);
   ThetaY_10_15__388->SetBinError(300,0.0003965372);
   ThetaY_10_15__388->SetBinError(301,0.001433397);
   ThetaY_10_15__388->SetBinError(302,0.002478701);
   ThetaY_10_15__388->SetBinError(303,0.003564573);
   ThetaY_10_15__388->SetBinError(304,0.004381333);
   ThetaY_10_15__388->SetBinError(305,0.004943215);
   ThetaY_10_15__388->SetBinError(306,0.005245994);
   ThetaY_10_15__388->SetBinError(307,0.005455906);
   ThetaY_10_15__388->SetBinError(308,0.005599184);
   ThetaY_10_15__388->SetBinError(309,0.005675333);
   ThetaY_10_15__388->SetBinError(310,0.00570288);
   ThetaY_10_15__388->SetBinError(311,0.00568963);
   ThetaY_10_15__388->SetBinError(312,0.005718483);
   ThetaY_10_15__388->SetBinError(313,0.00569009);
   ThetaY_10_15__388->SetBinError(314,0.005676533);
   ThetaY_10_15__388->SetBinError(315,0.005661463);
   ThetaY_10_15__388->SetBinError(316,0.005674871);
   ThetaY_10_15__388->SetBinError(317,0.005672377);
   ThetaY_10_15__388->SetBinError(318,0.005671083);
   ThetaY_10_15__388->SetBinError(319,0.005673393);
   ThetaY_10_15__388->SetBinError(320,0.005738521);
   ThetaY_10_15__388->SetBinError(321,0.005687511);
   ThetaY_10_15__388->SetBinError(322,0.005681702);
   ThetaY_10_15__388->SetBinError(323,0.005568113);
   ThetaY_10_15__388->SetBinError(324,0.005449755);
   ThetaY_10_15__388->SetBinError(325,0.005235092);
   ThetaY_10_15__388->SetBinError(326,0.004919086);
   ThetaY_10_15__388->SetBinError(327,0.004434012);
   ThetaY_10_15__388->SetBinError(328,0.003516907);
   ThetaY_10_15__388->SetBinError(329,0.002474045);
   ThetaY_10_15__388->SetBinError(330,0.001447587);
   ThetaY_10_15__388->SetBinError(331,0.0004095419);
   ThetaY_10_15__388->SetEntries(723852);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__388->SetLineColor(ci);
   ThetaY_10_15__388->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__388->SetMarkerColor(ci);
   ThetaY_10_15__388->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__388->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__388->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__388->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__388->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__388->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__388->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__388->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__388->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__388->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__388->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__388->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__388->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__388->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__388->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__388->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__388->Draw("AEsame");
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
   
   Double_t _fx3130[32] = {
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
   Double_t _fy3130[32] = {
   0,
   0,
   0,
   0.05421574,
   0.2332606,
   0.3101089,
   0.7509415,
   0.90255,
   0.955829,
   0.9517388,
   0.9849291,
   0.8405616,
   0.8531666,
   1,
   0.9406472,
   0.9134233,
   0.7058987,
   0.8670923,
   0.9210366,
   0.9737918,
   0.7740024,
   0.5004537,
   0.1280368,
   0.02221899,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3130[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3130[32] = {
   0,
   0,
   0,
   0.03502015,
   0.0638746,
   0.06563886,
   0.09678382,
   0.1021124,
   0.1024253,
   0.1008384,
   0.1020996,
   0.09448915,
   0.09472148,
   0.1031133,
   0.100224,
   0.09901519,
   0.08676111,
   0.09626958,
   0.09926175,
   0.1020425,
   0.08987648,
   0.07279224,
   0.03644655,
   0.01435171,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3130[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3130[32] = {
   4.057601,
   0.3087739,
   0.103226,
   0.07152043,
   0.08432986,
   0.08125976,
   0.1101448,
   0.1143785,
   0.1140403,
   0.1121371,
   0.1132782,
   0.1057619,
   0.1058738,
   0.1143399,
   0.1115208,
   0.1103812,
   0.09814454,
   0.1076045,
   0.1105861,
   0.1133434,
   0.1009752,
   0.08423934,
   0.04866514,
   0.02930759,
   0.02135156,
   0.02313854,
   0.02620703,
   0.03225499,
   0.05127213,
   0.103615,
   0.302747,
   3.802539};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3130,_fy3130,_felx3130,_fehx3130,_fely3130,_fehy3130);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3130 = new TH1F("Graph_Graph3130","",100,-100,100);
   Graph_Graph3130->SetMinimum(0);
   Graph_Graph3130->SetMaximum(1.5);
   Graph_Graph3130->SetDirectory(0);
   Graph_Graph3130->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3130->SetLineColor(ci);
   Graph_Graph3130->GetXaxis()->SetRange(1,100);
   Graph_Graph3130->GetXaxis()->CenterTitle(true);
   Graph_Graph3130->GetXaxis()->SetLabelFont(42);
   Graph_Graph3130->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3130->GetXaxis()->SetTitleFont(42);
   Graph_Graph3130->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3130->GetYaxis()->CenterTitle(true);
   Graph_Graph3130->GetYaxis()->SetLabelFont(42);
   Graph_Graph3130->GetYaxis()->SetTitleFont(42);
   Graph_Graph3130->GetZaxis()->SetLabelFont(42);
   Graph_Graph3130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3130->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3130);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.118805,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__389 = new TH2D("ThetaY_vs_Y_10_15__389","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__389->SetBinContent(7815,150);
   ThetaY_vs_Y_10_15__389->SetBinContent(7841,1960);
   ThetaY_vs_Y_10_15__389->SetBinContent(7867,5861);
   ThetaY_vs_Y_10_15__389->SetBinContent(7893,12121);
   ThetaY_vs_Y_10_15__389->SetBinContent(7919,18312);
   ThetaY_vs_Y_10_15__389->SetBinContent(7945,23310);
   ThetaY_vs_Y_10_15__389->SetBinContent(7971,26253);
   ThetaY_vs_Y_10_15__389->SetBinContent(7997,28396);
   ThetaY_vs_Y_10_15__389->SetBinContent(8023,29907);
   ThetaY_vs_Y_10_15__389->SetBinContent(8049,30726);
   ThetaY_vs_Y_10_15__389->SetBinContent(8075,31025);
   ThetaY_vs_Y_10_15__389->SetBinContent(8101,30881);
   ThetaY_vs_Y_10_15__389->SetBinContent(8127,31195);
   ThetaY_vs_Y_10_15__389->SetBinContent(8153,30886);
   ThetaY_vs_Y_10_15__389->SetBinContent(8179,30739);
   ThetaY_vs_Y_10_15__389->SetBinContent(8205,30576);
   ThetaY_vs_Y_10_15__389->SetBinContent(8231,30721);
   ThetaY_vs_Y_10_15__389->SetBinContent(8257,30694);
   ThetaY_vs_Y_10_15__389->SetBinContent(8283,30680);
   ThetaY_vs_Y_10_15__389->SetBinContent(8309,30705);
   ThetaY_vs_Y_10_15__389->SetBinContent(8335,31414);
   ThetaY_vs_Y_10_15__389->SetBinContent(8361,30858);
   ThetaY_vs_Y_10_15__389->SetBinContent(8387,30795);
   ThetaY_vs_Y_10_15__389->SetBinContent(8413,29576);
   ThetaY_vs_Y_10_15__389->SetBinContent(8439,28332);
   ThetaY_vs_Y_10_15__389->SetBinContent(8465,26144);
   ThetaY_vs_Y_10_15__389->SetBinContent(8491,23083);
   ThetaY_vs_Y_10_15__389->SetBinContent(8517,18755);
   ThetaY_vs_Y_10_15__389->SetBinContent(8543,11799);
   ThetaY_vs_Y_10_15__389->SetBinContent(8569,5839);
   ThetaY_vs_Y_10_15__389->SetBinContent(8595,1999);
   ThetaY_vs_Y_10_15__389->SetBinContent(8621,160);
   ThetaY_vs_Y_10_15__389->SetEntries(723852);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__389->SetLineColor(ci);
   ThetaY_vs_Y_10_15__389->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__389->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__389->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__389->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__389->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__389->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__389->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__389->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__389->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__389->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__389->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__389->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__389->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__389->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__389->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_10_15","Reco vertices","lpf");
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
