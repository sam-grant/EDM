void S12S18_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:12 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07638234,125,1.451264);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI5_0__1860 = new TH1D("S12S18_ThetaY_mI5_0__1860","",630,-1575,1575);
   S12S18_ThetaY_mI5_0__1860->SetBinContent(313,0.1473214);
   S12S18_ThetaY_mI5_0__1860->SetBinContent(314,0.8080357);
   S12S18_ThetaY_mI5_0__1860->SetBinContent(315,1.174107);
   S12S18_ThetaY_mI5_0__1860->SetBinContent(316,1.071429);
   S12S18_ThetaY_mI5_0__1860->SetBinContent(317,1);
   S12S18_ThetaY_mI5_0__1860->SetBinContent(318,0.1964286);
   S12S18_ThetaY_mI5_0__1860->SetBinError(313,0.02564537);
   S12S18_ThetaY_mI5_0__1860->SetBinError(314,0.06006082);
   S12S18_ThetaY_mI5_0__1860->SetBinError(315,0.07239855);
   S12S18_ThetaY_mI5_0__1860->SetBinError(316,0.06916042);
   S12S18_ThetaY_mI5_0__1860->SetBinError(317,0.06681531);
   S12S18_ThetaY_mI5_0__1860->SetBinError(318,0.02961272);
   S12S18_ThetaY_mI5_0__1860->SetMinimum(0);
   S12S18_ThetaY_mI5_0__1860->SetMaximum(1.2985);
   S12S18_ThetaY_mI5_0__1860->SetEntries(985);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1860->SetLineColor(ci);
   S12S18_ThetaY_mI5_0__1860->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI5_0__1860->SetMarkerColor(ci);
   S12S18_ThetaY_mI5_0__1860->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI5_0__1860->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI5_0__1860->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1860->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1860->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1860->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI5_0__1860->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI5_0__1860->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1860->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1860->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI5_0__1860->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI5_0__1860->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI5_0__1860->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1861 = new TH1D("ThetaY_mI5_0__1861","",630,-1575,1575);
   ThetaY_mI5_0__1861->SetBinContent(312,0.02316777);
   ThetaY_mI5_0__1861->SetBinContent(313,0.4985591);
   ThetaY_mI5_0__1861->SetBinContent(314,1.001271);
   ThetaY_mI5_0__1861->SetBinContent(315,1.179268);
   ThetaY_mI5_0__1861->SetBinContent(316,1.180454);
   ThetaY_mI5_0__1861->SetBinContent(317,1);
   ThetaY_mI5_0__1861->SetBinContent(318,0.5017235);
   ThetaY_mI5_0__1861->SetBinContent(319,0.02333729);
   ThetaY_mI5_0__1861->SetBinError(312,0.0008090536);
   ThetaY_mI5_0__1861->SetBinError(313,0.003753129);
   ThetaY_mI5_0__1861->SetBinError(314,0.005318768);
   ThetaY_mI5_0__1861->SetBinError(315,0.0057722);
   ThetaY_mI5_0__1861->SetBinError(316,0.005775103);
   ThetaY_mI5_0__1861->SetBinError(317,0.005315391);
   ThetaY_mI5_0__1861->SetBinError(318,0.003765021);
   ThetaY_mI5_0__1861->SetBinError(319,0.0008120081);
   ThetaY_mI5_0__1861->SetEntries(191403);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1861->SetLineColor(ci);
   ThetaY_mI5_0__1861->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1861->SetMarkerColor(ci);
   ThetaY_mI5_0__1861->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1861->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1861->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1861->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1861->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1861->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1861->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1861->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1861->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1861->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1861->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1861->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1861->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1861->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1861->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1861->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1861->Draw("AEsame");
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
   
   Double_t _fx3621[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3621[8] = {
   0,
   0.2954944,
   0.8070097,
   0.995624,
   0.9076409,
   1,
   0.3915077,
   0};
   Double_t _felx3621[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3621[8] = {
   0,
   0.05122343,
   0.06008115,
   0.06154606,
   0.05871438,
   0.06697545,
   0.05886802,
   0};
   Double_t _fehx3621[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3621[8] = {
   0.355152,
   0.06098142,
   0.06473158,
   0.06547509,
   0.06264272,
   0.07162077,
   0.06846656,
   0.3525693};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3621,_fy3621,_felx3621,_fehx3621,_fely3621,_fehy3621);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3621 = new TH1F("Graph_Graph3621","",100,-100,100);
   Graph_Graph3621->SetMinimum(0);
   Graph_Graph3621->SetMaximum(1.5);
   Graph_Graph3621->SetDirectory(0);
   Graph_Graph3621->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3621->SetLineColor(ci);
   Graph_Graph3621->GetXaxis()->SetRange(1,100);
   Graph_Graph3621->GetXaxis()->CenterTitle(true);
   Graph_Graph3621->GetXaxis()->SetLabelFont(42);
   Graph_Graph3621->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3621->GetXaxis()->SetTitleFont(42);
   Graph_Graph3621->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3621->GetYaxis()->CenterTitle(true);
   Graph_Graph3621->GetYaxis()->SetLabelFont(42);
   Graph_Graph3621->GetYaxis()->SetTitleFont(42);
   Graph_Graph3621->GetZaxis()->SetLabelFont(42);
   Graph_Graph3621->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3621->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3621);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.2985,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1862 = new TH2D("ThetaY_vs_Y_mI5_0__1862","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8124,820);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8150,17646);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8176,35439);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8202,41739);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8228,41781);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8254,35394);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8280,17758);
   ThetaY_vs_Y_mI5_0__1862->SetBinContent(8306,826);
   ThetaY_vs_Y_mI5_0__1862->SetEntries(191403);
   ThetaY_vs_Y_mI5_0__1862->SetContour(20);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(1,2089.05);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(2,4178.1);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(3,6267.15);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(4,8356.2);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(5,10445.25);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(6,12534.3);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(7,14623.35);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(8,16712.4);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(9,18801.45);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(10,20890.5);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(11,22979.55);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(12,25068.6);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(13,27157.65);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(14,29246.7);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(15,31335.75);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(16,33424.8);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(17,35513.85);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(18,37602.9);
   ThetaY_vs_Y_mI5_0__1862->SetContourLevel(19,39691.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1862->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1862->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1862->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1862->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1862->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1862->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1862->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1862->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1862->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1862->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1862->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1862->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1862->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1862->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1862->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1862->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-5_0","Reco vertices","lpf");
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
