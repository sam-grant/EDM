void S12S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08579095,125,1.630028);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_15_20__1359 = new TH1D("S12S18_ThetaY_15_20__1359","",630,-1575,1575);
   S12S18_ThetaY_15_20__1359->SetBinContent(310,0.1428571);
   S12S18_ThetaY_15_20__1359->SetBinContent(311,0.5609756);
   S12S18_ThetaY_15_20__1359->SetBinContent(312,1);
   S12S18_ThetaY_15_20__1359->SetBinContent(313,1.114983);
   S12S18_ThetaY_15_20__1359->SetBinContent(314,1.195122);
   S12S18_ThetaY_15_20__1359->SetBinContent(315,1.174216);
   S12S18_ThetaY_15_20__1359->SetBinContent(316,1.292683);
   S12S18_ThetaY_15_20__1359->SetBinContent(317,1.059233);
   S12S18_ThetaY_15_20__1359->SetBinContent(318,0.3205575);
   S12S18_ThetaY_15_20__1359->SetBinContent(319,0.006968641);
   S12S18_ThetaY_15_20__1359->SetBinError(310,0.02231054);
   S12S18_ThetaY_15_20__1359->SetBinError(311,0.04421107);
   S12S18_ThetaY_15_20__1359->SetBinError(312,0.05902813);
   S12S18_ThetaY_15_20__1359->SetBinError(313,0.06232942);
   S12S18_ThetaY_15_20__1359->SetBinError(314,0.06453052);
   S12S18_ThetaY_15_20__1359->SetBinError(315,0.06396362);
   S12S18_ThetaY_15_20__1359->SetBinError(316,0.06711275);
   S12S18_ThetaY_15_20__1359->SetBinError(317,0.0607512);
   S12S18_ThetaY_15_20__1359->SetBinError(318,0.03342043);
   S12S18_ThetaY_15_20__1359->SetBinError(319,0.004927573);
   S12S18_ThetaY_15_20__1359->SetMinimum(0);
   S12S18_ThetaY_15_20__1359->SetMaximum(1.458446);
   S12S18_ThetaY_15_20__1359->SetEntries(2258);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1359->SetLineColor(ci);
   S12S18_ThetaY_15_20__1359->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__1359->SetMarkerColor(ci);
   S12S18_ThetaY_15_20__1359->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_15_20__1359->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_15_20__1359->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1359->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1359->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1359->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_15_20__1359->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_15_20__1359->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1359->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1359->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__1359->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__1359->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__1359->Draw("AE");
   
   TH1D *ThetaY_15_20__1360 = new TH1D("ThetaY_15_20__1360","",630,-1575,1575);
   ThetaY_15_20__1360->SetBinContent(309,0.0005140372);
   ThetaY_15_20__1360->SetBinContent(310,0.1946224);
   ThetaY_15_20__1360->SetBinContent(311,0.7084618);
   ThetaY_15_20__1360->SetBinContent(312,1);
   ThetaY_15_20__1360->SetBinContent(313,1.181297);
   ThetaY_15_20__1360->SetBinContent(314,1.292764);
   ThetaY_15_20__1360->SetBinContent(315,1.316093);
   ThetaY_15_20__1360->SetBinContent(316,1.32586);
   ThetaY_15_20__1360->SetBinContent(317,1.268723);
   ThetaY_15_20__1360->SetBinContent(318,1.184342);
   ThetaY_15_20__1360->SetBinContent(319,1.006248);
   ThetaY_15_20__1360->SetBinContent(320,0.711032);
   ThetaY_15_20__1360->SetBinContent(321,0.1946619);
   ThetaY_15_20__1360->SetBinContent(322,0.0005931198);
   ThetaY_15_20__1360->SetBinError(309,0.0001425683);
   ThetaY_15_20__1360->SetBinError(310,0.002774099);
   ThetaY_15_20__1360->SetBinError(311,0.00529278);
   ThetaY_15_20__1360->SetBinError(312,0.006288189);
   ThetaY_15_20__1360->SetBinError(313,0.006834475);
   ThetaY_15_20__1360->SetBinError(314,0.007149657);
   ThetaY_15_20__1360->SetBinError(315,0.00721388);
   ThetaY_15_20__1360->SetBinError(316,0.007240598);
   ThetaY_15_20__1360->SetBinError(317,0.007082865);
   ThetaY_15_20__1360->SetBinError(318,0.006843276);
   ThetaY_15_20__1360->SetBinError(319,0.006307801);
   ThetaY_15_20__1360->SetBinError(320,0.005302372);
   ThetaY_15_20__1360->SetBinError(321,0.002774381);
   ThetaY_15_20__1360->SetBinError(322,0.0001531429);
   ThetaY_15_20__1360->SetEntries(287932);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1360->SetLineColor(ci);
   ThetaY_15_20__1360->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1360->SetMarkerColor(ci);
   ThetaY_15_20__1360->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1360->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1360->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1360->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1360->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1360->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1360->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1360->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1360->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1360->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1360->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1360->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1360->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1360->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1360->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1360->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1360->Draw("AEsame");
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
   
   Double_t _fx3454[14] = {
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
   Double_t _fy3454[14] = {
   0,
   0.7340222,
   0.7918219,
   1,
   0.9438631,
   0.9244704,
   0.8921982,
   0.9749769,
   0.8348817,
   0.270663,
   0.006925375,
   0,
   0,
   0};
   Double_t _felx3454[14] = {
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
   Double_t _fely3454[14] = {
   0,
   0.1146289,
   0.06261723,
   0.0593264,
   0.05301681,
   0.05015267,
   0.04882161,
   0.05087387,
   0.04808287,
   0.02820997,
   0.00447326,
   0,
   0,
   0};
   Double_t _fehx3454[14] = {
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
   Double_t _fehy3454[14] = {
   13.40593,
   0.1341261,
   0.06778003,
   0.06295745,
   0.0560837,
   0.0529518,
   0.05157072,
   0.05360193,
   0.05093676,
   0.03131641,
   0.009134915,
   0.00902215,
   0.03295924,
   11.50691};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3454,_fy3454,_felx3454,_fehx3454,_fely3454,_fehy3454);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3454 = new TH1F("Graph_Graph3454","",100,-100,100);
   Graph_Graph3454->SetMinimum(0);
   Graph_Graph3454->SetMaximum(1.5);
   Graph_Graph3454->SetDirectory(0);
   Graph_Graph3454->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3454->SetLineColor(ci);
   Graph_Graph3454->GetXaxis()->SetRange(1,100);
   Graph_Graph3454->GetXaxis()->CenterTitle(true);
   Graph_Graph3454->GetXaxis()->SetLabelFont(42);
   Graph_Graph3454->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3454->GetXaxis()->SetTitleFont(42);
   Graph_Graph3454->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3454->GetYaxis()->CenterTitle(true);
   Graph_Graph3454->GetYaxis()->SetLabelFont(42);
   Graph_Graph3454->GetYaxis()->SetTitleFont(42);
   Graph_Graph3454->GetZaxis()->SetLabelFont(42);
   Graph_Graph3454->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3454->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3454);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.458446,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1361 = new TH2D("ThetaY_vs_Y_15_20__1361","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8050,13);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8076,4922);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8102,17917);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8128,25290);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8154,29875);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8180,32694);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8206,33284);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8232,33531);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8258,32086);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8284,29952);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8310,25448);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8336,17982);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8362,4923);
   ThetaY_vs_Y_15_20__1361->SetBinContent(8388,15);
   ThetaY_vs_Y_15_20__1361->SetEntries(287932);
   ThetaY_vs_Y_15_20__1361->SetContour(20);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(1,1676.55);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(2,3353.1);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(3,5029.65);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(4,6706.2);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(5,8382.75);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(6,10059.3);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(7,11735.85);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(8,13412.4);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(9,15088.95);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(10,16765.5);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(11,18442.05);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(12,20118.6);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(13,21795.15);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(14,23471.7);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(15,25148.25);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(16,26824.8);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(17,28501.35);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(18,30177.9);
   ThetaY_vs_Y_15_20__1361->SetContourLevel(19,31854.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1361->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1361->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1361->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1361->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1361->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1361->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1361->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1361->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1361->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1361->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1361->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1361->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1361->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1361->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1361->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1361->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_15_20","Reco vertices","lpf");
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
