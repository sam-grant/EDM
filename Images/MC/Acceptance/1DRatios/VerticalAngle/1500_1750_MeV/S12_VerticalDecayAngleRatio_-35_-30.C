void S12_VerticalDecayAngleRatio_-35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:55 2022) by ROOT version 6.24/06
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
   
   TH1D *S12_ThetaY_mI35_mI30__1044 = new TH1D("S12_ThetaY_mI35_mI30__1044","",630,-1575,1575);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(314,0.09433962);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(315,0.9622642);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(316,0.8867925);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(317,1);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(318,0.9245283);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(319,0.7358491);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(320,0.6792453);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(321,0.3396226);
   S12_ThetaY_mI35_mI30__1044->SetBinContent(322,0.1132075);
   S12_ThetaY_mI35_mI30__1044->SetBinError(314,0.04218996);
   S12_ThetaY_mI35_mI30__1044->SetBinError(315,0.1347439);
   S12_ThetaY_mI35_mI30__1044->SetBinError(316,0.129352);
   S12_ThetaY_mI35_mI30__1044->SetBinError(317,0.1373606);
   S12_ThetaY_mI35_mI30__1044->SetBinError(318,0.1320755);
   S12_ThetaY_mI35_mI30__1044->SetBinError(319,0.1178302);
   S12_ThetaY_mI35_mI30__1044->SetBinError(320,0.1132075);
   S12_ThetaY_mI35_mI30__1044->SetBinError(321,0.08004982);
   S12_ThetaY_mI35_mI30__1044->SetBinError(322,0.04621679);
   S12_ThetaY_mI35_mI30__1044->SetMinimum(0);
   S12_ThetaY_mI35_mI30__1044->SetMaximum(1.131926);
   S12_ThetaY_mI35_mI30__1044->SetEntries(304);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1044->SetLineColor(ci);
   S12_ThetaY_mI35_mI30__1044->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI35_mI30__1044->SetMarkerColor(ci);
   S12_ThetaY_mI35_mI30__1044->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI35_mI30__1044->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI35_mI30__1044->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1044->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1044->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1044->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI35_mI30__1044->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI35_mI30__1044->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1044->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1044->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI35_mI30__1044->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI35_mI30__1044->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI35_mI30__1044->Draw("AE");
   
   TH1D *ThetaY_mI35_mI30__1045 = new TH1D("ThetaY_mI35_mI30__1045","",630,-1575,1575);
   ThetaY_mI35_mI30__1045->SetBinContent(308,0.000713691);
   ThetaY_mI35_mI30__1045->SetBinContent(309,0.1378613);
   ThetaY_mI35_mI30__1045->SetBinContent(310,0.4956584);
   ThetaY_mI35_mI30__1045->SetBinContent(311,0.72737);
   ThetaY_mI35_mI30__1045->SetBinContent(312,0.8676103);
   ThetaY_mI35_mI30__1045->SetBinContent(313,0.9434995);
   ThetaY_mI35_mI30__1045->SetBinContent(314,1.017961);
   ThetaY_mI35_mI30__1045->SetBinContent(315,1.029023);
   ThetaY_mI35_mI30__1045->SetBinContent(316,0.9833472);
   ThetaY_mI35_mI30__1045->SetBinContent(317,1);
   ThetaY_mI35_mI30__1045->SetBinContent(318,0.9649102);
   ThetaY_mI35_mI30__1045->SetBinContent(319,0.8758178);
   ThetaY_mI35_mI30__1045->SetBinContent(320,0.720471);
   ThetaY_mI35_mI30__1045->SetBinContent(321,0.4923278);
   ThetaY_mI35_mI30__1045->SetBinContent(322,0.1461877);
   ThetaY_mI35_mI30__1045->SetBinContent(323,0.000713691);
   ThetaY_mI35_mI30__1045->SetBinError(308,0.0002913631);
   ThetaY_mI35_mI30__1045->SetBinError(309,0.004049493);
   ThetaY_mI35_mI30__1045->SetBinError(310,0.007678399);
   ThetaY_mI35_mI30__1045->SetBinError(311,0.00930159);
   ThetaY_mI35_mI30__1045->SetBinError(312,0.01015879);
   ThetaY_mI35_mI30__1045->SetBinError(313,0.01059376);
   ThetaY_mI35_mI30__1045->SetBinError(314,0.01100386);
   ThetaY_mI35_mI30__1045->SetBinError(315,0.01106349);
   ThetaY_mI35_mI30__1045->SetBinError(316,0.01081516);
   ThetaY_mI35_mI30__1045->SetBinError(317,0.01090635);
   ThetaY_mI35_mI30__1045->SetBinError(318,0.01071329);
   ThetaY_mI35_mI30__1045->SetBinError(319,0.01020672);
   ThetaY_mI35_mI30__1045->SetBinError(320,0.009257373);
   ThetaY_mI35_mI30__1045->SetBinError(321,0.007652559);
   ThetaY_mI35_mI30__1045->SetBinError(322,0.004169989);
   ThetaY_mI35_mI30__1045->SetBinError(323,0.0002913631);
   ThetaY_mI35_mI30__1045->SetEntries(87462);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1045->SetLineColor(ci);
   ThetaY_mI35_mI30__1045->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI35_mI30__1045->SetMarkerColor(ci);
   ThetaY_mI35_mI30__1045->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI35_mI30__1045->GetXaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1045->GetXaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1045->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1045->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1045->GetXaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1045->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI35_mI30__1045->GetYaxis()->CenterTitle(true);
   ThetaY_mI35_mI30__1045->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI35_mI30__1045->GetYaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1045->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI35_mI30__1045->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI35_mI30__1045->GetYaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1045->GetZaxis()->SetLabelFont(42);
   ThetaY_mI35_mI30__1045->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI35_mI30__1045->GetZaxis()->SetTitleFont(42);
   ThetaY_mI35_mI30__1045->Draw("AEsame");
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
   
   Double_t _fx3349[16] = {
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
   Double_t _fy3349[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.09267507,
   0.9351237,
   0.9018101,
   1,
   0.9581496,
   0.8401851,
   0.9427794,
   0.6898303,
   0.7743986,
   0};
   Double_t _felx3349[16] = {
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
   Double_t _fely3349[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.04003962,
   0.1308896,
   0.1314373,
   0.1373489,
   0.1368131,
   0.1343035,
   0.1568484,
   0.1614029,
   0.3078105,
   0};
   Double_t _fehx3349[16] = {
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
   Double_t _fehy3349[16] = {
   56.96446,
   0.2521655,
   0.07009653,
   0.04776315,
   0.04004176,
   0.03682068,
   0.06272488,
   0.1506485,
   0.1521663,
   0.1576651,
   0.1579168,
   0.1577243,
   0.185429,
   0.204496,
   0.4643312,
   56.96446};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3349,_fy3349,_felx3349,_fehx3349,_fely3349,_fehy3349);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3349 = new TH1F("Graph_Graph3349","",100,-100,100);
   Graph_Graph3349->SetMinimum(0);
   Graph_Graph3349->SetMaximum(1.5);
   Graph_Graph3349->SetDirectory(0);
   Graph_Graph3349->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3349->SetLineColor(ci);
   Graph_Graph3349->GetXaxis()->SetRange(1,100);
   Graph_Graph3349->GetXaxis()->CenterTitle(true);
   Graph_Graph3349->GetXaxis()->SetLabelFont(42);
   Graph_Graph3349->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3349->GetXaxis()->SetTitleFont(42);
   Graph_Graph3349->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3349->GetYaxis()->CenterTitle(true);
   Graph_Graph3349->GetYaxis()->SetLabelFont(42);
   Graph_Graph3349->GetYaxis()->SetTitleFont(42);
   Graph_Graph3349->GetZaxis()->SetLabelFont(42);
   Graph_Graph3349->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3349->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3349);
   
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
   
   TH2D *ThetaY_vs_Y_mI35_mI30__1046 = new TH2D("ThetaY_vs_Y_mI35_mI30__1046","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8014,6);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8040,1159);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8066,4167);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8092,6115);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8118,7294);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8144,7932);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8170,8558);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8196,8651);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8222,8267);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8248,8407);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8274,8112);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8300,7363);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8326,6057);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8352,4139);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8378,1229);
   ThetaY_vs_Y_mI35_mI30__1046->SetBinContent(8404,6);
   ThetaY_vs_Y_mI35_mI30__1046->SetEntries(87462);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI35_mI30__1046->SetLineColor(ci);
   ThetaY_vs_Y_mI35_mI30__1046->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI35_mI30__1046->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI35_mI30__1046->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1046->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1046->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1046->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1046->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI35_mI30__1046->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI35_mI30__1046->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI35_mI30__1046->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1046->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1046->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI35_mI30__1046->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI35_mI30__1046->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI35_mI30__1046->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-35_-30","Reco vertices","lpf");
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
