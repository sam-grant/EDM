void S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.09127478,125,1.734221);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI15_mI10__1626 = new TH1D("S18_ThetaY_mI15_mI10__1626","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__1626->SetBinContent(313,0.1046512);
   S18_ThetaY_mI15_mI10__1626->SetBinContent(314,1.05814);
   S18_ThetaY_mI15_mI10__1626->SetBinContent(315,1.383721);
   S18_ThetaY_mI15_mI10__1626->SetBinContent(316,1.383721);
   S18_ThetaY_mI15_mI10__1626->SetBinContent(317,1.069767);
   S18_ThetaY_mI15_mI10__1626->SetBinContent(318,1);
   S18_ThetaY_mI15_mI10__1626->SetBinContent(319,0.244186);
   S18_ThetaY_mI15_mI10__1626->SetBinError(313,0.03488372);
   S18_ThetaY_mI15_mI10__1626->SetBinError(314,0.1109232);
   S18_ThetaY_mI15_mI10__1626->SetBinError(315,0.1268455);
   S18_ThetaY_mI15_mI10__1626->SetBinError(316,0.1268455);
   S18_ThetaY_mI15_mI10__1626->SetBinError(317,0.111531);
   S18_ThetaY_mI15_mI10__1626->SetBinError(318,0.1078328);
   S18_ThetaY_mI15_mI10__1626->SetBinError(319,0.05328576);
   S18_ThetaY_mI15_mI10__1626->SetMinimum(0);
   S18_ThetaY_mI15_mI10__1626->SetMaximum(1.551671);
   S18_ThetaY_mI15_mI10__1626->SetEntries(537);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1626->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__1626->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1626->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__1626->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__1626->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__1626->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1626->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1626->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1626->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__1626->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__1626->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1626->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1626->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1626->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1626->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1626->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1627 = new TH1D("ThetaY_mI15_mI10__1627","",630,-1575,1575);
   ThetaY_mI15_mI10__1627->SetBinContent(311,0.0102359);
   ThetaY_mI15_mI10__1627->SetBinContent(312,0.4165535);
   ThetaY_mI15_mI10__1627->SetBinContent(313,1.004366);
   ThetaY_mI15_mI10__1627->SetBinContent(314,1.274645);
   ThetaY_mI15_mI10__1627->SetBinContent(315,1.388671);
   ThetaY_mI15_mI10__1627->SetBinContent(316,1.41061);
   ThetaY_mI15_mI10__1627->SetBinContent(317,1.275892);
   ThetaY_mI15_mI10__1627->SetBinContent(318,1);
   ThetaY_mI15_mI10__1627->SetBinContent(319,0.4274131);
   ThetaY_mI15_mI10__1627->SetBinContent(320,0.008511575);
   ThetaY_mI15_mI10__1627->SetBinError(311,0.0006128075);
   ThetaY_mI15_mI10__1627->SetBinError(312,0.003909277);
   ThetaY_mI15_mI10__1627->SetBinError(313,0.006070255);
   ThetaY_mI15_mI10__1627->SetBinError(314,0.006838417);
   ThetaY_mI15_mI10__1627->SetBinError(315,0.007137738);
   ThetaY_mI15_mI10__1627->SetBinError(316,0.007193901);
   ThetaY_mI15_mI10__1627->SetBinError(317,0.006841763);
   ThetaY_mI15_mI10__1627->SetBinError(318,0.006057047);
   ThetaY_mI15_mI10__1627->SetBinError(319,0.003959906);
   ThetaY_mI15_mI10__1627->SetBinError(320,0.0005588123);
   ThetaY_mI15_mI10__1627->SetEntries(223968);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1627->SetLineColor(ci);
   ThetaY_mI15_mI10__1627->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1627->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1627->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1627->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1627->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1627->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1627->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1627->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1627->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1627->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1627->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1627->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1627->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1627->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1627->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1627->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1627->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1627->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1627->Draw("AEsame");
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
   
   Double_t _fx3543[10] = {
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
   Double_t _fy3543[10] = {
   0,
   0,
   0.1041963,
   0.8301445,
   0.9964355,
   0.9809379,
   0.8384464,
   1,
   0.5713115,
   0};
   Double_t _felx3543[10] = {
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
   Double_t _fely3543[10] = {
   0,
   0,
   0.03408256,
   0.08697509,
   0.09135672,
   0.08993366,
   0.08736907,
   0.1077905,
   0.1237766,
   0};
   Double_t _fehx3543[10] = {
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
   Double_t _fehy3543[10] = {
   2.098302,
   0.05139547,
   0.04759671,
   0.09660521,
   0.1001454,
   0.09858518,
   0.09698742,
   0.1200906,
   0.1540269,
   2.525078};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3543,_fy3543,_felx3543,_fehx3543,_fely3543,_fehy3543);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3543 = new TH1F("Graph_Graph3543","",100,-100,100);
   Graph_Graph3543->SetMinimum(0);
   Graph_Graph3543->SetMaximum(1.5);
   Graph_Graph3543->SetDirectory(0);
   Graph_Graph3543->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3543->SetLineColor(ci);
   Graph_Graph3543->GetXaxis()->SetRange(1,100);
   Graph_Graph3543->GetXaxis()->CenterTitle(true);
   Graph_Graph3543->GetXaxis()->SetLabelFont(42);
   Graph_Graph3543->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3543->GetXaxis()->SetTitleFont(42);
   Graph_Graph3543->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3543->GetYaxis()->CenterTitle(true);
   Graph_Graph3543->GetYaxis()->SetLabelFont(42);
   Graph_Graph3543->GetYaxis()->SetTitleFont(42);
   Graph_Graph3543->GetZaxis()->SetLabelFont(42);
   Graph_Graph3543->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3543->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3543);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.551671,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1628 = new TH2D("ThetaY_vs_Y_mI15_mI10__1628","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8096,279);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8122,11354);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8148,27376);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8174,34743);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8200,37851);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8226,38449);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8252,34777);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8278,27257);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8304,11650);
   ThetaY_vs_Y_mI15_mI10__1628->SetBinContent(8330,232);
   ThetaY_vs_Y_mI15_mI10__1628->SetEntries(223968);
   ThetaY_vs_Y_mI15_mI10__1628->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(1,1922.45);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(2,3844.9);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(3,5767.35);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(4,7689.8);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(5,9612.25);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(6,11534.7);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(7,13457.15);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(8,15379.6);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(9,17302.05);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(10,19224.5);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(11,21146.95);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(12,23069.4);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(13,24991.85);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(14,26914.3);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(15,28836.75);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(16,30759.2);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(17,32681.65);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(18,34604.1);
   ThetaY_vs_Y_mI15_mI10__1628->SetContourLevel(19,36526.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1628->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1628->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1628->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1628->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1628->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1628->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1628->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1628->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1628->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1628->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1628->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1628->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1628->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1628->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1628->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1628->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-15_-10","Reco vertices","lpf");
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
