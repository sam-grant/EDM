void S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.06582663,125,1.250706);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI15_mI10__771 = new TH1D("S18_ThetaY_mI15_mI10__771","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__771->SetBinContent(310,0.015625);
   S18_ThetaY_mI15_mI10__771->SetBinContent(311,0.24375);
   S18_ThetaY_mI15_mI10__771->SetBinContent(312,0.690625);
   S18_ThetaY_mI15_mI10__771->SetBinContent(313,1);
   S18_ThetaY_mI15_mI10__771->SetBinContent(314,0.96875);
   S18_ThetaY_mI15_mI10__771->SetBinContent(315,0.86875);
   S18_ThetaY_mI15_mI10__771->SetBinContent(316,0.846875);
   S18_ThetaY_mI15_mI10__771->SetBinContent(317,0.884375);
   S18_ThetaY_mI15_mI10__771->SetBinContent(318,0.8875);
   S18_ThetaY_mI15_mI10__771->SetBinContent(319,0.859375);
   S18_ThetaY_mI15_mI10__771->SetBinContent(320,0.85625);
   S18_ThetaY_mI15_mI10__771->SetBinContent(321,0.771875);
   S18_ThetaY_mI15_mI10__771->SetBinContent(322,0.5375);
   S18_ThetaY_mI15_mI10__771->SetBinContent(323,0.240625);
   S18_ThetaY_mI15_mI10__771->SetBinContent(324,0.04375);
   S18_ThetaY_mI15_mI10__771->SetBinError(310,0.006987712);
   S18_ThetaY_mI15_mI10__771->SetBinError(311,0.02759925);
   S18_ThetaY_mI15_mI10__771->SetBinError(312,0.04645646);
   S18_ThetaY_mI15_mI10__771->SetBinError(313,0.0559017);
   S18_ThetaY_mI15_mI10__771->SetBinError(314,0.0550213);
   S18_ThetaY_mI15_mI10__771->SetBinError(315,0.05210416);
   S18_ThetaY_mI15_mI10__771->SetBinError(316,0.05144399);
   S18_ThetaY_mI15_mI10__771->SetBinError(317,0.05257064);
   S18_ThetaY_mI15_mI10__771->SetBinError(318,0.05266344);
   S18_ThetaY_mI15_mI10__771->SetBinError(319,0.05182226);
   S18_ThetaY_mI15_mI10__771->SetBinError(320,0.05172795);
   S18_ThetaY_mI15_mI10__771->SetBinError(321,0.04911323);
   S18_ThetaY_mI15_mI10__771->SetBinError(322,0.04098399);
   S18_ThetaY_mI15_mI10__771->SetBinError(323,0.02742176);
   S18_ThetaY_mI15_mI10__771->SetBinError(324,0.01169268);
   S18_ThetaY_mI15_mI10__771->SetMinimum(0);
   S18_ThetaY_mI15_mI10__771->SetMaximum(1.119053);
   S18_ThetaY_mI15_mI10__771->SetEntries(3109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__771->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__771->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__771->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__771->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__771->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__771->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__771->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__771->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__771->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__771->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__771->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__771->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__771->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__771->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__771->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__771->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__772 = new TH1D("ThetaY_mI15_mI10__772","",630,-1575,1575);
   ThetaY_mI15_mI10__772->SetBinContent(305,2.442957e-05);
   ThetaY_mI15_mI10__772->SetBinContent(306,0.05115552);
   ThetaY_mI15_mI10__772->SetBinContent(307,0.3019251);
   ThetaY_mI15_mI10__772->SetBinContent(308,0.5806909);
   ThetaY_mI15_mI10__772->SetBinContent(309,0.7519177);
   ThetaY_mI15_mI10__772->SetBinContent(310,0.8729418);
   ThetaY_mI15_mI10__772->SetBinContent(311,0.9411247);
   ThetaY_mI15_mI10__772->SetBinContent(312,0.9774759);
   ThetaY_mI15_mI10__772->SetBinContent(313,1);
   ThetaY_mI15_mI10__772->SetBinContent(314,1.010871);
   ThetaY_mI15_mI10__772->SetBinContent(315,1.009992);
   ThetaY_mI15_mI10__772->SetBinContent(316,1.004861);
   ThetaY_mI15_mI10__772->SetBinContent(317,1.017321);
   ThetaY_mI15_mI10__772->SetBinContent(318,1.003567);
   ThetaY_mI15_mI10__772->SetBinContent(319,0.9794303);
   ThetaY_mI15_mI10__772->SetBinContent(320,0.9395612);
   ThetaY_mI15_mI10__772->SetBinContent(321,0.8623638);
   ThetaY_mI15_mI10__772->SetBinContent(322,0.7544095);
   ThetaY_mI15_mI10__772->SetBinContent(323,0.5826208);
   ThetaY_mI15_mI10__772->SetBinContent(324,0.3001417);
   ThetaY_mI15_mI10__772->SetBinContent(325,0.05098451);
   ThetaY_mI15_mI10__772->SetBinContent(326,9.771828e-05);
   ThetaY_mI15_mI10__772->SetBinError(305,2.442957e-05);
   ThetaY_mI15_mI10__772->SetBinError(306,0.001117903);
   ThetaY_mI15_mI10__772->SetBinError(307,0.002715861);
   ThetaY_mI15_mI10__772->SetBinError(308,0.003766434);
   ThetaY_mI15_mI10__772->SetBinError(309,0.00428591);
   ThetaY_mI15_mI10__772->SetBinError(310,0.004617964);
   ThetaY_mI15_mI10__772->SetBinError(311,0.004794922);
   ThetaY_mI15_mI10__772->SetBinError(312,0.004886647);
   ThetaY_mI15_mI10__772->SetBinError(313,0.004942628);
   ThetaY_mI15_mI10__772->SetBinError(314,0.004969421);
   ThetaY_mI15_mI10__772->SetBinError(315,0.004967259);
   ThetaY_mI15_mI10__772->SetBinError(316,0.004954627);
   ThetaY_mI15_mI10__772->SetBinError(317,0.004985249);
   ThetaY_mI15_mI10__772->SetBinError(318,0.004951434);
   ThetaY_mI15_mI10__772->SetBinError(319,0.004891529);
   ThetaY_mI15_mI10__772->SetBinError(320,0.004790937);
   ThetaY_mI15_mI10__772->SetBinError(321,0.004589899);
   ThetaY_mI15_mI10__772->SetBinError(322,0.004293006);
   ThetaY_mI15_mI10__772->SetBinError(323,0.003772688);
   ThetaY_mI15_mI10__772->SetBinError(324,0.002707828);
   ThetaY_mI15_mI10__772->SetBinError(325,0.001116033);
   ThetaY_mI15_mI10__772->SetBinError(326,4.885914e-05);
   ThetaY_mI15_mI10__772->SetEntries(613743);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__772->SetLineColor(ci);
   ThetaY_mI15_mI10__772->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__772->SetMarkerColor(ci);
   ThetaY_mI15_mI10__772->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__772->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__772->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__772->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__772->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__772->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__772->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__772->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__772->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__772->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__772->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__772->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__772->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__772->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__772->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__772->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__772->Draw("AEsame");
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
   
   Double_t _fx3258[22] = {
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
   Double_t _fy3258[22] = {
   0,
   0,
   0,
   0,
   0,
   0.01789925,
   0.2589986,
   0.7065391,
   1,
   0.9583318,
   0.8601556,
   0.8427778,
   0.8693179,
   0.8843458,
   0.8774233,
   0.9113296,
   0.8950689,
   0.7124777,
   0.4130045,
   0.1457645,
   0,
   0};
   Double_t _felx3258[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3258[22] = {
   0,
   0,
   0,
   0,
   0,
   0.007731818,
   0.02929206,
   0.0476214,
   0.0560898,
   0.054603,
   0.05173013,
   0.05133119,
   0.05181965,
   0.05262573,
   0.05305885,
   0.0552168,
   0.0571113,
   0.05442316,
   0.04703861,
   0.03850753,
   0,
   0};
   Double_t _fehx3258[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3258[22] = {
   678.3499,
   0.1125142,
   0.01905646,
   0.00990788,
   0.007651588,
   0.01211016,
   0.03280909,
   0.05094591,
   0.05932915,
   0.05780782,
   0.05494018,
   0.05455839,
   0.05500598,
   0.05585597,
   0.05637008,
   0.0586697,
   0.06087879,
   0.05874993,
   0.05272956,
   0.05033125,
   0.1128918,
   74.76578};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3258,_fy3258,_felx3258,_fehx3258,_fely3258,_fehy3258);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3258 = new TH1F("Graph_Graph3258","",100,-100,100);
   Graph_Graph3258->SetMinimum(0);
   Graph_Graph3258->SetMaximum(1.5);
   Graph_Graph3258->SetDirectory(0);
   Graph_Graph3258->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3258->SetLineColor(ci);
   Graph_Graph3258->GetXaxis()->SetRange(1,100);
   Graph_Graph3258->GetXaxis()->CenterTitle(true);
   Graph_Graph3258->GetXaxis()->SetLabelFont(42);
   Graph_Graph3258->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3258->GetXaxis()->SetTitleFont(42);
   Graph_Graph3258->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3258->GetYaxis()->CenterTitle(true);
   Graph_Graph3258->GetYaxis()->SetLabelFont(42);
   Graph_Graph3258->GetYaxis()->SetTitleFont(42);
   Graph_Graph3258->GetZaxis()->SetLabelFont(42);
   Graph_Graph3258->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3258->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3258);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.119053,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__773 = new TH2D("ThetaY_vs_Y_mI15_mI10__773","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(7940,1);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(7966,2094);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(7992,12359);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8018,23770);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8044,30779);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8070,35733);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8096,38524);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8122,40012);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8148,40934);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8174,41379);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8200,41343);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8226,41133);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8252,41643);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8278,41080);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8304,40092);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8330,38460);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8356,35300);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8382,30881);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8408,23849);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8434,12286);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8460,2087);
   ThetaY_vs_Y_mI15_mI10__773->SetBinContent(8486,4);
   ThetaY_vs_Y_mI15_mI10__773->SetEntries(613743);
   ThetaY_vs_Y_mI15_mI10__773->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(1,2082.15);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(2,4164.3);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(3,6246.45);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(4,8328.6);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(5,10410.75);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(6,12492.9);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(7,14575.05);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(8,16657.2);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(9,18739.35);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(10,20821.5);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(11,22903.65);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(12,24985.8);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(13,27067.95);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(14,29150.1);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(15,31232.25);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(16,33314.4);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(17,35396.55);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(18,37478.7);
   ThetaY_vs_Y_mI15_mI10__773->SetContourLevel(19,39560.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__773->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__773->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__773->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__773->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__773->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__773->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__773->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__773->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__773->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__773->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__773->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__773->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__773->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__773->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__773->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__773->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-15_-10","Reco vertices","lpf");
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
