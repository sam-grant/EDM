void S12S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:08 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06620852,125,1.257962);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__1677 = new TH1D("S12S18_ThetaY_mI25_mI20__1677","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__1677->SetBinContent(314,0.2971014);
   S12S18_ThetaY_mI25_mI20__1677->SetBinContent(315,1);
   S12S18_ThetaY_mI25_mI20__1677->SetBinContent(316,0.8623188);
   S12S18_ThetaY_mI25_mI20__1677->SetBinContent(317,0.7826087);
   S12S18_ThetaY_mI25_mI20__1677->SetBinContent(318,0.6521739);
   S12S18_ThetaY_mI25_mI20__1677->SetBinContent(319,0.2101449);
   S12S18_ThetaY_mI25_mI20__1677->SetBinError(314,0.04639945);
   S12S18_ThetaY_mI25_mI20__1677->SetBinError(315,0.08512565);
   S12S18_ThetaY_mI25_mI20__1677->SetBinError(316,0.07904864);
   S12S18_ThetaY_mI25_mI20__1677->SetBinError(317,0.07530656);
   S12S18_ThetaY_mI25_mI20__1677->SetBinError(318,0.06874517);
   S12S18_ThetaY_mI25_mI20__1677->SetBinError(319,0.03902293);
   S12S18_ThetaY_mI25_mI20__1677->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__1677->SetMaximum(1.125545);
   S12S18_ThetaY_mI25_mI20__1677->SetEntries(525);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1677->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__1677->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__1677->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__1677->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__1677->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__1677->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1677->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1677->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1677->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__1677->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__1677->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1677->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1677->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__1677->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__1677->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__1677->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1678 = new TH1D("ThetaY_mI25_mI20__1678","",630,-1575,1575);
   ThetaY_mI25_mI20__1678->SetBinContent(311,0.005686045);
   ThetaY_mI25_mI20__1678->SetBinContent(312,0.306515);
   ThetaY_mI25_mI20__1678->SetBinContent(313,0.726379);
   ThetaY_mI25_mI20__1678->SetBinContent(314,0.91269);
   ThetaY_mI25_mI20__1678->SetBinContent(315,1);
   ThetaY_mI25_mI20__1678->SetBinContent(316,1.023222);
   ThetaY_mI25_mI20__1678->SetBinContent(317,0.9249655);
   ThetaY_mI25_mI20__1678->SetBinContent(318,0.7244659);
   ThetaY_mI25_mI20__1678->SetBinContent(319,0.2991285);
   ThetaY_mI25_mI20__1678->SetBinContent(320,0.00611117);
   ThetaY_mI25_mI20__1678->SetBinError(311,0.0005496907);
   ThetaY_mI25_mI20__1678->SetBinError(312,0.004035889);
   ThetaY_mI25_mI20__1678->SetBinError(313,0.006212908);
   ThetaY_mI25_mI20__1678->SetBinError(314,0.006964259);
   ThetaY_mI25_mI20__1678->SetBinError(315,0.007289761);
   ThetaY_mI25_mI20__1678->SetBinError(316,0.007373918);
   ThetaY_mI25_mI20__1678->SetBinError(317,0.007010936);
   ThetaY_mI25_mI20__1678->SetBinError(318,0.006204721);
   ThetaY_mI25_mI20__1678->SetBinError(319,0.003986963);
   ThetaY_mI25_mI20__1678->SetBinError(320,0.0005698696);
   ThetaY_mI25_mI20__1678->SetEntries(111575);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1678->SetLineColor(ci);
   ThetaY_mI25_mI20__1678->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1678->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1678->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1678->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1678->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1678->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1678->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1678->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1678->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1678->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1678->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1678->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1678->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1678->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1678->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1678->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1678->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1678->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1678->Draw("AEsame");
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
   
   Double_t _fx3560[10] = {
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
   Double_t _fy3560[10] = {
   0,
   0,
   0,
   0.3255229,
   1,
   0.8427482,
   0.846095,
   0.9002134,
   0.7025239,
   0};
   Double_t _felx3560[10] = {
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
   Double_t _fely3560[10] = {
   0,
   0,
   0,
   0.0506889,
   0.08533141,
   0.077382,
   0.08153885,
   0.09502297,
   0.1300216,
   0};
   Double_t _fehx3560[10] = {
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
   Double_t _fehy3560[10] = {
   2.366525,
   0.04353087,
   0.01836732,
   0.05927452,
   0.09294815,
   0.08484024,
   0.0898079,
   0.1056324,
   0.1566702,
   2.200576};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3560,_fy3560,_felx3560,_fehx3560,_fely3560,_fehy3560);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3560 = new TH1F("Graph_Graph3560","",100,-100,100);
   Graph_Graph3560->SetMinimum(0);
   Graph_Graph3560->SetMaximum(1.5);
   Graph_Graph3560->SetDirectory(0);
   Graph_Graph3560->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3560->SetLineColor(ci);
   Graph_Graph3560->GetXaxis()->SetRange(1,100);
   Graph_Graph3560->GetXaxis()->CenterTitle(true);
   Graph_Graph3560->GetXaxis()->SetLabelFont(42);
   Graph_Graph3560->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3560->GetXaxis()->SetTitleFont(42);
   Graph_Graph3560->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3560->GetYaxis()->CenterTitle(true);
   Graph_Graph3560->GetYaxis()->SetLabelFont(42);
   Graph_Graph3560->GetYaxis()->SetTitleFont(42);
   Graph_Graph3560->GetZaxis()->SetLabelFont(42);
   Graph_Graph3560->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3560->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3560);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.125545,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1679 = new TH2D("ThetaY_vs_Y_mI25_mI20__1679","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8094,107);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8120,5768);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8146,13669);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8172,17175);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8198,18818);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8224,19255);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8250,17406);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8276,13633);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8302,5629);
   ThetaY_vs_Y_mI25_mI20__1679->SetBinContent(8328,115);
   ThetaY_vs_Y_mI25_mI20__1679->SetEntries(111575);
   ThetaY_vs_Y_mI25_mI20__1679->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(1,962.75);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(2,1925.5);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(3,2888.25);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(4,3851);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(5,4813.75);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(6,5776.5);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(7,6739.25);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(8,7702);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(9,8664.75);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(10,9627.5);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(11,10590.25);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(12,11553);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(13,12515.75);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(14,13478.5);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(15,14441.25);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(16,15404);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(17,16366.75);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(18,17329.5);
   ThetaY_vs_Y_mI25_mI20__1679->SetContourLevel(19,18292.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1679->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1679->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1679->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1679->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1679->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1679->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1679->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1679->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1679->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1679->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1679->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1679->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1679->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1679->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1679->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1679->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
