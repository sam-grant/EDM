void S12S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06662301,125,1.265837);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_15_20__675 = new TH1D("S12S18_ThetaY_15_20__675","",630,-1575,1575);
   S12S18_ThetaY_15_20__675->SetBinContent(304,0.005540166);
   S12S18_ThetaY_15_20__675->SetBinContent(305,0.05817175);
   S12S18_ThetaY_15_20__675->SetBinContent(306,0.2825485);
   S12S18_ThetaY_15_20__675->SetBinContent(307,0.5263158);
   S12S18_ThetaY_15_20__675->SetBinContent(308,0.7202216);
   S12S18_ThetaY_15_20__675->SetBinContent(309,0.900277);
   S12S18_ThetaY_15_20__675->SetBinContent(310,0.7977839);
   S12S18_ThetaY_15_20__675->SetBinContent(311,1);
   S12S18_ThetaY_15_20__675->SetBinContent(312,0.9861496);
   S12S18_ThetaY_15_20__675->SetBinContent(313,0.9806094);
   S12S18_ThetaY_15_20__675->SetBinContent(314,0.8919668);
   S12S18_ThetaY_15_20__675->SetBinContent(315,0.8808864);
   S12S18_ThetaY_15_20__675->SetBinContent(316,0.9196676);
   S12S18_ThetaY_15_20__675->SetBinContent(317,0.900277);
   S12S18_ThetaY_15_20__675->SetBinContent(318,0.9224377);
   S12S18_ThetaY_15_20__675->SetBinContent(319,0.5540166);
   S12S18_ThetaY_15_20__675->SetBinContent(320,0.1024931);
   S12S18_ThetaY_15_20__675->SetBinError(304,0.003917489);
   S12S18_ThetaY_15_20__675->SetBinError(305,0.01269412);
   S12S18_ThetaY_15_20__675->SetBinError(306,0.02797647);
   S12S18_ThetaY_15_20__675->SetBinError(307,0.03818296);
   S12S18_ThetaY_15_20__675->SetBinError(308,0.04466625);
   S12S18_ThetaY_15_20__675->SetBinError(309,0.04993838);
   S12S18_ThetaY_15_20__675->SetBinError(310,0.04700987);
   S12S18_ThetaY_15_20__675->SetBinError(311,0.05263158);
   S12S18_ThetaY_15_20__675->SetBinError(312,0.05226582);
   S12S18_ThetaY_15_20__675->SetBinError(313,0.0521188);
   S12S18_ThetaY_15_20__675->SetBinError(314,0.04970736);
   S12S18_ThetaY_15_20__675->SetBinError(315,0.04939766);
   S12S18_ThetaY_15_20__675->SetBinError(316,0.05047332);
   S12S18_ThetaY_15_20__675->SetBinError(317,0.04993838);
   S12S18_ThetaY_15_20__675->SetBinError(318,0.05054927);
   S12S18_ThetaY_15_20__675->SetBinError(319,0.03917489);
   S12S18_ThetaY_15_20__675->SetBinError(320,0.01684976);
   S12S18_ThetaY_15_20__675->SetMinimum(0);
   S12S18_ThetaY_15_20__675->SetMaximum(1.132591);
   S12S18_ThetaY_15_20__675->SetEntries(4126);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__675->SetLineColor(ci);
   S12S18_ThetaY_15_20__675->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__675->SetMarkerColor(ci);
   S12S18_ThetaY_15_20__675->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_15_20__675->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_15_20__675->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__675->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__675->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__675->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_15_20__675->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_15_20__675->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__675->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__675->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__675->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__675->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__675->Draw("AE");
   
   TH1D *ThetaY_15_20__676 = new TH1D("ThetaY_15_20__676","",630,-1575,1575);
   ThetaY_15_20__676->SetBinContent(303,0.0006008261);
   ThetaY_15_20__676->SetBinContent(304,0.05208412);
   ThetaY_15_20__676->SetBinContent(305,0.2466391);
   ThetaY_15_20__676->SetBinContent(306,0.5241833);
   ThetaY_15_20__676->SetBinContent(307,0.709463);
   ThetaY_15_20__676->SetBinContent(308,0.8366504);
   ThetaY_15_20__676->SetBinContent(309,0.922531);
   ThetaY_15_20__676->SetBinContent(310,0.9747278);
   ThetaY_15_20__676->SetBinContent(311,1);
   ThetaY_15_20__676->SetBinContent(312,1.018551);
   ThetaY_15_20__676->SetBinContent(313,1.013594);
   ThetaY_15_20__676->SetBinContent(314,1.029628);
   ThetaY_15_20__676->SetBinContent(315,1.019414);
   ThetaY_15_20__676->SetBinContent(316,1.01472);
   ThetaY_15_20__676->SetBinContent(317,1.015584);
   ThetaY_15_20__676->SetBinContent(318,1.014457);
   ThetaY_15_20__676->SetBinContent(319,1.027075);
   ThetaY_15_20__676->SetBinContent(320,1.002929);
   ThetaY_15_20__676->SetBinContent(321,0.9765678);
   ThetaY_15_20__676->SetBinContent(322,0.9331956);
   ThetaY_15_20__676->SetBinContent(323,0.8331956);
   ThetaY_15_20__676->SetBinContent(324,0.7140443);
   ThetaY_15_20__676->SetBinContent(325,0.5157717);
   ThetaY_15_20__676->SetBinContent(326,0.2435974);
   ThetaY_15_20__676->SetBinContent(327,0.0506196);
   ThetaY_15_20__676->SetBinContent(328,0.000413068);
   ThetaY_15_20__676->SetBinError(303,0.0001502065);
   ThetaY_15_20__676->SetBinError(304,0.001398515);
   ThetaY_15_20__676->SetBinError(305,0.003043304);
   ThetaY_15_20__676->SetBinError(306,0.004436658);
   ThetaY_15_20__676->SetBinError(307,0.00516154);
   ThetaY_15_20__676->SetBinError(308,0.00560514);
   ThetaY_15_20__676->SetBinError(309,0.005885792);
   ThetaY_15_20__676->SetBinError(310,0.00605001);
   ThetaY_15_20__676->SetBinError(311,0.006127939);
   ThetaY_15_20__676->SetBinError(312,0.006184516);
   ThetaY_15_20__676->SetBinError(313,0.006169449);
   ThetaY_15_20__676->SetBinError(314,0.006218056);
   ThetaY_15_20__676->SetBinError(315,0.006187137);
   ThetaY_15_20__676->SetBinError(316,0.006172876);
   ThetaY_15_20__676->SetBinError(317,0.006175503);
   ThetaY_15_20__676->SetBinError(318,0.006172077);
   ThetaY_15_20__676->SetBinError(319,0.006210341);
   ThetaY_15_20__676->SetBinError(320,0.006136907);
   ThetaY_15_20__676->SetBinError(321,0.006055718);
   ThetaY_15_20__676->SetBinError(322,0.005919715);
   ThetaY_15_20__676->SetBinError(323,0.005593555);
   ThetaY_15_20__676->SetBinError(324,0.005178178);
   ThetaY_15_20__676->SetBinError(325,0.004400917);
   ThetaY_15_20__676->SetBinError(326,0.00302448);
   ThetaY_15_20__676->SetBinError(327,0.001378713);
   ThetaY_15_20__676->SetBinError(328,0.0001245447);
   ThetaY_15_20__676->SetEntries(497721);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__676->SetLineColor(ci);
   ThetaY_15_20__676->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__676->SetMarkerColor(ci);
   ThetaY_15_20__676->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__676->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__676->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__676->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__676->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__676->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__676->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__676->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__676->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__676->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__676->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__676->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__676->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__676->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__676->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__676->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__676->Draw("AEsame");
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
   
   Double_t _fx3226[26] = {
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
   62.5};
   Double_t _fy3226[26] = {
   0,
   0.1063696,
   0.2358577,
   0.5390261,
   0.7418509,
   0.8608394,
   0.9758773,
   0.8184685,
   1,
   0.9681892,
   0.9674581,
   0.8662998,
   0.8641104,
   0.9063262,
   0.8864624,
   0.9092917,
   0.5394122,
   0.1021937,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3226[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3226[26] = {
   0,
   0.06873598,
   0.05113336,
   0.05347639,
   0.05404046,
   0.05366189,
   0.05445971,
   0.04846648,
   0.05296162,
   0.05162439,
   0.05173053,
   0.04853358,
   0.0487134,
   0.05001965,
   0.04944032,
   0.05010898,
   0.03824871,
   0.01673555,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3226[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3226[26] = {
   8.99556,
   0.1405287,
   0.06364399,
   0.05906873,
   0.05813123,
   0.05711859,
   0.05758949,
   0.05142711,
   0.05584579,
   0.05445528,
   0.05457545,
   0.05133378,
   0.05154206,
   0.05286141,
   0.0522797,
   0.05295147,
   0.04106353,
   0.01973016,
   0.005222334,
   0.005465062,
   0.006121005,
   0.007142456,
   0.009888338,
   0.02093826,
   0.100816,
   13.4394};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3226,_fy3226,_felx3226,_fehx3226,_fely3226,_fehy3226);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3226 = new TH1F("Graph_Graph3226","",100,-100,100);
   Graph_Graph3226->SetMinimum(0);
   Graph_Graph3226->SetMaximum(1.5);
   Graph_Graph3226->SetDirectory(0);
   Graph_Graph3226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3226->SetLineColor(ci);
   Graph_Graph3226->GetXaxis()->SetRange(1,100);
   Graph_Graph3226->GetXaxis()->CenterTitle(true);
   Graph_Graph3226->GetXaxis()->SetLabelFont(42);
   Graph_Graph3226->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3226->GetXaxis()->SetTitleFont(42);
   Graph_Graph3226->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3226->GetYaxis()->CenterTitle(true);
   Graph_Graph3226->GetYaxis()->SetLabelFont(42);
   Graph_Graph3226->GetYaxis()->SetTitleFont(42);
   Graph_Graph3226->GetZaxis()->SetLabelFont(42);
   Graph_Graph3226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3226->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3226);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.132591,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__677 = new TH2D("ThetaY_vs_Y_15_20__677","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__677->SetBinContent(7894,16);
   ThetaY_vs_Y_15_20__677->SetBinContent(7920,1387);
   ThetaY_vs_Y_15_20__677->SetBinContent(7946,6568);
   ThetaY_vs_Y_15_20__677->SetBinContent(7972,13959);
   ThetaY_vs_Y_15_20__677->SetBinContent(7998,18893);
   ThetaY_vs_Y_15_20__677->SetBinContent(8024,22280);
   ThetaY_vs_Y_15_20__677->SetBinContent(8050,24567);
   ThetaY_vs_Y_15_20__677->SetBinContent(8076,25957);
   ThetaY_vs_Y_15_20__677->SetBinContent(8102,26630);
   ThetaY_vs_Y_15_20__677->SetBinContent(8128,27124);
   ThetaY_vs_Y_15_20__677->SetBinContent(8154,26992);
   ThetaY_vs_Y_15_20__677->SetBinContent(8180,27419);
   ThetaY_vs_Y_15_20__677->SetBinContent(8206,27147);
   ThetaY_vs_Y_15_20__677->SetBinContent(8232,27022);
   ThetaY_vs_Y_15_20__677->SetBinContent(8258,27045);
   ThetaY_vs_Y_15_20__677->SetBinContent(8284,27015);
   ThetaY_vs_Y_15_20__677->SetBinContent(8310,27351);
   ThetaY_vs_Y_15_20__677->SetBinContent(8336,26708);
   ThetaY_vs_Y_15_20__677->SetBinContent(8362,26006);
   ThetaY_vs_Y_15_20__677->SetBinContent(8388,24851);
   ThetaY_vs_Y_15_20__677->SetBinContent(8414,22188);
   ThetaY_vs_Y_15_20__677->SetBinContent(8440,19015);
   ThetaY_vs_Y_15_20__677->SetBinContent(8466,13735);
   ThetaY_vs_Y_15_20__677->SetBinContent(8492,6487);
   ThetaY_vs_Y_15_20__677->SetBinContent(8518,1348);
   ThetaY_vs_Y_15_20__677->SetBinContent(8544,11);
   ThetaY_vs_Y_15_20__677->SetEntries(497721);
   ThetaY_vs_Y_15_20__677->SetContour(20);
   ThetaY_vs_Y_15_20__677->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__677->SetContourLevel(1,1370.95);
   ThetaY_vs_Y_15_20__677->SetContourLevel(2,2741.9);
   ThetaY_vs_Y_15_20__677->SetContourLevel(3,4112.85);
   ThetaY_vs_Y_15_20__677->SetContourLevel(4,5483.8);
   ThetaY_vs_Y_15_20__677->SetContourLevel(5,6854.75);
   ThetaY_vs_Y_15_20__677->SetContourLevel(6,8225.7);
   ThetaY_vs_Y_15_20__677->SetContourLevel(7,9596.65);
   ThetaY_vs_Y_15_20__677->SetContourLevel(8,10967.6);
   ThetaY_vs_Y_15_20__677->SetContourLevel(9,12338.55);
   ThetaY_vs_Y_15_20__677->SetContourLevel(10,13709.5);
   ThetaY_vs_Y_15_20__677->SetContourLevel(11,15080.45);
   ThetaY_vs_Y_15_20__677->SetContourLevel(12,16451.4);
   ThetaY_vs_Y_15_20__677->SetContourLevel(13,17822.35);
   ThetaY_vs_Y_15_20__677->SetContourLevel(14,19193.3);
   ThetaY_vs_Y_15_20__677->SetContourLevel(15,20564.25);
   ThetaY_vs_Y_15_20__677->SetContourLevel(16,21935.2);
   ThetaY_vs_Y_15_20__677->SetContourLevel(17,23306.15);
   ThetaY_vs_Y_15_20__677->SetContourLevel(18,24677.1);
   ThetaY_vs_Y_15_20__677->SetContourLevel(19,26048.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__677->SetLineColor(ci);
   ThetaY_vs_Y_15_20__677->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__677->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__677->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__677->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__677->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__677->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__677->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__677->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__677->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__677->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__677->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__677->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__677->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__677->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__677->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_15_20","Reco vertices","lpf");
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
