void S12S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06829164,125,1.297541);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_15_20__1530 = new TH1D("S12S18_ThetaY_15_20__1530","",630,-1575,1575);
   S12S18_ThetaY_15_20__1530->SetBinContent(311,0.1320755);
   S12S18_ThetaY_15_20__1530->SetBinContent(312,0.6264151);
   S12S18_ThetaY_15_20__1530->SetBinContent(313,0.8264151);
   S12S18_ThetaY_15_20__1530->SetBinContent(314,1);
   S12S18_ThetaY_15_20__1530->SetBinContent(315,0.8754717);
   S12S18_ThetaY_15_20__1530->SetBinContent(316,0.9924528);
   S12S18_ThetaY_15_20__1530->SetBinContent(317,0.8867925);
   S12S18_ThetaY_15_20__1530->SetBinContent(318,0.0490566);
   S12S18_ThetaY_15_20__1530->SetBinError(311,0.02232483);
   S12S18_ThetaY_15_20__1530->SetBinError(312,0.04861924);
   S12S18_ThetaY_15_20__1530->SetBinError(313,0.05584396);
   S12S18_ThetaY_15_20__1530->SetBinError(314,0.06142951);
   S12S18_ThetaY_15_20__1530->SetBinError(315,0.05747753);
   S12S18_ThetaY_15_20__1530->SetBinError(316,0.06119726);
   S12S18_ThetaY_15_20__1530->SetBinError(317,0.05784796);
   S12S18_ThetaY_15_20__1530->SetBinError(318,0.01360585);
   S12S18_ThetaY_15_20__1530->SetMinimum(0);
   S12S18_ThetaY_15_20__1530->SetMaximum(1.160958);
   S12S18_ThetaY_15_20__1530->SetEntries(1428);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1530->SetLineColor(ci);
   S12S18_ThetaY_15_20__1530->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1530->SetMarkerColor(ci);
   S12S18_ThetaY_15_20__1530->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_15_20__1530->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_15_20__1530->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1530->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1530->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1530->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_15_20__1530->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_15_20__1530->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1530->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1530->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1530->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1530->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1530->Draw("AE");
   
   TH1D *ThetaY_15_20__1531 = new TH1D("ThetaY_15_20__1531","",630,-1575,1575);
   ThetaY_15_20__1531->SetBinContent(310,0.002074758);
   ThetaY_15_20__1531->SetBinContent(311,0.2129639);
   ThetaY_15_20__1531->SetBinContent(312,0.6429408);
   ThetaY_15_20__1531->SetBinContent(313,0.8783255);
   ThetaY_15_20__1531->SetBinContent(314,1);
   ThetaY_15_20__1531->SetBinContent(315,1.055416);
   ThetaY_15_20__1531->SetBinContent(316,1.04869);
   ThetaY_15_20__1531->SetBinContent(317,1.004049);
   ThetaY_15_20__1531->SetBinContent(318,0.8816719);
   ThetaY_15_20__1531->SetBinContent(319,0.6345748);
   ThetaY_15_20__1531->SetBinContent(320,0.2121942);
   ThetaY_15_20__1531->SetBinContent(321,0.001505873);
   ThetaY_15_20__1531->SetBinError(310,0.0002634946);
   ThetaY_15_20__1531->SetBinError(311,0.002669567);
   ThetaY_15_20__1531->SetBinError(312,0.004638456);
   ThetaY_15_20__1531->SetBinError(313,0.005421452);
   ThetaY_15_20__1531->SetBinError(314,0.005784794);
   ThetaY_15_20__1531->SetBinError(315,0.005942918);
   ThetaY_15_20__1531->SetBinError(316,0.005923951);
   ThetaY_15_20__1531->SetBinError(317,0.005796494);
   ThetaY_15_20__1531->SetBinError(318,0.00543177);
   ThetaY_15_20__1531->SetBinError(319,0.004608179);
   ThetaY_15_20__1531->SetBinError(320,0.002664739);
   ThetaY_15_20__1531->SetBinError(321,0.0002244823);
   ThetaY_15_20__1531->SetEntries(226346);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1531->SetLineColor(ci);
   ThetaY_15_20__1531->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1531->SetMarkerColor(ci);
   ThetaY_15_20__1531->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1531->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1531->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1531->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1531->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1531->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1531->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1531->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1531->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1531->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1531->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1531->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1531->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1531->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1531->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1531->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1531->Draw("AEsame");
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
   
   Double_t _fx3511[12] = {
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
   27.5};
   Double_t _fy3511[12] = {
   0,
   0.6201778,
   0.9742967,
   0.9408985,
   1,
   0.8295038,
   0.946374,
   0.8832162,
   0.05564043,
   0,
   0,
   0};
   Double_t _felx3511[12] = {
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
   Double_t _fely3511[12] = {
   0,
   0.1046046,
   0.07586761,
   0.0637948,
   0.06166136,
   0.05461929,
   0.05856212,
   0.05779777,
   0.01523469,
   0,
   0,
   0};
   Double_t _fehx3511[12] = {
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
   Double_t _fehy3511[12] = {
   3.398673,
   0.1239537,
   0.08202288,
   0.06827674,
   0.06558818,
   0.05834171,
   0.06230516,
   0.06171181,
   0.02011252,
   0.01094842,
   0.03274481,
   4.70911};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3511,_fy3511,_felx3511,_fehx3511,_fely3511,_fehy3511);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3511 = new TH1F("Graph_Graph3511","",100,-100,100);
   Graph_Graph3511->SetMinimum(0);
   Graph_Graph3511->SetMaximum(1.5);
   Graph_Graph3511->SetDirectory(0);
   Graph_Graph3511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3511->SetLineColor(ci);
   Graph_Graph3511->GetXaxis()->SetRange(1,100);
   Graph_Graph3511->GetXaxis()->CenterTitle(true);
   Graph_Graph3511->GetXaxis()->SetLabelFont(42);
   Graph_Graph3511->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3511->GetXaxis()->SetTitleFont(42);
   Graph_Graph3511->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3511->GetYaxis()->CenterTitle(true);
   Graph_Graph3511->GetYaxis()->SetLabelFont(42);
   Graph_Graph3511->GetYaxis()->SetTitleFont(42);
   Graph_Graph3511->GetZaxis()->SetLabelFont(42);
   Graph_Graph3511->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3511->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3511);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.160958,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1532 = new TH2D("ThetaY_vs_Y_15_20__1532","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8076,62);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8102,6364);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8128,19213);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8154,26247);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8180,29883);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8206,31539);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8232,31338);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8258,30004);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8284,26347);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8310,18963);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8336,6341);
   ThetaY_vs_Y_15_20__1532->SetBinContent(8362,45);
   ThetaY_vs_Y_15_20__1532->SetEntries(226346);
   ThetaY_vs_Y_15_20__1532->SetContour(20);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(1,1576.95);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(2,3153.9);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(3,4730.85);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(4,6307.8);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(5,7884.75);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(6,9461.7);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(7,11038.65);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(8,12615.6);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(9,14192.55);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(10,15769.5);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(11,17346.45);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(12,18923.4);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(13,20500.35);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(14,22077.3);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(15,23654.25);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(16,25231.2);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(17,26808.15);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(18,28385.1);
   ThetaY_vs_Y_15_20__1532->SetContourLevel(19,29962.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1532->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1532->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1532->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1532->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1532->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1532->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1532->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1532->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1532->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1532->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1532->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1532->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1532->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1532->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1532->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1532->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_15_20","Reco vertices","lpf");
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
