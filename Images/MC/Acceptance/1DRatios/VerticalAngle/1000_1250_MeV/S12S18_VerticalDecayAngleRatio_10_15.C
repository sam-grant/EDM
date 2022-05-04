void S12S18_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.06745511,125,1.281647);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__843 = new TH1D("S12S18_ThetaY_10_15__843","",630,-1575,1575);
   S12S18_ThetaY_10_15__843->SetBinContent(306,0.003350084);
   S12S18_ThetaY_10_15__843->SetBinContent(307,0.04690117);
   S12S18_ThetaY_10_15__843->SetBinContent(308,0.3467337);
   S12S18_ThetaY_10_15__843->SetBinContent(309,0.6465662);
   S12S18_ThetaY_10_15__843->SetBinContent(310,0.8442211);
   S12S18_ThetaY_10_15__843->SetBinContent(311,0.919598);
   S12S18_ThetaY_10_15__843->SetBinContent(312,1);
   S12S18_ThetaY_10_15__843->SetBinContent(313,0.9011725);
   S12S18_ThetaY_10_15__843->SetBinContent(314,1.005025);
   S12S18_ThetaY_10_15__843->SetBinContent(315,0.9698492);
   S12S18_ThetaY_10_15__843->SetBinContent(316,0.8659966);
   S12S18_ThetaY_10_15__843->SetBinContent(317,0.9463987);
   S12S18_ThetaY_10_15__843->SetBinContent(318,0.9145729);
   S12S18_ThetaY_10_15__843->SetBinContent(319,0.680067);
   S12S18_ThetaY_10_15__843->SetBinContent(320,0.1792295);
   S12S18_ThetaY_10_15__843->SetBinContent(321,0.01172529);
   S12S18_ThetaY_10_15__843->SetBinError(306,0.002368867);
   S12S18_ThetaY_10_15__843->SetBinError(307,0.008863488);
   S12S18_ThetaY_10_15__843->SetBinError(308,0.02409966);
   S12S18_ThetaY_10_15__843->SetBinError(309,0.03290935);
   S12S18_ThetaY_10_15__843->SetBinError(310,0.0376046);
   S12S18_ThetaY_10_15__843->SetBinError(311,0.03924749);
   S12S18_ThetaY_10_15__843->SetBinError(312,0.04092728);
   S12S18_ThetaY_10_15__843->SetBinError(313,0.03885231);
   S12S18_ThetaY_10_15__843->SetBinError(314,0.04102998);
   S12S18_ThetaY_10_15__843->SetBinError(315,0.04030556);
   S12S18_ThetaY_10_15__843->SetBinError(316,0.03808649);
   S12S18_ThetaY_10_15__843->SetBinError(317,0.03981529);
   S12S18_ThetaY_10_15__843->SetBinError(318,0.03914011);
   S12S18_ThetaY_10_15__843->SetBinError(319,0.03375116);
   S12S18_ThetaY_10_15__843->SetBinError(320,0.01732677);
   S12S18_ThetaY_10_15__843->SetBinError(321,0.004431744);
   S12S18_ThetaY_10_15__843->SetMinimum(0);
   S12S18_ThetaY_10_15__843->SetMaximum(1.146737);
   S12S18_ThetaY_10_15__843->SetEntries(6138);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__843->SetLineColor(ci);
   S12S18_ThetaY_10_15__843->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__843->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__843->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__843->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__843->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__843->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__843->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__843->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__843->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__843->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__843->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__843->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__843->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__843->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__843->Draw("AE");
   
   TH1D *ThetaY_10_15__844 = new TH1D("ThetaY_10_15__844","",630,-1575,1575);
   ThetaY_10_15__844->SetBinContent(305,4.978096e-05);
   ThetaY_10_15__844->SetBinContent(306,0.05319096);
   ThetaY_10_15__844->SetBinContent(307,0.3126493);
   ThetaY_10_15__844->SetBinContent(308,0.5950816);
   ThetaY_10_15__844->SetBinContent(309,0.7759857);
   ThetaY_10_15__844->SetBinContent(310,0.8744026);
   ThetaY_10_15__844->SetBinContent(311,0.9533801);
   ThetaY_10_15__844->SetBinContent(312,1);
   ThetaY_10_15__844->SetBinContent(313,1.008513);
   ThetaY_10_15__844->SetBinContent(314,1.042488);
   ThetaY_10_15__844->SetBinContent(315,1.037261);
   ThetaY_10_15__844->SetBinContent(316,1.022003);
   ThetaY_10_15__844->SetBinContent(317,1.03171);
   ThetaY_10_15__844->SetBinContent(318,1.019937);
   ThetaY_10_15__844->SetBinContent(319,0.9973865);
   ThetaY_10_15__844->SetBinContent(320,0.9471824);
   ThetaY_10_15__844->SetBinContent(321,0.8877937);
   ThetaY_10_15__844->SetBinContent(322,0.7680954);
   ThetaY_10_15__844->SetBinContent(323,0.5941856);
   ThetaY_10_15__844->SetBinContent(324,0.311828);
   ThetaY_10_15__844->SetBinContent(325,0.05154819);
   ThetaY_10_15__844->SetBinError(305,3.520046e-05);
   ThetaY_10_15__844->SetBinError(306,0.00115063);
   ThetaY_10_15__844->SetBinError(307,0.002789622);
   ThetaY_10_15__844->SetBinError(308,0.003848619);
   ThetaY_10_15__844->SetBinError(309,0.004394844);
   ThetaY_10_15__844->SetBinError(310,0.004665223);
   ThetaY_10_15__844->SetBinError(311,0.004871354);
   ThetaY_10_15__844->SetBinError(312,0.004989036);
   ThetaY_10_15__844->SetBinError(313,0.005010226);
   ThetaY_10_15__844->SetBinError(314,0.005093921);
   ThetaY_10_15__844->SetBinError(315,0.005081134);
   ThetaY_10_15__844->SetBinError(316,0.005043625);
   ThetaY_10_15__844->SetBinError(317,0.005067521);
   ThetaY_10_15__844->SetBinError(318,0.005038525);
   ThetaY_10_15__844->SetBinError(319,0.004982512);
   ThetaY_10_15__844->SetBinError(320,0.004855494);
   ThetaY_10_15__844->SetBinError(321,0.00470081);
   ThetaY_10_15__844->SetBinError(322,0.004372444);
   ThetaY_10_15__844->SetBinError(323,0.00384572);
   ThetaY_10_15__844->SetBinError(324,0.002785956);
   ThetaY_10_15__844->SetBinError(325,0.001132722);
   ThetaY_10_15__844->SetEntries(614077);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__844->SetLineColor(ci);
   ThetaY_10_15__844->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__844->SetMarkerColor(ci);
   ThetaY_10_15__844->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__844->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__844->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__844->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__844->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__844->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__844->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__844->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__844->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__844->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__844->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__844->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__844->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__844->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__844->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__844->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__844->Draw("AEsame");
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
   
   Double_t _fx3282[21] = {
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
   47.5};
   Double_t _fy3282[21] = {
   0,
   0.0629822,
   0.1500121,
   0.5826657,
   0.8332192,
   0.9654833,
   0.9645659,
   1,
   0.893566,
   0.9640639,
   0.9350098,
   0.8473522,
   0.9173103,
   0.8966952,
   0.681849,
   0.1892238,
   0.01320723,
   0,
   0,
   0,
   0};
   Double_t _felx3282[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3282[21] = {
   0,
   0.04069261,
   0.02820963,
   0.04063932,
   0.04265234,
   0.04329848,
   0.0414475,
   0.0412182,
   0.03876678,
   0.03962715,
   0.03911494,
   0.03748783,
   0.03884172,
   0.03861755,
   0.03399619,
   0.01828976,
   0.004870999,
   0,
   0,
   0,
   0};
   Double_t _fehx3282[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3282[21] = {
   101.6562,
   0.08315927,
   0.03409095,
   0.04357954,
   0.04489511,
   0.04528651,
   0.04326909,
   0.04295426,
   0.04048728,
   0.04129146,
   0.04078751,
   0.03918515,
   0.04052326,
   0.04031859,
   0.03573587,
   0.02014971,
   0.007114639,
   0.004014971,
   0.005190142,
   0.009890117,
   0.05985001};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3282,_fy3282,_felx3282,_fehx3282,_fely3282,_fehy3282);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3282 = new TH1F("Graph_Graph3282","",100,-100,100);
   Graph_Graph3282->SetMinimum(0);
   Graph_Graph3282->SetMaximum(1.5);
   Graph_Graph3282->SetDirectory(0);
   Graph_Graph3282->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3282->SetLineColor(ci);
   Graph_Graph3282->GetXaxis()->SetRange(1,100);
   Graph_Graph3282->GetXaxis()->CenterTitle(true);
   Graph_Graph3282->GetXaxis()->SetLabelFont(42);
   Graph_Graph3282->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3282->GetXaxis()->SetTitleFont(42);
   Graph_Graph3282->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3282->GetYaxis()->CenterTitle(true);
   Graph_Graph3282->GetYaxis()->SetLabelFont(42);
   Graph_Graph3282->GetYaxis()->SetTitleFont(42);
   Graph_Graph3282->GetZaxis()->SetLabelFont(42);
   Graph_Graph3282->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3282->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3282);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.146737,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__845 = new TH2D("ThetaY_vs_Y_10_15__845","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__845->SetBinContent(7945,2);
   ThetaY_vs_Y_10_15__845->SetBinContent(7971,2137);
   ThetaY_vs_Y_10_15__845->SetBinContent(7997,12561);
   ThetaY_vs_Y_10_15__845->SetBinContent(8023,23908);
   ThetaY_vs_Y_10_15__845->SetBinContent(8049,31176);
   ThetaY_vs_Y_10_15__845->SetBinContent(8075,35130);
   ThetaY_vs_Y_10_15__845->SetBinContent(8101,38303);
   ThetaY_vs_Y_10_15__845->SetBinContent(8127,40176);
   ThetaY_vs_Y_10_15__845->SetBinContent(8153,40518);
   ThetaY_vs_Y_10_15__845->SetBinContent(8179,41883);
   ThetaY_vs_Y_10_15__845->SetBinContent(8205,41673);
   ThetaY_vs_Y_10_15__845->SetBinContent(8231,41060);
   ThetaY_vs_Y_10_15__845->SetBinContent(8257,41450);
   ThetaY_vs_Y_10_15__845->SetBinContent(8283,40977);
   ThetaY_vs_Y_10_15__845->SetBinContent(8309,40071);
   ThetaY_vs_Y_10_15__845->SetBinContent(8335,38054);
   ThetaY_vs_Y_10_15__845->SetBinContent(8361,35668);
   ThetaY_vs_Y_10_15__845->SetBinContent(8387,30859);
   ThetaY_vs_Y_10_15__845->SetBinContent(8413,23872);
   ThetaY_vs_Y_10_15__845->SetBinContent(8439,12528);
   ThetaY_vs_Y_10_15__845->SetBinContent(8465,2071);
   ThetaY_vs_Y_10_15__845->SetEntries(614077);
   ThetaY_vs_Y_10_15__845->SetContour(20);
   ThetaY_vs_Y_10_15__845->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__845->SetContourLevel(1,2094.15);
   ThetaY_vs_Y_10_15__845->SetContourLevel(2,4188.3);
   ThetaY_vs_Y_10_15__845->SetContourLevel(3,6282.45);
   ThetaY_vs_Y_10_15__845->SetContourLevel(4,8376.6);
   ThetaY_vs_Y_10_15__845->SetContourLevel(5,10470.75);
   ThetaY_vs_Y_10_15__845->SetContourLevel(6,12564.9);
   ThetaY_vs_Y_10_15__845->SetContourLevel(7,14659.05);
   ThetaY_vs_Y_10_15__845->SetContourLevel(8,16753.2);
   ThetaY_vs_Y_10_15__845->SetContourLevel(9,18847.35);
   ThetaY_vs_Y_10_15__845->SetContourLevel(10,20941.5);
   ThetaY_vs_Y_10_15__845->SetContourLevel(11,23035.65);
   ThetaY_vs_Y_10_15__845->SetContourLevel(12,25129.8);
   ThetaY_vs_Y_10_15__845->SetContourLevel(13,27223.95);
   ThetaY_vs_Y_10_15__845->SetContourLevel(14,29318.1);
   ThetaY_vs_Y_10_15__845->SetContourLevel(15,31412.25);
   ThetaY_vs_Y_10_15__845->SetContourLevel(16,33506.4);
   ThetaY_vs_Y_10_15__845->SetContourLevel(17,35600.55);
   ThetaY_vs_Y_10_15__845->SetContourLevel(18,37694.7);
   ThetaY_vs_Y_10_15__845->SetContourLevel(19,39788.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__845->SetLineColor(ci);
   ThetaY_vs_Y_10_15__845->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__845->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__845->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__845->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__845->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__845->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__845->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__845->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__845->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__845->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__845->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__845->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__845->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__845->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__845->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_10_15","Reco vertices","lpf");
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
