void S18_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.4742706,125,9.01114);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_35_40__1143 = new TH1D("S18_ThetaY_35_40__1143","",630,-1575,1575);
   S18_ThetaY_35_40__1143->SetBinContent(309,1);
   S18_ThetaY_35_40__1143->SetBinContent(310,1.833333);
   S18_ThetaY_35_40__1143->SetBinContent(311,3.666667);
   S18_ThetaY_35_40__1143->SetBinContent(312,3.166667);
   S18_ThetaY_35_40__1143->SetBinContent(313,4.666667);
   S18_ThetaY_35_40__1143->SetBinContent(314,3.833333);
   S18_ThetaY_35_40__1143->SetBinContent(315,3.666667);
   S18_ThetaY_35_40__1143->SetBinContent(316,2.166667);
   S18_ThetaY_35_40__1143->SetBinError(309,0.4082483);
   S18_ThetaY_35_40__1143->SetBinError(310,0.5527708);
   S18_ThetaY_35_40__1143->SetBinError(311,0.781736);
   S18_ThetaY_35_40__1143->SetBinError(312,0.7264832);
   S18_ThetaY_35_40__1143->SetBinError(313,0.8819171);
   S18_ThetaY_35_40__1143->SetBinError(314,0.7993053);
   S18_ThetaY_35_40__1143->SetBinError(315,0.781736);
   S18_ThetaY_35_40__1143->SetBinError(316,0.6009252);
   S18_ThetaY_35_40__1143->SetMinimum(0);
   S18_ThetaY_35_40__1143->SetMaximum(8.062599);
   S18_ThetaY_35_40__1143->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1143->SetLineColor(ci);
   S18_ThetaY_35_40__1143->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_35_40__1143->SetMarkerColor(ci);
   S18_ThetaY_35_40__1143->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_35_40__1143->GetXaxis()->SetRange(296,335);
   S18_ThetaY_35_40__1143->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1143->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1143->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1143->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_35_40__1143->GetYaxis()->CenterTitle(true);
   S18_ThetaY_35_40__1143->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1143->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1143->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_35_40__1143->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_35_40__1143->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_35_40__1143->Draw("AE");
   
   TH1D *ThetaY_35_40__1144 = new TH1D("ThetaY_35_40__1144","",630,-1575,1575);
   ThetaY_35_40__1144->SetBinContent(308,0.001584786);
   ThetaY_35_40__1144->SetBinContent(309,1);
   ThetaY_35_40__1144->SetBinContent(310,3.606973);
   ThetaY_35_40__1144->SetBinContent(311,5.324881);
   ThetaY_35_40__1144->SetBinContent(312,6.253566);
   ThetaY_35_40__1144->SetBinContent(313,6.727417);
   ThetaY_35_40__1144->SetBinContent(314,7.139461);
   ThetaY_35_40__1144->SetBinContent(315,7.263074);
   ThetaY_35_40__1144->SetBinContent(316,7.329635);
   ThetaY_35_40__1144->SetBinContent(317,7.179081);
   ThetaY_35_40__1144->SetBinContent(318,6.573693);
   ThetaY_35_40__1144->SetBinContent(319,6.137876);
   ThetaY_35_40__1144->SetBinContent(320,5.115689);
   ThetaY_35_40__1144->SetBinContent(321,3.423138);
   ThetaY_35_40__1144->SetBinContent(322,0.9461173);
   ThetaY_35_40__1144->SetBinContent(323,0.001584786);
   ThetaY_35_40__1144->SetBinError(308,0.001584786);
   ThetaY_35_40__1144->SetBinError(309,0.03980937);
   ThetaY_35_40__1144->SetBinError(310,0.07560609);
   ThetaY_35_40__1144->SetBinError(311,0.09186293);
   ThetaY_35_40__1144->SetBinError(312,0.09955181);
   ThetaY_35_40__1144->SetBinError(313,0.1032546);
   ThetaY_35_40__1144->SetBinError(314,0.1063697);
   ThetaY_35_40__1144->SetBinError(315,0.1072866);
   ThetaY_35_40__1144->SetBinError(316,0.1077771);
   ThetaY_35_40__1144->SetBinError(317,0.1066645);
   ThetaY_35_40__1144->SetBinError(318,0.1020681);
   ThetaY_35_40__1144->SetBinError(319,0.09862667);
   ThetaY_35_40__1144->SetBinError(320,0.0900404);
   ThetaY_35_40__1144->SetBinError(321,0.0736542);
   ThetaY_35_40__1144->SetBinError(322,0.038722);
   ThetaY_35_40__1144->SetBinError(323,0.001584786);
   ThetaY_35_40__1144->SetEntries(46709);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1144->SetLineColor(ci);
   ThetaY_35_40__1144->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1144->SetMarkerColor(ci);
   ThetaY_35_40__1144->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1144->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1144->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1144->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1144->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1144->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1144->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1144->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1144->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1144->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1144->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1144->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1144->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1144->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1144->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1144->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1144->Draw("AEsame");
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
   
   Double_t _fx3382[16] = {
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
   Double_t _fy3382[16] = {
   0,
   1,
   0.5082748,
   0.6885913,
   0.5063778,
   0.6936788,
   0.5369219,
   0.5048367,
   0.2956036,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3382[16] = {
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
   Double_t _fely3382[16] = {
   0,
   0.3982651,
   0.1512263,
   0.14614,
   0.1154035,
   0.13072,
   0.1114081,
   0.1070526,
   0.0810252,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3382[16] = {
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
   Double_t _fehy3382[16] = {
   557.6961,
   0.6018091,
   0.2047641,
   0.1810728,
   0.1453042,
   0.158063,
   0.1373589,
   0.1326069,
   0.1070212,
   0.04274911,
   0.04668686,
   0.05000262,
   0.0599967,
   0.08967437,
   0.3248123,
   557.6961};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3382,_fy3382,_felx3382,_fehx3382,_fely3382,_fehy3382);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3382 = new TH1F("Graph_Graph3382","",100,-100,100);
   Graph_Graph3382->SetMinimum(0);
   Graph_Graph3382->SetMaximum(1.5);
   Graph_Graph3382->SetDirectory(0);
   Graph_Graph3382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3382->SetLineColor(ci);
   Graph_Graph3382->GetXaxis()->SetRange(1,100);
   Graph_Graph3382->GetXaxis()->CenterTitle(true);
   Graph_Graph3382->GetXaxis()->SetLabelFont(42);
   Graph_Graph3382->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3382->GetXaxis()->SetTitleFont(42);
   Graph_Graph3382->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3382->GetYaxis()->CenterTitle(true);
   Graph_Graph3382->GetYaxis()->SetLabelFont(42);
   Graph_Graph3382->GetYaxis()->SetTitleFont(42);
   Graph_Graph3382->GetZaxis()->SetLabelFont(42);
   Graph_Graph3382->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3382->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3382);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,8.062599,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1145 = new TH2D("ThetaY_vs_Y_35_40__1145","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8028,1);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8054,631);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8080,2276);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8106,3360);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8132,3946);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8158,4245);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8184,4505);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8210,4583);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8236,4625);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8262,4530);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8288,4148);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8314,3873);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8340,3228);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8366,2160);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8392,597);
   ThetaY_vs_Y_35_40__1145->SetBinContent(8418,1);
   ThetaY_vs_Y_35_40__1145->SetEntries(46709);
   ThetaY_vs_Y_35_40__1145->SetContour(20);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(1,231.25);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(2,462.5);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(3,693.75);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(4,925);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(5,1156.25);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(6,1387.5);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(7,1618.75);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(8,1850);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(9,2081.25);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(10,2312.5);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(11,2543.75);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(12,2775);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(13,3006.25);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(14,3237.5);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(15,3468.75);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(16,3700);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(17,3931.25);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(18,4162.5);
   ThetaY_vs_Y_35_40__1145->SetContourLevel(19,4393.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1145->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1145->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1145->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1145->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1145->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1145->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1145->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1145->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1145->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1145->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1145->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1145->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1145->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1145->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1145->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1145->Draw("COL");
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
