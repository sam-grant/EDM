void S12_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__729 = new TH1D("S12_ThetaY_10_15__729","",630,-1575,1575);
   S12_ThetaY_10_15__729->SetBinContent(306,0.003215434);
   S12_ThetaY_10_15__729->SetBinContent(307,0.03858521);
   S12_ThetaY_10_15__729->SetBinContent(308,0.3504823);
   S12_ThetaY_10_15__729->SetBinContent(309,0.5884244);
   S12_ThetaY_10_15__729->SetBinContent(310,0.8199357);
   S12_ThetaY_10_15__729->SetBinContent(311,0.8971061);
   S12_ThetaY_10_15__729->SetBinContent(312,0.9453376);
   S12_ThetaY_10_15__729->SetBinContent(313,0.8392283);
   S12_ThetaY_10_15__729->SetBinContent(314,1);
   S12_ThetaY_10_15__729->SetBinContent(315,0.9196141);
   S12_ThetaY_10_15__729->SetBinContent(316,0.829582);
   S12_ThetaY_10_15__729->SetBinContent(317,0.8713826);
   S12_ThetaY_10_15__729->SetBinContent(318,0.8392283);
   S12_ThetaY_10_15__729->SetBinContent(319,0.6688103);
   S12_ThetaY_10_15__729->SetBinContent(320,0.1768489);
   S12_ThetaY_10_15__729->SetBinContent(321,0.006430868);
   S12_ThetaY_10_15__729->SetBinError(306,0.003215434);
   S12_ThetaY_10_15__729->SetBinError(307,0.01113859);
   S12_ThetaY_10_15__729->SetBinError(308,0.03357012);
   S12_ThetaY_10_15__729->SetBinError(309,0.04349759);
   S12_ThetaY_10_15__729->SetBinError(310,0.05134636);
   S12_ThetaY_10_15__729->SetBinError(311,0.05370834);
   S12_ThetaY_10_15__729->SetBinError(312,0.05513321);
   S12_ThetaY_10_15__729->SetBinError(313,0.05194693);
   S12_ThetaY_10_15__729->SetBinError(314,0.0567048);
   S12_ThetaY_10_15__729->SetBinError(315,0.05437792);
   S12_ThetaY_10_15__729->SetBinError(316,0.05164752);
   S12_ThetaY_10_15__729->SetBinError(317,0.05293273);
   S12_ThetaY_10_15__729->SetBinError(318,0.05194693);
   S12_ThetaY_10_15__729->SetBinError(319,0.04637365);
   S12_ThetaY_10_15__729->SetBinError(320,0.0238463);
   S12_ThetaY_10_15__729->SetBinError(321,0.00454731);
   S12_ThetaY_10_15__729->SetMinimum(0);
   S12_ThetaY_10_15__729->SetMaximum(1.1);
   S12_ThetaY_10_15__729->SetEntries(3046);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__729->SetLineColor(ci);
   S12_ThetaY_10_15__729->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__729->SetMarkerColor(ci);
   S12_ThetaY_10_15__729->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__729->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__729->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__729->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__729->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__729->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__729->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__729->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__729->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__729->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__729->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__729->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__729->Draw("AE");
   
   TH1D *ThetaY_10_15__730 = new TH1D("ThetaY_10_15__730","",630,-1575,1575);
   ThetaY_10_15__730->SetBinContent(305,4.775207e-05);
   ThetaY_10_15__730->SetBinContent(306,0.05102309);
   ThetaY_10_15__730->SetBinContent(307,0.2999069);
   ThetaY_10_15__730->SetBinContent(308,0.5708283);
   ThetaY_10_15__730->SetBinContent(309,0.7443593);
   ThetaY_10_15__730->SetBinContent(310,0.8387651);
   ThetaY_10_15__730->SetBinContent(311,0.9145238);
   ThetaY_10_15__730->SetBinContent(312,0.9592436);
   ThetaY_10_15__730->SetBinContent(313,0.9674092);
   ThetaY_10_15__730->SetBinContent(314,1);
   ThetaY_10_15__730->SetBinContent(315,0.994986);
   ThetaY_10_15__730->SetBinContent(316,0.98035);
   ThetaY_10_15__730->SetBinContent(317,0.9896617);
   ThetaY_10_15__730->SetBinContent(318,0.9783683);
   ThetaY_10_15__730->SetBinContent(319,0.9567366);
   ThetaY_10_15__730->SetBinContent(320,0.9085787);
   ThetaY_10_15__730->SetBinContent(321,0.8516104);
   ThetaY_10_15__730->SetBinContent(322,0.7367906);
   ThetaY_10_15__730->SetBinContent(323,0.5699687);
   ThetaY_10_15__730->SetBinContent(324,0.299119);
   ThetaY_10_15__730->SetBinContent(325,0.04944727);
   ThetaY_10_15__730->SetBinError(305,3.376581e-05);
   ThetaY_10_15__730->SetBinError(306,0.001103734);
   ThetaY_10_15__730->SetBinError(307,0.002675927);
   ThetaY_10_15__730->SetBinError(308,0.003691763);
   ThetaY_10_15__730->SetBinError(309,0.004215726);
   ThetaY_10_15__730->SetBinError(310,0.004475085);
   ThetaY_10_15__730->SetBinError(311,0.004672815);
   ThetaY_10_15__730->SetBinError(312,0.004785701);
   ThetaY_10_15__730->SetBinError(313,0.004806027);
   ThetaY_10_15__730->SetBinError(314,0.004886311);
   ThetaY_10_15__730->SetBinError(315,0.004874046);
   ThetaY_10_15__730->SetBinError(316,0.004838065);
   ThetaY_10_15__730->SetBinError(317,0.004860987);
   ThetaY_10_15__730->SetBinError(318,0.004833173);
   ThetaY_10_15__730->SetBinError(319,0.004779443);
   ThetaY_10_15__730->SetBinError(320,0.004657602);
   ThetaY_10_15__730->SetBinError(321,0.004509222);
   ThetaY_10_15__730->SetBinError(322,0.004194239);
   ThetaY_10_15__730->SetBinError(323,0.003688983);
   ThetaY_10_15__730->SetBinError(324,0.00267241);
   ThetaY_10_15__730->SetBinError(325,0.001086556);
   ThetaY_10_15__730->SetEntries(614077);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__730->SetLineColor(ci);
   ThetaY_10_15__730->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__730->SetMarkerColor(ci);
   ThetaY_10_15__730->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__730->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__730->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__730->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__730->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__730->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__730->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__730->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__730->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__730->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__730->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__730->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__730->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__730->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__730->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__730->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__730->Draw("AEsame");
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
   
   Double_t _fx3244[21] = {
   -52.5,
   -47.5,
   -42.5,
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
   37.5,
   42.5,
   47.5};
   Double_t _fy3244[21] = {
   0,
   0.0630192,
   0.1286573,
   0.6139891,
   0.7905113,
   0.977551,
   0.9809544,
   0.9855032,
   0.8675008,
   1,
   0.9242483,
   0.84621,
   0.8804854,
   0.8577836,
   0.6990537,
   0.1946434,
   0.00755142,
   0,
   0,
   0,
   0};
   Double_t _felx3244[21] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3244[21] = {
   0,
   0.05213705,
   0.03663275,
   0.05885167,
   0.05855306,
   0.06139727,
   0.05890564,
   0.05765213,
   0.05383447,
   0.05688369,
   0.05480647,
   0.05281312,
   0.05362651,
   0.05322955,
   0.04855663,
   0.02618424,
   0.004877603,
   0,
   0,
   0,
   0};
   Double_t _fehx3244[21] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3244[21] = {
   203.4319,
   0.1450262,
   0.04892006,
   0.06478508,
   0.06306147,
   0.06538197,
   0.06255537,
   0.06112917,
   0.05728505,
   0.06021672,
   0.05815833,
   0.05621817,
   0.05699792,
   0.05664121,
   0.0520538,
   0.02996879,
   0.009960441,
   0.008034658,
   0.01038638,
   0.01979185,
   0.1197703};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3244,_fy3244,_felx3244,_fehx3244,_fely3244,_fehy3244);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3244 = new TH1F("Graph_Graph3244","",100,-100,100);
   Graph_Graph3244->SetMinimum(0);
   Graph_Graph3244->SetMaximum(1.5);
   Graph_Graph3244->SetDirectory(0);
   Graph_Graph3244->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3244->SetLineColor(ci);
   Graph_Graph3244->GetXaxis()->SetRange(1,100);
   Graph_Graph3244->GetXaxis()->CenterTitle(true);
   Graph_Graph3244->GetXaxis()->SetLabelFont(42);
   Graph_Graph3244->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3244->GetXaxis()->SetTitleFont(42);
   Graph_Graph3244->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3244->GetYaxis()->CenterTitle(true);
   Graph_Graph3244->GetYaxis()->SetLabelFont(42);
   Graph_Graph3244->GetYaxis()->SetTitleFont(42);
   Graph_Graph3244->GetZaxis()->SetLabelFont(42);
   Graph_Graph3244->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3244->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3244);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__731 = new TH2D("ThetaY_vs_Y_10_15__731","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__731->SetBinContent(7945,2);
   ThetaY_vs_Y_10_15__731->SetBinContent(7971,2137);
   ThetaY_vs_Y_10_15__731->SetBinContent(7997,12561);
   ThetaY_vs_Y_10_15__731->SetBinContent(8023,23908);
   ThetaY_vs_Y_10_15__731->SetBinContent(8049,31176);
   ThetaY_vs_Y_10_15__731->SetBinContent(8075,35130);
   ThetaY_vs_Y_10_15__731->SetBinContent(8101,38303);
   ThetaY_vs_Y_10_15__731->SetBinContent(8127,40176);
   ThetaY_vs_Y_10_15__731->SetBinContent(8153,40518);
   ThetaY_vs_Y_10_15__731->SetBinContent(8179,41883);
   ThetaY_vs_Y_10_15__731->SetBinContent(8205,41673);
   ThetaY_vs_Y_10_15__731->SetBinContent(8231,41060);
   ThetaY_vs_Y_10_15__731->SetBinContent(8257,41450);
   ThetaY_vs_Y_10_15__731->SetBinContent(8283,40977);
   ThetaY_vs_Y_10_15__731->SetBinContent(8309,40071);
   ThetaY_vs_Y_10_15__731->SetBinContent(8335,38054);
   ThetaY_vs_Y_10_15__731->SetBinContent(8361,35668);
   ThetaY_vs_Y_10_15__731->SetBinContent(8387,30859);
   ThetaY_vs_Y_10_15__731->SetBinContent(8413,23872);
   ThetaY_vs_Y_10_15__731->SetBinContent(8439,12528);
   ThetaY_vs_Y_10_15__731->SetBinContent(8465,2071);
   ThetaY_vs_Y_10_15__731->SetEntries(614077);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__731->SetLineColor(ci);
   ThetaY_vs_Y_10_15__731->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__731->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__731->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__731->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__731->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__731->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__731->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__731->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__731->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__731->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__731->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__731->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__731->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__731->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__731->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_10_15","Reco vertices","lpf");
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
