void S12_VerticalDecayAngleRatio_35_40()
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
   upper_pad->Range(-125,-0.4742706,125,9.01114);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__1086 = new TH1D("S12_ThetaY_35_40__1086","",630,-1575,1575);
   S12_ThetaY_35_40__1086->SetBinContent(309,1);
   S12_ThetaY_35_40__1086->SetBinContent(310,1.666667);
   S12_ThetaY_35_40__1086->SetBinContent(311,3);
   S12_ThetaY_35_40__1086->SetBinContent(312,5.166667);
   S12_ThetaY_35_40__1086->SetBinContent(313,3.5);
   S12_ThetaY_35_40__1086->SetBinContent(314,5.5);
   S12_ThetaY_35_40__1086->SetBinContent(315,3.333333);
   S12_ThetaY_35_40__1086->SetBinContent(316,0.8333333);
   S12_ThetaY_35_40__1086->SetBinError(309,0.4082483);
   S12_ThetaY_35_40__1086->SetBinError(310,0.5270463);
   S12_ThetaY_35_40__1086->SetBinError(311,0.7071068);
   S12_ThetaY_35_40__1086->SetBinError(312,0.9279607);
   S12_ThetaY_35_40__1086->SetBinError(313,0.7637626);
   S12_ThetaY_35_40__1086->SetBinError(314,0.9574271);
   S12_ThetaY_35_40__1086->SetBinError(315,0.745356);
   S12_ThetaY_35_40__1086->SetBinError(316,0.372678);
   S12_ThetaY_35_40__1086->SetMinimum(0);
   S12_ThetaY_35_40__1086->SetMaximum(8.062599);
   S12_ThetaY_35_40__1086->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1086->SetLineColor(ci);
   S12_ThetaY_35_40__1086->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1086->SetMarkerColor(ci);
   S12_ThetaY_35_40__1086->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__1086->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__1086->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1086->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1086->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1086->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__1086->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__1086->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1086->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1086->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1086->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1086->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1086->Draw("AE");
   
   TH1D *ThetaY_35_40__1087 = new TH1D("ThetaY_35_40__1087","",630,-1575,1575);
   ThetaY_35_40__1087->SetBinContent(308,0.001584786);
   ThetaY_35_40__1087->SetBinContent(309,1);
   ThetaY_35_40__1087->SetBinContent(310,3.606973);
   ThetaY_35_40__1087->SetBinContent(311,5.324881);
   ThetaY_35_40__1087->SetBinContent(312,6.253566);
   ThetaY_35_40__1087->SetBinContent(313,6.727417);
   ThetaY_35_40__1087->SetBinContent(314,7.139461);
   ThetaY_35_40__1087->SetBinContent(315,7.263074);
   ThetaY_35_40__1087->SetBinContent(316,7.329635);
   ThetaY_35_40__1087->SetBinContent(317,7.179081);
   ThetaY_35_40__1087->SetBinContent(318,6.573693);
   ThetaY_35_40__1087->SetBinContent(319,6.137876);
   ThetaY_35_40__1087->SetBinContent(320,5.115689);
   ThetaY_35_40__1087->SetBinContent(321,3.423138);
   ThetaY_35_40__1087->SetBinContent(322,0.9461173);
   ThetaY_35_40__1087->SetBinContent(323,0.001584786);
   ThetaY_35_40__1087->SetBinError(308,0.001584786);
   ThetaY_35_40__1087->SetBinError(309,0.03980937);
   ThetaY_35_40__1087->SetBinError(310,0.07560609);
   ThetaY_35_40__1087->SetBinError(311,0.09186293);
   ThetaY_35_40__1087->SetBinError(312,0.09955181);
   ThetaY_35_40__1087->SetBinError(313,0.1032546);
   ThetaY_35_40__1087->SetBinError(314,0.1063697);
   ThetaY_35_40__1087->SetBinError(315,0.1072866);
   ThetaY_35_40__1087->SetBinError(316,0.1077771);
   ThetaY_35_40__1087->SetBinError(317,0.1066645);
   ThetaY_35_40__1087->SetBinError(318,0.1020681);
   ThetaY_35_40__1087->SetBinError(319,0.09862667);
   ThetaY_35_40__1087->SetBinError(320,0.0900404);
   ThetaY_35_40__1087->SetBinError(321,0.0736542);
   ThetaY_35_40__1087->SetBinError(322,0.038722);
   ThetaY_35_40__1087->SetBinError(323,0.001584786);
   ThetaY_35_40__1087->SetEntries(46709);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1087->SetLineColor(ci);
   ThetaY_35_40__1087->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1087->SetMarkerColor(ci);
   ThetaY_35_40__1087->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1087->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1087->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1087->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1087->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1087->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1087->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1087->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1087->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1087->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1087->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1087->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1087->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1087->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1087->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1087->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1087->Draw("AEsame");
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
   
   Double_t _fx3363[16] = {
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
   Double_t _fy3363[16] = {
   0,
   1,
   0.462068,
   0.5633929,
   0.8261953,
   0.5202591,
   0.7703663,
   0.4589425,
   0.1136937,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3363[16] = {
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
   Double_t _fely3363[16] = {
   0,
   0.3982651,
   0.1439298,
   0.1318825,
   0.1481451,
   0.1128848,
   0.1338942,
   0.1019693,
   0.0491307,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3363[16] = {
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
   Double_t _fehy3363[16] = {
   557.6961,
   0.6018091,
   0.1977798,
   0.167123,
   0.1774764,
   0.1405424,
   0.1595028,
   0.1276312,
   0.07698286,
   0.04274911,
   0.04668686,
   0.05000262,
   0.0599967,
   0.08967437,
   0.3248123,
   557.6961};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3363,_fy3363,_felx3363,_fehx3363,_fely3363,_fehy3363);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3363 = new TH1F("Graph_Graph3363","",100,-100,100);
   Graph_Graph3363->SetMinimum(0);
   Graph_Graph3363->SetMaximum(1.5);
   Graph_Graph3363->SetDirectory(0);
   Graph_Graph3363->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3363->SetLineColor(ci);
   Graph_Graph3363->GetXaxis()->SetRange(1,100);
   Graph_Graph3363->GetXaxis()->CenterTitle(true);
   Graph_Graph3363->GetXaxis()->SetLabelFont(42);
   Graph_Graph3363->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3363->GetXaxis()->SetTitleFont(42);
   Graph_Graph3363->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3363->GetYaxis()->CenterTitle(true);
   Graph_Graph3363->GetYaxis()->SetLabelFont(42);
   Graph_Graph3363->GetYaxis()->SetTitleFont(42);
   Graph_Graph3363->GetZaxis()->SetLabelFont(42);
   Graph_Graph3363->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3363->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3363);
   
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
   
   TH2D *ThetaY_vs_Y_35_40__1088 = new TH2D("ThetaY_vs_Y_35_40__1088","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8028,1);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8054,631);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8080,2276);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8106,3360);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8132,3946);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8158,4245);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8184,4505);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8210,4583);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8236,4625);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8262,4530);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8288,4148);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8314,3873);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8340,3228);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8366,2160);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8392,597);
   ThetaY_vs_Y_35_40__1088->SetBinContent(8418,1);
   ThetaY_vs_Y_35_40__1088->SetEntries(46709);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1088->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1088->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1088->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1088->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1088->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1088->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1088->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1088->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1088->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1088->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1088->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1088->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1088->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1088->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1088->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1088->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_35_40","Reco vertices","lpf");
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
