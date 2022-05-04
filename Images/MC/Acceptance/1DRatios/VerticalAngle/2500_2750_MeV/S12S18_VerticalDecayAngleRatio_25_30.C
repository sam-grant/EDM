void S12S18_VerticalDecayAngleRatio_25_30()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__1878 = new TH1D("S12S18_ThetaY_25_30__1878","",630,-1575,1575);
   S12S18_ThetaY_25_30__1878->SetBinContent(312,0.01515152);
   S12S18_ThetaY_25_30__1878->SetBinContent(313,0.2575758);
   S12S18_ThetaY_25_30__1878->SetBinContent(314,0.7272727);
   S12S18_ThetaY_25_30__1878->SetBinContent(315,1);
   S12S18_ThetaY_25_30__1878->SetBinContent(316,0.5);
   S12S18_ThetaY_25_30__1878->SetBinContent(317,0.03030303);
   S12S18_ThetaY_25_30__1878->SetBinError(312,0.01515152);
   S12S18_ThetaY_25_30__1878->SetBinError(313,0.0624713);
   S12S18_ThetaY_25_30__1878->SetBinError(314,0.1049728);
   S12S18_ThetaY_25_30__1878->SetBinError(315,0.1230915);
   S12S18_ThetaY_25_30__1878->SetBinError(316,0.08703883);
   S12S18_ThetaY_25_30__1878->SetBinError(317,0.02142748);
   S12S18_ThetaY_25_30__1878->SetMinimum(0);
   S12S18_ThetaY_25_30__1878->SetMaximum(1.1);
   S12S18_ThetaY_25_30__1878->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1878->SetLineColor(ci);
   S12S18_ThetaY_25_30__1878->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__1878->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__1878->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__1878->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__1878->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1878->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1878->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1878->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__1878->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__1878->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1878->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1878->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__1878->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__1878->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__1878->Draw("AE");
   
   TH1D *ThetaY_25_30__1879 = new TH1D("ThetaY_25_30__1879","",630,-1575,1575);
   ThetaY_25_30__1879->SetBinContent(312,0.02149447);
   ThetaY_25_30__1879->SetBinContent(313,0.4246173);
   ThetaY_25_30__1879->SetBinContent(314,0.8390956);
   ThetaY_25_30__1879->SetBinContent(315,1);
   ThetaY_25_30__1879->SetBinContent(316,0.9797222);
   ThetaY_25_30__1879->SetBinContent(317,0.8279428);
   ThetaY_25_30__1879->SetBinContent(318,0.4017033);
   ThetaY_25_30__1879->SetBinContent(319,0.02230559);
   ThetaY_25_30__1879->SetBinError(312,0.001476247);
   ThetaY_25_30__1879->SetBinError(313,0.006561367);
   ThetaY_25_30__1879->SetBinError(314,0.009223616);
   ThetaY_25_30__1879->SetBinError(315,0.01006921);
   ThetaY_25_30__1879->SetBinError(316,0.009966598);
   ThetaY_25_30__1879->SetBinError(317,0.009162113);
   ThetaY_25_30__1879->SetBinError(318,0.006381874);
   ThetaY_25_30__1879->SetBinError(319,0.001503842);
   ThetaY_25_30__1879->SetEntries(44550);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1879->SetLineColor(ci);
   ThetaY_25_30__1879->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1879->SetMarkerColor(ci);
   ThetaY_25_30__1879->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1879->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1879->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1879->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1879->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1879->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1879->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1879->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1879->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1879->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1879->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1879->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1879->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1879->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1879->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1879->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1879->Draw("AEsame");
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
   
   Double_t _fx3627[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3627[8] = {
   0.7049028,
   0.6066069,
   0.866734,
   1,
   0.5103488,
   0.03660039,
   0,
   0};
   Double_t _felx3627[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3627[8] = {
   0.5836507,
   0.1459429,
   0.1250187,
   0.1231829,
   0.08853427,
   0.02364228,
   0,
   0};
   Double_t _fehx3627[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3627[8] = {
   1.633592,
   0.1861751,
   0.1445149,
   0.1393936,
   0.105419,
   0.04828706,
   0.06945611,
   1.255798};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3627,_fy3627,_felx3627,_fehx3627,_fely3627,_fehy3627);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3627 = new TH1F("Graph_Graph3627","",100,-100,100);
   Graph_Graph3627->SetMinimum(0);
   Graph_Graph3627->SetMaximum(1.5);
   Graph_Graph3627->SetDirectory(0);
   Graph_Graph3627->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3627->SetLineColor(ci);
   Graph_Graph3627->GetXaxis()->SetRange(1,100);
   Graph_Graph3627->GetXaxis()->CenterTitle(true);
   Graph_Graph3627->GetXaxis()->SetLabelFont(42);
   Graph_Graph3627->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3627->GetXaxis()->SetTitleFont(42);
   Graph_Graph3627->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3627->GetYaxis()->CenterTitle(true);
   Graph_Graph3627->GetYaxis()->SetLabelFont(42);
   Graph_Graph3627->GetYaxis()->SetTitleFont(42);
   Graph_Graph3627->GetZaxis()->SetLabelFont(42);
   Graph_Graph3627->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3627->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3627);
   
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
   
   TH2D *ThetaY_vs_Y_25_30__1880 = new TH2D("ThetaY_vs_Y_25_30__1880","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8130,212);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8156,4188);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8182,8276);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8208,9863);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8234,9663);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8260,8166);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8286,3962);
   ThetaY_vs_Y_25_30__1880->SetBinContent(8312,220);
   ThetaY_vs_Y_25_30__1880->SetEntries(44550);
   ThetaY_vs_Y_25_30__1880->SetContour(20);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(1,493.15);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(2,986.3);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(3,1479.45);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(4,1972.6);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(5,2465.75);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(6,2958.9);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(7,3452.05);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(8,3945.2);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(9,4438.35);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(10,4931.5);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(11,5424.65);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(12,5917.8);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(13,6410.95);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(14,6904.1);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(15,7397.25);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(16,7890.4);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(17,8383.55);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(18,8876.7);
   ThetaY_vs_Y_25_30__1880->SetContourLevel(19,9369.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1880->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1880->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1880->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1880->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1880->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1880->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1880->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1880->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1880->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1880->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1880->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1880->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1880->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1880->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1880->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1880->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
