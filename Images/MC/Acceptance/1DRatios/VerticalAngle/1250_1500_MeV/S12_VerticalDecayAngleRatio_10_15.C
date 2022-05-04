void S12_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07064763,125,1.342305);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__900 = new TH1D("S12_ThetaY_10_15__900","",630,-1575,1575);
   S12_ThetaY_10_15__900->SetBinContent(308,0.04984424);
   S12_ThetaY_10_15__900->SetBinContent(309,0.3239875);
   S12_ThetaY_10_15__900->SetBinContent(310,0.6261682);
   S12_ThetaY_10_15__900->SetBinContent(311,0.741433);
   S12_ThetaY_10_15__900->SetBinContent(312,1);
   S12_ThetaY_10_15__900->SetBinContent(313,0.8878505);
   S12_ThetaY_10_15__900->SetBinContent(314,0.9376947);
   S12_ThetaY_10_15__900->SetBinContent(315,0.8785047);
   S12_ThetaY_10_15__900->SetBinContent(316,0.8722741);
   S12_ThetaY_10_15__900->SetBinContent(317,0.8909657);
   S12_ThetaY_10_15__900->SetBinContent(318,0.8317757);
   S12_ThetaY_10_15__900->SetBinContent(319,0.3987539);
   S12_ThetaY_10_15__900->SetBinContent(320,0.02180685);
   S12_ThetaY_10_15__900->SetBinError(308,0.01246106);
   S12_ThetaY_10_15__900->SetBinError(309,0.03176959);
   S12_ThetaY_10_15__900->SetBinError(310,0.0441665);
   S12_ThetaY_10_15__900->SetBinError(311,0.04805996);
   S12_ThetaY_10_15__900->SetBinError(312,0.05581456);
   S12_ThetaY_10_15__900->SetBinError(313,0.05259172);
   S12_ThetaY_10_15__900->SetBinError(314,0.05404782);
   S12_ThetaY_10_15__900->SetBinError(315,0.05231419);
   S12_ThetaY_10_15__900->SetBinError(316,0.05212835);
   S12_ThetaY_10_15__900->SetBinError(317,0.05268391);
   S12_ThetaY_10_15__900->SetBinError(318,0.05090385);
   S12_ThetaY_10_15__900->SetBinError(319,0.0352452);
   S12_ThetaY_10_15__900->SetBinError(320,0.008242216);
   S12_ThetaY_10_15__900->SetMinimum(0);
   S12_ThetaY_10_15__900->SetMaximum(1.20101);
   S12_ThetaY_10_15__900->SetEntries(2716);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__900->SetLineColor(ci);
   S12_ThetaY_10_15__900->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__900->SetMarkerColor(ci);
   S12_ThetaY_10_15__900->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__900->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__900->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__900->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__900->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__900->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__900->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__900->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__900->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__900->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__900->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__900->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__900->Draw("AE");
   
   TH1D *ThetaY_10_15__901 = new TH1D("ThetaY_10_15__901","",630,-1575,1575);
   ThetaY_10_15__901->SetBinContent(307,0.006445289);
   ThetaY_10_15__901->SetBinContent(308,0.1926725);
   ThetaY_10_15__901->SetBinContent(309,0.5561328);
   ThetaY_10_15__901->SetBinContent(310,0.7826982);
   ThetaY_10_15__901->SetBinContent(311,0.9155741);
   ThetaY_10_15__901->SetBinContent(312,1);
   ThetaY_10_15__901->SetBinContent(313,1.061855);
   ThetaY_10_15__901->SetBinContent(314,1.091827);
   ThetaY_10_15__901->SetBinContent(315,1.082588);
   ThetaY_10_15__901->SetBinContent(316,1.087293);
   ThetaY_10_15__901->SetBinContent(317,1.088543);
   ThetaY_10_15__901->SetBinContent(318,1.054528);
   ThetaY_10_15__901->SetBinContent(319,0.9942164);
   ThetaY_10_15__901->SetBinContent(320,0.9166279);
   ThetaY_10_15__901->SetBinContent(321,0.77466);
   ThetaY_10_15__901->SetBinContent(322,0.5543928);
   ThetaY_10_15__901->SetBinContent(323,0.1956623);
   ThetaY_10_15__901->SetBinContent(324,0.006420782);
   ThetaY_10_15__901->SetBinError(307,0.0003974335);
   ThetaY_10_15__901->SetBinError(308,0.002172967);
   ThetaY_10_15__901->SetBinError(309,0.003691752);
   ThetaY_10_15__901->SetBinError(310,0.004379661);
   ThetaY_10_15__901->SetBinError(311,0.004736855);
   ThetaY_10_15__901->SetBinError(312,0.004950434);
   ThetaY_10_15__901->SetBinError(313,0.005101242);
   ThetaY_10_15__901->SetBinError(314,0.005172735);
   ThetaY_10_15__901->SetBinError(315,0.005150802);
   ThetaY_10_15__901->SetBinError(316,0.005161984);
   ThetaY_10_15__901->SetBinError(317,0.00516495);
   ThetaY_10_15__901->SetBinError(318,0.005083611);
   ThetaY_10_15__901->SetBinError(319,0.004936098);
   ThetaY_10_15__901->SetBinError(320,0.00473958);
   ThetaY_10_15__901->SetBinError(321,0.004357113);
   ThetaY_10_15__901->SetBinError(322,0.003685973);
   ThetaY_10_15__901->SetBinError(323,0.002189762);
   ThetaY_10_15__901->SetBinError(324,0.0003966772);
   ThetaY_10_15__901->SetEntries(545242);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__901->SetLineColor(ci);
   ThetaY_10_15__901->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__901->SetMarkerColor(ci);
   ThetaY_10_15__901->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__901->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__901->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__901->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__901->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__901->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__901->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__901->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__901->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__901->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__901->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__901->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__901->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__901->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__901->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__901->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__901->Draw("AEsame");
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
   
   Double_t _fx3301[18] = {
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
   42.5};
   Double_t _fy3301[18] = {
   0,
   0.2586993,
   0.5825722,
   0.8000123,
   0.8098012,
   1,
   0.8361314,
   0.8588309,
   0.8114858,
   0.8022437,
   0.8184938,
   0.7887662,
   0.4010735,
   0.0237903,
   0,
   0,
   0,
   0};
   Double_t _felx3301[18] = {
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
   Double_t _fely3301[18] = {
   0,
   0.06405388,
   0.05716326,
   0.05655785,
   0.05262087,
   0.05600382,
   0.04966107,
   0.04964101,
   0.048448,
   0.04806504,
   0.04852521,
   0.04839037,
   0.03545926,
   0.008774142,
   0,
   0,
   0,
   0};
   Double_t _fehx3301[18] = {
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
   Double_t _fehy3301[18] = {
   0.8929609,
   0.08229677,
   0.06307039,
   0.06070685,
   0.05615805,
   0.05923311,
   0.05270323,
   0.05259788,
   0.05143175,
   0.05103596,
   0.05149219,
   0.05145543,
   0.03874287,
   0.01281558,
   0.007403812,
   0.01034556,
   0.02931547,
   0.8963811};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3301,_fy3301,_felx3301,_fehx3301,_fely3301,_fehy3301);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3301 = new TH1F("Graph_Graph3301","",100,-100,100);
   Graph_Graph3301->SetMinimum(0);
   Graph_Graph3301->SetMaximum(1.5);
   Graph_Graph3301->SetDirectory(0);
   Graph_Graph3301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3301->SetLineColor(ci);
   Graph_Graph3301->GetXaxis()->SetRange(1,100);
   Graph_Graph3301->GetXaxis()->CenterTitle(true);
   Graph_Graph3301->GetXaxis()->SetLabelFont(42);
   Graph_Graph3301->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3301->GetXaxis()->SetTitleFont(42);
   Graph_Graph3301->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3301->GetYaxis()->CenterTitle(true);
   Graph_Graph3301->GetYaxis()->SetLabelFont(42);
   Graph_Graph3301->GetYaxis()->SetTitleFont(42);
   Graph_Graph3301->GetZaxis()->SetLabelFont(42);
   Graph_Graph3301->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3301->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3301);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.20101,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__902 = new TH2D("ThetaY_vs_Y_10_15__902","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__902->SetBinContent(7997,263);
   ThetaY_vs_Y_10_15__902->SetBinContent(8023,7862);
   ThetaY_vs_Y_10_15__902->SetBinContent(8049,22693);
   ThetaY_vs_Y_10_15__902->SetBinContent(8075,31938);
   ThetaY_vs_Y_10_15__902->SetBinContent(8101,37360);
   ThetaY_vs_Y_10_15__902->SetBinContent(8127,40805);
   ThetaY_vs_Y_10_15__902->SetBinContent(8153,43329);
   ThetaY_vs_Y_10_15__902->SetBinContent(8179,44552);
   ThetaY_vs_Y_10_15__902->SetBinContent(8205,44175);
   ThetaY_vs_Y_10_15__902->SetBinContent(8231,44367);
   ThetaY_vs_Y_10_15__902->SetBinContent(8257,44418);
   ThetaY_vs_Y_10_15__902->SetBinContent(8283,43030);
   ThetaY_vs_Y_10_15__902->SetBinContent(8309,40569);
   ThetaY_vs_Y_10_15__902->SetBinContent(8335,37403);
   ThetaY_vs_Y_10_15__902->SetBinContent(8361,31610);
   ThetaY_vs_Y_10_15__902->SetBinContent(8387,22622);
   ThetaY_vs_Y_10_15__902->SetBinContent(8413,7984);
   ThetaY_vs_Y_10_15__902->SetBinContent(8439,262);
   ThetaY_vs_Y_10_15__902->SetEntries(545242);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__902->SetLineColor(ci);
   ThetaY_vs_Y_10_15__902->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__902->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__902->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__902->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__902->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__902->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__902->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__902->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__902->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__902->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__902->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__902->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__902->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__902->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__902->Draw("COL");
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
