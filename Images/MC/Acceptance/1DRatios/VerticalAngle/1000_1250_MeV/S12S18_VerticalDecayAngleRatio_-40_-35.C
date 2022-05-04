void S12S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:50 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06917902,125,1.314401);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI40_mI35__813 = new TH1D("S12S18_ThetaY_mI40_mI35__813","",630,-1575,1575);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(314,0.01333333);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(315,0.5466667);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(316,0.8133333);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(317,0.88);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(318,1);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(319,0.9333333);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(320,0.6133333);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(321,0.64);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(322,0.5733333);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(323,0.4133333);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(324,0.2266667);
   S12S18_ThetaY_mI40_mI35__813->SetBinContent(325,0.04);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(314,0.01333333);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(315,0.08537499);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(316,0.1041367);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(317,0.1083205);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(318,0.1154701);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(319,0.1115547);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(320,0.09043107);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(321,0.09237604);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(322,0.08743251);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(323,0.07423686);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(324,0.05497474);
   S12S18_ThetaY_mI40_mI35__813->SetBinError(325,0.02309401);
   S12S18_ThetaY_mI40_mI35__813->SetMinimum(0);
   S12S18_ThetaY_mI40_mI35__813->SetMaximum(1.176043);
   S12S18_ThetaY_mI40_mI35__813->SetEntries(502);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__813->SetLineColor(ci);
   S12S18_ThetaY_mI40_mI35__813->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__813->SetMarkerColor(ci);
   S12S18_ThetaY_mI40_mI35__813->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI40_mI35__813->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI40_mI35__813->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__813->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__813->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__813->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI40_mI35__813->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI40_mI35__813->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__813->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__813->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__813->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__813->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__813->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__814 = new TH1D("ThetaY_mI40_mI35__814","",630,-1575,1575);
   ThetaY_mI40_mI35__814->SetBinContent(306,0.04876823);
   ThetaY_mI40_mI35__814->SetBinContent(307,0.3031674);
   ThetaY_mI40_mI35__814->SetBinContent(308,0.5801911);
   ThetaY_mI40_mI35__814->SetBinContent(309,0.7921066);
   ThetaY_mI40_mI35__814->SetBinContent(310,0.8941679);
   ThetaY_mI40_mI35__814->SetBinContent(311,0.9391654);
   ThetaY_mI40_mI35__814->SetBinContent(312,1.029412);
   ThetaY_mI40_mI35__814->SetBinContent(313,1);
   ThetaY_mI40_mI35__814->SetBinContent(314,1.06913);
   ThetaY_mI40_mI35__814->SetBinContent(315,1.055304);
   ThetaY_mI40_mI35__814->SetBinContent(316,1.032177);
   ThetaY_mI40_mI35__814->SetBinContent(317,1.066114);
   ThetaY_mI40_mI35__814->SetBinContent(318,1);
   ThetaY_mI40_mI35__814->SetBinContent(319,1.004525);
   ThetaY_mI40_mI35__814->SetBinContent(320,0.9580191);
   ThetaY_mI40_mI35__814->SetBinContent(321,0.889643);
   ThetaY_mI40_mI35__814->SetBinContent(322,0.7717446);
   ThetaY_mI40_mI35__814->SetBinContent(323,0.6060835);
   ThetaY_mI40_mI35__814->SetBinContent(324,0.3197587);
   ThetaY_mI40_mI35__814->SetBinContent(325,0.05027652);
   ThetaY_mI40_mI35__814->SetBinError(306,0.003501355);
   ThetaY_mI40_mI35__814->SetBinError(307,0.008729892);
   ThetaY_mI40_mI35__814->SetBinError(308,0.01207683);
   ThetaY_mI40_mI35__814->SetBinError(309,0.01411105);
   ThetaY_mI40_mI35__814->SetBinError(310,0.01499261);
   ThetaY_mI40_mI35__814->SetBinError(311,0.01536522);
   ThetaY_mI40_mI35__814->SetBinError(312,0.01608652);
   ThetaY_mI40_mI35__814->SetBinError(313,0.01585505);
   ThetaY_mI40_mI35__814->SetBinError(314,0.01639392);
   ThetaY_mI40_mI35__814->SetBinError(315,0.01628758);
   ThetaY_mI40_mI35__814->SetBinError(316,0.01610811);
   ThetaY_mI40_mI35__814->SetBinError(317,0.01637078);
   ThetaY_mI40_mI35__814->SetBinError(318,0.01585505);
   ThetaY_mI40_mI35__814->SetBinError(319,0.01589088);
   ThetaY_mI40_mI35__814->SetBinError(320,0.01551868);
   ThetaY_mI40_mI35__814->SetBinError(321,0.01495462);
   ThetaY_mI40_mI35__814->SetBinError(322,0.0139285);
   ThetaY_mI40_mI35__814->SetBinError(323,0.01234337);
   ThetaY_mI40_mI35__814->SetBinError(324,0.008965588);
   ThetaY_mI40_mI35__814->SetBinError(325,0.003555087);
   ThetaY_mI40_mI35__814->SetEntries(61300);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__814->SetLineColor(ci);
   ThetaY_mI40_mI35__814->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__814->SetMarkerColor(ci);
   ThetaY_mI40_mI35__814->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__814->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__814->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__814->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__814->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__814->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__814->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__814->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__814->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__814->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__814->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__814->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__814->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__814->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__814->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__814->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__814->Draw("AEsame");
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
   
   Double_t _fx3272[20] = {
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
   Double_t _fy3272[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0124712,
   0.5180181,
   0.7879786,
   0.825428,
   1,
   0.9291291,
   0.6402099,
   0.7193897,
   0.7429055,
   0.6819743,
   0.7088679,
   0.7956};
   Double_t _felx3272[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3272[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01031721,
   0.0809528,
   0.1013457,
   0.102119,
   0.1162789,
   0.1117389,
   0.09460342,
   0.1041572,
   0.1136196,
   0.1225786,
   0.1712911,
   0.4353617};
   Double_t _fehx3272[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3272[20] = {
   0.505735,
   0.08103015,
   0.04232528,
   0.03099851,
   0.02745939,
   0.02614343,
   0.02385097,
   0.02455264,
   0.02868897,
   0.09473592,
   0.1153298,
   0.115636,
   0.1306888,
   0.1260911,
   0.1097638,
   0.1204867,
   0.1325281,
   0.1469372,
   0.2188762,
   0.7853759};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3272,_fy3272,_felx3272,_fehx3272,_fely3272,_fehy3272);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3272 = new TH1F("Graph_Graph3272","",100,-100,100);
   Graph_Graph3272->SetMinimum(0);
   Graph_Graph3272->SetMaximum(1.5);
   Graph_Graph3272->SetDirectory(0);
   Graph_Graph3272->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3272->SetLineColor(ci);
   Graph_Graph3272->GetXaxis()->SetRange(1,100);
   Graph_Graph3272->GetXaxis()->CenterTitle(true);
   Graph_Graph3272->GetXaxis()->SetLabelFont(42);
   Graph_Graph3272->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3272->GetXaxis()->SetTitleFont(42);
   Graph_Graph3272->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3272->GetYaxis()->CenterTitle(true);
   Graph_Graph3272->GetYaxis()->SetLabelFont(42);
   Graph_Graph3272->GetYaxis()->SetTitleFont(42);
   Graph_Graph3272->GetZaxis()->SetLabelFont(42);
   Graph_Graph3272->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3272->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3272);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.176043,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__815 = new TH2D("ThetaY_vs_Y_mI40_mI35__815","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(7961,194);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(7987,1206);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8013,2308);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8039,3151);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8065,3557);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8091,3736);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8117,4095);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8143,3978);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8169,4253);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8195,4198);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8221,4106);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8247,4241);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8273,3978);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8299,3996);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8325,3811);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8351,3539);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8377,3070);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8403,2411);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8429,1272);
   ThetaY_vs_Y_mI40_mI35__815->SetBinContent(8455,200);
   ThetaY_vs_Y_mI40_mI35__815->SetEntries(61300);
   ThetaY_vs_Y_mI40_mI35__815->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(1,212.65);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(2,425.3);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(3,637.95);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(4,850.6);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(5,1063.25);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(6,1275.9);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(7,1488.55);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(8,1701.2);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(9,1913.85);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(10,2126.5);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(11,2339.15);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(12,2551.8);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(13,2764.45);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(14,2977.1);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(15,3189.75);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(16,3402.4);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(17,3615.05);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(18,3827.7);
   ThetaY_vs_Y_mI40_mI35__815->SetContourLevel(19,4040.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__815->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__815->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__815->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__815->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__815->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__815->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__815->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__815->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__815->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__815->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__815->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__815->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__815->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__815->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__815->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__815->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-40_-35","Reco vertices","lpf");
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
