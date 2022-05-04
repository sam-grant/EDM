void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07102036,125,1.349387);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__1680 = new TH1D("S12S18_ThetaY_mI20_mI15__1680","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(312,0.005102041);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(313,0.02040816);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(314,0.5306122);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(315,0.9132653);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(316,1.010204);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(317,1);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(318,0.6887755);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(319,0.25);
   S12S18_ThetaY_mI20_mI15__1680->SetBinContent(320,0.005102041);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(312,0.005102041);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(313,0.01020408);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(314,0.05203081);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(315,0.06826065);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(316,0.07179208);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(317,0.07142857);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(318,0.05928036);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(319,0.03571429);
   S12S18_ThetaY_mI20_mI15__1680->SetBinError(320,0.005102041);
   S12S18_ThetaY_mI20_mI15__1680->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__1680->SetMaximum(1.207346);
   S12S18_ThetaY_mI20_mI15__1680->SetEntries(867);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1680->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__1680->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__1680->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__1680->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__1680->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__1680->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1680->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1680->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1680->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__1680->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__1680->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1680->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1680->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__1680->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__1680->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__1680->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1681 = new TH1D("ThetaY_mI20_mI15__1681","",630,-1575,1575);
   ThetaY_mI20_mI15__1681->SetBinContent(311,0.007462109);
   ThetaY_mI20_mI15__1681->SetBinContent(312,0.3276369);
   ThetaY_mI20_mI15__1681->SetBinContent(313,0.7798098);
   ThetaY_mI20_mI15__1681->SetBinContent(314,0.9996907);
   ThetaY_mI20_mI15__1681->SetBinContent(315,1.088888);
   ThetaY_mI20_mI15__1681->SetBinContent(316,1.097587);
   ThetaY_mI20_mI15__1681->SetBinContent(317,1);
   ThetaY_mI20_mI15__1681->SetBinContent(318,0.7829802);
   ThetaY_mI20_mI15__1681->SetBinContent(319,0.3311166);
   ThetaY_mI20_mI15__1681->SetBinContent(320,0.006843489);
   ThetaY_mI20_mI15__1681->SetBinError(311,0.0005371344);
   ThetaY_mI20_mI15__1681->SetBinError(312,0.003559168);
   ThetaY_mI20_mI15__1681->SetBinError(313,0.005490937);
   ThetaY_mI20_mI15__1681->SetBinError(314,0.006217059);
   ThetaY_mI20_mI15__1681->SetBinError(315,0.006488492);
   ThetaY_mI20_mI15__1681->SetBinError(316,0.006514359);
   ThetaY_mI20_mI15__1681->SetBinError(317,0.006218021);
   ThetaY_mI20_mI15__1681->SetBinError(318,0.005502088);
   ThetaY_mI20_mI15__1681->SetBinError(319,0.003578019);
   ThetaY_mI20_mI15__1681->SetBinError(320,0.0005143881);
   ThetaY_mI20_mI15__1681->SetEntries(166099);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1681->SetLineColor(ci);
   ThetaY_mI20_mI15__1681->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1681->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1681->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1681->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1681->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1681->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1681->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1681->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1681->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1681->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1681->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1681->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1681->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1681->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1681->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1681->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1681->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1681->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1681->Draw("AEsame");
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
   
   Double_t _fx3561[10] = {
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
   Double_t _fy3561[10] = {
   0,
   0.01557224,
   0.02617069,
   0.5307764,
   0.8387137,
   0.920386,
   1,
   0.8796844,
   0.755021,
   0.7455321};
   Double_t _felx3561[10] = {
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
   Double_t _fely3561[10] = {
   0,
   0.01288237,
   0.01252588,
   0.05206654,
   0.06282746,
   0.06558013,
   0.07163618,
   0.07586714,
   0.1077918,
   0.6174};
   Double_t _fehx3561[10] = {
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
   Double_t _fehy3561[10] = {
   1.264778,
   0.03581576,
   0.02069654,
   0.05744511,
   0.06772223,
   0.07043058,
   0.07696439,
   0.0827145,
   0.1244153,
   1.730403};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3561,_fy3561,_felx3561,_fehx3561,_fely3561,_fehy3561);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3561 = new TH1F("Graph_Graph3561","",100,-100,100);
   Graph_Graph3561->SetMinimum(0);
   Graph_Graph3561->SetMaximum(1.5);
   Graph_Graph3561->SetDirectory(0);
   Graph_Graph3561->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3561->SetLineColor(ci);
   Graph_Graph3561->GetXaxis()->SetRange(1,100);
   Graph_Graph3561->GetXaxis()->CenterTitle(true);
   Graph_Graph3561->GetXaxis()->SetLabelFont(42);
   Graph_Graph3561->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3561->GetXaxis()->SetTitleFont(42);
   Graph_Graph3561->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3561->GetYaxis()->CenterTitle(true);
   Graph_Graph3561->GetYaxis()->SetLabelFont(42);
   Graph_Graph3561->GetYaxis()->SetTitleFont(42);
   Graph_Graph3561->GetZaxis()->SetLabelFont(42);
   Graph_Graph3561->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3561->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3561);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.207346,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1682 = new TH2D("ThetaY_vs_Y_mI20_mI15__1682","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8095,193);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8121,8474);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8147,20169);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8173,25856);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8199,28163);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8225,28388);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8251,25864);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8277,20251);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8303,8564);
   ThetaY_vs_Y_mI20_mI15__1682->SetBinContent(8329,177);
   ThetaY_vs_Y_mI20_mI15__1682->SetEntries(166099);
   ThetaY_vs_Y_mI20_mI15__1682->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(1,1419.4);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(2,2838.8);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(3,4258.2);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(4,5677.6);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(5,7097);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(6,8516.4);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(7,9935.8);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(8,11355.2);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(9,12774.6);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(10,14194);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(11,15613.4);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(12,17032.8);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(13,18452.2);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(14,19871.6);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(15,21291);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(16,22710.4);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(17,24129.8);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(18,25549.2);
   ThetaY_vs_Y_mI20_mI15__1682->SetContourLevel(19,26968.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1682->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1682->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1682->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1682->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1682->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1682->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1682->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1682->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1682->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1682->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1682->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1682->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1682->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1682->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1682->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1682->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-20_-15","Reco vertices","lpf");
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
