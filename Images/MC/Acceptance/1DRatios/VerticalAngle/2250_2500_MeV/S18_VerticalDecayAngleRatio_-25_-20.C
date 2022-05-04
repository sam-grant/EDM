void S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09138941,125,1.736399);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI25_mI20__1620 = new TH1D("S18_ThetaY_mI25_mI20__1620","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__1620->SetBinContent(314,0.4423077);
   S18_ThetaY_mI25_mI20__1620->SetBinContent(315,1);
   S18_ThetaY_mI25_mI20__1620->SetBinContent(316,1.25);
   S18_ThetaY_mI25_mI20__1620->SetBinContent(317,0.9038462);
   S18_ThetaY_mI25_mI20__1620->SetBinContent(318,1);
   S18_ThetaY_mI25_mI20__1620->SetBinContent(319,0.2115385);
   S18_ThetaY_mI25_mI20__1620->SetBinError(314,0.09222753);
   S18_ThetaY_mI25_mI20__1620->SetBinError(315,0.138675);
   S18_ThetaY_mI25_mI20__1620->SetBinError(316,0.1550434);
   S18_ThetaY_mI25_mI20__1620->SetBinError(317,0.1318395);
   S18_ThetaY_mI25_mI20__1620->SetBinError(318,0.138675);
   S18_ThetaY_mI25_mI20__1620->SetBinError(319,0.06378125);
   S18_ThetaY_mI25_mI20__1620->SetMinimum(0);
   S18_ThetaY_mI25_mI20__1620->SetMaximum(1.55362);
   S18_ThetaY_mI25_mI20__1620->SetEntries(250);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1620->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__1620->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1620->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__1620->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__1620->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__1620->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1620->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1620->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1620->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__1620->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__1620->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1620->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1620->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1620->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1620->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1620->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1621 = new TH1D("ThetaY_mI25_mI20__1621","",630,-1575,1575);
   ThetaY_mI25_mI20__1621->SetBinContent(311,0.007848603);
   ThetaY_mI25_mI20__1621->SetBinContent(312,0.423091);
   ThetaY_mI25_mI20__1621->SetBinContent(313,1.002641);
   ThetaY_mI25_mI20__1621->SetBinContent(314,1.259811);
   ThetaY_mI25_mI20__1621->SetBinContent(315,1.380327);
   ThetaY_mI25_mI20__1621->SetBinContent(316,1.412382);
   ThetaY_mI25_mI20__1621->SetBinContent(317,1.276755);
   ThetaY_mI25_mI20__1621->SetBinContent(318,1);
   ThetaY_mI25_mI20__1621->SetBinContent(319,0.4128952);
   ThetaY_mI25_mI20__1621->SetBinContent(320,0.008435414);
   ThetaY_mI25_mI20__1621->SetBinError(311,0.0007587531);
   ThetaY_mI25_mI20__1621->SetBinError(312,0.005570846);
   ThetaY_mI25_mI20__1621->SetBinError(313,0.008575845);
   ThetaY_mI25_mI20__1621->SetBinError(314,0.009612956);
   ThetaY_mI25_mI20__1621->SetBinError(315,0.01006225);
   ThetaY_mI25_mI20__1621->SetBinError(316,0.01017842);
   ThetaY_mI25_mI20__1621->SetBinError(317,0.009677386);
   ThetaY_mI25_mI20__1621->SetBinError(318,0.008564545);
   ThetaY_mI25_mI20__1621->SetBinError(319,0.005503313);
   ThetaY_mI25_mI20__1621->SetBinError(320,0.0007866064);
   ThetaY_mI25_mI20__1621->SetEntries(111575);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1621->SetLineColor(ci);
   ThetaY_mI25_mI20__1621->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1621->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1621->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1621->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1621->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1621->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1621->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1621->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1621->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1621->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1621->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1621->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1621->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1621->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1621->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1621->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1621->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1621->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1621->Draw("AEsame");
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
   
   Double_t _fx3541[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3541[10] = {
   0,
   0,
   0,
   0.3510906,
   0.7244659,
   0.8850299,
   0.7079245,
   1,
   0.5123297,
   0};
   Double_t _felx3541[10] = {
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
   Double_t _fely3541[10] = {
   0,
   0,
   0,
   0.0727181,
   0.1002769,
   0.1096732,
   0.1030287,
   0.1384861,
   0.1522322,
   0};
   Double_t _fehx3541[10] = {
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
   Double_t _fehy3541[10] = {
   4.54993,
   0.08369337,
   0.0353134,
   0.0896069,
   0.1152257,
   0.1241919,
   0.1192439,
   0.1591458,
   0.205983,
   4.230874};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3541,_fy3541,_felx3541,_fehx3541,_fely3541,_fehy3541);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3541 = new TH1F("Graph_Graph3541","",100,-100,100);
   Graph_Graph3541->SetMinimum(0);
   Graph_Graph3541->SetMaximum(1.5);
   Graph_Graph3541->SetDirectory(0);
   Graph_Graph3541->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3541->SetLineColor(ci);
   Graph_Graph3541->GetXaxis()->SetRange(1,100);
   Graph_Graph3541->GetXaxis()->CenterTitle(true);
   Graph_Graph3541->GetXaxis()->SetLabelFont(42);
   Graph_Graph3541->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3541->GetXaxis()->SetTitleFont(42);
   Graph_Graph3541->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3541->GetYaxis()->CenterTitle(true);
   Graph_Graph3541->GetYaxis()->SetLabelFont(42);
   Graph_Graph3541->GetYaxis()->SetTitleFont(42);
   Graph_Graph3541->GetZaxis()->SetLabelFont(42);
   Graph_Graph3541->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3541->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3541);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.55362,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1622 = new TH2D("ThetaY_vs_Y_mI25_mI20__1622","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8094,107);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8120,5768);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8146,13669);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8172,17175);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8198,18818);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8224,19255);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8250,17406);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8276,13633);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8302,5629);
   ThetaY_vs_Y_mI25_mI20__1622->SetBinContent(8328,115);
   ThetaY_vs_Y_mI25_mI20__1622->SetEntries(111575);
   ThetaY_vs_Y_mI25_mI20__1622->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(1,962.75);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(2,1925.5);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(3,2888.25);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(4,3851);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(5,4813.75);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(6,5776.5);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(7,6739.25);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(8,7702);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(9,8664.75);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(10,9627.5);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(11,10590.25);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(12,11553);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(13,12515.75);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(14,13478.5);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(15,14441.25);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(16,15404);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(17,16366.75);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(18,17329.5);
   ThetaY_vs_Y_mI25_mI20__1622->SetContourLevel(19,18292.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1622->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1622->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1622->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1622->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1622->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1622->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1622->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1622->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1622->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1622->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1622->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1622->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1622->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1622->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1622->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1622->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-25_-20","Reco vertices","lpf");
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
