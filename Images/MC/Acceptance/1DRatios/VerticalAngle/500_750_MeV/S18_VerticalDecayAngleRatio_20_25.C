void S18_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.0684867,125,1.301247);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__450 = new TH1D("S18_ThetaY_20_25__450","",630,-1575,1575);
   S18_ThetaY_20_25__450->SetBinContent(302,0.03773585);
   S18_ThetaY_20_25__450->SetBinContent(303,0.1132075);
   S18_ThetaY_20_25__450->SetBinContent(304,0.3018868);
   S18_ThetaY_20_25__450->SetBinContent(305,0.6037736);
   S18_ThetaY_20_25__450->SetBinContent(306,0.6792453);
   S18_ThetaY_20_25__450->SetBinContent(307,0.6792453);
   S18_ThetaY_20_25__450->SetBinContent(308,0.8490566);
   S18_ThetaY_20_25__450->SetBinContent(309,1);
   S18_ThetaY_20_25__450->SetBinContent(310,0.9245283);
   S18_ThetaY_20_25__450->SetBinContent(311,0.6226415);
   S18_ThetaY_20_25__450->SetBinContent(312,0.7924528);
   S18_ThetaY_20_25__450->SetBinContent(313,0.9622642);
   S18_ThetaY_20_25__450->SetBinContent(314,0.754717);
   S18_ThetaY_20_25__450->SetBinContent(315,0.6415094);
   S18_ThetaY_20_25__450->SetBinContent(316,0.6226415);
   S18_ThetaY_20_25__450->SetBinContent(317,0.6981132);
   S18_ThetaY_20_25__450->SetBinContent(318,0.9811321);
   S18_ThetaY_20_25__450->SetBinContent(319,0.3773585);
   S18_ThetaY_20_25__450->SetBinContent(320,0.03773585);
   S18_ThetaY_20_25__450->SetBinError(302,0.02668327);
   S18_ThetaY_20_25__450->SetBinError(303,0.04621679);
   S18_ThetaY_20_25__450->SetBinError(304,0.0754717);
   S18_ThetaY_20_25__450->SetBinError(305,0.1067331);
   S18_ThetaY_20_25__450->SetBinError(306,0.1132075);
   S18_ThetaY_20_25__450->SetBinError(307,0.1132075);
   S18_ThetaY_20_25__450->SetBinError(308,0.1265699);
   S18_ThetaY_20_25__450->SetBinError(309,0.1373606);
   S18_ThetaY_20_25__450->SetBinError(310,0.1320755);
   S18_ThetaY_20_25__450->SetBinError(311,0.108388);
   S18_ThetaY_20_25__450->SetBinError(312,0.1222781);
   S18_ThetaY_20_25__450->SetBinError(313,0.1347439);
   S18_ThetaY_20_25__450->SetBinError(314,0.1193312);
   S18_ThetaY_20_25__450->SetBinError(315,0.110018);
   S18_ThetaY_20_25__450->SetBinError(316,0.108388);
   S18_ThetaY_20_25__450->SetBinError(317,0.1147691);
   S18_ThetaY_20_25__450->SetBinError(318,0.1360585);
   S18_ThetaY_20_25__450->SetBinError(319,0.08437992);
   S18_ThetaY_20_25__450->SetBinError(320,0.02668327);
   S18_ThetaY_20_25__450->SetMinimum(0);
   S18_ThetaY_20_25__450->SetMaximum(1.164274);
   S18_ThetaY_20_25__450->SetEntries(619);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__450->SetLineColor(ci);
   S18_ThetaY_20_25__450->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__450->SetMarkerColor(ci);
   S18_ThetaY_20_25__450->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__450->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__450->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__450->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__450->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__450->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__450->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__450->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__450->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__450->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__450->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__450->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__450->Draw("AE");
   
   TH1D *ThetaY_20_25__451 = new TH1D("ThetaY_20_25__451","",630,-1575,1575);
   ThetaY_20_25__451->SetBinContent(300,0.004741235);
   ThetaY_20_25__451->SetBinContent(301,0.06731219);
   ThetaY_20_25__451->SetBinContent(302,0.1936561);
   ThetaY_20_25__451->SetBinContent(303,0.3973957);
   ThetaY_20_25__451->SetBinContent(304,0.6174958);
   ThetaY_20_25__451->SetBinContent(305,0.7688815);
   ThetaY_20_25__451->SetBinContent(306,0.8785309);
   ThetaY_20_25__451->SetBinContent(307,0.9505843);
   ThetaY_20_25__451->SetBinContent(308,0.9995993);
   ThetaY_20_25__451->SetBinContent(309,1);
   ThetaY_20_25__451->SetBinContent(310,1.032788);
   ThetaY_20_25__451->SetBinContent(311,1.028381);
   ThetaY_20_25__451->SetBinContent(312,1.035526);
   ThetaY_20_25__451->SetBinContent(313,1.030117);
   ThetaY_20_25__451->SetBinContent(314,1.058431);
   ThetaY_20_25__451->SetBinContent(315,1.024508);
   ThetaY_20_25__451->SetBinContent(316,1.038598);
   ThetaY_20_25__451->SetBinContent(317,1.046477);
   ThetaY_20_25__451->SetBinContent(318,1.027245);
   ThetaY_20_25__451->SetBinContent(319,1.033255);
   ThetaY_20_25__451->SetBinContent(320,1.030317);
   ThetaY_20_25__451->SetBinContent(321,1.047346);
   ThetaY_20_25__451->SetBinContent(322,1.021302);
   ThetaY_20_25__451->SetBinContent(323,0.9875793);
   ThetaY_20_25__451->SetBinContent(324,0.9453756);
   ThetaY_20_25__451->SetBinContent(325,0.881803);
   ThetaY_20_25__451->SetBinContent(326,0.7660768);
   ThetaY_20_25__451->SetBinContent(327,0.6178297);
   ThetaY_20_25__451->SetBinContent(328,0.3958598);
   ThetaY_20_25__451->SetBinContent(329,0.1948581);
   ThetaY_20_25__451->SetBinContent(330,0.06677796);
   ThetaY_20_25__451->SetBinContent(331,0.004808013);
   ThetaY_20_25__451->SetBinError(300,0.0005626811);
   ThetaY_20_25__451->SetBinError(301,0.002120135);
   ThetaY_20_25__451->SetBinError(302,0.003596103);
   ThetaY_20_25__451->SetBinError(303,0.005151434);
   ThetaY_20_25__451->SetBinError(304,0.006421457);
   ThetaY_20_25__451->SetBinError(305,0.007165496);
   ThetaY_20_25__451->SetBinError(306,0.007659406);
   ThetaY_20_25__451->SetBinError(307,0.007967313);
   ThetaY_20_25__451->SetBinError(308,0.008170141);
   ThetaY_20_25__451->SetBinError(309,0.008171778);
   ThetaY_20_25__451->SetBinError(310,0.008304666);
   ThetaY_20_25__451->SetBinError(311,0.008286927);
   ThetaY_20_25__451->SetBinError(312,0.008315666);
   ThetaY_20_25__451->SetBinError(313,0.00829392);
   ThetaY_20_25__451->SetBinError(314,0.008407131);
   ThetaY_20_25__451->SetBinError(315,0.008271307);
   ThetaY_20_25__451->SetBinError(316,0.008327991);
   ThetaY_20_25__451->SetBinError(317,0.008359524);
   ThetaY_20_25__451->SetBinError(318,0.008282352);
   ThetaY_20_25__451->SetBinError(319,0.008306545);
   ThetaY_20_25__451->SetBinError(320,0.008294726);
   ThetaY_20_25__451->SetBinError(321,0.00836299);
   ThetaY_20_25__451->SetBinError(322,0.008258358);
   ThetaY_20_25__451->SetBinError(323,0.00812087);
   ThetaY_20_25__451->SetBinError(324,0.007945455);
   ThetaY_20_25__451->SetBinError(325,0.007673657);
   ThetaY_20_25__451->SetBinError(326,0.007152416);
   ThetaY_20_25__451->SetBinError(327,0.006423193);
   ThetaY_20_25__451->SetBinError(328,0.00514147);
   ThetaY_20_25__451->SetBinError(329,0.003607246);
   ThetaY_20_25__451->SetBinError(330,0.002111705);
   ThetaY_20_25__451->SetBinError(331,0.0005666298);
   ThetaY_20_25__451->SetEntries(362297);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__451->SetLineColor(ci);
   ThetaY_20_25__451->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__451->SetMarkerColor(ci);
   ThetaY_20_25__451->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__451->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__451->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__451->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__451->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__451->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__451->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__451->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__451->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__451->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__451->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__451->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__451->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__451->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__451->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__451->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__451->Draw("AEsame");
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
   
   Double_t _fx3151[32] = {
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
   Double_t _fy3151[32] = {
   0,
   0,
   0.1948601,
   0.2848736,
   0.4888888,
   0.7852622,
   0.7731604,
   0.7145555,
   0.8493969,
   1,
   0.8951772,
   0.6054582,
   0.7652661,
   0.9341311,
   0.7130528,
   0.6261637,
   0.5995021,
   0.6671077,
   0.9551097,
   0.3652132,
   0.03662547,
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
   Double_t _felx3151[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3151[32] = {
   0,
   0,
   0.1258888,
   0.1130454,
   0.1210314,
   0.1382729,
   0.1284294,
   0.1186826,
   0.1263337,
   0.1371635,
   0.1276423,
   0.104969,
   0.1177666,
   0.1305855,
   0.1124084,
   0.1069704,
   0.1039353,
   0.1092994,
   0.1322414,
   0.08102584,
   0.02365762,
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
   Double_t _fehx3151[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3151[32] = {
   7.422228,
   0.5165186,
   0.2572124,
   0.1702845,
   0.1554929,
   0.1650778,
   0.1517775,
   0.1402556,
   0.1466921,
   0.1574142,
   0.1472926,
   0.1249694,
   0.1374601,
   0.1502636,
   0.1317059,
   0.1270242,
   0.1237385,
   0.1288708,
   0.1519636,
   0.1013667,
   0.04831368,
   0.03316794,
   0.03401378,
   0.03517532,
   0.03674573,
   0.03939506,
   0.04534669,
   0.05622862,
   0.08776252,
   0.1783206,
   0.5206546,
   7.317818};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3151,_fy3151,_felx3151,_fehx3151,_fely3151,_fehy3151);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3151 = new TH1F("Graph_Graph3151","",100,-100,100);
   Graph_Graph3151->SetMinimum(0);
   Graph_Graph3151->SetMaximum(1.5);
   Graph_Graph3151->SetDirectory(0);
   Graph_Graph3151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3151->SetLineColor(ci);
   Graph_Graph3151->GetXaxis()->SetRange(1,100);
   Graph_Graph3151->GetXaxis()->CenterTitle(true);
   Graph_Graph3151->GetXaxis()->SetLabelFont(42);
   Graph_Graph3151->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3151->GetXaxis()->SetTitleFont(42);
   Graph_Graph3151->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3151->GetYaxis()->CenterTitle(true);
   Graph_Graph3151->GetYaxis()->SetLabelFont(42);
   Graph_Graph3151->GetYaxis()->SetTitleFont(42);
   Graph_Graph3151->GetZaxis()->SetLabelFont(42);
   Graph_Graph3151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3151->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3151);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.164274,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__452 = new TH2D("ThetaY_vs_Y_20_25__452","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__452->SetBinContent(7817,71);
   ThetaY_vs_Y_20_25__452->SetBinContent(7843,1008);
   ThetaY_vs_Y_20_25__452->SetBinContent(7869,2900);
   ThetaY_vs_Y_20_25__452->SetBinContent(7895,5951);
   ThetaY_vs_Y_20_25__452->SetBinContent(7921,9247);
   ThetaY_vs_Y_20_25__452->SetBinContent(7947,11514);
   ThetaY_vs_Y_20_25__452->SetBinContent(7973,13156);
   ThetaY_vs_Y_20_25__452->SetBinContent(7999,14235);
   ThetaY_vs_Y_20_25__452->SetBinContent(8025,14969);
   ThetaY_vs_Y_20_25__452->SetBinContent(8051,14975);
   ThetaY_vs_Y_20_25__452->SetBinContent(8077,15466);
   ThetaY_vs_Y_20_25__452->SetBinContent(8103,15400);
   ThetaY_vs_Y_20_25__452->SetBinContent(8129,15507);
   ThetaY_vs_Y_20_25__452->SetBinContent(8155,15426);
   ThetaY_vs_Y_20_25__452->SetBinContent(8181,15850);
   ThetaY_vs_Y_20_25__452->SetBinContent(8207,15342);
   ThetaY_vs_Y_20_25__452->SetBinContent(8233,15553);
   ThetaY_vs_Y_20_25__452->SetBinContent(8259,15671);
   ThetaY_vs_Y_20_25__452->SetBinContent(8285,15383);
   ThetaY_vs_Y_20_25__452->SetBinContent(8311,15473);
   ThetaY_vs_Y_20_25__452->SetBinContent(8337,15429);
   ThetaY_vs_Y_20_25__452->SetBinContent(8363,15684);
   ThetaY_vs_Y_20_25__452->SetBinContent(8389,15294);
   ThetaY_vs_Y_20_25__452->SetBinContent(8415,14789);
   ThetaY_vs_Y_20_25__452->SetBinContent(8441,14157);
   ThetaY_vs_Y_20_25__452->SetBinContent(8467,13205);
   ThetaY_vs_Y_20_25__452->SetBinContent(8493,11472);
   ThetaY_vs_Y_20_25__452->SetBinContent(8519,9252);
   ThetaY_vs_Y_20_25__452->SetBinContent(8545,5928);
   ThetaY_vs_Y_20_25__452->SetBinContent(8571,2918);
   ThetaY_vs_Y_20_25__452->SetBinContent(8597,1000);
   ThetaY_vs_Y_20_25__452->SetBinContent(8623,72);
   ThetaY_vs_Y_20_25__452->SetEntries(362297);
   ThetaY_vs_Y_20_25__452->SetContour(20);
   ThetaY_vs_Y_20_25__452->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__452->SetContourLevel(1,792.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(2,1585);
   ThetaY_vs_Y_20_25__452->SetContourLevel(3,2377.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(4,3170);
   ThetaY_vs_Y_20_25__452->SetContourLevel(5,3962.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(6,4755);
   ThetaY_vs_Y_20_25__452->SetContourLevel(7,5547.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(8,6340);
   ThetaY_vs_Y_20_25__452->SetContourLevel(9,7132.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(10,7925);
   ThetaY_vs_Y_20_25__452->SetContourLevel(11,8717.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(12,9510);
   ThetaY_vs_Y_20_25__452->SetContourLevel(13,10302.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(14,11095);
   ThetaY_vs_Y_20_25__452->SetContourLevel(15,11887.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(16,12680);
   ThetaY_vs_Y_20_25__452->SetContourLevel(17,13472.5);
   ThetaY_vs_Y_20_25__452->SetContourLevel(18,14265);
   ThetaY_vs_Y_20_25__452->SetContourLevel(19,15057.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__452->SetLineColor(ci);
   ThetaY_vs_Y_20_25__452->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__452->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__452->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__452->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__452->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__452->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__452->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__452->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__452->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__452->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__452->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__452->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__452->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__452->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__452->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
