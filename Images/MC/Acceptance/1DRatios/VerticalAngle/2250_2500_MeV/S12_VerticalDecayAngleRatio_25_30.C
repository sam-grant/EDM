void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09149781,125,1.738458);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__1593 = new TH1D("S12_ThetaY_25_30__1593","",630,-1575,1575);
   S12_ThetaY_25_30__1593->SetBinContent(312,0.2580645);
   S12_ThetaY_25_30__1593->SetBinContent(313,1);
   S12_ThetaY_25_30__1593->SetBinContent(314,0.9677419);
   S12_ThetaY_25_30__1593->SetBinContent(315,1.322581);
   S12_ThetaY_25_30__1593->SetBinContent(316,1.129032);
   S12_ThetaY_25_30__1593->SetBinContent(317,0.06451613);
   S12_ThetaY_25_30__1593->SetBinError(312,0.09123958);
   S12_ThetaY_25_30__1593->SetBinError(313,0.1796053);
   S12_ThetaY_25_30__1593->SetBinError(314,0.1766847);
   S12_ThetaY_25_30__1593->SetBinError(315,0.2065524);
   S12_ThetaY_25_30__1593->SetBinError(316,0.1908413);
   S12_ThetaY_25_30__1593->SetBinError(317,0.04561979);
   S12_ThetaY_25_30__1593->SetMinimum(0);
   S12_ThetaY_25_30__1593->SetMaximum(1.555463);
   S12_ThetaY_25_30__1593->SetEntries(147);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1593->SetLineColor(ci);
   S12_ThetaY_25_30__1593->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1593->SetMarkerColor(ci);
   S12_ThetaY_25_30__1593->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__1593->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__1593->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1593->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1593->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1593->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__1593->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__1593->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1593->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1593->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1593->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1593->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1593->Draw("AE");
   
   TH1D *ThetaY_25_30__1594 = new TH1D("ThetaY_25_30__1594","",630,-1575,1575);
   ThetaY_25_30__1594->SetBinContent(311,0.008241111);
   ThetaY_25_30__1594->SetBinContent(312,0.4138215);
   ThetaY_25_30__1594->SetBinContent(313,1);
   ThetaY_25_30__1594->SetBinContent(314,1.279962);
   ThetaY_25_30__1594->SetBinContent(315,1.404992);
   ThetaY_25_30__1594->SetBinContent(316,1.414057);
   ThetaY_25_30__1594->SetBinContent(317,1.287379);
   ThetaY_25_30__1594->SetBinContent(318,1.012715);
   ThetaY_25_30__1594->SetBinContent(319,0.428891);
   ThetaY_25_30__1594->SetBinContent(320,0.009182953);
   ThetaY_25_30__1594->SetBinError(311,0.0009850012);
   ThetaY_25_30__1594->SetBinError(312,0.006979919);
   ThetaY_25_30__1594->SetBinError(313,0.01085035);
   ThetaY_25_30__1594->SetBinError(314,0.01227559);
   ThetaY_25_30__1594->SetBinError(315,0.01286118);
   ThetaY_25_30__1594->SetBinError(316,0.0129026);
   ThetaY_25_30__1594->SetBinError(317,0.01231111);
   ThetaY_25_30__1594->SetBinError(318,0.01091912);
   ThetaY_25_30__1594->SetBinError(319,0.007105871);
   ThetaY_25_30__1594->SetBinError(320,0.001039765);
   ThetaY_25_30__1594->SetEntries(70154);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1594->SetLineColor(ci);
   ThetaY_25_30__1594->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1594->SetMarkerColor(ci);
   ThetaY_25_30__1594->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1594->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1594->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1594->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1594->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1594->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1594->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1594->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1594->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1594->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1594->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1594->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1594->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1594->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1594->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1594->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1594->Draw("AEsame");
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
   
   Double_t _fx3532[10] = {
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
   Double_t _fy3532[10] = {
   0,
   0.6236131,
   1,
   0.7560706,
   0.9413441,
   0.7984348,
   0.05011431,
   0,
   0,
   0};
   Double_t _felx3532[10] = {
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
   Double_t _fely3532[10] = {
   0,
   0.2160186,
   0.1789469,
   0.1374485,
   0.1466565,
   0.1345024,
   0.03237106,
   0,
   0,
   0};
   Double_t _fehx3532[10] = {
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
   Double_t _fehy3532[10] = {
   7.301885,
   0.3080527,
   0.2142669,
   0.1650509,
   0.1715154,
   0.1593353,
   0.06611128,
   0.05864844,
   0.1385033,
   6.544105};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3532,_fy3532,_felx3532,_fehx3532,_fely3532,_fehy3532);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3532 = new TH1F("Graph_Graph3532","",100,-100,100);
   Graph_Graph3532->SetMinimum(0);
   Graph_Graph3532->SetMaximum(1.5);
   Graph_Graph3532->SetDirectory(0);
   Graph_Graph3532->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3532->SetLineColor(ci);
   Graph_Graph3532->GetXaxis()->SetRange(1,100);
   Graph_Graph3532->GetXaxis()->CenterTitle(true);
   Graph_Graph3532->GetXaxis()->SetLabelFont(42);
   Graph_Graph3532->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3532->GetXaxis()->SetTitleFont(42);
   Graph_Graph3532->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3532->GetYaxis()->CenterTitle(true);
   Graph_Graph3532->GetYaxis()->SetLabelFont(42);
   Graph_Graph3532->GetYaxis()->SetTitleFont(42);
   Graph_Graph3532->GetZaxis()->SetLabelFont(42);
   Graph_Graph3532->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3532->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3532);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.555463,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1595 = new TH2D("ThetaY_vs_Y_25_30__1595","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8104,70);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8130,3515);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8156,8494);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8182,10872);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8208,11934);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8234,12011);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8260,10935);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8286,8602);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8312,3643);
   ThetaY_vs_Y_25_30__1595->SetBinContent(8338,78);
   ThetaY_vs_Y_25_30__1595->SetEntries(70154);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1595->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1595->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1595->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1595->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1595->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1595->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1595->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1595->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1595->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1595->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1595->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1595->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1595->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1595->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1595->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1595->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
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
