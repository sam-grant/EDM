void S12S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:13 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-2.92128,125,55.50433);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_35_40__1884 = new TH1D("S12S18_ThetaY_35_40__1884","",630,-1575,1575);
   S12S18_ThetaY_35_40__1884->SetBinContent(312,1);
   S12S18_ThetaY_35_40__1884->SetBinContent(313,8);
   S12S18_ThetaY_35_40__1884->SetBinContent(314,15);
   S12S18_ThetaY_35_40__1884->SetBinContent(315,16);
   S12S18_ThetaY_35_40__1884->SetBinContent(316,3);
   S12S18_ThetaY_35_40__1884->SetBinContent(317,1);
   S12S18_ThetaY_35_40__1884->SetBinError(312,1);
   S12S18_ThetaY_35_40__1884->SetBinError(313,2.828427);
   S12S18_ThetaY_35_40__1884->SetBinError(314,3.872983);
   S12S18_ThetaY_35_40__1884->SetBinError(315,4);
   S12S18_ThetaY_35_40__1884->SetBinError(316,1.732051);
   S12S18_ThetaY_35_40__1884->SetBinError(317,1);
   S12S18_ThetaY_35_40__1884->SetMinimum(0);
   S12S18_ThetaY_35_40__1884->SetMaximum(49.66176);
   S12S18_ThetaY_35_40__1884->SetEntries(44);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1884->SetLineColor(ci);
   S12S18_ThetaY_35_40__1884->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1884->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__1884->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__1884->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__1884->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1884->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1884->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1884->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__1884->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__1884->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1884->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1884->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1884->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1884->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1884->Draw("AE");
   
   TH1D *ThetaY_35_40__1885 = new TH1D("ThetaY_35_40__1885","",630,-1575,1575);
   ThetaY_35_40__1885->SetBinContent(312,1);
   ThetaY_35_40__1885->SetBinContent(313,19.36765);
   ThetaY_35_40__1885->SetBinContent(314,39.07353);
   ThetaY_35_40__1885->SetBinContent(315,45.14706);
   ThetaY_35_40__1885->SetBinContent(316,44.19118);
   ThetaY_35_40__1885->SetBinContent(317,38.89706);
   ThetaY_35_40__1885->SetBinContent(318,19.61765);
   ThetaY_35_40__1885->SetBinContent(319,0.6911765);
   ThetaY_35_40__1885->SetBinError(312,0.1212678);
   ThetaY_35_40__1885->SetBinError(313,0.5336837);
   ThetaY_35_40__1885->SetBinError(314,0.7580308);
   ThetaY_35_40__1885->SetBinError(315,0.8148174);
   ThetaY_35_40__1885->SetBinError(316,0.8061453);
   ThetaY_35_40__1885->SetBinError(317,0.7563171);
   ThetaY_35_40__1885->SetBinError(318,0.5371171);
   ThetaY_35_40__1885->SetBinError(319,0.1008185);
   ThetaY_35_40__1885->SetEntries(14143);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1885->SetLineColor(ci);
   ThetaY_35_40__1885->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1885->SetMarkerColor(ci);
   ThetaY_35_40__1885->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1885->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1885->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1885->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1885->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1885->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1885->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1885->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1885->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1885->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1885->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1885->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1885->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1885->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1885->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1885->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1885->Draw("AEsame");
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
   
   Double_t _fx3629[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3629[8] = {
   1,
   0.41306,
   0.3838916,
   0.3543974,
   0.06788686,
   0.02570888,
   0,
   0};
   Double_t _felx3629[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3629[8] = {
   0.8295366,
   0.1433243,
   0.09826382,
   0.08787968,
   0.03695994,
   0.02126911,
   0,
   0};
   Double_t _fehx3629[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3629[8] = {
   2.355803,
   0.204621,
   0.1273842,
   0.1129755,
   0.06610052,
   0.05915515,
   0.09390997,
   2.716461};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3629,_fy3629,_felx3629,_fehx3629,_fely3629,_fehy3629);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3629 = new TH1F("Graph_Graph3629","",100,-100,100);
   Graph_Graph3629->SetMinimum(0);
   Graph_Graph3629->SetMaximum(1.5);
   Graph_Graph3629->SetDirectory(0);
   Graph_Graph3629->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3629->SetLineColor(ci);
   Graph_Graph3629->GetXaxis()->SetRange(1,100);
   Graph_Graph3629->GetXaxis()->CenterTitle(true);
   Graph_Graph3629->GetXaxis()->SetLabelFont(42);
   Graph_Graph3629->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3629->GetXaxis()->SetTitleFont(42);
   Graph_Graph3629->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3629->GetYaxis()->CenterTitle(true);
   Graph_Graph3629->GetYaxis()->SetLabelFont(42);
   Graph_Graph3629->GetYaxis()->SetTitleFont(42);
   Graph_Graph3629->GetZaxis()->SetLabelFont(42);
   Graph_Graph3629->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3629->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3629);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,49.66176,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1886 = new TH2D("ThetaY_vs_Y_35_40__1886","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8132,68);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8158,1317);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8184,2657);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8210,3070);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8236,3005);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8262,2645);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8288,1334);
   ThetaY_vs_Y_35_40__1886->SetBinContent(8314,47);
   ThetaY_vs_Y_35_40__1886->SetEntries(14143);
   ThetaY_vs_Y_35_40__1886->SetContour(20);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(1,153.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(2,307);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(3,460.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(4,614);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(5,767.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(6,921);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(7,1074.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(8,1228);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(9,1381.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(10,1535);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(11,1688.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(12,1842);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(13,1995.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(14,2149);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(15,2302.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(16,2456);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(17,2609.5);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(18,2763);
   ThetaY_vs_Y_35_40__1886->SetContourLevel(19,2916.5);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1886->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1886->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1886->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1886->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1886->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1886->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1886->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1886->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1886->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1886->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1886->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1886->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1886->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1886->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1886->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1886->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
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
