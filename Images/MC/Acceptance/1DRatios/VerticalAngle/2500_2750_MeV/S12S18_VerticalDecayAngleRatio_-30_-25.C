void S12S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:12 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-3.014928,125,57.28363);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI30_mI25__1845 = new TH1D("S12S18_ThetaY_mI30_mI25__1845","",630,-1575,1575);
   S12S18_ThetaY_mI30_mI25__1845->SetBinContent(315,17);
   S12S18_ThetaY_mI30_mI25__1845->SetBinContent(316,18.33333);
   S12S18_ThetaY_mI30_mI25__1845->SetBinContent(317,16.33333);
   S12S18_ThetaY_mI30_mI25__1845->SetBinContent(318,12.66667);
   S12S18_ThetaY_mI30_mI25__1845->SetBinContent(319,1);
   S12S18_ThetaY_mI30_mI25__1845->SetBinError(315,2.380476);
   S12S18_ThetaY_mI30_mI25__1845->SetBinError(316,2.472066);
   S12S18_ThetaY_mI30_mI25__1845->SetBinError(317,2.333333);
   S12S18_ThetaY_mI30_mI25__1845->SetBinError(318,2.054805);
   S12S18_ThetaY_mI30_mI25__1845->SetBinError(319,0.5773503);
   S12S18_ThetaY_mI30_mI25__1845->SetMinimum(0);
   S12S18_ThetaY_mI30_mI25__1845->SetMaximum(51.25377);
   S12S18_ThetaY_mI30_mI25__1845->SetEntries(196);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1845->SetLineColor(ci);
   S12S18_ThetaY_mI30_mI25__1845->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__1845->SetMarkerColor(ci);
   S12S18_ThetaY_mI30_mI25__1845->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI30_mI25__1845->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI30_mI25__1845->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1845->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1845->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1845->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI30_mI25__1845->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI30_mI25__1845->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1845->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1845->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__1845->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__1845->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__1845->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1846 = new TH1D("ThetaY_mI30_mI25__1846","",630,-1575,1575);
   ThetaY_mI30_mI25__1846->SetBinContent(312,0.990566);
   ThetaY_mI30_mI25__1846->SetBinContent(313,19.45283);
   ThetaY_mI30_mI25__1846->SetBinContent(314,39.10849);
   ThetaY_mI30_mI25__1846->SetBinContent(315,46.59434);
   ThetaY_mI30_mI25__1846->SetBinContent(316,46.13208);
   ThetaY_mI30_mI25__1846->SetBinContent(317,39.20755);
   ThetaY_mI30_mI25__1846->SetBinContent(318,19.66509);
   ThetaY_mI30_mI25__1846->SetBinContent(319,1);
   ThetaY_mI30_mI25__1846->SetBinError(312,0.06835555);
   ThetaY_mI30_mI25__1846->SetBinError(313,0.3029169);
   ThetaY_mI30_mI25__1846->SetBinError(314,0.4295044);
   ThetaY_mI30_mI25__1846->SetBinError(315,0.4688119);
   ThetaY_mI30_mI25__1846->SetBinError(316,0.4664806);
   ThetaY_mI30_mI25__1846->SetBinError(317,0.430048);
   ThetaY_mI30_mI25__1846->SetBinError(318,0.3045651);
   ThetaY_mI30_mI25__1846->SetBinError(319,0.06868028);
   ThetaY_mI30_mI25__1846->SetEntries(44976);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1846->SetLineColor(ci);
   ThetaY_mI30_mI25__1846->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1846->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1846->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1846->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1846->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1846->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1846->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1846->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1846->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1846->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1846->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1846->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1846->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1846->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1846->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1846->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1846->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1846->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1846->Draw("AEsame");
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
   
   Double_t _fx3616[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3616[8] = {
   0,
   0,
   0,
   0.3648512,
   0.3974097,
   0.4165865,
   0.6441193,
   1};
   Double_t _felx3616[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3616[8] = {
   0,
   0,
   0,
   0.05105012,
   0.05357066,
   0.05947968,
   0.1044892,
   0.5470445};
   Double_t _fehx3616[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3616[8] = {
   0.6222419,
   0.03155381,
   0.01569332,
   0.05875271,
   0.06133541,
   0.06865364,
   0.1230195,
   0.9863314};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3616,_fy3616,_felx3616,_fehx3616,_fely3616,_fehy3616);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3616 = new TH1F("Graph_Graph3616","",100,-100,100);
   Graph_Graph3616->SetMinimum(0);
   Graph_Graph3616->SetMaximum(1.5);
   Graph_Graph3616->SetDirectory(0);
   Graph_Graph3616->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3616->SetLineColor(ci);
   Graph_Graph3616->GetXaxis()->SetRange(1,100);
   Graph_Graph3616->GetXaxis()->CenterTitle(true);
   Graph_Graph3616->GetXaxis()->SetLabelFont(42);
   Graph_Graph3616->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3616->GetXaxis()->SetTitleFont(42);
   Graph_Graph3616->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3616->GetYaxis()->CenterTitle(true);
   Graph_Graph3616->GetYaxis()->SetLabelFont(42);
   Graph_Graph3616->GetYaxis()->SetTitleFont(42);
   Graph_Graph3616->GetZaxis()->SetLabelFont(42);
   Graph_Graph3616->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3616->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3616);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,51.25377,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1847 = new TH2D("ThetaY_vs_Y_mI30_mI25__1847","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8119,210);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8145,4124);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8171,8291);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8197,9878);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8223,9780);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8249,8312);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8275,4169);
   ThetaY_vs_Y_mI30_mI25__1847->SetBinContent(8301,212);
   ThetaY_vs_Y_mI30_mI25__1847->SetEntries(44976);
   ThetaY_vs_Y_mI30_mI25__1847->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(1,493.9);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(2,987.8);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(3,1481.7);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(4,1975.6);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(5,2469.5);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(6,2963.4);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(7,3457.3);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(8,3951.2);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(9,4445.1);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(10,4939);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(11,5432.9);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(12,5926.8);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(13,6420.7);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(14,6914.6);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(15,7408.5);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(16,7902.4);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(17,8396.3);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(18,8890.2);
   ThetaY_vs_Y_mI30_mI25__1847->SetContourLevel(19,9384.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1847->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1847->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1847->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1847->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1847->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1847->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1847->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1847->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1847->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1847->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1847->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1847->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1847->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1847->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1847->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1847->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-30_-25","Reco vertices","lpf");
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
