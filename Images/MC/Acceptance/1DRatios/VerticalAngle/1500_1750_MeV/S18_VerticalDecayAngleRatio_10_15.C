void S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06638308,125,1.261278);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__1128 = new TH1D("S18_ThetaY_10_15__1128","",630,-1575,1575);
   S18_ThetaY_10_15__1128->SetBinContent(309,0.03832753);
   S18_ThetaY_10_15__1128->SetBinContent(310,0.3484321);
   S18_ThetaY_10_15__1128->SetBinContent(311,0.6585366);
   S18_ThetaY_10_15__1128->SetBinContent(312,0.8013937);
   S18_ThetaY_10_15__1128->SetBinContent(313,0.8501742);
   S18_ThetaY_10_15__1128->SetBinContent(314,1);
   S18_ThetaY_10_15__1128->SetBinContent(315,0.9442509);
   S18_ThetaY_10_15__1128->SetBinContent(316,0.9268293);
   S18_ThetaY_10_15__1128->SetBinContent(317,0.8919861);
   S18_ThetaY_10_15__1128->SetBinContent(318,0.7073171);
   S18_ThetaY_10_15__1128->SetBinContent(319,0.1881533);
   S18_ThetaY_10_15__1128->SetBinError(309,0.01155618);
   S18_ThetaY_10_15__1128->SetBinError(310,0.03484321);
   S18_ThetaY_10_15__1128->SetBinError(311,0.04790149);
   S18_ThetaY_10_15__1128->SetBinError(312,0.05284234);
   S18_ThetaY_10_15__1128->SetBinError(313,0.05442683);
   S18_ThetaY_10_15__1128->SetBinError(314,0.05902813);
   S18_ThetaY_10_15__1128->SetBinError(315,0.05735916);
   S18_ThetaY_10_15__1128->SetBinError(316,0.05682755);
   S18_ThetaY_10_15__1128->SetBinError(317,0.05574913);
   S18_ThetaY_10_15__1128->SetBinError(318,0.04964393);
   S18_ThetaY_10_15__1128->SetBinError(319,0.02560442);
   S18_ThetaY_10_15__1128->SetMinimum(0);
   S18_ThetaY_10_15__1128->SetMaximum(1.128512);
   S18_ThetaY_10_15__1128->SetEntries(2111);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1128->SetLineColor(ci);
   S18_ThetaY_10_15__1128->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__1128->SetMarkerColor(ci);
   S18_ThetaY_10_15__1128->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__1128->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__1128->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1128->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1128->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1128->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__1128->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__1128->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1128->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1128->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__1128->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__1128->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__1128->Draw("AE");
   
   TH1D *ThetaY_10_15__1129 = new TH1D("ThetaY_10_15__1129","",630,-1575,1575);
   ThetaY_10_15__1129->SetBinContent(308,0.0009798027);
   ThetaY_10_15__1129->SetBinContent(309,0.1402231);
   ThetaY_10_15__1129->SetBinContent(310,0.5033068);
   ThetaY_10_15__1129->SetBinContent(311,0.7343844);
   ThetaY_10_15__1129->SetBinContent(312,0.868506);
   ThetaY_10_15__1129->SetBinContent(313,0.9530585);
   ThetaY_10_15__1129->SetBinContent(314,1);
   ThetaY_10_15__1129->SetBinContent(315,1.02592);
   ThetaY_10_15__1129->SetBinContent(316,1.02189);
   ThetaY_10_15__1129->SetBinContent(317,1.001982);
   ThetaY_10_15__1129->SetBinContent(318,0.9482709);
   ThetaY_10_15__1129->SetBinContent(319,0.8754092);
   ThetaY_10_15__1129->SetBinContent(320,0.7349634);
   ThetaY_10_15__1129->SetBinContent(321,0.5024606);
   ThetaY_10_15__1129->SetBinContent(322,0.1405572);
   ThetaY_10_15__1129->SetBinContent(323,0.001046607);
   ThetaY_10_15__1129->SetBinError(308,0.0001477108);
   ThetaY_10_15__1129->SetBinError(309,0.001767066);
   ThetaY_10_15__1129->SetBinError(310,0.003347799);
   ThetaY_10_15__1129->SetBinError(311,0.00404394);
   ThetaY_10_15__1129->SetBinError(312,0.004397738);
   ThetaY_10_15__1129->SetBinError(313,0.004606836);
   ThetaY_10_15__1129->SetBinError(314,0.004718924);
   ThetaY_10_15__1129->SetBinError(315,0.004779691);
   ThetaY_10_15__1129->SetBinError(316,0.004770292);
   ThetaY_10_15__1129->SetBinError(317,0.004723598);
   ThetaY_10_15__1129->SetBinError(318,0.00459525);
   ThetaY_10_15__1129->SetBinError(319,0.004415181);
   ThetaY_10_15__1129->SetBinError(320,0.004045534);
   ThetaY_10_15__1129->SetBinError(321,0.003344984);
   ThetaY_10_15__1129->SetBinError(322,0.00176917);
   ThetaY_10_15__1129->SetBinError(323,0.0001526634);
   ThetaY_10_15__1129->SetEntries(469411);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1129->SetLineColor(ci);
   ThetaY_10_15__1129->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1129->SetMarkerColor(ci);
   ThetaY_10_15__1129->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1129->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1129->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1129->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1129->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1129->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1129->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1129->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1129->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1129->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1129->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1129->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1129->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1129->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1129->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1129->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1129->Draw("AEsame");
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
   
   Double_t _fx3377[16] = {
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
   37.5};
   Double_t _fy3377[16] = {
   0,
   0.2733324,
   0.6922856,
   0.8967192,
   0.9227267,
   0.8920483,
   1,
   0.920394,
   0.9069759,
   0.8902218,
   0.7459019,
   0.2149318,
   0,
   0,
   0,
   0};
   Double_t _felx3377[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3377[16] = {
   0,
   0.08120948,
   0.06926387,
   0.06535451,
   0.06097682,
   0.0572302,
   0.05918133,
   0.05603897,
   0.05573556,
   0.05575987,
   0.05243286,
   0.02917732,
   0,
   0,
   0,
   0};
   Double_t _fehx3377[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3377[16] = {
   6.685837,
   0.1098778,
   0.07656982,
   0.07030267,
   0.06514761,
   0.06102659,
   0.06279326,
   0.05956073,
   0.05927187,
   0.05936814,
   0.05625615,
   0.03343587,
   0.008728174,
   0.01276711,
   0.04564439,
   6.250673};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3377,_fy3377,_felx3377,_fehx3377,_fely3377,_fehy3377);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3377 = new TH1F("Graph_Graph3377","",100,-100,100);
   Graph_Graph3377->SetMinimum(0);
   Graph_Graph3377->SetMaximum(1.5);
   Graph_Graph3377->SetDirectory(0);
   Graph_Graph3377->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3377->SetLineColor(ci);
   Graph_Graph3377->GetXaxis()->SetRange(1,100);
   Graph_Graph3377->GetXaxis()->CenterTitle(true);
   Graph_Graph3377->GetXaxis()->SetLabelFont(42);
   Graph_Graph3377->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3377->GetXaxis()->SetTitleFont(42);
   Graph_Graph3377->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3377->GetYaxis()->CenterTitle(true);
   Graph_Graph3377->GetYaxis()->SetLabelFont(42);
   Graph_Graph3377->GetYaxis()->SetTitleFont(42);
   Graph_Graph3377->GetZaxis()->SetLabelFont(42);
   Graph_Graph3377->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3377->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3377);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.128512,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1130 = new TH2D("ThetaY_vs_Y_10_15__1130","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8023,44);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8049,6297);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8075,22602);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8101,32979);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8127,39002);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8153,42799);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8179,44907);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8205,46071);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8231,45890);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8257,44996);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8283,42584);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8309,39312);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8335,33005);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8361,22564);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8387,6312);
   ThetaY_vs_Y_10_15__1130->SetBinContent(8413,47);
   ThetaY_vs_Y_10_15__1130->SetEntries(469411);
   ThetaY_vs_Y_10_15__1130->SetContour(20);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(1,2303.55);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(2,4607.1);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(3,6910.65);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(4,9214.2);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(5,11517.75);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(6,13821.3);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(7,16124.85);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(8,18428.4);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(9,20731.95);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(10,23035.5);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(11,25339.05);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(12,27642.6);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(13,29946.15);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(14,32249.7);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(15,34553.25);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(16,36856.8);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(17,39160.35);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(18,41463.9);
   ThetaY_vs_Y_10_15__1130->SetContourLevel(19,43767.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1130->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1130->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1130->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1130->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1130->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1130->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1130->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1130->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1130->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1130->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1130->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1130->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1130->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1130->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1130->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1130->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
