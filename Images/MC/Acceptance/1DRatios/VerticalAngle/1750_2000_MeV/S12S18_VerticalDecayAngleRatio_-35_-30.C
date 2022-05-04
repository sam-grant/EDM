void S12S18_VerticalDecayAngleRatio_-35_-30()
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
   upper_pad->Range(-125,-0.1213378,125,2.305418);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI35_mI30__1329 = new TH1D("S12S18_ThetaY_mI35_mI30__1329","",630,-1575,1575);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(314,0.0862069);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(315,1.534483);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(316,1.5);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(317,1.672414);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(318,1.37931);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(319,1.051724);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(320,1);
   S12S18_ThetaY_mI35_mI30__1329->SetBinContent(321,0.06896552);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(314,0.0385529);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(315,0.1626548);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(316,0.1608169);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(317,0.1698079);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(318,0.1542116);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(319,0.1346595);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(320,0.1313064);
   S12S18_ThetaY_mI35_mI30__1329->SetBinError(321,0.03448276);
   S12S18_ThetaY_mI35_mI30__1329->SetMinimum(0);
   S12S18_ThetaY_mI35_mI30__1329->SetMaximum(2.062743);
   S12S18_ThetaY_mI35_mI30__1329->SetEntries(481);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1329->SetLineColor(ci);
   S12S18_ThetaY_mI35_mI30__1329->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI35_mI30__1329->SetMarkerColor(ci);
   S12S18_ThetaY_mI35_mI30__1329->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI35_mI30__1329->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI35_mI30__1329->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1329->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1329->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1329->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI35_mI30__1329->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI35_mI30__1329->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1329->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1329->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI35_mI30__1329->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI35_mI30__1329->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI35_mI30__1329->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1330 = new TH1D("ThetaY_mI35_mI30__1330","",630,-1575,1575);
   ThetaY_mI35_mI30__1330->SetBinContent(309,0.0008818342);
   ThetaY_mI35_mI30__1330->SetBinContent(310,0.2729277);
   ThetaY_mI35_mI30__1330->SetBinContent(311,1.016975);
   ThetaY_mI35_mI30__1330->SetBinContent(312,1.406966);
   ThetaY_mI35_mI30__1330->SetBinContent(313,1.676367);
   ThetaY_mI35_mI30__1330->SetBinContent(314,1.830247);
   ThetaY_mI35_mI30__1330->SetBinContent(315,1.824074);
   ThetaY_mI35_mI30__1330->SetBinContent(316,1.87522);
   ThetaY_mI35_mI30__1330->SetBinContent(317,1.803351);
   ThetaY_mI35_mI30__1330->SetBinContent(318,1.664242);
   ThetaY_mI35_mI30__1330->SetBinContent(319,1.430556);
   ThetaY_mI35_mI30__1330->SetBinContent(320,1);
   ThetaY_mI35_mI30__1330->SetBinContent(321,0.2890212);
   ThetaY_mI35_mI30__1330->SetBinContent(322,0.0008818342);
   ThetaY_mI35_mI30__1330->SetBinError(309,0.0004409171);
   ThetaY_mI35_mI30__1330->SetBinError(310,0.007756884);
   ThetaY_mI35_mI30__1330->SetBinError(311,0.01497334);
   ThetaY_mI35_mI30__1330->SetBinError(312,0.01761187);
   ThetaY_mI35_mI30__1330->SetBinError(313,0.01922419);
   ThetaY_mI35_mI30__1330->SetBinError(314,0.02008715);
   ThetaY_mI35_mI30__1330->SetBinError(315,0.02005325);
   ThetaY_mI35_mI30__1330->SetBinError(316,0.02033245);
   ThetaY_mI35_mI30__1330->SetBinError(317,0.01993901);
   ThetaY_mI35_mI30__1330->SetBinError(318,0.01915454);
   ThetaY_mI35_mI30__1330->SetBinError(319,0.01775889);
   ThetaY_mI35_mI30__1330->SetBinError(320,0.01484785);
   ThetaY_mI35_mI30__1330->SetBinError(321,0.007982305);
   ThetaY_mI35_mI30__1330->SetBinError(322,0.0004409171);
   ThetaY_mI35_mI30__1330->SetEntries(72992);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1330->SetLineColor(ci);
   ThetaY_mI35_mI30__1330->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1330->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1330->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1330->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1330->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1330->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1330->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1330->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1330->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1330->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1330->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1330->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1330->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1330->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1330->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1330->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1330->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1330->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1330->Draw("AEsame");
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
   
   Double_t _fx3444[14] = {
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
   Double_t _fy3444[14] = {
   0,
   0,
   0,
   0,
   0,
   0.04710124,
   0.8412393,
   0.7999059,
   0.9273923,
   0.8287921,
   0.7351858,
   1,
   0.2386175,
   0};
   Double_t _felx3444[14] = {
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
   Double_t _fely3444[14] = {
   0,
   0,
   0,
   0,
   0,
   0.02034992,
   0.08947554,
   0.08602552,
   0.09454995,
   0.09295043,
   0.09430535,
   0.1317472,
   0.1143368,
   0};
   Double_t _fehx3444[14] = {
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
   Double_t _fehy3444[14] = {
   45.71026,
   0.1163875,
   0.03121815,
   0.02256367,
   0.01893714,
   0.03187982,
   0.09955114,
   0.09582632,
   0.1047315,
   0.1040231,
   0.1072711,
   0.1503974,
   0.1891876,
   45.71026};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3444,_fy3444,_felx3444,_fehx3444,_fely3444,_fehy3444);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3444 = new TH1F("Graph_Graph3444","",100,-100,100);
   Graph_Graph3444->SetMinimum(0);
   Graph_Graph3444->SetMaximum(1.5);
   Graph_Graph3444->SetDirectory(0);
   Graph_Graph3444->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3444->SetLineColor(ci);
   Graph_Graph3444->GetXaxis()->SetRange(1,100);
   Graph_Graph3444->GetXaxis()->CenterTitle(true);
   Graph_Graph3444->GetXaxis()->SetLabelFont(42);
   Graph_Graph3444->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3444->GetXaxis()->SetTitleFont(42);
   Graph_Graph3444->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3444->GetYaxis()->CenterTitle(true);
   Graph_Graph3444->GetYaxis()->SetLabelFont(42);
   Graph_Graph3444->GetYaxis()->SetTitleFont(42);
   Graph_Graph3444->GetZaxis()->SetLabelFont(42);
   Graph_Graph3444->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3444->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3444);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.062743,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1331 = new TH2D("ThetaY_vs_Y_mI35_mI30__1331","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8040,4);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8066,1238);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8092,4613);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8118,6382);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8144,7604);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8170,8302);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8196,8274);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8222,8506);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8248,8180);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8274,7549);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8300,6489);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8326,4536);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8352,1311);
   ThetaY_vs_Y_mI35_mI30__1331->SetBinContent(8378,4);
   ThetaY_vs_Y_mI35_mI30__1331->SetEntries(72992);
   ThetaY_vs_Y_mI35_mI30__1331->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(1,425.3);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(2,850.6);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(3,1275.9);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(4,1701.2);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(5,2126.5);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(6,2551.8);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(7,2977.1);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(8,3402.4);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(9,3827.7);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(10,4253);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(11,4678.3);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(12,5103.6);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(13,5528.9);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(14,5954.2);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(15,6379.5);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(16,6804.8);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(17,7230.1);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(18,7655.4);
   ThetaY_vs_Y_mI35_mI30__1331->SetContourLevel(19,8080.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1331->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1331->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1331->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1331->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1331->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1331->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1331->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1331->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1331->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1331->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1331->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1331->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1331->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1331->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1331->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1331->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-35_-30","Reco vertices","lpf");
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
