void S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:00 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07363676,125,1.399098);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__1305 = new TH1D("S18_ThetaY_20_25__1305","",630,-1575,1575);
   S18_ThetaY_20_25__1305->SetBinContent(310,0.1259843);
   S18_ThetaY_20_25__1305->SetBinContent(311,0.5275591);
   S18_ThetaY_20_25__1305->SetBinContent(312,0.6850394);
   S18_ThetaY_20_25__1305->SetBinContent(313,1);
   S18_ThetaY_20_25__1305->SetBinContent(314,0.9448819);
   S18_ThetaY_20_25__1305->SetBinContent(315,0.9685039);
   S18_ThetaY_20_25__1305->SetBinContent(316,0.8503937);
   S18_ThetaY_20_25__1305->SetBinContent(317,0.6377953);
   S18_ThetaY_20_25__1305->SetBinContent(318,0.03937008);
   S18_ThetaY_20_25__1305->SetBinError(310,0.03149606);
   S18_ThetaY_20_25__1305->SetBinError(311,0.0644516);
   S18_ThetaY_20_25__1305->SetBinError(312,0.07344393);
   S18_ThetaY_20_25__1305->SetBinError(313,0.08873565);
   S18_ThetaY_20_25__1305->SetBinError(314,0.08625552);
   S18_ThetaY_20_25__1305->SetBinError(315,0.08732706);
   S18_ThetaY_20_25__1305->SetBinError(316,0.08182917);
   S18_ThetaY_20_25__1305->SetBinError(317,0.07086614);
   S18_ThetaY_20_25__1305->SetBinError(318,0.01760683);
   S18_ThetaY_20_25__1305->SetMinimum(0);
   S18_ThetaY_20_25__1305->SetMaximum(1.251825);
   S18_ThetaY_20_25__1305->SetEntries(734);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1305->SetLineColor(ci);
   S18_ThetaY_20_25__1305->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1305->SetMarkerColor(ci);
   S18_ThetaY_20_25__1305->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__1305->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__1305->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1305->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1305->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1305->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__1305->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__1305->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1305->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1305->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1305->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1305->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1305->Draw("AE");
   
   TH1D *ThetaY_20_25__1306 = new TH1D("ThetaY_20_25__1306","",630,-1575,1575);
   ThetaY_20_25__1306->SetBinContent(309,0.0009011264);
   ThetaY_20_25__1306->SetBinContent(310,0.1653066);
   ThetaY_20_25__1306->SetBinContent(311,0.614368);
   ThetaY_20_25__1306->SetBinContent(312,0.8585732);
   ThetaY_20_25__1306->SetBinContent(313,1);
   ThetaY_20_25__1306->SetBinContent(314,1.099474);
   ThetaY_20_25__1306->SetBinContent(315,1.117196);
   ThetaY_20_25__1306->SetBinContent(316,1.138023);
   ThetaY_20_25__1306->SetBinContent(317,1.10378);
   ThetaY_20_25__1306->SetBinContent(318,1.013166);
   ThetaY_20_25__1306->SetBinContent(319,0.8537672);
   ThetaY_20_25__1306->SetBinContent(320,0.5999499);
   ThetaY_20_25__1306->SetBinContent(321,0.1592991);
   ThetaY_20_25__1306->SetBinContent(322,0.0005506884);
   ThetaY_20_25__1306->SetBinError(309,0.0002123975);
   ThetaY_20_25__1306->SetBinError(310,0.002876748);
   ThetaY_20_25__1306->SetBinError(311,0.005545885);
   ThetaY_20_25__1306->SetBinError(312,0.006556096);
   ThetaY_20_25__1306->SetBinError(313,0.007075491);
   ThetaY_20_25__1306->SetBinError(314,0.007419065);
   ThetaY_20_25__1306->SetBinError(315,0.007478619);
   ThetaY_20_25__1306->SetBinError(316,0.007548003);
   ThetaY_20_25__1306->SetBinError(317,0.007433576);
   ThetaY_20_25__1306->SetBinError(318,0.007121919);
   ThetaY_20_25__1306->SetBinError(319,0.00653772);
   ThetaY_20_25__1306->SetBinError(320,0.005480423);
   ThetaY_20_25__1306->SetBinError(321,0.002823991);
   ThetaY_20_25__1306->SetBinError(322,0.0001660388);
   ThetaY_20_25__1306->SetEntries(194244);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1306->SetLineColor(ci);
   ThetaY_20_25__1306->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1306->SetMarkerColor(ci);
   ThetaY_20_25__1306->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1306->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1306->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1306->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1306->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1306->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1306->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1306->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1306->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1306->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1306->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1306->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1306->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1306->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1306->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1306->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1306->Draw("AEsame");
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
   
   Double_t _fx3436[14] = {
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
   32.5};
   Double_t _fy3436[14] = {
   0,
   0.7621246,
   0.8587021,
   0.7978811,
   1,
   0.8593942,
   0.8669056,
   0.7472556,
   0.5778284,
   0.03885845,
   0,
   0,
   0,
   0};
   Double_t _felx3436[14] = {
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
   Double_t _fely3436[14] = {
   0,
   0.1889511,
   0.1049258,
   0.085591,
   0.08889782,
   0.07855417,
   0.07827301,
   0.07196205,
   0.06418653,
   0.01678617,
   0,
   0,
   0,
   0};
   Double_t _fehx3436[14] = {
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
   Double_t _fehy3436[14] = {
   16.93824,
   0.2428931,
   0.1186127,
   0.0953104,
   0.09718001,
   0.08608895,
   0.08568461,
   0.07925329,
   0.07174897,
   0.02629297,
   0.01698006,
   0.02416426,
   0.09102641,
   28.65491};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3436,_fy3436,_felx3436,_fehx3436,_fely3436,_fehy3436);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3436 = new TH1F("Graph_Graph3436","",100,-100,100);
   Graph_Graph3436->SetMinimum(0);
   Graph_Graph3436->SetMaximum(1.5);
   Graph_Graph3436->SetDirectory(0);
   Graph_Graph3436->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3436->SetLineColor(ci);
   Graph_Graph3436->GetXaxis()->SetRange(1,100);
   Graph_Graph3436->GetXaxis()->CenterTitle(true);
   Graph_Graph3436->GetXaxis()->SetLabelFont(42);
   Graph_Graph3436->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3436->GetXaxis()->SetTitleFont(42);
   Graph_Graph3436->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3436->GetYaxis()->CenterTitle(true);
   Graph_Graph3436->GetYaxis()->SetLabelFont(42);
   Graph_Graph3436->GetYaxis()->SetTitleFont(42);
   Graph_Graph3436->GetZaxis()->SetLabelFont(42);
   Graph_Graph3436->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3436->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3436);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.251825,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1307 = new TH2D("ThetaY_vs_Y_20_25__1307","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8051,18);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8077,3302);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8103,12272);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8129,17150);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8155,19975);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8181,21962);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8207,22316);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8233,22732);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8259,22048);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8285,20238);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8311,17054);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8337,11984);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8363,3182);
   ThetaY_vs_Y_20_25__1307->SetBinContent(8389,11);
   ThetaY_vs_Y_20_25__1307->SetEntries(194244);
   ThetaY_vs_Y_20_25__1307->SetContour(20);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(1,1136.6);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(2,2273.2);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(3,3409.8);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(4,4546.4);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(5,5683);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(6,6819.6);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(7,7956.2);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(8,9092.8);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(9,10229.4);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(10,11366);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(11,12502.6);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(12,13639.2);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(13,14775.8);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(14,15912.4);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(15,17049);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(16,18185.6);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(17,19322.2);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(18,20458.8);
   ThetaY_vs_Y_20_25__1307->SetContourLevel(19,21595.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1307->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1307->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1307->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1307->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1307->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1307->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1307->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1307->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1307->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1307->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1307->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1307->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1307->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1307->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1307->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1307->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
