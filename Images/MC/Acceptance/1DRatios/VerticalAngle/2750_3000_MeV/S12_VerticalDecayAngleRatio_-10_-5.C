void S12_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:16:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.56433,125,29.72227);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__24 = new TH1D("S12_ThetaY_mI10_mI5__24","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__24->SetBinContent(314,7);
   S12_ThetaY_mI10_mI5__24->SetBinContent(315,16);
   S12_ThetaY_mI10_mI5__24->SetBinContent(316,12);
   S12_ThetaY_mI10_mI5__24->SetBinContent(317,9);
   S12_ThetaY_mI10_mI5__24->SetBinContent(318,1);
   S12_ThetaY_mI10_mI5__24->SetBinError(314,2.645751);
   S12_ThetaY_mI10_mI5__24->SetBinError(315,4);
   S12_ThetaY_mI10_mI5__24->SetBinError(316,3.464102);
   S12_ThetaY_mI10_mI5__24->SetBinError(317,3);
   S12_ThetaY_mI10_mI5__24->SetBinError(318,1);
   S12_ThetaY_mI10_mI5__24->SetMinimum(0);
   S12_ThetaY_mI10_mI5__24->SetMaximum(26.59361);
   S12_ThetaY_mI10_mI5__24->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__24->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__24->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__24->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__24->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__24->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__24->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__24->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__24->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__24->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__24->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__24->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__24->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__24->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__24->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__24->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__24->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__25 = new TH1D("ThetaY_mI10_mI5__25","",630,-1575,1575);
   ThetaY_mI10_mI5__25->SetBinContent(313,0.9970501);
   ThetaY_mI10_mI5__25->SetBinContent(314,13.03441);
   ThetaY_mI10_mI5__25->SetBinContent(315,24.16814);
   ThetaY_mI10_mI5__25->SetBinContent(316,24.17601);
   ThetaY_mI10_mI5__25->SetBinContent(317,13.18584);
   ThetaY_mI10_mI5__25->SetBinContent(318,1);
   ThetaY_mI10_mI5__25->SetBinError(313,0.03131108);
   ThetaY_mI10_mI5__25->SetBinError(314,0.1132101);
   ThetaY_mI10_mI5__25->SetBinError(315,0.1541563);
   ThetaY_mI10_mI5__25->SetBinError(316,0.1541813);
   ThetaY_mI10_mI5__25->SetBinError(317,0.1138658);
   ThetaY_mI10_mI5__25->SetBinError(318,0.03135736);
   ThetaY_mI10_mI5__25->SetEntries(77863);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__25->SetLineColor(ci);
   ThetaY_mI10_mI5__25->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__25->SetMarkerColor(ci);
   ThetaY_mI10_mI5__25->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__25->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__25->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__25->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__25->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__25->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__25->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__25->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__25->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__25->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__25->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__25->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__25->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__25->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__25->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__25->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__25->Draw("AEsame");
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
   
   Double_t _fx3009[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3009[6] = {
   0,
   0.5370398,
   0.6620286,
   0.4963599,
   0.6825503,
   1};
   Double_t _felx3009[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3009[6] = {
   0,
   0.1980961,
   0.1638113,
   0.1412986,
   0.2232964,
   0.8274013};
   Double_t _fehx3009[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3009[6] = {
   1.848146,
   0.2893734,
   0.2104111,
   0.1886728,
   0.3118658,
   2.303259};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-100,100);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(1.5);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3009->SetLineColor(ci);
   Graph_Graph3009->GetXaxis()->SetRange(1,100);
   Graph_Graph3009->GetXaxis()->CenterTitle(true);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3009->GetYaxis()->CenterTitle(true);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,26.59361,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__26 = new TH2D("ThetaY_vs_Y_mI10_mI5__26","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__26->SetBinContent(8149,1014);
   ThetaY_vs_Y_mI10_mI5__26->SetBinContent(8175,13256);
   ThetaY_vs_Y_mI10_mI5__26->SetBinContent(8201,24579);
   ThetaY_vs_Y_mI10_mI5__26->SetBinContent(8227,24587);
   ThetaY_vs_Y_mI10_mI5__26->SetBinContent(8253,13410);
   ThetaY_vs_Y_mI10_mI5__26->SetBinContent(8279,1017);
   ThetaY_vs_Y_mI10_mI5__26->SetEntries(77863);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__26->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__26->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__26->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__26->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__26->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__26->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__26->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__26->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__26->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__26->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__26->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__26->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__26->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__26->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__26->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__26->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
