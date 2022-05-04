void S12S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06472531,125,1.229781);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__1686 = new TH1D("S12S18_ThetaY_mI10_mI5__1686","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(313,0.2205438);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(314,0.8126888);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(315,1);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(316,0.9033233);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(317,0.9093656);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(318,0.6404834);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(319,0.102719);
   S12S18_ThetaY_mI10_mI5__1686->SetBinContent(320,0.003021148);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(313,0.0258127);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(314,0.04955051);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(315,0.05496497);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(316,0.05224053);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(317,0.05241496);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(318,0.04398858);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(319,0.01761617);
   S12S18_ThetaY_mI10_mI5__1686->SetBinError(320,0.003021148);
   S12S18_ThetaY_mI10_mI5__1686->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__1686->SetMaximum(1.10033);
   S12S18_ThetaY_mI10_mI5__1686->SetEntries(1520);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1686->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__1686->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1686->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__1686->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__1686->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__1686->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1686->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1686->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1686->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__1686->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__1686->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1686->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1686->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1686->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1686->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1686->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1687 = new TH1D("ThetaY_mI10_mI5__1687","",630,-1575,1575);
   ThetaY_mI10_mI5__1687->SetBinContent(311,0.006023709);
   ThetaY_mI10_mI5__1687->SetBinContent(312,0.3003709);
   ThetaY_mI10_mI5__1687->SetBinContent(313,0.715921);
   ThetaY_mI10_mI5__1687->SetBinContent(314,0.9056786);
   ThetaY_mI10_mI5__1687->SetBinContent(315,1);
   ThetaY_mI10_mI5__1687->SetBinContent(316,1.0003);
   ThetaY_mI10_mI5__1687->SetBinContent(317,0.9222063);
   ThetaY_mI10_mI5__1687->SetBinContent(318,0.707132);
   ThetaY_mI10_mI5__1687->SetBinContent(319,0.3012712);
   ThetaY_mI10_mI5__1687->SetBinContent(320,0.006623936);
   ThetaY_mI10_mI5__1687->SetBinError(311,0.0003593444);
   ThetaY_mI10_mI5__1687->SetBinError(312,0.00253751);
   ThetaY_mI10_mI5__1687->SetBinError(313,0.003917522);
   ThetaY_mI10_mI5__1687->SetBinError(314,0.004406217);
   ThetaY_mI10_mI5__1687->SetBinError(315,0.004629977);
   ThetaY_mI10_mI5__1687->SetBinError(316,0.004630672);
   ThetaY_mI10_mI5__1687->SetBinError(317,0.00444624);
   ThetaY_mI10_mI5__1687->SetBinError(318,0.0038934);
   ThetaY_mI10_mI5__1687->SetBinError(319,0.00254131);
   ThetaY_mI10_mI5__1687->SetBinError(320,0.0003768226);
   ThetaY_mI10_mI5__1687->SetEntries(273621);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1687->SetLineColor(ci);
   ThetaY_mI10_mI5__1687->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1687->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1687->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1687->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1687->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1687->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1687->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1687->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1687->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1687->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1687->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1687->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1687->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1687->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1687->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1687->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1687->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1687->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1687->Draw("AEsame");
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
   
   Double_t _fx3563[10] = {
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
   Double_t _fy3563[10] = {
   0,
   0,
   0.3080561,
   0.8973259,
   1,
   0.9030522,
   0.9860761,
   0.905748,
   0.3409521,
   0.4560956};
   Double_t _felx3563[10] = {
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
   Double_t _fely3563[10] = {
   0,
   0,
   0.03601123,
   0.05485008,
   0.0551312,
   0.05236208,
   0.05700265,
   0.06235646,
   0.05825214,
   0.3775356};
   Double_t _fehx3563[10] = {
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
   Double_t _fehy3563[10] = {
   0.9263826,
   0.01851832,
   0.04048991,
   0.05831128,
   0.05825904,
   0.05549114,
   0.06039849,
   0.06680667,
   0.06917433,
   1.054414};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3563,_fy3563,_felx3563,_fehx3563,_fely3563,_fehy3563);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3563 = new TH1F("Graph_Graph3563","",100,-100,100);
   Graph_Graph3563->SetMinimum(0);
   Graph_Graph3563->SetMaximum(1.5);
   Graph_Graph3563->SetDirectory(0);
   Graph_Graph3563->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3563->SetLineColor(ci);
   Graph_Graph3563->GetXaxis()->SetRange(1,100);
   Graph_Graph3563->GetXaxis()->CenterTitle(true);
   Graph_Graph3563->GetXaxis()->SetLabelFont(42);
   Graph_Graph3563->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3563->GetXaxis()->SetTitleFont(42);
   Graph_Graph3563->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3563->GetYaxis()->CenterTitle(true);
   Graph_Graph3563->GetYaxis()->SetLabelFont(42);
   Graph_Graph3563->GetYaxis()->SetTitleFont(42);
   Graph_Graph3563->GetZaxis()->SetLabelFont(42);
   Graph_Graph3563->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3563->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3563);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.10033,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1688 = new TH2D("ThetaY_vs_Y_mI10_mI5__1688","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8097,281);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8123,14012);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8149,33397);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8175,42249);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8201,46649);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8227,46663);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8253,43020);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8279,32987);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8305,14054);
   ThetaY_vs_Y_mI10_mI5__1688->SetBinContent(8331,309);
   ThetaY_vs_Y_mI10_mI5__1688->SetEntries(273621);
   ThetaY_vs_Y_mI10_mI5__1688->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(1,2333.15);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(2,4666.3);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(3,6999.45);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(4,9332.6);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(5,11665.75);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(6,13998.9);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(7,16332.05);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(8,18665.2);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(9,20998.35);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(10,23331.5);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(11,25664.65);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(12,27997.8);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(13,30330.95);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(14,32664.1);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(15,34997.25);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(16,37330.4);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(17,39663.55);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(18,41996.7);
   ThetaY_vs_Y_mI10_mI5__1688->SetContourLevel(19,44329.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1688->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1688->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1688->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1688->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1688->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1688->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1688->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1688->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1688->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1688->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1688->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1688->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1688->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1688->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1688->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1688->Draw("COL");
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
