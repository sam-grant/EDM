void S12S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06698526,125,1.27272);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__1353 = new TH1D("S12S18_ThetaY_5_10__1353","",630,-1575,1575);
   S12S18_ThetaY_5_10__1353->SetBinContent(310,0.04201681);
   S12S18_ThetaY_5_10__1353->SetBinContent(311,0.3445378);
   S12S18_ThetaY_5_10__1353->SetBinContent(312,0.7378151);
   S12S18_ThetaY_5_10__1353->SetBinContent(313,0.8907563);
   S12S18_ThetaY_5_10__1353->SetBinContent(314,1);
   S12S18_ThetaY_5_10__1353->SetBinContent(315,0.9714286);
   S12S18_ThetaY_5_10__1353->SetBinContent(316,0.9210084);
   S12S18_ThetaY_5_10__1353->SetBinContent(317,0.9714286);
   S12S18_ThetaY_5_10__1353->SetBinContent(318,0.6773109);
   S12S18_ThetaY_5_10__1353->SetBinContent(319,0.2403361);
   S12S18_ThetaY_5_10__1353->SetBinContent(320,0.006722689);
   S12S18_ThetaY_5_10__1353->SetBinError(310,0.008403361);
   S12S18_ThetaY_5_10__1353->SetBinError(311,0.02406356);
   S12S18_ThetaY_5_10__1353->SetBinError(312,0.03521399);
   S12S18_ThetaY_5_10__1353->SetBinError(313,0.03869198);
   S12S18_ThetaY_5_10__1353->SetBinError(314,0.040996);
   S12S18_ThetaY_5_10__1353->SetBinError(315,0.0404061);
   S12S18_ThetaY_5_10__1353->SetBinError(316,0.03934353);
   S12S18_ThetaY_5_10__1353->SetBinError(317,0.0404061);
   S12S18_ThetaY_5_10__1353->SetBinError(318,0.03373926);
   S12S18_ThetaY_5_10__1353->SetBinError(319,0.02009792);
   S12S18_ThetaY_5_10__1353->SetBinError(320,0.003361345);
   S12S18_ThetaY_5_10__1353->SetMinimum(0);
   S12S18_ThetaY_5_10__1353->SetMaximum(1.138749);
   S12S18_ThetaY_5_10__1353->SetEntries(4048);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1353->SetLineColor(ci);
   S12S18_ThetaY_5_10__1353->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1353->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__1353->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__1353->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__1353->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1353->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1353->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1353->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__1353->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__1353->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1353->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1353->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1353->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1353->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1353->Draw("AE");
   
   TH1D *ThetaY_5_10__1354 = new TH1D("ThetaY_5_10__1354","",630,-1575,1575);
   ThetaY_5_10__1354->SetBinContent(309,0.0006759929);
   ThetaY_5_10__1354->SetBinContent(310,0.1512534);
   ThetaY_5_10__1354->SetBinContent(311,0.5538072);
   ThetaY_5_10__1354->SetBinContent(312,0.7893719);
   ThetaY_5_10__1354->SetBinContent(313,0.9249648);
   ThetaY_5_10__1354->SetBinContent(314,1);
   ThetaY_5_10__1354->SetBinContent(315,1.03072);
   ThetaY_5_10__1354->SetBinContent(316,1.035227);
   ThetaY_5_10__1354->SetBinContent(317,1.000282);
   ThetaY_5_10__1354->SetBinContent(318,0.9202141);
   ThetaY_5_10__1354->SetBinContent(319,0.7845648);
   ThetaY_5_10__1354->SetBinContent(320,0.557788);
   ThetaY_5_10__1354->SetBinContent(321,0.1513285);
   ThetaY_5_10__1354->SetBinContent(322,0.0004694395);
   ThetaY_5_10__1354->SetBinError(309,0.0001126655);
   ThetaY_5_10__1354->SetBinError(310,0.001685281);
   ThetaY_5_10__1354->SetBinError(311,0.003224773);
   ThetaY_5_10__1354->SetBinError(312,0.003849999);
   ThetaY_5_10__1354->SetBinError(313,0.004167565);
   ThetaY_5_10__1354->SetBinError(314,0.00433331);
   ThetaY_5_10__1354->SetBinError(315,0.004399367);
   ThetaY_5_10__1354->SetBinError(316,0.004408974);
   ThetaY_5_10__1354->SetBinError(317,0.004333921);
   ThetaY_5_10__1354->SetBinError(318,0.004156849);
   ThetaY_5_10__1354->SetBinError(319,0.003838259);
   ThetaY_5_10__1354->SetBinError(320,0.003236342);
   ThetaY_5_10__1354->SetBinError(321,0.0016857);
   ThetaY_5_10__1354->SetBinError(322,9.38879e-05);
   ThetaY_5_10__1354->SetEntries(474005);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1354->SetLineColor(ci);
   ThetaY_5_10__1354->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1354->SetMarkerColor(ci);
   ThetaY_5_10__1354->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1354->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1354->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1354->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1354->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1354->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1354->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1354->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1354->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1354->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1354->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1354->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1354->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1354->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1354->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1354->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1354->Draw("AEsame");
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
   
   Double_t _fx3452[14] = {
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
   32.5};
   Double_t _fy3452[14] = {
   0,
   0.2777908,
   0.622126,
   0.9346863,
   0.9630164,
   1,
   0.9424756,
   0.8896683,
   0.971155,
   0.7360363,
   0.3063305,
   0.01205241,
   0,
   0};
   Double_t _felx3452[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3452[14] = {
   0,
   0.05526646,
   0.04356563,
   0.04482488,
   0.04204152,
   0.04121243,
   0.03939593,
   0.03818118,
   0.04060117,
   0.03679939,
   0.02563012,
   0.005768408,
   0,
   0};
   Double_t _fehx3452[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3452[14] = {
   4.696258,
   0.06753965,
   0.04673029,
   0.04702901,
   0.04391911,
   0.04294774,
   0.04107891,
   0.03985675,
   0.04233594,
   0.03868769,
   0.02787047,
   0.009530848,
   0.02044894,
   6.839925};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3452,_fy3452,_felx3452,_fehx3452,_fely3452,_fehy3452);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3452 = new TH1F("Graph_Graph3452","",100,-100,100);
   Graph_Graph3452->SetMinimum(0);
   Graph_Graph3452->SetMaximum(1.5);
   Graph_Graph3452->SetDirectory(0);
   Graph_Graph3452->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3452->SetLineColor(ci);
   Graph_Graph3452->GetXaxis()->SetRange(1,100);
   Graph_Graph3452->GetXaxis()->CenterTitle(true);
   Graph_Graph3452->GetXaxis()->SetLabelFont(42);
   Graph_Graph3452->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3452->GetXaxis()->SetTitleFont(42);
   Graph_Graph3452->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3452->GetYaxis()->CenterTitle(true);
   Graph_Graph3452->GetYaxis()->SetLabelFont(42);
   Graph_Graph3452->GetYaxis()->SetTitleFont(42);
   Graph_Graph3452->GetZaxis()->SetLabelFont(42);
   Graph_Graph3452->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3452->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3452);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.138749,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1355 = new TH2D("ThetaY_vs_Y_5_10__1355","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8048,36);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8074,8055);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8100,29493);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8126,42038);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8152,49259);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8178,53255);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8204,54891);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8230,55131);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8256,53270);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8282,49006);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8308,41782);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8334,29705);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8360,8059);
   ThetaY_vs_Y_5_10__1355->SetBinContent(8386,25);
   ThetaY_vs_Y_5_10__1355->SetEntries(474005);
   ThetaY_vs_Y_5_10__1355->SetContour(20);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(1,2756.55);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(2,5513.1);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(3,8269.65);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(4,11026.2);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(5,13782.75);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(6,16539.3);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(7,19295.85);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(8,22052.4);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(9,24808.95);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(10,27565.5);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(11,30322.05);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(12,33078.6);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(13,35835.15);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(14,38591.7);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(15,41348.25);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(16,44104.8);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(17,46861.35);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(18,49617.9);
   ThetaY_vs_Y_5_10__1355->SetContourLevel(19,52374.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1355->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1355->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1355->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1355->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1355->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1355->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1355->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1355->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1355->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1355->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1355->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1355->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1355->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1355->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1355->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1355->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_5_10","Reco vertices","lpf");
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
