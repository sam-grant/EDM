void S12S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:43 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06575702,125,1.249383);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__498 = new TH1D("S12S18_ThetaY_5_10__498","",630,-1575,1575);
   S12S18_ThetaY_5_10__498->SetBinContent(303,0.008733624);
   S12S18_ThetaY_5_10__498->SetBinContent(304,0.0349345);
   S12S18_ThetaY_5_10__498->SetBinContent(305,0.1484716);
   S12S18_ThetaY_5_10__498->SetBinContent(306,0.3755459);
   S12S18_ThetaY_5_10__498->SetBinContent(307,0.6593886);
   S12S18_ThetaY_5_10__498->SetBinContent(308,0.9344978);
   S12S18_ThetaY_5_10__498->SetBinContent(309,0.9213974);
   S12S18_ThetaY_5_10__498->SetBinContent(310,0.8646288);
   S12S18_ThetaY_5_10__498->SetBinContent(311,0.7598253);
   S12S18_ThetaY_5_10__498->SetBinContent(312,1);
   S12S18_ThetaY_5_10__498->SetBinContent(313,0.8820961);
   S12S18_ThetaY_5_10__498->SetBinContent(314,0.7292576);
   S12S18_ThetaY_5_10__498->SetBinContent(315,0.9170306);
   S12S18_ThetaY_5_10__498->SetBinContent(316,0.8558952);
   S12S18_ThetaY_5_10__498->SetBinContent(317,0.9082969);
   S12S18_ThetaY_5_10__498->SetBinContent(318,0.8558952);
   S12S18_ThetaY_5_10__498->SetBinContent(319,0.9606987);
   S12S18_ThetaY_5_10__498->SetBinContent(320,0.8864629);
   S12S18_ThetaY_5_10__498->SetBinContent(321,0.7161572);
   S12S18_ThetaY_5_10__498->SetBinContent(322,0.4759825);
   S12S18_ThetaY_5_10__498->SetBinContent(323,0.1484716);
   S12S18_ThetaY_5_10__498->SetBinContent(324,0.008733624);
   S12S18_ThetaY_5_10__498->SetBinError(303,0.006175605);
   S12S18_ThetaY_5_10__498->SetBinError(304,0.01235121);
   S12S18_ThetaY_5_10__498->SetBinError(305,0.02546267);
   S12S18_ThetaY_5_10__498->SetBinError(306,0.04049615);
   S12S18_ThetaY_5_10__498->SetBinError(307,0.05366029);
   S12S18_ThetaY_5_10__498->SetBinError(308,0.06388096);
   S12S18_ThetaY_5_10__498->SetBinError(309,0.06343161);
   S12S18_ThetaY_5_10__498->SetBinError(310,0.06144649);
   S12S18_ThetaY_5_10__498->SetBinError(311,0.05760221);
   S12S18_ThetaY_5_10__498->SetBinError(312,0.06608186);
   S12S18_ThetaY_5_10__498->SetBinError(313,0.06206406);
   S12S18_ThetaY_5_10__498->SetBinError(314,0.05643165);
   S12S18_ThetaY_5_10__498->SetBinError(315,0.06328112);
   S12S18_ThetaY_5_10__498->SetBinError(316,0.06113537);
   S12S18_ThetaY_5_10__498->SetBinError(317,0.06297906);
   S12S18_ThetaY_5_10__498->SetBinError(318,0.06113537);
   S12S18_ThetaY_5_10__498->SetBinError(319,0.06477029);
   S12S18_ThetaY_5_10__498->SetBinError(320,0.0622175);
   S12S18_ThetaY_5_10__498->SetBinError(321,0.05592248);
   S12S18_ThetaY_5_10__498->SetBinError(322,0.04559086);
   S12S18_ThetaY_5_10__498->SetBinError(323,0.02546267);
   S12S18_ThetaY_5_10__498->SetBinError(324,0.006175605);
   S12S18_ThetaY_5_10__498->SetMinimum(0);
   S12S18_ThetaY_5_10__498->SetMaximum(1.117869);
   S12S18_ThetaY_5_10__498->SetEntries(3218);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__498->SetLineColor(ci);
   S12S18_ThetaY_5_10__498->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__498->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__498->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__498->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__498->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__498->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__498->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__498->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__498->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__498->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__498->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__498->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__498->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__498->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__498->Draw("AE");
   
   TH1D *ThetaY_5_10__499 = new TH1D("ThetaY_5_10__499","",630,-1575,1575);
   ThetaY_5_10__499->SetBinContent(300,0.005628318);
   ThetaY_5_10__499->SetBinContent(301,0.06407213);
   ThetaY_5_10__499->SetBinContent(302,0.1917362);
   ThetaY_5_10__499->SetBinContent(303,0.3951559);
   ThetaY_5_10__499->SetBinContent(304,0.604684);
   ThetaY_5_10__499->SetBinContent(305,0.7569954);
   ThetaY_5_10__499->SetBinContent(306,0.8591854);
   ThetaY_5_10__499->SetBinContent(307,0.9262184);
   ThetaY_5_10__499->SetBinContent(308,0.9779135);
   ThetaY_5_10__499->SetBinContent(309,0.9982662);
   ThetaY_5_10__499->SetBinContent(310,1.016245);
   ThetaY_5_10__499->SetBinContent(311,1.008616);
   ThetaY_5_10__499->SetBinContent(312,1);
   ThetaY_5_10__499->SetBinContent(313,0.9936248);
   ThetaY_5_10__499->SetBinContent(314,0.9980528);
   ThetaY_5_10__499->SetBinContent(315,0.9909573);
   ThetaY_5_10__499->SetBinContent(316,0.9904505);
   ThetaY_5_10__499->SetBinContent(317,0.9966123);
   ThetaY_5_10__499->SetBinContent(318,1.004721);
   ThetaY_5_10__499->SetBinContent(319,1.010803);
   ThetaY_5_10__499->SetBinContent(320,1.013151);
   ThetaY_5_10__499->SetBinContent(321,1.003254);
   ThetaY_5_10__499->SetBinContent(322,1.005041);
   ThetaY_5_10__499->SetBinContent(323,0.9763931);
   ThetaY_5_10__499->SetBinContent(324,0.9306463);
   ThetaY_5_10__499->SetBinContent(325,0.8538771);
   ThetaY_5_10__499->SetBinContent(326,0.7545413);
   ThetaY_5_10__499->SetBinContent(327,0.6006829);
   ThetaY_5_10__499->SetBinContent(328,0.3904879);
   ThetaY_5_10__499->SetBinContent(329,0.1947238);
   ThetaY_5_10__499->SetBinContent(330,0.06449892);
   ThetaY_5_10__499->SetBinContent(331,0.004668036);
   ThetaY_5_10__499->SetBinError(300,0.0003874694);
   ThetaY_5_10__499->SetBinError(301,0.001307322);
   ThetaY_5_10__499->SetBinError(302,0.002261519);
   ThetaY_5_10__499->SetBinError(303,0.003246626);
   ThetaY_5_10__499->SetBinError(304,0.004016172);
   ThetaY_5_10__499->SetBinError(305,0.004493603);
   ThetaY_5_10__499->SetBinError(306,0.00478731);
   ThetaY_5_10__499->SetBinError(307,0.004970554);
   ThetaY_5_10__499->SetBinError(308,0.005107381);
   ThetaY_5_10__499->SetBinError(309,0.005160256);
   ThetaY_5_10__499->SetBinError(310,0.005206516);
   ThetaY_5_10__499->SetBinError(311,0.005186937);
   ThetaY_5_10__499->SetBinError(312,0.005164735);
   ThetaY_5_10__499->SetBinError(313,0.005148246);
   ThetaY_5_10__499->SetBinError(314,0.005159704);
   ThetaY_5_10__499->SetBinError(315,0.005141331);
   ThetaY_5_10__499->SetBinError(316,0.005140016);
   ThetaY_5_10__499->SetBinError(317,0.00515598);
   ThetaY_5_10__499->SetBinError(318,0.005176913);
   ThetaY_5_10__499->SetBinError(319,0.005192558);
   ThetaY_5_10__499->SetBinError(320,0.005198584);
   ThetaY_5_10__499->SetBinError(321,0.005173132);
   ThetaY_5_10__499->SetBinError(322,0.005177738);
   ThetaY_5_10__499->SetBinError(323,0.005103409);
   ThetaY_5_10__499->SetBinError(324,0.004982421);
   ThetaY_5_10__499->SetBinError(325,0.004772498);
   ThetaY_5_10__499->SetBinError(326,0.004486313);
   ThetaY_5_10__499->SetBinError(327,0.004002863);
   ThetaY_5_10__499->SetBinError(328,0.003227393);
   ThetaY_5_10__499->SetBinError(329,0.00227907);
   ThetaY_5_10__499->SetBinError(330,0.001311669);
   ThetaY_5_10__499->SetBinError(331,0.0003528704);
   ThetaY_5_10__499->SetEntries(884062);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__499->SetLineColor(ci);
   ThetaY_5_10__499->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__499->SetMarkerColor(ci);
   ThetaY_5_10__499->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__499->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__499->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__499->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__499->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__499->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__499->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__499->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__499->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__499->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__499->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__499->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__499->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__499->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__499->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__499->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__499->Draw("AEsame");
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
   
   Double_t _fx3167[32] = {
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
   Double_t _fy3167[32] = {
   0,
   0,
   0,
   0.02210172,
   0.05777314,
   0.1961328,
   0.4370953,
   0.7119149,
   0.9556037,
   0.9229977,
   0.8508077,
   0.7533347,
   1,
   0.8877557,
   0.7306805,
   0.9253986,
   0.8641473,
   0.9113844,
   0.8518732,
   0.950431,
   0.8749567,
   0.7138342,
   0.4735949,
   0.1520613,
   0.009384472,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3167[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3167[32] = {
   0,
   0,
   0,
   0.01427627,
   0.01999544,
   0.03348971,
   0.04710344,
   0.05799551,
   0.06546205,
   0.06366933,
   0.06056921,
   0.05718565,
   0.06623413,
   0.06257874,
   0.0566103,
   0.06398698,
   0.06183389,
   0.06331703,
   0.06095336,
   0.06421412,
   0.0615223,
   0.05580478,
   0.04535738,
   0.02596111,
   0.006061608,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3167[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3167[32] = {
   1.434633,
   0.1255222,
   0.04193482,
   0.02915518,
   0.02849791,
   0.03976339,
   0.05247682,
   0.06292589,
   0.07010964,
   0.06822227,
   0.06504436,
   0.06170221,
   0.0707753,
   0.06715529,
   0.06117748,
   0.06857394,
   0.06642681,
   0.06787828,
   0.06548066,
   0.06870825,
   0.06600989,
   0.06034933,
   0.04992556,
   0.03082349,
   0.01237828,
   0.009415438,
   0.01065503,
   0.01338431,
   0.02058938,
   0.04129136,
   0.1246913,
   1.731313};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3167,_fy3167,_felx3167,_fehx3167,_fely3167,_fehy3167);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3167 = new TH1F("Graph_Graph3167","",100,-100,100);
   Graph_Graph3167->SetMinimum(0);
   Graph_Graph3167->SetMaximum(1.5);
   Graph_Graph3167->SetDirectory(0);
   Graph_Graph3167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3167->SetLineColor(ci);
   Graph_Graph3167->GetXaxis()->SetRange(1,100);
   Graph_Graph3167->GetXaxis()->CenterTitle(true);
   Graph_Graph3167->GetXaxis()->SetLabelFont(42);
   Graph_Graph3167->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3167->GetXaxis()->SetTitleFont(42);
   Graph_Graph3167->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3167->GetYaxis()->CenterTitle(true);
   Graph_Graph3167->GetYaxis()->SetLabelFont(42);
   Graph_Graph3167->GetYaxis()->SetTitleFont(42);
   Graph_Graph3167->GetZaxis()->SetLabelFont(42);
   Graph_Graph3167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3167->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3167);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.117869,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__500 = new TH2D("ThetaY_vs_Y_5_10__500","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__500->SetBinContent(7814,211);
   ThetaY_vs_Y_5_10__500->SetBinContent(7840,2402);
   ThetaY_vs_Y_5_10__500->SetBinContent(7866,7188);
   ThetaY_vs_Y_5_10__500->SetBinContent(7892,14814);
   ThetaY_vs_Y_5_10__500->SetBinContent(7918,22669);
   ThetaY_vs_Y_5_10__500->SetBinContent(7944,28379);
   ThetaY_vs_Y_5_10__500->SetBinContent(7970,32210);
   ThetaY_vs_Y_5_10__500->SetBinContent(7996,34723);
   ThetaY_vs_Y_5_10__500->SetBinContent(8022,36661);
   ThetaY_vs_Y_5_10__500->SetBinContent(8048,37424);
   ThetaY_vs_Y_5_10__500->SetBinContent(8074,38098);
   ThetaY_vs_Y_5_10__500->SetBinContent(8100,37812);
   ThetaY_vs_Y_5_10__500->SetBinContent(8126,37489);
   ThetaY_vs_Y_5_10__500->SetBinContent(8152,37250);
   ThetaY_vs_Y_5_10__500->SetBinContent(8178,37416);
   ThetaY_vs_Y_5_10__500->SetBinContent(8204,37150);
   ThetaY_vs_Y_5_10__500->SetBinContent(8230,37131);
   ThetaY_vs_Y_5_10__500->SetBinContent(8256,37362);
   ThetaY_vs_Y_5_10__500->SetBinContent(8282,37666);
   ThetaY_vs_Y_5_10__500->SetBinContent(8308,37894);
   ThetaY_vs_Y_5_10__500->SetBinContent(8334,37982);
   ThetaY_vs_Y_5_10__500->SetBinContent(8360,37611);
   ThetaY_vs_Y_5_10__500->SetBinContent(8386,37678);
   ThetaY_vs_Y_5_10__500->SetBinContent(8412,36604);
   ThetaY_vs_Y_5_10__500->SetBinContent(8438,34889);
   ThetaY_vs_Y_5_10__500->SetBinContent(8464,32011);
   ThetaY_vs_Y_5_10__500->SetBinContent(8490,28287);
   ThetaY_vs_Y_5_10__500->SetBinContent(8516,22519);
   ThetaY_vs_Y_5_10__500->SetBinContent(8542,14639);
   ThetaY_vs_Y_5_10__500->SetBinContent(8568,7300);
   ThetaY_vs_Y_5_10__500->SetBinContent(8594,2418);
   ThetaY_vs_Y_5_10__500->SetBinContent(8620,175);
   ThetaY_vs_Y_5_10__500->SetEntries(884062);
   ThetaY_vs_Y_5_10__500->SetContour(20);
   ThetaY_vs_Y_5_10__500->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__500->SetContourLevel(1,1904.9);
   ThetaY_vs_Y_5_10__500->SetContourLevel(2,3809.8);
   ThetaY_vs_Y_5_10__500->SetContourLevel(3,5714.7);
   ThetaY_vs_Y_5_10__500->SetContourLevel(4,7619.6);
   ThetaY_vs_Y_5_10__500->SetContourLevel(5,9524.5);
   ThetaY_vs_Y_5_10__500->SetContourLevel(6,11429.4);
   ThetaY_vs_Y_5_10__500->SetContourLevel(7,13334.3);
   ThetaY_vs_Y_5_10__500->SetContourLevel(8,15239.2);
   ThetaY_vs_Y_5_10__500->SetContourLevel(9,17144.1);
   ThetaY_vs_Y_5_10__500->SetContourLevel(10,19049);
   ThetaY_vs_Y_5_10__500->SetContourLevel(11,20953.9);
   ThetaY_vs_Y_5_10__500->SetContourLevel(12,22858.8);
   ThetaY_vs_Y_5_10__500->SetContourLevel(13,24763.7);
   ThetaY_vs_Y_5_10__500->SetContourLevel(14,26668.6);
   ThetaY_vs_Y_5_10__500->SetContourLevel(15,28573.5);
   ThetaY_vs_Y_5_10__500->SetContourLevel(16,30478.4);
   ThetaY_vs_Y_5_10__500->SetContourLevel(17,32383.3);
   ThetaY_vs_Y_5_10__500->SetContourLevel(18,34288.2);
   ThetaY_vs_Y_5_10__500->SetContourLevel(19,36193.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__500->SetLineColor(ci);
   ThetaY_vs_Y_5_10__500->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__500->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__500->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__500->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__500->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__500->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__500->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__500->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__500->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__500->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__500->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__500->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__500->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__500->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__500->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_5_10","Reco vertices","lpf");
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
