void S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_25_30__1821 = new TH1D("S18_ThetaY_25_30__1821","",630,-1575,1575);
   S18_ThetaY_25_30__1821->SetBinContent(313,0.3636364);
   S18_ThetaY_25_30__1821->SetBinContent(314,0.5151515);
   S18_ThetaY_25_30__1821->SetBinContent(315,1);
   S18_ThetaY_25_30__1821->SetBinContent(316,0.4848485);
   S18_ThetaY_25_30__1821->SetBinError(313,0.1049728);
   S18_ThetaY_25_30__1821->SetBinError(314,0.1249426);
   S18_ThetaY_25_30__1821->SetBinError(315,0.1740777);
   S18_ThetaY_25_30__1821->SetBinError(316,0.1212121);
   S18_ThetaY_25_30__1821->SetMinimum(0);
   S18_ThetaY_25_30__1821->SetMaximum(1.1);
   S18_ThetaY_25_30__1821->SetEntries(78);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1821->SetLineColor(ci);
   S18_ThetaY_25_30__1821->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1821->SetMarkerColor(ci);
   S18_ThetaY_25_30__1821->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__1821->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__1821->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1821->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1821->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1821->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__1821->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__1821->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1821->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1821->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1821->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1821->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1821->Draw("AE");
   
   TH1D *ThetaY_25_30__1822 = new TH1D("ThetaY_25_30__1822","",630,-1575,1575);
   ThetaY_25_30__1822->SetBinContent(312,0.02149447);
   ThetaY_25_30__1822->SetBinContent(313,0.4246173);
   ThetaY_25_30__1822->SetBinContent(314,0.8390956);
   ThetaY_25_30__1822->SetBinContent(315,1);
   ThetaY_25_30__1822->SetBinContent(316,0.9797222);
   ThetaY_25_30__1822->SetBinContent(317,0.8279428);
   ThetaY_25_30__1822->SetBinContent(318,0.4017033);
   ThetaY_25_30__1822->SetBinContent(319,0.02230559);
   ThetaY_25_30__1822->SetBinError(312,0.001476247);
   ThetaY_25_30__1822->SetBinError(313,0.006561367);
   ThetaY_25_30__1822->SetBinError(314,0.009223616);
   ThetaY_25_30__1822->SetBinError(315,0.01006921);
   ThetaY_25_30__1822->SetBinError(316,0.009966598);
   ThetaY_25_30__1822->SetBinError(317,0.009162113);
   ThetaY_25_30__1822->SetBinError(318,0.006381874);
   ThetaY_25_30__1822->SetBinError(319,0.001503842);
   ThetaY_25_30__1822->SetEntries(44550);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1822->SetLineColor(ci);
   ThetaY_25_30__1822->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1822->SetMarkerColor(ci);
   ThetaY_25_30__1822->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1822->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1822->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1822->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1822->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1822->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1822->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1822->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1822->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1822->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1822->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1822->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1822->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1822->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1822->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1822->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1822->Draw("AEsame");
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
   
   Double_t _fx3608[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3608[8] = {
   0,
   0.8563862,
   0.6139366,
   1,
   0.4948836,
   0,
   0,
   0};
   Double_t _felx3608[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3608[8] = {
   0,
   0.2440549,
   0.1475668,
   0.1734722,
   0.1225112,
   0,
   0,
   0};
   Double_t _fehx3608[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3608[8] = {
   2.606785,
   0.326057,
   0.1881787,
   0.2065541,
   0.1573919,
   0.06738971,
   0.1389122,
   2.511596};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3608,_fy3608,_felx3608,_fehx3608,_fely3608,_fehy3608);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3608 = new TH1F("Graph_Graph3608","",100,-100,100);
   Graph_Graph3608->SetMinimum(0);
   Graph_Graph3608->SetMaximum(1.5);
   Graph_Graph3608->SetDirectory(0);
   Graph_Graph3608->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3608->SetLineColor(ci);
   Graph_Graph3608->GetXaxis()->SetRange(1,100);
   Graph_Graph3608->GetXaxis()->CenterTitle(true);
   Graph_Graph3608->GetXaxis()->SetLabelFont(42);
   Graph_Graph3608->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3608->GetXaxis()->SetTitleFont(42);
   Graph_Graph3608->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3608->GetYaxis()->CenterTitle(true);
   Graph_Graph3608->GetYaxis()->SetLabelFont(42);
   Graph_Graph3608->GetYaxis()->SetTitleFont(42);
   Graph_Graph3608->GetZaxis()->SetLabelFont(42);
   Graph_Graph3608->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3608->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3608);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1823 = new TH2D("ThetaY_vs_Y_25_30__1823","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8130,212);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8156,4188);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8182,8276);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8208,9863);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8234,9663);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8260,8166);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8286,3962);
   ThetaY_vs_Y_25_30__1823->SetBinContent(8312,220);
   ThetaY_vs_Y_25_30__1823->SetEntries(44550);
   ThetaY_vs_Y_25_30__1823->SetContour(20);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(1,493.15);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(2,986.3);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(3,1479.45);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(4,1972.6);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(5,2465.75);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(6,2958.9);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(7,3452.05);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(8,3945.2);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(9,4438.35);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(10,4931.5);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(11,5424.65);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(12,5917.8);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(13,6410.95);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(14,6904.1);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(15,7397.25);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(16,7890.4);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(17,8383.55);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(18,8876.7);
   ThetaY_vs_Y_25_30__1823->SetContourLevel(19,9369.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1823->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1823->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1823->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1823->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1823->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1823->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1823->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1823->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1823->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1823->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1823->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1823->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1823->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1823->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1823->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1823->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
