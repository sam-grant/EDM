void S12_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2083585,125,3.958811);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__1602 = new TH1D("S12_ThetaY_40_45__1602","",630,-1575,1575);
   S12_ThetaY_40_45__1602->SetBinContent(312,1);
   S12_ThetaY_40_45__1602->SetBinContent(313,1.333333);
   S12_ThetaY_40_45__1602->SetBinContent(314,2.333333);
   S12_ThetaY_40_45__1602->SetBinContent(315,2);
   S12_ThetaY_40_45__1602->SetBinError(312,0.5773503);
   S12_ThetaY_40_45__1602->SetBinError(313,0.6666667);
   S12_ThetaY_40_45__1602->SetBinError(314,0.8819171);
   S12_ThetaY_40_45__1602->SetBinError(315,0.8164966);
   S12_ThetaY_40_45__1602->SetMinimum(0);
   S12_ThetaY_40_45__1602->SetMaximum(3.542094);
   S12_ThetaY_40_45__1602->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1602->SetLineColor(ci);
   S12_ThetaY_40_45__1602->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__1602->SetMarkerColor(ci);
   S12_ThetaY_40_45__1602->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__1602->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__1602->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1602->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1602->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1602->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__1602->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__1602->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1602->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1602->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__1602->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__1602->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__1602->Draw("AE");
   
   TH1D *ThetaY_40_45__1603 = new TH1D("ThetaY_40_45__1603","",630,-1575,1575);
   ThetaY_40_45__1603->SetBinContent(311,0.01068376);
   ThetaY_40_45__1603->SetBinContent(312,1);
   ThetaY_40_45__1603->SetBinContent(313,2.237179);
   ThetaY_40_45__1603->SetBinContent(314,3.07906);
   ThetaY_40_45__1603->SetBinContent(315,3.147436);
   ThetaY_40_45__1603->SetBinContent(316,3.220085);
   ThetaY_40_45__1603->SetBinContent(317,2.861111);
   ThetaY_40_45__1603->SetBinContent(318,2.087607);
   ThetaY_40_45__1603->SetBinContent(319,1.098291);
   ThetaY_40_45__1603->SetBinContent(320,0.01068376);
   ThetaY_40_45__1603->SetBinError(311,0.004777923);
   ThetaY_40_45__1603->SetBinError(312,0.04622502);
   ThetaY_40_45__1603->SetBinError(313,0.0691397);
   ThetaY_40_45__1603->SetBinError(314,0.08111219);
   ThetaY_40_45__1603->SetBinError(315,0.08200787);
   ThetaY_40_45__1603->SetBinError(316,0.08294893);
   ThetaY_40_45__1603->SetBinError(317,0.07818878);
   ThetaY_40_45__1603->SetBinError(318,0.06678846);
   ThetaY_40_45__1603->SetBinError(319,0.04844352);
   ThetaY_40_45__1603->SetBinError(320,0.004777923);
   ThetaY_40_45__1603->SetEntries(8776);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1603->SetLineColor(ci);
   ThetaY_40_45__1603->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1603->SetMarkerColor(ci);
   ThetaY_40_45__1603->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1603->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1603->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1603->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1603->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1603->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1603->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1603->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1603->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1603->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1603->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1603->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1603->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1603->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1603->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1603->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1603->Draw("AEsame");
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
   
   Double_t _fx3535[10] = {
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
   Double_t _fy3535[10] = {
   0,
   1,
   0.5959885,
   0.7578071,
   0.6354379,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3535[10] = {
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
   Double_t _fely3535[10] = {
   0,
   0.5455126,
   0.2856628,
   0.2800586,
   0.2524889,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3535[10] = {
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
   Double_t _fehy3535[10] = {
   69.44142,
   0.9788842,
   0.4728535,
   0.4096888,
   0.3807649,
   0.1906933,
   0.2146355,
   0.2942376,
   0.5597555,
   69.44142};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3535,_fy3535,_felx3535,_fehx3535,_fely3535,_fehy3535);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3535 = new TH1F("Graph_Graph3535","",100,-100,100);
   Graph_Graph3535->SetMinimum(0);
   Graph_Graph3535->SetMaximum(1.5);
   Graph_Graph3535->SetDirectory(0);
   Graph_Graph3535->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3535->SetLineColor(ci);
   Graph_Graph3535->GetXaxis()->SetRange(1,100);
   Graph_Graph3535->GetXaxis()->CenterTitle(true);
   Graph_Graph3535->GetXaxis()->SetLabelFont(42);
   Graph_Graph3535->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3535->GetXaxis()->SetTitleFont(42);
   Graph_Graph3535->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3535->GetYaxis()->CenterTitle(true);
   Graph_Graph3535->GetYaxis()->SetLabelFont(42);
   Graph_Graph3535->GetYaxis()->SetTitleFont(42);
   Graph_Graph3535->GetZaxis()->SetLabelFont(42);
   Graph_Graph3535->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3535->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3535);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.542094,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1604 = new TH2D("ThetaY_vs_Y_40_45__1604","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8107,5);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8133,468);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8159,1047);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8185,1441);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8211,1473);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8237,1507);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8263,1339);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8289,977);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8315,514);
   ThetaY_vs_Y_40_45__1604->SetBinContent(8341,5);
   ThetaY_vs_Y_40_45__1604->SetEntries(8776);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1604->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1604->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1604->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1604->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1604->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1604->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1604->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1604->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1604->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1604->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1604->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1604->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1604->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1604->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1604->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1604->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
