void S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.318442,125,6.050399);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__1446 = new TH1D("S18_ThetaY_mI30_mI25__1446","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__1446->SetBinContent(314,0.8);
   S18_ThetaY_mI30_mI25__1446->SetBinContent(315,3.6);
   S18_ThetaY_mI30_mI25__1446->SetBinContent(316,3.466667);
   S18_ThetaY_mI30_mI25__1446->SetBinContent(317,3.266667);
   S18_ThetaY_mI30_mI25__1446->SetBinContent(318,3.533333);
   S18_ThetaY_mI30_mI25__1446->SetBinContent(319,1.8);
   S18_ThetaY_mI30_mI25__1446->SetBinContent(320,1);
   S18_ThetaY_mI30_mI25__1446->SetBinError(314,0.2309401);
   S18_ThetaY_mI30_mI25__1446->SetBinError(315,0.4898979);
   S18_ThetaY_mI30_mI25__1446->SetBinError(316,0.4807402);
   S18_ThetaY_mI30_mI25__1446->SetBinError(317,0.4666667);
   S18_ThetaY_mI30_mI25__1446->SetBinError(318,0.4853407);
   S18_ThetaY_mI30_mI25__1446->SetBinError(319,0.3464102);
   S18_ThetaY_mI30_mI25__1446->SetBinError(320,0.2581989);
   S18_ThetaY_mI30_mI25__1446->SetMinimum(0);
   S18_ThetaY_mI30_mI25__1446->SetMaximum(5.413514);
   S18_ThetaY_mI30_mI25__1446->SetEntries(262);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1446->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__1446->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1446->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__1446->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__1446->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__1446->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1446->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1446->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1446->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__1446->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__1446->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1446->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1446->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1446->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1446->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1446->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1447 = new TH1D("ThetaY_mI30_mI25__1447","",630,-1575,1575);
   ThetaY_mI30_mI25__1447->SetBinContent(310,0.005434783);
   ThetaY_mI30_mI25__1447->SetBinContent(311,0.9804348);
   ThetaY_mI30_mI25__1447->SetBinContent(312,2.969565);
   ThetaY_mI30_mI25__1447->SetBinContent(313,4.026812);
   ThetaY_mI30_mI25__1447->SetBinContent(314,4.56413);
   ThetaY_mI30_mI25__1447->SetBinContent(315,4.873913);
   ThetaY_mI30_mI25__1447->SetBinContent(316,4.921377);
   ThetaY_mI30_mI25__1447->SetBinContent(317,4.603986);
   ThetaY_mI30_mI25__1447->SetBinContent(318,4.117391);
   ThetaY_mI30_mI25__1447->SetBinContent(319,2.98442);
   ThetaY_mI30_mI25__1447->SetBinContent(320,1);
   ThetaY_mI30_mI25__1447->SetBinContent(321,0.007971014);
   ThetaY_mI30_mI25__1447->SetBinError(310,0.001403255);
   ThetaY_mI30_mI25__1447->SetBinError(311,0.01884755);
   ThetaY_mI30_mI25__1447->SetBinError(312,0.03280136);
   ThetaY_mI30_mI25__1447->SetBinError(313,0.03819672);
   ThetaY_mI30_mI25__1447->SetBinError(314,0.04066535);
   ThetaY_mI30_mI25__1447->SetBinError(315,0.04202274);
   ThetaY_mI30_mI25__1447->SetBinError(316,0.04222686);
   ThetaY_mI30_mI25__1447->SetBinError(317,0.04084251);
   ThetaY_mI30_mI25__1447->SetBinError(318,0.03862394);
   ThetaY_mI30_mI25__1447->SetBinError(319,0.0328833);
   ThetaY_mI30_mI25__1447->SetBinError(320,0.01903467);
   ThetaY_mI30_mI25__1447->SetBinError(321,0.001699426);
   ThetaY_mI30_mI25__1447->SetEntries(96753);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1447->SetLineColor(ci);
   ThetaY_mI30_mI25__1447->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1447->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1447->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1447->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1447->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1447->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1447->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1447->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1447->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1447->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1447->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1447->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1447->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1447->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1447->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1447->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1447->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1447->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1447->Draw("AEsame");
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
   
   Double_t _fx3483[12] = {
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
   Double_t _fy3483[12] = {
   0,
   0,
   0,
   0,
   0.1752798,
   0.7386262,
   0.7044099,
   0.7095302,
   0.8581485,
   0.6031322,
   1,
   0};
   Double_t _felx3483[12] = {
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
   Double_t _fely3483[12] = {
   0,
   0,
   0,
   0,
   0.04990757,
   0.1003994,
   0.09755167,
   0.1012051,
   0.1177714,
   0.1155318,
   0.2559424,
   0};
   Double_t _fehx3483[12] = {
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
   Double_t _fehy3483[12] = {
   24.02755,
   0.1252266,
   0.04133553,
   0.03048192,
   0.06664747,
   0.1150794,
   0.1121048,
   0.1167928,
   0.1351724,
   0.140125,
   0.3317772,
   16.06025};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3483,_fy3483,_felx3483,_fehx3483,_fely3483,_fehy3483);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3483 = new TH1F("Graph_Graph3483","",100,-100,100);
   Graph_Graph3483->SetMinimum(0);
   Graph_Graph3483->SetMaximum(1.5);
   Graph_Graph3483->SetDirectory(0);
   Graph_Graph3483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3483->SetLineColor(ci);
   Graph_Graph3483->GetXaxis()->SetRange(1,100);
   Graph_Graph3483->GetXaxis()->CenterTitle(true);
   Graph_Graph3483->GetXaxis()->SetLabelFont(42);
   Graph_Graph3483->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3483->GetXaxis()->SetTitleFont(42);
   Graph_Graph3483->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3483->GetYaxis()->CenterTitle(true);
   Graph_Graph3483->GetYaxis()->SetLabelFont(42);
   Graph_Graph3483->GetYaxis()->SetTitleFont(42);
   Graph_Graph3483->GetZaxis()->SetLabelFont(42);
   Graph_Graph3483->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3483->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3483);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.413514,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1448 = new TH2D("ThetaY_vs_Y_mI30_mI25__1448","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8067,15);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8093,2706);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8119,8196);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8145,11114);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8171,12597);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8197,13452);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8223,13583);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8249,12707);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8275,11364);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8301,8237);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8327,2760);
   ThetaY_vs_Y_mI30_mI25__1448->SetBinContent(8353,22);
   ThetaY_vs_Y_mI30_mI25__1448->SetEntries(96753);
   ThetaY_vs_Y_mI30_mI25__1448->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(1,679.15);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(2,1358.3);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(3,2037.45);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(4,2716.6);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(5,3395.75);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(6,4074.9);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(7,4754.05);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(8,5433.2);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(9,6112.35);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(10,6791.5);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(11,7470.65);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(12,8149.8);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(13,8828.95);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(14,9508.1);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(15,10187.25);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(16,10866.4);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(17,11545.55);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(18,12224.7);
   ThetaY_vs_Y_mI30_mI25__1448->SetContourLevel(19,12903.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1448->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1448->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1448->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1448->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1448->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1448->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1448->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1448->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1448->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1448->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1448->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1448->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1448->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1448->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1448->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1448->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-30_-25","Reco vertices","lpf");
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
