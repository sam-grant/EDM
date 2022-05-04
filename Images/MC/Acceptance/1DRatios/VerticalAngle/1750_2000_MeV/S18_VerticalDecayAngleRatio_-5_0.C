void S18_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06527858,125,1.240293);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI5_0__1290 = new TH1D("S18_ThetaY_mI5_0__1290","",630,-1575,1575);
   S18_ThetaY_mI5_0__1290->SetBinContent(311,0.04761905);
   S18_ThetaY_mI5_0__1290->SetBinContent(312,0.3630952);
   S18_ThetaY_mI5_0__1290->SetBinContent(313,0.7589286);
   S18_ThetaY_mI5_0__1290->SetBinContent(314,0.7916667);
   S18_ThetaY_mI5_0__1290->SetBinContent(315,0.8482143);
   S18_ThetaY_mI5_0__1290->SetBinContent(316,1);
   S18_ThetaY_mI5_0__1290->SetBinContent(317,0.7797619);
   S18_ThetaY_mI5_0__1290->SetBinContent(318,0.8303571);
   S18_ThetaY_mI5_0__1290->SetBinContent(319,0.5327381);
   S18_ThetaY_mI5_0__1290->SetBinContent(320,0.1577381);
   S18_ThetaY_mI5_0__1290->SetBinContent(321,0.005952381);
   S18_ThetaY_mI5_0__1290->SetBinError(311,0.01190476);
   S18_ThetaY_mI5_0__1290->SetBinError(312,0.0328731);
   S18_ThetaY_mI5_0__1290->SetBinError(313,0.04752595);
   S18_ThetaY_mI5_0__1290->SetBinError(314,0.0485402);
   S18_ThetaY_mI5_0__1290->SetBinError(315,0.05024388);
   S18_ThetaY_mI5_0__1290->SetBinError(316,0.05455447);
   S18_ThetaY_mI5_0__1290->SetBinError(317,0.04817385);
   S18_ThetaY_mI5_0__1290->SetBinError(318,0.04971218);
   S18_ThetaY_mI5_0__1290->SetBinError(319,0.03981871);
   S18_ThetaY_mI5_0__1290->SetBinError(320,0.02166699);
   S18_ThetaY_mI5_0__1290->SetBinError(321,0.004208969);
   S18_ThetaY_mI5_0__1290->SetMinimum(0);
   S18_ThetaY_mI5_0__1290->SetMaximum(1.109736);
   S18_ThetaY_mI5_0__1290->SetEntries(2055);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1290->SetLineColor(ci);
   S18_ThetaY_mI5_0__1290->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI5_0__1290->SetMarkerColor(ci);
   S18_ThetaY_mI5_0__1290->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI5_0__1290->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI5_0__1290->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1290->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1290->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1290->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI5_0__1290->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI5_0__1290->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1290->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1290->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI5_0__1290->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI5_0__1290->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI5_0__1290->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1291 = new TH1D("ThetaY_mI5_0__1291","",630,-1575,1575);
   ThetaY_mI5_0__1291->SetBinContent(309,0.0006948236);
   ThetaY_mI5_0__1291->SetBinContent(310,0.1474846);
   ThetaY_mI5_0__1291->SetBinContent(311,0.540308);
   ThetaY_mI5_0__1291->SetBinContent(312,0.7636276);
   ThetaY_mI5_0__1291->SetBinContent(313,0.8941552);
   ThetaY_mI5_0__1291->SetBinContent(314,0.969527);
   ThetaY_mI5_0__1291->SetBinContent(315,1.008851);
   ThetaY_mI5_0__1291->SetBinContent(316,1);
   ThetaY_mI5_0__1291->SetBinContent(317,0.9721243);
   ThetaY_mI5_0__1291->SetBinContent(318,0.8893411);
   ThetaY_mI5_0__1291->SetBinContent(319,0.767019);
   ThetaY_mI5_0__1291->SetBinContent(320,0.5318544);
   ThetaY_mI5_0__1291->SetBinContent(321,0.1496518);
   ThetaY_mI5_0__1291->SetBinContent(322,0.0006121065);
   ThetaY_mI5_0__1291->SetBinError(309,0.0001072136);
   ThetaY_mI5_0__1291->SetBinError(310,0.001562018);
   ThetaY_mI5_0__1291->SetBinError(311,0.002989739);
   ThetaY_mI5_0__1291->SetBinError(312,0.003554295);
   ThetaY_mI5_0__1291->SetBinError(313,0.003846087);
   ThetaY_mI5_0__1291->SetBinError(314,0.004004908);
   ThetaY_mI5_0__1291->SetBinError(315,0.00408532);
   ThetaY_mI5_0__1291->SetBinError(316,0.00406736);
   ThetaY_mI5_0__1291->SetBinError(317,0.004010269);
   ThetaY_mI5_0__1291->SetBinError(318,0.003835719);
   ThetaY_mI5_0__1291->SetBinError(319,0.003562179);
   ThetaY_mI5_0__1291->SetBinError(320,0.002966258);
   ThetaY_mI5_0__1291->SetBinError(321,0.001573452);
   ThetaY_mI5_0__1291->SetBinError(322,0.0001006297);
   ThetaY_mI5_0__1291->SetEntries(521975);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1291->SetLineColor(ci);
   ThetaY_mI5_0__1291->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1291->SetMarkerColor(ci);
   ThetaY_mI5_0__1291->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1291->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1291->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1291->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1291->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1291->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1291->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1291->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1291->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1291->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1291->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1291->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1291->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1291->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1291->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1291->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1291->Draw("AEsame");
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
   
   Double_t _fx3431[14] = {
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
   Double_t _fy3431[14] = {
   0,
   0,
   0.08813315,
   0.4754873,
   0.848766,
   0.8165494,
   0.8407728,
   1,
   0.8021216,
   0.9336768,
   0.6945565,
   0.2965814,
   0.03977488,
   0};
   Double_t _felx3431[14] = {
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
   Double_t _fely3431[14] = {
   0,
   0,
   0.02180588,
   0.04304586,
   0.05324162,
   0.0501474,
   0.04988965,
   0.05467824,
   0.04963349,
   0.05600855,
   0.05196456,
   0.04064249,
   0.02569267,
   0};
   Double_t _fehx3431[14] = {
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
   Double_t _fehy3431[14] = {
   8.061173,
   0.03715505,
   0.0280082,
   0.04713207,
   0.05669196,
   0.05332685,
   0.05294249,
   0.05775388,
   0.0528049,
   0.05947462,
   0.05600703,
   0.04663521,
   0.05247372,
   9.177874};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3431,_fy3431,_felx3431,_fehx3431,_fely3431,_fehy3431);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3431 = new TH1F("Graph_Graph3431","",100,-100,100);
   Graph_Graph3431->SetMinimum(0);
   Graph_Graph3431->SetMaximum(1.5);
   Graph_Graph3431->SetDirectory(0);
   Graph_Graph3431->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3431->SetLineColor(ci);
   Graph_Graph3431->GetXaxis()->SetRange(1,100);
   Graph_Graph3431->GetXaxis()->CenterTitle(true);
   Graph_Graph3431->GetXaxis()->SetLabelFont(42);
   Graph_Graph3431->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3431->GetXaxis()->SetTitleFont(42);
   Graph_Graph3431->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3431->GetYaxis()->CenterTitle(true);
   Graph_Graph3431->GetYaxis()->SetLabelFont(42);
   Graph_Graph3431->GetYaxis()->SetTitleFont(42);
   Graph_Graph3431->GetZaxis()->SetLabelFont(42);
   Graph_Graph3431->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3431->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3431);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.109736,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1292 = new TH2D("ThetaY_vs_Y_mI5_0__1292","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8046,42);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8072,8915);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8098,32660);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8124,46159);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8150,54049);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8176,58605);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8202,60982);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8228,60447);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8254,58762);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8280,53758);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8306,46364);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8332,32149);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8358,9046);
   ThetaY_vs_Y_mI5_0__1292->SetBinContent(8384,37);
   ThetaY_vs_Y_mI5_0__1292->SetEntries(521975);
   ThetaY_vs_Y_mI5_0__1292->SetContour(20);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(0,0);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(1,3049.1);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(2,6098.2);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(3,9147.3);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(4,12196.4);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(5,15245.5);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(6,18294.6);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(7,21343.7);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(8,24392.8);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(9,27441.9);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(10,30491);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(11,33540.1);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(12,36589.2);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(13,39638.3);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(14,42687.4);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(15,45736.5);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(16,48785.6);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(17,51834.7);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(18,54883.8);
   ThetaY_vs_Y_mI5_0__1292->SetContourLevel(19,57932.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1292->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1292->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1292->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1292->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1292->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1292->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1292->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1292->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1292->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1292->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1292->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1292->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1292->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1292->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1292->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1292->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-5_0","Reco vertices","lpf");
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
