void S12_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:16:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.685802,125,32.03023);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__42 = new TH1D("S12_ThetaY_20_25__42","",630,-1575,1575);
   S12_ThetaY_20_25__42->SetBinContent(313,1);
   S12_ThetaY_20_25__42->SetBinContent(314,2);
   S12_ThetaY_20_25__42->SetBinContent(315,9);
   S12_ThetaY_20_25__42->SetBinContent(316,7);
   S12_ThetaY_20_25__42->SetBinContent(317,1);
   S12_ThetaY_20_25__42->SetBinError(313,1);
   S12_ThetaY_20_25__42->SetBinError(314,1.414214);
   S12_ThetaY_20_25__42->SetBinError(315,3);
   S12_ThetaY_20_25__42->SetBinError(316,2.645751);
   S12_ThetaY_20_25__42->SetBinError(317,1);
   S12_ThetaY_20_25__42->SetMinimum(0);
   S12_ThetaY_20_25__42->SetMaximum(28.65863);
   S12_ThetaY_20_25__42->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__42->SetLineColor(ci);
   S12_ThetaY_20_25__42->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__42->SetMarkerColor(ci);
   S12_ThetaY_20_25__42->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__42->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__42->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__42->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__42->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__42->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__42->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__42->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__42->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__42->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__42->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__42->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__42->Draw("AE");
   
   TH1D *ThetaY_20_25__43 = new TH1D("ThetaY_20_25__43","",630,-1575,1575);
   ThetaY_20_25__43->SetBinContent(313,1);
   ThetaY_20_25__43->SetBinContent(314,14.0736);
   ThetaY_20_25__43->SetBinContent(315,25.78173);
   ThetaY_20_25__43->SetBinContent(316,26.0533);
   ThetaY_20_25__43->SetBinContent(317,14.23858);
   ThetaY_20_25__43->SetBinContent(318,1.068528);
   ThetaY_20_25__43->SetBinError(313,0.05037927);
   ThetaY_20_25__43->SetBinError(314,0.1889968);
   ThetaY_20_25__43->SetBinError(315,0.2558043);
   ThetaY_20_25__43->SetBinError(316,0.2571481);
   ThetaY_20_25__43->SetBinError(317,0.1901014);
   ThetaY_20_25__43->SetBinError(318,0.05207686);
   ThetaY_20_25__43->SetEntries(32393);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__43->SetLineColor(ci);
   ThetaY_20_25__43->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__43->SetMarkerColor(ci);
   ThetaY_20_25__43->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__43->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__43->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__43->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__43->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__43->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__43->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__43->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__43->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__43->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__43->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__43->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__43->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__43->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__43->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__43->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__43->Draw("AEsame");
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
   
   Double_t _fx3015[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3015[6] = {
   1,
   0.14211,
   0.3490845,
   0.26868,
   0.07023173,
   0};
   Double_t _felx3015[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3015[6] = {
   0.8276459,
   0.09180029,
   0.1142141,
   0.09911378,
   0.05810091,
   0};
   Double_t _fehx3015[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3015[6] = {
   2.30917,
   0.1875115,
   0.159526,
   0.1447901,
   0.1615472,
   1.726724};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-100,100);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(1.5);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3015->SetLineColor(ci);
   Graph_Graph3015->GetXaxis()->SetRange(1,100);
   Graph_Graph3015->GetXaxis()->CenterTitle(true);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3015->GetYaxis()->CenterTitle(true);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,28.65863,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__44 = new TH2D("ThetaY_vs_Y_20_25__44","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__44->SetBinContent(8155,394);
   ThetaY_vs_Y_20_25__44->SetBinContent(8181,5545);
   ThetaY_vs_Y_20_25__44->SetBinContent(8207,10158);
   ThetaY_vs_Y_20_25__44->SetBinContent(8233,10265);
   ThetaY_vs_Y_20_25__44->SetBinContent(8259,5610);
   ThetaY_vs_Y_20_25__44->SetBinContent(8285,421);
   ThetaY_vs_Y_20_25__44->SetEntries(32393);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__44->SetLineColor(ci);
   ThetaY_vs_Y_20_25__44->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__44->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__44->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__44->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__44->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__44->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__44->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__44->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__44->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__44->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__44->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__44->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__44->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__44->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__44->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_20_25","Reco vertices","lpf");
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
