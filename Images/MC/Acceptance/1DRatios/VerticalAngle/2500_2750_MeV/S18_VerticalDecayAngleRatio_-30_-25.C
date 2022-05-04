void S18_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_mI30_mI25__1788 = new TH1D("S18_ThetaY_mI30_mI25__1788","",630,-1575,1575);
   S18_ThetaY_mI30_mI25__1788->SetBinContent(315,21);
   S18_ThetaY_mI30_mI25__1788->SetBinContent(316,25);
   S18_ThetaY_mI30_mI25__1788->SetBinContent(317,21);
   S18_ThetaY_mI30_mI25__1788->SetBinContent(318,19);
   S18_ThetaY_mI30_mI25__1788->SetBinContent(319,1);
   S18_ThetaY_mI30_mI25__1788->SetBinError(315,4.582576);
   S18_ThetaY_mI30_mI25__1788->SetBinError(316,5);
   S18_ThetaY_mI30_mI25__1788->SetBinError(317,4.582576);
   S18_ThetaY_mI30_mI25__1788->SetBinError(318,4.358899);
   S18_ThetaY_mI30_mI25__1788->SetBinError(319,1);
   S18_ThetaY_mI30_mI25__1788->SetMinimum(0);
   S18_ThetaY_mI30_mI25__1788->SetMaximum(51.25377);
   S18_ThetaY_mI30_mI25__1788->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1788->SetLineColor(ci);
   S18_ThetaY_mI30_mI25__1788->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI30_mI25__1788->SetMarkerColor(ci);
   S18_ThetaY_mI30_mI25__1788->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI30_mI25__1788->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI30_mI25__1788->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1788->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1788->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1788->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI30_mI25__1788->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI30_mI25__1788->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1788->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1788->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI30_mI25__1788->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI30_mI25__1788->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI30_mI25__1788->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1789 = new TH1D("ThetaY_mI30_mI25__1789","",630,-1575,1575);
   ThetaY_mI30_mI25__1789->SetBinContent(312,0.990566);
   ThetaY_mI30_mI25__1789->SetBinContent(313,19.45283);
   ThetaY_mI30_mI25__1789->SetBinContent(314,39.10849);
   ThetaY_mI30_mI25__1789->SetBinContent(315,46.59434);
   ThetaY_mI30_mI25__1789->SetBinContent(316,46.13208);
   ThetaY_mI30_mI25__1789->SetBinContent(317,39.20755);
   ThetaY_mI30_mI25__1789->SetBinContent(318,19.66509);
   ThetaY_mI30_mI25__1789->SetBinContent(319,1);
   ThetaY_mI30_mI25__1789->SetBinError(312,0.06835555);
   ThetaY_mI30_mI25__1789->SetBinError(313,0.3029169);
   ThetaY_mI30_mI25__1789->SetBinError(314,0.4295044);
   ThetaY_mI30_mI25__1789->SetBinError(315,0.4688119);
   ThetaY_mI30_mI25__1789->SetBinError(316,0.4664806);
   ThetaY_mI30_mI25__1789->SetBinError(317,0.430048);
   ThetaY_mI30_mI25__1789->SetBinError(318,0.3045651);
   ThetaY_mI30_mI25__1789->SetBinError(319,0.06868028);
   ThetaY_mI30_mI25__1789->SetEntries(44976);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1789->SetLineColor(ci);
   ThetaY_mI30_mI25__1789->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1789->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1789->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1789->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1789->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1789->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1789->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1789->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1789->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1789->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1789->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1789->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1789->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1789->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1789->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1789->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1789->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1789->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1789->Draw("AEsame");
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
   
   Double_t _fx3597[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3597[8] = {
   0,
   0,
   0,
   0.4506985,
   0.5419223,
   0.5356112,
   0.9661789,
   1};
   Double_t _felx3597[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3597[8] = {
   0,
   0,
   0,
   0.09766043,
   0.1077871,
   0.116082,
   0.2201654,
   0.8279875};
   Double_t _fehx3597[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3597[8] = {
   1.866726,
   0.09466143,
   0.04707996,
   0.1215343,
   0.1317136,
   0.1444683,
   0.2771975,
   2.317471};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3597,_fy3597,_felx3597,_fehx3597,_fely3597,_fehy3597);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3597 = new TH1F("Graph_Graph3597","",100,-100,100);
   Graph_Graph3597->SetMinimum(0);
   Graph_Graph3597->SetMaximum(1.5);
   Graph_Graph3597->SetDirectory(0);
   Graph_Graph3597->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3597->SetLineColor(ci);
   Graph_Graph3597->GetXaxis()->SetRange(1,100);
   Graph_Graph3597->GetXaxis()->CenterTitle(true);
   Graph_Graph3597->GetXaxis()->SetLabelFont(42);
   Graph_Graph3597->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3597->GetXaxis()->SetTitleFont(42);
   Graph_Graph3597->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3597->GetYaxis()->CenterTitle(true);
   Graph_Graph3597->GetYaxis()->SetLabelFont(42);
   Graph_Graph3597->GetYaxis()->SetTitleFont(42);
   Graph_Graph3597->GetZaxis()->SetLabelFont(42);
   Graph_Graph3597->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3597->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3597);
   
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1790 = new TH2D("ThetaY_vs_Y_mI30_mI25__1790","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8119,210);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8145,4124);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8171,8291);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8197,9878);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8223,9780);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8249,8312);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8275,4169);
   ThetaY_vs_Y_mI30_mI25__1790->SetBinContent(8301,212);
   ThetaY_vs_Y_mI30_mI25__1790->SetEntries(44976);
   ThetaY_vs_Y_mI30_mI25__1790->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(1,493.9);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(2,987.8);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(3,1481.7);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(4,1975.6);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(5,2469.5);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(6,2963.4);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(7,3457.3);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(8,3951.2);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(9,4445.1);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(10,4939);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(11,5432.9);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(12,5926.8);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(13,6420.7);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(14,6914.6);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(15,7408.5);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(16,7902.4);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(17,8396.3);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(18,8890.2);
   ThetaY_vs_Y_mI30_mI25__1790->SetContourLevel(19,9384.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1790->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1790->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1790->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1790->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1790->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1790->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1790->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1790->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1790->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1790->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1790->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1790->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1790->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1790->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1790->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1790->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-30_-25","Reco vertices","lpf");
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
