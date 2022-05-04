void S12_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-3.365428,125,63.94313);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__1758 = new TH1D("S12_ThetaY_15_20__1758","",630,-1575,1575);
   S12_ThetaY_15_20__1758->SetBinContent(312,1);
   S12_ThetaY_15_20__1758->SetBinContent(313,8.75);
   S12_ThetaY_15_20__1758->SetBinContent(314,19.5);
   S12_ThetaY_15_20__1758->SetBinContent(315,16);
   S12_ThetaY_15_20__1758->SetBinContent(316,20);
   S12_ThetaY_15_20__1758->SetBinContent(317,5.25);
   S12_ThetaY_15_20__1758->SetBinError(312,0.5);
   S12_ThetaY_15_20__1758->SetBinError(313,1.47902);
   S12_ThetaY_15_20__1758->SetBinError(314,2.20794);
   S12_ThetaY_15_20__1758->SetBinError(315,2);
   S12_ThetaY_15_20__1758->SetBinError(316,2.236068);
   S12_ThetaY_15_20__1758->SetBinError(317,1.145644);
   S12_ThetaY_15_20__1758->SetMinimum(0);
   S12_ThetaY_15_20__1758->SetMaximum(57.21228);
   S12_ThetaY_15_20__1758->SetEntries(282);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1758->SetLineColor(ci);
   S12_ThetaY_15_20__1758->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1758->SetMarkerColor(ci);
   S12_ThetaY_15_20__1758->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__1758->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__1758->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1758->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1758->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1758->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__1758->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__1758->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1758->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1758->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1758->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1758->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1758->Draw("AE");
   
   TH1D *ThetaY_15_20__1759 = new TH1D("ThetaY_15_20__1759","",630,-1575,1575);
   ThetaY_15_20__1759->SetBinContent(312,1);
   ThetaY_15_20__1759->SetBinContent(313,21.69196);
   ThetaY_15_20__1759->SetBinContent(314,43.21875);
   ThetaY_15_20__1759->SetBinContent(315,50.96429);
   ThetaY_15_20__1759->SetBinContent(316,52.01116);
   ThetaY_15_20__1759->SetBinContent(317,43.5692);
   ThetaY_15_20__1759->SetBinContent(318,21.84821);
   ThetaY_15_20__1759->SetBinContent(319,1.080357);
   ThetaY_15_20__1759->SetBinError(312,0.04724556);
   ThetaY_15_20__1759->SetBinError(313,0.2200445);
   ThetaY_15_20__1759->SetBinError(314,0.3105969);
   ThetaY_15_20__1759->SetBinError(315,0.3372826);
   ThetaY_15_20__1759->SetBinError(316,0.3407291);
   ThetaY_15_20__1759->SetBinError(317,0.3118536);
   ThetaY_15_20__1759->SetBinError(318,0.2208355);
   ThetaY_15_20__1759->SetBinError(319,0.04910714);
   ThetaY_15_20__1759->SetEntries(105452);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1759->SetLineColor(ci);
   ThetaY_15_20__1759->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1759->SetMarkerColor(ci);
   ThetaY_15_20__1759->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1759->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1759->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1759->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1759->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1759->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1759->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1759->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1759->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1759->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1759->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1759->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1759->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1759->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1759->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1759->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1759->Draw("AEsame");
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
   
   Double_t _fx3587[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3587[8] = {
   1,
   0.4033752,
   0.4511931,
   0.3139453,
   0.3845329,
   0.120498,
   0,
   0};
   Double_t _felx3587[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3587[8] = {
   0.4802739,
   0.06797426,
   0.05107911,
   0.03919436,
   0.04297474,
   0.02609724,
   0,
   0};
   Double_t _fehx3587[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3587[8] = {
   0.7970129,
   0.08053049,
   0.05722001,
   0.04442398,
   0.04807058,
   0.03247158,
   0.02106802,
   0.4268328};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3587,_fy3587,_felx3587,_fehx3587,_fely3587,_fehy3587);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3587 = new TH1F("Graph_Graph3587","",100,-100,100);
   Graph_Graph3587->SetMinimum(0);
   Graph_Graph3587->SetMaximum(1.5);
   Graph_Graph3587->SetDirectory(0);
   Graph_Graph3587->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3587->SetLineColor(ci);
   Graph_Graph3587->GetXaxis()->SetRange(1,100);
   Graph_Graph3587->GetXaxis()->CenterTitle(true);
   Graph_Graph3587->GetXaxis()->SetLabelFont(42);
   Graph_Graph3587->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3587->GetXaxis()->SetTitleFont(42);
   Graph_Graph3587->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3587->GetYaxis()->CenterTitle(true);
   Graph_Graph3587->GetYaxis()->SetLabelFont(42);
   Graph_Graph3587->GetYaxis()->SetTitleFont(42);
   Graph_Graph3587->GetZaxis()->SetLabelFont(42);
   Graph_Graph3587->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3587->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3587);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,57.21228,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1760 = new TH2D("ThetaY_vs_Y_15_20__1760","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8128,448);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8154,9718);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8180,19362);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8206,22832);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8232,23301);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8258,19519);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8284,9788);
   ThetaY_vs_Y_15_20__1760->SetBinContent(8310,484);
   ThetaY_vs_Y_15_20__1760->SetEntries(105452);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1760->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1760->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1760->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1760->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1760->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1760->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1760->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1760->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1760->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1760->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1760->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1760->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1760->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1760->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1760->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1760->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
