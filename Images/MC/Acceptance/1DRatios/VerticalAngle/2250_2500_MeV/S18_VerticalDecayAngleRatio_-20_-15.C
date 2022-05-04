void S18_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.07102036,125,1.349387);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__1623 = new TH1D("S18_ThetaY_mI20_mI15__1623","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(312,0.009345794);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(313,0.02803738);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(314,0.5514019);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(315,0.8037383);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(316,1.028037);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(317,1);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(318,0.5794393);
   S18_ThetaY_mI20_mI15__1623->SetBinContent(319,0.317757);
   S18_ThetaY_mI20_mI15__1623->SetBinError(312,0.009345794);
   S18_ThetaY_mI20_mI15__1623->SetBinError(313,0.01618739);
   S18_ThetaY_mI20_mI15__1623->SetBinError(314,0.07178641);
   S18_ThetaY_mI20_mI15__1623->SetBinError(315,0.08666933);
   S18_ThetaY_mI20_mI15__1623->SetBinError(316,0.09801952);
   S18_ThetaY_mI20_mI15__1623->SetBinError(317,0.09667365);
   S18_ThetaY_mI20_mI15__1623->SetBinError(318,0.07358886);
   S18_ThetaY_mI20_mI15__1623->SetBinError(319,0.05449488);
   S18_ThetaY_mI20_mI15__1623->SetMinimum(0);
   S18_ThetaY_mI20_mI15__1623->SetMaximum(1.207346);
   S18_ThetaY_mI20_mI15__1623->SetEntries(462);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1623->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__1623->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__1623->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__1623->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__1623->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__1623->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1623->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1623->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1623->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__1623->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__1623->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1623->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1623->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__1623->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__1623->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__1623->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1624 = new TH1D("ThetaY_mI20_mI15__1624","",630,-1575,1575);
   ThetaY_mI20_mI15__1624->SetBinContent(311,0.007462109);
   ThetaY_mI20_mI15__1624->SetBinContent(312,0.3276369);
   ThetaY_mI20_mI15__1624->SetBinContent(313,0.7798098);
   ThetaY_mI20_mI15__1624->SetBinContent(314,0.9996907);
   ThetaY_mI20_mI15__1624->SetBinContent(315,1.088888);
   ThetaY_mI20_mI15__1624->SetBinContent(316,1.097587);
   ThetaY_mI20_mI15__1624->SetBinContent(317,1);
   ThetaY_mI20_mI15__1624->SetBinContent(318,0.7829802);
   ThetaY_mI20_mI15__1624->SetBinContent(319,0.3311166);
   ThetaY_mI20_mI15__1624->SetBinContent(320,0.006843489);
   ThetaY_mI20_mI15__1624->SetBinError(311,0.0005371344);
   ThetaY_mI20_mI15__1624->SetBinError(312,0.003559168);
   ThetaY_mI20_mI15__1624->SetBinError(313,0.005490937);
   ThetaY_mI20_mI15__1624->SetBinError(314,0.006217059);
   ThetaY_mI20_mI15__1624->SetBinError(315,0.006488492);
   ThetaY_mI20_mI15__1624->SetBinError(316,0.006514359);
   ThetaY_mI20_mI15__1624->SetBinError(317,0.006218021);
   ThetaY_mI20_mI15__1624->SetBinError(318,0.005502088);
   ThetaY_mI20_mI15__1624->SetBinError(319,0.003578019);
   ThetaY_mI20_mI15__1624->SetBinError(320,0.0005143881);
   ThetaY_mI20_mI15__1624->SetEntries(166099);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1624->SetLineColor(ci);
   ThetaY_mI20_mI15__1624->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1624->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1624->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1624->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1624->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1624->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1624->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1624->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1624->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1624->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1624->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1624->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1624->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1624->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1624->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1624->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1624->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1624->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1624->Draw("AEsame");
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
   
   Double_t _fx3542[10] = {
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
   Double_t _fy3542[10] = {
   0,
   0.02852486,
   0.03595413,
   0.5515725,
   0.7381276,
   0.9366337,
   1,
   0.7400433,
   0.9596529,
   0};
   Double_t _felx3542[10] = {
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
   Double_t _fely3542[10] = {
   0,
   0.02359761,
   0.01956856,
   0.07168483,
   0.07955914,
   0.08933967,
   0.09672002,
   0.09387256,
   0.1640813,
   0};
   Double_t _fehx3542[10] = {
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
   Double_t _fehy3542[10] = {
   2.316789,
   0.06560643,
   0.03497874,
   0.08166999,
   0.08863718,
   0.09830001,
   0.106564,
   0.1066136,
   0.194881,
   2.527308};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3542,_fy3542,_felx3542,_fehx3542,_fely3542,_fehy3542);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3542 = new TH1F("Graph_Graph3542","",100,-100,100);
   Graph_Graph3542->SetMinimum(0);
   Graph_Graph3542->SetMaximum(1.5);
   Graph_Graph3542->SetDirectory(0);
   Graph_Graph3542->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3542->SetLineColor(ci);
   Graph_Graph3542->GetXaxis()->SetRange(1,100);
   Graph_Graph3542->GetXaxis()->CenterTitle(true);
   Graph_Graph3542->GetXaxis()->SetLabelFont(42);
   Graph_Graph3542->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3542->GetXaxis()->SetTitleFont(42);
   Graph_Graph3542->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3542->GetYaxis()->CenterTitle(true);
   Graph_Graph3542->GetYaxis()->SetLabelFont(42);
   Graph_Graph3542->GetYaxis()->SetTitleFont(42);
   Graph_Graph3542->GetZaxis()->SetLabelFont(42);
   Graph_Graph3542->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3542->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3542);
   
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1625 = new TH2D("ThetaY_vs_Y_mI20_mI15__1625","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8095,193);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8121,8474);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8147,20169);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8173,25856);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8199,28163);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8225,28388);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8251,25864);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8277,20251);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8303,8564);
   ThetaY_vs_Y_mI20_mI15__1625->SetBinContent(8329,177);
   ThetaY_vs_Y_mI20_mI15__1625->SetEntries(166099);
   ThetaY_vs_Y_mI20_mI15__1625->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(1,1419.4);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(2,2838.8);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(3,4258.2);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(4,5677.6);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(5,7097);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(6,8516.4);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(7,9935.8);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(8,11355.2);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(9,12774.6);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(10,14194);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(11,15613.4);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(12,17032.8);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(13,18452.2);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(14,19871.6);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(15,21291);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(16,22710.4);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(17,24129.8);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(18,25549.2);
   ThetaY_vs_Y_mI20_mI15__1625->SetContourLevel(19,26968.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1625->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1625->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1625->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1625->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1625->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1625->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1625->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1625->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1625->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1625->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1625->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1625->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1625->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1625->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1625->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1625->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
