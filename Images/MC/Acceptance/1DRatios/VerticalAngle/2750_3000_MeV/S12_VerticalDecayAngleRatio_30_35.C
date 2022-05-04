void S12_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.1175003,125,2.232505);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__48 = new TH1D("S12_ThetaY_30_35__48","",630,-1575,1575);
   S12_ThetaY_30_35__48->SetBinContent(314,1);
   S12_ThetaY_30_35__48->SetBinContent(315,0.5);
   S12_ThetaY_30_35__48->SetBinContent(316,0.25);
   S12_ThetaY_30_35__48->SetBinError(314,0.5);
   S12_ThetaY_30_35__48->SetBinError(315,0.3535534);
   S12_ThetaY_30_35__48->SetBinError(316,0.25);
   S12_ThetaY_30_35__48->SetMinimum(0);
   S12_ThetaY_30_35__48->SetMaximum(1.997505);
   S12_ThetaY_30_35__48->SetEntries(7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__48->SetLineColor(ci);
   S12_ThetaY_30_35__48->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__48->SetMarkerColor(ci);
   S12_ThetaY_30_35__48->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__48->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__48->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__48->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__48->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__48->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__48->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__48->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__48->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__48->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__48->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__48->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__48->Draw("AE");
   
   TH1D *ThetaY_30_35__49 = new TH1D("ThetaY_30_35__49","",630,-1575,1575);
   ThetaY_30_35__49->SetBinContent(313,0.07438795);
   ThetaY_30_35__49->SetBinContent(314,1);
   ThetaY_30_35__49->SetBinContent(315,1.731638);
   ThetaY_30_35__49->SetBinContent(316,1.815913);
   ThetaY_30_35__49->SetBinContent(317,1.000471);
   ThetaY_30_35__49->SetBinContent(318,0.07532957);
   ThetaY_30_35__49->SetBinError(313,0.005917987);
   ThetaY_30_35__49->SetBinError(314,0.02169815);
   ThetaY_30_35__49->SetBinError(315,0.02855297);
   ThetaY_30_35__49->SetBinError(316,0.02923952);
   ThetaY_30_35__49->SetBinError(317,0.02170326);
   ThetaY_30_35__49->SetBinError(318,0.005955325);
   ThetaY_30_35__49->SetEntries(12102);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__49->SetLineColor(ci);
   ThetaY_30_35__49->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__49->SetMarkerColor(ci);
   ThetaY_30_35__49->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__49->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__49->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__49->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__49->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__49->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__49->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__49->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__49->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__49->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__49->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__49->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__49->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__49->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__49->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__49->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__49->Draw("AEsame");
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
   
   Double_t _fx3017[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3017[6] = {
   0,
   1,
   0.2887439,
   0.1376718,
   0,
   0};
   Double_t _felx3017[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3017[6] = {
   0,
   0.4789422,
   0.1865336,
   0.1138941,
   0,
   0};
   Double_t _fehx3017[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3017[6] = {
   6.223418,
   0.7920217,
   0.3810731,
   0.3167153,
   0.4602382,
   6.145177};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-100,100);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(1.5);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3017->SetLineColor(ci);
   Graph_Graph3017->GetXaxis()->SetRange(1,100);
   Graph_Graph3017->GetXaxis()->CenterTitle(true);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3017->GetYaxis()->CenterTitle(true);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.997505,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__50 = new TH2D("ThetaY_vs_Y_30_35__50","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__50->SetBinContent(8157,158);
   ThetaY_vs_Y_30_35__50->SetBinContent(8183,2124);
   ThetaY_vs_Y_30_35__50->SetBinContent(8209,3678);
   ThetaY_vs_Y_30_35__50->SetBinContent(8235,3857);
   ThetaY_vs_Y_30_35__50->SetBinContent(8261,2125);
   ThetaY_vs_Y_30_35__50->SetBinContent(8287,160);
   ThetaY_vs_Y_30_35__50->SetEntries(12102);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__50->SetLineColor(ci);
   ThetaY_vs_Y_30_35__50->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__50->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__50->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__50->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__50->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__50->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__50->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__50->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__50->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__50->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__50->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__50->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__50->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__50->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__50->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
