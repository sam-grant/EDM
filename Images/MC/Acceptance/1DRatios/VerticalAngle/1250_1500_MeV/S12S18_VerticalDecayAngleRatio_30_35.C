void S12S18_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.0658815,125,1.251748);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_30_35__1026 = new TH1D("S12S18_ThetaY_30_35__1026","",630,-1575,1575);
   S12S18_ThetaY_30_35__1026->SetBinContent(308,0.1221374);
   S12S18_ThetaY_30_35__1026->SetBinContent(309,0.5114504);
   S12S18_ThetaY_30_35__1026->SetBinContent(310,0.6946565);
   S12S18_ThetaY_30_35__1026->SetBinContent(311,0.7251908);
   S12S18_ThetaY_30_35__1026->SetBinContent(312,0.8167939);
   S12S18_ThetaY_30_35__1026->SetBinContent(313,0.8015267);
   S12S18_ThetaY_30_35__1026->SetBinContent(314,1);
   S12S18_ThetaY_30_35__1026->SetBinContent(315,0.8625954);
   S12S18_ThetaY_30_35__1026->SetBinContent(316,0.7709924);
   S12S18_ThetaY_30_35__1026->SetBinContent(317,0.09923664);
   S12S18_ThetaY_30_35__1026->SetBinError(308,0.03053435);
   S12S18_ThetaY_30_35__1026->SetBinError(309,0.06248361);
   S12S18_ThetaY_30_35__1026->SetBinError(310,0.07281979);
   S12S18_ThetaY_30_35__1026->SetBinError(311,0.07440301);
   S12S18_ThetaY_30_35__1026->SetBinError(312,0.07896245);
   S12S18_ThetaY_30_35__1026->SetBinError(313,0.078221);
   S12S18_ThetaY_30_35__1026->SetBinError(314,0.08737041);
   S12S18_ThetaY_30_35__1026->SetBinError(315,0.08114615);
   S12S18_ThetaY_30_35__1026->SetBinError(316,0.07671661);
   S12S18_ThetaY_30_35__1026->SetBinError(317,0.02752329);
   S12S18_ThetaY_30_35__1026->SetMinimum(0);
   S12S18_ThetaY_30_35__1026->SetMaximum(1.119985);
   S12S18_ThetaY_30_35__1026->SetEntries(839);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1026->SetLineColor(ci);
   S12S18_ThetaY_30_35__1026->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__1026->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__1026->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__1026->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__1026->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1026->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1026->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1026->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__1026->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__1026->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1026->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1026->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__1026->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__1026->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__1026->Draw("AE");
   
   TH1D *ThetaY_30_35__1027 = new TH1D("ThetaY_30_35__1027","",630,-1575,1575);
   ThetaY_30_35__1027->SetBinContent(307,0.004723837);
   ThetaY_30_35__1027->SetBinContent(308,0.1819283);
   ThetaY_30_35__1027->SetBinContent(309,0.5170785);
   ThetaY_30_35__1027->SetBinContent(310,0.7209302);
   ThetaY_30_35__1027->SetBinContent(311,0.8235223);
   ThetaY_30_35__1027->SetBinContent(312,0.9375);
   ThetaY_30_35__1027->SetBinContent(313,0.9781977);
   ThetaY_30_35__1027->SetBinContent(314,1);
   ThetaY_30_35__1027->SetBinContent(315,1.009932);
   ThetaY_30_35__1027->SetBinContent(316,1.009205);
   ThetaY_30_35__1027->SetBinContent(317,1.018169);
   ThetaY_30_35__1027->SetBinContent(318,0.9773498);
   ThetaY_30_35__1027->SetBinContent(319,0.9234496);
   ThetaY_30_35__1027->SetBinContent(320,0.8502907);
   ThetaY_30_35__1027->SetBinContent(321,0.7077277);
   ThetaY_30_35__1027->SetBinContent(322,0.4995155);
   ThetaY_30_35__1027->SetBinContent(323,0.1785368);
   ThetaY_30_35__1027->SetBinContent(324,0.005450581);
   ThetaY_30_35__1027->SetBinError(307,0.0007564193);
   ThetaY_30_35__1027->SetBinError(308,0.00469424);
   ThetaY_30_35__1027->SetBinError(309,0.007913952);
   ThetaY_30_35__1027->SetBinError(310,0.009344623);
   ThetaY_30_35__1027->SetBinError(311,0.009987409);
   ThetaY_30_35__1027->SetBinError(312,0.01065616);
   ThetaY_30_35__1027->SetBinError(313,0.010885);
   ThetaY_30_35__1027->SetBinError(314,0.01100564);
   ThetaY_30_35__1027->SetBinError(315,0.01106016);
   ThetaY_30_35__1027->SetBinError(316,0.01105618);
   ThetaY_30_35__1027->SetBinError(317,0.01110516);
   ThetaY_30_35__1027->SetBinError(318,0.01088028);
   ThetaY_30_35__1027->SetBinError(319,0.01057601);
   ThetaY_30_35__1027->SetBinError(320,0.01014843);
   ThetaY_30_35__1027->SetBinError(321,0.009258663);
   ThetaY_30_35__1027->SetBinError(322,0.007778389);
   ThetaY_30_35__1027->SetBinError(323,0.00465028);
   ThetaY_30_35__1027->SetBinError(324,0.0008125247);
   ThetaY_30_35__1027->SetEntries(101908);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1027->SetLineColor(ci);
   ThetaY_30_35__1027->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1027->SetMarkerColor(ci);
   ThetaY_30_35__1027->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1027->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1027->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1027->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1027->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1027->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1027->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1027->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1027->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1027->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1027->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1027->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1027->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1027->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1027->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1027->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1027->Draw("AEsame");
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
   
   Double_t _fx3343[18] = {
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
   Double_t _fy3343[18] = {
   0,
   0.6713491,
   0.9891156,
   0.9635558,
   0.8805965,
   0.8712468,
   0.8193914,
   1,
   0.8541122,
   0.7639598,
   0.09746582,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3343[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3343[18] = {
   0,
   0.1668978,
   0.1214659,
   0.1015817,
   0.09080945,
   0.08466879,
   0.08034939,
   0.08794315,
   0.0807662,
   0.07634495,
   0.0266998,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3343[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3343[18] = {
   3.046377,
   0.2147771,
   0.1374167,
   0.1129195,
   0.1007093,
   0.09333813,
   0.08865425,
   0.09605127,
   0.08880099,
   0.0843944,
   0.03525652,
   0.01438093,
   0.01522043,
   0.01653016,
   0.01986048,
   0.02814074,
   0.07876459,
   2.631836};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3343,_fy3343,_felx3343,_fehx3343,_fely3343,_fehy3343);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3343 = new TH1F("Graph_Graph3343","",100,-100,100);
   Graph_Graph3343->SetMinimum(0);
   Graph_Graph3343->SetMaximum(1.5);
   Graph_Graph3343->SetDirectory(0);
   Graph_Graph3343->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3343->SetLineColor(ci);
   Graph_Graph3343->GetXaxis()->SetRange(1,100);
   Graph_Graph3343->GetXaxis()->CenterTitle(true);
   Graph_Graph3343->GetXaxis()->SetLabelFont(42);
   Graph_Graph3343->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3343->GetXaxis()->SetTitleFont(42);
   Graph_Graph3343->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3343->GetYaxis()->CenterTitle(true);
   Graph_Graph3343->GetYaxis()->SetLabelFont(42);
   Graph_Graph3343->GetYaxis()->SetTitleFont(42);
   Graph_Graph3343->GetZaxis()->SetLabelFont(42);
   Graph_Graph3343->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3343->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3343);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.119985,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1028 = new TH2D("ThetaY_vs_Y_30_35__1028","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8001,39);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8027,1502);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8053,4269);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8079,5952);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8105,6799);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8131,7740);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8157,8076);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8183,8256);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8209,8338);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8235,8332);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8261,8406);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8287,8069);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8313,7624);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8339,7020);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8365,5843);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8391,4124);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8417,1474);
   ThetaY_vs_Y_30_35__1028->SetBinContent(8443,45);
   ThetaY_vs_Y_30_35__1028->SetEntries(101908);
   ThetaY_vs_Y_30_35__1028->SetContour(20);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(1,420.3);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(2,840.6);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(3,1260.9);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(4,1681.2);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(5,2101.5);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(6,2521.8);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(7,2942.1);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(8,3362.4);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(9,3782.7);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(10,4203);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(11,4623.3);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(12,5043.6);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(13,5463.9);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(14,5884.2);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(15,6304.5);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(16,6724.8);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(17,7145.1);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(18,7565.4);
   ThetaY_vs_Y_30_35__1028->SetContourLevel(19,7985.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1028->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1028->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1028->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1028->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1028->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1028->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1028->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1028->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1028->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1028->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1028->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1028->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1028->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1028->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1028->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1028->Draw("COL");
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
