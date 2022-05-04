void S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:45 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06515571,125,1.237958);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__597 = new TH1D("S18_ThetaY_mI20_mI15__597","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__597->SetBinContent(311,0.1189189);
   S18_ThetaY_mI20_mI15__597->SetBinContent(312,0.6432432);
   S18_ThetaY_mI20_mI15__597->SetBinContent(313,0.8756757);
   S18_ThetaY_mI20_mI15__597->SetBinContent(314,0.9243243);
   S18_ThetaY_mI20_mI15__597->SetBinContent(315,0.772973);
   S18_ThetaY_mI20_mI15__597->SetBinContent(316,0.9513514);
   S18_ThetaY_mI20_mI15__597->SetBinContent(317,1);
   S18_ThetaY_mI20_mI15__597->SetBinContent(318,0.9189189);
   S18_ThetaY_mI20_mI15__597->SetBinContent(319,0.7621622);
   S18_ThetaY_mI20_mI15__597->SetBinContent(320,0.8108108);
   S18_ThetaY_mI20_mI15__597->SetBinContent(321,0.8432432);
   S18_ThetaY_mI20_mI15__597->SetBinContent(322,0.7675676);
   S18_ThetaY_mI20_mI15__597->SetBinContent(323,0.7513514);
   S18_ThetaY_mI20_mI15__597->SetBinContent(324,0.5297297);
   S18_ThetaY_mI20_mI15__597->SetBinContent(325,0.1621622);
   S18_ThetaY_mI20_mI15__597->SetBinContent(326,0.01621622);
   S18_ThetaY_mI20_mI15__597->SetBinContent(327,0.005405405);
   S18_ThetaY_mI20_mI15__597->SetBinError(311,0.0253536);
   S18_ThetaY_mI20_mI15__597->SetBinError(312,0.05896601);
   S18_ThetaY_mI20_mI15__597->SetBinError(313,0.06879958);
   S18_ThetaY_mI20_mI15__597->SetBinError(314,0.07068485);
   S18_ThetaY_mI20_mI15__597->SetBinError(315,0.06463925);
   S18_ThetaY_mI20_mI15__597->SetBinError(316,0.07171081);
   S18_ThetaY_mI20_mI15__597->SetBinError(317,0.07352146);
   S18_ThetaY_mI20_mI15__597->SetBinError(318,0.07047786);
   S18_ThetaY_mI20_mI15__597->SetBinError(319,0.06418563);
   S18_ThetaY_mI20_mI15__597->SetBinError(320,0.06620243);
   S18_ThetaY_mI20_mI15__597->SetBinError(321,0.06751349);
   S18_ThetaY_mI20_mI15__597->SetBinError(322,0.06441284);
   S18_ThetaY_mI20_mI15__597->SetBinError(323,0.06372879);
   S18_ThetaY_mI20_mI15__597->SetBinError(324,0.05351078);
   S18_ThetaY_mI20_mI15__597->SetBinError(325,0.02960662);
   S18_ThetaY_mI20_mI15__597->SetBinError(326,0.009362437);
   S18_ThetaY_mI20_mI15__597->SetBinError(327,0.005405405);
   S18_ThetaY_mI20_mI15__597->SetMinimum(0);
   S18_ThetaY_mI20_mI15__597->SetMaximum(1.107647);
   S18_ThetaY_mI20_mI15__597->SetEntries(2008);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__597->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__597->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__597->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__597->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__597->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__597->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__597->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__597->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__597->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__597->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__597->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__597->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__597->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__597->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__597->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__597->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__598 = new TH1D("ThetaY_mI20_mI15__598","",630,-1575,1575);
   ThetaY_mI20_mI15__598->SetBinContent(303,0.0002195309);
   ThetaY_mI20_mI15__598->SetBinContent(304,0.04979693);
   ThetaY_mI20_mI15__598->SetBinContent(305,0.2389594);
   ThetaY_mI20_mI15__598->SetBinContent(306,0.5095679);
   ThetaY_mI20_mI15__598->SetBinContent(307,0.6874611);
   ThetaY_mI20_mI15__598->SetBinContent(308,0.814972);
   ThetaY_mI20_mI15__598->SetBinContent(309,0.9057115);
   ThetaY_mI20_mI15__598->SetBinContent(310,0.9474955);
   ThetaY_mI20_mI15__598->SetBinContent(311,0.973144);
   ThetaY_mI20_mI15__598->SetBinContent(312,0.9994146);
   ThetaY_mI20_mI15__598->SetBinContent(313,0.997329);
   ThetaY_mI20_mI15__598->SetBinContent(314,1.006952);
   ThetaY_mI20_mI15__598->SetBinContent(315,0.9891698);
   ThetaY_mI20_mI15__598->SetBinContent(316,0.995024);
   ThetaY_mI20_mI15__598->SetBinContent(317,1);
   ThetaY_mI20_mI15__598->SetBinContent(318,0.9953899);
   ThetaY_mI20_mI15__598->SetBinContent(319,0.9906333);
   ThetaY_mI20_mI15__598->SetBinContent(320,0.9826205);
   ThetaY_mI20_mI15__598->SetBinContent(321,0.9463979);
   ThetaY_mI20_mI15__598->SetBinContent(322,0.886905);
   ThetaY_mI20_mI15__598->SetBinContent(323,0.8118254);
   ThetaY_mI20_mI15__598->SetBinContent(324,0.6913395);
   ThetaY_mI20_mI15__598->SetBinContent(325,0.5160806);
   ThetaY_mI20_mI15__598->SetBinContent(326,0.2359592);
   ThetaY_mI20_mI15__598->SetBinContent(327,0.05184589);
   ThetaY_mI20_mI15__598->SetBinContent(328,0.0004024734);
   ThetaY_mI20_mI15__598->SetBinError(303,8.962313e-05);
   ThetaY_mI20_mI15__598->SetBinError(304,0.001349813);
   ThetaY_mI20_mI15__598->SetBinError(305,0.002956884);
   ThetaY_mI20_mI15__598->SetBinError(306,0.004317907);
   ThetaY_mI20_mI15__598->SetBinError(307,0.005015293);
   ThetaY_mI20_mI15__598->SetBinError(308,0.00546064);
   ThetaY_mI20_mI15__598->SetBinError(309,0.005756615);
   ThetaY_mI20_mI15__598->SetBinError(310,0.005887905);
   ThetaY_mI20_mI15__598->SetBinError(311,0.005967065);
   ThetaY_mI20_mI15__598->SetBinError(312,0.006047071);
   ThetaY_mI20_mI15__598->SetBinError(313,0.006040758);
   ThetaY_mI20_mI15__598->SetBinError(314,0.006069831);
   ThetaY_mI20_mI15__598->SetBinError(315,0.006015998);
   ThetaY_mI20_mI15__598->SetBinError(316,0.006033774);
   ThetaY_mI20_mI15__598->SetBinError(317,0.006048842);
   ThetaY_mI20_mI15__598->SetBinError(318,0.006034883);
   ThetaY_mI20_mI15__598->SetBinError(319,0.006020447);
   ThetaY_mI20_mI15__598->SetBinError(320,0.005996049);
   ThetaY_mI20_mI15__598->SetBinError(321,0.005884494);
   ThetaY_mI20_mI15__598->SetBinError(322,0.005696535);
   ThetaY_mI20_mI15__598->SetBinError(323,0.005450089);
   ThetaY_mI20_mI15__598->SetBinError(324,0.00502942);
   ThetaY_mI20_mI15__598->SetBinError(325,0.004345413);
   ThetaY_mI20_mI15__598->SetBinError(326,0.002938263);
   ThetaY_mI20_mI15__598->SetBinError(327,0.001377303);
   ThetaY_mI20_mI15__598->SetBinError(328,0.0001213503);
   ThetaY_mI20_mI15__598->SetEntries(498097);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__598->SetLineColor(ci);
   ThetaY_mI20_mI15__598->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__598->SetMarkerColor(ci);
   ThetaY_mI20_mI15__598->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__598->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__598->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__598->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__598->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__598->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__598->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__598->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__598->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__598->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__598->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__598->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__598->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__598->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__598->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__598->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__598->Draw("AEsame");
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
   
   Double_t _fx3200[26] = {
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
   Double_t _fy3200[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1222007,
   0.64362,
   0.8780208,
   0.917943,
   0.7814361,
   0.956109,
   1,
   0.9231749,
   0.7693686,
   0.8251516,
   0.8910029,
   0.8654451,
   0.9255086,
   0.7662367,
   0.3142186,
   0.06872467,
   0.1042591,
   0};
   Double_t _felx3200[26] = {
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
   Double_t _fely3200[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02586404,
   0.05904471,
   0.06911584,
   0.07034447,
   0.06544172,
   0.07223225,
   0.07370187,
   0.07095401,
   0.06488276,
   0.06748465,
   0.07147405,
   0.07275167,
   0.0786496,
   0.07746748,
   0.05710536,
   0.03740876,
   0.08625955,
   0};
   Double_t _fehx3200[26] = {
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
   Double_t _fehy3200[26] = {
   53.05454,
   0.1999762,
   0.04165088,
   0.01953052,
   0.01447639,
   0.01221131,
   0.01098787,
   0.01050329,
   0.03201866,
   0.06472917,
   0.07478581,
   0.07595614,
   0.07116851,
   0.07790974,
   0.07934777,
   0.0766317,
   0.07060223,
   0.07324593,
   0.07745411,
   0.0791437,
   0.08563898,
   0.08572999,
   0.06856787,
   0.06688113,
   0.2400258,
   26.91533};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3200,_fy3200,_felx3200,_fehx3200,_fely3200,_fehy3200);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3200 = new TH1F("Graph_Graph3200","",100,-100,100);
   Graph_Graph3200->SetMinimum(0);
   Graph_Graph3200->SetMaximum(1.5);
   Graph_Graph3200->SetDirectory(0);
   Graph_Graph3200->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3200->SetLineColor(ci);
   Graph_Graph3200->GetXaxis()->SetRange(1,100);
   Graph_Graph3200->GetXaxis()->CenterTitle(true);
   Graph_Graph3200->GetXaxis()->SetLabelFont(42);
   Graph_Graph3200->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3200->GetXaxis()->SetTitleFont(42);
   Graph_Graph3200->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3200->GetYaxis()->CenterTitle(true);
   Graph_Graph3200->GetYaxis()->SetLabelFont(42);
   Graph_Graph3200->GetYaxis()->SetTitleFont(42);
   Graph_Graph3200->GetZaxis()->SetLabelFont(42);
   Graph_Graph3200->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3200->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3200);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.107647,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__599 = new TH2D("ThetaY_vs_Y_mI20_mI15__599","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(7887,6);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(7913,1361);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(7939,6531);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(7965,13927);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(7991,18789);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8017,22274);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8043,24754);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8069,25896);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8095,26597);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8121,27315);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8147,27258);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8173,27521);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8199,27035);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8225,27195);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8251,27331);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8277,27205);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8303,27075);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8329,26856);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8355,25866);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8381,24240);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8407,22188);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8433,18895);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8459,14105);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8485,6449);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8511,1417);
   ThetaY_vs_Y_mI20_mI15__599->SetBinContent(8537,11);
   ThetaY_vs_Y_mI20_mI15__599->SetEntries(498097);
   ThetaY_vs_Y_mI20_mI15__599->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(1,1376.05);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(2,2752.1);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(3,4128.15);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(4,5504.2);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(5,6880.25);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(6,8256.3);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(7,9632.35);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(8,11008.4);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(9,12384.45);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(10,13760.5);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(11,15136.55);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(12,16512.6);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(13,17888.65);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(14,19264.7);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(15,20640.75);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(16,22016.8);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(17,23392.85);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(18,24768.9);
   ThetaY_vs_Y_mI20_mI15__599->SetContourLevel(19,26144.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__599->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__599->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__599->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__599->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__599->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__599->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__599->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__599->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__599->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__599->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__599->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__599->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__599->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__599->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__599->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__599->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
