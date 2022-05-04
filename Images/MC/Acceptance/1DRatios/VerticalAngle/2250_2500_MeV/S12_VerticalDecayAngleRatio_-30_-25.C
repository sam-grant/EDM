void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-9.005883,125,171.1118);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__1560 = new TH1D("S12_ThetaY_mI30_mI25__1560","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__1560->SetBinContent(314,1);
   S12_ThetaY_mI30_mI25__1560->SetBinContent(315,27);
   S12_ThetaY_mI30_mI25__1560->SetBinContent(316,42);
   S12_ThetaY_mI30_mI25__1560->SetBinContent(317,36);
   S12_ThetaY_mI30_mI25__1560->SetBinContent(318,32);
   S12_ThetaY_mI30_mI25__1560->SetBinContent(319,11);
   S12_ThetaY_mI30_mI25__1560->SetBinContent(320,1);
   S12_ThetaY_mI30_mI25__1560->SetBinError(314,1);
   S12_ThetaY_mI30_mI25__1560->SetBinError(315,5.196152);
   S12_ThetaY_mI30_mI25__1560->SetBinError(316,6.480741);
   S12_ThetaY_mI30_mI25__1560->SetBinError(317,6);
   S12_ThetaY_mI30_mI25__1560->SetBinError(318,5.656854);
   S12_ThetaY_mI30_mI25__1560->SetBinError(319,3.316625);
   S12_ThetaY_mI30_mI25__1560->SetBinError(320,1);
   S12_ThetaY_mI30_mI25__1560->SetMinimum(0);
   S12_ThetaY_mI30_mI25__1560->SetMaximum(153.1);
   S12_ThetaY_mI30_mI25__1560->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1560->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__1560->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1560->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__1560->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__1560->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__1560->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1560->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1560->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1560->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__1560->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__1560->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1560->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1560->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1560->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1560->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1560->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1561 = new TH1D("ThetaY_mI30_mI25__1561","",630,-1575,1575);
   ThetaY_mI30_mI25__1561->SetBinContent(311,0.7840909);
   ThetaY_mI30_mI25__1561->SetBinContent(312,41.94318);
   ThetaY_mI30_mI25__1561->SetBinContent(313,96.98864);
   ThetaY_mI30_mI25__1561->SetBinContent(314,123.75);
   ThetaY_mI30_mI25__1561->SetBinContent(315,135.6818);
   ThetaY_mI30_mI25__1561->SetBinContent(316,139.1818);
   ThetaY_mI30_mI25__1561->SetBinContent(317,123.2386);
   ThetaY_mI30_mI25__1561->SetBinContent(318,100.1705);
   ThetaY_mI30_mI25__1561->SetBinContent(319,41.61364);
   ThetaY_mI30_mI25__1561->SetBinContent(320,1);
   ThetaY_mI30_mI25__1561->SetBinError(311,0.09439345);
   ThetaY_mI30_mI25__1561->SetBinError(312,0.6903818);
   ThetaY_mI30_mI25__1561->SetBinError(313,1.04983);
   ThetaY_mI30_mI25__1561->SetBinError(314,1.185854);
   ThetaY_mI30_mI25__1561->SetBinError(315,1.241708);
   ThetaY_mI30_mI25__1561->SetBinError(316,1.257621);
   ThetaY_mI30_mI25__1561->SetBinError(317,1.183401);
   ThetaY_mI30_mI25__1561->SetBinError(318,1.066912);
   ThetaY_mI30_mI25__1561->SetBinError(319,0.6876643);
   ThetaY_mI30_mI25__1561->SetBinError(320,0.1066004);
   ThetaY_mI30_mI25__1561->SetEntries(70783);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1561->SetLineColor(ci);
   ThetaY_mI30_mI25__1561->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1561->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1561->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1561->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1561->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1561->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1561->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1561->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1561->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1561->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1561->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1561->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1561->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1561->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1561->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1561->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1561->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1561->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1561->Draw("AEsame");
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
   
   Double_t _fx3521[10] = {
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
   Double_t _fy3521[10] = {
   0,
   0,
   0,
   0.008080808,
   0.198995,
   0.3017636,
   0.2921162,
   0.3194555,
   0.2643364,
   1};
   Double_t _felx3521[10] = {
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
   Double_t _fely3521[10] = {
   0,
   0,
   0,
   0.006684935,
   0.03809946,
   0.04645462,
   0.04853704,
   0.05627447,
   0.07858192,
   0.8290214};
   Double_t _fehx3521[10] = {
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
   Double_t _fehy3521[10] = {
   2.379574,
   0.04390418,
   0.01898388,
   0.01858485,
   0.04620339,
   0.05422692,
   0.05736467,
   0.0671904,
   0.1063549,
   2.342927};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3521,_fy3521,_felx3521,_fehx3521,_fely3521,_fehy3521);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3521 = new TH1F("Graph_Graph3521","",100,-100,100);
   Graph_Graph3521->SetMinimum(0);
   Graph_Graph3521->SetMaximum(1.5);
   Graph_Graph3521->SetDirectory(0);
   Graph_Graph3521->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3521->SetLineColor(ci);
   Graph_Graph3521->GetXaxis()->SetRange(1,100);
   Graph_Graph3521->GetXaxis()->CenterTitle(true);
   Graph_Graph3521->GetXaxis()->SetLabelFont(42);
   Graph_Graph3521->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3521->GetXaxis()->SetTitleFont(42);
   Graph_Graph3521->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3521->GetYaxis()->CenterTitle(true);
   Graph_Graph3521->GetYaxis()->SetLabelFont(42);
   Graph_Graph3521->GetYaxis()->SetTitleFont(42);
   Graph_Graph3521->GetZaxis()->SetLabelFont(42);
   Graph_Graph3521->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3521->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3521);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,153.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1562 = new TH2D("ThetaY_vs_Y_mI30_mI25__1562","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8093,69);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8119,3691);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8145,8535);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8171,10890);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8197,11940);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8223,12248);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8249,10845);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8275,8815);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8301,3662);
   ThetaY_vs_Y_mI30_mI25__1562->SetBinContent(8327,88);
   ThetaY_vs_Y_mI30_mI25__1562->SetEntries(70783);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1562->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1562->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1562->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1562->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1562->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1562->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1562->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1562->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1562->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1562->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1562->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1562->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1562->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1562->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1562->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1562->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-30_-25","Reco vertices","lpf");
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
