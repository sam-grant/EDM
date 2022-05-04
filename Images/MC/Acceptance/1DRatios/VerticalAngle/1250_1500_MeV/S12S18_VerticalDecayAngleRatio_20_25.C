void S12S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-10.61605,125,201.7049);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_20_25__1020 = new TH1D("S12S18_ThetaY_20_25__1020","",630,-1575,1575);
   S12S18_ThetaY_20_25__1020->SetBinContent(307,1);
   S12S18_ThetaY_20_25__1020->SetBinContent(308,19.5);
   S12S18_ThetaY_20_25__1020->SetBinContent(309,78.5);
   S12S18_ThetaY_20_25__1020->SetBinContent(310,113.5);
   S12S18_ThetaY_20_25__1020->SetBinContent(311,135);
   S12S18_ThetaY_20_25__1020->SetBinContent(312,135);
   S12S18_ThetaY_20_25__1020->SetBinContent(313,137);
   S12S18_ThetaY_20_25__1020->SetBinContent(314,137.5);
   S12S18_ThetaY_20_25__1020->SetBinContent(315,141.5);
   S12S18_ThetaY_20_25__1020->SetBinContent(316,138.5);
   S12S18_ThetaY_20_25__1020->SetBinContent(317,130);
   S12S18_ThetaY_20_25__1020->SetBinContent(318,41);
   S12S18_ThetaY_20_25__1020->SetBinContent(319,1);
   S12S18_ThetaY_20_25__1020->SetBinError(307,0.7071068);
   S12S18_ThetaY_20_25__1020->SetBinError(308,3.122499);
   S12S18_ThetaY_20_25__1020->SetBinError(309,6.264982);
   S12S18_ThetaY_20_25__1020->SetBinError(310,7.53326);
   S12S18_ThetaY_20_25__1020->SetBinError(311,8.215838);
   S12S18_ThetaY_20_25__1020->SetBinError(312,8.215838);
   S12S18_ThetaY_20_25__1020->SetBinError(313,8.276473);
   S12S18_ThetaY_20_25__1020->SetBinError(314,8.291562);
   S12S18_ThetaY_20_25__1020->SetBinError(315,8.411302);
   S12S18_ThetaY_20_25__1020->SetBinError(316,8.321658);
   S12S18_ThetaY_20_25__1020->SetBinError(317,8.062258);
   S12S18_ThetaY_20_25__1020->SetBinError(318,4.527693);
   S12S18_ThetaY_20_25__1020->SetBinError(319,0.7071068);
   S12S18_ThetaY_20_25__1020->SetMinimum(0);
   S12S18_ThetaY_20_25__1020->SetMaximum(180.4728);
   S12S18_ThetaY_20_25__1020->SetEntries(2418);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1020->SetLineColor(ci);
   S12S18_ThetaY_20_25__1020->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__1020->SetMarkerColor(ci);
   S12S18_ThetaY_20_25__1020->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_20_25__1020->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_20_25__1020->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1020->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1020->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1020->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_20_25__1020->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_20_25__1020->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1020->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1020->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__1020->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__1020->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__1020->Draw("AE");
   
   TH1D *ThetaY_20_25__1021 = new TH1D("ThetaY_20_25__1021","",630,-1575,1575);
   ThetaY_20_25__1021->SetBinContent(307,1);
   ThetaY_20_25__1021->SetBinContent(308,29.16912);
   ThetaY_20_25__1021->SetBinContent(309,82.45588);
   ThetaY_20_25__1021->SetBinContent(310,117.5074);
   ThetaY_20_25__1021->SetBinContent(311,136.9926);
   ThetaY_20_25__1021->SetBinContent(312,149.3529);
   ThetaY_20_25__1021->SetBinContent(313,159.3603);
   ThetaY_20_25__1021->SetBinContent(314,160.2868);
   ThetaY_20_25__1021->SetBinContent(315,163.7647);
   ThetaY_20_25__1021->SetBinContent(316,164.0662);
   ThetaY_20_25__1021->SetBinContent(317,162.2206);
   ThetaY_20_25__1021->SetBinContent(318,155.5882);
   ThetaY_20_25__1021->SetBinContent(319,151.0074);
   ThetaY_20_25__1021->SetBinContent(320,138.0441);
   ThetaY_20_25__1021->SetBinContent(321,116.0147);
   ThetaY_20_25__1021->SetBinContent(322,82.73529);
   ThetaY_20_25__1021->SetBinContent(323,29.35294);
   ThetaY_20_25__1021->SetBinContent(324,0.9044118);
   ThetaY_20_25__1021->SetBinError(307,0.08574929);
   ThetaY_20_25__1021->SetBinError(308,0.4631186);
   ThetaY_20_25__1021->SetBinError(309,0.7786483);
   ThetaY_20_25__1021->SetBinError(310,0.9295293);
   ThetaY_20_25__1021->SetBinError(311,1.003643);
   ThetaY_20_25__1021->SetBinError(312,1.047942);
   ThetaY_20_25__1021->SetBinError(313,1.082482);
   ThetaY_20_25__1021->SetBinError(314,1.085624);
   ThetaY_20_25__1021->SetBinError(315,1.097339);
   ThetaY_20_25__1021->SetBinError(316,1.098348);
   ThetaY_20_25__1021->SetBinError(317,1.092153);
   ThetaY_20_25__1021->SetBinError(318,1.069594);
   ThetaY_20_25__1021->SetBinError(319,1.053731);
   ThetaY_20_25__1021->SetBinError(320,1.007487);
   ThetaY_20_25__1021->SetBinError(321,0.9236067);
   ThetaY_20_25__1021->SetBinError(322,0.7799665);
   ThetaY_20_25__1021->SetBinError(323,0.4645756);
   ThetaY_20_25__1021->SetBinError(324,0.08154806);
   ThetaY_20_25__1021->SetEntries(271976);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1021->SetLineColor(ci);
   ThetaY_20_25__1021->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1021->SetMarkerColor(ci);
   ThetaY_20_25__1021->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1021->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1021->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1021->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1021->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1021->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1021->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1021->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1021->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1021->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1021->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1021->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1021->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1021->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1021->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1021->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1021->Draw("AEsame");
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
   
   Double_t _fx3341[18] = {
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
   42.5};
   Double_t _fy3341[18] = {
   1,
   0.6685153,
   0.9520243,
   0.965897,
   0.9854544,
   0.9038992,
   0.8596872,
   0.8578375,
   0.8640445,
   0.8441716,
   0.8013779,
   0.2635161,
   0.006622194,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3341[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3341[18] = {
   0.6488638,
   0.1070969,
   0.07642498,
   0.06451301,
   0.06036686,
   0.05533834,
   0.0522298,
   0.05202201,
   0.05165574,
   0.0510033,
   0.04995809,
   0.02909658,
   0.004277454,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3341[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3341[18] = {
   1.341503,
   0.1258333,
   0.08282844,
   0.06897718,
   0.06418661,
   0.05883751,
   0.05550624,
   0.05527923,
   0.05484272,
   0.05418447,
   0.05317642,
   0.032503,
   0.008735195,
   0.006668563,
   0.007934895,
   0.01112689,
   0.03136732,
   1.025456};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3341,_fy3341,_felx3341,_fehx3341,_fely3341,_fehy3341);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3341 = new TH1F("Graph_Graph3341","",100,-100,100);
   Graph_Graph3341->SetMinimum(0);
   Graph_Graph3341->SetMaximum(1.5);
   Graph_Graph3341->SetDirectory(0);
   Graph_Graph3341->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3341->SetLineColor(ci);
   Graph_Graph3341->GetXaxis()->SetRange(1,100);
   Graph_Graph3341->GetXaxis()->CenterTitle(true);
   Graph_Graph3341->GetXaxis()->SetLabelFont(42);
   Graph_Graph3341->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3341->GetXaxis()->SetTitleFont(42);
   Graph_Graph3341->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3341->GetYaxis()->CenterTitle(true);
   Graph_Graph3341->GetYaxis()->SetLabelFont(42);
   Graph_Graph3341->GetYaxis()->SetTitleFont(42);
   Graph_Graph3341->GetZaxis()->SetLabelFont(42);
   Graph_Graph3341->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3341->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3341);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,180.4728,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1022 = new TH2D("ThetaY_vs_Y_20_25__1022","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1022->SetBinContent(7999,136);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8025,3967);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8051,11214);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8077,15981);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8103,18631);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8129,20312);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8155,21673);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8181,21799);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8207,22272);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8233,22313);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8259,22062);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8285,21160);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8311,20537);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8337,18774);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8363,15778);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8389,11252);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8415,3992);
   ThetaY_vs_Y_20_25__1022->SetBinContent(8441,123);
   ThetaY_vs_Y_20_25__1022->SetEntries(271976);
   ThetaY_vs_Y_20_25__1022->SetContour(20);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(1,1115.65);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(2,2231.3);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(3,3346.95);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(4,4462.6);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(5,5578.25);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(6,6693.9);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(7,7809.55);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(8,8925.2);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(9,10040.85);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(10,11156.5);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(11,12272.15);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(12,13387.8);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(13,14503.45);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(14,15619.1);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(15,16734.75);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(16,17850.4);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(17,18966.05);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(18,20081.7);
   ThetaY_vs_Y_20_25__1022->SetContourLevel(19,21197.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1022->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1022->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1022->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1022->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1022->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1022->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1022->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1022->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1022->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1022->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1022->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1022->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1022->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1022->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1022->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1022->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_20_25","Reco vertices","lpf");
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
