void S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_5_10__1296 = new TH1D("S18_ThetaY_5_10__1296","",630,-1575,1575);
   S18_ThetaY_5_10__1296->SetBinContent(310,0.03412969);
   S18_ThetaY_5_10__1296->SetBinContent(311,0.3276451);
   S18_ThetaY_5_10__1296->SetBinContent(312,0.7440273);
   S18_ThetaY_5_10__1296->SetBinContent(313,0.8532423);
   S18_ThetaY_5_10__1296->SetBinContent(314,1);
   S18_ThetaY_5_10__1296->SetBinContent(315,0.9829352);
   S18_ThetaY_5_10__1296->SetBinContent(316,0.9453925);
   S18_ThetaY_5_10__1296->SetBinContent(317,0.9215017);
   S18_ThetaY_5_10__1296->SetBinContent(318,0.6825939);
   S18_ThetaY_5_10__1296->SetBinContent(319,0.21843);
   S18_ThetaY_5_10__1296->SetBinContent(320,0.006825939);
   S18_ThetaY_5_10__1296->SetBinError(310,0.01079276);
   S18_ThetaY_5_10__1296->SetBinError(311,0.03344013);
   S18_ThetaY_5_10__1296->SetBinError(312,0.05039189);
   S18_ThetaY_5_10__1296->SetBinError(313,0.05396378);
   S18_ThetaY_5_10__1296->SetBinError(314,0.05842062);
   S18_ThetaY_5_10__1296->SetBinError(315,0.05792001);
   S18_ThetaY_5_10__1296->SetBinError(316,0.05680313);
   S18_ThetaY_5_10__1296->SetBinError(317,0.05608081);
   S18_ThetaY_5_10__1296->SetBinError(318,0.04826667);
   S18_ThetaY_5_10__1296->SetBinError(319,0.02730375);
   S18_ThetaY_5_10__1296->SetBinError(320,0.004826667);
   S18_ThetaY_5_10__1296->SetMinimum(0);
   S18_ThetaY_5_10__1296->SetMaximum(1.138749);
   S18_ThetaY_5_10__1296->SetEntries(1968);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1296->SetLineColor(ci);
   S18_ThetaY_5_10__1296->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1296->SetMarkerColor(ci);
   S18_ThetaY_5_10__1296->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__1296->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__1296->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1296->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1296->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1296->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__1296->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__1296->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1296->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1296->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1296->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1296->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1296->Draw("AE");
   
   TH1D *ThetaY_5_10__1297 = new TH1D("ThetaY_5_10__1297","",630,-1575,1575);
   ThetaY_5_10__1297->SetBinContent(309,0.0006759929);
   ThetaY_5_10__1297->SetBinContent(310,0.1512534);
   ThetaY_5_10__1297->SetBinContent(311,0.5538072);
   ThetaY_5_10__1297->SetBinContent(312,0.7893719);
   ThetaY_5_10__1297->SetBinContent(313,0.9249648);
   ThetaY_5_10__1297->SetBinContent(314,1);
   ThetaY_5_10__1297->SetBinContent(315,1.03072);
   ThetaY_5_10__1297->SetBinContent(316,1.035227);
   ThetaY_5_10__1297->SetBinContent(317,1.000282);
   ThetaY_5_10__1297->SetBinContent(318,0.9202141);
   ThetaY_5_10__1297->SetBinContent(319,0.7845648);
   ThetaY_5_10__1297->SetBinContent(320,0.557788);
   ThetaY_5_10__1297->SetBinContent(321,0.1513285);
   ThetaY_5_10__1297->SetBinContent(322,0.0004694395);
   ThetaY_5_10__1297->SetBinError(309,0.0001126655);
   ThetaY_5_10__1297->SetBinError(310,0.001685281);
   ThetaY_5_10__1297->SetBinError(311,0.003224773);
   ThetaY_5_10__1297->SetBinError(312,0.003849999);
   ThetaY_5_10__1297->SetBinError(313,0.004167565);
   ThetaY_5_10__1297->SetBinError(314,0.00433331);
   ThetaY_5_10__1297->SetBinError(315,0.004399367);
   ThetaY_5_10__1297->SetBinError(316,0.004408974);
   ThetaY_5_10__1297->SetBinError(317,0.004333921);
   ThetaY_5_10__1297->SetBinError(318,0.004156849);
   ThetaY_5_10__1297->SetBinError(319,0.003838259);
   ThetaY_5_10__1297->SetBinError(320,0.003236342);
   ThetaY_5_10__1297->SetBinError(321,0.0016857);
   ThetaY_5_10__1297->SetBinError(322,9.38879e-05);
   ThetaY_5_10__1297->SetEntries(474005);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1297->SetLineColor(ci);
   ThetaY_5_10__1297->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1297->SetMarkerColor(ci);
   ThetaY_5_10__1297->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1297->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1297->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1297->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1297->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1297->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1297->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1297->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1297->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1297->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1297->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1297->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1297->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1297->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1297->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1297->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1297->Draw("AEsame");
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
   
   Double_t _fx3433[14] = {
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
   Double_t _fy3433[14] = {
   0,
   0.2256458,
   0.591623,
   0.9425561,
   0.9224592,
   1,
   0.9536392,
   0.9132226,
   0.9212422,
   0.7417772,
   0.2784092,
   0.01223751,
   0,
   0};
   Double_t _felx3433[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3433[14] = {
   0,
   0.07018602,
   0.06037397,
   0.06395344,
   0.05844962,
   0.05854716,
   0.05630776,
   0.05497422,
   0.05617161,
   0.05251403,
   0.03473615,
   0.007904467,
   0,
   0};
   Double_t _fehx3433[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3433[14] = {
   9.536769,
   0.09636718,
   0.06687567,
   0.0684489,
   0.06227717,
   0.06208071,
   0.05973592,
   0.0583886,
   0.05970678,
   0.05637133,
   0.03936702,
   0.01614168,
   0.041526,
   13.88995};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3433,_fy3433,_felx3433,_fehx3433,_fely3433,_fehy3433);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3433 = new TH1F("Graph_Graph3433","",100,-100,100);
   Graph_Graph3433->SetMinimum(0);
   Graph_Graph3433->SetMaximum(1.5);
   Graph_Graph3433->SetDirectory(0);
   Graph_Graph3433->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3433->SetLineColor(ci);
   Graph_Graph3433->GetXaxis()->SetRange(1,100);
   Graph_Graph3433->GetXaxis()->CenterTitle(true);
   Graph_Graph3433->GetXaxis()->SetLabelFont(42);
   Graph_Graph3433->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3433->GetXaxis()->SetTitleFont(42);
   Graph_Graph3433->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3433->GetYaxis()->CenterTitle(true);
   Graph_Graph3433->GetYaxis()->SetLabelFont(42);
   Graph_Graph3433->GetYaxis()->SetTitleFont(42);
   Graph_Graph3433->GetZaxis()->SetLabelFont(42);
   Graph_Graph3433->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3433->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3433);
   
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
   
   TH2D *ThetaY_vs_Y_5_10__1298 = new TH2D("ThetaY_vs_Y_5_10__1298","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8048,36);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8074,8055);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8100,29493);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8126,42038);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8152,49259);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8178,53255);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8204,54891);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8230,55131);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8256,53270);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8282,49006);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8308,41782);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8334,29705);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8360,8059);
   ThetaY_vs_Y_5_10__1298->SetBinContent(8386,25);
   ThetaY_vs_Y_5_10__1298->SetEntries(474005);
   ThetaY_vs_Y_5_10__1298->SetContour(20);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(1,2756.55);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(2,5513.1);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(3,8269.65);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(4,11026.2);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(5,13782.75);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(6,16539.3);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(7,19295.85);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(8,22052.4);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(9,24808.95);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(10,27565.5);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(11,30322.05);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(12,33078.6);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(13,35835.15);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(14,38591.7);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(15,41348.25);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(16,44104.8);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(17,46861.35);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(18,49617.9);
   ThetaY_vs_Y_5_10__1298->SetContourLevel(19,52374.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1298->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1298->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1298->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1298->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1298->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1298->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1298->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1298->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1298->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1298->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1298->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1298->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1298->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1298->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1298->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1298->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_5_10","Reco vertices","lpf");
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
