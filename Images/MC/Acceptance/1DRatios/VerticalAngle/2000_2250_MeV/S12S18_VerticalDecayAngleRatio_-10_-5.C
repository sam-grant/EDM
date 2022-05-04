void S12S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.07741134,125,1.470815);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__1515 = new TH1D("S12S18_ThetaY_mI10_mI5__1515","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(312,0.05511811);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(313,0.6456693);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(314,1.076115);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(315,1.086614);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(316,1.188976);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(317,0.992126);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(318,1);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(319,0.4908136);
   S12S18_ThetaY_mI10_mI5__1515->SetBinContent(320,0.05511811);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(312,0.01202776);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(313,0.04116637);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(314,0.05314556);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(315,0.05340417);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(316,0.05586298);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(317,0.05102945);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(318,0.05123155);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(319,0.03589185);
   S12S18_ThetaY_mI10_mI5__1515->SetBinError(320,0.01202776);
   S12S18_ThetaY_mI10_mI5__1515->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__1515->SetMaximum(1.315993);
   S12S18_ThetaY_mI10_mI5__1515->SetEntries(2511);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1515->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__1515->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1515->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__1515->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__1515->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__1515->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1515->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1515->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1515->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__1515->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__1515->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1515->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1515->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1515->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1515->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1515->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1516 = new TH1D("ThetaY_mI10_mI5__1516","",630,-1575,1575);
   ThetaY_mI10_mI5__1516->SetBinContent(310,0.001761973);
   ThetaY_mI10_mI5__1516->SetBinContent(311,0.2419624);
   ThetaY_mI10_mI5__1516->SetBinContent(312,0.7298231);
   ThetaY_mI10_mI5__1516->SetBinContent(313,0.9860186);
   ThetaY_mI10_mI5__1516->SetBinContent(314,1.12716);
   ThetaY_mI10_mI5__1516->SetBinContent(315,1.196357);
   ThetaY_mI10_mI5__1516->SetBinContent(316,1.191163);
   ThetaY_mI10_mI5__1516->SetBinContent(317,1.131027);
   ThetaY_mI10_mI5__1516->SetBinContent(318,1);
   ThetaY_mI10_mI5__1516->SetBinContent(319,0.7235304);
   ThetaY_mI10_mI5__1516->SetBinContent(320,0.2444795);
   ThetaY_mI10_mI5__1516->SetBinContent(321,0.001967918);
   ThetaY_mI10_mI5__1516->SetBinError(310,0.0002007955);
   ThetaY_mI10_mI5__1516->SetBinError(311,0.002353034);
   ThetaY_mI10_mI5__1516->SetBinError(312,0.004086609);
   ThetaY_mI10_mI5__1516->SetBinError(313,0.004750036);
   ThetaY_mI10_mI5__1516->SetBinError(314,0.005078635);
   ThetaY_mI10_mI5__1516->SetBinError(315,0.005232205);
   ThetaY_mI10_mI5__1516->SetBinError(316,0.005220834);
   ThetaY_mI10_mI5__1516->SetBinError(317,0.00508734);
   ThetaY_mI10_mI5__1516->SetBinError(318,0.004783594);
   ThetaY_mI10_mI5__1516->SetBinError(319,0.004068953);
   ThetaY_mI10_mI5__1516->SetBinError(320,0.002365242);
   ThetaY_mI10_mI5__1516->SetBinError(321,0.0002122061);
   ThetaY_mI10_mI5__1516->SetEntries(374747);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1516->SetLineColor(ci);
   ThetaY_mI10_mI5__1516->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1516->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1516->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1516->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1516->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1516->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1516->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1516->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1516->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1516->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1516->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1516->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1516->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1516->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1516->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1516->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1516->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1516->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1516->Draw("AEsame");
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
   
   Double_t _fx3506[12] = {
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
   Double_t _fy3506[12] = {
   0,
   0,
   0.07552256,
   0.6548246,
   0.9547144,
   0.9082691,
   0.9981646,
   0.8771906,
   1,
   0.6783594,
   0.2254508,
   0};
   Double_t _felx3506[12] = {
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
   Double_t _fely3506[12] = {
   0,
   0,
   0.01635329,
   0.04184017,
   0.04732604,
   0.04479688,
   0.04708367,
   0.04526954,
   0.05143125,
   0.04970777,
   0.04884848,
   0};
   Double_t _fehx3506[12] = {
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
   Double_t _fehy3506[12] = {
   2.775471,
   0.0199721,
   0.0203463,
   0.04460399,
   0.04973328,
   0.04706364,
   0.04935973,
   0.04766929,
   0.05414823,
   0.05349251,
   0.06078835,
   2.481896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3506,_fy3506,_felx3506,_fehx3506,_fely3506,_fehy3506);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3506 = new TH1F("Graph_Graph3506","",100,-100,100);
   Graph_Graph3506->SetMinimum(0);
   Graph_Graph3506->SetMaximum(1.5);
   Graph_Graph3506->SetDirectory(0);
   Graph_Graph3506->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3506->SetLineColor(ci);
   Graph_Graph3506->GetXaxis()->SetRange(1,100);
   Graph_Graph3506->GetXaxis()->CenterTitle(true);
   Graph_Graph3506->GetXaxis()->SetLabelFont(42);
   Graph_Graph3506->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3506->GetXaxis()->SetTitleFont(42);
   Graph_Graph3506->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3506->GetYaxis()->CenterTitle(true);
   Graph_Graph3506->GetYaxis()->SetLabelFont(42);
   Graph_Graph3506->GetYaxis()->SetTitleFont(42);
   Graph_Graph3506->GetZaxis()->SetLabelFont(42);
   Graph_Graph3506->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3506->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3506);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.315993,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1517 = new TH2D("ThetaY_vs_Y_mI10_mI5__1517","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8071,77);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8097,10574);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8123,31894);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8149,43090);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8175,49258);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8201,52282);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8227,52055);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8253,49427);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8279,43701);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8305,31619);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8331,10684);
   ThetaY_vs_Y_mI10_mI5__1517->SetBinContent(8357,86);
   ThetaY_vs_Y_mI10_mI5__1517->SetEntries(374747);
   ThetaY_vs_Y_mI10_mI5__1517->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(1,2614.1);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(2,5228.2);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(3,7842.3);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(4,10456.4);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(5,13070.5);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(6,15684.6);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(7,18298.7);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(8,20912.8);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(9,23526.9);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(10,26141);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(11,28755.1);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(12,31369.2);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(13,33983.3);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(14,36597.4);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(15,39211.5);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(16,41825.6);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(17,44439.7);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(18,47053.8);
   ThetaY_vs_Y_mI10_mI5__1517->SetContourLevel(19,49667.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1517->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1517->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1517->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1517->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1517->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1517->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1517->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1517->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1517->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1517->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1517->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1517->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1517->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1517->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1517->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1517->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-10_-5","Reco vertices","lpf");
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
