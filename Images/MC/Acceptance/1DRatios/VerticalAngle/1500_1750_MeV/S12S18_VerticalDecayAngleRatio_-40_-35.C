void S12S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1364133,125,2.591853);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI40_mI35__1155 = new TH1D("S12S18_ThetaY_mI40_mI35__1155","",630,-1575,1575);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(314,0.05882353);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(315,0.7647059);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(316,2.058824);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(317,1.323529);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(318,1.411765);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(319,1.264706);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(320,1.147059);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(321,1);
   S12S18_ThetaY_mI40_mI35__1155->SetBinContent(322,0.2058824);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(314,0.04159452);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(315,0.1499712);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(316,0.2460765);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(317,0.1973001);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(318,0.2037707);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(319,0.1928658);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(320,0.1836764);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(321,0.1714986);
   S12S18_ThetaY_mI40_mI35__1155->SetBinError(322,0.07781622);
   S12S18_ThetaY_mI40_mI35__1155->SetMinimum(0);
   S12S18_ThetaY_mI40_mI35__1155->SetMaximum(2.319026);
   S12S18_ThetaY_mI40_mI35__1155->SetEntries(314);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__1155->SetLineColor(ci);
   S12S18_ThetaY_mI40_mI35__1155->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__1155->SetMarkerColor(ci);
   S12S18_ThetaY_mI40_mI35__1155->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI40_mI35__1155->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI40_mI35__1155->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1155->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__1155->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1155->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI40_mI35__1155->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI40_mI35__1155->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1155->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1155->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__1155->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__1155->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__1155->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1156 = new TH1D("ThetaY_mI40_mI35__1156","",630,-1575,1575);
   ThetaY_mI40_mI35__1156->SetBinContent(308,0.00135257);
   ThetaY_mI40_mI35__1156->SetBinContent(309,0.2858431);
   ThetaY_mI40_mI35__1156->SetBinContent(310,0.9824166);
   ThetaY_mI40_mI35__1156->SetBinContent(311,1.459874);
   ThetaY_mI40_mI35__1156->SetBinContent(312,1.747971);
   ThetaY_mI40_mI35__1156->SetBinContent(313,1.916141);
   ThetaY_mI40_mI35__1156->SetBinContent(314,2.059513);
   ThetaY_mI40_mI35__1156->SetBinContent(315,2.102795);
   ThetaY_mI40_mI35__1156->SetBinContent(316,2.108206);
   ThetaY_mI40_mI35__1156->SetBinContent(317,1.999549);
   ThetaY_mI40_mI35__1156->SetBinContent(318,1.931019);
   ThetaY_mI40_mI35__1156->SetBinContent(319,1.777277);
   ThetaY_mI40_mI35__1156->SetBinContent(320,1.484671);
   ThetaY_mI40_mI35__1156->SetBinContent(321,1);
   ThetaY_mI40_mI35__1156->SetBinContent(322,0.2849414);
   ThetaY_mI40_mI35__1156->SetBinContent(323,0.0009017133);
   ThetaY_mI40_mI35__1156->SetBinError(308,0.0007809066);
   ThetaY_mI40_mI35__1156->SetBinError(309,0.01135228);
   ThetaY_mI40_mI35__1156->SetBinError(310,0.02104588);
   ThetaY_mI40_mI35__1156->SetBinError(311,0.02565529);
   ThetaY_mI40_mI35__1156->SetBinError(312,0.02807284);
   ThetaY_mI40_mI35__1156->SetBinError(313,0.02939226);
   ThetaY_mI40_mI35__1156->SetBinError(314,0.03047204);
   ThetaY_mI40_mI35__1156->SetBinError(315,0.03079057);
   ThetaY_mI40_mI35__1156->SetBinError(316,0.03083016);
   ThetaY_mI40_mI35__1156->SetBinError(317,0.03002516);
   ThetaY_mI40_mI35__1156->SetBinError(318,0.02950615);
   ThetaY_mI40_mI35__1156->SetBinError(319,0.02830719);
   ThetaY_mI40_mI35__1156->SetBinError(320,0.02587226);
   ThetaY_mI40_mI35__1156->SetBinError(321,0.02123338);
   ThetaY_mI40_mI35__1156->SetBinError(322,0.01133436);
   ThetaY_mI40_mI35__1156->SetBinError(323,0.0006376076);
   ThetaY_mI40_mI35__1156->SetEntries(46894);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1156->SetLineColor(ci);
   ThetaY_mI40_mI35__1156->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1156->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1156->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1156->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1156->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1156->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1156->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1156->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1156->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1156->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1156->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1156->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1156->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1156->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1156->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1156->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1156->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1156->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1156->Draw("AEsame");
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
   
   Double_t _fx3386[16] = {
   -37.5,
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
   32.5,
   37.5};
   Double_t _fy3386[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02856186,
   0.3636616,
   0.9765763,
   0.6619139,
   0.7310983,
   0.7115976,
   0.7726014,
   1,
   0.7225428,
   0};
   Double_t _felx3386[16] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3386[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.01845085,
   0.07104838,
   0.1173,
   0.09879107,
   0.1057318,
   0.1086687,
   0.1238919,
   0.1719172,
   0.2677474,
   0};
   Double_t _fehx3386[16] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3386[16] = {
   55.26769,
   0.1897068,
   0.05514013,
   0.03710122,
   0.03098481,
   0.02826485,
   0.03769022,
   0.08651737,
   0.1323416,
   0.1147901,
   0.1222816,
   0.1267145,
   0.1455973,
   0.2044541,
   0.392485,
   98.54264};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3386,_fy3386,_felx3386,_fehx3386,_fely3386,_fehy3386);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3386 = new TH1F("Graph_Graph3386","",100,-100,100);
   Graph_Graph3386->SetMinimum(0);
   Graph_Graph3386->SetMaximum(1.5);
   Graph_Graph3386->SetDirectory(0);
   Graph_Graph3386->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3386->SetLineColor(ci);
   Graph_Graph3386->GetXaxis()->SetRange(1,100);
   Graph_Graph3386->GetXaxis()->CenterTitle(true);
   Graph_Graph3386->GetXaxis()->SetLabelFont(42);
   Graph_Graph3386->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3386->GetXaxis()->SetTitleFont(42);
   Graph_Graph3386->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3386->GetYaxis()->CenterTitle(true);
   Graph_Graph3386->GetYaxis()->SetLabelFont(42);
   Graph_Graph3386->GetYaxis()->SetTitleFont(42);
   Graph_Graph3386->GetZaxis()->SetLabelFont(42);
   Graph_Graph3386->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3386->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3386);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.319026,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1157 = new TH2D("ThetaY_vs_Y_mI40_mI35__1157","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8013,3);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8039,634);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8065,2179);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8091,3238);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8117,3877);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8143,4250);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8169,4568);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8195,4664);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8221,4676);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8247,4435);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8273,4283);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8299,3942);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8325,3293);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8351,2218);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8377,632);
   ThetaY_vs_Y_mI40_mI35__1157->SetBinContent(8403,2);
   ThetaY_vs_Y_mI40_mI35__1157->SetEntries(46894);
   ThetaY_vs_Y_mI40_mI35__1157->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(1,233.8);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(2,467.6);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(3,701.4);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(4,935.2);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(5,1169);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(6,1402.8);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(7,1636.6);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(8,1870.4);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(9,2104.2);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(10,2338);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(11,2571.8);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(12,2805.6);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(13,3039.4);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(14,3273.2);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(15,3507);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(16,3740.8);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(17,3974.6);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(18,4208.4);
   ThetaY_vs_Y_mI40_mI35__1157->SetContourLevel(19,4442.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1157->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1157->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1157->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1157->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1157->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1157->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1157->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1157->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1157->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1157->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1157->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1157->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1157->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1157->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1157->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1157->Draw("COL");
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
