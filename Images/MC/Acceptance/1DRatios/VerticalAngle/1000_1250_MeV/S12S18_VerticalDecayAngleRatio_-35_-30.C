void S12S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.06523188,125,1.239406);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI35_mI30__816 = new TH1D("S12S18_ThetaY_mI35_mI30__816","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(314,0.256);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(315,0.784);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(316,0.936);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(317,1);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(318,0.928);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(319,0.832);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(320,0.736);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(321,0.736);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(322,0.56);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(323,0.504);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(324,0.184);
   S12S18_ThetaY_mI35_mI30__816->SetBinContent(325,0.048);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(314,0.04525483);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(315,0.07919596);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(316,0.08653323);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(317,0.08944272);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(318,0.08616264);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(319,0.08158431);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(320,0.0767333);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(321,0.0767333);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(322,0.0669328);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(323,0.06349803);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(324,0.03836665);
   S12S18_ThetaY_mI35_mI30__816->SetBinError(325,0.01959592);
   S12S18_ThetaY_mI35_mI30__816->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__816->SetMaximum(1.108942);
   S12S18_ThetaY_mI35_mI30__816->SetEntries(938);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__816->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__816->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__816->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__816->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__816->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__816->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__816->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__816->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__816->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__816->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__816->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__816->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__816->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__816->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__816->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__816->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__817 = new TH1D("ThetaY_mI35_mI30__817","",630,-1575,1575);
   ThetaY_mI35_mI30__817->SetBinContent(306,0.05096774);
   ThetaY_mI35_mI30__817->SetBinContent(307,0.2954839);
   ThetaY_mI35_mI30__817->SetBinContent(308,0.571871);
   ThetaY_mI35_mI30__817->SetBinContent(309,0.728);
   ThetaY_mI35_mI30__817->SetBinContent(310,0.8494194);
   ThetaY_mI35_mI30__817->SetBinContent(311,0.9127742);
   ThetaY_mI35_mI30__817->SetBinContent(312,0.9619355);
   ThetaY_mI35_mI30__817->SetBinContent(313,0.976129);
   ThetaY_mI35_mI30__817->SetBinContent(314,0.9820645);
   ThetaY_mI35_mI30__817->SetBinContent(315,1.001032);
   ThetaY_mI35_mI30__817->SetBinContent(316,1.008129);
   ThetaY_mI35_mI30__817->SetBinContent(317,1);
   ThetaY_mI35_mI30__817->SetBinContent(318,1.000129);
   ThetaY_mI35_mI30__817->SetBinContent(319,0.9701935);
   ThetaY_mI35_mI30__817->SetBinContent(320,0.9323871);
   ThetaY_mI35_mI30__817->SetBinContent(321,0.8412903);
   ThetaY_mI35_mI30__817->SetBinContent(322,0.7459355);
   ThetaY_mI35_mI30__817->SetBinContent(323,0.5692903);
   ThetaY_mI35_mI30__817->SetBinContent(324,0.2930323);
   ThetaY_mI35_mI30__817->SetBinContent(325,0.04980645);
   ThetaY_mI35_mI30__817->SetBinError(306,0.002564465);
   ThetaY_mI35_mI30__817->SetBinError(307,0.006174703);
   ThetaY_mI35_mI30__817->SetBinError(308,0.008590099);
   ThetaY_mI35_mI30__817->SetBinError(309,0.009692032);
   ThetaY_mI35_mI30__817->SetBinError(310,0.01046912);
   ThetaY_mI35_mI30__817->SetBinError(311,0.01085253);
   ThetaY_mI35_mI30__817->SetBinError(312,0.01114095);
   ThetaY_mI35_mI30__817->SetBinError(313,0.01122284);
   ThetaY_mI35_mI30__817->SetBinError(314,0.01125691);
   ThetaY_mI35_mI30__817->SetBinError(315,0.0113651);
   ThetaY_mI35_mI30__817->SetBinError(316,0.01140531);
   ThetaY_mI35_mI30__817->SetBinError(317,0.01135924);
   ThetaY_mI35_mI30__817->SetBinError(318,0.01135997);
   ThetaY_mI35_mI30__817->SetBinError(319,0.01118867);
   ThetaY_mI35_mI30__817->SetBinError(320,0.0109685);
   ThetaY_mI35_mI30__817->SetBinError(321,0.01041891);
   ThetaY_mI35_mI30__817->SetBinError(322,0.009810695);
   ThetaY_mI35_mI30__817->SetBinError(323,0.008570695);
   ThetaY_mI35_mI30__817->SetBinError(324,0.006149034);
   ThetaY_mI35_mI30__817->SetBinError(325,0.002535082);
   ThetaY_mI35_mI30__817->SetEntries(114234);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__817->SetLineColor(ci);
   ThetaY_mI35_mI30__817->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__817->SetMarkerColor(ci);
   ThetaY_mI35_mI30__817->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__817->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__817->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__817->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__817->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__817->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__817->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__817->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__817->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__817->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__817->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__817->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__817->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__817->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__817->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__817->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__817->Draw("AEsame");
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
   
   Double_t _fx3273[20] = {
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
   Double_t _fy3273[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.2606753,
   0.7831915,
   0.9284526,
   1,
   0.9278803,
   0.8575608,
   0.7893717,
   0.8748466,
   0.7507352,
   0.8853128,
   0.6279172,
   0.9637306};
   Double_t _felx3273[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3273[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04593265,
   0.07947141,
   0.08634668,
   0.09003477,
   0.0866631,
   0.08452854,
   0.08266362,
   0.09167628,
   0.09004798,
   0.1120213,
   0.1306008,
   0.3847991};
   Double_t _fehx3273[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3273[20] = {
   0.289645,
   0.0498643,
   0.02575971,
   0.02023431,
   0.01734153,
   0.01613772,
   0.01531287,
   0.01509018,
   0.05484628,
   0.08798728,
   0.09478862,
   0.09854332,
   0.09517417,
   0.09331395,
   0.09182209,
   0.1018421,
   0.1015737,
   0.1272086,
   0.1611415,
   0.5827561};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3273,_fy3273,_felx3273,_fehx3273,_fely3273,_fehy3273);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3273 = new TH1F("Graph_Graph3273","",100,-100,100);
   Graph_Graph3273->SetMinimum(0);
   Graph_Graph3273->SetMaximum(1.5);
   Graph_Graph3273->SetDirectory(0);
   Graph_Graph3273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3273->SetLineColor(ci);
   Graph_Graph3273->GetXaxis()->SetRange(1,100);
   Graph_Graph3273->GetXaxis()->CenterTitle(true);
   Graph_Graph3273->GetXaxis()->SetLabelFont(42);
   Graph_Graph3273->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3273->GetXaxis()->SetTitleFont(42);
   Graph_Graph3273->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3273->GetYaxis()->CenterTitle(true);
   Graph_Graph3273->GetYaxis()->SetLabelFont(42);
   Graph_Graph3273->GetYaxis()->SetTitleFont(42);
   Graph_Graph3273->GetZaxis()->SetLabelFont(42);
   Graph_Graph3273->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3273->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3273);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.108942,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__818 = new TH2D("ThetaY_vs_Y_mI35_mI30__818","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(7962,395);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(7988,2290);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8014,4432);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8040,5642);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8066,6583);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8092,7074);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8118,7455);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8144,7565);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8170,7611);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8196,7758);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8222,7813);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8248,7750);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8274,7751);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8300,7519);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8326,7226);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8352,6520);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8378,5781);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8404,4412);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8430,2271);
   ThetaY_vs_Y_mI35_mI30__818->SetBinContent(8456,386);
   ThetaY_vs_Y_mI35_mI30__818->SetEntries(114234);
   ThetaY_vs_Y_mI35_mI30__818->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(1,390.65);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(2,781.3);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(3,1171.95);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(4,1562.6);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(5,1953.25);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(6,2343.9);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(7,2734.55);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(8,3125.2);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(9,3515.85);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(10,3906.5);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(11,4297.15);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(12,4687.8);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(13,5078.45);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(14,5469.1);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(15,5859.75);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(16,6250.4);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(17,6641.05);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(18,7031.7);
   ThetaY_vs_Y_mI35_mI30__818->SetContourLevel(19,7422.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__818->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__818->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__818->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__818->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__818->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__818->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__818->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__818->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__818->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__818->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__818->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__818->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__818->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__818->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__818->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__818->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-35_-30","Reco vertices","lpf");
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
