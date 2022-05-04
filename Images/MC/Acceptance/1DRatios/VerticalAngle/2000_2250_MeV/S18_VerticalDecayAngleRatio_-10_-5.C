void S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.07741134,125,1.470815);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__1458 = new TH1D("S18_ThetaY_mI10_mI5__1458","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(312,0.06280193);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(313,0.5217391);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(314,1.024155);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(315,0.9613527);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(316,1.048309);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(317,0.8454106);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(318,1);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(319,0.4589372);
   S18_ThetaY_mI10_mI5__1458->SetBinContent(320,0.04830918);
   S18_ThetaY_mI10_mI5__1458->SetBinError(312,0.01741812);
   S18_ThetaY_mI10_mI5__1458->SetBinError(313,0.05020437);
   S18_ThetaY_mI10_mI5__1458->SetBinError(314,0.07033923);
   S18_ThetaY_mI10_mI5__1458->SetBinError(315,0.06814848);
   S18_ThetaY_mI10_mI5__1458->SetBinError(316,0.07116386);
   S18_ThetaY_mI10_mI5__1458->SetBinError(317,0.06390704);
   S18_ThetaY_mI10_mI5__1458->SetBinError(318,0.0695048);
   S18_ThetaY_mI10_mI5__1458->SetBinError(319,0.04708596);
   S18_ThetaY_mI10_mI5__1458->SetBinError(320,0.0152767);
   S18_ThetaY_mI10_mI5__1458->SetMinimum(0);
   S18_ThetaY_mI10_mI5__1458->SetMaximum(1.315993);
   S18_ThetaY_mI10_mI5__1458->SetEntries(1236);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1458->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__1458->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1458->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__1458->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__1458->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__1458->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1458->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1458->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1458->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__1458->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__1458->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1458->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1458->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1458->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1458->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1458->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1459 = new TH1D("ThetaY_mI10_mI5__1459","",630,-1575,1575);
   ThetaY_mI10_mI5__1459->SetBinContent(310,0.001761973);
   ThetaY_mI10_mI5__1459->SetBinContent(311,0.2419624);
   ThetaY_mI10_mI5__1459->SetBinContent(312,0.7298231);
   ThetaY_mI10_mI5__1459->SetBinContent(313,0.9860186);
   ThetaY_mI10_mI5__1459->SetBinContent(314,1.12716);
   ThetaY_mI10_mI5__1459->SetBinContent(315,1.196357);
   ThetaY_mI10_mI5__1459->SetBinContent(316,1.191163);
   ThetaY_mI10_mI5__1459->SetBinContent(317,1.131027);
   ThetaY_mI10_mI5__1459->SetBinContent(318,1);
   ThetaY_mI10_mI5__1459->SetBinContent(319,0.7235304);
   ThetaY_mI10_mI5__1459->SetBinContent(320,0.2444795);
   ThetaY_mI10_mI5__1459->SetBinContent(321,0.001967918);
   ThetaY_mI10_mI5__1459->SetBinError(310,0.0002007955);
   ThetaY_mI10_mI5__1459->SetBinError(311,0.002353034);
   ThetaY_mI10_mI5__1459->SetBinError(312,0.004086609);
   ThetaY_mI10_mI5__1459->SetBinError(313,0.004750036);
   ThetaY_mI10_mI5__1459->SetBinError(314,0.005078635);
   ThetaY_mI10_mI5__1459->SetBinError(315,0.005232205);
   ThetaY_mI10_mI5__1459->SetBinError(316,0.005220834);
   ThetaY_mI10_mI5__1459->SetBinError(317,0.00508734);
   ThetaY_mI10_mI5__1459->SetBinError(318,0.004783594);
   ThetaY_mI10_mI5__1459->SetBinError(319,0.004068953);
   ThetaY_mI10_mI5__1459->SetBinError(320,0.002365242);
   ThetaY_mI10_mI5__1459->SetBinError(321,0.0002122061);
   ThetaY_mI10_mI5__1459->SetEntries(374747);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1459->SetLineColor(ci);
   ThetaY_mI10_mI5__1459->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1459->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1459->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1459->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1459->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1459->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1459->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1459->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1459->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1459->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1459->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1459->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1459->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1459->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1459->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1459->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1459->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1459->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1459->Draw("AEsame");
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
   
   Double_t _fx3487[12] = {
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
   Double_t _fy3487[12] = {
   0,
   0,
   0.0860509,
   0.5291372,
   0.9086154,
   0.8035667,
   0.8800722,
   0.7474718,
   1,
   0.6343026,
   0.1976001,
   0};
   Double_t _felx3487[12] = {
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
   Double_t _fely3487[12] = {
   0,
   0,
   0.02356032,
   0.05090042,
   0.06248817,
   0.05702315,
   0.0598209,
   0.05654884,
   0.06961217,
   0.06505988,
   0.06145401,
   0};
   Double_t _fehx3487[12] = {
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
   Double_t _fehy3487[12] = {
   5.108476,
   0.03676025,
   0.03110327,
   0.05605048,
   0.06694224,
   0.06122187,
   0.06403339,
   0.06099902,
   0.074637,
   0.07210381,
   0.08437126,
   4.568128};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3487,_fy3487,_felx3487,_fehx3487,_fely3487,_fehy3487);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3487 = new TH1F("Graph_Graph3487","",100,-100,100);
   Graph_Graph3487->SetMinimum(0);
   Graph_Graph3487->SetMaximum(1.5);
   Graph_Graph3487->SetDirectory(0);
   Graph_Graph3487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3487->SetLineColor(ci);
   Graph_Graph3487->GetXaxis()->SetRange(1,100);
   Graph_Graph3487->GetXaxis()->CenterTitle(true);
   Graph_Graph3487->GetXaxis()->SetLabelFont(42);
   Graph_Graph3487->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3487->GetXaxis()->SetTitleFont(42);
   Graph_Graph3487->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3487->GetYaxis()->CenterTitle(true);
   Graph_Graph3487->GetYaxis()->SetLabelFont(42);
   Graph_Graph3487->GetYaxis()->SetTitleFont(42);
   Graph_Graph3487->GetZaxis()->SetLabelFont(42);
   Graph_Graph3487->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3487->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3487);
   
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1460 = new TH2D("ThetaY_vs_Y_mI10_mI5__1460","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8071,77);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8097,10574);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8123,31894);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8149,43090);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8175,49258);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8201,52282);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8227,52055);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8253,49427);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8279,43701);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8305,31619);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8331,10684);
   ThetaY_vs_Y_mI10_mI5__1460->SetBinContent(8357,86);
   ThetaY_vs_Y_mI10_mI5__1460->SetEntries(374747);
   ThetaY_vs_Y_mI10_mI5__1460->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(1,2614.1);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(2,5228.2);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(3,7842.3);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(4,10456.4);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(5,13070.5);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(6,15684.6);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(7,18298.7);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(8,20912.8);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(9,23526.9);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(10,26141);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(11,28755.1);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(12,31369.2);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(13,33983.3);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(14,36597.4);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(15,39211.5);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(16,41825.6);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(17,44439.7);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(18,47053.8);
   ThetaY_vs_Y_mI10_mI5__1460->SetContourLevel(19,49667.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1460->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1460->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1460->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1460->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1460->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1460->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1460->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1460->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1460->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1460->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1460->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1460->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1460->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1460->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1460->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1460->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-10_-5","Reco vertices","lpf");
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
