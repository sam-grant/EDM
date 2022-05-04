void S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06896791,125,1.31039);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__1116 = new TH1D("S18_ThetaY_mI10_mI5__1116","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(310,0.00310559);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(311,0.06832298);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(312,0.5776398);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(313,0.8447205);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(314,0.9565217);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(315,1.012422);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(316,1.009317);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(317,0.9782609);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(318,1);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(319,0.8664596);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(320,0.5962733);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(321,0.1801242);
   S18_ThetaY_mI10_mI5__1116->SetBinContent(322,0.00931677);
   S18_ThetaY_mI10_mI5__1116->SetBinError(310,0.00310559);
   S18_ThetaY_mI10_mI5__1116->SetBinError(311,0.01456651);
   S18_ThetaY_mI10_mI5__1116->SetBinError(312,0.0423546);
   S18_ThetaY_mI10_mI5__1116->SetBinError(313,0.0512187);
   S18_ThetaY_mI10_mI5__1116->SetBinError(314,0.05450288);
   S18_ThetaY_mI10_mI5__1116->SetBinError(315,0.05607289);
   S18_ThetaY_mI10_mI5__1116->SetBinError(316,0.05598682);
   S18_ThetaY_mI10_mI5__1116->SetBinError(317,0.05511876);
   S18_ThetaY_mI10_mI5__1116->SetBinError(318,0.05572782);
   S18_ThetaY_mI10_mI5__1116->SetBinError(319,0.05187358);
   S18_ThetaY_mI10_mI5__1116->SetBinError(320,0.04303232);
   S18_ThetaY_mI10_mI5__1116->SetBinError(321,0.02365147);
   S18_ThetaY_mI10_mI5__1116->SetBinError(322,0.00537904);
   S18_ThetaY_mI10_mI5__1116->SetMinimum(0);
   S18_ThetaY_mI10_mI5__1116->SetMaximum(1.172454);
   S18_ThetaY_mI10_mI5__1116->SetEntries(2609);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1116->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__1116->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1116->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__1116->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__1116->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__1116->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1116->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1116->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1116->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__1116->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__1116->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1116->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1116->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1116->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1116->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1116->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1117 = new TH1D("ThetaY_mI10_mI5__1117","",630,-1575,1575);
   ThetaY_mI10_mI5__1117->SetBinContent(308,0.0008192973);
   ThetaY_mI10_mI5__1117->SetBinContent(309,0.1486739);
   ThetaY_mI10_mI5__1117->SetBinContent(310,0.5273226);
   ThetaY_mI10_mI5__1117->SetBinContent(311,0.7715685);
   ThetaY_mI10_mI5__1117->SetBinContent(312,0.9093629);
   ThetaY_mI10_mI5__1117->SetBinContent(313,0.9992379);
   ThetaY_mI10_mI5__1117->SetBinContent(314,1.048167);
   ThetaY_mI10_mI5__1117->SetBinContent(315,1.065868);
   ThetaY_mI10_mI5__1117->SetBinContent(316,1.0628);
   ThetaY_mI10_mI5__1117->SetBinContent(317,1.044833);
   ThetaY_mI10_mI5__1117->SetBinContent(318,1);
   ThetaY_mI10_mI5__1117->SetBinContent(319,0.9106775);
   ThetaY_mI10_mI5__1117->SetBinContent(320,0.7637947);
   ThetaY_mI10_mI5__1117->SetBinContent(321,0.5259698);
   ThetaY_mI10_mI5__1117->SetBinContent(322,0.1466542);
   ThetaY_mI10_mI5__1117->SetBinContent(323,0.001162259);
   ThetaY_mI10_mI5__1117->SetBinError(308,0.0001249417);
   ThetaY_mI10_mI5__1117->SetBinError(309,0.001683077);
   ThetaY_mI10_mI5__1117->SetBinError(310,0.003169748);
   ThetaY_mI10_mI5__1117->SetBinError(311,0.003834191);
   ThetaY_mI10_mI5__1117->SetBinError(312,0.004162509);
   ThetaY_mI10_mI5__1117->SetBinError(313,0.004363359);
   ThetaY_mI10_mI5__1117->SetBinError(314,0.004468912);
   ThetaY_mI10_mI5__1117->SetBinError(315,0.004506488);
   ThetaY_mI10_mI5__1117->SetBinError(316,0.004499998);
   ThetaY_mI10_mI5__1117->SetBinError(317,0.004461798);
   ThetaY_mI10_mI5__1117->SetBinError(318,0.004365023);
   ThetaY_mI10_mI5__1117->SetBinError(319,0.004165516);
   ThetaY_mI10_mI5__1117->SetBinError(320,0.003814827);
   ThetaY_mI10_mI5__1117->SetBinError(321,0.00316568);
   ThetaY_mI10_mI5__1117->SetBinError(322,0.001671606);
   ThetaY_mI10_mI5__1117->SetBinError(323,0.000148812);
   ThetaY_mI10_mI5__1117->SetEntries(573488);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1117->SetLineColor(ci);
   ThetaY_mI10_mI5__1117->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1117->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1117->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1117->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1117->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1117->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1117->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1117->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1117->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1117->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1117->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1117->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1117->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1117->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1117->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1117->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1117->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1117->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1117->Draw("AEsame");
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
   
   Double_t _fx3373[16] = {
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
   Double_t _fy3373[16] = {
   0,
   0,
   0.005889355,
   0.08855077,
   0.6352137,
   0.8453648,
   0.9125661,
   0.9498574,
   0.949677,
   0.9362847,
   1,
   0.951445,
   0.7806722,
   0.3424611,
   0.06352883,
   0};
   Double_t _felx3373[16] = {
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
   Double_t _fely3373[16] = {
   0,
   0,
   0.00487198,
   0.01873941,
   0.04662436,
   0.05135846,
   0.05211488,
   0.0527333,
   0.05280421,
   0.05287643,
   0.05586898,
   0.05709273,
   0.05642505,
   0.04488362,
   0.03457955,
   0};
   Double_t _fehx3373[16] = {
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
   Double_t _fehy3373[16] = {
   7.130036,
   0.03846091,
   0.01354354,
   0.02319765,
   0.05017998,
   0.05457866,
   0.05518058,
   0.05574643,
   0.05582617,
   0.05595141,
   0.05908218,
   0.0606272,
   0.06066003,
   0.05119213,
   0.06182006,
   4.99425};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3373,_fy3373,_felx3373,_fehx3373,_fely3373,_fehy3373);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3373 = new TH1F("Graph_Graph3373","",100,-100,100);
   Graph_Graph3373->SetMinimum(0);
   Graph_Graph3373->SetMaximum(1.5);
   Graph_Graph3373->SetDirectory(0);
   Graph_Graph3373->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3373->SetLineColor(ci);
   Graph_Graph3373->GetXaxis()->SetRange(1,100);
   Graph_Graph3373->GetXaxis()->CenterTitle(true);
   Graph_Graph3373->GetXaxis()->SetLabelFont(42);
   Graph_Graph3373->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3373->GetXaxis()->SetTitleFont(42);
   Graph_Graph3373->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3373->GetYaxis()->CenterTitle(true);
   Graph_Graph3373->GetYaxis()->SetLabelFont(42);
   Graph_Graph3373->GetYaxis()->SetTitleFont(42);
   Graph_Graph3373->GetZaxis()->SetLabelFont(42);
   Graph_Graph3373->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3373->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3373);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.172454,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1118 = new TH2D("ThetaY_vs_Y_mI10_mI5__1118","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8019,43);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8045,7803);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8071,27676);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8097,40495);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8123,47727);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8149,52444);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8175,55012);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8201,55941);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8227,55780);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8253,54837);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8279,52484);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8305,47796);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8331,40087);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8357,27605);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8383,7697);
   ThetaY_vs_Y_mI10_mI5__1118->SetBinContent(8409,61);
   ThetaY_vs_Y_mI10_mI5__1118->SetEntries(573488);
   ThetaY_vs_Y_mI10_mI5__1118->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(1,2797.05);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(2,5594.1);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(3,8391.15);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(4,11188.2);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(5,13985.25);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(6,16782.3);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(7,19579.35);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(8,22376.4);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(9,25173.45);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(10,27970.5);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(11,30767.55);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(12,33564.6);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(13,36361.65);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(14,39158.7);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(15,41955.75);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(16,44752.8);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(17,47549.85);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(18,50346.9);
   ThetaY_vs_Y_mI10_mI5__1118->SetContourLevel(19,53143.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1118->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1118->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1118->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1118->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1118->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1118->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1118->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1118->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1118->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1118->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1118->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1118->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1118->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1118->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1118->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1118->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-10_-5","Reco vertices","lpf");
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
