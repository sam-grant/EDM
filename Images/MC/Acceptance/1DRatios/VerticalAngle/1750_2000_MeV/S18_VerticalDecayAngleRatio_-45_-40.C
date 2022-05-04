void S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07560856,125,1.436562);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI45_mI40__1266 = new TH1D("S18_ThetaY_mI45_mI40__1266","",630,-1575,1575);
   S18_ThetaY_mI45_mI40__1266->SetBinContent(316,0.5833333);
   S18_ThetaY_mI45_mI40__1266->SetBinContent(317,1.083333);
   S18_ThetaY_mI45_mI40__1266->SetBinContent(318,1);
   S18_ThetaY_mI45_mI40__1266->SetBinContent(319,0.6666667);
   S18_ThetaY_mI45_mI40__1266->SetBinContent(320,0.25);
   S18_ThetaY_mI45_mI40__1266->SetBinContent(321,0.1666667);
   S18_ThetaY_mI45_mI40__1266->SetBinError(316,0.2204793);
   S18_ThetaY_mI45_mI40__1266->SetBinError(317,0.3004626);
   S18_ThetaY_mI45_mI40__1266->SetBinError(318,0.2886751);
   S18_ThetaY_mI45_mI40__1266->SetBinError(319,0.2357023);
   S18_ThetaY_mI45_mI40__1266->SetBinError(320,0.1443376);
   S18_ThetaY_mI45_mI40__1266->SetBinError(321,0.1178511);
   S18_ThetaY_mI45_mI40__1266->SetMinimum(0);
   S18_ThetaY_mI45_mI40__1266->SetMaximum(1.285345);
   S18_ThetaY_mI45_mI40__1266->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__1266->SetLineColor(ci);
   S18_ThetaY_mI45_mI40__1266->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__1266->SetMarkerColor(ci);
   S18_ThetaY_mI45_mI40__1266->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI45_mI40__1266->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI45_mI40__1266->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1266->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__1266->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1266->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI45_mI40__1266->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI45_mI40__1266->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1266->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1266->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1266->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__1266->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1266->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1267 = new TH1D("ThetaY_mI45_mI40__1267","",630,-1575,1575);
   ThetaY_mI45_mI40__1267->SetBinContent(310,0.186572);
   ThetaY_mI45_mI40__1267->SetBinContent(311,0.6068431);
   ThetaY_mI45_mI40__1267->SetBinContent(312,0.8637831);
   ThetaY_mI45_mI40__1267->SetBinContent(313,0.9838606);
   ThetaY_mI45_mI40__1267->SetBinContent(314,1.104584);
   ThetaY_mI45_mI40__1267->SetBinContent(315,1.168496);
   ThetaY_mI45_mI40__1267->SetBinContent(316,1.12847);
   ThetaY_mI45_mI40__1267->SetBinContent(317,1.094254);
   ThetaY_mI45_mI40__1267->SetBinContent(318,1);
   ThetaY_mI45_mI40__1267->SetBinContent(319,0.8560362);
   ThetaY_mI45_mI40__1267->SetBinContent(320,0.6152356);
   ThetaY_mI45_mI40__1267->SetBinContent(321,0.1775339);
   ThetaY_mI45_mI40__1267->SetBinError(310,0.01097482);
   ThetaY_mI45_mI40__1267->SetBinError(311,0.01979304);
   ThetaY_mI45_mI40__1267->SetBinError(312,0.02361438);
   ThetaY_mI45_mI40__1267->SetBinError(313,0.02520235);
   ThetaY_mI45_mI40__1267->SetBinError(314,0.02670383);
   ThetaY_mI45_mI40__1267->SetBinError(315,0.02746552);
   ThetaY_mI45_mI40__1267->SetBinError(316,0.02699102);
   ThetaY_mI45_mI40__1267->SetBinError(317,0.02657868);
   ThetaY_mI45_mI40__1267->SetBinError(318,0.02540822);
   ThetaY_mI45_mI40__1267->SetBinError(319,0.02350825);
   ThetaY_mI45_mI40__1267->SetBinError(320,0.01992944);
   ThetaY_mI45_mI40__1267->SetBinError(321,0.0107057);
   ThetaY_mI45_mI40__1267->SetEntries(15158);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1267->SetLineColor(ci);
   ThetaY_mI45_mI40__1267->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1267->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1267->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1267->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1267->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1267->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1267->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1267->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1267->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1267->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1267->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1267->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1267->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1267->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1267->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1267->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1267->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1267->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1267->Draw("AEsame");
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
   
   Double_t _fx3423[12] = {
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
   Double_t _fy3423[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.5169241,
   0.9900197,
   1,
   0.7787833,
   0.4063484,
   0.9387879};
   Double_t _felx3423[12] = {
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
   Double_t _fely3423[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.1909658,
   0.2719757,
   0.2856225,
   0.2702187,
   0.2214044,
   0.6077489};
   Double_t _fehx3423[12] = {
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
   Double_t _fehy3423[12] = {
   0.8249265,
   0.2530618,
   0.1777345,
   0.1560294,
   0.1389673,
   0.1313625,
   0.2792789,
   0.3596117,
   0.3820147,
   0.3857807,
   0.3964945,
   1.248656};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3423,_fy3423,_felx3423,_fehx3423,_fely3423,_fehy3423);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3423 = new TH1F("Graph_Graph3423","",100,-100,100);
   Graph_Graph3423->SetMinimum(0);
   Graph_Graph3423->SetMaximum(1.5);
   Graph_Graph3423->SetDirectory(0);
   Graph_Graph3423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3423->SetLineColor(ci);
   Graph_Graph3423->GetXaxis()->SetRange(1,100);
   Graph_Graph3423->GetXaxis()->CenterTitle(true);
   Graph_Graph3423->GetXaxis()->SetLabelFont(42);
   Graph_Graph3423->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3423->GetXaxis()->SetTitleFont(42);
   Graph_Graph3423->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3423->GetYaxis()->CenterTitle(true);
   Graph_Graph3423->GetYaxis()->SetLabelFont(42);
   Graph_Graph3423->GetYaxis()->SetTitleFont(42);
   Graph_Graph3423->GetZaxis()->SetLabelFont(42);
   Graph_Graph3423->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3423->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3423);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.285345,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1268 = new TH2D("ThetaY_vs_Y_mI45_mI40__1268","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8064,289);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8090,940);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8116,1338);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8142,1524);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8168,1711);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8194,1810);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8220,1748);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8246,1695);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8272,1549);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8298,1326);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8324,953);
   ThetaY_vs_Y_mI45_mI40__1268->SetBinContent(8350,275);
   ThetaY_vs_Y_mI45_mI40__1268->SetEntries(15158);
   ThetaY_vs_Y_mI45_mI40__1268->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(1,90.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(2,181);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(3,271.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(4,362);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(5,452.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(6,543);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(7,633.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(8,724);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(9,814.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(10,905);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(11,995.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(12,1086);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(13,1176.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(14,1267);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(15,1357.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(16,1448);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(17,1538.5);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(18,1629);
   ThetaY_vs_Y_mI45_mI40__1268->SetContourLevel(19,1719.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1268->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1268->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1268->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1268->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1268->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1268->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1268->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1268->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1268->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1268->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1268->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1268->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1268->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1268->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1268->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1268->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-45_-40","Reco vertices","lpf");
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
