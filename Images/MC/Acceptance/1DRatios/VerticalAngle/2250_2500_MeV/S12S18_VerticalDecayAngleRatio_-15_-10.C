void S12S18_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI15_mI10__1683 = new TH1D("S12S18_ThetaY_mI15_mI10__1683","",630,-1575,1575);
   S12S18_ThetaY_mI15_mI10__1683->SetBinContent(313,0.08988764);
   S12S18_ThetaY_mI15_mI10__1683->SetBinContent(314,1.033708);
   S12S18_ThetaY_mI15_mI10__1683->SetBinContent(315,1.382022);
   S12S18_ThetaY_mI15_mI10__1683->SetBinContent(316,1.393258);
   S12S18_ThetaY_mI15_mI10__1683->SetBinContent(317,1.123596);
   S12S18_ThetaY_mI15_mI10__1683->SetBinContent(318,1);
   S12S18_ThetaY_mI15_mI10__1683->SetBinContent(319,0.2640449);
   S12S18_ThetaY_mI15_mI10__1683->SetBinError(313,0.02247191);
   S12S18_ThetaY_mI15_mI10__1683->SetBinError(314,0.07620595);
   S12S18_ThetaY_mI15_mI10__1683->SetBinError(315,0.08811453);
   S12S18_ThetaY_mI15_mI10__1683->SetBinError(316,0.088472);
   S12S18_ThetaY_mI15_mI10__1683->SetBinError(317,0.0794502);
   S12S18_ThetaY_mI15_mI10__1683->SetBinError(318,0.07495317);
   S12S18_ThetaY_mI15_mI10__1683->SetBinError(319,0.03851491);
   S12S18_ThetaY_mI15_mI10__1683->SetMinimum(0);
   S12S18_ThetaY_mI15_mI10__1683->SetMaximum(1.551671);
   S12S18_ThetaY_mI15_mI10__1683->SetEntries(1119);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__1683->SetLineColor(ci);
   S12S18_ThetaY_mI15_mI10__1683->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__1683->SetMarkerColor(ci);
   S12S18_ThetaY_mI15_mI10__1683->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI15_mI10__1683->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI15_mI10__1683->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1683->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__1683->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1683->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI15_mI10__1683->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI15_mI10__1683->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1683->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1683->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1683->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__1683->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1683->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1684 = new TH1D("ThetaY_mI15_mI10__1684","",630,-1575,1575);
   ThetaY_mI15_mI10__1684->SetBinContent(311,0.0102359);
   ThetaY_mI15_mI10__1684->SetBinContent(312,0.4165535);
   ThetaY_mI15_mI10__1684->SetBinContent(313,1.004366);
   ThetaY_mI15_mI10__1684->SetBinContent(314,1.274645);
   ThetaY_mI15_mI10__1684->SetBinContent(315,1.388671);
   ThetaY_mI15_mI10__1684->SetBinContent(316,1.41061);
   ThetaY_mI15_mI10__1684->SetBinContent(317,1.275892);
   ThetaY_mI15_mI10__1684->SetBinContent(318,1);
   ThetaY_mI15_mI10__1684->SetBinContent(319,0.4274131);
   ThetaY_mI15_mI10__1684->SetBinContent(320,0.008511575);
   ThetaY_mI15_mI10__1684->SetBinError(311,0.0006128075);
   ThetaY_mI15_mI10__1684->SetBinError(312,0.003909277);
   ThetaY_mI15_mI10__1684->SetBinError(313,0.006070255);
   ThetaY_mI15_mI10__1684->SetBinError(314,0.006838417);
   ThetaY_mI15_mI10__1684->SetBinError(315,0.007137738);
   ThetaY_mI15_mI10__1684->SetBinError(316,0.007193901);
   ThetaY_mI15_mI10__1684->SetBinError(317,0.006841763);
   ThetaY_mI15_mI10__1684->SetBinError(318,0.006057047);
   ThetaY_mI15_mI10__1684->SetBinError(319,0.003959906);
   ThetaY_mI15_mI10__1684->SetBinError(320,0.0005588123);
   ThetaY_mI15_mI10__1684->SetEntries(223968);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1684->SetLineColor(ci);
   ThetaY_mI15_mI10__1684->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1684->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1684->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1684->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1684->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1684->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1684->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1684->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1684->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1684->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1684->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1684->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1684->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1684->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1684->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1684->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1684->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1684->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1684->Draw("AEsame");
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
   
   Double_t _fx3562[10] = {
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
   Double_t _fy3562[10] = {
   0,
   0,
   0.08949691,
   0.810977,
   0.9952125,
   0.9876992,
   0.880635,
   1,
   0.6177745,
   0};
   Double_t _felx3562[10] = {
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
   Double_t _fely3562[10] = {
   0,
   0,
   0.02214428,
   0.0598888,
   0.06361421,
   0.06287769,
   0.06239601,
   0.07512551,
   0.08996714,
   0};
   Double_t _fehx3562[10] = {
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
   Double_t _fehy3562[10] = {
   1.013786,
   0.02483152,
   0.02844336,
   0.06448548,
   0.06781826,
   0.06701562,
   0.06698367,
   0.08099605,
   0.1041397,
   1.219982};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3562,_fy3562,_felx3562,_fehx3562,_fely3562,_fehy3562);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3562 = new TH1F("Graph_Graph3562","",100,-100,100);
   Graph_Graph3562->SetMinimum(0);
   Graph_Graph3562->SetMaximum(1.5);
   Graph_Graph3562->SetDirectory(0);
   Graph_Graph3562->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3562->SetLineColor(ci);
   Graph_Graph3562->GetXaxis()->SetRange(1,100);
   Graph_Graph3562->GetXaxis()->CenterTitle(true);
   Graph_Graph3562->GetXaxis()->SetLabelFont(42);
   Graph_Graph3562->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3562->GetXaxis()->SetTitleFont(42);
   Graph_Graph3562->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3562->GetYaxis()->CenterTitle(true);
   Graph_Graph3562->GetYaxis()->SetLabelFont(42);
   Graph_Graph3562->GetYaxis()->SetTitleFont(42);
   Graph_Graph3562->GetZaxis()->SetLabelFont(42);
   Graph_Graph3562->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3562->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3562);
   
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1685 = new TH2D("ThetaY_vs_Y_mI15_mI10__1685","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8096,279);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8122,11354);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8148,27376);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8174,34743);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8200,37851);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8226,38449);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8252,34777);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8278,27257);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8304,11650);
   ThetaY_vs_Y_mI15_mI10__1685->SetBinContent(8330,232);
   ThetaY_vs_Y_mI15_mI10__1685->SetEntries(223968);
   ThetaY_vs_Y_mI15_mI10__1685->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(1,1922.45);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(2,3844.9);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(3,5767.35);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(4,7689.8);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(5,9612.25);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(6,11534.7);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(7,13457.15);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(8,15379.6);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(9,17302.05);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(10,19224.5);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(11,21146.95);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(12,23069.4);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(13,24991.85);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(14,26914.3);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(15,28836.75);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(16,30759.2);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(17,32681.65);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(18,34604.1);
   ThetaY_vs_Y_mI15_mI10__1685->SetContourLevel(19,36526.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1685->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1685->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1685->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1685->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1685->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1685->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1685->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1685->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1685->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1685->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1685->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1685->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1685->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1685->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1685->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1685->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-15_-10","Reco vertices","lpf");
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
