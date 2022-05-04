void S18_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.06753707,125,1.283204);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI40_mI35__1440 = new TH1D("S18_ThetaY_mI40_mI35__1440","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__1440->SetBinContent(314,0.08695652);
   S18_ThetaY_mI40_mI35__1440->SetBinContent(315,0.173913);
   S18_ThetaY_mI40_mI35__1440->SetBinContent(316,0.7391304);
   S18_ThetaY_mI40_mI35__1440->SetBinContent(317,1);
   S18_ThetaY_mI40_mI35__1440->SetBinContent(318,0.7391304);
   S18_ThetaY_mI40_mI35__1440->SetBinContent(319,0.5217391);
   S18_ThetaY_mI40_mI35__1440->SetBinContent(320,0.08695652);
   S18_ThetaY_mI40_mI35__1440->SetBinError(314,0.06148755);
   S18_ThetaY_mI40_mI35__1440->SetBinError(315,0.08695652);
   S18_ThetaY_mI40_mI35__1440->SetBinError(316,0.1792655);
   S18_ThetaY_mI40_mI35__1440->SetBinError(317,0.2085144);
   S18_ThetaY_mI40_mI35__1440->SetBinError(318,0.1792655);
   S18_ThetaY_mI40_mI35__1440->SetBinError(319,0.1506131);
   S18_ThetaY_mI40_mI35__1440->SetBinError(320,0.06148755);
   S18_ThetaY_mI40_mI35__1440->SetMinimum(0);
   S18_ThetaY_mI40_mI35__1440->SetMaximum(1.14813);
   S18_ThetaY_mI40_mI35__1440->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1440->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__1440->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1440->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__1440->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__1440->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__1440->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1440->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1440->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1440->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__1440->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__1440->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1440->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1440->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1440->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1440->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1440->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1441 = new TH1D("ThetaY_mI40_mI35__1441","",630,-1575,1575);
   ThetaY_mI40_mI35__1441->SetBinContent(310,0.000488878);
   ThetaY_mI40_mI35__1441->SetBinContent(311,0.2107064);
   ThetaY_mI40_mI35__1441->SetBinContent(312,0.6167196);
   ThetaY_mI40_mI35__1441->SetBinContent(313,0.8931802);
   ThetaY_mI40_mI35__1441->SetBinContent(314,0.9931557);
   ThetaY_mI40_mI35__1441->SetBinContent(315,1.043755);
   ThetaY_mI40_mI35__1441->SetBinContent(316,1.038377);
   ThetaY_mI40_mI35__1441->SetBinContent(317,1);
   ThetaY_mI40_mI35__1441->SetBinContent(318,0.8638475);
   ThetaY_mI40_mI35__1441->SetBinContent(319,0.6194085);
   ThetaY_mI40_mI35__1441->SetBinContent(320,0.1923735);
   ThetaY_mI40_mI35__1441->SetBinContent(321,0.000977756);
   ThetaY_mI40_mI35__1441->SetBinError(310,0.000345689);
   ThetaY_mI40_mI35__1441->SetBinError(311,0.007176689);
   ThetaY_mI40_mI35__1441->SetBinError(312,0.01227804);
   ThetaY_mI40_mI35__1441->SetBinError(313,0.01477593);
   ThetaY_mI40_mI35__1441->SetBinError(314,0.01558095);
   ThetaY_mI40_mI35__1441->SetBinError(315,0.01597293);
   ThetaY_mI40_mI35__1441->SetBinError(316,0.01593172);
   ThetaY_mI40_mI35__1441->SetBinError(317,0.01563455);
   ThetaY_mI40_mI35__1441->SetBinError(318,0.01453128);
   ThetaY_mI40_mI35__1441->SetBinError(319,0.01230478);
   ThetaY_mI40_mI35__1441->SetBinError(320,0.006857375);
   ThetaY_mI40_mI35__1441->SetBinError(321,0.000488878);
   ThetaY_mI40_mI35__1441->SetEntries(30572);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1441->SetLineColor(ci);
   ThetaY_mI40_mI35__1441->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1441->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1441->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1441->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1441->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1441->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1441->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1441->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1441->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1441->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1441->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1441->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1441->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1441->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1441->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1441->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1441->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1441->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1441->Draw("AEsame");
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
   
   Double_t _fx3481[12] = {
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
   Double_t _fy3481[12] = {
   0,
   0,
   0,
   0,
   0.08755578,
   0.1666225,
   0.7118132,
   1,
   0.8556261,
   0.8423184,
   0.4520192,
   0};
   Double_t _felx3481[12] = {
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
   Double_t _fely3481[12] = {
   0,
   0,
   0,
   0,
   0.05656166,
   0.07977265,
   0.1712498,
   0.2075451,
   0.205927,
   0.2402526,
   0.2921952,
   0};
   Double_t _fehx3481[12] = {
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
   Double_t _fehy3481[12] = {
   268.6849,
   0.3802919,
   0.129838,
   0.08963991,
   0.1155458,
   0.131857,
   0.218456,
   0.2559092,
   0.2627304,
   0.3211137,
   0.5979394,
   103.961};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3481,_fy3481,_felx3481,_fehx3481,_fely3481,_fehy3481);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3481 = new TH1F("Graph_Graph3481","",100,-100,100);
   Graph_Graph3481->SetMinimum(0);
   Graph_Graph3481->SetMaximum(1.5);
   Graph_Graph3481->SetDirectory(0);
   Graph_Graph3481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3481->SetLineColor(ci);
   Graph_Graph3481->GetXaxis()->SetRange(1,100);
   Graph_Graph3481->GetXaxis()->CenterTitle(true);
   Graph_Graph3481->GetXaxis()->SetLabelFont(42);
   Graph_Graph3481->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3481->GetXaxis()->SetTitleFont(42);
   Graph_Graph3481->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3481->GetYaxis()->CenterTitle(true);
   Graph_Graph3481->GetYaxis()->SetLabelFont(42);
   Graph_Graph3481->GetYaxis()->SetTitleFont(42);
   Graph_Graph3481->GetZaxis()->SetLabelFont(42);
   Graph_Graph3481->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3481->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3481);
   
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1442 = new TH2D("ThetaY_vs_Y_mI40_mI35__1442","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8065,2);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8091,862);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8117,2523);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8143,3654);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8169,4063);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8195,4270);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8221,4248);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8247,4091);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8273,3534);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8299,2534);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8325,787);
   ThetaY_vs_Y_mI40_mI35__1442->SetBinContent(8351,4);
   ThetaY_vs_Y_mI40_mI35__1442->SetEntries(30572);
   ThetaY_vs_Y_mI40_mI35__1442->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(1,213.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(2,427);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(3,640.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(4,854);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(5,1067.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(6,1281);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(7,1494.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(8,1708);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(9,1921.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(10,2135);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(11,2348.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(12,2562);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(13,2775.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(14,2989);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(15,3202.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(16,3416);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(17,3629.5);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(18,3843);
   ThetaY_vs_Y_mI40_mI35__1442->SetContourLevel(19,4056.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1442->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1442->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1442->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1442->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1442->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1442->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1442->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1442->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1442->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1442->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1442->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1442->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1442->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1442->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1442->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1442->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-40_-35","Reco vertices","lpf");
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
