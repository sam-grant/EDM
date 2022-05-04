void S12_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-0.06983482,125,1.326862);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__1074 = new TH1D("S12_ThetaY_15_20__1074","",630,-1575,1575);
   S12_ThetaY_15_20__1074->SetBinContent(309,0.1050228);
   S12_ThetaY_15_20__1074->SetBinContent(310,0.4109589);
   S12_ThetaY_15_20__1074->SetBinContent(311,0.7442922);
   S12_ThetaY_15_20__1074->SetBinContent(312,0.7214612);
   S12_ThetaY_15_20__1074->SetBinContent(313,1);
   S12_ThetaY_15_20__1074->SetBinContent(314,0.9680365);
   S12_ThetaY_15_20__1074->SetBinContent(315,0.8858447);
   S12_ThetaY_15_20__1074->SetBinContent(316,1.03653);
   S12_ThetaY_15_20__1074->SetBinContent(317,0.8584475);
   S12_ThetaY_15_20__1074->SetBinContent(318,0.4292237);
   S12_ThetaY_15_20__1074->SetBinContent(319,0.02739726);
   S12_ThetaY_15_20__1074->SetBinError(309,0.02189877);
   S12_ThetaY_15_20__1074->SetBinError(310,0.04331887);
   S12_ThetaY_15_20__1074->SetBinError(311,0.05829747);
   S12_ThetaY_15_20__1074->SetBinError(312,0.05739637);
   S12_ThetaY_15_20__1074->SetBinError(313,0.06757374);
   S12_ThetaY_15_20__1074->SetBinError(314,0.06648502);
   S12_ThetaY_15_20__1074->SetBinError(315,0.06359995);
   S12_ThetaY_15_20__1074->SetBinError(316,0.06879689);
   S12_ThetaY_15_20__1074->SetBinError(317,0.06260872);
   S12_ThetaY_15_20__1074->SetBinError(318,0.04427105);
   S12_ThetaY_15_20__1074->SetBinError(319,0.01118488);
   S12_ThetaY_15_20__1074->SetMinimum(0);
   S12_ThetaY_15_20__1074->SetMaximum(1.187192);
   S12_ThetaY_15_20__1074->SetEntries(1574);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1074->SetLineColor(ci);
   S12_ThetaY_15_20__1074->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__1074->SetMarkerColor(ci);
   S12_ThetaY_15_20__1074->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__1074->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__1074->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1074->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1074->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1074->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__1074->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__1074->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1074->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1074->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__1074->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__1074->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__1074->Draw("AE");
   
   TH1D *ThetaY_15_20__1075 = new TH1D("ThetaY_15_20__1075","",630,-1575,1575);
   ThetaY_15_20__1075->SetBinContent(308,0.0007295334);
   ThetaY_15_20__1075->SetBinContent(309,0.143052);
   ThetaY_15_20__1075->SetBinContent(310,0.5286897);
   ThetaY_15_20__1075->SetBinContent(311,0.7624259);
   ThetaY_15_20__1075->SetBinContent(312,0.9217496);
   ThetaY_15_20__1075->SetBinContent(313,1);
   ThetaY_15_20__1075->SetBinContent(314,1.06312);
   ThetaY_15_20__1075->SetBinContent(315,1.07825);
   ThetaY_15_20__1075->SetBinContent(316,1.079265);
   ThetaY_15_20__1075->SetBinContent(317,1.057316);
   ThetaY_15_20__1075->SetBinContent(318,1.008247);
   ThetaY_15_20__1075->SetBinContent(319,0.9229866);
   ThetaY_15_20__1075->SetBinContent(320,0.7668348);
   ThetaY_15_20__1075->SetBinContent(321,0.529102);
   ThetaY_15_20__1075->SetBinContent(322,0.1459701);
   ThetaY_15_20__1075->SetBinContent(323,0.001459067);
   ThetaY_15_20__1075->SetBinError(308,0.0001521182);
   ThetaY_15_20__1075->SetBinError(309,0.002130128);
   ThetaY_15_20__1075->SetBinError(310,0.004095049);
   ThetaY_15_20__1075->SetBinError(311,0.004917649);
   ThetaY_15_20__1075->SetBinError(312,0.005407109);
   ThetaY_15_20__1075->SetBinError(313,0.005631949);
   ThetaY_15_20__1075->SetBinError(314,0.005806975);
   ThetaY_15_20__1075->SetBinError(315,0.00584815);
   ThetaY_15_20__1075->SetBinError(316,0.005850902);
   ThetaY_15_20__1075->SetBinError(317,0.0057911);
   ThetaY_15_20__1075->SetBinError(318,0.005655124);
   ThetaY_15_20__1075->SetBinError(319,0.005410737);
   ThetaY_15_20__1075->SetBinError(320,0.004931847);
   ThetaY_15_20__1075->SetBinError(321,0.004096646);
   ThetaY_15_20__1075->SetBinError(322,0.002151744);
   ThetaY_15_20__1075->SetBinError(323,0.0002151277);
   ThetaY_15_20__1075->SetEntries(347087);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1075->SetLineColor(ci);
   ThetaY_15_20__1075->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__1075->SetMarkerColor(ci);
   ThetaY_15_20__1075->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__1075->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__1075->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__1075->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1075->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1075->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__1075->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__1075->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__1075->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__1075->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__1075->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__1075->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__1075->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__1075->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__1075->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__1075->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__1075->Draw("AEsame");
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
   
   Double_t _fx3359[16] = {
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
   Double_t _fy3359[16] = {
   0,
   0.7341585,
   0.7773159,
   0.9762159,
   0.7827084,
   1,
   0.9105614,
   0.8215576,
   0.960403,
   0.811912,
   0.4257129,
   0.02968327,
   0,
   0,
   0,
   0};
   Double_t _felx3359[16] = {
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
   Double_t _fely3359[16] = {
   0,
   0.152333,
   0.08200192,
   0.07664166,
   0.06237084,
   0.06775521,
   0.06268469,
   0.05910063,
   0.06390844,
   0.05932782,
   0.0438948,
   0.01177506,
   0,
   0,
   0,
   0};
   Double_t _fehx3359[16] = {
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
   Double_t _fehy3359[16] = {
   11.99684,
   0.1878166,
   0.09115059,
   0.08291205,
   0.06755291,
   0.07251153,
   0.06715806,
   0.06351504,
   0.06831152,
   0.06383182,
   0.04867363,
   0.01773195,
   0.010963,
   0.0158891,
   0.05760202,
   5.878402};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3359,_fy3359,_felx3359,_fehx3359,_fely3359,_fehy3359);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3359 = new TH1F("Graph_Graph3359","",100,-100,100);
   Graph_Graph3359->SetMinimum(0);
   Graph_Graph3359->SetMaximum(1.5);
   Graph_Graph3359->SetDirectory(0);
   Graph_Graph3359->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3359->SetLineColor(ci);
   Graph_Graph3359->GetXaxis()->SetRange(1,100);
   Graph_Graph3359->GetXaxis()->CenterTitle(true);
   Graph_Graph3359->GetXaxis()->SetLabelFont(42);
   Graph_Graph3359->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3359->GetXaxis()->SetTitleFont(42);
   Graph_Graph3359->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3359->GetYaxis()->CenterTitle(true);
   Graph_Graph3359->GetYaxis()->SetLabelFont(42);
   Graph_Graph3359->GetYaxis()->SetTitleFont(42);
   Graph_Graph3359->GetZaxis()->SetLabelFont(42);
   Graph_Graph3359->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3359->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3359);
   
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
   
   TH2D *ThetaY_vs_Y_15_20__1076 = new TH2D("ThetaY_vs_Y_15_20__1076","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8024,23);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8050,4510);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8076,16668);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8102,24037);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8128,29060);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8154,31527);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8180,33517);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8206,33994);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8232,34026);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8258,33334);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8284,31787);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8310,29099);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8336,24176);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8362,16681);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8388,4602);
   ThetaY_vs_Y_15_20__1076->SetBinContent(8414,46);
   ThetaY_vs_Y_15_20__1076->SetEntries(347087);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__1076->SetLineColor(ci);
   ThetaY_vs_Y_15_20__1076->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__1076->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__1076->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1076->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1076->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1076->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1076->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__1076->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__1076->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__1076->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1076->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1076->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__1076->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__1076->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__1076->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
