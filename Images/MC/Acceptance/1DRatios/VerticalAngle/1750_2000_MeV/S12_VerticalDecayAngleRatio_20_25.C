void S12_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.07363676,125,1.399098);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__1248 = new TH1D("S12_ThetaY_20_25__1248","",630,-1575,1575);
   S12_ThetaY_20_25__1248->SetBinContent(310,0.1166667);
   S12_ThetaY_20_25__1248->SetBinContent(311,0.4416667);
   S12_ThetaY_20_25__1248->SetBinContent(312,0.7333333);
   S12_ThetaY_20_25__1248->SetBinContent(313,1);
   S12_ThetaY_20_25__1248->SetBinContent(314,0.9666667);
   S12_ThetaY_20_25__1248->SetBinContent(315,0.8166667);
   S12_ThetaY_20_25__1248->SetBinContent(316,1.116667);
   S12_ThetaY_20_25__1248->SetBinContent(317,0.6833333);
   S12_ThetaY_20_25__1248->SetBinContent(318,0.025);
   S12_ThetaY_20_25__1248->SetBinError(310,0.03118048);
   S12_ThetaY_20_25__1248->SetBinError(311,0.06066758);
   S12_ThetaY_20_25__1248->SetBinError(312,0.0781736);
   S12_ThetaY_20_25__1248->SetBinError(313,0.09128709);
   S12_ThetaY_20_25__1248->SetBinError(314,0.08975275);
   S12_ThetaY_20_25__1248->SetBinError(315,0.08249579);
   S12_ThetaY_20_25__1248->SetBinError(316,0.09646531);
   S12_ThetaY_20_25__1248->SetBinError(317,0.07546154);
   S12_ThetaY_20_25__1248->SetBinError(318,0.01443376);
   S12_ThetaY_20_25__1248->SetMinimum(0);
   S12_ThetaY_20_25__1248->SetMaximum(1.251825);
   S12_ThetaY_20_25__1248->SetEntries(708);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1248->SetLineColor(ci);
   S12_ThetaY_20_25__1248->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1248->SetMarkerColor(ci);
   S12_ThetaY_20_25__1248->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__1248->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__1248->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1248->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1248->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1248->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__1248->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__1248->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1248->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1248->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1248->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1248->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1248->Draw("AE");
   
   TH1D *ThetaY_20_25__1249 = new TH1D("ThetaY_20_25__1249","",630,-1575,1575);
   ThetaY_20_25__1249->SetBinContent(309,0.0009011264);
   ThetaY_20_25__1249->SetBinContent(310,0.1653066);
   ThetaY_20_25__1249->SetBinContent(311,0.614368);
   ThetaY_20_25__1249->SetBinContent(312,0.8585732);
   ThetaY_20_25__1249->SetBinContent(313,1);
   ThetaY_20_25__1249->SetBinContent(314,1.099474);
   ThetaY_20_25__1249->SetBinContent(315,1.117196);
   ThetaY_20_25__1249->SetBinContent(316,1.138023);
   ThetaY_20_25__1249->SetBinContent(317,1.10378);
   ThetaY_20_25__1249->SetBinContent(318,1.013166);
   ThetaY_20_25__1249->SetBinContent(319,0.8537672);
   ThetaY_20_25__1249->SetBinContent(320,0.5999499);
   ThetaY_20_25__1249->SetBinContent(321,0.1592991);
   ThetaY_20_25__1249->SetBinContent(322,0.0005506884);
   ThetaY_20_25__1249->SetBinError(309,0.0002123975);
   ThetaY_20_25__1249->SetBinError(310,0.002876748);
   ThetaY_20_25__1249->SetBinError(311,0.005545885);
   ThetaY_20_25__1249->SetBinError(312,0.006556096);
   ThetaY_20_25__1249->SetBinError(313,0.007075491);
   ThetaY_20_25__1249->SetBinError(314,0.007419065);
   ThetaY_20_25__1249->SetBinError(315,0.007478619);
   ThetaY_20_25__1249->SetBinError(316,0.007548003);
   ThetaY_20_25__1249->SetBinError(317,0.007433576);
   ThetaY_20_25__1249->SetBinError(318,0.007121919);
   ThetaY_20_25__1249->SetBinError(319,0.00653772);
   ThetaY_20_25__1249->SetBinError(320,0.005480423);
   ThetaY_20_25__1249->SetBinError(321,0.002823991);
   ThetaY_20_25__1249->SetBinError(322,0.0001660388);
   ThetaY_20_25__1249->SetEntries(194244);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1249->SetLineColor(ci);
   ThetaY_20_25__1249->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1249->SetMarkerColor(ci);
   ThetaY_20_25__1249->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1249->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1249->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1249->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1249->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1249->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1249->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1249->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1249->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1249->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1249->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1249->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1249->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1249->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1249->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1249->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1249->Draw("AEsame");
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
   
   Double_t _fx3417[14] = {
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
   Double_t _fy3417[14] = {
   0,
   0.7057591,
   0.718896,
   0.8541302,
   1,
   0.879208,
   0.7309964,
   0.9812342,
   0.6190849,
   0.02467512,
   0,
   0,
   0,
   0};
   Double_t _felx3417[14] = {
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
   Double_t _fely3417[14] = {
   0,
   0.1867145,
   0.09864387,
   0.09110757,
   0.09143095,
   0.0817278,
   0.07387569,
   0.08490721,
   0.06835207,
   0.01342979,
   0,
   0,
   0,
   0};
   Double_t _fehx3417[14] = {
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
   Double_t _fehy3417[14] = {
   17.92631,
   0.2442001,
   0.1132153,
   0.1013916,
   0.1002038,
   0.08970655,
   0.08175118,
   0.09259669,
   0.07635344,
   0.0240057,
   0.01797056,
   0.02557384,
   0.09633629,
   30.32644};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3417,_fy3417,_felx3417,_fehx3417,_fely3417,_fehy3417);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3417 = new TH1F("Graph_Graph3417","",100,-100,100);
   Graph_Graph3417->SetMinimum(0);
   Graph_Graph3417->SetMaximum(1.5);
   Graph_Graph3417->SetDirectory(0);
   Graph_Graph3417->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3417->SetLineColor(ci);
   Graph_Graph3417->GetXaxis()->SetRange(1,100);
   Graph_Graph3417->GetXaxis()->CenterTitle(true);
   Graph_Graph3417->GetXaxis()->SetLabelFont(42);
   Graph_Graph3417->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3417->GetXaxis()->SetTitleFont(42);
   Graph_Graph3417->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3417->GetYaxis()->CenterTitle(true);
   Graph_Graph3417->GetYaxis()->SetLabelFont(42);
   Graph_Graph3417->GetYaxis()->SetTitleFont(42);
   Graph_Graph3417->GetZaxis()->SetLabelFont(42);
   Graph_Graph3417->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3417->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3417);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.251825,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1250 = new TH2D("ThetaY_vs_Y_20_25__1250","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8051,18);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8077,3302);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8103,12272);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8129,17150);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8155,19975);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8181,21962);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8207,22316);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8233,22732);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8259,22048);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8285,20238);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8311,17054);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8337,11984);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8363,3182);
   ThetaY_vs_Y_20_25__1250->SetBinContent(8389,11);
   ThetaY_vs_Y_20_25__1250->SetEntries(194244);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1250->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1250->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1250->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1250->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1250->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1250->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1250->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1250->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1250->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1250->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1250->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1250->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1250->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1250->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1250->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1250->Draw("COL");
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
