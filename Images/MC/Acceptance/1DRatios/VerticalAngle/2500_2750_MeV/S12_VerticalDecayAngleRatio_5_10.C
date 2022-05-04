void S12_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__1752 = new TH1D("S12_ThetaY_5_10__1752","",630,-1575,1575);
   S12_ThetaY_5_10__1752->SetBinContent(313,0.25);
   S12_ThetaY_5_10__1752->SetBinContent(314,0.675);
   S12_ThetaY_5_10__1752->SetBinContent(315,0.9);
   S12_ThetaY_5_10__1752->SetBinContent(316,1);
   S12_ThetaY_5_10__1752->SetBinContent(317,0.5166667);
   S12_ThetaY_5_10__1752->SetBinContent(318,0.008333333);
   S12_ThetaY_5_10__1752->SetBinError(313,0.04564355);
   S12_ThetaY_5_10__1752->SetBinError(314,0.075);
   S12_ThetaY_5_10__1752->SetBinError(315,0.08660254);
   S12_ThetaY_5_10__1752->SetBinError(316,0.09128709);
   S12_ThetaY_5_10__1752->SetBinError(317,0.06561673);
   S12_ThetaY_5_10__1752->SetBinError(318,0.008333333);
   S12_ThetaY_5_10__1752->SetMinimum(0);
   S12_ThetaY_5_10__1752->SetMaximum(1.1);
   S12_ThetaY_5_10__1752->SetEntries(402);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1752->SetLineColor(ci);
   S12_ThetaY_5_10__1752->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1752->SetMarkerColor(ci);
   S12_ThetaY_5_10__1752->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__1752->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__1752->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1752->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1752->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1752->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__1752->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__1752->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1752->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1752->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1752->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1752->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1752->Draw("AE");
   
   TH1D *ThetaY_5_10__1753 = new TH1D("ThetaY_5_10__1753","",630,-1575,1575);
   ThetaY_5_10__1753->SetBinContent(312,0.02065886);
   ThetaY_5_10__1753->SetBinContent(313,0.4208913);
   ThetaY_5_10__1753->SetBinContent(314,0.8447415);
   ThetaY_5_10__1753->SetBinContent(315,0.9995773);
   ThetaY_5_10__1753->SetBinContent(316,1);
   ThetaY_5_10__1753->SetBinContent(317,0.8454548);
   ThetaY_5_10__1753->SetBinContent(318,0.4311415);
   ThetaY_5_10__1753->SetBinContent(319,0.01994558);
   ThetaY_5_10__1753->SetBinError(312,0.0007387595);
   ThetaY_5_10__1753->SetBinError(313,0.003334532);
   ThetaY_5_10__1753->SetBinError(314,0.00472402);
   ThetaY_5_10__1753->SetBinError(315,0.005138757);
   ThetaY_5_10__1753->SetBinError(316,0.005139843);
   ThetaY_5_10__1753->SetBinError(317,0.004726014);
   ThetaY_5_10__1753->SetBinError(318,0.003374891);
   ThetaY_5_10__1753->SetBinError(319,0.0007258939);
   ThetaY_5_10__1753->SetEntries(173458);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1753->SetLineColor(ci);
   ThetaY_5_10__1753->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1753->SetMarkerColor(ci);
   ThetaY_5_10__1753->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1753->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1753->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1753->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1753->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1753->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1753->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1753->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1753->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1753->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1753->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1753->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1753->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1753->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1753->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1753->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1753->Draw("AEsame");
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
   
   Double_t _fx3585[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3585[8] = {
   0,
   0.5939775,
   0.799061,
   0.9003806,
   1,
   0.6111109,
   0.01932853,
   0};
   Double_t _felx3585[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3585[8] = {
   0,
   0.1079354,
   0.08871172,
   0.08662712,
   0.09130297,
   0.07747505,
   0.01598964,
   0};
   Double_t _fehx3585[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3585[8] = {
   0.7435026,
   0.1295968,
   0.09915603,
   0.09539387,
   0.1000482,
   0.08798264,
   0.04445097,
   0.7701239};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3585,_fy3585,_felx3585,_fehx3585,_fely3585,_fehy3585);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3585 = new TH1F("Graph_Graph3585","",100,-100,100);
   Graph_Graph3585->SetMinimum(0);
   Graph_Graph3585->SetMaximum(1.5);
   Graph_Graph3585->SetDirectory(0);
   Graph_Graph3585->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3585->SetLineColor(ci);
   Graph_Graph3585->GetXaxis()->SetRange(1,100);
   Graph_Graph3585->GetXaxis()->CenterTitle(true);
   Graph_Graph3585->GetXaxis()->SetLabelFont(42);
   Graph_Graph3585->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3585->GetXaxis()->SetTitleFont(42);
   Graph_Graph3585->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3585->GetYaxis()->CenterTitle(true);
   Graph_Graph3585->GetYaxis()->SetLabelFont(42);
   Graph_Graph3585->GetYaxis()->SetTitleFont(42);
   Graph_Graph3585->GetZaxis()->SetLabelFont(42);
   Graph_Graph3585->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3585->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3585);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1754 = new TH2D("ThetaY_vs_Y_5_10__1754","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8126,782);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8152,15932);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8178,31976);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8204,37837);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8230,37853);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8256,32003);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8282,16320);
   ThetaY_vs_Y_5_10__1754->SetBinContent(8308,755);
   ThetaY_vs_Y_5_10__1754->SetEntries(173458);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1754->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1754->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1754->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1754->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1754->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1754->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1754->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1754->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1754->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1754->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1754->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1754->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1754->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1754->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1754->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1754->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
