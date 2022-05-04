void S12S18_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.06753707,125,1.283204);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI40_mI35__1497 = new TH1D("S12S18_ThetaY_mI40_mI35__1497","",630,-1575,1575);
   S12S18_ThetaY_mI40_mI35__1497->SetBinContent(314,0.04444444);
   S12S18_ThetaY_mI40_mI35__1497->SetBinContent(315,0.1777778);
   S12S18_ThetaY_mI40_mI35__1497->SetBinContent(316,0.8666667);
   S12S18_ThetaY_mI40_mI35__1497->SetBinContent(317,1);
   S12S18_ThetaY_mI40_mI35__1497->SetBinContent(318,0.7777778);
   S12S18_ThetaY_mI40_mI35__1497->SetBinContent(319,0.4888889);
   S12S18_ThetaY_mI40_mI35__1497->SetBinContent(320,0.1111111);
   S12S18_ThetaY_mI40_mI35__1497->SetBinError(314,0.03142697);
   S12S18_ThetaY_mI40_mI35__1497->SetBinError(315,0.06285394);
   S12S18_ThetaY_mI40_mI35__1497->SetBinError(316,0.1387777);
   S12S18_ThetaY_mI40_mI35__1497->SetBinError(317,0.1490712);
   S12S18_ThetaY_mI40_mI35__1497->SetBinError(318,0.1314684);
   S12S18_ThetaY_mI40_mI35__1497->SetBinError(319,0.1042315);
   S12S18_ThetaY_mI40_mI35__1497->SetBinError(320,0.0496904);
   S12S18_ThetaY_mI40_mI35__1497->SetMinimum(0);
   S12S18_ThetaY_mI40_mI35__1497->SetMaximum(1.14813);
   S12S18_ThetaY_mI40_mI35__1497->SetEntries(156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__1497->SetLineColor(ci);
   S12S18_ThetaY_mI40_mI35__1497->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__1497->SetMarkerColor(ci);
   S12S18_ThetaY_mI40_mI35__1497->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI40_mI35__1497->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI40_mI35__1497->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1497->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__1497->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1497->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI40_mI35__1497->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI40_mI35__1497->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1497->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1497->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1497->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__1497->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1497->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1498 = new TH1D("ThetaY_mI40_mI35__1498","",630,-1575,1575);
   ThetaY_mI40_mI35__1498->SetBinContent(310,0.000488878);
   ThetaY_mI40_mI35__1498->SetBinContent(311,0.2107064);
   ThetaY_mI40_mI35__1498->SetBinContent(312,0.6167196);
   ThetaY_mI40_mI35__1498->SetBinContent(313,0.8931802);
   ThetaY_mI40_mI35__1498->SetBinContent(314,0.9931557);
   ThetaY_mI40_mI35__1498->SetBinContent(315,1.043755);
   ThetaY_mI40_mI35__1498->SetBinContent(316,1.038377);
   ThetaY_mI40_mI35__1498->SetBinContent(317,1);
   ThetaY_mI40_mI35__1498->SetBinContent(318,0.8638475);
   ThetaY_mI40_mI35__1498->SetBinContent(319,0.6194085);
   ThetaY_mI40_mI35__1498->SetBinContent(320,0.1923735);
   ThetaY_mI40_mI35__1498->SetBinContent(321,0.000977756);
   ThetaY_mI40_mI35__1498->SetBinError(310,0.000345689);
   ThetaY_mI40_mI35__1498->SetBinError(311,0.007176689);
   ThetaY_mI40_mI35__1498->SetBinError(312,0.01227804);
   ThetaY_mI40_mI35__1498->SetBinError(313,0.01477593);
   ThetaY_mI40_mI35__1498->SetBinError(314,0.01558095);
   ThetaY_mI40_mI35__1498->SetBinError(315,0.01597293);
   ThetaY_mI40_mI35__1498->SetBinError(316,0.01593172);
   ThetaY_mI40_mI35__1498->SetBinError(317,0.01563455);
   ThetaY_mI40_mI35__1498->SetBinError(318,0.01453128);
   ThetaY_mI40_mI35__1498->SetBinError(319,0.01230478);
   ThetaY_mI40_mI35__1498->SetBinError(320,0.006857375);
   ThetaY_mI40_mI35__1498->SetBinError(321,0.000488878);
   ThetaY_mI40_mI35__1498->SetEntries(30572);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1498->SetLineColor(ci);
   ThetaY_mI40_mI35__1498->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1498->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1498->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1498->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1498->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1498->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1498->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1498->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1498->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1498->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1498->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1498->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1498->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1498->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1498->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1498->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1498->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1498->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1498->Draw("AEsame");
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
   
   Double_t _fx3500[12] = {
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
   Double_t _fy3500[12] = {
   0,
   0,
   0,
   0,
   0.04475073,
   0.1703253,
   0.8346359,
   1,
   0.9003647,
   0.7892835,
   0.5775801,
   0};
   Double_t _felx3500[12] = {
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
   Double_t _fely3500[12] = {
   0,
   0,
   0,
   0,
   0.02890929,
   0.05898988,
   0.1336676,
   0.1493123,
   0.1521865,
   0.1676799,
   0.2501358,
   0};
   Double_t _fehx3500[12] = {
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
   Double_t _fehy3500[12] = {
   137.3278,
   0.1943714,
   0.06636163,
   0.04581595,
   0.05905677,
   0.08411214,
   0.1570418,
   0.1735074,
   0.1804266,
   0.2078287,
   0.392811,
   53.1356};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3500,_fy3500,_felx3500,_fehx3500,_fely3500,_fehy3500);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3500 = new TH1F("Graph_Graph3500","",100,-100,100);
   Graph_Graph3500->SetMinimum(0);
   Graph_Graph3500->SetMaximum(1.5);
   Graph_Graph3500->SetDirectory(0);
   Graph_Graph3500->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3500->SetLineColor(ci);
   Graph_Graph3500->GetXaxis()->SetRange(1,100);
   Graph_Graph3500->GetXaxis()->CenterTitle(true);
   Graph_Graph3500->GetXaxis()->SetLabelFont(42);
   Graph_Graph3500->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3500->GetXaxis()->SetTitleFont(42);
   Graph_Graph3500->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3500->GetYaxis()->CenterTitle(true);
   Graph_Graph3500->GetYaxis()->SetLabelFont(42);
   Graph_Graph3500->GetYaxis()->SetTitleFont(42);
   Graph_Graph3500->GetZaxis()->SetLabelFont(42);
   Graph_Graph3500->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3500->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3500);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.14813,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1499 = new TH2D("ThetaY_vs_Y_mI40_mI35__1499","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8065,2);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8091,862);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8117,2523);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8143,3654);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8169,4063);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8195,4270);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8221,4248);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8247,4091);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8273,3534);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8299,2534);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8325,787);
   ThetaY_vs_Y_mI40_mI35__1499->SetBinContent(8351,4);
   ThetaY_vs_Y_mI40_mI35__1499->SetEntries(30572);
   ThetaY_vs_Y_mI40_mI35__1499->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(1,213.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(2,427);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(3,640.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(4,854);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(5,1067.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(6,1281);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(7,1494.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(8,1708);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(9,1921.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(10,2135);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(11,2348.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(12,2562);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(13,2775.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(14,2989);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(15,3202.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(16,3416);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(17,3629.5);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(18,3843);
   ThetaY_vs_Y_mI40_mI35__1499->SetContourLevel(19,4056.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1499->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1499->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1499->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1499->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1499->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1499->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1499->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1499->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1499->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1499->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1499->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1499->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1499->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1499->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1499->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1499->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-40_-35","Reco vertices","lpf");
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
