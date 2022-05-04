void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-2.92128,125,55.50433);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__1770 = new TH1D("S12_ThetaY_35_40__1770","",630,-1575,1575);
   S12_ThetaY_35_40__1770->SetBinContent(312,1);
   S12_ThetaY_35_40__1770->SetBinContent(313,4);
   S12_ThetaY_35_40__1770->SetBinContent(314,6);
   S12_ThetaY_35_40__1770->SetBinContent(315,9);
   S12_ThetaY_35_40__1770->SetBinContent(316,2);
   S12_ThetaY_35_40__1770->SetBinError(312,1);
   S12_ThetaY_35_40__1770->SetBinError(313,2);
   S12_ThetaY_35_40__1770->SetBinError(314,2.44949);
   S12_ThetaY_35_40__1770->SetBinError(315,3);
   S12_ThetaY_35_40__1770->SetBinError(316,1.414214);
   S12_ThetaY_35_40__1770->SetMinimum(0);
   S12_ThetaY_35_40__1770->SetMaximum(49.66176);
   S12_ThetaY_35_40__1770->SetEntries(22);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1770->SetLineColor(ci);
   S12_ThetaY_35_40__1770->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1770->SetMarkerColor(ci);
   S12_ThetaY_35_40__1770->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__1770->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__1770->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1770->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1770->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1770->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__1770->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__1770->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1770->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1770->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1770->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1770->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1770->Draw("AE");
   
   TH1D *ThetaY_35_40__1771 = new TH1D("ThetaY_35_40__1771","",630,-1575,1575);
   ThetaY_35_40__1771->SetBinContent(312,1);
   ThetaY_35_40__1771->SetBinContent(313,19.36765);
   ThetaY_35_40__1771->SetBinContent(314,39.07353);
   ThetaY_35_40__1771->SetBinContent(315,45.14706);
   ThetaY_35_40__1771->SetBinContent(316,44.19118);
   ThetaY_35_40__1771->SetBinContent(317,38.89706);
   ThetaY_35_40__1771->SetBinContent(318,19.61765);
   ThetaY_35_40__1771->SetBinContent(319,0.6911765);
   ThetaY_35_40__1771->SetBinError(312,0.1212678);
   ThetaY_35_40__1771->SetBinError(313,0.5336837);
   ThetaY_35_40__1771->SetBinError(314,0.7580308);
   ThetaY_35_40__1771->SetBinError(315,0.8148174);
   ThetaY_35_40__1771->SetBinError(316,0.8061453);
   ThetaY_35_40__1771->SetBinError(317,0.7563171);
   ThetaY_35_40__1771->SetBinError(318,0.5371171);
   ThetaY_35_40__1771->SetBinError(319,0.1008185);
   ThetaY_35_40__1771->SetEntries(14143);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1771->SetLineColor(ci);
   ThetaY_35_40__1771->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1771->SetMarkerColor(ci);
   ThetaY_35_40__1771->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1771->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1771->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1771->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1771->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1771->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1771->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1771->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1771->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1771->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1771->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1771->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1771->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1771->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1771->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1771->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1771->Draw("AEsame");
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
   
   Double_t _fx3591[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3591[8] = {
   1,
   0.20653,
   0.1535566,
   0.1993485,
   0.0452579,
   0,
   0,
   0};
   Double_t _felx3591[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3591[8] = {
   0.8295366,
   0.0989611,
   0.06096792,
   0.06528325,
   0.02923852,
   0,
   0,
   0};
   Double_t _fehx3591[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3591[8] = {
   2.355803,
   0.163745,
   0.09188073,
   0.09123471,
   0.05973807,
   0.04734709,
   0.09390997,
   2.716461};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3591,_fy3591,_felx3591,_fehx3591,_fely3591,_fehy3591);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3591 = new TH1F("Graph_Graph3591","",100,-100,100);
   Graph_Graph3591->SetMinimum(0);
   Graph_Graph3591->SetMaximum(1.5);
   Graph_Graph3591->SetDirectory(0);
   Graph_Graph3591->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3591->SetLineColor(ci);
   Graph_Graph3591->GetXaxis()->SetRange(1,100);
   Graph_Graph3591->GetXaxis()->CenterTitle(true);
   Graph_Graph3591->GetXaxis()->SetLabelFont(42);
   Graph_Graph3591->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3591->GetXaxis()->SetTitleFont(42);
   Graph_Graph3591->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3591->GetYaxis()->CenterTitle(true);
   Graph_Graph3591->GetYaxis()->SetLabelFont(42);
   Graph_Graph3591->GetYaxis()->SetTitleFont(42);
   Graph_Graph3591->GetZaxis()->SetLabelFont(42);
   Graph_Graph3591->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3591->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3591);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,49.66176,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1772 = new TH2D("ThetaY_vs_Y_35_40__1772","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8132,68);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8158,1317);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8184,2657);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8210,3070);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8236,3005);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8262,2645);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8288,1334);
   ThetaY_vs_Y_35_40__1772->SetBinContent(8314,47);
   ThetaY_vs_Y_35_40__1772->SetEntries(14143);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1772->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1772->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1772->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1772->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1772->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1772->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1772->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1772->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1772->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1772->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1772->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1772->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1772->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1772->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1772->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1772->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_35_40","Reco vertices","lpf");
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
