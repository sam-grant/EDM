void S18_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:56 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06658387,125,1.265094);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI35_mI30__1101 = new TH1D("S18_ThetaY_mI35_mI30__1101","",630,-1575,1575);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(314,0.05882353);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(315,0.6323529);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(316,0.9705882);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(317,1);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(318,0.7205882);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(319,0.6470588);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(320,0.6617647);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(321,0.3382353);
   S18_ThetaY_mI35_mI30__1101->SetBinContent(322,0.1323529);
   S18_ThetaY_mI35_mI30__1101->SetBinError(314,0.02941176);
   S18_ThetaY_mI35_mI30__1101->SetBinError(315,0.09643292);
   S18_ThetaY_mI35_mI30__1101->SetBinError(316,0.1194712);
   S18_ThetaY_mI35_mI30__1101->SetBinError(317,0.1212678);
   S18_ThetaY_mI35_mI30__1101->SetBinError(318,0.1029412);
   S18_ThetaY_mI35_mI30__1101->SetBinError(319,0.09754779);
   S18_ThetaY_mI35_mI30__1101->SetBinError(320,0.09865006);
   S18_ThetaY_mI35_mI30__1101->SetBinError(321,0.07052693);
   S18_ThetaY_mI35_mI30__1101->SetBinError(322,0.04411765);
   S18_ThetaY_mI35_mI30__1101->SetMinimum(0);
   S18_ThetaY_mI35_mI30__1101->SetMaximum(1.131926);
   S18_ThetaY_mI35_mI30__1101->SetEntries(351);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1101->SetLineColor(ci);
   S18_ThetaY_mI35_mI30__1101->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI35_mI30__1101->SetMarkerColor(ci);
   S18_ThetaY_mI35_mI30__1101->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI35_mI30__1101->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI35_mI30__1101->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1101->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1101->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1101->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI35_mI30__1101->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI35_mI30__1101->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1101->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1101->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI35_mI30__1101->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI35_mI30__1101->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI35_mI30__1101->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1102 = new TH1D("ThetaY_mI35_mI30__1102","",630,-1575,1575);
   ThetaY_mI35_mI30__1102->SetBinContent(308,0.000713691);
   ThetaY_mI35_mI30__1102->SetBinContent(309,0.1378613);
   ThetaY_mI35_mI30__1102->SetBinContent(310,0.4956584);
   ThetaY_mI35_mI30__1102->SetBinContent(311,0.72737);
   ThetaY_mI35_mI30__1102->SetBinContent(312,0.8676103);
   ThetaY_mI35_mI30__1102->SetBinContent(313,0.9434995);
   ThetaY_mI35_mI30__1102->SetBinContent(314,1.017961);
   ThetaY_mI35_mI30__1102->SetBinContent(315,1.029023);
   ThetaY_mI35_mI30__1102->SetBinContent(316,0.9833472);
   ThetaY_mI35_mI30__1102->SetBinContent(317,1);
   ThetaY_mI35_mI30__1102->SetBinContent(318,0.9649102);
   ThetaY_mI35_mI30__1102->SetBinContent(319,0.8758178);
   ThetaY_mI35_mI30__1102->SetBinContent(320,0.720471);
   ThetaY_mI35_mI30__1102->SetBinContent(321,0.4923278);
   ThetaY_mI35_mI30__1102->SetBinContent(322,0.1461877);
   ThetaY_mI35_mI30__1102->SetBinContent(323,0.000713691);
   ThetaY_mI35_mI30__1102->SetBinError(308,0.0002913631);
   ThetaY_mI35_mI30__1102->SetBinError(309,0.004049493);
   ThetaY_mI35_mI30__1102->SetBinError(310,0.007678399);
   ThetaY_mI35_mI30__1102->SetBinError(311,0.00930159);
   ThetaY_mI35_mI30__1102->SetBinError(312,0.01015879);
   ThetaY_mI35_mI30__1102->SetBinError(313,0.01059376);
   ThetaY_mI35_mI30__1102->SetBinError(314,0.01100386);
   ThetaY_mI35_mI30__1102->SetBinError(315,0.01106349);
   ThetaY_mI35_mI30__1102->SetBinError(316,0.01081516);
   ThetaY_mI35_mI30__1102->SetBinError(317,0.01090635);
   ThetaY_mI35_mI30__1102->SetBinError(318,0.01071329);
   ThetaY_mI35_mI30__1102->SetBinError(319,0.01020672);
   ThetaY_mI35_mI30__1102->SetBinError(320,0.009257373);
   ThetaY_mI35_mI30__1102->SetBinError(321,0.007652559);
   ThetaY_mI35_mI30__1102->SetBinError(322,0.004169989);
   ThetaY_mI35_mI30__1102->SetBinError(323,0.0002913631);
   ThetaY_mI35_mI30__1102->SetEntries(87462);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1102->SetLineColor(ci);
   ThetaY_mI35_mI30__1102->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1102->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1102->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1102->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1102->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1102->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1102->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1102->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1102->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1102->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1102->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1102->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1102->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1102->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1102->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1102->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1102->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1102->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1102->Draw("AEsame");
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
   
   Double_t _fx3368[16] = {
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
   Double_t _fy3368[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.05778563,
   0.6145175,
   0.987025,
   1,
   0.7467931,
   0.7388053,
   0.9185167,
   0.6870124,
   0.905363,
   0};
   Double_t _felx3368[16] = {
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
   Double_t _fely3368[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02766045,
   0.0935737,
   0.1216615,
   0.1214502,
   0.1066337,
   0.111278,
   0.1369086,
   0.1425816,
   0.2970751,
   0};
   Double_t _fehx3368[16] = {
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
   Double_t _fehy3368[16] = {
   44.39877,
   0.1965407,
   0.05463406,
   0.03722716,
   0.03120902,
   0.02869847,
   0.04570954,
   0.1090485,
   0.1376855,
   0.1371953,
   0.1230822,
   0.1294664,
   0.1590391,
   0.1758056,
   0.4156741,
   44.39877};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3368,_fy3368,_felx3368,_fehx3368,_fely3368,_fehy3368);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3368 = new TH1F("Graph_Graph3368","",100,-100,100);
   Graph_Graph3368->SetMinimum(0);
   Graph_Graph3368->SetMaximum(1.5);
   Graph_Graph3368->SetDirectory(0);
   Graph_Graph3368->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3368->SetLineColor(ci);
   Graph_Graph3368->GetXaxis()->SetRange(1,100);
   Graph_Graph3368->GetXaxis()->CenterTitle(true);
   Graph_Graph3368->GetXaxis()->SetLabelFont(42);
   Graph_Graph3368->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3368->GetXaxis()->SetTitleFont(42);
   Graph_Graph3368->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3368->GetYaxis()->CenterTitle(true);
   Graph_Graph3368->GetYaxis()->SetLabelFont(42);
   Graph_Graph3368->GetYaxis()->SetTitleFont(42);
   Graph_Graph3368->GetZaxis()->SetLabelFont(42);
   Graph_Graph3368->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3368->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3368);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.131926,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1103 = new TH2D("ThetaY_vs_Y_mI35_mI30__1103","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8014,6);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8040,1159);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8066,4167);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8092,6115);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8118,7294);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8144,7932);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8170,8558);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8196,8651);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8222,8267);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8248,8407);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8274,8112);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8300,7363);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8326,6057);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8352,4139);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8378,1229);
   ThetaY_vs_Y_mI35_mI30__1103->SetBinContent(8404,6);
   ThetaY_vs_Y_mI35_mI30__1103->SetEntries(87462);
   ThetaY_vs_Y_mI35_mI30__1103->SetContour(20);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(0,0);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(1,432.55);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(2,865.1);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(3,1297.65);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(4,1730.2);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(5,2162.75);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(6,2595.3);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(7,3027.85);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(8,3460.4);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(9,3892.95);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(10,4325.5);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(11,4758.05);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(12,5190.6);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(13,5623.15);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(14,6055.7);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(15,6488.25);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(16,6920.8);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(17,7353.35);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(18,7785.9);
   ThetaY_vs_Y_mI35_mI30__1103->SetContourLevel(19,8218.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1103->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1103->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1103->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1103->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1103->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1103->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1103->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1103->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1103->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1103->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1103->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1103->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1103->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1103->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1103->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1103->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-35_-30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-35_-30","Reco vertices","lpf");
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
