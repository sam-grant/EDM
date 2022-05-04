void _RatioPlot()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 27 03:33:35 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-2547.955,81.25,48411.15);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_R__3 = new TH1D("S12S18_R__3","",24,-60,60);
   S12S18_R__3->SetBinContent(4,1593);
   S12S18_R__3->SetBinContent(5,3480);
   S12S18_R__3->SetBinContent(6,5801);
   S12S18_R__3->SetBinContent(7,9228);
   S12S18_R__3->SetBinContent(8,13004);
   S12S18_R__3->SetBinContent(9,17411);
   S12S18_R__3->SetBinContent(10,21268);
   S12S18_R__3->SetBinContent(11,25525);
   S12S18_R__3->SetBinContent(12,28622);
   S12S18_R__3->SetBinContent(13,31457);
   S12S18_R__3->SetBinContent(14,34516);
   S12S18_R__3->SetBinContent(15,39406);
   S12S18_R__3->SetBinContent(16,41050);
   S12S18_R__3->SetBinContent(17,31139);
   S12S18_R__3->SetBinContent(18,18420);
   S12S18_R__3->SetBinContent(19,10217);
   S12S18_R__3->SetBinContent(20,5405);
   S12S18_R__3->SetBinContent(21,2081);
   S12S18_R__3->SetBinError(4,39.9124);
   S12S18_R__3->SetBinError(5,58.99152);
   S12S18_R__3->SetBinError(6,76.1643);
   S12S18_R__3->SetBinError(7,96.06248);
   S12S18_R__3->SetBinError(8,114.0351);
   S12S18_R__3->SetBinError(9,131.9507);
   S12S18_R__3->SetBinError(10,145.8355);
   S12S18_R__3->SetBinError(11,159.7655);
   S12S18_R__3->SetBinError(12,169.1804);
   S12S18_R__3->SetBinError(13,177.3612);
   S12S18_R__3->SetBinError(14,185.7848);
   S12S18_R__3->SetBinError(15,198.5094);
   S12S18_R__3->SetBinError(16,202.608);
   S12S18_R__3->SetBinError(17,176.4625);
   S12S18_R__3->SetBinError(18,135.7203);
   S12S18_R__3->SetBinError(19,101.0792);
   S12S18_R__3->SetBinError(20,73.51871);
   S12S18_R__3->SetBinError(21,45.61798);
   S12S18_R__3->SetEntries(339623);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_R__3->SetLineColor(ci);
   S12S18_R__3->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_R__3->SetMarkerColor(ci);
   S12S18_R__3->GetXaxis()->SetTitle("Decay radial position [mm]");
   S12S18_R__3->GetXaxis()->SetRange(0,25);
   S12S18_R__3->GetXaxis()->SetLabelFont(42);
   S12S18_R__3->GetXaxis()->SetTitleOffset(1);
   S12S18_R__3->GetXaxis()->SetTitleFont(42);
   S12S18_R__3->GetYaxis()->SetTitle("Normalised entries");
   S12S18_R__3->GetYaxis()->CenterTitle(true);
   S12S18_R__3->GetYaxis()->SetLabelFont(42);
   S12S18_R__3->GetYaxis()->SetTitleFont(42);
   S12S18_R__3->GetZaxis()->SetLabelFont(42);
   S12S18_R__3->GetZaxis()->SetTitleOffset(1);
   S12S18_R__3->GetZaxis()->SetTitleFont(42);
   S12S18_R__3->Draw("AE");
   
   TH1D *R__4 = new TH1D("R__4","",24,-60,60);
   R__4->SetBinContent(4,312725);
   R__4->SetBinContent(5,645175);
   R__4->SetBinContent(6,1046764);
   R__4->SetBinContent(7,1567321);
   R__4->SetBinContent(8,2205223);
   R__4->SetBinContent(9,2925062);
   R__4->SetBinContent(10,3668908);
   R__4->SetBinContent(11,4372070);
   R__4->SetBinContent(12,5015897);
   R__4->SetBinContent(13,5606964);
   R__4->SetBinContent(14,6311707);
   R__4->SetBinContent(15,7380594);
   R__4->SetBinContent(16,7812344);
   R__4->SetBinContent(17,6053195);
   R__4->SetBinContent(18,3671394);
   R__4->SetBinContent(19,2095089);
   R__4->SetBinContent(20,1128573);
   R__4->SetBinContent(21,444460);
   R__4->SetBinError(4,559.2182);
   R__4->SetBinError(5,803.2279);
   R__4->SetBinError(6,1023.115);
   R__4->SetBinError(7,1251.927);
   R__4->SetBinError(8,1484.999);
   R__4->SetBinError(9,1710.281);
   R__4->SetBinError(10,1915.439);
   R__4->SetBinError(11,2090.95);
   R__4->SetBinError(12,2239.62);
   R__4->SetBinError(13,2367.903);
   R__4->SetBinError(14,2512.311);
   R__4->SetBinError(15,2716.725);
   R__4->SetBinError(16,2795.057);
   R__4->SetBinError(17,2460.324);
   R__4->SetBinError(18,1916.088);
   R__4->SetBinError(19,1447.442);
   R__4->SetBinError(20,1062.343);
   R__4->SetBinError(21,666.6783);
   R__4->SetEntries(6.226346e+07);

   ci = TColor::GetColor("#ff0000");
   R__4->SetLineColor(ci);
   R__4->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   R__4->SetMarkerColor(ci);
   R__4->GetXaxis()->SetTitle("Decay radial position [mm]");
   R__4->GetXaxis()->CenterTitle(true);
   R__4->GetXaxis()->SetLabelFont(42);
   R__4->GetXaxis()->SetTitleSize(0.04);
   R__4->GetXaxis()->SetTitleOffset(1.1);
   R__4->GetXaxis()->SetTitleFont(42);
   R__4->GetYaxis()->SetTitle("Decays");
   R__4->GetYaxis()->CenterTitle(true);
   R__4->GetYaxis()->SetNdivisions(4000510);
   R__4->GetYaxis()->SetLabelFont(42);
   R__4->GetYaxis()->SetTitleSize(0.04);
   R__4->GetYaxis()->SetTitleOffset(1.1);
   R__4->GetYaxis()->SetTitleFont(42);
   R__4->GetZaxis()->SetLabelFont(42);
   R__4->GetZaxis()->SetTitleOffset(1);
   R__4->GetZaxis()->SetTitleFont(42);
   R__4->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-81.25,-0.004615385,81.25,0.01076923);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3002[18] = {
   -42.5,
   -37.5,
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
   32.5,
   37.5,
   42.5};
   Double_t _fy3002[18] = {
   0.005093932,
   0.005393885,
   0.005541841,
   0.005887754,
   0.005896909,
   0.005952352,
   0.00579682,
   0.005838196,
   0.005706258,
   0.005610345,
   0.005468568,
   0.005339137,
   0.005254505,
   0.005144225,
   0.005017168,
   0.004876642,
   0.004789234,
   0.004682086};
   Double_t _felx3002[18] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3002[18] = {
   0.0001279388,
   9.167672e-05,
   7.296088e-05,
   6.146992e-05,
   5.186293e-05,
   4.524403e-05,
   3.986375e-05,
   3.664856e-05,
   3.382473e-05,
   3.172075e-05,
   2.951519e-05,
   2.696772e-05,
   2.600228e-05,
   2.922668e-05,
   3.705925e-05,
   4.836246e-05,
   6.529683e-05,
   0.0001028685};
   Double_t _fehx3002[18] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3002[18] = {
   0.0001311936,
   9.324844e-05,
   7.392789e-05,
   6.211509e-05,
   5.23211e-05,
   4.558926e-05,
   4.013885e-05,
   3.687935e-05,
   3.402584e-05,
   3.190061e-05,
   2.967492e-05,
   2.710428e-05,
   2.613128e-05,
   2.939321e-05,
   3.733401e-05,
   4.88445e-05,
   6.619328e-05,
   0.000105154};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-65,65);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(0.01);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->GetXaxis()->SetRange(1,100);
   Graph_Graph3002->GetXaxis()->CenterTitle(true);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3002->GetYaxis()->CenterTitle(true);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("iaap");
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-65,65,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,43315.24,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-65,65,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Decay radial position [mm]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,0.01,510,"-S");
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
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("R","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_R","Truth vertices","lpf");
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
