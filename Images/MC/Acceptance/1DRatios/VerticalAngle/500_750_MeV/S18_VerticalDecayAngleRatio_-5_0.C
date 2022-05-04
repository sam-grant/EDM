void S18_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06599399,125,1.253886);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__435 = new TH1D("S18_ThetaY_mI5_0__435","",630,-1575,1575);
   S18_ThetaY_mI5_0__435->SetBinContent(306,0.0078125);
   S18_ThetaY_mI5_0__435->SetBinContent(307,0.1015625);
   S18_ThetaY_mI5_0__435->SetBinContent(308,0.296875);
   S18_ThetaY_mI5_0__435->SetBinContent(309,0.7421875);
   S18_ThetaY_mI5_0__435->SetBinContent(310,0.96875);
   S18_ThetaY_mI5_0__435->SetBinContent(311,0.8828125);
   S18_ThetaY_mI5_0__435->SetBinContent(312,0.8203125);
   S18_ThetaY_mI5_0__435->SetBinContent(313,0.9453125);
   S18_ThetaY_mI5_0__435->SetBinContent(314,0.859375);
   S18_ThetaY_mI5_0__435->SetBinContent(315,1);
   S18_ThetaY_mI5_0__435->SetBinContent(316,0.9375);
   S18_ThetaY_mI5_0__435->SetBinContent(317,0.875);
   S18_ThetaY_mI5_0__435->SetBinContent(318,0.8671875);
   S18_ThetaY_mI5_0__435->SetBinContent(319,0.9765625);
   S18_ThetaY_mI5_0__435->SetBinContent(320,0.7890625);
   S18_ThetaY_mI5_0__435->SetBinContent(321,0.8984375);
   S18_ThetaY_mI5_0__435->SetBinContent(322,0.875);
   S18_ThetaY_mI5_0__435->SetBinContent(323,0.765625);
   S18_ThetaY_mI5_0__435->SetBinContent(324,0.390625);
   S18_ThetaY_mI5_0__435->SetBinContent(325,0.140625);
   S18_ThetaY_mI5_0__435->SetBinContent(326,0.03125);
   S18_ThetaY_mI5_0__435->SetBinContent(327,0.015625);
   S18_ThetaY_mI5_0__435->SetBinError(306,0.0078125);
   S18_ThetaY_mI5_0__435->SetBinError(307,0.02816837);
   S18_ThetaY_mI5_0__435->SetBinError(308,0.04815948);
   S18_ThetaY_mI5_0__435->SetBinError(309,0.07614683);
   S18_ThetaY_mI5_0__435->SetBinError(310,0.08699632);
   S18_ThetaY_mI5_0__435->SetBinError(311,0.08304801);
   S18_ThetaY_mI5_0__435->SetBinError(312,0.0800543);
   S18_ThetaY_mI5_0__435->SetBinError(313,0.0859375);
   S18_ThetaY_mI5_0__435->SetBinError(314,0.08193819);
   S18_ThetaY_mI5_0__435->SetBinError(315,0.08838835);
   S18_ThetaY_mI5_0__435->SetBinError(316,0.08558165);
   S18_ThetaY_mI5_0__435->SetBinError(317,0.08267973);
   S18_ThetaY_mI5_0__435->SetBinError(318,0.08230979);
   S18_ThetaY_mI5_0__435->SetBinError(319,0.08734641);
   S18_ThetaY_mI5_0__435->SetBinError(320,0.07851465);
   S18_ThetaY_mI5_0__435->SetBinError(321,0.08377973);
   S18_ThetaY_mI5_0__435->SetBinError(322,0.08267973);
   S18_ThetaY_mI5_0__435->SetBinError(323,0.0773398);
   S18_ThetaY_mI5_0__435->SetBinError(324,0.05524272);
   S18_ThetaY_mI5_0__435->SetBinError(325,0.03314563);
   S18_ThetaY_mI5_0__435->SetBinError(326,0.015625);
   S18_ThetaY_mI5_0__435->SetBinError(327,0.01104854);
   S18_ThetaY_mI5_0__435->SetMinimum(0);
   S18_ThetaY_mI5_0__435->SetMaximum(1.121898);
   S18_ThetaY_mI5_0__435->SetEntries(1816);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__435->SetLineColor(ci);
   S18_ThetaY_mI5_0__435->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__435->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__435->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__435->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__435->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__435->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__435->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__435->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__435->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__435->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__435->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__435->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__435->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__435->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__435->Draw("AE");
   
   TH1D *ThetaY_mI5_0__436 = new TH1D("ThetaY_mI5_0__436","",630,-1575,1575);
   ThetaY_mI5_0__436->SetBinContent(300,0.005207953);
   ThetaY_mI5_0__436->SetBinContent(301,0.06614587);
   ThetaY_mI5_0__436->SetBinContent(302,0.195931);
   ThetaY_mI5_0__436->SetBinContent(303,0.3955854);
   ThetaY_mI5_0__436->SetBinContent(304,0.6082354);
   ThetaY_mI5_0__436->SetBinContent(305,0.7608235);
   ThetaY_mI5_0__436->SetBinContent(306,0.8533499);
   ThetaY_mI5_0__436->SetBinContent(307,0.9302524);
   ThetaY_mI5_0__436->SetBinContent(308,0.974374);
   ThetaY_mI5_0__436->SetBinContent(309,0.9969093);
   ThetaY_mI5_0__436->SetBinContent(310,1.016451);
   ThetaY_mI5_0__436->SetBinContent(311,1.017352);
   ThetaY_mI5_0__436->SetBinContent(312,1.00365);
   ThetaY_mI5_0__436->SetBinContent(313,1.011511);
   ThetaY_mI5_0__436->SetBinContent(314,0.9973717);
   ThetaY_mI5_0__436->SetBinContent(315,1);
   ThetaY_mI5_0__436->SetBinContent(316,0.9963739);
   ThetaY_mI5_0__436->SetBinContent(317,1.007471);
   ThetaY_mI5_0__436->SetBinContent(318,1.014796);
   ThetaY_mI5_0__436->SetBinContent(319,1.012071);
   ThetaY_mI5_0__436->SetBinContent(320,1.019907);
   ThetaY_mI5_0__436->SetBinContent(321,1.00365);
   ThetaY_mI5_0__436->SetBinContent(322,1.006108);
   ThetaY_mI5_0__436->SetBinContent(323,0.9787058);
   ThetaY_mI5_0__436->SetBinContent(324,0.9184493);
   ThetaY_mI5_0__436->SetBinContent(325,0.8586552);
   ThetaY_mI5_0__436->SetBinContent(326,0.7609209);
   ThetaY_mI5_0__436->SetBinContent(327,0.6116911);
   ThetaY_mI5_0__436->SetBinContent(328,0.3900124);
   ThetaY_mI5_0__436->SetBinContent(329,0.1927673);
   ThetaY_mI5_0__436->SetBinContent(330,0.06317685);
   ThetaY_mI5_0__436->SetBinContent(331,0.005694678);
   ThetaY_mI5_0__436->SetBinError(300,0.0003560083);
   ThetaY_mI5_0__436->SetBinError(301,0.001268756);
   ThetaY_mI5_0__436->SetBinError(302,0.002183626);
   ThetaY_mI5_0__436->SetBinError(303,0.00310275);
   ThetaY_mI5_0__436->SetBinError(304,0.003847357);
   ThetaY_mI5_0__436->SetBinError(305,0.004302973);
   ThetaY_mI5_0__436->SetBinError(306,0.004557117);
   ThetaY_mI5_0__436->SetBinError(307,0.004758028);
   ThetaY_mI5_0__436->SetBinError(308,0.004869557);
   ThetaY_mI5_0__436->SetBinError(309,0.004925547);
   ThetaY_mI5_0__436->SetBinError(310,0.004973589);
   ThetaY_mI5_0__436->SetBinError(311,0.004975792);
   ThetaY_mI5_0__436->SetBinError(312,0.004942172);
   ThetaY_mI5_0__436->SetBinError(313,0.004961488);
   ThetaY_mI5_0__436->SetBinError(314,0.004926689);
   ThetaY_mI5_0__436->SetBinError(315,0.004933176);
   ThetaY_mI5_0__436->SetBinError(316,0.004924224);
   ThetaY_mI5_0__436->SetBinError(317,0.004951571);
   ThetaY_mI5_0__436->SetBinError(318,0.004969539);
   ThetaY_mI5_0__436->SetBinError(319,0.004962861);
   ThetaY_mI5_0__436->SetBinError(320,0.004982037);
   ThetaY_mI5_0__436->SetBinError(321,0.004942172);
   ThetaY_mI5_0__436->SetBinError(322,0.00494822);
   ThetaY_mI5_0__436->SetBinError(323,0.00488037);
   ThetaY_mI5_0__436->SetBinError(324,0.004727747);
   ThetaY_mI5_0__436->SetBinError(325,0.004571261);
   ThetaY_mI5_0__436->SetBinError(326,0.004303248);
   ThetaY_mI5_0__436->SetBinError(327,0.003858271);
   ThetaY_mI5_0__436->SetBinError(328,0.003080817);
   ThetaY_mI5_0__436->SetBinError(329,0.002165924);
   ThetaY_mI5_0__436->SetBinError(330,0.001239954);
   ThetaY_mI5_0__436->SetBinError(331,0.0003722727);
   ThetaY_mI5_0__436->SetEntries(972772);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__436->SetLineColor(ci);
   ThetaY_mI5_0__436->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__436->SetMarkerColor(ci);
   ThetaY_mI5_0__436->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__436->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__436->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__436->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__436->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__436->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__436->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__436->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__436->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__436->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__436->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__436->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__436->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__436->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__436->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__436->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__436->Draw("AEsame");
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
   
   Double_t _fx3146[32] = {
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
   Double_t _fy3146[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.009155096,
   0.1091774,
   0.3046828,
   0.7444885,
   0.9530708,
   0.8677554,
   0.8173289,
   0.9345548,
   0.8616397,
   1,
   0.9409118,
   0.8685112,
   0.8545433,
   0.9649152,
   0.7736612,
   0.8951697,
   0.8696876,
   0.7822831,
   0.4253093,
   0.1637735,
   0.04106866,
   0.02554394,
   0,
   0,
   0,
   0};
   Double_t _felx3146[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3146[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.00757356,
   0.02989129,
   0.04923035,
   0.07633572,
   0.08559855,
   0.08161978,
   0.07973632,
   0.08496442,
   0.08213812,
   0.08840912,
   0.08589789,
   0.08205374,
   0.08109411,
   0.08631751,
   0.0769462,
   0.08346865,
   0.08216503,
   0.0789826,
   0.05998489,
   0.03824935,
   0.01965583,
   0.01649943,
   0,
   0,
   0,
   0};
   Double_t _fehx3146[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3146[32] = {
   2.773648,
   0.217517,
   0.0734168,
   0.03636079,
   0.02364794,
   0.01890505,
   0.02105338,
   0.03946057,
   0.05791025,
   0.08459689,
   0.09365694,
   0.08968528,
   0.08792436,
   0.09306598,
   0.09037008,
   0.0965958,
   0.09412422,
   0.0902,
   0.08918284,
   0.0944097,
   0.08500993,
   0.09164179,
   0.09032237,
   0.08739215,
   0.06910828,
   0.04842934,
   0.03247623,
   0.03369377,
   0.03688038,
   0.07462186,
   0.227743,
   2.53565};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3146,_fy3146,_felx3146,_fehx3146,_fely3146,_fehy3146);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3146 = new TH1F("Graph_Graph3146","",100,-100,100);
   Graph_Graph3146->SetMinimum(0);
   Graph_Graph3146->SetMaximum(1.5);
   Graph_Graph3146->SetDirectory(0);
   Graph_Graph3146->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3146->SetLineColor(ci);
   Graph_Graph3146->GetXaxis()->SetRange(1,100);
   Graph_Graph3146->GetXaxis()->CenterTitle(true);
   Graph_Graph3146->GetXaxis()->SetLabelFont(42);
   Graph_Graph3146->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3146->GetXaxis()->SetTitleFont(42);
   Graph_Graph3146->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3146->GetYaxis()->CenterTitle(true);
   Graph_Graph3146->GetYaxis()->SetLabelFont(42);
   Graph_Graph3146->GetYaxis()->SetTitleFont(42);
   Graph_Graph3146->GetZaxis()->SetLabelFont(42);
   Graph_Graph3146->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3146->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3146);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.121898,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__437 = new TH2D("ThetaY_vs_Y_mI5_0__437","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7812,214);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7838,2718);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7864,8051);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7890,16255);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7916,24993);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7942,31263);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7968,35065);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(7994,38225);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8020,40038);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8046,40964);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8072,41767);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8098,41804);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8124,41241);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8150,41564);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8176,40983);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8202,41091);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8228,40942);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8254,41398);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8280,41699);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8306,41587);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8332,41909);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8358,41241);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8384,41342);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8410,40216);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8436,37740);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8462,35283);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8488,31267);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8514,25135);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8540,16026);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8566,7921);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8592,2596);
   ThetaY_vs_Y_mI5_0__437->SetBinContent(8618,234);
   ThetaY_vs_Y_mI5_0__437->SetEntries(972772);
   ThetaY_vs_Y_mI5_0__437->SetContour(20);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(1,2095.45);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(2,4190.9);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(3,6286.35);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(4,8381.8);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(5,10477.25);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(6,12572.7);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(7,14668.15);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(8,16763.6);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(9,18859.05);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(10,20954.5);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(11,23049.95);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(12,25145.4);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(13,27240.85);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(14,29336.3);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(15,31431.75);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(16,33527.2);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(17,35622.65);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(18,37718.1);
   ThetaY_vs_Y_mI5_0__437->SetContourLevel(19,39813.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__437->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__437->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__437->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__437->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__437->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__437->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__437->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__437->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__437->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__437->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__437->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__437->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__437->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__437->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__437->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__437->Draw("COL");
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
