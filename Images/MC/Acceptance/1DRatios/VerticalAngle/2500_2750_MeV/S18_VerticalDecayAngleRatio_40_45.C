void S18_VerticalDecayAngleRatio_40_45()
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
   upper_pad->Range(-125,-0.0713996,125,1.356592);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_40_45__1830 = new TH1D("S18_ThetaY_40_45__1830","",630,-1575,1575);
   S18_ThetaY_40_45__1830->SetBinContent(314,1);
   S18_ThetaY_40_45__1830->SetBinContent(315,0.5);
   S18_ThetaY_40_45__1830->SetBinError(314,0.7071068);
   S18_ThetaY_40_45__1830->SetBinError(315,0.5);
   S18_ThetaY_40_45__1830->SetMinimum(0);
   S18_ThetaY_40_45__1830->SetMaximum(1.213793);
   S18_ThetaY_40_45__1830->SetEntries(3);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1830->SetLineColor(ci);
   S18_ThetaY_40_45__1830->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1830->SetMarkerColor(ci);
   S18_ThetaY_40_45__1830->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_40_45__1830->GetXaxis()->SetRange(296,335);
   S18_ThetaY_40_45__1830->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1830->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1830->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1830->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_40_45__1830->GetYaxis()->CenterTitle(true);
   S18_ThetaY_40_45__1830->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1830->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1830->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1830->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1830->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1830->Draw("AE");
   
   TH1D *ThetaY_40_45__1831 = new TH1D("ThetaY_40_45__1831","",630,-1575,1575);
   ThetaY_40_45__1831->SetBinContent(312,0.01819923);
   ThetaY_40_45__1831->SetBinContent(313,0.4789272);
   ThetaY_40_45__1831->SetBinContent(314,1);
   ThetaY_40_45__1831->SetBinContent(315,1.103448);
   ThetaY_40_45__1831->SetBinContent(316,1.096743);
   ThetaY_40_45__1831->SetBinContent(317,0.9386973);
   ThetaY_40_45__1831->SetBinContent(318,0.4664751);
   ThetaY_40_45__1831->SetBinContent(319,0.01340996);
   ThetaY_40_45__1831->SetBinError(312,0.004175191);
   ThetaY_40_45__1831->SetBinError(313,0.02141828);
   ThetaY_40_45__1831->SetBinError(314,0.03094922);
   ThetaY_40_45__1831->SetBinError(315,0.03251066);
   ThetaY_40_45__1831->SetBinError(316,0.03241173);
   ThetaY_40_45__1831->SetBinError(317,0.02998559);
   ThetaY_40_45__1831->SetBinError(318,0.021138);
   ThetaY_40_45__1831->SetBinError(319,0.003583963);
   ThetaY_40_45__1831->SetEntries(5341);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1831->SetLineColor(ci);
   ThetaY_40_45__1831->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1831->SetMarkerColor(ci);
   ThetaY_40_45__1831->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1831->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1831->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1831->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1831->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1831->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1831->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1831->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1831->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1831->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1831->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1831->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1831->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1831->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1831->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1831->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1831->Draw("AEsame");
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
   
   Double_t _fx3611[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3611[8] = {
   0,
   0,
   1,
   0.453125,
   0,
   0,
   0,
   0};
   Double_t _felx3611[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3611[8] = {
   0,
   0,
   0.6462955,
   0.374908,
   0,
   0,
   0,
   0};
   Double_t _fehx3611[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3611[8] = {
   53.11123,
   1.925569,
   1.321861,
   1.043466,
   0.839988,
   0.9815475,
   1.977068,
   73.36171};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3611,_fy3611,_felx3611,_fehx3611,_fely3611,_fehy3611);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3611 = new TH1F("Graph_Graph3611","",100,-100,100);
   Graph_Graph3611->SetMinimum(0);
   Graph_Graph3611->SetMaximum(1.5);
   Graph_Graph3611->SetDirectory(0);
   Graph_Graph3611->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3611->SetLineColor(ci);
   Graph_Graph3611->GetXaxis()->SetRange(1,100);
   Graph_Graph3611->GetXaxis()->CenterTitle(true);
   Graph_Graph3611->GetXaxis()->SetLabelFont(42);
   Graph_Graph3611->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3611->GetXaxis()->SetTitleFont(42);
   Graph_Graph3611->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3611->GetYaxis()->CenterTitle(true);
   Graph_Graph3611->GetYaxis()->SetLabelFont(42);
   Graph_Graph3611->GetYaxis()->SetTitleFont(42);
   Graph_Graph3611->GetZaxis()->SetLabelFont(42);
   Graph_Graph3611->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3611->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3611);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.213793,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1832 = new TH2D("ThetaY_vs_Y_40_45__1832","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8133,19);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8159,500);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8185,1044);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8211,1152);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8237,1145);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8263,980);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8289,487);
   ThetaY_vs_Y_40_45__1832->SetBinContent(8315,14);
   ThetaY_vs_Y_40_45__1832->SetEntries(5341);
   ThetaY_vs_Y_40_45__1832->SetContour(20);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(1,57.6);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(2,115.2);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(3,172.8);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(4,230.4);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(5,288);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(6,345.6);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(7,403.2);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(8,460.8);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(9,518.4);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(10,576);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(11,633.6);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(12,691.2);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(13,748.8);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(14,806.4);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(15,864);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(16,921.6);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(17,979.2);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(18,1036.8);
   ThetaY_vs_Y_40_45__1832->SetContourLevel(19,1094.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1832->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1832->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1832->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1832->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1832->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1832->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1832->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1832->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1832->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1832->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1832->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1832->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1832->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1832->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1832->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1832->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_40_45","Reco vertices","lpf");
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
