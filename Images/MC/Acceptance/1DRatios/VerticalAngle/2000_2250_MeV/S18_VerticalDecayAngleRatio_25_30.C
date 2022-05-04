void S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_25_30__1479 = new TH1D("S18_ThetaY_25_30__1479","",630,-1575,1575);
   S18_ThetaY_25_30__1479->SetBinContent(311,0.1147541);
   S18_ThetaY_25_30__1479->SetBinContent(312,0.3606557);
   S18_ThetaY_25_30__1479->SetBinContent(313,0.5245902);
   S18_ThetaY_25_30__1479->SetBinContent(314,0.9180328);
   S18_ThetaY_25_30__1479->SetBinContent(315,1);
   S18_ThetaY_25_30__1479->SetBinContent(316,0.7213115);
   S18_ThetaY_25_30__1479->SetBinContent(317,0.1147541);
   S18_ThetaY_25_30__1479->SetBinError(311,0.04337297);
   S18_ThetaY_25_30__1479->SetBinError(312,0.07689206);
   S18_ThetaY_25_30__1479->SetBinError(313,0.09273532);
   S18_ThetaY_25_30__1479->SetBinError(314,0.1226773);
   S18_ThetaY_25_30__1479->SetBinError(315,0.1280369);
   S18_ThetaY_25_30__1479->SetBinError(316,0.1087418);
   S18_ThetaY_25_30__1479->SetBinError(317,0.04337297);
   S18_ThetaY_25_30__1479->SetMinimum(0);
   S18_ThetaY_25_30__1479->SetMaximum(1.1);
   S18_ThetaY_25_30__1479->SetEntries(229);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1479->SetLineColor(ci);
   S18_ThetaY_25_30__1479->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__1479->SetMarkerColor(ci);
   S18_ThetaY_25_30__1479->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__1479->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__1479->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1479->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1479->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1479->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__1479->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__1479->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1479->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1479->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__1479->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__1479->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__1479->Draw("AE");
   
   TH1D *ThetaY_25_30__1480 = new TH1D("ThetaY_25_30__1480","",630,-1575,1575);
   ThetaY_25_30__1480->SetBinContent(310,0.001841892);
   ThetaY_25_30__1480->SetBinContent(311,0.2074707);
   ThetaY_25_30__1480->SetBinContent(312,0.6089295);
   ThetaY_25_30__1480->SetBinContent(313,0.8133795);
   ThetaY_25_30__1480->SetBinContent(314,0.9526265);
   ThetaY_25_30__1480->SetBinContent(315,1);
   ThetaY_25_30__1480->SetBinContent(316,0.9983055);
   ThetaY_25_30__1480->SetBinContent(317,0.9421646);
   ThetaY_25_30__1480->SetBinContent(318,0.8308406);
   ThetaY_25_30__1480->SetBinContent(319,0.594047);
   ThetaY_25_30__1480->SetBinContent(320,0.2074707);
   ThetaY_25_30__1480->SetBinContent(321,0.001915568);
   ThetaY_25_30__1480->SetBinError(310,0.0003683784);
   ThetaY_25_30__1480->SetBinError(311,0.003909673);
   ThetaY_25_30__1480->SetBinError(312,0.006698007);
   ThetaY_25_30__1480->SetBinError(313,0.007741207);
   ThetaY_25_30__1480->SetBinError(314,0.008377673);
   ThetaY_25_30__1480->SetBinError(315,0.008583454);
   ThetaY_25_30__1480->SetBinError(316,0.008576178);
   ThetaY_25_30__1480->SetBinError(317,0.008331543);
   ThetaY_25_30__1480->SetBinError(318,0.007823858);
   ThetaY_25_30__1480->SetBinError(319,0.006615649);
   ThetaY_25_30__1480->SetBinError(320,0.003909673);
   ThetaY_25_30__1480->SetBinError(321,0.0003756737);
   ThetaY_25_30__1480->SetEntries(97169);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1480->SetLineColor(ci);
   ThetaY_25_30__1480->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1480->SetMarkerColor(ci);
   ThetaY_25_30__1480->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1480->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1480->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1480->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1480->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1480->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1480->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1480->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1480->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1480->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1480->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1480->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1480->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1480->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1480->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1480->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1480->Draw("AEsame");
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
   
   Double_t _fx3494[12] = {
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
   27.5};
   Double_t _fy3494[12] = {
   0,
   0.5531099,
   0.5922783,
   0.6449513,
   0.9636859,
   1,
   0.7225358,
   0.1217984,
   0,
   0,
   0,
   0};
   Double_t _felx3494[12] = {
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
   Double_t _fely3494[12] = {
   0,
   0.2041985,
   0.1254669,
   0.1135728,
   0.1286652,
   0.127967,
   0.108683,
   0.04492774,
   0,
   0,
   0,
   0};
   Double_t _fehx3494[12] = {
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
   Double_t _fehy3494[12] = {
   17.00411,
   0.298481,
   0.1553664,
   0.1355914,
   0.1471194,
   0.1455035,
   0.1264135,
   0.06562962,
   0.03632844,
   0.05081101,
   0.1455172,
   16.32669};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3494,_fy3494,_felx3494,_fehx3494,_fely3494,_fehy3494);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3494 = new TH1F("Graph_Graph3494","",100,-100,100);
   Graph_Graph3494->SetMinimum(0);
   Graph_Graph3494->SetMaximum(1.5);
   Graph_Graph3494->SetDirectory(0);
   Graph_Graph3494->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3494->SetLineColor(ci);
   Graph_Graph3494->GetXaxis()->SetRange(1,100);
   Graph_Graph3494->GetXaxis()->CenterTitle(true);
   Graph_Graph3494->GetXaxis()->SetLabelFont(42);
   Graph_Graph3494->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3494->GetXaxis()->SetTitleFont(42);
   Graph_Graph3494->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3494->GetYaxis()->CenterTitle(true);
   Graph_Graph3494->GetYaxis()->SetLabelFont(42);
   Graph_Graph3494->GetYaxis()->SetTitleFont(42);
   Graph_Graph3494->GetZaxis()->SetLabelFont(42);
   Graph_Graph3494->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3494->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3494);
   
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
   
   TH2D *ThetaY_vs_Y_25_30__1481 = new TH2D("ThetaY_vs_Y_25_30__1481","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8078,25);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8104,2816);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8130,8265);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8156,11040);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8182,12930);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8208,13573);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8234,13550);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8260,12788);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8286,11277);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8312,8063);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8338,2816);
   ThetaY_vs_Y_25_30__1481->SetBinContent(8364,26);
   ThetaY_vs_Y_25_30__1481->SetEntries(97169);
   ThetaY_vs_Y_25_30__1481->SetContour(20);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(1,678.65);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(2,1357.3);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(3,2035.95);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(4,2714.6);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(5,3393.25);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(6,4071.9);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(7,4750.55);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(8,5429.2);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(9,6107.85);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(10,6786.5);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(11,7465.15);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(12,8143.8);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(13,8822.45);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(14,9501.1);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(15,10179.75);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(16,10858.4);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(17,11537.05);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(18,12215.7);
   ThetaY_vs_Y_25_30__1481->SetContourLevel(19,12894.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1481->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1481->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1481->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1481->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1481->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1481->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1481->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1481->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1481->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1481->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1481->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1481->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1481->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1481->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1481->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1481->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
