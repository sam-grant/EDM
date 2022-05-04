void S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.06724181,125,1.277594);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI15_mI10__1284 = new TH1D("S18_ThetaY_mI15_mI10__1284","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(312,0.05220884);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(313,0.502008);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(314,1);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(315,0.9678715);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(316,0.8835341);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(317,0.9196787);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(318,0.7590361);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(319,0.6385542);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(320,0.3975904);
   S18_ThetaY_mI15_mI10__1284->SetBinContent(321,0.03614458);
   S18_ThetaY_mI15_mI10__1284->SetBinError(312,0.01448013);
   S18_ThetaY_mI15_mI10__1284->SetBinError(313,0.04490096);
   S18_ThetaY_mI15_mI10__1284->SetBinError(314,0.06337243);
   S18_ThetaY_mI15_mI10__1284->SetBinError(315,0.06234608);
   S18_ThetaY_mI15_mI10__1284->SetBinError(316,0.05956786);
   S18_ThetaY_mI15_mI10__1284->SetBinError(317,0.06077408);
   S18_ThetaY_mI15_mI10__1284->SetBinError(318,0.05521176);
   S18_ThetaY_mI15_mI10__1284->SetBinError(319,0.05064064);
   S18_ThetaY_mI15_mI10__1284->SetBinError(320,0.03995933);
   S18_ThetaY_mI15_mI10__1284->SetBinError(321,0.01204819);
   S18_ThetaY_mI15_mI10__1284->SetMinimum(0);
   S18_ThetaY_mI15_mI10__1284->SetMaximum(1.143111);
   S18_ThetaY_mI15_mI10__1284->SetEntries(1533);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1284->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__1284->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1284->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__1284->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__1284->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__1284->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1284->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1284->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1284->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__1284->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__1284->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1284->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1284->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1284->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1284->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1284->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1285 = new TH1D("ThetaY_mI15_mI10__1285","",630,-1575,1575);
   ThetaY_mI15_mI10__1285->SetBinContent(309,0.00043293);
   ThetaY_mI15_mI10__1285->SetBinContent(310,0.1555358);
   ThetaY_mI15_mI10__1285->SetBinContent(311,0.5528516);
   ThetaY_mI15_mI10__1285->SetBinContent(312,0.7807779);
   ThetaY_mI15_mI10__1285->SetBinContent(313,0.92565);
   ThetaY_mI15_mI10__1285->SetBinContent(314,1);
   ThetaY_mI15_mI10__1285->SetBinContent(315,1.029143);
   ThetaY_mI15_mI10__1285->SetBinContent(316,1.039192);
   ThetaY_mI15_mI10__1285->SetBinContent(317,0.9963315);
   ThetaY_mI15_mI10__1285->SetBinContent(318,0.926607);
   ThetaY_mI15_mI10__1285->SetBinContent(319,0.7869073);
   ThetaY_mI15_mI10__1285->SetBinContent(320,0.551006);
   ThetaY_mI15_mI10__1285->SetBinContent(321,0.1502723);
   ThetaY_mI15_mI10__1285->SetBinContent(322,0.0006835737);
   ThetaY_mI15_mI10__1285->SetBinError(309,9.932096e-05);
   ThetaY_mI15_mI10__1285->SetBinError(310,0.001882553);
   ThetaY_mI15_mI10__1285->SetBinError(311,0.003549248);
   ThetaY_mI15_mI10__1285->SetBinError(312,0.004217895);
   ThetaY_mI15_mI10__1285->SetBinError(313,0.004592566);
   ThetaY_mI15_mI10__1285->SetBinError(314,0.004773446);
   ThetaY_mI15_mI10__1285->SetBinError(315,0.004842503);
   ThetaY_mI15_mI10__1285->SetBinError(316,0.004866087);
   ThetaY_mI15_mI10__1285->SetBinError(317,0.004764683);
   ThetaY_mI15_mI10__1285->SetBinError(318,0.00459494);
   ThetaY_mI15_mI10__1285->SetBinError(319,0.004234419);
   ThetaY_mI15_mI10__1285->SetBinError(320,0.003543319);
   ThetaY_mI15_mI10__1285->SetBinError(321,0.001850425);
   ThetaY_mI15_mI10__1285->SetBinError(322,0.0001248029);
   ThetaY_mI15_mI10__1285->SetEntries(390392);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1285->SetLineColor(ci);
   ThetaY_mI15_mI10__1285->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1285->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1285->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1285->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1285->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1285->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1285->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1285->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1285->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1285->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1285->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1285->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1285->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1285->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1285->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1285->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1285->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1285->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1285->Draw("AEsame");
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
   
   Double_t _fx3429[14] = {
   -32.5,
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
   27.5,
   32.5};
   Double_t _fy3429[14] = {
   0,
   0,
   0,
   0.06686772,
   0.5423303,
   1,
   0.9404635,
   0.850213,
   0.923065,
   0.8191565,
   0.8114733,
   0.7215718,
   0.2405272,
   0};
   Double_t _felx3429[14] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3429[14] = {
   0,
   0,
   0,
   0.01830782,
   0.04851644,
   0.06350858,
   0.0606992,
   0.05741515,
   0.06111204,
   0.05966961,
   0.06443322,
   0.07254462,
   0.0787131,
   0};
   Double_t _fehx3429[14] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3429[14] = {
   17.93298,
   0.04754313,
   0.01337419,
   0.02416901,
   0.05306501,
   0.06767747,
   0.06475066,
   0.06143115,
   0.06529991,
   0.06418446,
   0.06976643,
   0.08023557,
   0.1099554,
   11.15496};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3429,_fy3429,_felx3429,_fehx3429,_fely3429,_fehy3429);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3429 = new TH1F("Graph_Graph3429","",100,-100,100);
   Graph_Graph3429->SetMinimum(0);
   Graph_Graph3429->SetMaximum(1.5);
   Graph_Graph3429->SetDirectory(0);
   Graph_Graph3429->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3429->SetLineColor(ci);
   Graph_Graph3429->GetXaxis()->SetRange(1,100);
   Graph_Graph3429->GetXaxis()->CenterTitle(true);
   Graph_Graph3429->GetXaxis()->SetLabelFont(42);
   Graph_Graph3429->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3429->GetXaxis()->SetTitleFont(42);
   Graph_Graph3429->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3429->GetYaxis()->CenterTitle(true);
   Graph_Graph3429->GetYaxis()->SetLabelFont(42);
   Graph_Graph3429->GetYaxis()->SetTitleFont(42);
   Graph_Graph3429->GetZaxis()->SetLabelFont(42);
   Graph_Graph3429->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3429->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3429);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.143111,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1286 = new TH2D("ThetaY_vs_Y_mI15_mI10__1286","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8044,19);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8070,6826);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8096,24263);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8122,34266);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8148,40624);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8174,43887);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8200,45166);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8226,45607);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8252,43726);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8278,40666);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8304,34535);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8330,24182);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8356,6595);
   ThetaY_vs_Y_mI15_mI10__1286->SetBinContent(8382,30);
   ThetaY_vs_Y_mI15_mI10__1286->SetEntries(390392);
   ThetaY_vs_Y_mI15_mI10__1286->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(1,2280.35);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(2,4560.7);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(3,6841.05);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(4,9121.4);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(5,11401.75);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(6,13682.1);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(7,15962.45);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(8,18242.8);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(9,20523.15);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(10,22803.5);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(11,25083.85);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(12,27364.2);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(13,29644.55);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(14,31924.9);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(15,34205.25);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(16,36485.6);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(17,38765.95);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(18,41046.3);
   ThetaY_vs_Y_mI15_mI10__1286->SetContourLevel(19,43326.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1286->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1286->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1286->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1286->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1286->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1286->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1286->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1286->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1286->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1286->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1286->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1286->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1286->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1286->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1286->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1286->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-15_-10","Reco vertices","lpf");
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
