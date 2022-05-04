void S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06568893,125,1.24809);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__777 = new TH1D("S18_ThetaY_mI5_0__777","",630,-1575,1575);
   S18_ThetaY_mI5_0__777->SetBinContent(308,0.004576659);
   S18_ThetaY_mI5_0__777->SetBinContent(309,0.05263158);
   S18_ThetaY_mI5_0__777->SetBinContent(310,0.3386728);
   S18_ThetaY_mI5_0__777->SetBinContent(311,0.7368421);
   S18_ThetaY_mI5_0__777->SetBinContent(312,0.7620137);
   S18_ThetaY_mI5_0__777->SetBinContent(313,1);
   S18_ThetaY_mI5_0__777->SetBinContent(314,0.8283753);
   S18_ThetaY_mI5_0__777->SetBinContent(315,0.8535469);
   S18_ThetaY_mI5_0__777->SetBinContent(316,0.98627);
   S18_ThetaY_mI5_0__777->SetBinContent(317,0.8329519);
   S18_ThetaY_mI5_0__777->SetBinContent(318,0.8741419);
   S18_ThetaY_mI5_0__777->SetBinContent(319,0.8695652);
   S18_ThetaY_mI5_0__777->SetBinContent(320,0.8672769);
   S18_ThetaY_mI5_0__777->SetBinContent(321,0.6018307);
   S18_ThetaY_mI5_0__777->SetBinContent(322,0.1899314);
   S18_ThetaY_mI5_0__777->SetBinContent(323,0.03661327);
   S18_ThetaY_mI5_0__777->SetBinError(308,0.003236187);
   S18_ThetaY_mI5_0__777->SetBinError(309,0.01097444);
   S18_ThetaY_mI5_0__777->SetBinError(310,0.02783873);
   S18_ThetaY_mI5_0__777->SetBinError(311,0.04106261);
   S18_ThetaY_mI5_0__777->SetBinError(312,0.0417581);
   S18_ThetaY_mI5_0__777->SetBinError(313,0.04783649);
   S18_ThetaY_mI5_0__777->SetBinError(314,0.04353844);
   S18_ThetaY_mI5_0__777->SetBinError(315,0.04419498);
   S18_ThetaY_mI5_0__777->SetBinError(316,0.04750696);
   S18_ThetaY_mI5_0__777->SetBinError(317,0.04365854);
   S18_ThetaY_mI5_0__777->SetBinError(318,0.04472499);
   S18_ThetaY_mI5_0__777->SetBinError(319,0.04460775);
   S18_ThetaY_mI5_0__777->SetBinError(320,0.04454902);
   S18_ThetaY_mI5_0__777->SetBinError(321,0.03711047);
   S18_ThetaY_mI5_0__777->SetBinError(322,0.02084767);
   S18_ThetaY_mI5_0__777->SetBinError(323,0.009153318);
   S18_ThetaY_mI5_0__777->SetMinimum(0);
   S18_ThetaY_mI5_0__777->SetMaximum(1.116712);
   S18_ThetaY_mI5_0__777->SetEntries(4298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__777->SetLineColor(ci);
   S18_ThetaY_mI5_0__777->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__777->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__777->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__777->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__777->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__777->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__777->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__777->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__777->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__777->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__777->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__777->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__777->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__777->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__777->Draw("AE");
   
   TH1D *ThetaY_mI5_0__778 = new TH1D("ThetaY_mI5_0__778","",630,-1575,1575);
   ThetaY_mI5_0__778->SetBinContent(305,3.625882e-05);
   ThetaY_mI5_0__778->SetBinContent(306,0.05043601);
   ThetaY_mI5_0__778->SetBinContent(307,0.3018909);
   ThetaY_mI5_0__778->SetBinContent(308,0.5806305);
   ThetaY_mI5_0__778->SetBinContent(309,0.7534219);
   ThetaY_mI5_0__778->SetBinContent(310,0.8621984);
   ThetaY_mI5_0__778->SetBinContent(311,0.931779);
   ThetaY_mI5_0__778->SetBinContent(312,0.9689262);
   ThetaY_mI5_0__778->SetBinContent(313,1);
   ThetaY_mI5_0__778->SetBinContent(314,1.007089);
   ThetaY_mI5_0__778->SetBinContent(315,1.015192);
   ThetaY_mI5_0__778->SetBinContent(316,1.014485);
   ThetaY_mI5_0__778->SetBinContent(317,1.010098);
   ThetaY_mI5_0__778->SetBinContent(318,0.9954133);
   ThetaY_mI5_0__778->SetBinContent(319,0.9713374);
   ThetaY_mI5_0__778->SetBinContent(320,0.9331931);
   ThetaY_mI5_0__778->SetBinContent(321,0.8619083);
   ThetaY_mI5_0__778->SetBinContent(322,0.7462608);
   ThetaY_mI5_0__778->SetBinContent(323,0.5855799);
   ThetaY_mI5_0__778->SetBinContent(324,0.2984644);
   ThetaY_mI5_0__778->SetBinContent(325,0.05107054);
   ThetaY_mI5_0__778->SetBinContent(326,7.251763e-05);
   ThetaY_mI5_0__778->SetBinError(305,2.563885e-05);
   ThetaY_mI5_0__778->SetBinError(306,0.0009562296);
   ThetaY_mI5_0__778->SetBinError(307,0.002339466);
   ThetaY_mI5_0__778->SetBinError(308,0.003244455);
   ThetaY_mI5_0__778->SetBinError(309,0.003695821);
   ThetaY_mI5_0__778->SetBinError(310,0.003953624);
   ThetaY_mI5_0__778->SetBinError(311,0.004110061);
   ThetaY_mI5_0__778->SetBinError(312,0.004191188);
   ThetaY_mI5_0__778->SetBinError(313,0.004257864);
   ThetaY_mI5_0__778->SetBinError(314,0.004272929);
   ThetaY_mI5_0__778->SetBinError(315,0.004290086);
   ThetaY_mI5_0__778->SetBinError(316,0.004288592);
   ThetaY_mI5_0__778->SetBinError(317,0.004279308);
   ThetaY_mI5_0__778->SetBinError(318,0.004248088);
   ThetaY_mI5_0__778->SetBinError(319,0.0041964);
   ThetaY_mI5_0__778->SetBinError(320,0.004113179);
   ThetaY_mI5_0__778->SetBinError(321,0.003952959);
   ThetaY_mI5_0__778->SetBinError(322,0.003678215);
   ThetaY_mI5_0__778->SetBinError(323,0.003258254);
   ThetaY_mI5_0__778->SetBinError(324,0.002326152);
   ThetaY_mI5_0__778->SetBinError(325,0.0009622259);
   ThetaY_mI5_0__778->SetBinError(326,3.625882e-05);
   ThetaY_mI5_0__778->SetEntries(824047);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__778->SetLineColor(ci);
   ThetaY_mI5_0__778->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__778->SetMarkerColor(ci);
   ThetaY_mI5_0__778->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__778->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__778->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__778->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__778->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__778->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__778->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__778->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__778->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__778->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__778->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__778->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__778->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__778->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__778->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__778->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__778->Draw("AEsame");
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
   
   Double_t _fx3260[22] = {
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
   52.5};
   Double_t _fy3260[22] = {
   0,
   0,
   0,
   0.007882222,
   0.06985671,
   0.3928014,
   0.7907906,
   0.7864518,
   1,
   0.8225446,
   0.8407735,
   0.9721875,
   0.8246248,
   0.8781698,
   0.8952247,
   0.9293648,
   0.6982537,
   0.2545107,
   0.06252481,
   0,
   0,
   0};
   Double_t _felx3260[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3260[22] = {
   0,
   0,
   0,
   0.005091285,
   0.01446332,
   0.03230139,
   0.04418351,
   0.04320926,
   0.04800682,
   0.04335222,
   0.0436584,
   0.04698999,
   0.04334276,
   0.04506698,
   0.04606594,
   0.04789211,
   0.04314721,
   0.02790756,
   0.01546991,
   0,
   0,
   0};
   Double_t _fehx3260[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3260[22] = {
   190.6674,
   0.08355654,
   0.01395569,
   0.01039685,
   0.01782036,
   0.03507423,
   0.04672483,
   0.04565193,
   0.05036963,
   0.04570043,
   0.04598733,
   0.04931891,
   0.04568385,
   0.0474422,
   0.04850054,
   0.05042704,
   0.04590046,
   0.03115004,
   0.01987009,
   0.01411592,
   0.08251804,
   73.77404};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3260,_fy3260,_felx3260,_fehx3260,_fely3260,_fehy3260);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3260 = new TH1F("Graph_Graph3260","",100,-100,100);
   Graph_Graph3260->SetMinimum(0);
   Graph_Graph3260->SetMaximum(1.5);
   Graph_Graph3260->SetDirectory(0);
   Graph_Graph3260->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3260->SetLineColor(ci);
   Graph_Graph3260->GetXaxis()->SetRange(1,100);
   Graph_Graph3260->GetXaxis()->CenterTitle(true);
   Graph_Graph3260->GetXaxis()->SetLabelFont(42);
   Graph_Graph3260->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3260->GetXaxis()->SetTitleFont(42);
   Graph_Graph3260->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3260->GetYaxis()->CenterTitle(true);
   Graph_Graph3260->GetYaxis()->SetLabelFont(42);
   Graph_Graph3260->GetYaxis()->SetTitleFont(42);
   Graph_Graph3260->GetZaxis()->SetLabelFont(42);
   Graph_Graph3260->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3260->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3260);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.116712,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__779 = new TH2D("ThetaY_vs_Y_mI5_0__779","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(7942,2);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(7968,2782);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(7994,16652);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8020,32027);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8046,41558);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8072,47558);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8098,51396);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8124,53445);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8150,55159);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8176,55550);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8202,55997);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8228,55958);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8254,55716);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8280,54906);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8306,53578);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8332,51474);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8358,47542);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8384,41163);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8410,32300);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8436,16463);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8462,2817);
   ThetaY_vs_Y_mI5_0__779->SetBinContent(8488,4);
   ThetaY_vs_Y_mI5_0__779->SetEntries(824047);
   ThetaY_vs_Y_mI5_0__779->SetContour(20);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(1,2799.85);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(2,5599.7);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(3,8399.55);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(4,11199.4);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(5,13999.25);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(6,16799.1);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(7,19598.95);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(8,22398.8);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(9,25198.65);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(10,27998.5);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(11,30798.35);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(12,33598.2);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(13,36398.05);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(14,39197.9);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(15,41997.75);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(16,44797.6);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(17,47597.45);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(18,50397.3);
   ThetaY_vs_Y_mI5_0__779->SetContourLevel(19,53197.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__779->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__779->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__779->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__779->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__779->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__779->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__779->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__779->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__779->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__779->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__779->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__779->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__779->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__779->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__779->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__779->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-5_0","Reco vertices","lpf");
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
