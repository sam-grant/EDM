void S18_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.06983482,125,1.326862);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__1131 = new TH1D("S18_ThetaY_15_20__1131","",630,-1575,1575);
   S18_ThetaY_15_20__1131->SetBinContent(309,0.08695652);
   S18_ThetaY_15_20__1131->SetBinContent(310,0.4009662);
   S18_ThetaY_15_20__1131->SetBinContent(311,0.6038647);
   S18_ThetaY_15_20__1131->SetBinContent(312,0.7729469);
   S18_ThetaY_15_20__1131->SetBinContent(313,1);
   S18_ThetaY_15_20__1131->SetBinContent(314,1.019324);
   S18_ThetaY_15_20__1131->SetBinContent(315,1.05314);
   S18_ThetaY_15_20__1131->SetBinContent(316,1.048309);
   S18_ThetaY_15_20__1131->SetBinContent(317,0.8888889);
   S18_ThetaY_15_20__1131->SetBinContent(318,0.5024155);
   S18_ThetaY_15_20__1131->SetBinContent(319,0.05797101);
   S18_ThetaY_15_20__1131->SetBinContent(320,0.004830918);
   S18_ThetaY_15_20__1131->SetBinError(309,0.02049585);
   S18_ThetaY_15_20__1131->SetBinError(310,0.04401176);
   S18_ThetaY_15_20__1131->SetBinError(311,0.0540113);
   S18_ThetaY_15_20__1131->SetBinError(312,0.06110681);
   S18_ThetaY_15_20__1131->SetBinError(313,0.0695048);
   S18_ThetaY_15_20__1131->SetBinError(314,0.07017314);
   S18_ThetaY_15_20__1131->SetBinError(315,0.07132765);
   S18_ThetaY_15_20__1131->SetBinError(316,0.07116386);
   S18_ThetaY_15_20__1131->SetBinError(317,0.06552976);
   S18_ThetaY_15_20__1131->SetBinError(318,0.04926589);
   S18_ThetaY_15_20__1131->SetBinError(319,0.01673479);
   S18_ThetaY_15_20__1131->SetBinError(320,0.004830918);
   S18_ThetaY_15_20__1131->SetMinimum(0);
   S18_ThetaY_15_20__1131->SetMaximum(1.187192);
   S18_ThetaY_15_20__1131->SetEntries(1540);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1131->SetLineColor(ci);
   S18_ThetaY_15_20__1131->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__1131->SetMarkerColor(ci);
   S18_ThetaY_15_20__1131->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__1131->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__1131->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1131->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1131->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1131->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__1131->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__1131->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1131->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1131->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__1131->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__1131->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__1131->Draw("AE");
   
   TH1D *ThetaY_15_20__1132 = new TH1D("ThetaY_15_20__1132","",630,-1575,1575);
   ThetaY_15_20__1132->SetBinContent(308,0.0007295334);
   ThetaY_15_20__1132->SetBinContent(309,0.143052);
   ThetaY_15_20__1132->SetBinContent(310,0.5286897);
   ThetaY_15_20__1132->SetBinContent(311,0.7624259);
   ThetaY_15_20__1132->SetBinContent(312,0.9217496);
   ThetaY_15_20__1132->SetBinContent(313,1);
   ThetaY_15_20__1132->SetBinContent(314,1.06312);
   ThetaY_15_20__1132->SetBinContent(315,1.07825);
   ThetaY_15_20__1132->SetBinContent(316,1.079265);
   ThetaY_15_20__1132->SetBinContent(317,1.057316);
   ThetaY_15_20__1132->SetBinContent(318,1.008247);
   ThetaY_15_20__1132->SetBinContent(319,0.9229866);
   ThetaY_15_20__1132->SetBinContent(320,0.7668348);
   ThetaY_15_20__1132->SetBinContent(321,0.529102);
   ThetaY_15_20__1132->SetBinContent(322,0.1459701);
   ThetaY_15_20__1132->SetBinContent(323,0.001459067);
   ThetaY_15_20__1132->SetBinError(308,0.0001521182);
   ThetaY_15_20__1132->SetBinError(309,0.002130128);
   ThetaY_15_20__1132->SetBinError(310,0.004095049);
   ThetaY_15_20__1132->SetBinError(311,0.004917649);
   ThetaY_15_20__1132->SetBinError(312,0.005407109);
   ThetaY_15_20__1132->SetBinError(313,0.005631949);
   ThetaY_15_20__1132->SetBinError(314,0.005806975);
   ThetaY_15_20__1132->SetBinError(315,0.00584815);
   ThetaY_15_20__1132->SetBinError(316,0.005850902);
   ThetaY_15_20__1132->SetBinError(317,0.0057911);
   ThetaY_15_20__1132->SetBinError(318,0.005655124);
   ThetaY_15_20__1132->SetBinError(319,0.005410737);
   ThetaY_15_20__1132->SetBinError(320,0.004931847);
   ThetaY_15_20__1132->SetBinError(321,0.004096646);
   ThetaY_15_20__1132->SetBinError(322,0.002151744);
   ThetaY_15_20__1132->SetBinError(323,0.0002151277);
   ThetaY_15_20__1132->SetEntries(347087);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1132->SetLineColor(ci);
   ThetaY_15_20__1132->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1132->SetMarkerColor(ci);
   ThetaY_15_20__1132->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1132->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1132->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1132->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1132->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1132->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1132->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1132->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1132->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1132->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1132->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1132->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1132->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1132->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1132->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1132->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1132->Draw("AEsame");
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
   
   Double_t _fx3378[16] = {
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
   Double_t _fy3378[16] = {
   0,
   0.6078666,
   0.758415,
   0.7920308,
   0.8385649,
   1,
   0.9588035,
   0.976712,
   0.9713173,
   0.8407032,
   0.498306,
   0.06280807,
   0.006299816,
   0,
   0,
   0};
   Double_t _felx3378[16] = {
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
   Double_t _fely3378[16] = {
   0,
   0.1422015,
   0.08328301,
   0.07092881,
   0.06640601,
   0.0696752,
   0.06616076,
   0.06631121,
   0.06609532,
   0.06209088,
   0.04886325,
   0.01787893,
   0.00521154,
   0,
   0,
   0};
   Double_t _fehx3378[16] = {
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
   Double_t _fehy3378[16] = {
   12.69231,
   0.1801567,
   0.09297779,
   0.07758729,
   0.07188757,
   0.07470998,
   0.07089368,
   0.07097574,
   0.07075565,
   0.06685721,
   0.05390854,
   0.02387291,
   0.01448758,
   0.01681021,
   0.06094126,
   6.219179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3378,_fy3378,_felx3378,_fehx3378,_fely3378,_fehy3378);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3378 = new TH1F("Graph_Graph3378","",100,-100,100);
   Graph_Graph3378->SetMinimum(0);
   Graph_Graph3378->SetMaximum(1.5);
   Graph_Graph3378->SetDirectory(0);
   Graph_Graph3378->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3378->SetLineColor(ci);
   Graph_Graph3378->GetXaxis()->SetRange(1,100);
   Graph_Graph3378->GetXaxis()->CenterTitle(true);
   Graph_Graph3378->GetXaxis()->SetLabelFont(42);
   Graph_Graph3378->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3378->GetXaxis()->SetTitleFont(42);
   Graph_Graph3378->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3378->GetYaxis()->CenterTitle(true);
   Graph_Graph3378->GetYaxis()->SetLabelFont(42);
   Graph_Graph3378->GetYaxis()->SetTitleFont(42);
   Graph_Graph3378->GetZaxis()->SetLabelFont(42);
   Graph_Graph3378->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3378->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3378);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.187192,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__1133 = new TH2D("ThetaY_vs_Y_15_20__1133","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8024,23);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8050,4510);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8076,16668);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8102,24037);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8128,29060);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8154,31527);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8180,33517);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8206,33994);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8232,34026);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8258,33334);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8284,31787);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8310,29099);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8336,24176);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8362,16681);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8388,4602);
   ThetaY_vs_Y_15_20__1133->SetBinContent(8414,46);
   ThetaY_vs_Y_15_20__1133->SetEntries(347087);
   ThetaY_vs_Y_15_20__1133->SetContour(20);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(1,1701.3);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(2,3402.6);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(3,5103.9);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(4,6805.2);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(5,8506.5);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(6,10207.8);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(7,11909.1);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(8,13610.4);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(9,15311.7);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(10,17013);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(11,18714.3);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(12,20415.6);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(13,22116.9);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(14,23818.2);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(15,25519.5);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(16,27220.8);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(17,28922.1);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(18,30623.4);
   ThetaY_vs_Y_15_20__1133->SetContourLevel(19,32324.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1133->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1133->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1133->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1133->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1133->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1133->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1133->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1133->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1133->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1133->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1133->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1133->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1133->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1133->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1133->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1133->Draw("COL");
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
