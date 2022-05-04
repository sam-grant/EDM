void S12S18_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-39.95,125,759.05);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI30_mI25__1503 = new TH1D("S12S18_ThetaY_mI30_mI25__1503","",630,-1575,1575);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(314,25);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(315,105);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(316,116);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(317,98);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(318,96);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(319,73);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(320,29);
   S12S18_ThetaY_mI30_mI25__1503->SetBinContent(321,1);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(314,5);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(315,10.24695);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(316,10.77033);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(317,9.899495);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(318,9.797959);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(319,8.544004);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(320,5.385165);
   S12S18_ThetaY_mI30_mI25__1503->SetBinError(321,1);
   S12S18_ThetaY_mI30_mI25__1503->SetMinimum(0);
   S12S18_ThetaY_mI30_mI25__1503->SetMaximum(679.15);
   S12S18_ThetaY_mI30_mI25__1503->SetEntries(543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1503->SetLineColor(ci);
   S12S18_ThetaY_mI30_mI25__1503->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1503->SetMarkerColor(ci);
   S12S18_ThetaY_mI30_mI25__1503->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI30_mI25__1503->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI30_mI25__1503->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1503->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1503->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1503->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI30_mI25__1503->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI30_mI25__1503->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1503->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1503->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1503->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1503->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1503->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1504 = new TH1D("ThetaY_mI30_mI25__1504","",630,-1575,1575);
   ThetaY_mI30_mI25__1504->SetBinContent(310,0.6818182);
   ThetaY_mI30_mI25__1504->SetBinContent(311,123);
   ThetaY_mI30_mI25__1504->SetBinContent(312,372.5455);
   ThetaY_mI30_mI25__1504->SetBinContent(313,505.1818);
   ThetaY_mI30_mI25__1504->SetBinContent(314,572.5909);
   ThetaY_mI30_mI25__1504->SetBinContent(315,611.4545);
   ThetaY_mI30_mI25__1504->SetBinContent(316,617.4091);
   ThetaY_mI30_mI25__1504->SetBinContent(317,577.5909);
   ThetaY_mI30_mI25__1504->SetBinContent(318,516.5455);
   ThetaY_mI30_mI25__1504->SetBinContent(319,374.4091);
   ThetaY_mI30_mI25__1504->SetBinContent(320,125.4545);
   ThetaY_mI30_mI25__1504->SetBinContent(321,1);
   ThetaY_mI30_mI25__1504->SetBinError(310,0.1760447);
   ThetaY_mI30_mI25__1504->SetBinError(311,2.36451);
   ThetaY_mI30_mI25__1504->SetBinError(312,4.11508);
   ThetaY_mI30_mI25__1504->SetBinError(313,4.791953);
   ThetaY_mI30_mI25__1504->SetBinError(314,5.101653);
   ThetaY_mI30_mI25__1504->SetBinError(315,5.271944);
   ThetaY_mI30_mI25__1504->SetBinError(316,5.297551);
   ThetaY_mI30_mI25__1504->SetBinError(317,5.123879);
   ThetaY_mI30_mI25__1504->SetBinError(318,4.845548);
   ThetaY_mI30_mI25__1504->SetBinError(319,4.12536);
   ThetaY_mI30_mI25__1504->SetBinError(320,2.387986);
   ThetaY_mI30_mI25__1504->SetBinError(321,0.2132007);
   ThetaY_mI30_mI25__1504->SetEntries(96753);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1504->SetLineColor(ci);
   ThetaY_mI30_mI25__1504->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1504->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1504->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1504->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1504->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1504->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1504->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1504->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1504->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1504->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1504->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1504->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1504->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1504->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1504->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1504->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1504->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1504->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1504->Draw("AEsame");
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
   
   Double_t _fx3502[12] = {
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
   Double_t _fy3502[12] = {
   0,
   0,
   0,
   0,
   0.04366119,
   0.1717217,
   0.1878819,
   0.1696703,
   0.1858501,
   0.1949739,
   0.2311594,
   1};
   Double_t _felx3502[12] = {
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
   Double_t _fely3502[12] = {
   0,
   0,
   0,
   0,
   0.008681724,
   0.01679616,
   0.01749282,
   0.01717519,
   0.01901415,
   0.02286691,
   0.04289258,
   0.8341351};
   Double_t _fehx3502[12] = {
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
   Double_t _fehy3502[12] = {
   2.87286,
   0.01497275,
   0.004942292,
   0.003644577,
   0.01060804,
   0.01852661,
   0.01920401,
   0.01900997,
   0.0210685,
   0.02572321,
   0.05171877,
   2.476696};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3502,_fy3502,_felx3502,_fehx3502,_fely3502,_fehy3502);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3502 = new TH1F("Graph_Graph3502","",100,-100,100);
   Graph_Graph3502->SetMinimum(0);
   Graph_Graph3502->SetMaximum(1.5);
   Graph_Graph3502->SetDirectory(0);
   Graph_Graph3502->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3502->SetLineColor(ci);
   Graph_Graph3502->GetXaxis()->SetRange(1,100);
   Graph_Graph3502->GetXaxis()->CenterTitle(true);
   Graph_Graph3502->GetXaxis()->SetLabelFont(42);
   Graph_Graph3502->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3502->GetXaxis()->SetTitleFont(42);
   Graph_Graph3502->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3502->GetYaxis()->CenterTitle(true);
   Graph_Graph3502->GetYaxis()->SetLabelFont(42);
   Graph_Graph3502->GetYaxis()->SetTitleFont(42);
   Graph_Graph3502->GetZaxis()->SetLabelFont(42);
   Graph_Graph3502->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3502->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3502);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,679.15,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1505 = new TH2D("ThetaY_vs_Y_mI30_mI25__1505","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8067,15);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8093,2706);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8119,8196);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8145,11114);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8171,12597);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8197,13452);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8223,13583);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8249,12707);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8275,11364);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8301,8237);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8327,2760);
   ThetaY_vs_Y_mI30_mI25__1505->SetBinContent(8353,22);
   ThetaY_vs_Y_mI30_mI25__1505->SetEntries(96753);
   ThetaY_vs_Y_mI30_mI25__1505->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(1,679.15);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(2,1358.3);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(3,2037.45);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(4,2716.6);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(5,3395.75);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(6,4074.9);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(7,4754.05);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(8,5433.2);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(9,6112.35);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(10,6791.5);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(11,7470.65);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(12,8149.8);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(13,8828.95);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(14,9508.1);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(15,10187.25);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(16,10866.4);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(17,11545.55);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(18,12224.7);
   ThetaY_vs_Y_mI30_mI25__1505->SetContourLevel(19,12903.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1505->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1505->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1505->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1505->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1505->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1505->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1505->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1505->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1505->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1505->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1505->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1505->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1505->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1505->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1505->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1505->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-30_-25","Reco vertices","lpf");
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
