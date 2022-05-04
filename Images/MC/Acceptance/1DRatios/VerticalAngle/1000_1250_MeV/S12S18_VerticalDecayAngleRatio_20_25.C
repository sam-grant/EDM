void S12S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:50 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06651119,125,1.263713);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_20_25__849 = new TH1D("S12S18_ThetaY_20_25__849","",630,-1575,1575);
   S12S18_ThetaY_20_25__849->SetBinContent(306,0.01973684);
   S12S18_ThetaY_20_25__849->SetBinContent(307,0.2993421);
   S12S18_ThetaY_20_25__849->SetBinContent(308,0.5230263);
   S12S18_ThetaY_20_25__849->SetBinContent(309,0.6578947);
   S12S18_ThetaY_20_25__849->SetBinContent(310,0.7236842);
   S12S18_ThetaY_20_25__849->SetBinContent(311,0.9078947);
   S12S18_ThetaY_20_25__849->SetBinContent(312,0.8651316);
   S12S18_ThetaY_20_25__849->SetBinContent(313,1);
   S12S18_ThetaY_20_25__849->SetBinContent(314,1.006579);
   S12S18_ThetaY_20_25__849->SetBinContent(315,0.8848684);
   S12S18_ThetaY_20_25__849->SetBinContent(316,0.9769737);
   S12S18_ThetaY_20_25__849->SetBinContent(317,0.8355263);
   S12S18_ThetaY_20_25__849->SetBinContent(318,0.4967105);
   S12S18_ThetaY_20_25__849->SetBinContent(319,0.03618421);
   S12S18_ThetaY_20_25__849->SetBinError(306,0.008057532);
   S12S18_ThetaY_20_25__849->SetBinError(307,0.03137958);
   S12S18_ThetaY_20_25__849->SetBinError(308,0.04147868);
   S12S18_ThetaY_20_25__849->SetBinError(309,0.04652018);
   S12S18_ThetaY_20_25__849->SetBinError(310,0.04879078);
   S12S18_ThetaY_20_25__849->SetBinError(311,0.05464884);
   S12S18_ThetaY_20_25__849->SetBinError(312,0.0533463);
   S12S18_ThetaY_20_25__849->SetBinError(313,0.05735393);
   S12S18_ThetaY_20_25__849->SetBinError(314,0.05754229);
   S12S18_ThetaY_20_25__849->SetBinError(315,0.05395138);
   S12S18_ThetaY_20_25__849->SetBinError(316,0.05668976);
   S12S18_ThetaY_20_25__849->SetBinError(317,0.05242558);
   S12S18_ThetaY_20_25__849->SetBinError(318,0.04042173);
   S12S18_ThetaY_20_25__849->SetBinError(319,0.01090995);
   S12S18_ThetaY_20_25__849->SetMinimum(0);
   S12S18_ThetaY_20_25__849->SetMaximum(1.13069);
   S12S18_ThetaY_20_25__849->SetEntries(2807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__849->SetLineColor(ci);
   S12S18_ThetaY_20_25__849->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_20_25__849->SetMarkerColor(ci);
   S12S18_ThetaY_20_25__849->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_20_25__849->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_20_25__849->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__849->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__849->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__849->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_20_25__849->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_20_25__849->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__849->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__849->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_20_25__849->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_20_25__849->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_20_25__849->Draw("AE");
   
   TH1D *ThetaY_20_25__850 = new TH1D("ThetaY_20_25__850","",630,-1575,1575);
   ThetaY_20_25__850->SetBinContent(305,4.894763e-05);
   ThetaY_20_25__850->SetBinContent(306,0.05090553);
   ThetaY_20_25__850->SetBinContent(307,0.2996574);
   ThetaY_20_25__850->SetBinContent(308,0.5760646);
   ThetaY_20_25__850->SetBinContent(309,0.7524719);
   ThetaY_20_25__850->SetBinContent(310,0.8706804);
   ThetaY_20_25__850->SetBinContent(311,0.9472345);
   ThetaY_20_25__850->SetBinContent(312,0.9767009);
   ThetaY_20_25__850->SetBinContent(313,1);
   ThetaY_20_25__850->SetBinContent(314,1.011454);
   ThetaY_20_25__850->SetBinContent(315,1.0279);
   ThetaY_20_25__850->SetBinContent(316,1.016202);
   ThetaY_20_25__850->SetBinContent(317,1.011111);
   ThetaY_20_25__850->SetBinContent(318,0.9970142);
   ThetaY_20_25__850->SetBinContent(319,0.9737641);
   ThetaY_20_25__850->SetBinContent(320,0.936466);
   ThetaY_20_25__850->SetBinContent(321,0.8723935);
   ThetaY_20_25__850->SetBinContent(322,0.7527655);
   ThetaY_20_25__850->SetBinContent(323,0.5739109);
   ThetaY_20_25__850->SetBinContent(324,0.3083211);
   ThetaY_20_25__850->SetBinContent(325,0.05345081);
   ThetaY_20_25__850->SetBinError(305,4.894763e-05);
   ThetaY_20_25__850->SetBinError(306,0.001578514);
   ThetaY_20_25__850->SetBinError(307,0.003829819);
   ThetaY_20_25__850->SetBinError(308,0.005310084);
   ThetaY_20_25__850->SetBinError(309,0.006068913);
   ThetaY_20_25__850->SetBinError(310,0.006528226);
   ThetaY_20_25__850->SetBinError(311,0.006809176);
   ThetaY_20_25__850->SetBinError(312,0.006914275);
   ThetaY_20_25__850->SetBinError(313,0.006996258);
   ThetaY_20_25__850->SetBinError(314,0.007036211);
   ThetaY_20_25__850->SetBinError(315,0.007093185);
   ThetaY_20_25__850->SetBinError(316,0.007052706);
   ThetaY_20_25__850->SetBinError(317,0.007035019);
   ThetaY_20_25__850->SetBinError(318,0.006985805);
   ThetaY_20_25__850->SetBinError(319,0.006903871);
   ThetaY_20_25__850->SetBinError(320,0.006770361);
   ThetaY_20_25__850->SetBinError(321,0.006534646);
   ThetaY_20_25__850->SetBinError(322,0.006070098);
   ThetaY_20_25__850->SetBinError(323,0.005300149);
   ThetaY_20_25__850->SetBinError(324,0.003884789);
   ThetaY_20_25__850->SetBinError(325,0.001617495);
   ThetaY_20_25__850->SetEntries(306624);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__850->SetLineColor(ci);
   ThetaY_20_25__850->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__850->SetMarkerColor(ci);
   ThetaY_20_25__850->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__850->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__850->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__850->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__850->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__850->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__850->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__850->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__850->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__850->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__850->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__850->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__850->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__850->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__850->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__850->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__850->Draw("AEsame");
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
   
   Double_t _fx3284[21] = {
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
   47.5};
   Double_t _fy3284[21] = {
   0,
   0.3877151,
   0.9989479,
   0.90793,
   0.8743114,
   0.8311709,
   0.9584689,
   0.8857692,
   1,
   0.9951804,
   0.8608506,
   0.9613974,
   0.8263447,
   0.498198,
   0.03715911,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3284[21] = {
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
   Double_t _fely3284[21] = {
   0,
   0.1541685,
   0.1052911,
   0.07240901,
   0.06217,
   0.0563386,
   0.05806634,
   0.05494134,
   0.05774592,
   0.0572777,
   0.05278803,
   0.0561506,
   0.05213171,
   0.04064672,
   0.01103426,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3284[21] = {
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
   Double_t _fehy3284[21] = {
   356.3808,
   0.2326389,
   0.1170397,
   0.07843435,
   0.06676052,
   0.06029663,
   0.06169862,
   0.0584626,
   0.06118386,
   0.06067612,
   0.05613141,
   0.05953283,
   0.05553178,
   0.04410861,
   0.01492523,
   0.006467169,
   0.006942171,
   0.008045473,
   0.01055298,
   0.01964471,
   0.1133959};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3284,_fy3284,_felx3284,_fehx3284,_fely3284,_fehy3284);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3284 = new TH1F("Graph_Graph3284","",100,-100,100);
   Graph_Graph3284->SetMinimum(0);
   Graph_Graph3284->SetMaximum(1.5);
   Graph_Graph3284->SetDirectory(0);
   Graph_Graph3284->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3284->SetLineColor(ci);
   Graph_Graph3284->GetXaxis()->SetRange(1,100);
   Graph_Graph3284->GetXaxis()->CenterTitle(true);
   Graph_Graph3284->GetXaxis()->SetLabelFont(42);
   Graph_Graph3284->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3284->GetXaxis()->SetTitleFont(42);
   Graph_Graph3284->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3284->GetYaxis()->CenterTitle(true);
   Graph_Graph3284->GetYaxis()->SetLabelFont(42);
   Graph_Graph3284->GetYaxis()->SetTitleFont(42);
   Graph_Graph3284->GetZaxis()->SetLabelFont(42);
   Graph_Graph3284->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3284->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3284);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.13069,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__851 = new TH2D("ThetaY_vs_Y_20_25__851","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__851->SetBinContent(7947,1);
   ThetaY_vs_Y_20_25__851->SetBinContent(7973,1040);
   ThetaY_vs_Y_20_25__851->SetBinContent(7999,6122);
   ThetaY_vs_Y_20_25__851->SetBinContent(8025,11769);
   ThetaY_vs_Y_20_25__851->SetBinContent(8051,15373);
   ThetaY_vs_Y_20_25__851->SetBinContent(8077,17788);
   ThetaY_vs_Y_20_25__851->SetBinContent(8103,19352);
   ThetaY_vs_Y_20_25__851->SetBinContent(8129,19954);
   ThetaY_vs_Y_20_25__851->SetBinContent(8155,20430);
   ThetaY_vs_Y_20_25__851->SetBinContent(8181,20664);
   ThetaY_vs_Y_20_25__851->SetBinContent(8207,21000);
   ThetaY_vs_Y_20_25__851->SetBinContent(8233,20761);
   ThetaY_vs_Y_20_25__851->SetBinContent(8259,20657);
   ThetaY_vs_Y_20_25__851->SetBinContent(8285,20369);
   ThetaY_vs_Y_20_25__851->SetBinContent(8311,19894);
   ThetaY_vs_Y_20_25__851->SetBinContent(8337,19132);
   ThetaY_vs_Y_20_25__851->SetBinContent(8363,17823);
   ThetaY_vs_Y_20_25__851->SetBinContent(8389,15379);
   ThetaY_vs_Y_20_25__851->SetBinContent(8415,11725);
   ThetaY_vs_Y_20_25__851->SetBinContent(8441,6299);
   ThetaY_vs_Y_20_25__851->SetBinContent(8467,1092);
   ThetaY_vs_Y_20_25__851->SetEntries(306624);
   ThetaY_vs_Y_20_25__851->SetContour(20);
   ThetaY_vs_Y_20_25__851->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__851->SetContourLevel(1,1050);
   ThetaY_vs_Y_20_25__851->SetContourLevel(2,2100);
   ThetaY_vs_Y_20_25__851->SetContourLevel(3,3150);
   ThetaY_vs_Y_20_25__851->SetContourLevel(4,4200);
   ThetaY_vs_Y_20_25__851->SetContourLevel(5,5250);
   ThetaY_vs_Y_20_25__851->SetContourLevel(6,6300);
   ThetaY_vs_Y_20_25__851->SetContourLevel(7,7350);
   ThetaY_vs_Y_20_25__851->SetContourLevel(8,8400);
   ThetaY_vs_Y_20_25__851->SetContourLevel(9,9450);
   ThetaY_vs_Y_20_25__851->SetContourLevel(10,10500);
   ThetaY_vs_Y_20_25__851->SetContourLevel(11,11550);
   ThetaY_vs_Y_20_25__851->SetContourLevel(12,12600);
   ThetaY_vs_Y_20_25__851->SetContourLevel(13,13650);
   ThetaY_vs_Y_20_25__851->SetContourLevel(14,14700);
   ThetaY_vs_Y_20_25__851->SetContourLevel(15,15750);
   ThetaY_vs_Y_20_25__851->SetContourLevel(16,16800);
   ThetaY_vs_Y_20_25__851->SetContourLevel(17,17850);
   ThetaY_vs_Y_20_25__851->SetContourLevel(18,18900);
   ThetaY_vs_Y_20_25__851->SetContourLevel(19,19950);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__851->SetLineColor(ci);
   ThetaY_vs_Y_20_25__851->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__851->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__851->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__851->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__851->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__851->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__851->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__851->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__851->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__851->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__851->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__851->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__851->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__851->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__851->Draw("COL");
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
