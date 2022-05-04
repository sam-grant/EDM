void S18_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.3208365,125,6.095892);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_20_25__1476 = new TH1D("S18_ThetaY_20_25__1476","",630,-1575,1575);
   S18_ThetaY_20_25__1476->SetBinContent(311,1);
   S18_ThetaY_20_25__1476->SetBinContent(312,2.736842);
   S18_ThetaY_20_25__1476->SetBinContent(313,2.894737);
   S18_ThetaY_20_25__1476->SetBinContent(314,4.157895);
   S18_ThetaY_20_25__1476->SetBinContent(315,4.368421);
   S18_ThetaY_20_25__1476->SetBinContent(316,4.421053);
   S18_ThetaY_20_25__1476->SetBinContent(317,2.736842);
   S18_ThetaY_20_25__1476->SetBinError(311,0.2294157);
   S18_ThetaY_20_25__1476->SetBinError(312,0.3795317);
   S18_ThetaY_20_25__1476->SetBinError(313,0.3903262);
   S18_ThetaY_20_25__1476->SetBinError(314,0.4677997);
   S18_ThetaY_20_25__1476->SetBinError(315,0.4794965);
   S18_ThetaY_20_25__1476->SetBinError(316,0.4823764);
   S18_ThetaY_20_25__1476->SetBinError(317,0.3795317);
   S18_ThetaY_20_25__1476->SetMinimum(0);
   S18_ThetaY_20_25__1476->SetMaximum(5.454219);
   S18_ThetaY_20_25__1476->SetEntries(424);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1476->SetLineColor(ci);
   S18_ThetaY_20_25__1476->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_20_25__1476->SetMarkerColor(ci);
   S18_ThetaY_20_25__1476->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_20_25__1476->GetXaxis()->SetRange(296,335);
   S18_ThetaY_20_25__1476->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1476->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1476->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1476->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_20_25__1476->GetYaxis()->CenterTitle(true);
   S18_ThetaY_20_25__1476->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1476->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1476->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_20_25__1476->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_20_25__1476->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_20_25__1476->Draw("AE");
   
   TH1D *ThetaY_20_25__1477 = new TH1D("ThetaY_20_25__1477","",630,-1575,1575);
   ThetaY_20_25__1477->SetBinContent(310,0.006898138);
   ThetaY_20_25__1477->SetBinContent(311,1);
   ThetaY_20_25__1477->SetBinContent(312,3.031961);
   ThetaY_20_25__1477->SetBinContent(313,4.058864);
   ThetaY_20_25__1477->SetBinContent(314,4.684755);
   ThetaY_20_25__1477->SetBinContent(315,4.915613);
   ThetaY_20_25__1477->SetBinContent(316,4.958381);
   ThetaY_20_25__1477->SetBinContent(317,4.736031);
   ThetaY_20_25__1477->SetBinContent(318,4.00138);
   ThetaY_20_25__1477->SetBinContent(319,2.96436);
   ThetaY_20_25__1477->SetBinContent(320,0.9917222);
   ThetaY_20_25__1477->SetBinContent(321,0.008277765);
   ThetaY_20_25__1477->SetBinError(310,0.001259422);
   ThetaY_20_25__1477->SetBinError(311,0.0151637);
   ThetaY_20_25__1477->SetBinError(312,0.02640384);
   ThetaY_20_25__1477->SetBinError(313,0.03054974);
   ThetaY_20_25__1477->SetBinError(314,0.03282077);
   ThetaY_20_25__1477->SetBinError(315,0.03361972);
   ThetaY_20_25__1477->SetBinError(316,0.03376566);
   ThetaY_20_25__1477->SetBinError(317,0.0329999);
   ThetaY_20_25__1477->SetBinError(318,0.03033264);
   ThetaY_20_25__1477->SetBinError(319,0.02610783);
   ThetaY_20_25__1477->SetBinError(320,0.01510081);
   ThetaY_20_25__1477->SetBinError(321,0.001379628);
   ThetaY_20_25__1477->SetEntries(153773);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1477->SetLineColor(ci);
   ThetaY_20_25__1477->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1477->SetMarkerColor(ci);
   ThetaY_20_25__1477->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1477->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1477->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1477->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1477->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1477->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1477->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1477->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1477->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1477->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1477->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1477->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1477->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1477->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1477->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1477->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1477->Draw("AEsame");
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
   
   Double_t _fx3493[12] = {
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
   27.5};
   Double_t _fy3493[12] = {
   0,
   1,
   0.9026639,
   0.7131889,
   0.8875373,
   0.8886829,
   0.8916323,
   0.5778767,
   0,
   0,
   0,
   0};
   Double_t _felx3493[12] = {
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
   Double_t _fely3493[12] = {
   0,
   0.2278519,
   0.1250143,
   0.09601972,
   0.09983459,
   0.09753532,
   0.09727778,
   0.07997743,
   0,
   0,
   0,
   0};
   Double_t _fehx3493[12] = {
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
   Double_t _fehy3493[12] = {
   14.48663,
   0.2868662,
   0.1436659,
   0.1099136,
   0.1117552,
   0.1088812,
   0.1085224,
   0.09189816,
   0.0242169,
   0.03268928,
   0.09772551,
   12.01004};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3493,_fy3493,_felx3493,_fehx3493,_fely3493,_fehy3493);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3493 = new TH1F("Graph_Graph3493","",100,-100,100);
   Graph_Graph3493->SetMinimum(0);
   Graph_Graph3493->SetMaximum(1.5);
   Graph_Graph3493->SetDirectory(0);
   Graph_Graph3493->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3493->SetLineColor(ci);
   Graph_Graph3493->GetXaxis()->SetRange(1,100);
   Graph_Graph3493->GetXaxis()->CenterTitle(true);
   Graph_Graph3493->GetXaxis()->SetLabelFont(42);
   Graph_Graph3493->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3493->GetXaxis()->SetTitleFont(42);
   Graph_Graph3493->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3493->GetYaxis()->CenterTitle(true);
   Graph_Graph3493->GetYaxis()->SetLabelFont(42);
   Graph_Graph3493->GetYaxis()->SetTitleFont(42);
   Graph_Graph3493->GetZaxis()->SetLabelFont(42);
   Graph_Graph3493->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3493->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3493);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.454219,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1478 = new TH2D("ThetaY_vs_Y_20_25__1478","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8077,30);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8103,4349);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8129,13186);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8155,17652);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8181,20374);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8207,21378);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8233,21564);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8259,20597);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8285,17402);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8311,12892);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8337,4313);
   ThetaY_vs_Y_20_25__1478->SetBinContent(8363,36);
   ThetaY_vs_Y_20_25__1478->SetEntries(153773);
   ThetaY_vs_Y_20_25__1478->SetContour(20);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(0,0);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(1,1078.2);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(2,2156.4);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(3,3234.6);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(4,4312.8);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(5,5391);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(6,6469.2);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(7,7547.4);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(8,8625.6);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(9,9703.8);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(10,10782);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(11,11860.2);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(12,12938.4);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(13,14016.6);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(14,15094.8);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(15,16173);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(16,17251.2);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(17,18329.4);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(18,19407.6);
   ThetaY_vs_Y_20_25__1478->SetContourLevel(19,20485.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1478->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1478->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1478->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1478->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1478->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1478->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1478->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1478->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1478->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1478->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1478->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1478->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1478->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1478->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1478->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1478->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_20_25","Reco vertices","lpf");
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
