void S18_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07208817,125,1.369675);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_40_45__1146 = new TH1D("S18_ThetaY_40_45__1146","",630,-1575,1575);
   S18_ThetaY_40_45__1146->SetBinContent(309,0.1428571);
   S18_ThetaY_40_45__1146->SetBinContent(310,0.4285714);
   S18_ThetaY_40_45__1146->SetBinContent(311,0.7142857);
   S18_ThetaY_40_45__1146->SetBinContent(312,0.4285714);
   S18_ThetaY_40_45__1146->SetBinContent(313,1);
   S18_ThetaY_40_45__1146->SetBinContent(314,0.8571429);
   S18_ThetaY_40_45__1146->SetBinContent(315,0.2857143);
   S18_ThetaY_40_45__1146->SetBinError(309,0.1010153);
   S18_ThetaY_40_45__1146->SetBinError(310,0.1749636);
   S18_ThetaY_40_45__1146->SetBinError(311,0.225877);
   S18_ThetaY_40_45__1146->SetBinError(312,0.1749636);
   S18_ThetaY_40_45__1146->SetBinError(313,0.2672612);
   S18_ThetaY_40_45__1146->SetBinError(314,0.2474358);
   S18_ThetaY_40_45__1146->SetBinError(315,0.1428571);
   S18_ThetaY_40_45__1146->SetMinimum(0);
   S18_ThetaY_40_45__1146->SetMaximum(1.225499);
   S18_ThetaY_40_45__1146->SetEntries(54);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1146->SetLineColor(ci);
   S18_ThetaY_40_45__1146->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__1146->SetMarkerColor(ci);
   S18_ThetaY_40_45__1146->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_40_45__1146->GetXaxis()->SetRange(296,335);
   S18_ThetaY_40_45__1146->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1146->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1146->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1146->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_40_45__1146->GetYaxis()->CenterTitle(true);
   S18_ThetaY_40_45__1146->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1146->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1146->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__1146->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__1146->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__1146->Draw("AE");
   
   TH1D *ThetaY_40_45__1147 = new TH1D("ThetaY_40_45__1147","",630,-1575,1575);
   ThetaY_40_45__1147->SetBinContent(308,0.001246883);
   ThetaY_40_45__1147->SetBinContent(309,0.1583541);
   ThetaY_40_45__1147->SetBinContent(310,0.5149626);
   ThetaY_40_45__1147->SetBinContent(311,0.7213217);
   ThetaY_40_45__1147->SetBinContent(312,0.9426434);
   ThetaY_40_45__1147->SetBinContent(313,1);
   ThetaY_40_45__1147->SetBinContent(314,1.099751);
   ThetaY_40_45__1147->SetBinContent(315,1.11409);
   ThetaY_40_45__1147->SetBinContent(316,1.087905);
   ThetaY_40_45__1147->SetBinContent(317,1.094763);
   ThetaY_40_45__1147->SetBinContent(318,1.03803);
   ThetaY_40_45__1147->SetBinContent(319,0.9395262);
   ThetaY_40_45__1147->SetBinContent(320,0.7687032);
   ThetaY_40_45__1147->SetBinContent(321,0.5648379);
   ThetaY_40_45__1147->SetBinContent(322,0.1508728);
   ThetaY_40_45__1147->SetBinContent(323,0.0006234414);
   ThetaY_40_45__1147->SetBinError(308,0.0008816793);
   ThetaY_40_45__1147->SetBinError(309,0.009936021);
   ThetaY_40_45__1147->SetBinError(310,0.01791784);
   ThetaY_40_45__1147->SetBinError(311,0.02120617);
   ThetaY_40_45__1147->SetBinError(312,0.02424217);
   ThetaY_40_45__1147->SetBinError(313,0.02496881);
   ThetaY_40_45__1147->SetBinError(314,0.02618454);
   ThetaY_40_45__1147->SetBinError(315,0.02635469);
   ThetaY_40_45__1147->SetBinError(316,0.02604314);
   ThetaY_40_45__1147->SetBinError(317,0.0261251);
   ThetaY_40_45__1147->SetBinError(318,0.02543916);
   ThetaY_40_45__1147->SetBinError(319,0.02420206);
   ThetaY_40_45__1147->SetBinError(320,0.02189158);
   ThetaY_40_45__1147->SetBinError(321,0.01876548);
   ThetaY_40_45__1147->SetBinError(322,0.009698472);
   ThetaY_40_45__1147->SetBinError(323,0.0006234414);
   ThetaY_40_45__1147->SetEntries(17961);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1147->SetLineColor(ci);
   ThetaY_40_45__1147->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__1147->SetMarkerColor(ci);
   ThetaY_40_45__1147->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__1147->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__1147->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__1147->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1147->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1147->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__1147->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__1147->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__1147->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__1147->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__1147->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__1147->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__1147->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__1147->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__1147->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__1147->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__1147->Draw("AEsame");
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
   
   Double_t _fx3383[16] = {
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
   37.5};
   Double_t _fy3383[16] = {
   0,
   0.9021372,
   0.832238,
   0.9902457,
   0.4546485,
   1,
   0.7793975,
   0.2564554,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3383[16] = {
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
   Double_t _fely3383[16] = {
   0,
   0.5841311,
   0.331136,
   0.3090453,
   0.1806448,
   0.2651102,
   0.2225171,
   0.1228446,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3383[16] = {
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
   Double_t _fehy3383[16] = {
   173.0685,
   1.20074,
   0.4999573,
   0.4251365,
   0.2724101,
   0.3470507,
   0.2975486,
   0.2031827,
   0.1209397,
   0.1201817,
   0.1267538,
   0.1400513,
   0.1711971,
   0.2330496,
   0.8749291,
   607.5693};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3383,_fy3383,_felx3383,_fehx3383,_fely3383,_fehy3383);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3383 = new TH1F("Graph_Graph3383","",100,-100,100);
   Graph_Graph3383->SetMinimum(0);
   Graph_Graph3383->SetMaximum(1.5);
   Graph_Graph3383->SetDirectory(0);
   Graph_Graph3383->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3383->SetLineColor(ci);
   Graph_Graph3383->GetXaxis()->SetRange(1,100);
   Graph_Graph3383->GetXaxis()->CenterTitle(true);
   Graph_Graph3383->GetXaxis()->SetLabelFont(42);
   Graph_Graph3383->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3383->GetXaxis()->SetTitleFont(42);
   Graph_Graph3383->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3383->GetYaxis()->CenterTitle(true);
   Graph_Graph3383->GetYaxis()->SetLabelFont(42);
   Graph_Graph3383->GetYaxis()->SetTitleFont(42);
   Graph_Graph3383->GetZaxis()->SetLabelFont(42);
   Graph_Graph3383->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3383->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3383);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.225499,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__1148 = new TH2D("ThetaY_vs_Y_40_45__1148","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8029,2);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8055,254);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8081,826);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8107,1157);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8133,1512);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8159,1604);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8185,1764);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8211,1787);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8237,1745);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8263,1756);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8289,1665);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8315,1507);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8341,1233);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8367,906);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8393,242);
   ThetaY_vs_Y_40_45__1148->SetBinContent(8419,1);
   ThetaY_vs_Y_40_45__1148->SetEntries(17961);
   ThetaY_vs_Y_40_45__1148->SetContour(20);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(1,89.35);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(2,178.7);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(3,268.05);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(4,357.4);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(5,446.75);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(6,536.1);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(7,625.45);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(8,714.8);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(9,804.15);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(10,893.5);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(11,982.85);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(12,1072.2);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(13,1161.55);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(14,1250.9);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(15,1340.25);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(16,1429.6);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(17,1518.95);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(18,1608.3);
   ThetaY_vs_Y_40_45__1148->SetContourLevel(19,1697.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__1148->SetLineColor(ci);
   ThetaY_vs_Y_40_45__1148->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__1148->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__1148->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1148->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1148->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1148->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1148->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__1148->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__1148->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__1148->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1148->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1148->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__1148->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__1148->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__1148->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_40_45","Reco vertices","lpf");
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
