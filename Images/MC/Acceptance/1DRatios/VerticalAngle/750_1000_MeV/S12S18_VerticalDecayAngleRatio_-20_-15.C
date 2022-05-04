void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:46 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06548155,125,1.244149);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__654 = new TH1D("S12S18_ThetaY_mI20_mI15__654","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(310,0.005714286);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(311,0.1371429);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(312,0.7285714);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(313,0.8971429);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(314,0.9857143);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(315,0.9057143);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(316,1);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(317,0.9857143);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(318,0.9742857);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(319,0.9571429);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(320,0.8971429);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(321,0.8685714);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(322,0.7971429);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(323,0.7342857);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(324,0.5914286);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(325,0.2114286);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(326,0.03428571);
   S12S18_ThetaY_mI20_mI15__654->SetBinContent(327,0.002857143);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(310,0.00404061);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(311,0.01979487);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(312,0.04562491);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(313,0.0506287);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(314,0.05306907);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(315,0.05086998);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(316,0.05345225);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(317,0.05306907);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(318,0.05276053);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(319,0.0522943);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(320,0.0506287);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(321,0.04981599);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(322,0.04772369);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(323,0.04580348);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(324,0.04110713);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(325,0.02457807);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(326,0.009897433);
   S12S18_ThetaY_mI20_mI15__654->SetBinError(327,0.002857143);
   S12S18_ThetaY_mI20_mI15__654->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__654->SetMaximum(1.113186);
   S12S18_ThetaY_mI20_mI15__654->SetEntries(4100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__654->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__654->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__654->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__654->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__654->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__654->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__654->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__654->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__654->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__654->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__654->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__654->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__654->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__654->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__654->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__654->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__655 = new TH1D("ThetaY_mI20_mI15__655","",630,-1575,1575);
   ThetaY_mI20_mI15__655->SetBinContent(303,0.0002206288);
   ThetaY_mI20_mI15__655->SetBinContent(304,0.05004596);
   ThetaY_mI20_mI15__655->SetBinContent(305,0.2401544);
   ThetaY_mI20_mI15__655->SetBinContent(306,0.5121162);
   ThetaY_mI20_mI15__655->SetBinContent(307,0.6908991);
   ThetaY_mI20_mI15__655->SetBinContent(308,0.8190476);
   ThetaY_mI20_mI15__655->SetBinContent(309,0.9102409);
   ThetaY_mI20_mI15__655->SetBinContent(310,0.9522339);
   ThetaY_mI20_mI15__655->SetBinContent(311,0.9780107);
   ThetaY_mI20_mI15__655->SetBinContent(312,1.004413);
   ThetaY_mI20_mI15__655->SetBinContent(313,1.002317);
   ThetaY_mI20_mI15__655->SetBinContent(314,1.011987);
   ThetaY_mI20_mI15__655->SetBinContent(315,0.9941166);
   ThetaY_mI20_mI15__655->SetBinContent(316,1);
   ThetaY_mI20_mI15__655->SetBinContent(317,1.005001);
   ThetaY_mI20_mI15__655->SetBinContent(318,1.000368);
   ThetaY_mI20_mI15__655->SetBinContent(319,0.9955874);
   ThetaY_mI20_mI15__655->SetBinContent(320,0.9875345);
   ThetaY_mI20_mI15__655->SetBinContent(321,0.9511307);
   ThetaY_mI20_mI15__655->SetBinContent(322,0.8913403);
   ThetaY_mI20_mI15__655->SetBinContent(323,0.8158853);
   ThetaY_mI20_mI15__655->SetBinContent(324,0.6947968);
   ThetaY_mI20_mI15__655->SetBinContent(325,0.5186615);
   ThetaY_mI20_mI15__655->SetBinContent(326,0.2371392);
   ThetaY_mI20_mI15__655->SetBinContent(327,0.05210517);
   ThetaY_mI20_mI15__655->SetBinContent(328,0.0004044861);
   ThetaY_mI20_mI15__655->SetBinError(303,9.007133e-05);
   ThetaY_mI20_mI15__655->SetBinError(304,0.001356563);
   ThetaY_mI20_mI15__655->SetBinError(305,0.002971671);
   ThetaY_mI20_mI15__655->SetBinError(306,0.0043395);
   ThetaY_mI20_mI15__655->SetBinError(307,0.005040374);
   ThetaY_mI20_mI15__655->SetBinError(308,0.005487949);
   ThetaY_mI20_mI15__655->SetBinError(309,0.005785403);
   ThetaY_mI20_mI15__655->SetBinError(310,0.00591735);
   ThetaY_mI20_mI15__655->SetBinError(311,0.005996906);
   ThetaY_mI20_mI15__655->SetBinError(312,0.006077312);
   ThetaY_mI20_mI15__655->SetBinError(313,0.006070968);
   ThetaY_mI20_mI15__655->SetBinError(314,0.006100186);
   ThetaY_mI20_mI15__655->SetBinError(315,0.006046083);
   ThetaY_mI20_mI15__655->SetBinError(316,0.006063948);
   ThetaY_mI20_mI15__655->SetBinError(317,0.006079092);
   ThetaY_mI20_mI15__655->SetBinError(318,0.006065063);
   ThetaY_mI20_mI15__655->SetBinError(319,0.006050554);
   ThetaY_mI20_mI15__655->SetBinError(320,0.006026034);
   ThetaY_mI20_mI15__655->SetBinError(321,0.005913922);
   ThetaY_mI20_mI15__655->SetBinError(322,0.005725023);
   ThetaY_mI20_mI15__655->SetBinError(323,0.005477344);
   ThetaY_mI20_mI15__655->SetBinError(324,0.005054572);
   ThetaY_mI20_mI15__655->SetBinError(325,0.004367144);
   ThetaY_mI20_mI15__655->SetBinError(326,0.002952957);
   ThetaY_mI20_mI15__655->SetBinError(327,0.00138419);
   ThetaY_mI20_mI15__655->SetBinError(328,0.0001219572);
   ThetaY_mI20_mI15__655->SetEntries(498097);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__655->SetLineColor(ci);
   ThetaY_mI20_mI15__655->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__655->SetMarkerColor(ci);
   ThetaY_mI20_mI15__655->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__655->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__655->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__655->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__655->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__655->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__655->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__655->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__655->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__655->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__655->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__655->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__655->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__655->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__655->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__655->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__655->Draw("AEsame");
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
   
   Double_t _fx3219[26] = {
   -62.5,
   -57.5,
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
   52.5,
   57.5,
   62.5};
   Double_t _fy3219[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006000927,
   0.1402263,
   0.7253707,
   0.8950693,
   0.974038,
   0.9110745,
   1,
   0.9808093,
   0.9739276,
   0.961385,
   0.9084674,
   0.9131988,
   0.8943193,
   0.8999865,
   0.8512252,
   0.4076427,
   0.1445806,
   0.05483416,
   0};
   Double_t _felx3219[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3219[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003876136,
   0.02018699,
   0.04560528,
   0.05077384,
   0.05274161,
   0.05144211,
   0.05376846,
   0.05311054,
   0.05304368,
   0.05282271,
   0.05153823,
   0.05265246,
   0.0538154,
   0.05642583,
   0.05943785,
   0.04740243,
   0.04118381,
   0.04536745,
   0};
   Double_t _fehx3219[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3219[26] = {
   27.90357,
   0.1051757,
   0.02190592,
   0.01027191,
   0.007613731,
   0.006422434,
   0.005778973,
   0.00791551,
   0.02332642,
   0.04856862,
   0.05374109,
   0.05567983,
   0.05443408,
   0.05674237,
   0.05606946,
   0.0560165,
   0.05581001,
   0.05455045,
   0.05578162,
   0.0571578,
   0.06008223,
   0.0637439,
   0.0532671,
   0.05500896,
   0.1262395,
   14.15588};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3219,_fy3219,_felx3219,_fehx3219,_fely3219,_fehy3219);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3219 = new TH1F("Graph_Graph3219","",100,-100,100);
   Graph_Graph3219->SetMinimum(0);
   Graph_Graph3219->SetMaximum(1.5);
   Graph_Graph3219->SetDirectory(0);
   Graph_Graph3219->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3219->SetLineColor(ci);
   Graph_Graph3219->GetXaxis()->SetRange(1,100);
   Graph_Graph3219->GetXaxis()->CenterTitle(true);
   Graph_Graph3219->GetXaxis()->SetLabelFont(42);
   Graph_Graph3219->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3219->GetXaxis()->SetTitleFont(42);
   Graph_Graph3219->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3219->GetYaxis()->CenterTitle(true);
   Graph_Graph3219->GetYaxis()->SetLabelFont(42);
   Graph_Graph3219->GetYaxis()->SetTitleFont(42);
   Graph_Graph3219->GetZaxis()->SetLabelFont(42);
   Graph_Graph3219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3219->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3219);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.113186,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__656 = new TH2D("ThetaY_vs_Y_mI20_mI15__656","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(7887,6);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(7913,1361);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(7939,6531);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(7965,13927);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(7991,18789);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8017,22274);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8043,24754);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8069,25896);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8095,26597);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8121,27315);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8147,27258);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8173,27521);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8199,27035);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8225,27195);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8251,27331);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8277,27205);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8303,27075);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8329,26856);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8355,25866);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8381,24240);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8407,22188);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8433,18895);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8459,14105);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8485,6449);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8511,1417);
   ThetaY_vs_Y_mI20_mI15__656->SetBinContent(8537,11);
   ThetaY_vs_Y_mI20_mI15__656->SetEntries(498097);
   ThetaY_vs_Y_mI20_mI15__656->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(1,1376.05);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(2,2752.1);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(3,4128.15);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(4,5504.2);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(5,6880.25);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(6,8256.3);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(7,9632.35);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(8,11008.4);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(9,12384.45);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(10,13760.5);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(11,15136.55);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(12,16512.6);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(13,17888.65);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(14,19264.7);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(15,20640.75);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(16,22016.8);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(17,23392.85);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(18,24768.9);
   ThetaY_vs_Y_mI20_mI15__656->SetContourLevel(19,26144.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__656->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__656->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__656->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__656->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__656->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__656->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__656->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__656->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__656->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__656->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__656->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__656->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__656->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__656->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__656->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__656->Draw("COL");
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
