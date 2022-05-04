void S18_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.06541788,125,1.24294);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI40_mI35__1269 = new TH1D("S18_ThetaY_mI40_mI35__1269","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(314,0.03448276);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(315,0.3793103);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(316,1);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(317,0.9310345);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(318,0.5862069);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(319,0.4482759);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(320,0.4827586);
   S18_ThetaY_mI40_mI35__1269->SetBinContent(321,0.1034483);
   S18_ThetaY_mI40_mI35__1269->SetBinError(314,0.03448276);
   S18_ThetaY_mI40_mI35__1269->SetBinError(315,0.1143664);
   S18_ThetaY_mI40_mI35__1269->SetBinError(316,0.1856953);
   S18_ThetaY_mI40_mI35__1269->SetBinError(317,0.1791777);
   S18_ThetaY_mI40_mI35__1269->SetBinError(318,0.1421761);
   S18_ThetaY_mI40_mI35__1269->SetBinError(319,0.1243294);
   S18_ThetaY_mI40_mI35__1269->SetBinError(320,0.1290227);
   S18_ThetaY_mI40_mI35__1269->SetBinError(321,0.05972589);
   S18_ThetaY_mI40_mI35__1269->SetMinimum(0);
   S18_ThetaY_mI40_mI35__1269->SetMaximum(1.112104);
   S18_ThetaY_mI40_mI35__1269->SetEntries(115);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1269->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__1269->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__1269->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__1269->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__1269->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__1269->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1269->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1269->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1269->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__1269->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__1269->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1269->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1269->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__1269->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__1269->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__1269->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1270 = new TH1D("ThetaY_mI40_mI35__1270","",630,-1575,1575);
   ThetaY_mI40_mI35__1270->SetBinContent(310,0.1397447);
   ThetaY_mI40_mI35__1270->SetBinContent(311,0.5176056);
   ThetaY_mI40_mI35__1270->SetBinContent(312,0.7535211);
   ThetaY_mI40_mI35__1270->SetBinContent(313,0.9066901);
   ThetaY_mI40_mI35__1270->SetBinContent(314,0.9790933);
   ThetaY_mI40_mI35__1270->SetBinContent(315,1.011004);
   ThetaY_mI40_mI35__1270->SetBinContent(316,1);
   ThetaY_mI40_mI35__1270->SetBinContent(317,0.9742518);
   ThetaY_mI40_mI35__1270->SetBinContent(318,0.9040493);
   ThetaY_mI40_mI35__1270->SetBinContent(319,0.7396567);
   ThetaY_mI40_mI35__1270->SetBinContent(320,0.5228873);
   ThetaY_mI40_mI35__1270->SetBinContent(321,0.1487676);
   ThetaY_mI40_mI35__1270->SetBinContent(322,0.0008802817);
   ThetaY_mI40_mI35__1270->SetBinError(310,0.0055456);
   ThetaY_mI40_mI35__1270->SetBinError(311,0.01067285);
   ThetaY_mI40_mI35__1270->SetBinError(312,0.01287741);
   ThetaY_mI40_mI35__1270->SetBinError(313,0.01412571);
   ThetaY_mI40_mI35__1270->SetBinError(314,0.01467888);
   ThetaY_mI40_mI35__1270->SetBinError(315,0.01491616);
   ThetaY_mI40_mI35__1270->SetBinError(316,0.01483477);
   ThetaY_mI40_mI35__1270->SetBinError(317,0.01464254);
   ThetaY_mI40_mI35__1270->SetBinError(318,0.01410512);
   ThetaY_mI40_mI35__1270->SetBinError(319,0.01275839);
   ThetaY_mI40_mI35__1270->SetBinError(320,0.01072716);
   ThetaY_mI40_mI35__1270->SetBinError(321,0.005721831);
   ThetaY_mI40_mI35__1270->SetBinError(322,0.0004401408);
   ThetaY_mI40_mI35__1270->SetEntries(39070);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1270->SetLineColor(ci);
   ThetaY_mI40_mI35__1270->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1270->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1270->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1270->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1270->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1270->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1270->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1270->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1270->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1270->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1270->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1270->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1270->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1270->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1270->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1270->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1270->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1270->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1270->Draw("AEsame");
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
   
   Double_t _fx3424[13] = {
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
   Double_t _fy3424[13] = {
   0,
   0,
   0,
   0,
   0.03521907,
   0.375182,
   1,
   0.9556405,
   0.6484236,
   0.6060594,
   0.9232555,
   0.6953683,
   0};
   Double_t _felx3424[13] = {
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
   Double_t _fely3424[13] = {
   0,
   0,
   0,
   0,
   0.02913609,
   0.111503,
   0.1851874,
   0.1833041,
   0.1560094,
   0.1662028,
   0.2444428,
   0.3790594,
   0};
   Double_t _fehx3424[13] = {
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
   Double_t _fehy3424[13] = {
   0.4549411,
   0.1226964,
   0.08427179,
   0.0700324,
   0.08101723,
   0.150889,
   0.2231773,
   0.2224073,
   0.1990193,
   0.219577,
   0.3198098,
   0.6793672,
   91.58175};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3424,_fy3424,_felx3424,_fehx3424,_fely3424,_fehy3424);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3424 = new TH1F("Graph_Graph3424","",100,-100,100);
   Graph_Graph3424->SetMinimum(0);
   Graph_Graph3424->SetMaximum(1.5);
   Graph_Graph3424->SetDirectory(0);
   Graph_Graph3424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3424->SetLineColor(ci);
   Graph_Graph3424->GetXaxis()->SetRange(1,100);
   Graph_Graph3424->GetXaxis()->CenterTitle(true);
   Graph_Graph3424->GetXaxis()->SetLabelFont(42);
   Graph_Graph3424->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3424->GetXaxis()->SetTitleFont(42);
   Graph_Graph3424->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3424->GetYaxis()->CenterTitle(true);
   Graph_Graph3424->GetYaxis()->SetLabelFont(42);
   Graph_Graph3424->GetYaxis()->SetTitleFont(42);
   Graph_Graph3424->GetZaxis()->SetLabelFont(42);
   Graph_Graph3424->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3424->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3424);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.112104,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1271 = new TH2D("ThetaY_vs_Y_mI40_mI35__1271","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8065,635);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8091,2352);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8117,3424);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8143,4120);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8169,4449);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8195,4594);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8221,4544);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8247,4427);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8273,4108);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8299,3361);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8325,2376);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8351,676);
   ThetaY_vs_Y_mI40_mI35__1271->SetBinContent(8377,4);
   ThetaY_vs_Y_mI40_mI35__1271->SetEntries(39070);
   ThetaY_vs_Y_mI40_mI35__1271->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(1,229.7);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(2,459.4);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(3,689.1);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(4,918.8);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(5,1148.5);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(6,1378.2);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(7,1607.9);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(8,1837.6);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(9,2067.3);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(10,2297);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(11,2526.7);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(12,2756.4);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(13,2986.1);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(14,3215.8);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(15,3445.5);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(16,3675.2);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(17,3904.9);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(18,4134.6);
   ThetaY_vs_Y_mI40_mI35__1271->SetContourLevel(19,4364.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1271->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1271->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1271->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1271->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1271->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1271->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1271->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1271->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1271->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1271->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1271->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1271->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1271->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1271->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1271->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1271->Draw("COL");
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
