void S12S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_35_40__1200 = new TH1D("S12S18_ThetaY_35_40__1200","",630,-1575,1575);
   S12S18_ThetaY_35_40__1200->SetBinContent(309,1);
   S12S18_ThetaY_35_40__1200->SetBinContent(310,1.75);
   S12S18_ThetaY_35_40__1200->SetBinContent(311,3.333333);
   S12S18_ThetaY_35_40__1200->SetBinContent(312,4.166667);
   S12S18_ThetaY_35_40__1200->SetBinContent(313,4.083333);
   S12S18_ThetaY_35_40__1200->SetBinContent(314,4.666667);
   S12S18_ThetaY_35_40__1200->SetBinContent(315,3.5);
   S12S18_ThetaY_35_40__1200->SetBinContent(316,1.5);
   S12S18_ThetaY_35_40__1200->SetBinError(309,0.2886751);
   S12S18_ThetaY_35_40__1200->SetBinError(310,0.3818813);
   S12S18_ThetaY_35_40__1200->SetBinError(311,0.5270463);
   S12S18_ThetaY_35_40__1200->SetBinError(312,0.5892557);
   S12S18_ThetaY_35_40__1200->SetBinError(313,0.5833333);
   S12S18_ThetaY_35_40__1200->SetBinError(314,0.6236096);
   S12S18_ThetaY_35_40__1200->SetBinError(315,0.5400617);
   S12S18_ThetaY_35_40__1200->SetBinError(316,0.3535534);
   S12S18_ThetaY_35_40__1200->SetMinimum(0);
   S12S18_ThetaY_35_40__1200->SetMaximum(8.062599);
   S12S18_ThetaY_35_40__1200->SetEntries(288);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1200->SetLineColor(ci);
   S12S18_ThetaY_35_40__1200->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__1200->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__1200->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__1200->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__1200->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1200->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1200->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1200->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__1200->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__1200->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1200->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1200->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__1200->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__1200->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__1200->Draw("AE");
   
   TH1D *ThetaY_35_40__1201 = new TH1D("ThetaY_35_40__1201","",630,-1575,1575);
   ThetaY_35_40__1201->SetBinContent(308,0.001584786);
   ThetaY_35_40__1201->SetBinContent(309,1);
   ThetaY_35_40__1201->SetBinContent(310,3.606973);
   ThetaY_35_40__1201->SetBinContent(311,5.324881);
   ThetaY_35_40__1201->SetBinContent(312,6.253566);
   ThetaY_35_40__1201->SetBinContent(313,6.727417);
   ThetaY_35_40__1201->SetBinContent(314,7.139461);
   ThetaY_35_40__1201->SetBinContent(315,7.263074);
   ThetaY_35_40__1201->SetBinContent(316,7.329635);
   ThetaY_35_40__1201->SetBinContent(317,7.179081);
   ThetaY_35_40__1201->SetBinContent(318,6.573693);
   ThetaY_35_40__1201->SetBinContent(319,6.137876);
   ThetaY_35_40__1201->SetBinContent(320,5.115689);
   ThetaY_35_40__1201->SetBinContent(321,3.423138);
   ThetaY_35_40__1201->SetBinContent(322,0.9461173);
   ThetaY_35_40__1201->SetBinContent(323,0.001584786);
   ThetaY_35_40__1201->SetBinError(308,0.001584786);
   ThetaY_35_40__1201->SetBinError(309,0.03980937);
   ThetaY_35_40__1201->SetBinError(310,0.07560609);
   ThetaY_35_40__1201->SetBinError(311,0.09186293);
   ThetaY_35_40__1201->SetBinError(312,0.09955181);
   ThetaY_35_40__1201->SetBinError(313,0.1032546);
   ThetaY_35_40__1201->SetBinError(314,0.1063697);
   ThetaY_35_40__1201->SetBinError(315,0.1072866);
   ThetaY_35_40__1201->SetBinError(316,0.1077771);
   ThetaY_35_40__1201->SetBinError(317,0.1066645);
   ThetaY_35_40__1201->SetBinError(318,0.1020681);
   ThetaY_35_40__1201->SetBinError(319,0.09862667);
   ThetaY_35_40__1201->SetBinError(320,0.0900404);
   ThetaY_35_40__1201->SetBinError(321,0.0736542);
   ThetaY_35_40__1201->SetBinError(322,0.038722);
   ThetaY_35_40__1201->SetBinError(323,0.001584786);
   ThetaY_35_40__1201->SetEntries(46709);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1201->SetLineColor(ci);
   ThetaY_35_40__1201->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1201->SetMarkerColor(ci);
   ThetaY_35_40__1201->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1201->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1201->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1201->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1201->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1201->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1201->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1201->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1201->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1201->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1201->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1201->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1201->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1201->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1201->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1201->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1201->Draw("AEsame");
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
   
   Double_t _fx3401[16] = {
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
   Double_t _fy3401[16] = {
   0,
   1,
   0.4851714,
   0.6259921,
   0.6662865,
   0.606969,
   0.6536441,
   0.4818896,
   0.2046486,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3401[16] = {
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
   Double_t _fely3401[16] = {
   0,
   0.287093,
   0.1054855,
   0.09913339,
   0.09449257,
   0.08690042,
   0.08761551,
   0.07439076,
   0.04787231,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3401[16] = {
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
   Double_t _fehy3401[16] = {
   278.8481,
   0.3849629,
   0.1314181,
   0.116265,
   0.1089762,
   0.1003555,
   0.1002506,
   0.08688723,
   0.06064895,
   0.02137455,
   0.02334343,
   0.02500131,
   0.02999835,
   0.04483719,
   0.1624062,
   278.8481};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3401,_fy3401,_felx3401,_fehx3401,_fely3401,_fehy3401);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3401 = new TH1F("Graph_Graph3401","",100,-100,100);
   Graph_Graph3401->SetMinimum(0);
   Graph_Graph3401->SetMaximum(1.5);
   Graph_Graph3401->SetDirectory(0);
   Graph_Graph3401->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3401->SetLineColor(ci);
   Graph_Graph3401->GetXaxis()->SetRange(1,100);
   Graph_Graph3401->GetXaxis()->CenterTitle(true);
   Graph_Graph3401->GetXaxis()->SetLabelFont(42);
   Graph_Graph3401->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3401->GetXaxis()->SetTitleFont(42);
   Graph_Graph3401->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3401->GetYaxis()->CenterTitle(true);
   Graph_Graph3401->GetYaxis()->SetLabelFont(42);
   Graph_Graph3401->GetYaxis()->SetTitleFont(42);
   Graph_Graph3401->GetZaxis()->SetLabelFont(42);
   Graph_Graph3401->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3401->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3401);
   
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
   
   TH2D *ThetaY_vs_Y_35_40__1202 = new TH2D("ThetaY_vs_Y_35_40__1202","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8028,1);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8054,631);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8080,2276);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8106,3360);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8132,3946);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8158,4245);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8184,4505);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8210,4583);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8236,4625);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8262,4530);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8288,4148);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8314,3873);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8340,3228);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8366,2160);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8392,597);
   ThetaY_vs_Y_35_40__1202->SetBinContent(8418,1);
   ThetaY_vs_Y_35_40__1202->SetEntries(46709);
   ThetaY_vs_Y_35_40__1202->SetContour(20);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(1,231.25);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(2,462.5);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(3,693.75);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(4,925);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(5,1156.25);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(6,1387.5);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(7,1618.75);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(8,1850);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(9,2081.25);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(10,2312.5);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(11,2543.75);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(12,2775);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(13,3006.25);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(14,3237.5);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(15,3468.75);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(16,3700);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(17,3931.25);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(18,4162.5);
   ThetaY_vs_Y_35_40__1202->SetContourLevel(19,4393.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1202->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1202->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1202->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1202->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1202->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1202->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1202->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1202->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1202->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1202->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1202->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1202->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1202->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1202->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1202->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1202->Draw("COL");
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
