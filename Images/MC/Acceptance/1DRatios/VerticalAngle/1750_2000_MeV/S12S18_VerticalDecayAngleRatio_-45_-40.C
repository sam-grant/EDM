void S12S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.4258824,125,8.091765);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__1323 = new TH1D("S12S18_ThetaY_mI45_mI40__1323","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__1323->SetBinContent(316,3.75);
   S12S18_ThetaY_mI45_mI40__1323->SetBinContent(317,5.25);
   S12S18_ThetaY_mI45_mI40__1323->SetBinContent(318,5.25);
   S12S18_ThetaY_mI45_mI40__1323->SetBinContent(319,3.25);
   S12S18_ThetaY_mI45_mI40__1323->SetBinContent(320,1.75);
   S12S18_ThetaY_mI45_mI40__1323->SetBinContent(321,1);
   S12S18_ThetaY_mI45_mI40__1323->SetBinError(316,0.9682458);
   S12S18_ThetaY_mI45_mI40__1323->SetBinError(317,1.145644);
   S12S18_ThetaY_mI45_mI40__1323->SetBinError(318,1.145644);
   S12S18_ThetaY_mI45_mI40__1323->SetBinError(319,0.9013878);
   S12S18_ThetaY_mI45_mI40__1323->SetBinError(320,0.6614378);
   S12S18_ThetaY_mI45_mI40__1323->SetBinError(321,0.5);
   S12S18_ThetaY_mI45_mI40__1323->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__1323->SetMaximum(7.24);
   S12S18_ThetaY_mI45_mI40__1323->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1323->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__1323->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__1323->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__1323->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__1323->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__1323->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1323->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1323->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1323->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__1323->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__1323->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1323->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1323->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__1323->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__1323->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__1323->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1324 = new TH1D("ThetaY_mI45_mI40__1324","",630,-1575,1575);
   ThetaY_mI45_mI40__1324->SetBinContent(310,1.050909);
   ThetaY_mI45_mI40__1324->SetBinContent(311,3.418182);
   ThetaY_mI45_mI40__1324->SetBinContent(312,4.865455);
   ThetaY_mI45_mI40__1324->SetBinContent(313,5.541818);
   ThetaY_mI45_mI40__1324->SetBinContent(314,6.221818);
   ThetaY_mI45_mI40__1324->SetBinContent(315,6.581818);
   ThetaY_mI45_mI40__1324->SetBinContent(316,6.356364);
   ThetaY_mI45_mI40__1324->SetBinContent(317,6.163636);
   ThetaY_mI45_mI40__1324->SetBinContent(318,5.632727);
   ThetaY_mI45_mI40__1324->SetBinContent(319,4.821818);
   ThetaY_mI45_mI40__1324->SetBinContent(320,3.465455);
   ThetaY_mI45_mI40__1324->SetBinContent(321,1);
   ThetaY_mI45_mI40__1324->SetBinError(310,0.06181818);
   ThetaY_mI45_mI40__1324->SetBinError(311,0.1114888);
   ThetaY_mI45_mI40__1324->SetBinError(312,0.1330134);
   ThetaY_mI45_mI40__1324->SetBinError(313,0.141958);
   ThetaY_mI45_mI40__1324->SetBinError(314,0.1504154);
   ThetaY_mI45_mI40__1324->SetBinError(315,0.1547058);
   ThetaY_mI45_mI40__1324->SetBinError(316,0.1520331);
   ThetaY_mI45_mI40__1324->SetBinError(317,0.1497105);
   ThetaY_mI45_mI40__1324->SetBinError(318,0.1431176);
   ThetaY_mI45_mI40__1324->SetBinError(319,0.1324156);
   ThetaY_mI45_mI40__1324->SetBinError(320,0.1122571);
   ThetaY_mI45_mI40__1324->SetBinError(321,0.06030227);
   ThetaY_mI45_mI40__1324->SetEntries(15158);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1324->SetLineColor(ci);
   ThetaY_mI45_mI40__1324->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1324->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1324->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1324->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1324->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1324->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1324->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1324->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1324->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1324->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1324->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1324->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1324->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1324->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1324->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1324->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1324->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1324->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1324->Draw("AEsame");
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
   
   Double_t _fx3442[12] = {
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
   Double_t _fy3442[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.58996,
   0.8517699,
   0.9320529,
   0.6740196,
   0.5049843,
   1};
   Double_t _felx3442[12] = {
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
   Double_t _fely3442[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.1512174,
   0.1854679,
   0.2030608,
   0.1853471,
   0.1868262,
   0.4813296};
   Double_t _fehx3442[12] = {
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
   Double_t _fehy3442[12] = {
   0.4393572,
   0.1347811,
   0.0946617,
   0.08310152,
   0.07401424,
   0.06996388,
   0.1961429,
   0.2311775,
   0.2531524,
   0.245182,
   0.273527,
   0.8009956};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3442,_fy3442,_felx3442,_fehx3442,_fely3442,_fehy3442);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3442 = new TH1F("Graph_Graph3442","",100,-100,100);
   Graph_Graph3442->SetMinimum(0);
   Graph_Graph3442->SetMaximum(1.5);
   Graph_Graph3442->SetDirectory(0);
   Graph_Graph3442->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3442->SetLineColor(ci);
   Graph_Graph3442->GetXaxis()->SetRange(1,100);
   Graph_Graph3442->GetXaxis()->CenterTitle(true);
   Graph_Graph3442->GetXaxis()->SetLabelFont(42);
   Graph_Graph3442->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3442->GetXaxis()->SetTitleFont(42);
   Graph_Graph3442->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3442->GetYaxis()->CenterTitle(true);
   Graph_Graph3442->GetYaxis()->SetLabelFont(42);
   Graph_Graph3442->GetYaxis()->SetTitleFont(42);
   Graph_Graph3442->GetZaxis()->SetLabelFont(42);
   Graph_Graph3442->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3442->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3442);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,7.24,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1325 = new TH2D("ThetaY_vs_Y_mI45_mI40__1325","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8064,289);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8090,940);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8116,1338);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8142,1524);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8168,1711);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8194,1810);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8220,1748);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8246,1695);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8272,1549);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8298,1326);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8324,953);
   ThetaY_vs_Y_mI45_mI40__1325->SetBinContent(8350,275);
   ThetaY_vs_Y_mI45_mI40__1325->SetEntries(15158);
   ThetaY_vs_Y_mI45_mI40__1325->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(1,90.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(2,181);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(3,271.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(4,362);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(5,452.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(6,543);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(7,633.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(8,724);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(9,814.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(10,905);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(11,995.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(12,1086);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(13,1176.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(14,1267);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(15,1357.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(16,1448);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(17,1538.5);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(18,1629);
   ThetaY_vs_Y_mI45_mI40__1325->SetContourLevel(19,1719.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1325->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1325->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1325->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1325->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1325->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1325->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1325->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1325->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1325->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1325->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1325->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1325->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1325->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1325->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1325->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1325->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
