void S12_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.497479,125,28.4521);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__747 = new TH1D("S12_ThetaY_40_45__747","",630,-1575,1575);
   S12_ThetaY_40_45__747->SetBinContent(306,1);
   S12_ThetaY_40_45__747->SetBinContent(307,4);
   S12_ThetaY_40_45__747->SetBinContent(308,5);
   S12_ThetaY_40_45__747->SetBinContent(309,8);
   S12_ThetaY_40_45__747->SetBinContent(310,8);
   S12_ThetaY_40_45__747->SetBinContent(311,6);
   S12_ThetaY_40_45__747->SetBinContent(312,6);
   S12_ThetaY_40_45__747->SetBinContent(313,10);
   S12_ThetaY_40_45__747->SetBinContent(314,16);
   S12_ThetaY_40_45__747->SetBinContent(315,5);
   S12_ThetaY_40_45__747->SetBinError(306,1);
   S12_ThetaY_40_45__747->SetBinError(307,2);
   S12_ThetaY_40_45__747->SetBinError(308,2.236068);
   S12_ThetaY_40_45__747->SetBinError(309,2.828427);
   S12_ThetaY_40_45__747->SetBinError(310,2.828427);
   S12_ThetaY_40_45__747->SetBinError(311,2.44949);
   S12_ThetaY_40_45__747->SetBinError(312,2.44949);
   S12_ThetaY_40_45__747->SetBinError(313,3.162278);
   S12_ThetaY_40_45__747->SetBinError(314,4);
   S12_ThetaY_40_45__747->SetBinError(315,2.236068);
   S12_ThetaY_40_45__747->SetMinimum(0);
   S12_ThetaY_40_45__747->SetMaximum(25.45714);
   S12_ThetaY_40_45__747->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__747->SetLineColor(ci);
   S12_ThetaY_40_45__747->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__747->SetMarkerColor(ci);
   S12_ThetaY_40_45__747->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__747->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__747->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__747->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__747->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__747->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__747->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__747->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__747->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__747->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__747->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__747->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__747->Draw("AE");
   
   TH1D *ThetaY_40_45__748 = new TH1D("ThetaY_40_45__748","",630,-1575,1575);
   ThetaY_40_45__748->SetBinContent(306,1);
   ThetaY_40_45__748->SetBinContent(307,6.6);
   ThetaY_40_45__748->SetBinContent(308,13.48571);
   ThetaY_40_45__748->SetBinContent(309,16.38571);
   ThetaY_40_45__748->SetBinContent(310,19.2);
   ThetaY_40_45__748->SetBinContent(311,21.05714);
   ThetaY_40_45__748->SetBinContent(312,22.78571);
   ThetaY_40_45__748->SetBinContent(313,21.47143);
   ThetaY_40_45__748->SetBinContent(314,23.14286);
   ThetaY_40_45__748->SetBinContent(315,22.91429);
   ThetaY_40_45__748->SetBinContent(316,22.5);
   ThetaY_40_45__748->SetBinContent(317,22.67143);
   ThetaY_40_45__748->SetBinContent(318,22.62857);
   ThetaY_40_45__748->SetBinContent(319,21.31429);
   ThetaY_40_45__748->SetBinContent(320,21.37143);
   ThetaY_40_45__748->SetBinContent(321,18.97143);
   ThetaY_40_45__748->SetBinContent(322,17.52857);
   ThetaY_40_45__748->SetBinContent(323,12.4);
   ThetaY_40_45__748->SetBinContent(324,7.014286);
   ThetaY_40_45__748->SetBinContent(325,1.185714);
   ThetaY_40_45__748->SetBinError(306,0.1195229);
   ThetaY_40_45__748->SetBinError(307,0.3070598);
   ThetaY_40_45__748->SetBinError(308,0.4389226);
   ThetaY_40_45__748->SetBinError(309,0.4838198);
   ThetaY_40_45__748->SetBinError(310,0.5237229);
   ThetaY_40_45__748->SetBinError(311,0.5484673);
   ThetaY_40_45__748->SetBinError(312,0.570535);
   ThetaY_40_45__748->SetBinError(313,0.5538363);
   ThetaY_40_45__748->SetBinError(314,0.5749889);
   ThetaY_40_45__748->SetBinError(315,0.5721424);
   ThetaY_40_45__748->SetBinError(316,0.5669467);
   ThetaY_40_45__748->SetBinError(317,0.5691024);
   ThetaY_40_45__748->SetBinError(318,0.5685642);
   ThetaY_40_45__748->SetBinError(319,0.5518059);
   ThetaY_40_45__748->SetBinError(320,0.5525451);
   ThetaY_40_45__748->SetBinError(321,0.5205962);
   ThetaY_40_45__748->SetBinError(322,0.500408);
   ThetaY_40_45__748->SetBinError(323,0.4208834);
   ThetaY_40_45__748->SetBinError(324,0.3165503);
   ThetaY_40_45__748->SetBinError(325,0.1301491);
   ThetaY_40_45__748->SetEntries(23494);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__748->SetLineColor(ci);
   ThetaY_40_45__748->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__748->SetMarkerColor(ci);
   ThetaY_40_45__748->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__748->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__748->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__748->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__748->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__748->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__748->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__748->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__748->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__748->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__748->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__748->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__748->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__748->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__748->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__748->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__748->Draw("AEsame");
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
   
   Double_t _fx3250[20] = {
   -47.5,
   -42.5,
   -37.5,
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
   32.5,
   37.5,
   42.5,
   47.5};
   Double_t _fy3250[20] = {
   1,
   0.6060606,
   0.3707627,
   0.4882302,
   0.4166667,
   0.2849389,
   0.2633229,
   0.4657352,
   0.691358,
   0.2182045,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3250[20] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3250[20] = {
   0.829472,
   0.2910442,
   0.1604983,
   0.1694744,
   0.144568,
   0.1132193,
   0.1046165,
   0.1452205,
   0.1718099,
   0.09437279,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3250[20] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3250[20] = {
   2.354181,
   0.4829219,
   0.2519327,
   0.2420205,
   0.206389,
   0.1707398,
   0.1577483,
   0.1996696,
   0.2210663,
   0.1479999,
   0.08187102,
   0.0812516,
   0.08140558,
   0.08642832,
   0.08619709,
   0.0971091,
   0.1051086,
   0.1486271,
   0.2629601,
   1.570017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3250,_fy3250,_felx3250,_fehx3250,_fely3250,_fehy3250);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3250 = new TH1F("Graph_Graph3250","",100,-100,100);
   Graph_Graph3250->SetMinimum(0);
   Graph_Graph3250->SetMaximum(1.5);
   Graph_Graph3250->SetDirectory(0);
   Graph_Graph3250->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3250->SetLineColor(ci);
   Graph_Graph3250->GetXaxis()->SetRange(1,100);
   Graph_Graph3250->GetXaxis()->CenterTitle(true);
   Graph_Graph3250->GetXaxis()->SetLabelFont(42);
   Graph_Graph3250->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3250->GetXaxis()->SetTitleFont(42);
   Graph_Graph3250->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3250->GetYaxis()->CenterTitle(true);
   Graph_Graph3250->GetYaxis()->SetLabelFont(42);
   Graph_Graph3250->GetYaxis()->SetTitleFont(42);
   Graph_Graph3250->GetZaxis()->SetLabelFont(42);
   Graph_Graph3250->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3250->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3250);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,25.45714,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__749 = new TH2D("ThetaY_vs_Y_40_45__749","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__749->SetBinContent(7977,70);
   ThetaY_vs_Y_40_45__749->SetBinContent(8003,462);
   ThetaY_vs_Y_40_45__749->SetBinContent(8029,944);
   ThetaY_vs_Y_40_45__749->SetBinContent(8055,1147);
   ThetaY_vs_Y_40_45__749->SetBinContent(8081,1344);
   ThetaY_vs_Y_40_45__749->SetBinContent(8107,1474);
   ThetaY_vs_Y_40_45__749->SetBinContent(8133,1595);
   ThetaY_vs_Y_40_45__749->SetBinContent(8159,1503);
   ThetaY_vs_Y_40_45__749->SetBinContent(8185,1620);
   ThetaY_vs_Y_40_45__749->SetBinContent(8211,1604);
   ThetaY_vs_Y_40_45__749->SetBinContent(8237,1575);
   ThetaY_vs_Y_40_45__749->SetBinContent(8263,1587);
   ThetaY_vs_Y_40_45__749->SetBinContent(8289,1584);
   ThetaY_vs_Y_40_45__749->SetBinContent(8315,1492);
   ThetaY_vs_Y_40_45__749->SetBinContent(8341,1496);
   ThetaY_vs_Y_40_45__749->SetBinContent(8367,1328);
   ThetaY_vs_Y_40_45__749->SetBinContent(8393,1227);
   ThetaY_vs_Y_40_45__749->SetBinContent(8419,868);
   ThetaY_vs_Y_40_45__749->SetBinContent(8445,491);
   ThetaY_vs_Y_40_45__749->SetBinContent(8471,83);
   ThetaY_vs_Y_40_45__749->SetEntries(23494);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__749->SetLineColor(ci);
   ThetaY_vs_Y_40_45__749->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__749->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__749->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__749->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__749->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__749->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__749->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__749->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__749->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__749->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__749->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__749->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__749->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__749->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__749->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
