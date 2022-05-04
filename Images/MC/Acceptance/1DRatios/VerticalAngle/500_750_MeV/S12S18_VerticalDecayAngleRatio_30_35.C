void S12S18_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.06879828,125,1.307167);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_30_35__513 = new TH1D("S12S18_ThetaY_30_35__513","",630,-1575,1575);
   S12S18_ThetaY_30_35__513->SetBinContent(301,0.02564103);
   S12S18_ThetaY_30_35__513->SetBinContent(302,0.1025641);
   S12S18_ThetaY_30_35__513->SetBinContent(303,0.2307692);
   S12S18_ThetaY_30_35__513->SetBinContent(304,0.5384615);
   S12S18_ThetaY_30_35__513->SetBinContent(305,0.4358974);
   S12S18_ThetaY_30_35__513->SetBinContent(306,0.7692308);
   S12S18_ThetaY_30_35__513->SetBinContent(307,0.8205128);
   S12S18_ThetaY_30_35__513->SetBinContent(308,0.7948718);
   S12S18_ThetaY_30_35__513->SetBinContent(309,0.6923077);
   S12S18_ThetaY_30_35__513->SetBinContent(310,0.7179487);
   S12S18_ThetaY_30_35__513->SetBinContent(311,0.7435897);
   S12S18_ThetaY_30_35__513->SetBinContent(312,0.8974359);
   S12S18_ThetaY_30_35__513->SetBinContent(313,0.7692308);
   S12S18_ThetaY_30_35__513->SetBinContent(314,0.7692308);
   S12S18_ThetaY_30_35__513->SetBinContent(315,0.7948718);
   S12S18_ThetaY_30_35__513->SetBinContent(316,1);
   S12S18_ThetaY_30_35__513->SetBinContent(317,0.4615385);
   S12S18_ThetaY_30_35__513->SetBinContent(318,0.02564103);
   S12S18_ThetaY_30_35__513->SetBinError(301,0.02564103);
   S12S18_ThetaY_30_35__513->SetBinError(302,0.05128205);
   S12S18_ThetaY_30_35__513->SetBinError(303,0.07692308);
   S12S18_ThetaY_30_35__513->SetBinError(304,0.1175019);
   S12S18_ThetaY_30_35__513->SetBinError(305,0.1057207);
   S12S18_ThetaY_30_35__513->SetBinError(306,0.1404417);
   S12S18_ThetaY_30_35__513->SetBinError(307,0.1450475);
   S12S18_ThetaY_30_35__513->SetBinError(308,0.1427632);
   S12S18_ThetaY_30_35__513->SetBinError(309,0.1332347);
   S12S18_ThetaY_30_35__513->SetBinError(310,0.1356796);
   S12S18_ThetaY_30_35__513->SetBinError(311,0.1380811);
   S12S18_ThetaY_30_35__513->SetBinError(312,0.1516944);
   S12S18_ThetaY_30_35__513->SetBinError(313,0.1404417);
   S12S18_ThetaY_30_35__513->SetBinError(314,0.1404417);
   S12S18_ThetaY_30_35__513->SetBinError(315,0.1427632);
   S12S18_ThetaY_30_35__513->SetBinError(316,0.1601282);
   S12S18_ThetaY_30_35__513->SetBinError(317,0.1087857);
   S12S18_ThetaY_30_35__513->SetBinError(318,0.02564103);
   S12S18_ThetaY_30_35__513->SetMinimum(0);
   S12S18_ThetaY_30_35__513->SetMaximum(1.169571);
   S12S18_ThetaY_30_35__513->SetEntries(413);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__513->SetLineColor(ci);
   S12S18_ThetaY_30_35__513->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__513->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__513->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__513->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__513->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__513->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__513->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__513->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__513->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__513->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__513->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__513->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__513->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__513->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__513->Draw("AE");
   
   TH1D *ThetaY_30_35__514 = new TH1D("ThetaY_30_35__514","",630,-1575,1575);
   ThetaY_30_35__514->SetBinContent(300,0.005701051);
   ThetaY_30_35__514->SetBinContent(301,0.06413683);
   ThetaY_30_35__514->SetBinContent(302,0.195261);
   ThetaY_30_35__514->SetBinContent(303,0.3855336);
   ThetaY_30_35__514->SetBinContent(304,0.6247996);
   ThetaY_30_35__514->SetBinContent(305,0.7796187);
   ThetaY_30_35__514->SetBinContent(306,0.8564048);
   ThetaY_30_35__514->SetBinContent(307,0.9358632);
   ThetaY_30_35__514->SetBinContent(308,1.005879);
   ThetaY_30_35__514->SetBinContent(309,1.017103);
   ThetaY_30_35__514->SetBinContent(310,1.063246);
   ThetaY_30_35__514->SetBinContent(311,1.020488);
   ThetaY_30_35__514->SetBinContent(312,1.02227);
   ThetaY_30_35__514->SetBinContent(313,1.008017);
   ThetaY_30_35__514->SetBinContent(314,1.030109);
   ThetaY_30_35__514->SetBinContent(315,1.02708);
   ThetaY_30_35__514->SetBinContent(316,1);
   ThetaY_30_35__514->SetBinContent(317,1.027258);
   ThetaY_30_35__514->SetBinContent(318,1.036166);
   ThetaY_30_35__514->SetBinContent(319,1.048815);
   ThetaY_30_35__514->SetBinContent(320,1.057367);
   ThetaY_30_35__514->SetBinContent(321,1.047034);
   ThetaY_30_35__514->SetBinContent(322,0.9996437);
   ThetaY_30_35__514->SetBinContent(323,1.009621);
   ThetaY_30_35__514->SetBinContent(324,0.9378229);
   ThetaY_30_35__514->SetBinContent(325,0.8704792);
   ThetaY_30_35__514->SetBinContent(326,0.7520043);
   ThetaY_30_35__514->SetBinContent(327,0.6109033);
   ThetaY_30_35__514->SetBinContent(328,0.4001425);
   ThetaY_30_35__514->SetBinContent(329,0.1893818);
   ThetaY_30_35__514->SetBinContent(330,0.06538393);
   ThetaY_30_35__514->SetBinContent(331,0.004453946);
   ThetaY_30_35__514->SetBinError(300,0.001007813);
   ThetaY_30_35__514->SetBinError(301,0.003380307);
   ThetaY_30_35__514->SetBinError(302,0.005898074);
   ThetaY_30_35__514->SetBinError(303,0.008287692);
   ThetaY_30_35__514->SetBinError(304,0.0105505);
   ThetaY_30_35__514->SetBinError(305,0.01178538);
   ThetaY_30_35__514->SetBinError(306,0.01235213);
   ThetaY_30_35__514->SetBinError(307,0.01291245);
   ThetaY_30_35__514->SetBinError(308,0.01338676);
   ThetaY_30_35__514->SetBinError(309,0.01346124);
   ThetaY_30_35__514->SetBinError(310,0.0137632);
   ThetaY_30_35__514->SetBinError(311,0.01348362);
   ThetaY_30_35__514->SetBinError(312,0.01349538);
   ThetaY_30_35__514->SetBinError(313,0.01340098);
   ThetaY_30_35__514->SetBinError(314,0.01354703);
   ThetaY_30_35__514->SetBinError(315,0.0135271);
   ThetaY_30_35__514->SetBinError(316,0.01334758);
   ThetaY_30_35__514->SetBinError(317,0.01352827);
   ThetaY_30_35__514->SetBinError(318,0.0135868);
   ThetaY_30_35__514->SetBinError(319,0.01366948);
   ThetaY_30_35__514->SetBinError(320,0.01372509);
   ThetaY_30_35__514->SetBinError(321,0.01365786);
   ThetaY_30_35__514->SetBinError(322,0.0133452);
   ThetaY_30_35__514->SetBinError(323,0.01341163);
   ThetaY_30_35__514->SetBinError(324,0.01292596);
   ThetaY_30_35__514->SetBinError(325,0.01245322);
   ThetaY_30_35__514->SetBinError(326,0.01157478);
   ThetaY_30_35__514->SetBinError(327,0.01043251);
   ThetaY_30_35__514->SetBinError(328,0.008443254);
   ThetaY_30_35__514->SetBinError(329,0.005808602);
   ThetaY_30_35__514->SetBinError(330,0.003413013);
   ThetaY_30_35__514->SetBinError(331,0.0008907892);
   ThetaY_30_35__514->SetEntries(135262);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__514->SetLineColor(ci);
   ThetaY_30_35__514->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__514->SetMarkerColor(ci);
   ThetaY_30_35__514->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__514->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__514->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__514->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__514->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__514->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__514->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__514->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__514->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__514->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__514->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__514->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__514->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__514->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__514->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__514->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__514->Draw("AEsame");
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
   
   Double_t _fx3172[32] = {
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
   Double_t _fy3172[32] = {
   0,
   0.3997863,
   0.5252667,
   0.598571,
   0.8618148,
   0.5591162,
   0.8982093,
   0.8767444,
   0.7902259,
   0.6806662,
   0.6752423,
   0.7286608,
   0.8778856,
   0.7631128,
   0.7467472,
   0.7739142,
   1,
   0.4492916,
   0.02474606,
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
   0,
   0,
   0};
   Double_t _felx3172[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3172[32] = {
   0,
   0.3308966,
   0.2517482,
   0.1961299,
   0.1870874,
   0.1345061,
   0.1635626,
   0.1546288,
   0.1415342,
   0.1304747,
   0.1271293,
   0.1348532,
   0.1481148,
   0.138899,
   0.1359127,
   0.1386051,
   0.1599779,
   0.105062,
   0.02047175,
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
   0,
   0,
   0};
   Double_t _fehx3172[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3172[32] = {
   8.522993,
   0.9235391,
   0.4166797,
   0.2741889,
   0.2329632,
   0.1715801,
   0.1964944,
   0.1846774,
   0.1695077,
   0.1582793,
   0.1536833,
   0.1624902,
   0.1755241,
   0.1668455,
   0.1632561,
   0.1659974,
   0.1879087,
   0.1330843,
   0.05692036,
   0.04501562,
   0.04465149,
   0.04509222,
   0.04723026,
   0.04676346,
   0.05034419,
   0.05423975,
   0.06278685,
   0.07729269,
   0.1180205,
   0.249478,
   0.7237907,
   10.99862};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3172,_fy3172,_felx3172,_fehx3172,_fely3172,_fehy3172);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3172 = new TH1F("Graph_Graph3172","",100,-100,100);
   Graph_Graph3172->SetMinimum(0);
   Graph_Graph3172->SetMaximum(1.5);
   Graph_Graph3172->SetDirectory(0);
   Graph_Graph3172->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3172->SetLineColor(ci);
   Graph_Graph3172->GetXaxis()->SetRange(1,100);
   Graph_Graph3172->GetXaxis()->CenterTitle(true);
   Graph_Graph3172->GetXaxis()->SetLabelFont(42);
   Graph_Graph3172->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3172->GetXaxis()->SetTitleFont(42);
   Graph_Graph3172->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3172->GetYaxis()->CenterTitle(true);
   Graph_Graph3172->GetYaxis()->SetLabelFont(42);
   Graph_Graph3172->GetYaxis()->SetTitleFont(42);
   Graph_Graph3172->GetZaxis()->SetLabelFont(42);
   Graph_Graph3172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3172->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3172);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.169571,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__515 = new TH2D("ThetaY_vs_Y_30_35__515","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__515->SetBinContent(7819,32);
   ThetaY_vs_Y_30_35__515->SetBinContent(7845,360);
   ThetaY_vs_Y_30_35__515->SetBinContent(7871,1096);
   ThetaY_vs_Y_30_35__515->SetBinContent(7897,2164);
   ThetaY_vs_Y_30_35__515->SetBinContent(7923,3507);
   ThetaY_vs_Y_30_35__515->SetBinContent(7949,4376);
   ThetaY_vs_Y_30_35__515->SetBinContent(7975,4807);
   ThetaY_vs_Y_30_35__515->SetBinContent(8001,5253);
   ThetaY_vs_Y_30_35__515->SetBinContent(8027,5646);
   ThetaY_vs_Y_30_35__515->SetBinContent(8053,5709);
   ThetaY_vs_Y_30_35__515->SetBinContent(8079,5968);
   ThetaY_vs_Y_30_35__515->SetBinContent(8105,5728);
   ThetaY_vs_Y_30_35__515->SetBinContent(8131,5738);
   ThetaY_vs_Y_30_35__515->SetBinContent(8157,5658);
   ThetaY_vs_Y_30_35__515->SetBinContent(8183,5782);
   ThetaY_vs_Y_30_35__515->SetBinContent(8209,5765);
   ThetaY_vs_Y_30_35__515->SetBinContent(8235,5613);
   ThetaY_vs_Y_30_35__515->SetBinContent(8261,5766);
   ThetaY_vs_Y_30_35__515->SetBinContent(8287,5816);
   ThetaY_vs_Y_30_35__515->SetBinContent(8313,5887);
   ThetaY_vs_Y_30_35__515->SetBinContent(8339,5935);
   ThetaY_vs_Y_30_35__515->SetBinContent(8365,5877);
   ThetaY_vs_Y_30_35__515->SetBinContent(8391,5611);
   ThetaY_vs_Y_30_35__515->SetBinContent(8417,5667);
   ThetaY_vs_Y_30_35__515->SetBinContent(8443,5264);
   ThetaY_vs_Y_30_35__515->SetBinContent(8469,4886);
   ThetaY_vs_Y_30_35__515->SetBinContent(8495,4221);
   ThetaY_vs_Y_30_35__515->SetBinContent(8521,3429);
   ThetaY_vs_Y_30_35__515->SetBinContent(8547,2246);
   ThetaY_vs_Y_30_35__515->SetBinContent(8573,1063);
   ThetaY_vs_Y_30_35__515->SetBinContent(8599,367);
   ThetaY_vs_Y_30_35__515->SetBinContent(8625,25);
   ThetaY_vs_Y_30_35__515->SetEntries(135262);
   ThetaY_vs_Y_30_35__515->SetContour(20);
   ThetaY_vs_Y_30_35__515->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__515->SetContourLevel(1,298.4);
   ThetaY_vs_Y_30_35__515->SetContourLevel(2,596.8);
   ThetaY_vs_Y_30_35__515->SetContourLevel(3,895.2);
   ThetaY_vs_Y_30_35__515->SetContourLevel(4,1193.6);
   ThetaY_vs_Y_30_35__515->SetContourLevel(5,1492);
   ThetaY_vs_Y_30_35__515->SetContourLevel(6,1790.4);
   ThetaY_vs_Y_30_35__515->SetContourLevel(7,2088.8);
   ThetaY_vs_Y_30_35__515->SetContourLevel(8,2387.2);
   ThetaY_vs_Y_30_35__515->SetContourLevel(9,2685.6);
   ThetaY_vs_Y_30_35__515->SetContourLevel(10,2984);
   ThetaY_vs_Y_30_35__515->SetContourLevel(11,3282.4);
   ThetaY_vs_Y_30_35__515->SetContourLevel(12,3580.8);
   ThetaY_vs_Y_30_35__515->SetContourLevel(13,3879.2);
   ThetaY_vs_Y_30_35__515->SetContourLevel(14,4177.6);
   ThetaY_vs_Y_30_35__515->SetContourLevel(15,4476);
   ThetaY_vs_Y_30_35__515->SetContourLevel(16,4774.4);
   ThetaY_vs_Y_30_35__515->SetContourLevel(17,5072.8);
   ThetaY_vs_Y_30_35__515->SetContourLevel(18,5371.2);
   ThetaY_vs_Y_30_35__515->SetContourLevel(19,5669.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__515->SetLineColor(ci);
   ThetaY_vs_Y_30_35__515->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__515->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__515->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__515->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__515->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__515->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__515->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__515->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__515->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__515->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__515->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__515->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__515->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__515->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__515->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_30_35","Reco vertices","lpf");
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
