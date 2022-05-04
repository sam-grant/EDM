void S12S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06620829,125,1.257957);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI20_mI15__483 = new TH1D("S12S18_ThetaY_mI20_mI15__483","",630,-1575,1575);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(309,0.01342282);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(310,0.08724832);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(311,0.3087248);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(312,0.7315436);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(313,0.7718121);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(314,0.9798658);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(315,0.8590604);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(316,1);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(317,0.7315436);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(318,0.885906);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(319,0.7919463);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(320,0.7114094);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(321,0.7852349);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(322,0.8389262);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(323,0.8322148);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(324,0.7718121);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(325,0.5838926);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(326,0.4161074);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(327,0.2147651);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(328,0.09395973);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(329,0.02684564);
   S12S18_ThetaY_mI20_mI15__483->SetBinContent(330,0.006711409);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(309,0.009491366);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(310,0.02419833);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(311,0.04551899);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(312,0.07006917);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(313,0.07197185);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(314,0.08109427);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(315,0.07593093);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(316,0.08192319);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(317,0.07006917);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(318,0.07710822);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(319,0.07290457);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(320,0.06909819);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(321,0.07259499);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(322,0.07503584);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(323,0.07473509);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(324,0.07197185);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(325,0.06259986);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(326,0.05284569);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(327,0.03796546);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(328,0.02511179);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(329,0.01342282);
   S12S18_ThetaY_mI20_mI15__483->SetBinError(330,0.006711409);
   S12S18_ThetaY_mI20_mI15__483->SetMinimum(0);
   S12S18_ThetaY_mI20_mI15__483->SetMaximum(1.125541);
   S12S18_ThetaY_mI20_mI15__483->SetEntries(1854);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__483->SetLineColor(ci);
   S12S18_ThetaY_mI20_mI15__483->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI20_mI15__483->SetMarkerColor(ci);
   S12S18_ThetaY_mI20_mI15__483->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI20_mI15__483->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI20_mI15__483->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__483->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__483->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__483->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI20_mI15__483->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI20_mI15__483->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__483->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__483->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI20_mI15__483->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI20_mI15__483->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI20_mI15__483->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__484 = new TH1D("ThetaY_mI20_mI15__484","",630,-1575,1575);
   ThetaY_mI20_mI15__484->SetBinContent(300,0.005551394);
   ThetaY_mI20_mI15__484->SetBinContent(301,0.06648456);
   ThetaY_mI20_mI15__484->SetBinContent(302,0.186941);
   ThetaY_mI20_mI15__484->SetBinContent(303,0.3948539);
   ThetaY_mI20_mI15__484->SetBinContent(304,0.6170419);
   ThetaY_mI20_mI15__484->SetBinContent(305,0.7609816);
   ThetaY_mI20_mI15__484->SetBinContent(306,0.8551791);
   ThetaY_mI20_mI15__484->SetBinContent(307,0.9303873);
   ThetaY_mI20_mI15__484->SetBinContent(308,0.9787637);
   ThetaY_mI20_mI15__484->SetBinContent(309,1.003525);
   ThetaY_mI20_mI15__484->SetBinContent(310,1.013041);
   ThetaY_mI20_mI15__484->SetBinContent(311,1.023219);
   ThetaY_mI20_mI15__484->SetBinContent(312,1.003877);
   ThetaY_mI20_mI15__484->SetBinContent(313,1.001674);
   ThetaY_mI20_mI15__484->SetBinContent(314,0.9998678);
   ThetaY_mI20_mI15__484->SetBinContent(315,0.9975768);
   ThetaY_mI20_mI15__484->SetBinContent(316,1);
   ThetaY_mI20_mI15__484->SetBinContent(317,0.993215);
   ThetaY_mI20_mI15__484->SetBinContent(318,1.006829);
   ThetaY_mI20_mI15__484->SetBinContent(319,1.018813);
   ThetaY_mI20_mI15__484->SetBinContent(320,1.01802);
   ThetaY_mI20_mI15__484->SetBinContent(321,1.009649);
   ThetaY_mI20_mI15__484->SetBinContent(322,1.00445);
   ThetaY_mI20_mI15__484->SetBinContent(323,0.9762524);
   ThetaY_mI20_mI15__484->SetBinContent(324,0.9156717);
   ThetaY_mI20_mI15__484->SetBinContent(325,0.8570736);
   ThetaY_mI20_mI15__484->SetBinContent(326,0.7456933);
   ThetaY_mI20_mI15__484->SetBinContent(327,0.6121073);
   ThetaY_mI20_mI15__484->SetBinContent(328,0.3904921);
   ThetaY_mI20_mI15__484->SetBinContent(329,0.1949156);
   ThetaY_mI20_mI15__484->SetBinContent(330,0.06414945);
   ThetaY_mI20_mI15__484->SetBinContent(331,0.006652862);
   ThetaY_mI20_mI15__484->SetBinError(300,0.0004945575);
   ThetaY_mI20_mI15__484->SetBinError(301,0.001711497);
   ThetaY_mI20_mI15__484->SetBinError(302,0.002869909);
   ThetaY_mI20_mI15__484->SetBinError(303,0.004170941);
   ThetaY_mI20_mI15__484->SetBinError(304,0.005214025);
   ThetaY_mI20_mI15__484->SetBinError(305,0.005790324);
   ThetaY_mI20_mI15__484->SetBinError(306,0.006138246);
   ThetaY_mI20_mI15__484->SetBinError(307,0.006402471);
   ThetaY_mI20_mI15__484->SetBinError(308,0.006566814);
   ThetaY_mI20_mI15__484->SetBinError(309,0.006649359);
   ThetaY_mI20_mI15__484->SetBinError(310,0.006680814);
   ThetaY_mI20_mI15__484->SetBinError(311,0.006714289);
   ThetaY_mI20_mI15__484->SetBinError(312,0.006650527);
   ThetaY_mI20_mI15__484->SetBinError(313,0.006643226);
   ThetaY_mI20_mI15__484->SetBinError(314,0.006637233);
   ThetaY_mI20_mI15__484->SetBinError(315,0.006629625);
   ThetaY_mI20_mI15__484->SetBinError(316,0.006637672);
   ThetaY_mI20_mI15__484->SetBinError(317,0.006615115);
   ThetaY_mI20_mI15__484->SetBinError(318,0.006660298);
   ThetaY_mI20_mI15__484->SetBinError(319,0.006699818);
   ThetaY_mI20_mI15__484->SetBinError(320,0.00669721);
   ThetaY_mI20_mI15__484->SetBinError(321,0.006669618);
   ThetaY_mI20_mI15__484->SetBinError(322,0.006652424);
   ThetaY_mI20_mI15__484->SetBinError(323,0.006558384);
   ThetaY_mI20_mI15__484->SetBinError(324,0.006351637);
   ThetaY_mI20_mI15__484->SetBinError(325,0.006145042);
   ThetaY_mI20_mI15__484->SetBinError(326,0.005731864);
   ThetaY_mI20_mI15__484->SetBinError(327,0.005193134);
   ThetaY_mI20_mI15__484->SetBinError(328,0.004147839);
   ThetaY_mI20_mI15__484->SetBinError(329,0.002930482);
   ThetaY_mI20_mI15__484->SetBinError(330,0.001681172);
   ThetaY_mI20_mI15__484->SetBinError(331,0.0005414022);
   ThetaY_mI20_mI15__484->SetEntries(536851);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__484->SetLineColor(ci);
   ThetaY_mI20_mI15__484->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__484->SetMarkerColor(ci);
   ThetaY_mI20_mI15__484->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__484->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__484->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__484->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__484->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__484->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__484->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__484->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__484->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__484->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__484->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__484->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__484->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__484->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__484->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__484->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__484->Draw("AEsame");
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
   
   Double_t _fx3162[32] = {
   -77.5,
   -72.5,
   -67.5,
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
   62.5,
   67.5,
   72.5,
   77.5};
   Double_t _fy3162[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01337567,
   0.08612513,
   0.3017192,
   0.7287183,
   0.770522,
   0.9799953,
   0.8611472,
   1,
   0.7365411,
   0.8798971,
   0.7773225,
   0.6988167,
   0.7777307,
   0.8352096,
   0.8524586,
   0.8428917,
   0.6812631,
   0.5580141,
   0.3508618,
   0.2406188,
   0.1377295,
   0.1046215,
   0};
   Double_t _felx3162[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3162[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.008639683,
   0.02358237,
   0.04436671,
   0.06985636,
   0.07192666,
   0.08127048,
   0.07622878,
   0.0820976,
   0.07060806,
   0.07670708,
   0.07163741,
   0.06792171,
   0.07197989,
   0.07480604,
   0.07666165,
   0.07870066,
   0.07305946,
   0.07080353,
   0.06176727,
   0.06357885,
   0.0659389,
   0.08655905,
   0};
   Double_t _fehx3162[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3162[32] = {
   2.24206,
   0.1859588,
   0.06610926,
   0.03129542,
   0.02002565,
   0.01623759,
   0.01444895,
   0.01328091,
   0.01262446,
   0.01764337,
   0.03113345,
   0.05142714,
   0.07690024,
   0.07897952,
   0.08831071,
   0.08329854,
   0.08913503,
   0.07772796,
   0.08370821,
   0.07856796,
   0.07487075,
   0.07897469,
   0.08182971,
   0.08389036,
   0.08642002,
   0.08135264,
   0.08041733,
   0.07373699,
   0.08310819,
   0.1089893,
   0.2408526,
   1.868591};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3162,_fy3162,_felx3162,_fehx3162,_fely3162,_fehy3162);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3162 = new TH1F("Graph_Graph3162","",100,-100,100);
   Graph_Graph3162->SetMinimum(0);
   Graph_Graph3162->SetMaximum(1.5);
   Graph_Graph3162->SetDirectory(0);
   Graph_Graph3162->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3162->SetLineColor(ci);
   Graph_Graph3162->GetXaxis()->SetRange(1,100);
   Graph_Graph3162->GetXaxis()->CenterTitle(true);
   Graph_Graph3162->GetXaxis()->SetLabelFont(42);
   Graph_Graph3162->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3162->GetXaxis()->SetTitleFont(42);
   Graph_Graph3162->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3162->GetYaxis()->CenterTitle(true);
   Graph_Graph3162->GetYaxis()->SetLabelFont(42);
   Graph_Graph3162->GetYaxis()->SetTitleFont(42);
   Graph_Graph3162->GetZaxis()->SetLabelFont(42);
   Graph_Graph3162->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3162->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3162);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.125541,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__485 = new TH2D("ThetaY_vs_Y_mI20_mI15__485","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7809,126);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7835,1509);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7861,4243);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7887,8962);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7913,14005);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7939,17272);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7965,19410);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(7991,21117);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8017,22215);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8043,22777);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8069,22993);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8095,23224);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8121,22785);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8147,22735);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8173,22694);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8199,22642);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8225,22697);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8251,22543);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8277,22852);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8303,23124);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8329,23106);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8355,22916);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8381,22798);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8407,22158);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8433,20783);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8459,19453);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8485,16925);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8511,13893);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8537,8863);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8563,4424);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8589,1456);
   ThetaY_vs_Y_mI20_mI15__485->SetBinContent(8615,151);
   ThetaY_vs_Y_mI20_mI15__485->SetEntries(536851);
   ThetaY_vs_Y_mI20_mI15__485->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(1,1161.2);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(2,2322.4);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(3,3483.6);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(4,4644.8);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(5,5806);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(6,6967.2);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(7,8128.4);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(8,9289.6);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(9,10450.8);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(10,11612);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(11,12773.2);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(12,13934.4);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(13,15095.6);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(14,16256.8);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(15,17418);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(16,18579.2);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(17,19740.4);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(18,20901.6);
   ThetaY_vs_Y_mI20_mI15__485->SetContourLevel(19,22062.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__485->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__485->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__485->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__485->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__485->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__485->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__485->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__485->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__485->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__485->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__485->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__485->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__485->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__485->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__485->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__485->Draw("COL");
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
