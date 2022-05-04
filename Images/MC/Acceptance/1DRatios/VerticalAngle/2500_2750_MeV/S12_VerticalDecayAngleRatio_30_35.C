void S12_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:10 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07714004,125,1.465661);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__1767 = new TH1D("S12_ThetaY_30_35__1767","",630,-1575,1575);
   S12_ThetaY_30_35__1767->SetBinContent(313,0.2);
   S12_ThetaY_30_35__1767->SetBinContent(314,1);
   S12_ThetaY_30_35__1767->SetBinContent(315,0.8);
   S12_ThetaY_30_35__1767->SetBinContent(316,0.4);
   S12_ThetaY_30_35__1767->SetBinError(313,0.1154701);
   S12_ThetaY_30_35__1767->SetBinError(314,0.2581989);
   S12_ThetaY_30_35__1767->SetBinError(315,0.2309401);
   S12_ThetaY_30_35__1767->SetBinError(316,0.1632993);
   S12_ThetaY_30_35__1767->SetMinimum(0);
   S12_ThetaY_30_35__1767->SetMaximum(1.311381);
   S12_ThetaY_30_35__1767->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1767->SetLineColor(ci);
   S12_ThetaY_30_35__1767->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1767->SetMarkerColor(ci);
   S12_ThetaY_30_35__1767->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__1767->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__1767->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1767->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1767->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1767->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__1767->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__1767->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1767->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1767->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1767->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1767->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1767->Draw("AE");
   
   TH1D *ThetaY_30_35__1768 = new TH1D("ThetaY_30_35__1768","",630,-1575,1575);
   ThetaY_30_35__1768->SetBinContent(312,0.02694859);
   ThetaY_30_35__1768->SetBinContent(313,0.4962687);
   ThetaY_30_35__1768->SetBinContent(314,1);
   ThetaY_30_35__1768->SetBinContent(315,1.192164);
   ThetaY_30_35__1768->SetBinContent(316,1.176824);
   ThetaY_30_35__1768->SetBinContent(317,0.9960614);
   ThetaY_30_35__1768->SetBinContent(318,0.5109867);
   ThetaY_30_35__1768->SetBinContent(319,0.02280265);
   ThetaY_30_35__1768->SetBinError(312,0.002363548);
   ThetaY_30_35__1768->SetBinError(313,0.01014273);
   ThetaY_30_35__1768->SetBinError(314,0.01439781);
   ThetaY_30_35__1768->SetBinError(315,0.01572043);
   ThetaY_30_35__1768->SetBinError(316,0.01561896);
   ThetaY_30_35__1768->SetBinError(317,0.01436943);
   ThetaY_30_35__1768->SetBinError(318,0.01029203);
   ThetaY_30_35__1768->SetBinError(319,0.002174148);
   ThetaY_30_35__1768->SetEntries(26156);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1768->SetLineColor(ci);
   ThetaY_30_35__1768->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1768->SetMarkerColor(ci);
   ThetaY_30_35__1768->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1768->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1768->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1768->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1768->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1768->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1768->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1768->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1768->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1768->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1768->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1768->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1768->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1768->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1768->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1768->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1768->Draw("AEsame");
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
   
   Double_t _fx3590[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3590[8] = {
   0,
   0.4030075,
   1,
   0.6710485,
   0.3398978,
   0,
   0,
   0};
   Double_t _felx3590[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3590[8] = {
   0,
   0.2194317,
   0.2556644,
   0.1911683,
   0.1348833,
   0,
   0,
   0};
   Double_t _fehx3590[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3590[8] = {
   4.586806,
   0.3925016,
   0.3312662,
   0.2553554,
   0.2031834,
   0.1232437,
   0.2402814,
   5.427772};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3590,_fy3590,_felx3590,_fehx3590,_fely3590,_fehy3590);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3590 = new TH1F("Graph_Graph3590","",100,-100,100);
   Graph_Graph3590->SetMinimum(0);
   Graph_Graph3590->SetMaximum(1.5);
   Graph_Graph3590->SetDirectory(0);
   Graph_Graph3590->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3590->SetLineColor(ci);
   Graph_Graph3590->GetXaxis()->SetRange(1,100);
   Graph_Graph3590->GetXaxis()->CenterTitle(true);
   Graph_Graph3590->GetXaxis()->SetLabelFont(42);
   Graph_Graph3590->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3590->GetXaxis()->SetTitleFont(42);
   Graph_Graph3590->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3590->GetYaxis()->CenterTitle(true);
   Graph_Graph3590->GetYaxis()->SetLabelFont(42);
   Graph_Graph3590->GetYaxis()->SetTitleFont(42);
   Graph_Graph3590->GetZaxis()->SetLabelFont(42);
   Graph_Graph3590->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3590->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3590);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.311381,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1769 = new TH2D("ThetaY_vs_Y_30_35__1769","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8131,130);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8157,2394);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8183,4824);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8209,5751);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8235,5677);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8261,4805);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8287,2465);
   ThetaY_vs_Y_30_35__1769->SetBinContent(8313,110);
   ThetaY_vs_Y_30_35__1769->SetEntries(26156);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1769->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1769->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1769->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1769->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1769->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1769->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1769->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1769->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1769->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1769->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1769->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1769->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1769->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1769->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1769->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1769->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
