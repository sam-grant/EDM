void S18_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.1062176,125,2.018134);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__1473 = new TH1D("S18_ThetaY_15_20__1473","",630,-1575,1575);
   S18_ThetaY_15_20__1473->SetBinContent(311,0.2068966);
   S18_ThetaY_15_20__1473->SetBinContent(312,1);
   S18_ThetaY_15_20__1473->SetBinContent(313,1.091954);
   S18_ThetaY_15_20__1473->SetBinContent(314,1.448276);
   S18_ThetaY_15_20__1473->SetBinContent(315,1.275862);
   S18_ThetaY_15_20__1473->SetBinContent(316,1.609195);
   S18_ThetaY_15_20__1473->SetBinContent(317,1.287356);
   S18_ThetaY_15_20__1473->SetBinContent(318,0.06896552);
   S18_ThetaY_15_20__1473->SetBinError(311,0.04876598);
   S18_ThetaY_15_20__1473->SetBinError(312,0.1072113);
   S18_ThetaY_15_20__1473->SetBinError(313,0.1120321);
   S18_ThetaY_15_20__1473->SetBinError(314,0.1290227);
   S18_ThetaY_15_20__1473->SetBinError(315,0.1210995);
   S18_ThetaY_15_20__1473->SetBinError(316,0.1360018);
   S18_ThetaY_15_20__1473->SetBinError(317,0.1216437);
   S18_ThetaY_15_20__1473->SetBinError(318,0.02815505);
   S18_ThetaY_15_20__1473->SetMinimum(0);
   S18_ThetaY_15_20__1473->SetMaximum(1.805699);
   S18_ThetaY_15_20__1473->SetEntries(695);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1473->SetLineColor(ci);
   S18_ThetaY_15_20__1473->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1473->SetMarkerColor(ci);
   S18_ThetaY_15_20__1473->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__1473->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__1473->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1473->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1473->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1473->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__1473->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__1473->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1473->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1473->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1473->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1473->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1473->Draw("AE");
   
   TH1D *ThetaY_15_20__1474 = new TH1D("ThetaY_15_20__1474","",630,-1575,1575);
   ThetaY_15_20__1474->SetBinContent(310,0.003226982);
   ThetaY_15_20__1474->SetBinContent(311,0.3312341);
   ThetaY_15_20__1474->SetBinContent(312,1);
   ThetaY_15_20__1474->SetBinContent(313,1.366106);
   ThetaY_15_20__1474->SetBinContent(314,1.555353);
   ThetaY_15_20__1474->SetBinContent(315,1.641545);
   ThetaY_15_20__1474->SetBinContent(316,1.631083);
   ThetaY_15_20__1474->SetBinContent(317,1.561651);
   ThetaY_15_20__1474->SetBinContent(318,1.371311);
   ThetaY_15_20__1474->SetBinContent(319,0.986988);
   ThetaY_15_20__1474->SetBinContent(320,0.330037);
   ThetaY_15_20__1474->SetBinContent(321,0.002342164);
   ThetaY_15_20__1474->SetBinError(310,0.0004098271);
   ThetaY_15_20__1474->SetBinError(311,0.00415212);
   ThetaY_15_20__1474->SetBinError(312,0.007214436);
   ThetaY_15_20__1474->SetBinError(313,0.008432273);
   ThetaY_15_20__1474->SetBinError(314,0.008997398);
   ThetaY_15_20__1474->SetBinError(315,0.009243337);
   ThetaY_15_20__1474->SetBinError(316,0.009213836);
   ThetaY_15_20__1474->SetBinError(317,0.009015595);
   ThetaY_15_20__1474->SetBinError(318,0.008448321);
   ThetaY_15_20__1474->SetBinError(319,0.007167345);
   ThetaY_15_20__1474->SetBinError(320,0.00414461);
   ThetaY_15_20__1474->SetBinError(321,0.0003491492);
   ThetaY_15_20__1474->SetEntries(226346);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1474->SetLineColor(ci);
   ThetaY_15_20__1474->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1474->SetMarkerColor(ci);
   ThetaY_15_20__1474->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1474->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1474->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1474->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1474->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1474->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1474->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1474->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1474->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1474->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1474->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1474->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1474->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1474->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1474->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1474->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1474->Draw("AEsame");
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
   
   Double_t _fx3492[12] = {
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
   Double_t _fy3492[12] = {
   0,
   0.6246234,
   1,
   0.7993185,
   0.9311556,
   0.7772326,
   0.9865809,
   0.824356,
   0.05029166,
   0,
   0,
   0};
   Double_t _felx3492[12] = {
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
   Double_t _fely3492[12] = {
   0,
   0.1460412,
   0.1072441,
   0.08201028,
   0.08301687,
   0.07378876,
   0.08346617,
   0.07792166,
   0.0199504,
   0,
   0,
   0};
   Double_t _fehx3492[12] = {
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
   Double_t _fehy3492[12] = {
   6.655904,
   0.1849841,
   0.1194181,
   0.09089287,
   0.09077303,
   0.08115274,
   0.09084784,
   0.08566263,
   0.03004335,
   0.02144119,
   0.06412688,
   9.22224};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3492,_fy3492,_felx3492,_fehx3492,_fely3492,_fehy3492);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3492 = new TH1F("Graph_Graph3492","",100,-100,100);
   Graph_Graph3492->SetMinimum(0);
   Graph_Graph3492->SetMaximum(1.5);
   Graph_Graph3492->SetDirectory(0);
   Graph_Graph3492->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3492->SetLineColor(ci);
   Graph_Graph3492->GetXaxis()->SetRange(1,100);
   Graph_Graph3492->GetXaxis()->CenterTitle(true);
   Graph_Graph3492->GetXaxis()->SetLabelFont(42);
   Graph_Graph3492->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3492->GetXaxis()->SetTitleFont(42);
   Graph_Graph3492->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3492->GetYaxis()->CenterTitle(true);
   Graph_Graph3492->GetYaxis()->SetLabelFont(42);
   Graph_Graph3492->GetYaxis()->SetTitleFont(42);
   Graph_Graph3492->GetZaxis()->SetLabelFont(42);
   Graph_Graph3492->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3492->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3492);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.805699,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1475 = new TH2D("ThetaY_vs_Y_15_20__1475","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8076,62);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8102,6364);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8128,19213);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8154,26247);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8180,29883);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8206,31539);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8232,31338);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8258,30004);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8284,26347);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8310,18963);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8336,6341);
   ThetaY_vs_Y_15_20__1475->SetBinContent(8362,45);
   ThetaY_vs_Y_15_20__1475->SetEntries(226346);
   ThetaY_vs_Y_15_20__1475->SetContour(20);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(1,1576.95);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(2,3153.9);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(3,4730.85);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(4,6307.8);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(5,7884.75);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(6,9461.7);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(7,11038.65);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(8,12615.6);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(9,14192.55);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(10,15769.5);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(11,17346.45);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(12,18923.4);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(13,20500.35);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(14,22077.3);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(15,23654.25);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(16,25231.2);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(17,26808.15);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(18,28385.1);
   ThetaY_vs_Y_15_20__1475->SetContourLevel(19,29962.05);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1475->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1475->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1475->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1475->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1475->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1475->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1475->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1475->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1475->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1475->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1475->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1475->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1475->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1475->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1475->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1475->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
