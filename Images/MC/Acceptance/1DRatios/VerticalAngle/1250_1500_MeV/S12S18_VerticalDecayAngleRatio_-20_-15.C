void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07073436,125,1.343953);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__996 = new TH1D("S12S18_ThetaY_mI20_mI15__996","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(310,0.002415459);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(311,0.007246377);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(312,0.1690821);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(313,0.7681159);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(314,1.062802);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(315,0.9565217);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(316,1.048309);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(317,1.070048);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(318,1.045894);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(319,1);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(320,0.8937198);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(321,0.736715);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(322,0.3381643);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(323,0.1014493);
   S12S18_ThetaY_mI20_mI15__996->SetBinContent(324,0.004830918);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(310,0.002415459);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(311,0.004183698);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(312,0.02020918);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(313,0.0430738);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(314,0.05066709);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(315,0.04806703);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(316,0.05032045);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(317,0.05083953);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(318,0.05026244);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(319,0.04914732);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(320,0.04646228);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(321,0.04218418);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(322,0.0285801);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(323,0.01565396);
   S12S18_ThetaY_mI20_mI15__996->SetBinError(324,0.003415975);
   S12S18_ThetaY_mI20_mI15__996->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__996->SetMaximum(1.202484);
   S12S18_ThetaY_mI20_mI15__996->SetEntries(3811);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__996->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__996->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__996->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__996->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__996->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__996->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__996->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__996->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__996->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__996->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__996->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__996->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__996->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__996->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__996->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__996->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__997 = new TH1D("ThetaY_mI20_mI15__997","",630,-1575,1575);
   ThetaY_mI20_mI15__997->SetBinContent(307,0.006654807);
   ThetaY_mI20_mI15__997->SetBinContent(308,0.196218);
   ThetaY_mI20_mI15__997->SetBinContent(309,0.5470119);
   ThetaY_mI20_mI15__997->SetBinContent(310,0.7790736);
   ThetaY_mI20_mI15__997->SetBinContent(311,0.9095012);
   ThetaY_mI20_mI15__997->SetBinContent(312,0.9943335);
   ThetaY_mI20_mI15__997->SetBinContent(313,1.056269);
   ThetaY_mI20_mI15__997->SetBinContent(314,1.081505);
   ThetaY_mI20_mI15__997->SetBinContent(315,1.093167);
   ThetaY_mI20_mI15__997->SetBinContent(316,1.089675);
   ThetaY_mI20_mI15__997->SetBinContent(317,1.072083);
   ThetaY_mI20_mI15__997->SetBinContent(318,1.047111);
   ThetaY_mI20_mI15__997->SetBinContent(319,1);
   ThetaY_mI20_mI15__997->SetBinContent(320,0.9097648);
   ThetaY_mI20_mI15__997->SetBinContent(321,0.785399);
   ThetaY_mI20_mI15__997->SetBinContent(322,0.5483297);
   ThetaY_mI20_mI15__997->SetBinContent(323,0.1980299);
   ThetaY_mI20_mI15__997->SetBinContent(324,0.00681953);
   ThetaY_mI20_mI15__997->SetBinError(307,0.0004682306);
   ThetaY_mI20_mI15__997->SetBinError(308,0.002542503);
   ThetaY_mI20_mI15__997->SetBinError(309,0.004245125);
   ThetaY_mI20_mI15__997->SetBinError(310,0.005066188);
   ThetaY_mI20_mI15__997->SetBinError(311,0.00547386);
   ThetaY_mI20_mI15__997->SetBinError(312,0.005723452);
   ThetaY_mI20_mI15__997->SetBinError(313,0.005899013);
   ThetaY_mI20_mI15__997->SetBinError(314,0.005969065);
   ThetaY_mI20_mI15__997->SetBinError(315,0.006001162);
   ThetaY_mI20_mI15__997->SetBinError(316,0.005991569);
   ThetaY_mI20_mI15__997->SetBinError(317,0.005943006);
   ThetaY_mI20_mI15__997->SetBinError(318,0.005873383);
   ThetaY_mI20_mI15__997->SetBinError(319,0.005739738);
   ThetaY_mI20_mI15__997->SetBinError(320,0.005474653);
   ThetaY_mI20_mI15__997->SetBinError(321,0.005086713);
   ThetaY_mI20_mI15__997->SetBinError(322,0.004250235);
   ThetaY_mI20_mI15__997->SetBinError(323,0.002554215);
   ThetaY_mI20_mI15__997->SetBinError(324,0.0004739901);
   ThetaY_mI20_mI15__997->SetEntries(404344);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__997->SetLineColor(ci);
   ThetaY_mI20_mI15__997->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__997->SetMarkerColor(ci);
   ThetaY_mI20_mI15__997->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__997->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__997->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__997->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__997->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__997->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__997->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__997->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__997->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__997->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__997->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__997->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__997->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__997->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__997->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__997->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__997->Draw("AEsame");
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
   
   Double_t _fx3333[18] = {
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
   Double_t _fy3333[18] = {
   0,
   0,
   0,
   0.003100425,
   0.007967418,
   0.1700457,
   0.727197,
   0.9827065,
   0.8750003,
   0.9620382,
   0.9981023,
   0.9988377,
   1,
   0.9823636,
   0.9380137,
   0.616717,
   0.5122927,
   0.7083946};
   Double_t _felx3333[18] = {
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
   Double_t _fely3333[18] = {
   0,
   0,
   0,
   0.002564835,
   0.00433632,
   0.02029886,
   0.04095875,
   0.047143,
   0.0442127,
   0.04646271,
   0.04772423,
   0.04830754,
   0.04946058,
   0.05138752,
   0.05402226,
   0.05227677,
   0.07900078,
   0.4589375};
   Double_t _fehx3333[18] = {
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
   Double_t _fehy3333[18] = {
   0.67128,
   0.02266663,
   0.008129912,
   0.007130006,
   0.007750967,
   0.02288046,
   0.04333471,
   0.04946222,
   0.04650663,
   0.04876424,
   0.05006416,
   0.05070396,
   0.05197131,
   0.05415055,
   0.05722929,
   0.05691113,
   0.09225144,
   0.9448152};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3333,_fy3333,_felx3333,_fehx3333,_fely3333,_fehy3333);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3333 = new TH1F("Graph_Graph3333","",100,-100,100);
   Graph_Graph3333->SetMinimum(0);
   Graph_Graph3333->SetMaximum(1.5);
   Graph_Graph3333->SetDirectory(0);
   Graph_Graph3333->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3333->SetLineColor(ci);
   Graph_Graph3333->GetXaxis()->SetRange(1,100);
   Graph_Graph3333->GetXaxis()->CenterTitle(true);
   Graph_Graph3333->GetXaxis()->SetLabelFont(42);
   Graph_Graph3333->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3333->GetXaxis()->SetTitleFont(42);
   Graph_Graph3333->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3333->GetYaxis()->CenterTitle(true);
   Graph_Graph3333->GetYaxis()->SetLabelFont(42);
   Graph_Graph3333->GetYaxis()->SetTitleFont(42);
   Graph_Graph3333->GetZaxis()->SetLabelFont(42);
   Graph_Graph3333->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3333->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3333);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.202484,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__998 = new TH2D("ThetaY_vs_Y_mI20_mI15__998","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(7991,202);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8017,5956);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8043,16604);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8069,23648);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8095,27607);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8121,30182);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8147,32062);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8173,32828);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8199,33182);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8225,33076);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8251,32542);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8277,31784);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8303,30354);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8329,27615);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8355,23840);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8381,16644);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8407,6011);
   ThetaY_vs_Y_mI20_mI15__998->SetBinContent(8433,207);
   ThetaY_vs_Y_mI20_mI15__998->SetEntries(404344);
   ThetaY_vs_Y_mI20_mI15__998->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(1,1659.1);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(2,3318.2);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(3,4977.3);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(4,6636.4);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(5,8295.5);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(6,9954.6);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(7,11613.7);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(8,13272.8);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(9,14931.9);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(10,16591);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(11,18250.1);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(12,19909.2);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(13,21568.3);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(14,23227.4);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(15,24886.5);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(16,26545.6);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(17,28204.7);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(18,29863.8);
   ThetaY_vs_Y_mI20_mI15__998->SetContourLevel(19,31522.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__998->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__998->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__998->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__998->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__998->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__998->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__998->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__998->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__998->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__998->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__998->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__998->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__998->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__998->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__998->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__998->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-20_-15","Reco vertices","lpf");
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
