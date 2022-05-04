void S18_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.0688674,125,1.308481);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI40_mI35__756 = new TH1D("S18_ThetaY_mI40_mI35__756","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__756->SetBinContent(314,0.02222222);
   S18_ThetaY_mI40_mI35__756->SetBinContent(315,0.4);
   S18_ThetaY_mI40_mI35__756->SetBinContent(316,0.6666667);
   S18_ThetaY_mI40_mI35__756->SetBinContent(317,0.7555556);
   S18_ThetaY_mI40_mI35__756->SetBinContent(318,0.8666667);
   S18_ThetaY_mI40_mI35__756->SetBinContent(319,1);
   S18_ThetaY_mI40_mI35__756->SetBinContent(320,0.4666667);
   S18_ThetaY_mI40_mI35__756->SetBinContent(321,0.6444444);
   S18_ThetaY_mI40_mI35__756->SetBinContent(322,0.4666667);
   S18_ThetaY_mI40_mI35__756->SetBinContent(323,0.2666667);
   S18_ThetaY_mI40_mI35__756->SetBinContent(324,0.2);
   S18_ThetaY_mI40_mI35__756->SetBinContent(325,0.04444444);
   S18_ThetaY_mI40_mI35__756->SetBinError(314,0.02222222);
   S18_ThetaY_mI40_mI35__756->SetBinError(315,0.0942809);
   S18_ThetaY_mI40_mI35__756->SetBinError(316,0.1217161);
   S18_ThetaY_mI40_mI35__756->SetBinError(317,0.1295767);
   S18_ThetaY_mI40_mI35__756->SetBinError(318,0.1387777);
   S18_ThetaY_mI40_mI35__756->SetBinError(319,0.1490712);
   S18_ThetaY_mI40_mI35__756->SetBinError(320,0.101835);
   S18_ThetaY_mI40_mI35__756->SetBinError(321,0.1196703);
   S18_ThetaY_mI40_mI35__756->SetBinError(322,0.101835);
   S18_ThetaY_mI40_mI35__756->SetBinError(323,0.07698004);
   S18_ThetaY_mI40_mI35__756->SetBinError(324,0.06666667);
   S18_ThetaY_mI40_mI35__756->SetBinError(325,0.03142697);
   S18_ThetaY_mI40_mI35__756->SetMinimum(0);
   S18_ThetaY_mI40_mI35__756->SetMaximum(1.170746);
   S18_ThetaY_mI40_mI35__756->SetEntries(261);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__756->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__756->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__756->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__756->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__756->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__756->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__756->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__756->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__756->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__756->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__756->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__756->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__756->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__756->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__756->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__756->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__757 = new TH1D("ThetaY_mI40_mI35__757","",630,-1575,1575);
   ThetaY_mI40_mI35__757->SetBinContent(306,0.04854855);
   ThetaY_mI40_mI35__757->SetBinContent(307,0.3018018);
   ThetaY_mI40_mI35__757->SetBinContent(308,0.5775776);
   ThetaY_mI40_mI35__757->SetBinContent(309,0.7885385);
   ThetaY_mI40_mI35__757->SetBinContent(310,0.8901401);
   ThetaY_mI40_mI35__757->SetBinContent(311,0.9349349);
   ThetaY_mI40_mI35__757->SetBinContent(312,1.024775);
   ThetaY_mI40_mI35__757->SetBinContent(313,0.9954955);
   ThetaY_mI40_mI35__757->SetBinContent(314,1.064314);
   ThetaY_mI40_mI35__757->SetBinContent(315,1.050551);
   ThetaY_mI40_mI35__757->SetBinContent(316,1.027528);
   ThetaY_mI40_mI35__757->SetBinContent(317,1.061311);
   ThetaY_mI40_mI35__757->SetBinContent(318,0.9954955);
   ThetaY_mI40_mI35__757->SetBinContent(319,1);
   ThetaY_mI40_mI35__757->SetBinContent(320,0.9537037);
   ThetaY_mI40_mI35__757->SetBinContent(321,0.8856356);
   ThetaY_mI40_mI35__757->SetBinContent(322,0.7682683);
   ThetaY_mI40_mI35__757->SetBinContent(323,0.6033534);
   ThetaY_mI40_mI35__757->SetBinContent(324,0.3183183);
   ThetaY_mI40_mI35__757->SetBinContent(325,0.05005005);
   ThetaY_mI40_mI35__757->SetBinError(306,0.003485583);
   ThetaY_mI40_mI35__757->SetBinError(307,0.008690568);
   ThetaY_mI40_mI35__757->SetBinError(308,0.01202243);
   ThetaY_mI40_mI35__757->SetBinError(309,0.01404749);
   ThetaY_mI40_mI35__757->SetBinError(310,0.01492507);
   ThetaY_mI40_mI35__757->SetBinError(311,0.015296);
   ThetaY_mI40_mI35__757->SetBinError(312,0.01601406);
   ThetaY_mI40_mI35__757->SetBinError(313,0.01578363);
   ThetaY_mI40_mI35__757->SetBinError(314,0.01632008);
   ThetaY_mI40_mI35__757->SetBinError(315,0.01621421);
   ThetaY_mI40_mI35__757->SetBinError(316,0.01603555);
   ThetaY_mI40_mI35__757->SetBinError(317,0.01629704);
   ThetaY_mI40_mI35__757->SetBinError(318,0.01578363);
   ThetaY_mI40_mI35__757->SetBinError(319,0.0158193);
   ThetaY_mI40_mI35__757->SetBinError(320,0.01544877);
   ThetaY_mI40_mI35__757->SetBinError(321,0.01488726);
   ThetaY_mI40_mI35__757->SetBinError(322,0.01386576);
   ThetaY_mI40_mI35__757->SetBinError(323,0.01228777);
   ThetaY_mI40_mI35__757->SetBinError(324,0.008925202);
   ThetaY_mI40_mI35__757->SetBinError(325,0.003539073);
   ThetaY_mI40_mI35__757->SetEntries(61300);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__757->SetLineColor(ci);
   ThetaY_mI40_mI35__757->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__757->SetMarkerColor(ci);
   ThetaY_mI40_mI35__757->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__757->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__757->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__757->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__757->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__757->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__757->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__757->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__757->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__757->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__757->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__757->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__757->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__757->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__757->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__757->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__757->Draw("AEsame");
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
   
   Double_t _fx3253[20] = {
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
   47.5};
   Double_t _fy3253[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02087938,
   0.3807527,
   0.6488066,
   0.7119076,
   0.8705882,
   1,
   0.4893204,
   0.7276632,
   0.6074267,
   0.4419743,
   0.6283019,
   0.888};
   Double_t _felx3253[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3253[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01727316,
   0.089084,
   0.1182073,
   0.1219601,
   0.1394674,
   0.1493312,
   0.1062002,
   0.1348714,
   0.1319169,
   0.1260774,
   0.2061407,
   0.5753561};
   Double_t _fehx3253[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3253[20] = {
   0.8467056,
   0.1356613,
   0.07086133,
   0.05189797,
   0.04597274,
   0.04376954,
   0.0399315,
   0.04110622,
   0.04803131,
   0.1128674,
   0.142026,
   0.1449206,
   0.1638665,
   0.1735338,
   0.1322317,
   0.1625767,
   0.1642861,
   0.1685201,
   0.2884169,
   1.184824};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3253,_fy3253,_felx3253,_fehx3253,_fely3253,_fehy3253);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3253 = new TH1F("Graph_Graph3253","",100,-100,100);
   Graph_Graph3253->SetMinimum(0);
   Graph_Graph3253->SetMaximum(1.5);
   Graph_Graph3253->SetDirectory(0);
   Graph_Graph3253->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3253->SetLineColor(ci);
   Graph_Graph3253->GetXaxis()->SetRange(1,100);
   Graph_Graph3253->GetXaxis()->CenterTitle(true);
   Graph_Graph3253->GetXaxis()->SetLabelFont(42);
   Graph_Graph3253->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3253->GetXaxis()->SetTitleFont(42);
   Graph_Graph3253->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3253->GetYaxis()->CenterTitle(true);
   Graph_Graph3253->GetYaxis()->SetLabelFont(42);
   Graph_Graph3253->GetYaxis()->SetTitleFont(42);
   Graph_Graph3253->GetZaxis()->SetLabelFont(42);
   Graph_Graph3253->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3253->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3253);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.170746,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__758 = new TH2D("ThetaY_vs_Y_mI40_mI35__758","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(7961,194);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(7987,1206);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8013,2308);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8039,3151);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8065,3557);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8091,3736);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8117,4095);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8143,3978);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8169,4253);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8195,4198);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8221,4106);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8247,4241);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8273,3978);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8299,3996);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8325,3811);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8351,3539);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8377,3070);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8403,2411);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8429,1272);
   ThetaY_vs_Y_mI40_mI35__758->SetBinContent(8455,200);
   ThetaY_vs_Y_mI40_mI35__758->SetEntries(61300);
   ThetaY_vs_Y_mI40_mI35__758->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(1,212.65);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(2,425.3);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(3,637.95);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(4,850.6);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(5,1063.25);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(6,1275.9);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(7,1488.55);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(8,1701.2);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(9,1913.85);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(10,2126.5);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(11,2339.15);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(12,2551.8);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(13,2764.45);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(14,2977.1);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(15,3189.75);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(16,3402.4);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(17,3615.05);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(18,3827.7);
   ThetaY_vs_Y_mI40_mI35__758->SetContourLevel(19,4040.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__758->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__758->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__758->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__758->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__758->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__758->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__758->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__758->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__758->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__758->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__758->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__758->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__758->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__758->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__758->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__758->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-40_-35","Reco vertices","lpf");
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
