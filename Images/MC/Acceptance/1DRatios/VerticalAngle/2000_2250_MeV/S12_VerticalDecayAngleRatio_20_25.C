void S12_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07904587,125,1.501871);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__1419 = new TH1D("S12_ThetaY_20_25__1419","",630,-1575,1575);
   S12_ThetaY_20_25__1419->SetBinContent(311,0.2235294);
   S12_ThetaY_20_25__1419->SetBinContent(312,0.5764706);
   S12_ThetaY_20_25__1419->SetBinContent(313,1);
   S12_ThetaY_20_25__1419->SetBinContent(314,0.8117647);
   S12_ThetaY_20_25__1419->SetBinContent(315,1.152941);
   S12_ThetaY_20_25__1419->SetBinContent(316,1.011765);
   S12_ThetaY_20_25__1419->SetBinContent(317,0.4823529);
   S12_ThetaY_20_25__1419->SetBinError(311,0.05128116);
   S12_ThetaY_20_25__1419->SetBinError(312,0.08235294);
   S12_ThetaY_20_25__1419->SetBinError(313,0.1084652);
   S12_ThetaY_20_25__1419->SetBinError(314,0.09772499);
   S12_ThetaY_20_25__1419->SetBinError(315,0.1164646);
   S12_ThetaY_20_25__1419->SetBinError(316,0.1091014);
   S12_ThetaY_20_25__1419->SetBinError(317,0.07533087);
   S12_ThetaY_20_25__1419->SetMinimum(0);
   S12_ThetaY_20_25__1419->SetMaximum(1.34378);
   S12_ThetaY_20_25__1419->SetEntries(447);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1419->SetLineColor(ci);
   S12_ThetaY_20_25__1419->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1419->SetMarkerColor(ci);
   S12_ThetaY_20_25__1419->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__1419->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__1419->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1419->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1419->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1419->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__1419->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__1419->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1419->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1419->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1419->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1419->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1419->Draw("AE");
   
   TH1D *ThetaY_20_25__1420 = new TH1D("ThetaY_20_25__1420","",630,-1575,1575);
   ThetaY_20_25__1420->SetBinContent(310,0.001699524);
   ThetaY_20_25__1420->SetBinContent(311,0.2463743);
   ThetaY_20_25__1420->SetBinContent(312,0.7469975);
   ThetaY_20_25__1420->SetBinContent(313,1);
   ThetaY_20_25__1420->SetBinContent(314,1.154203);
   ThetaY_20_25__1420->SetBinContent(315,1.211081);
   ThetaY_20_25__1420->SetBinContent(316,1.221618);
   ThetaY_20_25__1420->SetBinContent(317,1.166837);
   ThetaY_20_25__1420->SetBinContent(318,0.9858373);
   ThetaY_20_25__1420->SetBinContent(319,0.7303422);
   ThetaY_20_25__1420->SetBinContent(320,0.2443349);
   ThetaY_20_25__1420->SetBinContent(321,0.002039429);
   ThetaY_20_25__1420->SetBinError(310,0.0003102892);
   ThetaY_20_25__1420->SetBinError(311,0.003735948);
   ThetaY_20_25__1420->SetBinError(312,0.006505229);
   ThetaY_20_25__1420->SetBinError(313,0.007526673);
   ThetaY_20_25__1420->SetBinError(314,0.008086195);
   ThetaY_20_25__1420->SetBinError(315,0.008283037);
   ThetaY_20_25__1420->SetBinError(316,0.008318993);
   ThetaY_20_25__1420->SetBinError(317,0.008130328);
   ThetaY_20_25__1420->SetBinError(318,0.007473184);
   ThetaY_20_25__1420->SetBinError(319,0.006432299);
   ThetaY_20_25__1420->SetBinError(320,0.003720453);
   ThetaY_20_25__1420->SetBinError(321,0.0003399048);
   ThetaY_20_25__1420->SetEntries(153773);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1420->SetLineColor(ci);
   ThetaY_20_25__1420->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1420->SetMarkerColor(ci);
   ThetaY_20_25__1420->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1420->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1420->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1420->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1420->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1420->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1420->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1420->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1420->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1420->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1420->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1420->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1420->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1420->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1420->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1420->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1420->Draw("AEsame");
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
   
   Double_t _fx3474[12] = {
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
   Double_t _fy3474[12] = {
   0,
   0.9072755,
   0.7717169,
   1,
   0.7033116,
   0.9519935,
   0.828217,
   0.4133852,
   0,
   0,
   0,
   0};
   Double_t _felx3474[12] = {
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
   Double_t _fely3474[12] = {
   0,
   0.2067245,
   0.1100677,
   0.1085088,
   0.08460399,
   0.09621916,
   0.08931054,
   0.06435796,
   0,
   0,
   0,
   0};
   Double_t _fehx3474[12] = {
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
   Double_t _fehy3474[12] = {
   13.14336,
   0.2602666,
   0.1270188,
   0.1209809,
   0.09545405,
   0.1064778,
   0.09950733,
   0.07525578,
   0.0219714,
   0.02965819,
   0.08866396,
   10.89641};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3474,_fy3474,_felx3474,_fehx3474,_fely3474,_fehy3474);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3474 = new TH1F("Graph_Graph3474","",100,-100,100);
   Graph_Graph3474->SetMinimum(0);
   Graph_Graph3474->SetMaximum(1.5);
   Graph_Graph3474->SetDirectory(0);
   Graph_Graph3474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3474->SetLineColor(ci);
   Graph_Graph3474->GetXaxis()->SetRange(1,100);
   Graph_Graph3474->GetXaxis()->CenterTitle(true);
   Graph_Graph3474->GetXaxis()->SetLabelFont(42);
   Graph_Graph3474->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3474->GetXaxis()->SetTitleFont(42);
   Graph_Graph3474->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3474->GetYaxis()->CenterTitle(true);
   Graph_Graph3474->GetYaxis()->SetLabelFont(42);
   Graph_Graph3474->GetYaxis()->SetTitleFont(42);
   Graph_Graph3474->GetZaxis()->SetLabelFont(42);
   Graph_Graph3474->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3474->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3474);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.34378,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1421 = new TH2D("ThetaY_vs_Y_20_25__1421","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8077,30);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8103,4349);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8129,13186);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8155,17652);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8181,20374);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8207,21378);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8233,21564);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8259,20597);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8285,17402);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8311,12892);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8337,4313);
   ThetaY_vs_Y_20_25__1421->SetBinContent(8363,36);
   ThetaY_vs_Y_20_25__1421->SetEntries(153773);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1421->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1421->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1421->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1421->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1421->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1421->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1421->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1421->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1421->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1421->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1421->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1421->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1421->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1421->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1421->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1421->Draw("COL");
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
