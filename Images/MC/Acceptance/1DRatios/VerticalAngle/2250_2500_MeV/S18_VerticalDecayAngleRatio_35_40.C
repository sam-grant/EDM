void S18_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.0914009,125,1.736617);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_35_40__1656 = new TH1D("S18_ThetaY_35_40__1656","",630,-1575,1575);
   S18_ThetaY_35_40__1656->SetBinContent(312,0.25);
   S18_ThetaY_35_40__1656->SetBinContent(313,1);
   S18_ThetaY_35_40__1656->SetBinContent(314,1.125);
   S18_ThetaY_35_40__1656->SetBinContent(315,1.375);
   S18_ThetaY_35_40__1656->SetBinContent(316,0.375);
   S18_ThetaY_35_40__1656->SetBinError(312,0.1767767);
   S18_ThetaY_35_40__1656->SetBinError(313,0.3535534);
   S18_ThetaY_35_40__1656->SetBinError(314,0.375);
   S18_ThetaY_35_40__1656->SetBinError(315,0.4145781);
   S18_ThetaY_35_40__1656->SetBinError(316,0.2165064);
   S18_ThetaY_35_40__1656->SetMinimum(0);
   S18_ThetaY_35_40__1656->SetMaximum(1.553815);
   S18_ThetaY_35_40__1656->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1656->SetLineColor(ci);
   S18_ThetaY_35_40__1656->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1656->SetMarkerColor(ci);
   S18_ThetaY_35_40__1656->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__1656->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__1656->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1656->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1656->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1656->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__1656->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__1656->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1656->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1656->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1656->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1656->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1656->Draw("AE");
   
   TH1D *ThetaY_35_40__1657 = new TH1D("ThetaY_35_40__1657","",630,-1575,1575);
   ThetaY_35_40__1657->SetBinContent(311,0.01022271);
   ThetaY_35_40__1657->SetBinContent(312,0.4355604);
   ThetaY_35_40__1657->SetBinContent(313,1);
   ThetaY_35_40__1657->SetBinContent(314,1.273457);
   ThetaY_35_40__1657->SetBinContent(315,1.412559);
   ThetaY_35_40__1657->SetBinContent(316,1.3954);
   ThetaY_35_40__1657->SetBinContent(317,1.323841);
   ThetaY_35_40__1657->SetBinContent(318,0.996349);
   ThetaY_35_40__1657->SetBinContent(319,0.4070829);
   ThetaY_35_40__1657->SetBinContent(320,0.007301935);
   ThetaY_35_40__1657->SetBinError(311,0.00193191);
   ThetaY_35_40__1657->SetBinError(312,0.01261038);
   ThetaY_35_40__1657->SetBinError(313,0.01910751);
   ThetaY_35_40__1657->SetBinError(314,0.02156236);
   ThetaY_35_40__1657->SetBinError(315,0.02270949);
   ThetaY_35_40__1657->SetBinError(316,0.02257113);
   ThetaY_35_40__1657->SetBinError(317,0.02198477);
   ThetaY_35_40__1657->SetBinError(318,0.01907259);
   ThetaY_35_40__1657->SetBinError(319,0.01219117);
   ThetaY_35_40__1657->SetBinError(320,0.001632762);
   ThetaY_35_40__1657->SetEntries(22629);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1657->SetLineColor(ci);
   ThetaY_35_40__1657->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1657->SetMarkerColor(ci);
   ThetaY_35_40__1657->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1657->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1657->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1657->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1657->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1657->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1657->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1657->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1657->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1657->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1657->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1657->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1657->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1657->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1657->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1657->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1657->Draw("AEsame");
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
   
   Double_t _fx3553[10] = {
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
   Double_t _fy3553[10] = {
   0,
   0.5739732,
   1,
   0.8834217,
   0.9734104,
   0.2687402,
   0,
   0,
   0,
   0};
   Double_t _felx3553[10] = {
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
   Double_t _fely3553[10] = {
   0,
   0.3709285,
   0.3464976,
   0.2892599,
   0.2893541,
   0.1463,
   0,
   0,
   0,
   0};
   Double_t _fehx3553[10] = {
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
   Double_t _fehy3553[10] = {
   23.26798,
   0.7585025,
   0.4942179,
   0.4042074,
   0.3916046,
   0.2616137,
   0.1738775,
   0.2310489,
   0.5657762,
   33.01208};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3553,_fy3553,_felx3553,_fehx3553,_fely3553,_fehy3553);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3553 = new TH1F("Graph_Graph3553","",100,-100,100);
   Graph_Graph3553->SetMinimum(0);
   Graph_Graph3553->SetMaximum(1.5);
   Graph_Graph3553->SetDirectory(0);
   Graph_Graph3553->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3553->SetLineColor(ci);
   Graph_Graph3553->GetXaxis()->SetRange(1,100);
   Graph_Graph3553->GetXaxis()->CenterTitle(true);
   Graph_Graph3553->GetXaxis()->SetLabelFont(42);
   Graph_Graph3553->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3553->GetXaxis()->SetTitleFont(42);
   Graph_Graph3553->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3553->GetYaxis()->CenterTitle(true);
   Graph_Graph3553->GetYaxis()->SetLabelFont(42);
   Graph_Graph3553->GetYaxis()->SetTitleFont(42);
   Graph_Graph3553->GetZaxis()->SetLabelFont(42);
   Graph_Graph3553->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3553->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3553);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.553815,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1658 = new TH2D("ThetaY_vs_Y_35_40__1658","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8106,28);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8132,1193);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8158,2739);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8184,3488);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8210,3869);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8236,3822);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8262,3626);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8288,2729);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8314,1115);
   ThetaY_vs_Y_35_40__1658->SetBinContent(8340,20);
   ThetaY_vs_Y_35_40__1658->SetEntries(22629);
   ThetaY_vs_Y_35_40__1658->SetContour(20);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(1,193.45);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(2,386.9);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(3,580.35);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(4,773.8);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(5,967.25);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(6,1160.7);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(7,1354.15);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(8,1547.6);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(9,1741.05);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(10,1934.5);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(11,2127.95);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(12,2321.4);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(13,2514.85);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(14,2708.3);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(15,2901.75);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(16,3095.2);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(17,3288.65);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(18,3482.1);
   ThetaY_vs_Y_35_40__1658->SetContourLevel(19,3675.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1658->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1658->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1658->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1658->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1658->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1658->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1658->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1658->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1658->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1658->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1658->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1658->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1658->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1658->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1658->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1658->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_35_40","Reco vertices","lpf");
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
