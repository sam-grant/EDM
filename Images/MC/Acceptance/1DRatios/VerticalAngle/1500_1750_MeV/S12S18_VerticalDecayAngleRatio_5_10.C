void S12S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06550589,125,1.244612);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__1182 = new TH1D("S12S18_ThetaY_5_10__1182","",630,-1575,1575);
   S12S18_ThetaY_5_10__1182->SetBinContent(309,0.01690141);
   S12S18_ThetaY_5_10__1182->SetBinContent(310,0.2197183);
   S12S18_ThetaY_5_10__1182->SetBinContent(311,0.5633803);
   S12S18_ThetaY_5_10__1182->SetBinContent(312,0.8056338);
   S12S18_ThetaY_5_10__1182->SetBinContent(313,0.8676056);
   S12S18_ThetaY_5_10__1182->SetBinContent(314,0.9112676);
   S12S18_ThetaY_5_10__1182->SetBinContent(315,1);
   S12S18_ThetaY_5_10__1182->SetBinContent(316,0.9647887);
   S12S18_ThetaY_5_10__1182->SetBinContent(317,0.9873239);
   S12S18_ThetaY_5_10__1182->SetBinContent(318,0.8169014);
   S12S18_ThetaY_5_10__1182->SetBinContent(319,0.4338028);
   S12S18_ThetaY_5_10__1182->SetBinContent(320,0.04225352);
   S12S18_ThetaY_5_10__1182->SetBinContent(321,0.001408451);
   S12S18_ThetaY_5_10__1182->SetBinError(309,0.004879016);
   S12S18_ThetaY_5_10__1182->SetBinError(310,0.01759154);
   S12S18_ThetaY_5_10__1182->SetBinError(311,0.02816901);
   S12S18_ThetaY_5_10__1182->SetBinError(312,0.03368524);
   S12S18_ThetaY_5_10__1182->SetBinError(313,0.03495683);
   S12S18_ThetaY_5_10__1182->SetBinError(314,0.03582563);
   S12S18_ThetaY_5_10__1182->SetBinError(315,0.03752933);
   S12S18_ThetaY_5_10__1182->SetBinError(316,0.03686268);
   S12S18_ThetaY_5_10__1182->SetBinError(317,0.03729071);
   S12S18_ThetaY_5_10__1182->SetBinError(318,0.03391998);
   S12S18_ThetaY_5_10__1182->SetBinError(319,0.02471821);
   S12S18_ThetaY_5_10__1182->SetBinError(320,0.007714402);
   S12S18_ThetaY_5_10__1182->SetBinError(321,0.001408451);
   S12S18_ThetaY_5_10__1182->SetMinimum(0);
   S12S18_ThetaY_5_10__1182->SetMaximum(1.1136);
   S12S18_ThetaY_5_10__1182->SetEntries(5418);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1182->SetLineColor(ci);
   S12S18_ThetaY_5_10__1182->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1182->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__1182->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__1182->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__1182->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1182->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1182->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1182->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__1182->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__1182->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1182->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1182->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1182->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1182->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1182->Draw("AE");
   
   TH1D *ThetaY_5_10__1183 = new TH1D("ThetaY_5_10__1183","",630,-1575,1575);
   ThetaY_5_10__1183->SetBinContent(308,0.0007547577);
   ThetaY_5_10__1183->SetBinContent(309,0.1364314);
   ThetaY_5_10__1183->SetBinContent(310,0.4961993);
   ThetaY_5_10__1183->SetBinContent(311,0.7170737);
   ThetaY_5_10__1183->SetBinContent(312,0.8577821);
   ThetaY_5_10__1183->SetBinContent(313,0.9304545);
   ThetaY_5_10__1183->SetBinContent(314,0.982964);
   ThetaY_5_10__1183->SetBinContent(315,1);
   ThetaY_5_10__1183->SetBinContent(316,1.012364);
   ThetaY_5_10__1183->SetBinContent(317,0.9910328);
   ThetaY_5_10__1183->SetBinContent(318,0.9365105);
   ThetaY_5_10__1183->SetBinContent(319,0.8529121);
   ThetaY_5_10__1183->SetBinContent(320,0.7237946);
   ThetaY_5_10__1183->SetBinContent(321,0.4982838);
   ThetaY_5_10__1183->SetBinContent(322,0.1333765);
   ThetaY_5_10__1183->SetBinContent(323,0.0007906985);
   ThetaY_5_10__1183->SetBinError(308,0.0001164616);
   ThetaY_5_10__1183->SetBinError(309,0.0015658);
   ThetaY_5_10__1183->SetBinError(310,0.002986119);
   ThetaY_5_10__1183->SetBinError(311,0.003589724);
   ThetaY_5_10__1183->SetBinError(312,0.003926157);
   ThetaY_5_10__1183->SetBinError(313,0.00408909);
   ThetaY_5_10__1183->SetBinError(314,0.004202889);
   ThetaY_5_10__1183->SetBinError(315,0.004239153);
   ThetaY_5_10__1183->SetBinError(316,0.004265278);
   ThetaY_5_10__1183->SetBinError(317,0.004220104);
   ThetaY_5_10__1183->SetBinError(318,0.004102376);
   ThetaY_5_10__1183->SetBinError(319,0.003914995);
   ThetaY_5_10__1183->SetBinError(320,0.003606507);
   ThetaY_5_10__1183->SetBinError(321,0.002992385);
   ThetaY_5_10__1183->SetBinError(322,0.00154817);
   ThetaY_5_10__1183->SetBinError(323,0.0001192023);
   ThetaY_5_10__1183->SetEntries(571535);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1183->SetLineColor(ci);
   ThetaY_5_10__1183->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1183->SetMarkerColor(ci);
   ThetaY_5_10__1183->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1183->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1183->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1183->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1183->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1183->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1183->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1183->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1183->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1183->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1183->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1183->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1183->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1183->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1183->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1183->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1183->Draw("AEsame");
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
   
   Double_t _fx3395[16] = {
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
   Double_t _fy3395[16] = {
   0,
   0.1238821,
   0.4428026,
   0.7856658,
   0.9392057,
   0.9324536,
   0.927061,
   1,
   0.9530061,
   0.9962576,
   0.8722822,
   0.5086137,
   0.05837778,
   0.002826603,
   0,
   0};
   Double_t _felx3395[16] = {
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
   Double_t _fely3395[16] = {
   0,
   0.03528328,
   0.03551384,
   0.03946272,
   0.03949281,
   0.03778185,
   0.03665165,
   0.03775877,
   0.03662395,
   0.03785717,
   0.03640971,
   0.02905876,
   0.01060235,
   0.002338313,
   0,
   0};
   Double_t _fehx3395[16] = {
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
   Double_t _fehy3395[16] = {
   3.511933,
   0.04712465,
   0.03848451,
   0.0414975,
   0.04119029,
   0.0393454,
   0.03813085,
   0.03921285,
   0.03805987,
   0.03932451,
   0.03796288,
   0.03076903,
   0.01272832,
   0.006500236,
   0.01944353,
   3.348938};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3395,_fy3395,_felx3395,_fehx3395,_fely3395,_fehy3395);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3395 = new TH1F("Graph_Graph3395","",100,-100,100);
   Graph_Graph3395->SetMinimum(0);
   Graph_Graph3395->SetMaximum(1.5);
   Graph_Graph3395->SetDirectory(0);
   Graph_Graph3395->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3395->SetLineColor(ci);
   Graph_Graph3395->GetXaxis()->SetRange(1,100);
   Graph_Graph3395->GetXaxis()->CenterTitle(true);
   Graph_Graph3395->GetXaxis()->SetLabelFont(42);
   Graph_Graph3395->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3395->GetXaxis()->SetTitleFont(42);
   Graph_Graph3395->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3395->GetYaxis()->CenterTitle(true);
   Graph_Graph3395->GetYaxis()->SetLabelFont(42);
   Graph_Graph3395->GetYaxis()->SetTitleFont(42);
   Graph_Graph3395->GetZaxis()->SetLabelFont(42);
   Graph_Graph3395->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3395->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3395);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1136,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1184 = new TH2D("ThetaY_vs_Y_5_10__1184","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8022,42);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8048,7592);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8074,27612);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8100,39903);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8126,47733);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8152,51777);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8178,54699);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8204,55647);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8230,56335);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8256,55148);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8282,52114);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8308,47462);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8334,40277);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8360,27728);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8386,7422);
   ThetaY_vs_Y_5_10__1184->SetBinContent(8412,44);
   ThetaY_vs_Y_5_10__1184->SetEntries(571535);
   ThetaY_vs_Y_5_10__1184->SetContour(20);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(1,2816.75);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(2,5633.5);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(3,8450.25);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(4,11267);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(5,14083.75);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(6,16900.5);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(7,19717.25);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(8,22534);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(9,25350.75);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(10,28167.5);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(11,30984.25);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(12,33801);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(13,36617.75);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(14,39434.5);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(15,42251.25);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(16,45068);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(17,47884.75);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(18,50701.5);
   ThetaY_vs_Y_5_10__1184->SetContourLevel(19,53518.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1184->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1184->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1184->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1184->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1184->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1184->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1184->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1184->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1184->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1184->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1184->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1184->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1184->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1184->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1184->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1184->Draw("COL");
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
