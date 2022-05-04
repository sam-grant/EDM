void S12S18_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-31.01856,125,589.3527);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__1506 = new TH1D("S12S18_ThetaY_mI25_mI20__1506","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(313,2);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(314,90);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(315,192);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(316,176);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(317,187);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(318,135);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(319,106);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(320,42);
   S12S18_ThetaY_mI25_mI20__1506->SetBinContent(321,1);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(313,1.414214);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(314,9.486833);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(315,13.85641);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(316,13.2665);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(317,13.67479);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(318,11.61895);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(319,10.29563);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(320,6.480741);
   S12S18_ThetaY_mI25_mI20__1506->SetBinError(321,1);
   S12S18_ThetaY_mI25_mI20__1506->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__1506->SetMaximum(527.3156);
   S12S18_ThetaY_mI25_mI20__1506->SetEntries(931);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1506->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__1506->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1506->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__1506->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__1506->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__1506->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1506->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1506->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1506->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__1506->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__1506->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1506->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1506->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1506->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1506->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1506->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1507 = new TH1D("ThetaY_mI25_mI20__1507","",630,-1575,1575);
   ThetaY_mI25_mI20__1507->SetBinContent(310,0.8888889);
   ThetaY_mI25_mI20__1507->SetBinContent(311,94.55556);
   ThetaY_mI25_mI20__1507->SetBinContent(312,289.9556);
   ThetaY_mI25_mI20__1507->SetBinContent(313,393.9556);
   ThetaY_mI25_mI20__1507->SetBinContent(314,450.3556);
   ThetaY_mI25_mI20__1507->SetBinContent(315,479.3778);
   ThetaY_mI25_mI20__1507->SetBinContent(316,476.4);
   ThetaY_mI25_mI20__1507->SetBinContent(317,447.2222);
   ThetaY_mI25_mI20__1507->SetBinContent(318,396.2889);
   ThetaY_mI25_mI20__1507->SetBinContent(319,293.9333);
   ThetaY_mI25_mI20__1507->SetBinContent(320,94.62222);
   ThetaY_mI25_mI20__1507->SetBinContent(321,1);
   ThetaY_mI25_mI20__1507->SetBinError(310,0.1405457);
   ThetaY_mI25_mI20__1507->SetBinError(311,1.449564);
   ThetaY_mI25_mI20__1507->SetBinError(312,2.538396);
   ThetaY_mI25_mI20__1507->SetBinError(313,2.958812);
   ThetaY_mI25_mI20__1507->SetBinError(314,3.163527);
   ThetaY_mI25_mI20__1507->SetBinError(315,3.263869);
   ThetaY_mI25_mI20__1507->SetBinError(316,3.253716);
   ThetaY_mI25_mI20__1507->SetBinError(317,3.152502);
   ThetaY_mI25_mI20__1507->SetBinError(318,2.967561);
   ThetaY_mI25_mI20__1507->SetBinError(319,2.555749);
   ThetaY_mI25_mI20__1507->SetBinError(320,1.450074);
   ThetaY_mI25_mI20__1507->SetBinError(321,0.1490712);
   ThetaY_mI25_mI20__1507->SetEntries(153835);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1507->SetLineColor(ci);
   ThetaY_mI25_mI20__1507->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1507->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1507->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1507->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1507->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1507->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1507->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1507->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1507->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1507->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1507->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1507->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1507->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1507->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1507->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1507->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1507->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1507->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1507->Draw("AEsame");
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
   
   Double_t _fx3503[12] = {
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
   Double_t _fy3503[12] = {
   0,
   0,
   0,
   0.005076715,
   0.1998421,
   0.4005192,
   0.3694374,
   0.4181366,
   0.3406606,
   0.360626,
   0.4438704,
   1};
   Double_t _felx3503[12] = {
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
   Double_t _fely3503[12] = {
   0,
   0,
   0,
   0.003279203,
   0.02107214,
   0.02900739,
   0.02793426,
   0.03069069,
   0.02939288,
   0.03511033,
   0.06854482,
   0.830684};
   Double_t _fehx3503[12] = {
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
   Double_t _fehy3503[12] = {
   2.119552,
   0.01947448,
   0.006349772,
   0.006696706,
   0.02342165,
   0.03118981,
   0.03013217,
   0.03303214,
   0.03204718,
   0.03871012,
   0.08006489,
   2.384947};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3503,_fy3503,_felx3503,_fehx3503,_fely3503,_fehy3503);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3503 = new TH1F("Graph_Graph3503","",100,-100,100);
   Graph_Graph3503->SetMinimum(0);
   Graph_Graph3503->SetMaximum(1.5);
   Graph_Graph3503->SetDirectory(0);
   Graph_Graph3503->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3503->SetLineColor(ci);
   Graph_Graph3503->GetXaxis()->SetRange(1,100);
   Graph_Graph3503->GetXaxis()->CenterTitle(true);
   Graph_Graph3503->GetXaxis()->SetLabelFont(42);
   Graph_Graph3503->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3503->GetXaxis()->SetTitleFont(42);
   Graph_Graph3503->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3503->GetYaxis()->CenterTitle(true);
   Graph_Graph3503->GetYaxis()->SetLabelFont(42);
   Graph_Graph3503->GetYaxis()->SetTitleFont(42);
   Graph_Graph3503->GetZaxis()->SetLabelFont(42);
   Graph_Graph3503->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3503->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3503);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,527.3156,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1508 = new TH2D("ThetaY_vs_Y_mI25_mI20__1508","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8068,40);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8094,4255);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8120,13048);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8146,17728);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8172,20266);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8198,21572);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8224,21438);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8250,20125);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8276,17833);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8302,13227);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8328,4258);
   ThetaY_vs_Y_mI25_mI20__1508->SetBinContent(8354,45);
   ThetaY_vs_Y_mI25_mI20__1508->SetEntries(153835);
   ThetaY_vs_Y_mI25_mI20__1508->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(1,1078.6);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(2,2157.2);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(3,3235.8);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(4,4314.4);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(5,5393);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(6,6471.6);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(7,7550.2);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(8,8628.8);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(9,9707.4);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(10,10786);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(11,11864.6);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(12,12943.2);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(13,14021.8);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(14,15100.4);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(15,16179);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(16,17257.6);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(17,18336.2);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(18,19414.8);
   ThetaY_vs_Y_mI25_mI20__1508->SetContourLevel(19,20493.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1508->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1508->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1508->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1508->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1508->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1508->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1508->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1508->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1508->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1508->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1508->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1508->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1508->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1508->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1508->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1508->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
