void S12_VerticalDecayAngleRatio_-15_-10()
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
   
   TH1D *S12_ThetaY_mI15_mI10__1740 = new TH1D("S12_ThetaY_mI15_mI10__1740","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__1740->SetBinContent(314,0.4528302);
   S12_ThetaY_mI15_mI10__1740->SetBinContent(315,1);
   S12_ThetaY_mI15_mI10__1740->SetBinContent(316,0.8584906);
   S12_ThetaY_mI15_mI10__1740->SetBinContent(317,0.8113208);
   S12_ThetaY_mI15_mI10__1740->SetBinContent(318,0.3018868);
   S12_ThetaY_mI15_mI10__1740->SetBinContent(319,0.009433962);
   S12_ThetaY_mI15_mI10__1740->SetBinError(314,0.06536041);
   S12_ThetaY_mI15_mI10__1740->SetBinError(315,0.09712859);
   S12_ThetaY_mI15_mI10__1740->SetBinError(316,0.08999426);
   S12_ThetaY_mI15_mI10__1740->SetBinError(317,0.08748697);
   S12_ThetaY_mI15_mI10__1740->SetBinError(318,0.05336655);
   S12_ThetaY_mI15_mI10__1740->SetBinError(319,0.009433962);
   S12_ThetaY_mI15_mI10__1740->SetMinimum(0);
   S12_ThetaY_mI15_mI10__1740->SetMaximum(1.1);
   S12_ThetaY_mI15_mI10__1740->SetEntries(364);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1740->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__1740->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1740->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__1740->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__1740->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__1740->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1740->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1740->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1740->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__1740->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__1740->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1740->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1740->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1740->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1740->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1740->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1741 = new TH1D("ThetaY_mI15_mI10__1741","",630,-1575,1575);
   ThetaY_mI15_mI10__1741->SetBinContent(312,0.02049484);
   ThetaY_mI15_mI10__1741->SetBinContent(313,0.4257907);
   ThetaY_mI15_mI10__1741->SetBinContent(314,0.8444066);
   ThetaY_mI15_mI10__1741->SetBinContent(315,1);
   ThetaY_mI15_mI10__1741->SetBinContent(316,0.9904121);
   ThetaY_mI15_mI10__1741->SetBinContent(317,0.8477526);
   ThetaY_mI15_mI10__1741->SetBinContent(318,0.4250507);
   ThetaY_mI15_mI10__1741->SetBinContent(319,0.02197484);
   ThetaY_mI15_mI10__1741->SetBinError(312,0.000812035);
   ThetaY_mI15_mI10__1741->SetBinError(313,0.003701268);
   ThetaY_mI15_mI10__1741->SetBinError(314,0.005212287);
   ThetaY_mI15_mI10__1741->SetBinError(315,0.005672213);
   ThetaY_mI15_mI10__1741->SetBinError(316,0.005644955);
   ThetaY_mI15_mI10__1741->SetBinError(317,0.005222604);
   ThetaY_mI15_mI10__1741->SetBinError(318,0.003698051);
   ThetaY_mI15_mI10__1741->SetBinError(319,0.0008408439);
   ThetaY_mI15_mI10__1741->SetEntries(142223);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1741->SetLineColor(ci);
   ThetaY_mI15_mI10__1741->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1741->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1741->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1741->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1741->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1741->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1741->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1741->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1741->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1741->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1741->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1741->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1741->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1741->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1741->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1741->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1741->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1741->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1741->Draw("AEsame");
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
   
   Double_t _fx3581[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3581[8] = {
   0,
   0,
   0.5362703,
   1,
   0.8668013,
   0.9570253,
   0.7102372,
   0.4293074};
   Double_t _felx3581[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3581[8] = {
   0,
   0,
   0.07720242,
   0.09713888,
   0.09083076,
   0.1031637,
   0.1250405,
   0.355242};
   Double_t _fehx3581[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3581[8] = {
   0.8486651,
   0.04079314,
   0.08920894,
   0.1070698,
   0.1008899,
   0.1149367,
   0.1492739,
   0.9895905};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3581,_fy3581,_felx3581,_fehx3581,_fely3581,_fehy3581);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3581 = new TH1F("Graph_Graph3581","",100,-100,100);
   Graph_Graph3581->SetMinimum(0);
   Graph_Graph3581->SetMaximum(1.5);
   Graph_Graph3581->SetDirectory(0);
   Graph_Graph3581->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3581->SetLineColor(ci);
   Graph_Graph3581->GetXaxis()->SetRange(1,100);
   Graph_Graph3581->GetXaxis()->CenterTitle(true);
   Graph_Graph3581->GetXaxis()->SetLabelFont(42);
   Graph_Graph3581->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3581->GetXaxis()->SetTitleFont(42);
   Graph_Graph3581->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3581->GetYaxis()->CenterTitle(true);
   Graph_Graph3581->GetYaxis()->SetLabelFont(42);
   Graph_Graph3581->GetYaxis()->SetTitleFont(42);
   Graph_Graph3581->GetZaxis()->SetLabelFont(42);
   Graph_Graph3581->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3581->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3581);
   
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1742 = new TH2D("ThetaY_vs_Y_mI15_mI10__1742","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8122,637);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8148,13234);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8174,26245);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8200,31081);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8226,30783);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8252,26349);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8278,13211);
   ThetaY_vs_Y_mI15_mI10__1742->SetBinContent(8304,683);
   ThetaY_vs_Y_mI15_mI10__1742->SetEntries(142223);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1742->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1742->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1742->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1742->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1742->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1742->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1742->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1742->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1742->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1742->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1742->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1742->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1742->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1742->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1742->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1742->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
