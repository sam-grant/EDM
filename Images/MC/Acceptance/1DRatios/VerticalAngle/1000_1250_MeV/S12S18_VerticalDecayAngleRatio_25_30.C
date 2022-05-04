void S12S18_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1113677,125,2.115987);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_25_30__852 = new TH1D("S12S18_ThetaY_25_30__852","",630,-1575,1575);
   S12S18_ThetaY_25_30__852->SetBinContent(306,0.08264463);
   S12S18_ThetaY_25_30__852->SetBinContent(307,0.446281);
   S12S18_ThetaY_25_30__852->SetBinContent(308,1);
   S12S18_ThetaY_25_30__852->SetBinContent(309,1.024793);
   S12S18_ThetaY_25_30__852->SetBinContent(310,1.14876);
   S12S18_ThetaY_25_30__852->SetBinContent(311,1.289256);
   S12S18_ThetaY_25_30__852->SetBinContent(312,1.553719);
   S12S18_ThetaY_25_30__852->SetBinContent(313,1.46281);
   S12S18_ThetaY_25_30__852->SetBinContent(314,1.578512);
   S12S18_ThetaY_25_30__852->SetBinContent(315,1.322314);
   S12S18_ThetaY_25_30__852->SetBinContent(316,1.31405);
   S12S18_ThetaY_25_30__852->SetBinContent(317,1.033058);
   S12S18_ThetaY_25_30__852->SetBinContent(318,0.1487603);
   S12S18_ThetaY_25_30__852->SetBinContent(319,0.008264463);
   S12S18_ThetaY_25_30__852->SetBinError(306,0.02613453);
   S12S18_ThetaY_25_30__852->SetBinError(307,0.06073115);
   S12S18_ThetaY_25_30__852->SetBinError(308,0.09090909);
   S12S18_ThetaY_25_30__852->SetBinError(309,0.09202916);
   S12S18_ThetaY_25_30__852->SetBinError(310,0.09743658);
   S12S18_ThetaY_25_30__852->SetBinError(311,0.1032231);
   S12S18_ThetaY_25_30__852->SetBinError(312,0.1133166);
   S12S18_ThetaY_25_30__852->SetBinError(313,0.1099515);
   S12S18_ThetaY_25_30__852->SetBinError(314,0.1142171);
   S12S18_ThetaY_25_30__852->SetBinError(315,0.1045381);
   S12S18_ThetaY_25_30__852->SetBinError(316,0.1042109);
   S12S18_ThetaY_25_30__852->SetBinError(317,0.0923995);
   S12S18_ThetaY_25_30__852->SetBinError(318,0.03506315);
   S12S18_ThetaY_25_30__852->SetBinError(319,0.008264463);
   S12S18_ThetaY_25_30__852->SetMinimum(0);
   S12S18_ThetaY_25_30__852->SetMaximum(1.893251);
   S12S18_ThetaY_25_30__852->SetEntries(1623);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__852->SetLineColor(ci);
   S12S18_ThetaY_25_30__852->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_25_30__852->SetMarkerColor(ci);
   S12S18_ThetaY_25_30__852->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_25_30__852->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_25_30__852->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__852->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__852->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__852->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_25_30__852->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_25_30__852->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__852->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__852->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_25_30__852->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_25_30__852->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_25_30__852->Draw("AE");
   
   TH1D *ThetaY_25_30__853 = new TH1D("ThetaY_25_30__853","",630,-1575,1575);
   ThetaY_25_30__853->SetBinContent(305,0.0002620888);
   ThetaY_25_30__853->SetBinContent(306,0.08845499);
   ThetaY_25_30__853->SetBinContent(307,0.5085834);
   ThetaY_25_30__853->SetBinContent(308,1);
   ThetaY_25_30__853->SetBinContent(309,1.251081);
   ThetaY_25_30__853->SetBinContent(310,1.472939);
   ThetaY_25_30__853->SetBinContent(311,1.574499);
   ThetaY_25_30__853->SetBinContent(312,1.659153);
   ThetaY_25_30__853->SetBinContent(313,1.685231);
   ThetaY_25_30__853->SetBinContent(314,1.697681);
   ThetaY_25_30__853->SetBinContent(315,1.699515);
   ThetaY_25_30__853->SetBinContent(316,1.70017);
   ThetaY_25_30__853->SetBinContent(317,1.721137);
   ThetaY_25_30__853->SetBinContent(318,1.703709);
   ThetaY_25_30__853->SetBinContent(319,1.668589);
   ThetaY_25_30__853->SetBinContent(320,1.549731);
   ThetaY_25_30__853->SetBinContent(321,1.47425);
   ThetaY_25_30__853->SetBinContent(322,1.28738);
   ThetaY_25_30__853->SetBinContent(323,0.9925305);
   ThetaY_25_30__853->SetBinContent(324,0.5241777);
   ThetaY_25_30__853->SetBinContent(325,0.08517888);
   ThetaY_25_30__853->SetBinContent(326,0.0001310444);
   ThetaY_25_30__853->SetBinError(305,0.0001853248);
   ThetaY_25_30__853->SetBinError(306,0.003404634);
   ThetaY_25_30__853->SetBinError(307,0.008163763);
   ThetaY_25_30__853->SetBinError(308,0.01144746);
   ThetaY_25_30__853->SetBinError(309,0.01280419);
   ThetaY_25_30__853->SetBinError(310,0.01389318);
   ThetaY_25_30__853->SetBinError(311,0.01436417);
   ThetaY_25_30__853->SetBinError(312,0.01474526);
   ThetaY_25_30__853->SetBinError(313,0.01486069);
   ThetaY_25_30__853->SetBinError(314,0.01491548);
   ThetaY_25_30__853->SetBinError(315,0.01492354);
   ThetaY_25_30__853->SetBinError(316,0.01492641);
   ThetaY_25_30__853->SetBinError(317,0.01501817);
   ThetaY_25_30__853->SetBinError(318,0.01494194);
   ThetaY_25_30__853->SetBinError(319,0.01478713);
   ThetaY_25_30__853->SetBinError(320,0.01425074);
   ThetaY_25_30__853->SetBinError(321,0.01389936);
   ThetaY_25_30__853->SetBinError(322,0.01298861);
   ThetaY_25_30__853->SetBinError(323,0.01140463);
   ThetaY_25_30__853->SetBinError(324,0.008287977);
   ThetaY_25_30__853->SetBinError(325,0.00334099);
   ThetaY_25_30__853->SetBinError(326,0.0001310444);
   ThetaY_25_30__853->SetEntries(193403);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__853->SetLineColor(ci);
   ThetaY_25_30__853->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__853->SetMarkerColor(ci);
   ThetaY_25_30__853->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__853->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__853->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__853->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__853->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__853->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__853->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__853->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__853->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__853->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__853->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__853->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__853->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__853->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__853->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__853->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__853->Draw("AEsame");
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
   
   Double_t _fx3285[22] = {
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
   47.5,
   52.5};
   Double_t _fy3285[22] = {
   0,
   0.9343128,
   0.8774981,
   1,
   0.8191263,
   0.7799101,
   0.818836,
   0.9364529,
   0.8680173,
   0.9298053,
   0.7780537,
   0.7728929,
   0.6002181,
   0.0873156,
   0.004952966,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3285[22] = {
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
   2.5,
   2.5};
   Double_t _fely3285[22] = {
   0,
   0.2923991,
   0.1198519,
   0.09149442,
   0.07393218,
   0.06647588,
   0.06591014,
   0.06873918,
   0.06562707,
   0.06771059,
   0.06182178,
   0.06160164,
   0.05386579,
   0.02040103,
   0.004097384,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3285[22] = {
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
   2.5,
   2.5};
   Double_t _fehy3285[22] = {
   95.26594,
   0.4028755,
   0.1374935,
   0.1002881,
   0.08093507,
   0.07240524,
   0.07144765,
   0.073986,
   0.07079244,
   0.07283628,
   0.06694578,
   0.06672384,
   0.05893583,
   0.02583464,
   0.01139095,
   0.00981863,
   0.01032139,
   0.01181972,
   0.01533142,
   0.0290332,
   0.1788779,
   334.438};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3285,_fy3285,_felx3285,_fehx3285,_fely3285,_fehy3285);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3285 = new TH1F("Graph_Graph3285","",100,-100,100);
   Graph_Graph3285->SetMinimum(0);
   Graph_Graph3285->SetMaximum(1.5);
   Graph_Graph3285->SetDirectory(0);
   Graph_Graph3285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3285->SetLineColor(ci);
   Graph_Graph3285->GetXaxis()->SetRange(1,100);
   Graph_Graph3285->GetXaxis()->CenterTitle(true);
   Graph_Graph3285->GetXaxis()->SetLabelFont(42);
   Graph_Graph3285->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3285->GetXaxis()->SetTitleFont(42);
   Graph_Graph3285->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3285->GetYaxis()->CenterTitle(true);
   Graph_Graph3285->GetYaxis()->SetLabelFont(42);
   Graph_Graph3285->GetYaxis()->SetTitleFont(42);
   Graph_Graph3285->GetZaxis()->SetLabelFont(42);
   Graph_Graph3285->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3285->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3285);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.893251,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__854 = new TH2D("ThetaY_vs_Y_25_30__854","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__854->SetBinContent(7948,2);
   ThetaY_vs_Y_25_30__854->SetBinContent(7974,675);
   ThetaY_vs_Y_25_30__854->SetBinContent(8000,3881);
   ThetaY_vs_Y_25_30__854->SetBinContent(8026,7631);
   ThetaY_vs_Y_25_30__854->SetBinContent(8052,9547);
   ThetaY_vs_Y_25_30__854->SetBinContent(8078,11240);
   ThetaY_vs_Y_25_30__854->SetBinContent(8104,12015);
   ThetaY_vs_Y_25_30__854->SetBinContent(8130,12661);
   ThetaY_vs_Y_25_30__854->SetBinContent(8156,12860);
   ThetaY_vs_Y_25_30__854->SetBinContent(8182,12955);
   ThetaY_vs_Y_25_30__854->SetBinContent(8208,12969);
   ThetaY_vs_Y_25_30__854->SetBinContent(8234,12974);
   ThetaY_vs_Y_25_30__854->SetBinContent(8260,13134);
   ThetaY_vs_Y_25_30__854->SetBinContent(8286,13001);
   ThetaY_vs_Y_25_30__854->SetBinContent(8312,12733);
   ThetaY_vs_Y_25_30__854->SetBinContent(8338,11826);
   ThetaY_vs_Y_25_30__854->SetBinContent(8364,11250);
   ThetaY_vs_Y_25_30__854->SetBinContent(8390,9824);
   ThetaY_vs_Y_25_30__854->SetBinContent(8416,7574);
   ThetaY_vs_Y_25_30__854->SetBinContent(8442,4000);
   ThetaY_vs_Y_25_30__854->SetBinContent(8468,650);
   ThetaY_vs_Y_25_30__854->SetBinContent(8494,1);
   ThetaY_vs_Y_25_30__854->SetEntries(193403);
   ThetaY_vs_Y_25_30__854->SetContour(20);
   ThetaY_vs_Y_25_30__854->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__854->SetContourLevel(1,656.7);
   ThetaY_vs_Y_25_30__854->SetContourLevel(2,1313.4);
   ThetaY_vs_Y_25_30__854->SetContourLevel(3,1970.1);
   ThetaY_vs_Y_25_30__854->SetContourLevel(4,2626.8);
   ThetaY_vs_Y_25_30__854->SetContourLevel(5,3283.5);
   ThetaY_vs_Y_25_30__854->SetContourLevel(6,3940.2);
   ThetaY_vs_Y_25_30__854->SetContourLevel(7,4596.9);
   ThetaY_vs_Y_25_30__854->SetContourLevel(8,5253.6);
   ThetaY_vs_Y_25_30__854->SetContourLevel(9,5910.3);
   ThetaY_vs_Y_25_30__854->SetContourLevel(10,6567);
   ThetaY_vs_Y_25_30__854->SetContourLevel(11,7223.7);
   ThetaY_vs_Y_25_30__854->SetContourLevel(12,7880.4);
   ThetaY_vs_Y_25_30__854->SetContourLevel(13,8537.1);
   ThetaY_vs_Y_25_30__854->SetContourLevel(14,9193.8);
   ThetaY_vs_Y_25_30__854->SetContourLevel(15,9850.5);
   ThetaY_vs_Y_25_30__854->SetContourLevel(16,10507.2);
   ThetaY_vs_Y_25_30__854->SetContourLevel(17,11163.9);
   ThetaY_vs_Y_25_30__854->SetContourLevel(18,11820.6);
   ThetaY_vs_Y_25_30__854->SetContourLevel(19,12477.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__854->SetLineColor(ci);
   ThetaY_vs_Y_25_30__854->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__854->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__854->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__854->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__854->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__854->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__854->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__854->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__854->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__854->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__854->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__854->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__854->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__854->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__854->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_25_30","Reco vertices","lpf");
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
