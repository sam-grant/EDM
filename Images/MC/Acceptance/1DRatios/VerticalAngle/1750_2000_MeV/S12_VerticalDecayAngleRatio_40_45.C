void S12_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.4579592,125,8.701225);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__1260 = new TH1D("S12_ThetaY_40_45__1260","",630,-1575,1575);
   S12_ThetaY_40_45__1260->SetBinContent(310,1);
   S12_ThetaY_40_45__1260->SetBinContent(311,1);
   S12_ThetaY_40_45__1260->SetBinContent(312,0.25);
   S12_ThetaY_40_45__1260->SetBinContent(313,2);
   S12_ThetaY_40_45__1260->SetBinContent(314,4.25);
   S12_ThetaY_40_45__1260->SetBinContent(315,2.25);
   S12_ThetaY_40_45__1260->SetBinError(310,0.5);
   S12_ThetaY_40_45__1260->SetBinError(311,0.5);
   S12_ThetaY_40_45__1260->SetBinError(312,0.25);
   S12_ThetaY_40_45__1260->SetBinError(313,0.7071068);
   S12_ThetaY_40_45__1260->SetBinError(314,1.030776);
   S12_ThetaY_40_45__1260->SetBinError(315,0.75);
   S12_ThetaY_40_45__1260->SetMinimum(0);
   S12_ThetaY_40_45__1260->SetMaximum(7.785306);
   S12_ThetaY_40_45__1260->SetEntries(43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1260->SetLineColor(ci);
   S12_ThetaY_40_45__1260->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1260->SetMarkerColor(ci);
   S12_ThetaY_40_45__1260->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__1260->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__1260->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1260->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1260->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1260->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__1260->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__1260->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1260->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1260->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1260->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1260->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1260->Draw("AE");
   
   TH1D *ThetaY_40_45__1261 = new TH1D("ThetaY_40_45__1261","",630,-1575,1575);
   ThetaY_40_45__1261->SetBinContent(310,1);
   ThetaY_40_45__1261->SetBinContent(311,3.571429);
   ThetaY_40_45__1261->SetBinContent(312,5.318367);
   ThetaY_40_45__1261->SetBinContent(313,6.142857);
   ThetaY_40_45__1261->SetBinContent(314,6.897959);
   ThetaY_40_45__1261->SetBinContent(315,7.077551);
   ThetaY_40_45__1261->SetBinContent(316,7.020408);
   ThetaY_40_45__1261->SetBinContent(317,6.714286);
   ThetaY_40_45__1261->SetBinContent(318,6.346939);
   ThetaY_40_45__1261->SetBinContent(319,5.322449);
   ThetaY_40_45__1261->SetBinContent(320,3.836735);
   ThetaY_40_45__1261->SetBinContent(321,0.8938776);
   ThetaY_40_45__1261->SetBinError(310,0.06388766);
   ThetaY_40_45__1261->SetBinError(311,0.1207363);
   ThetaY_40_45__1261->SetBinError(312,0.1473351);
   ThetaY_40_45__1261->SetBinError(313,0.1583442);
   ThetaY_40_45__1261->SetBinError(314,0.1677943);
   ThetaY_40_45__1261->SetBinError(315,0.1699646);
   ThetaY_40_45__1261->SetBinError(316,0.1692771);
   ThetaY_40_45__1261->SetBinError(317,0.1655453);
   ThetaY_40_45__1261->SetBinError(318,0.160953);
   ThetaY_40_45__1261->SetBinError(319,0.1473916);
   ThetaY_40_45__1261->SetBinError(320,0.1251405);
   ThetaY_40_45__1261->SetBinError(321,0.06040265);
   ThetaY_40_45__1261->SetEntries(14735);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1261->SetLineColor(ci);
   ThetaY_40_45__1261->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1261->SetMarkerColor(ci);
   ThetaY_40_45__1261->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1261->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1261->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1261->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1261->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1261->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1261->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1261->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1261->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1261->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1261->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1261->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1261->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1261->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1261->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1261->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1261->Draw("AEsame");
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
   
   Double_t _fx3421[12] = {
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
   Double_t _fy3421[12] = {
   1,
   0.28,
   0.04700691,
   0.3255814,
   0.6161243,
   0.3179066,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3421[12] = {
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
   Double_t _fely3421[12] = {
   0.4816632,
   0.1342464,
   0.03889198,
   0.1129329,
   0.1486508,
   0.1042146,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3421[12] = {
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
   Double_t _fehy3421[12] = {
   0.8022592,
   0.2222992,
   0.1082306,
   0.1611951,
   0.1898338,
   0.1457332,
   0.06559474,
   0.06858705,
   0.07255907,
   0.08653544,
   0.1200777,
   0.5170679};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3421,_fy3421,_felx3421,_fehx3421,_fely3421,_fehy3421);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3421 = new TH1F("Graph_Graph3421","",100,-100,100);
   Graph_Graph3421->SetMinimum(0);
   Graph_Graph3421->SetMaximum(1.5);
   Graph_Graph3421->SetDirectory(0);
   Graph_Graph3421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3421->SetLineColor(ci);
   Graph_Graph3421->GetXaxis()->SetRange(1,100);
   Graph_Graph3421->GetXaxis()->CenterTitle(true);
   Graph_Graph3421->GetXaxis()->SetLabelFont(42);
   Graph_Graph3421->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3421->GetXaxis()->SetTitleFont(42);
   Graph_Graph3421->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3421->GetYaxis()->CenterTitle(true);
   Graph_Graph3421->GetYaxis()->SetLabelFont(42);
   Graph_Graph3421->GetYaxis()->SetTitleFont(42);
   Graph_Graph3421->GetZaxis()->SetLabelFont(42);
   Graph_Graph3421->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3421->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3421);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,7.785306,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1262 = new TH2D("ThetaY_vs_Y_40_45__1262","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8081,245);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8107,875);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8133,1303);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8159,1505);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8185,1690);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8211,1734);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8237,1720);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8263,1645);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8289,1555);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8315,1304);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8341,940);
   ThetaY_vs_Y_40_45__1262->SetBinContent(8367,219);
   ThetaY_vs_Y_40_45__1262->SetEntries(14735);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1262->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1262->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1262->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1262->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1262->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1262->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1262->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1262->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1262->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1262->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1262->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1262->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1262->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1262->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1262->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1262->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
