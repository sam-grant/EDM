void S12S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:12 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06473325,125,1.229932);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__1866 = new TH1D("S12S18_ThetaY_5_10__1866","",630,-1575,1575);
   S12S18_ThetaY_5_10__1866->SetBinContent(312,0.0041841);
   S12S18_ThetaY_5_10__1866->SetBinContent(313,0.2761506);
   S12S18_ThetaY_5_10__1866->SetBinContent(314,0.7364017);
   S12S18_ThetaY_5_10__1866->SetBinContent(315,1);
   S12S18_ThetaY_5_10__1866->SetBinContent(316,0.9414226);
   S12S18_ThetaY_5_10__1866->SetBinContent(317,0.5690377);
   S12S18_ThetaY_5_10__1866->SetBinContent(318,0.0209205);
   S12S18_ThetaY_5_10__1866->SetBinError(312,0.0041841);
   S12S18_ThetaY_5_10__1866->SetBinError(313,0.03399179);
   S12S18_ThetaY_5_10__1866->SetBinError(314,0.05550836);
   S12S18_ThetaY_5_10__1866->SetBinError(315,0.06468462);
   S12S18_ThetaY_5_10__1866->SetBinError(316,0.06276151);
   S12S18_ThetaY_5_10__1866->SetBinError(317,0.04879458);
   S12S18_ThetaY_5_10__1866->SetBinError(318,0.009355933);
   S12S18_ThetaY_5_10__1866->SetMinimum(0);
   S12S18_ThetaY_5_10__1866->SetMaximum(1.100465);
   S12S18_ThetaY_5_10__1866->SetEntries(848);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1866->SetLineColor(ci);
   S12S18_ThetaY_5_10__1866->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1866->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__1866->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__1866->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__1866->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1866->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1866->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1866->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__1866->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__1866->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1866->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1866->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1866->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1866->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1866->Draw("AE");
   
   TH1D *ThetaY_5_10__1867 = new TH1D("ThetaY_5_10__1867","",630,-1575,1575);
   ThetaY_5_10__1867->SetBinContent(312,0.0206676);
   ThetaY_5_10__1867->SetBinContent(313,0.4210693);
   ThetaY_5_10__1867->SetBinContent(314,0.8450987);
   ThetaY_5_10__1867->SetBinContent(315,1);
   ThetaY_5_10__1867->SetBinContent(316,1.000423);
   ThetaY_5_10__1867->SetBinContent(317,0.8458123);
   ThetaY_5_10__1867->SetBinContent(318,0.4313238);
   ThetaY_5_10__1867->SetBinContent(319,0.01995401);
   ThetaY_5_10__1867->SetBinError(312,0.0007390719);
   ThetaY_5_10__1867->SetBinError(313,0.003335942);
   ThetaY_5_10__1867->SetBinError(314,0.004726018);
   ThetaY_5_10__1867->SetBinError(315,0.00514093);
   ThetaY_5_10__1867->SetBinError(316,0.005142016);
   ThetaY_5_10__1867->SetBinError(317,0.004728013);
   ThetaY_5_10__1867->SetBinError(318,0.003376318);
   ThetaY_5_10__1867->SetBinError(319,0.0007262009);
   ThetaY_5_10__1867->SetEntries(173458);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1867->SetLineColor(ci);
   ThetaY_5_10__1867->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1867->SetMarkerColor(ci);
   ThetaY_5_10__1867->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1867->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1867->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1867->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1867->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1867->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1867->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1867->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1867->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1867->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1867->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1867->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1867->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1867->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1867->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1867->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1867->Draw("AEsame");
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
   
   Double_t _fx3623[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3623[8] = {
   0.2024473,
   0.6558317,
   0.8713795,
   1,
   0.9410247,
   0.6727706,
   0.048503,
   0};
   Double_t _felx3623[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3623[8] = {
   0.1675146,
   0.08068644,
   0.06579962,
   0.06484237,
   0.06287359,
   0.05774004,
   0.02095297,
   0};
   Double_t _fehx3623[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3623[8] = {
   0.4665159,
   0.09128679,
   0.07096853,
   0.06919151,
   0.0672234,
   0.06292368,
   0.03282044,
   0.3865097};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3623,_fy3623,_felx3623,_fehx3623,_fely3623,_fehy3623);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3623 = new TH1F("Graph_Graph3623","",100,-100,100);
   Graph_Graph3623->SetMinimum(0);
   Graph_Graph3623->SetMaximum(1.5);
   Graph_Graph3623->SetDirectory(0);
   Graph_Graph3623->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3623->SetLineColor(ci);
   Graph_Graph3623->GetXaxis()->SetRange(1,100);
   Graph_Graph3623->GetXaxis()->CenterTitle(true);
   Graph_Graph3623->GetXaxis()->SetLabelFont(42);
   Graph_Graph3623->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3623->GetXaxis()->SetTitleFont(42);
   Graph_Graph3623->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3623->GetYaxis()->CenterTitle(true);
   Graph_Graph3623->GetYaxis()->SetLabelFont(42);
   Graph_Graph3623->GetYaxis()->SetTitleFont(42);
   Graph_Graph3623->GetZaxis()->SetLabelFont(42);
   Graph_Graph3623->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3623->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3623);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.100465,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1868 = new TH2D("ThetaY_vs_Y_5_10__1868","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8126,782);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8152,15932);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8178,31976);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8204,37837);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8230,37853);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8256,32003);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8282,16320);
   ThetaY_vs_Y_5_10__1868->SetBinContent(8308,755);
   ThetaY_vs_Y_5_10__1868->SetEntries(173458);
   ThetaY_vs_Y_5_10__1868->SetContour(20);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(1,1892.65);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(2,3785.3);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(3,5677.95);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(4,7570.6);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(5,9463.25);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(6,11355.9);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(7,13248.55);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(8,15141.2);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(9,17033.85);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(10,18926.5);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(11,20819.15);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(12,22711.8);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(13,24604.45);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(14,26497.1);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(15,28389.75);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(16,30282.4);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(17,32175.05);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(18,34067.7);
   ThetaY_vs_Y_5_10__1868->SetContourLevel(19,35960.35);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1868->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1868->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1868->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1868->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1868->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1868->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1868->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1868->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1868->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1868->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1868->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1868->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1868->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1868->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1868->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1868->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_5_10","Reco vertices","lpf");
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
