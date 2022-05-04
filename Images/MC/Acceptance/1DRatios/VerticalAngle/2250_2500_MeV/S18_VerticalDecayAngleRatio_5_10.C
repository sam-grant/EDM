void S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-10.20334,125,193.8634);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_5_10__1638 = new TH1D("S18_ThetaY_5_10__1638","",630,-1575,1575);
   S18_ThetaY_5_10__1638->SetBinContent(311,1);
   S18_ThetaY_5_10__1638->SetBinContent(312,28);
   S18_ThetaY_5_10__1638->SetBinContent(313,110);
   S18_ThetaY_5_10__1638->SetBinContent(314,134);
   S18_ThetaY_5_10__1638->SetBinContent(315,138);
   S18_ThetaY_5_10__1638->SetBinContent(316,145);
   S18_ThetaY_5_10__1638->SetBinContent(317,133);
   S18_ThetaY_5_10__1638->SetBinContent(318,32);
   S18_ThetaY_5_10__1638->SetBinError(311,1);
   S18_ThetaY_5_10__1638->SetBinError(312,5.291503);
   S18_ThetaY_5_10__1638->SetBinError(313,10.48809);
   S18_ThetaY_5_10__1638->SetBinError(314,11.57584);
   S18_ThetaY_5_10__1638->SetBinError(315,11.74734);
   S18_ThetaY_5_10__1638->SetBinError(316,12.04159);
   S18_ThetaY_5_10__1638->SetBinError(317,11.53256);
   S18_ThetaY_5_10__1638->SetBinError(318,5.656854);
   S18_ThetaY_5_10__1638->SetMinimum(0);
   S18_ThetaY_5_10__1638->SetMaximum(173.4567);
   S18_ThetaY_5_10__1638->SetEntries(721);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1638->SetLineColor(ci);
   S18_ThetaY_5_10__1638->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1638->SetMarkerColor(ci);
   S18_ThetaY_5_10__1638->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__1638->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__1638->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1638->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1638->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1638->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__1638->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__1638->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1638->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1638->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1638->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1638->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1638->Draw("AE");
   
   TH1D *ThetaY_5_10__1639 = new TH1D("ThetaY_5_10__1639","",630,-1575,1575);
   ThetaY_5_10__1639->SetBinContent(311,1);
   ThetaY_5_10__1639->SetBinContent(312,46.24497);
   ThetaY_5_10__1639->SetBinContent(313,111.849);
   ThetaY_5_10__1639->SetBinContent(314,143.8054);
   ThetaY_5_10__1639->SetBinContent(315,157.6879);
   ThetaY_5_10__1639->SetBinContent(316,156.453);
   ThetaY_5_10__1639->SetBinContent(317,143.8356);
   ThetaY_5_10__1639->SetBinContent(318,111.4161);
   ThetaY_5_10__1639->SetBinContent(319,46.12081);
   ThetaY_5_10__1639->SetBinContent(320,0.966443);
   ThetaY_5_10__1639->SetBinError(311,0.05792844);
   ThetaY_5_10__1639->SetBinError(312,0.3939346);
   ThetaY_5_10__1639->SetBinError(313,0.6126436);
   ThetaY_5_10__1639->SetBinError(314,0.6946714);
   ThetaY_5_10__1639->SetBinError(315,0.7274298);
   ThetaY_5_10__1639->SetBinError(316,0.7245758);
   ThetaY_5_10__1639->SetBinError(317,0.6947443);
   ThetaY_5_10__1639->SetBinError(318,0.6114569);
   ThetaY_5_10__1639->SetBinError(319,0.3934054);
   ThetaY_5_10__1639->SetBinError(320,0.0569482);
   ThetaY_5_10__1639->SetEntries(273975);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1639->SetLineColor(ci);
   ThetaY_5_10__1639->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1639->SetMarkerColor(ci);
   ThetaY_5_10__1639->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1639->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1639->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1639->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1639->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1639->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1639->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1639->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1639->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1639->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1639->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1639->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1639->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1639->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1639->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1639->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1639->Draw("AEsame");
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
   
   Double_t _fx3547[10] = {
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
   Double_t _fy3547[10] = {
   1,
   0.6054713,
   0.9834688,
   0.931815,
   0.8751463,
   0.9267958,
   0.924667,
   0.2872116,
   0,
   0};
   Double_t _felx3547[10] = {
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
   Double_t _fely3547[10] = {
   0.8277742,
   0.1138475,
   0.09378037,
   0.08052072,
   0.07451548,
   0.07699604,
   0.08020114,
   0.0505292,
   0,
   0};
   Double_t _fehx3547[10] = {
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
   Double_t _fehy3547[10] = {
   2.312282,
   0.1375796,
   0.1031827,
   0.08780065,
   0.08114905,
   0.0836765,
   0.0874805,
   0.06031146,
   0.03992005,
   1.911048};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3547,_fy3547,_felx3547,_fehx3547,_fely3547,_fehy3547);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3547 = new TH1F("Graph_Graph3547","",100,-100,100);
   Graph_Graph3547->SetMinimum(0);
   Graph_Graph3547->SetMaximum(1.5);
   Graph_Graph3547->SetDirectory(0);
   Graph_Graph3547->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3547->SetLineColor(ci);
   Graph_Graph3547->GetXaxis()->SetRange(1,100);
   Graph_Graph3547->GetXaxis()->CenterTitle(true);
   Graph_Graph3547->GetXaxis()->SetLabelFont(42);
   Graph_Graph3547->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3547->GetXaxis()->SetTitleFont(42);
   Graph_Graph3547->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3547->GetYaxis()->CenterTitle(true);
   Graph_Graph3547->GetYaxis()->SetLabelFont(42);
   Graph_Graph3547->GetYaxis()->SetTitleFont(42);
   Graph_Graph3547->GetZaxis()->SetLabelFont(42);
   Graph_Graph3547->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3547->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3547);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,173.4567,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1640 = new TH2D("ThetaY_vs_Y_5_10__1640","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8100,298);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8126,13781);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8152,33331);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8178,42854);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8204,46991);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8230,46623);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8256,42863);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8282,33202);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8308,13744);
   ThetaY_vs_Y_5_10__1640->SetBinContent(8334,288);
   ThetaY_vs_Y_5_10__1640->SetEntries(273975);
   ThetaY_vs_Y_5_10__1640->SetContour(20);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(1,2349.55);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(2,4699.1);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(3,7048.65);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(4,9398.2);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(5,11747.75);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(6,14097.3);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(7,16446.85);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(8,18796.4);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(9,21145.95);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(10,23495.5);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(11,25845.05);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(12,28194.6);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(13,30544.15);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(14,32893.7);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(15,35243.25);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(16,37592.8);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(17,39942.35);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(18,42291.9);
   ThetaY_vs_Y_5_10__1640->SetContourLevel(19,44641.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1640->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1640->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1640->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1640->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1640->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1640->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1640->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1640->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1640->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1640->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1640->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1640->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1640->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1640->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1640->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1640->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_5_10","Reco vertices","lpf");
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
