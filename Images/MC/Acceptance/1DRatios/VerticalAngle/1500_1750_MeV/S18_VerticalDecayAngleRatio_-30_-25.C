void S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:56 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09020266,125,1.71385);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI30_mI25__1104 = new TH1D("S18_ThetaY_mI30_mI25__1104","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(313,0.01351351);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(314,0.6621622);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(315,1.297297);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(316,1.297297);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(317,1.297297);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(318,1.013514);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(319,1.013514);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(320,1);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(321,0.6081081);
   S18_ThetaY_mI30_mI25__1104->SetBinContent(322,0.1486486);
   S18_ThetaY_mI30_mI25__1104->SetBinError(313,0.01351351);
   S18_ThetaY_mI30_mI25__1104->SetBinError(314,0.09459459);
   S18_ThetaY_mI30_mI25__1104->SetBinError(315,0.1324049);
   S18_ThetaY_mI30_mI25__1104->SetBinError(316,0.1324049);
   S18_ThetaY_mI30_mI25__1104->SetBinError(317,0.1324049);
   S18_ThetaY_mI30_mI25__1104->SetBinError(318,0.1170305);
   S18_ThetaY_mI30_mI25__1104->SetBinError(319,0.1170305);
   S18_ThetaY_mI30_mI25__1104->SetBinError(320,0.1162476);
   S18_ThetaY_mI30_mI25__1104->SetBinError(321,0.0906514);
   S18_ThetaY_mI30_mI25__1104->SetBinError(322,0.04481925);
   S18_ThetaY_mI30_mI25__1104->SetMinimum(0);
   S18_ThetaY_mI30_mI25__1104->SetMaximum(1.533445);
   S18_ThetaY_mI30_mI25__1104->SetEntries(618);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1104->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__1104->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1104->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__1104->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__1104->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__1104->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1104->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1104->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1104->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__1104->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__1104->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1104->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1104->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1104->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1104->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1104->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1105 = new TH1D("ThetaY_mI30_mI25__1105","",630,-1575,1575);
   ThetaY_mI30_mI25__1105->SetBinContent(308,0.001053842);
   ThetaY_mI30_mI25__1105->SetBinContent(309,0.1872006);
   ThetaY_mI30_mI25__1105->SetBinContent(310,0.6894999);
   ThetaY_mI30_mI25__1105->SetBinContent(311,0.994635);
   ThetaY_mI30_mI25__1105->SetBinContent(312,1.196302);
   ThetaY_mI30_mI25__1105->SetBinContent(313,1.297088);
   ThetaY_mI30_mI25__1105->SetBinContent(314,1.36645);
   ThetaY_mI30_mI25__1105->SetBinContent(315,1.394041);
   ThetaY_mI30_mI25__1105->SetBinContent(316,1.385131);
   ThetaY_mI30_mI25__1105->SetBinContent(317,1.345947);
   ThetaY_mI30_mI25__1105->SetBinContent(318,1.296417);
   ThetaY_mI30_mI25__1105->SetBinContent(319,1.18059);
   ThetaY_mI30_mI25__1105->SetBinContent(320,1);
   ThetaY_mI30_mI25__1105->SetBinContent(321,0.6872006);
   ThetaY_mI30_mI25__1105->SetBinContent(322,0.1888293);
   ThetaY_mI30_mI25__1105->SetBinContent(323,0.001053842);
   ThetaY_mI30_mI25__1105->SetBinError(308,0.0003177452);
   ThetaY_mI30_mI25__1105->SetBinError(309,0.004234918);
   ThetaY_mI30_mI25__1105->SetBinError(310,0.008127528);
   ThetaY_mI30_mI25__1105->SetBinError(311,0.00976165);
   ThetaY_mI30_mI25__1105->SetBinError(312,0.01070562);
   ThetaY_mI30_mI25__1105->SetBinError(313,0.01114746);
   ThetaY_mI30_mI25__1105->SetBinError(314,0.01144164);
   ThetaY_mI30_mI25__1105->SetBinError(315,0.01155657);
   ThetaY_mI30_mI25__1105->SetBinError(316,0.01151958);
   ThetaY_mI30_mI25__1105->SetBinError(317,0.01135548);
   ThetaY_mI30_mI25__1105->SetBinError(318,0.01114458);
   ThetaY_mI30_mI25__1105->SetBinError(319,0.01063508);
   ThetaY_mI30_mI25__1105->SetBinError(320,0.009787941);
   ThetaY_mI30_mI25__1105->SetBinError(321,0.008113965);
   ThetaY_mI30_mI25__1105->SetBinError(322,0.0042533);
   ThetaY_mI30_mI25__1105->SetBinError(323,0.0003177452);
   ThetaY_mI30_mI25__1105->SetEntries(148339);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1105->SetLineColor(ci);
   ThetaY_mI30_mI25__1105->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1105->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1105->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1105->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1105->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1105->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1105->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1105->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1105->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1105->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1105->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1105->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1105->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1105->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1105->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1105->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1105->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1105->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1105->Draw("AEsame");
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
   
   Double_t _fx3369[16] = {
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
   Double_t _fy3369[16] = {
   0,
   0,
   0,
   0,
   0,
   0.01041835,
   0.4845859,
   0.930602,
   0.936588,
   0.9638543,
   0.7817805,
   0.8584804,
   1,
   0.8849062,
   0.7872119,
   0};
   Double_t _felx3369[16] = {
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
   Double_t _fely3369[16] = {
   0,
   0,
   0,
   0,
   0,
   0.008618663,
   0.06910556,
   0.09512257,
   0.09573643,
   0.09853291,
   0.09031658,
   0.09920394,
   0.1163894,
   0.1318248,
   0.2342981,
   0};
   Double_t _fehx3369[16] = {
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
   Double_t _fehy3369[16] = {
   25.69813,
   0.1329611,
   0.03608681,
   0.02501508,
   0.02079785,
   0.02396019,
   0.07974621,
   0.105388,
   0.1060683,
   0.1091679,
   0.1014135,
   0.1113971,
   0.1308065,
   0.1531164,
   0.3173026,
   25.69813};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3369,_fy3369,_felx3369,_fehx3369,_fely3369,_fehy3369);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3369 = new TH1F("Graph_Graph3369","",100,-100,100);
   Graph_Graph3369->SetMinimum(0);
   Graph_Graph3369->SetMaximum(1.5);
   Graph_Graph3369->SetDirectory(0);
   Graph_Graph3369->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3369->SetLineColor(ci);
   Graph_Graph3369->GetXaxis()->SetRange(1,100);
   Graph_Graph3369->GetXaxis()->CenterTitle(true);
   Graph_Graph3369->GetXaxis()->SetLabelFont(42);
   Graph_Graph3369->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3369->GetXaxis()->SetTitleFont(42);
   Graph_Graph3369->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3369->GetYaxis()->CenterTitle(true);
   Graph_Graph3369->GetYaxis()->SetLabelFont(42);
   Graph_Graph3369->GetYaxis()->SetTitleFont(42);
   Graph_Graph3369->GetZaxis()->SetLabelFont(42);
   Graph_Graph3369->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3369->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3369);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.533445,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1106 = new TH2D("ThetaY_vs_Y_mI30_mI25__1106","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8015,11);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8041,1954);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8067,7197);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8093,10382);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8119,12487);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8145,13539);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8171,14263);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8197,14551);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8223,14458);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8249,14049);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8275,13532);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8301,12323);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8327,10438);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8353,7173);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8379,1971);
   ThetaY_vs_Y_mI30_mI25__1106->SetBinContent(8405,11);
   ThetaY_vs_Y_mI30_mI25__1106->SetEntries(148339);
   ThetaY_vs_Y_mI30_mI25__1106->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(1,727.55);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(2,1455.1);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(3,2182.65);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(4,2910.2);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(5,3637.75);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(6,4365.3);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(7,5092.85);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(8,5820.4);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(9,6547.95);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(10,7275.5);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(11,8003.05);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(12,8730.6);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(13,9458.15);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(14,10185.7);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(15,10913.25);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(16,11640.8);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(17,12368.35);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(18,13095.9);
   ThetaY_vs_Y_mI30_mI25__1106->SetContourLevel(19,13823.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1106->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1106->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1106->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1106->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1106->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1106->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1106->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1106->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1106->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1106->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1106->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1106->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1106->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1106->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1106->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1106->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-30_-25","Reco vertices","lpf");
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
