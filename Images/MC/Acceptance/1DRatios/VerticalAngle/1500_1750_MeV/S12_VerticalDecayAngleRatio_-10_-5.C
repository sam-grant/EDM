void S12_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06579859,125,1.250173);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__1059 = new TH1D("S12_ThetaY_mI10_mI5__1059","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(311,0.06010929);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(312,0.5327869);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(313,0.8469945);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(314,1);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(315,0.9754098);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(316,0.8551913);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(317,0.8469945);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(318,0.8715847);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(319,0.7896175);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(320,0.5163934);
   S12_ThetaY_mI10_mI5__1059->SetBinContent(321,0.1666667);
   S12_ThetaY_mI10_mI5__1059->SetBinError(311,0.01281534);
   S12_ThetaY_mI10_mI5__1059->SetBinError(312,0.03815366);
   S12_ThetaY_mI10_mI5__1059->SetBinError(313,0.04810606);
   S12_ThetaY_mI10_mI5__1059->SetBinError(314,0.05227084);
   S12_ThetaY_mI10_mI5__1059->SetBinError(315,0.05162416);
   S12_ThetaY_mI10_mI5__1059->SetBinError(316,0.04833827);
   S12_ThetaY_mI10_mI5__1059->SetBinError(317,0.04810606);
   S12_ThetaY_mI10_mI5__1059->SetBinError(318,0.04879937);
   S12_ThetaY_mI10_mI5__1059->SetBinError(319,0.04644809);
   S12_ThetaY_mI10_mI5__1059->SetBinError(320,0.0375621);
   S12_ThetaY_mI10_mI5__1059->SetBinError(321,0.02133948);
   S12_ThetaY_mI10_mI5__1059->SetMinimum(0);
   S12_ThetaY_mI10_mI5__1059->SetMaximum(1.118576);
   S12_ThetaY_mI10_mI5__1059->SetEntries(2731);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1059->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__1059->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1059->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__1059->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__1059->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__1059->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1059->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1059->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1059->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__1059->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__1059->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1059->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1059->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1059->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1059->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1059->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1060 = new TH1D("ThetaY_mI10_mI5__1060","",630,-1575,1575);
   ThetaY_mI10_mI5__1060->SetBinContent(308,0.0007816476);
   ThetaY_mI10_mI5__1060->SetBinContent(309,0.1418418);
   ThetaY_mI10_mI5__1060->SetBinContent(310,0.5030902);
   ThetaY_mI10_mI5__1060->SetBinContent(311,0.7361121);
   ThetaY_mI10_mI5__1060->SetBinContent(312,0.8675743);
   ThetaY_mI10_mI5__1060->SetBinContent(313,0.9533193);
   ThetaY_mI10_mI5__1060->SetBinContent(314,1);
   ThetaY_mI10_mI5__1060->SetBinContent(315,1.016887);
   ThetaY_mI10_mI5__1060->SetBinContent(316,1.013961);
   ThetaY_mI10_mI5__1060->SetBinContent(317,0.9968189);
   ThetaY_mI10_mI5__1060->SetBinContent(318,0.9540464);
   ThetaY_mI10_mI5__1060->SetBinContent(319,0.8688286);
   ThetaY_mI10_mI5__1060->SetBinContent(320,0.7286956);
   ThetaY_mI10_mI5__1060->SetBinContent(321,0.5017996);
   ThetaY_mI10_mI5__1060->SetBinContent(322,0.1399149);
   ThetaY_mI10_mI5__1060->SetBinContent(323,0.001108849);
   ThetaY_mI10_mI5__1060->SetBinError(308,0.0001192001);
   ThetaY_mI10_mI5__1060->SetBinError(309,0.001605733);
   ThetaY_mI10_mI5__1060->SetBinError(310,0.003024087);
   ThetaY_mI10_mI5__1060->SetBinError(311,0.003657996);
   ThetaY_mI10_mI5__1060->SetBinError(312,0.003971226);
   ThetaY_mI10_mI5__1060->SetBinError(313,0.004162847);
   ThetaY_mI10_mI5__1060->SetBinError(314,0.004263549);
   ThetaY_mI10_mI5__1060->SetBinError(315,0.004299398);
   ThetaY_mI10_mI5__1060->SetBinError(316,0.004293207);
   ThetaY_mI10_mI5__1060->SetBinError(317,0.004256762);
   ThetaY_mI10_mI5__1060->SetBinError(318,0.004164434);
   ThetaY_mI10_mI5__1060->SetBinError(319,0.003974096);
   ThetaY_mI10_mI5__1060->SetBinError(320,0.003639522);
   ThetaY_mI10_mI5__1060->SetBinError(321,0.003020205);
   ThetaY_mI10_mI5__1060->SetBinError(322,0.001594789);
   ThetaY_mI10_mI5__1060->SetBinError(323,0.0001419736);
   ThetaY_mI10_mI5__1060->SetEntries(573488);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1060->SetLineColor(ci);
   ThetaY_mI10_mI5__1060->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1060->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1060->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1060->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1060->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1060->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1060->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1060->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1060->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1060->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1060->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1060->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1060->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1060->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1060->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1060->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1060->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1060->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1060->Draw("AEsame");
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
   
   Double_t _fx3354[16] = {
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
   Double_t _fy3354[16] = {
   0,
   0,
   0,
   0.08165779,
   0.6141109,
   0.8884689,
   1,
   0.9592114,
   0.8434167,
   0.8496975,
   0.9135664,
   0.90883,
   0.7086546,
   0.3321379,
   0,
   0};
   Double_t _felx3354[16] = {
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
   Double_t _fely3354[16] = {
   0,
   0,
   0,
   0.01728069,
   0.04402891,
   0.05058281,
   0.05242002,
   0.0509043,
   0.04778035,
   0.04836927,
   0.05127775,
   0.05359041,
   0.05162206,
   0.04245509,
   0,
   0};
   Double_t _fehx3354[16] = {
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
   Double_t _fehy3354[16] = {
   6.575019,
   0.03546703,
   0.009998765,
   0.0213919,
   0.04730567,
   0.05354901,
   0.05524364,
   0.05368114,
   0.05056789,
   0.05120525,
   0.05424104,
   0.0568488,
   0.05552816,
   0.04826426,
   0.03595553,
   4.605487};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3354,_fy3354,_felx3354,_fehx3354,_fely3354,_fehy3354);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3354 = new TH1F("Graph_Graph3354","",100,-100,100);
   Graph_Graph3354->SetMinimum(0);
   Graph_Graph3354->SetMaximum(1.5);
   Graph_Graph3354->SetDirectory(0);
   Graph_Graph3354->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3354->SetLineColor(ci);
   Graph_Graph3354->GetXaxis()->SetRange(1,100);
   Graph_Graph3354->GetXaxis()->CenterTitle(true);
   Graph_Graph3354->GetXaxis()->SetLabelFont(42);
   Graph_Graph3354->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3354->GetXaxis()->SetTitleFont(42);
   Graph_Graph3354->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3354->GetYaxis()->CenterTitle(true);
   Graph_Graph3354->GetYaxis()->SetLabelFont(42);
   Graph_Graph3354->GetYaxis()->SetTitleFont(42);
   Graph_Graph3354->GetZaxis()->SetLabelFont(42);
   Graph_Graph3354->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3354->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3354);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.118576,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1061 = new TH2D("ThetaY_vs_Y_mI10_mI5__1061","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8019,43);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8045,7803);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8071,27676);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8097,40495);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8123,47727);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8149,52444);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8175,55012);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8201,55941);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8227,55780);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8253,54837);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8279,52484);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8305,47796);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8331,40087);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8357,27605);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8383,7697);
   ThetaY_vs_Y_mI10_mI5__1061->SetBinContent(8409,61);
   ThetaY_vs_Y_mI10_mI5__1061->SetEntries(573488);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1061->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1061->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1061->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1061->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1061->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1061->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1061->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1061->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1061->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1061->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1061->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1061->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1061->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1061->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1061->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1061->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
