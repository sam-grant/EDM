void S12_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:06 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07151798,125,1.358842);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__1578 = new TH1D("S12_ThetaY_0_5__1578","",630,-1575,1575);
   S12_ThetaY_0_5__1578->SetBinContent(312,0.06557377);
   S12_ThetaY_0_5__1578->SetBinContent(313,0.6065574);
   S12_ThetaY_0_5__1578->SetBinContent(314,0.8032787);
   S12_ThetaY_0_5__1578->SetBinContent(315,0.8579235);
   S12_ThetaY_0_5__1578->SetBinContent(316,0.9289617);
   S12_ThetaY_0_5__1578->SetBinContent(317,1);
   S12_ThetaY_0_5__1578->SetBinContent(318,0.4153005);
   S12_ThetaY_0_5__1578->SetBinContent(319,0.01092896);
   S12_ThetaY_0_5__1578->SetBinError(312,0.01892952);
   S12_ThetaY_0_5__1578->SetBinError(313,0.05757188);
   S12_ThetaY_0_5__1578->SetBinError(314,0.06625331);
   S12_ThetaY_0_5__1578->SetBinError(315,0.06846975);
   S12_ThetaY_0_5__1578->SetBinError(316,0.07124811);
   S12_ThetaY_0_5__1578->SetBinError(317,0.07392213);
   S12_ThetaY_0_5__1578->SetBinError(318,0.04763824);
   S12_ThetaY_0_5__1578->SetBinError(319,0.007727943);
   S12_ThetaY_0_5__1578->SetMinimum(0);
   S12_ThetaY_0_5__1578->SetMaximum(1.215806);
   S12_ThetaY_0_5__1578->SetEntries(858);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1578->SetLineColor(ci);
   S12_ThetaY_0_5__1578->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1578->SetMarkerColor(ci);
   S12_ThetaY_0_5__1578->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__1578->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__1578->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1578->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1578->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1578->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__1578->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__1578->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1578->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1578->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1578->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1578->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1578->Draw("AE");
   
   TH1D *ThetaY_0_5__1579 = new TH1D("ThetaY_0_5__1579","",630,-1575,1575);
   ThetaY_0_5__1579->SetBinContent(311,0.007336962);
   ThetaY_0_5__1579->SetBinContent(312,0.330357);
   ThetaY_0_5__1579->SetBinContent(313,0.7897455);
   ThetaY_0_5__1579->SetBinContent(314,1.010758);
   ThetaY_0_5__1579->SetBinContent(315,1.102201);
   ThetaY_0_5__1579->SetBinContent(316,1.105278);
   ThetaY_0_5__1579->SetBinContent(317,1);
   ThetaY_0_5__1579->SetBinContent(318,0.7852701);
   ThetaY_0_5__1579->SetBinContent(319,0.3248704);
   ThetaY_0_5__1579->SetBinContent(320,0.007358478);
   ThetaY_0_5__1579->SetBinError(311,0.0003973188);
   ThetaY_0_5__1579->SetBinError(312,0.002666077);
   ThetaY_0_5__1579->SetBinError(313,0.004122157);
   ThetaY_0_5__1579->SetBinError(314,0.00466342);
   ThetaY_0_5__1579->SetBinError(315,0.004869803);
   ThetaY_0_5__1579->SetBinError(316,0.004876595);
   ThetaY_0_5__1579->SetBinError(317,0.004638536);
   ThetaY_0_5__1579->SetBinError(318,0.004110461);
   ThetaY_0_5__1579->SetBinError(319,0.002643845);
   ThetaY_0_5__1579->SetBinError(320,0.0003979009);
   ThetaY_0_5__1579->SetEntries(300389);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1579->SetLineColor(ci);
   ThetaY_0_5__1579->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1579->SetMarkerColor(ci);
   ThetaY_0_5__1579->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1579->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1579->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1579->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1579->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1579->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1579->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1579->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1579->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1579->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1579->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1579->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1579->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1579->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1579->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1579->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1579->Draw("AEsame");
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
   
   Double_t _fx3527[10] = {
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
   Double_t _fy3527[10] = {
   0,
   0.1984937,
   0.7680416,
   0.794729,
   0.7783729,
   0.840478,
   1,
   0.5288633,
   0.03364099,
   0};
   Double_t _felx3527[10] = {
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
   Double_t _fely3527[10] = {
   0,
   0.05651281,
   0.07289835,
   0.06557522,
   0.06214916,
   0.06450415,
   0.07399905,
   0.06059321,
   0.02172987,
   0};
   Double_t _fehx3527[10] = {
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
   Double_t _fehy3527[10] = {
   1.374879,
   0.07546528,
   0.08017123,
   0.07122435,
   0.06732254,
   0.0696567,
   0.07969024,
   0.0679695,
   0.04437692,
   1.370848};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3527,_fy3527,_felx3527,_fehx3527,_fely3527,_fehy3527);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3527 = new TH1F("Graph_Graph3527","",100,-100,100);
   Graph_Graph3527->SetMinimum(0);
   Graph_Graph3527->SetMaximum(1.5);
   Graph_Graph3527->SetDirectory(0);
   Graph_Graph3527->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3527->SetLineColor(ci);
   Graph_Graph3527->GetXaxis()->SetRange(1,100);
   Graph_Graph3527->GetXaxis()->CenterTitle(true);
   Graph_Graph3527->GetXaxis()->SetLabelFont(42);
   Graph_Graph3527->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3527->GetXaxis()->SetTitleFont(42);
   Graph_Graph3527->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3527->GetYaxis()->CenterTitle(true);
   Graph_Graph3527->GetYaxis()->SetLabelFont(42);
   Graph_Graph3527->GetYaxis()->SetTitleFont(42);
   Graph_Graph3527->GetZaxis()->SetLabelFont(42);
   Graph_Graph3527->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3527->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3527);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.215806,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1580 = new TH2D("ThetaY_vs_Y_0_5__1580","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8099,341);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8125,15354);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8151,36705);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8177,46977);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8203,51227);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8229,51370);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8255,46477);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8281,36497);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8307,15099);
   ThetaY_vs_Y_0_5__1580->SetBinContent(8333,342);
   ThetaY_vs_Y_0_5__1580->SetEntries(300389);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1580->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1580->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1580->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1580->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1580->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1580->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1580->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1580->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1580->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1580->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1580->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1580->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1580->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1580->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1580->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1580->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_0_5","Reco vertices","lpf");
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
