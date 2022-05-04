void S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:56 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06919793,125,1.314761);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__1119 = new TH1D("S18_ThetaY_mI5_0__1119","",630,-1575,1575);
   S18_ThetaY_mI5_0__1119->SetBinContent(310,0.02298851);
   S18_ThetaY_mI5_0__1119->SetBinContent(311,0.2787356);
   S18_ThetaY_mI5_0__1119->SetBinContent(312,0.8247126);
   S18_ThetaY_mI5_0__1119->SetBinContent(313,1);
   S18_ThetaY_mI5_0__1119->SetBinContent(314,0.9454023);
   S18_ThetaY_mI5_0__1119->SetBinContent(315,1.031609);
   S18_ThetaY_mI5_0__1119->SetBinContent(316,1.014368);
   S18_ThetaY_mI5_0__1119->SetBinContent(317,1.020115);
   S18_ThetaY_mI5_0__1119->SetBinContent(318,0.9310345);
   S18_ThetaY_mI5_0__1119->SetBinContent(319,0.8103448);
   S18_ThetaY_mI5_0__1119->SetBinContent(320,0.5172414);
   S18_ThetaY_mI5_0__1119->SetBinContent(321,0.07758621);
   S18_ThetaY_mI5_0__1119->SetBinError(310,0.008127664);
   S18_ThetaY_mI5_0__1119->SetBinError(311,0.02830132);
   S18_ThetaY_mI5_0__1119->SetBinError(312,0.04868125);
   S18_ThetaY_mI5_0__1119->SetBinError(313,0.05360563);
   S18_ThetaY_mI5_0__1119->SetBinError(314,0.05212172);
   S18_ThetaY_mI5_0__1119->SetBinError(315,0.05444625);
   S18_ThetaY_mI5_0__1119->SetBinError(316,0.05398935);
   S18_ThetaY_mI5_0__1119->SetBinError(317,0.05414208);
   S18_ThetaY_mI5_0__1119->SetBinError(318,0.05172414);
   S18_ThetaY_mI5_0__1119->SetBinError(319,0.04825533);
   S18_ThetaY_mI5_0__1119->SetBinError(320,0.0385529);
   S18_ThetaY_mI5_0__1119->SetBinError(321,0.01493147);
   S18_ThetaY_mI5_0__1119->SetMinimum(0);
   S18_ThetaY_mI5_0__1119->SetMaximum(1.176365);
   S18_ThetaY_mI5_0__1119->SetEntries(2949);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1119->SetLineColor(ci);
   S18_ThetaY_mI5_0__1119->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1119->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__1119->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__1119->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__1119->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1119->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1119->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1119->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__1119->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__1119->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1119->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1119->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1119->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1119->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1119->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1120 = new TH1D("ThetaY_mI5_0__1120","",630,-1575,1575);
   ThetaY_mI5_0__1120->SetBinContent(308,0.001179593);
   ThetaY_mI5_0__1120->SetBinContent(309,0.146842);
   ThetaY_mI5_0__1120->SetBinContent(310,0.5269138);
   ThetaY_mI5_0__1120->SetBinContent(311,0.7695457);
   ThetaY_mI5_0__1120->SetBinContent(312,0.9137336);
   ThetaY_mI5_0__1120->SetBinContent(313,1);
   ThetaY_mI5_0__1120->SetBinContent(314,1.047531);
   ThetaY_mI5_0__1120->SetBinContent(315,1.069423);
   ThetaY_mI5_0__1120->SetBinContent(316,1.066196);
   ThetaY_mI5_0__1120->SetBinContent(317,1.047687);
   ThetaY_mI5_0__1120->SetBinContent(318,0.9963571);
   ThetaY_mI5_0__1120->SetBinContent(319,0.9082519);
   ThetaY_mI5_0__1120->SetBinContent(320,0.7642375);
   ThetaY_mI5_0__1120->SetBinContent(321,0.5260118);
   ThetaY_mI5_0__1120->SetBinContent(322,0.1403889);
   ThetaY_mI5_0__1120->SetBinContent(323,0.0009020417);
   ThetaY_mI5_0__1120->SetBinError(308,0.0001430467);
   ThetaY_mI5_0__1120->SetBinError(309,0.001596014);
   ThetaY_mI5_0__1120->SetBinError(310,0.003023301);
   ThetaY_mI5_0__1120->SetBinError(311,0.003653666);
   ThetaY_mI5_0__1120->SetBinError(312,0.003981268);
   ThetaY_mI5_0__1120->SetBinError(313,0.004164968);
   ThetaY_mI5_0__1120->SetBinError(314,0.004262801);
   ThetaY_mI5_0__1120->SetBinError(315,0.004307113);
   ThetaY_mI5_0__1120->SetBinError(316,0.004300611);
   ThetaY_mI5_0__1120->SetBinError(317,0.004263118);
   ThetaY_mI5_0__1120->SetBinError(318,0.004157375);
   ThetaY_mI5_0__1120->SetBinError(319,0.003969308);
   ThetaY_mI5_0__1120->SetBinError(320,0.003641043);
   ThetaY_mI5_0__1120->SetBinError(321,0.003020712);
   ThetaY_mI5_0__1120->SetBinError(322,0.001560551);
   ThetaY_mI5_0__1120->SetBinError(323,0.0001250907);
   ThetaY_mI5_0__1120->SetEntries(629805);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1120->SetLineColor(ci);
   ThetaY_mI5_0__1120->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1120->SetMarkerColor(ci);
   ThetaY_mI5_0__1120->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1120->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1120->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1120->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1120->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1120->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1120->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1120->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1120->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1120->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1120->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1120->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1120->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1120->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1120->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1120->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1120->Draw("AEsame");
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
   
   Double_t _fx3374[16] = {
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
   Double_t _fy3374[16] = {
   0,
   0,
   0.04362859,
   0.362208,
   0.9025745,
   1,
   0.9025056,
   0.9646414,
   0.9513896,
   0.9736831,
   0.9344385,
   0.8922027,
   0.6768071,
   0.147499,
   0,
   0};
   Double_t _felx3374[16] = {
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
   Double_t _fely3374[16] = {
   0,
   0,
   0.01509937,
   0.03675288,
   0.05339063,
   0.05374091,
   0.04986636,
   0.05103568,
   0.05075812,
   0.05180458,
   0.05203217,
   0.05324071,
   0.05050165,
   0.02822142,
   0,
   0};
   Double_t _fehx3374[16] = {
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
   Double_t _fehy3374[16] = {
   4.546108,
   0.03603103,
   0.02151935,
   0.04068663,
   0.05664739,
   0.05671061,
   0.05270168,
   0.05381083,
   0.05354205,
   0.05463788,
   0.05501435,
   0.05651775,
   0.05441949,
   0.034218,
   0.0376874,
   5.969853};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3374,_fy3374,_felx3374,_fehx3374,_fely3374,_fehy3374);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3374 = new TH1F("Graph_Graph3374","",100,-100,100);
   Graph_Graph3374->SetMinimum(0);
   Graph_Graph3374->SetMaximum(1.5);
   Graph_Graph3374->SetDirectory(0);
   Graph_Graph3374->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3374->SetLineColor(ci);
   Graph_Graph3374->GetXaxis()->SetRange(1,100);
   Graph_Graph3374->GetXaxis()->CenterTitle(true);
   Graph_Graph3374->GetXaxis()->SetLabelFont(42);
   Graph_Graph3374->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3374->GetXaxis()->SetTitleFont(42);
   Graph_Graph3374->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3374->GetYaxis()->CenterTitle(true);
   Graph_Graph3374->GetYaxis()->SetLabelFont(42);
   Graph_Graph3374->GetYaxis()->SetTitleFont(42);
   Graph_Graph3374->GetZaxis()->SetLabelFont(42);
   Graph_Graph3374->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3374->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3374);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.176365,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1121 = new TH2D("ThetaY_vs_Y_mI5_0__1121","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8020,68);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8046,8465);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8072,30375);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8098,44362);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8124,52674);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8150,57647);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8176,60387);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8202,61649);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8228,61463);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8254,60396);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8280,57437);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8306,52358);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8332,44056);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8358,30323);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8384,8093);
   ThetaY_vs_Y_mI5_0__1121->SetBinContent(8410,52);
   ThetaY_vs_Y_mI5_0__1121->SetEntries(629805);
   ThetaY_vs_Y_mI5_0__1121->SetContour(20);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(1,3082.45);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(2,6164.9);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(3,9247.35);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(4,12329.8);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(5,15412.25);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(6,18494.7);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(7,21577.15);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(8,24659.6);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(9,27742.05);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(10,30824.5);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(11,33906.95);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(12,36989.4);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(13,40071.85);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(14,43154.3);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(15,46236.75);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(16,49319.2);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(17,52401.65);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(18,55484.1);
   ThetaY_vs_Y_mI5_0__1121->SetContourLevel(19,58566.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1121->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1121->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1121->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1121->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1121->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1121->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1121->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1121->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1121->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1121->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1121->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1121->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1121->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1121->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1121->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1121->Draw("COL");
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
