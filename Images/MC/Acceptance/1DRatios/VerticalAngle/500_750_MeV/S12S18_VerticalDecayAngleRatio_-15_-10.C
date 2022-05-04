void S12S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.06533539,125,1.241372);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI15_mI10__486 = new TH1D("S12S18_ThetaY_mI15_mI10__486","",630,-1575,1575);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(308,0.01075269);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(309,0.07526882);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(310,0.5);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(311,0.8010753);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(312,0.983871);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(313,0.8978495);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(314,0.8924731);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(315,0.8225806);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(316,0.8064516);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(317,0.9086022);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(318,1.005376);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(319,0.7903226);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(320,0.8709677);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(321,1);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(322,0.7795699);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(323,0.8978495);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(324,0.8709677);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(325,0.5483871);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(326,0.3924731);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(327,0.08064516);
   S12S18_ThetaY_mI15_mI10__486->SetBinContent(328,0.0483871);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(308,0.007603299);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(309,0.02011644);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(310,0.05184758);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(311,0.06562664);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(312,0.07272983);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(313,0.06947768);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(314,0.06926935);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(315,0.0665017);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(316,0.0658465);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(317,0.06989247);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(318,0.0735204);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(319,0.06518471);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(320,0.06842969);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(321,0.07332356);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(322,0.06473976);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(323,0.06947768);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(324,0.06842969);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(325,0.05429841);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(326,0.0459355);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(327,0.02082249);
   S12S18_ThetaY_mI15_mI10__486->SetBinError(328,0.01612903);
   S12S18_ThetaY_mI15_mI10__486->SetMinimum(0);
   S12S18_ThetaY_mI15_mI10__486->SetMaximum(1.110702);
   S12S18_ThetaY_mI15_mI10__486->SetEntries(2601);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__486->SetLineColor(ci);
   S12S18_ThetaY_mI15_mI10__486->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__486->SetMarkerColor(ci);
   S12S18_ThetaY_mI15_mI10__486->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI15_mI10__486->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI15_mI10__486->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__486->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__486->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__486->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI15_mI10__486->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI15_mI10__486->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__486->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__486->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__486->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__486->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__486->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__487 = new TH1D("ThetaY_mI15_mI10__487","",630,-1575,1575);
   ThetaY_mI15_mI10__487->SetBinContent(300,0.004510019);
   ThetaY_mI15_mI10__487->SetBinContent(301,0.06578184);
   ThetaY_mI15_mI10__487->SetBinContent(302,0.1893886);
   ThetaY_mI15_mI10__487->SetBinContent(303,0.3877972);
   ThetaY_mI15_mI10__487->SetBinContent(304,0.6004446);
   ThetaY_mI15_mI10__487->SetBinContent(305,0.7489208);
   ThetaY_mI15_mI10__487->SetBinContent(306,0.8500097);
   ThetaY_mI15_mI10__487->SetBinContent(307,0.9173056);
   ThetaY_mI15_mI10__487->SetBinContent(308,0.9584112);
   ThetaY_mI15_mI10__487->SetBinContent(309,0.9952645);
   ThetaY_mI15_mI10__487->SetBinContent(310,0.9996779);
   ThetaY_mI15_mI10__487->SetBinContent(311,1.005444);
   ThetaY_mI15_mI10__487->SetBinContent(312,0.9959732);
   ThetaY_mI15_mI10__487->SetBinContent(313,0.980768);
   ThetaY_mI15_mI10__487->SetBinContent(314,0.9822821);
   ThetaY_mI15_mI10__487->SetBinContent(315,0.988274);
   ThetaY_mI15_mI10__487->SetBinContent(316,0.9840216);
   ThetaY_mI15_mI10__487->SetBinContent(317,0.9896914);
   ThetaY_mI15_mI10__487->SetBinContent(318,1.008601);
   ThetaY_mI15_mI10__487->SetBinContent(319,0.9982282);
   ThetaY_mI15_mI10__487->SetBinContent(320,1.009729);
   ThetaY_mI15_mI10__487->SetBinContent(321,1);
   ThetaY_mI15_mI10__487->SetBinContent(322,0.9997423);
   ThetaY_mI15_mI10__487->SetBinContent(323,0.9612461);
   ThetaY_mI15_mI10__487->SetBinContent(324,0.9124412);
   ThetaY_mI15_mI10__487->SetBinContent(325,0.8475936);
   ThetaY_mI15_mI10__487->SetBinContent(326,0.7443464);
   ThetaY_mI15_mI10__487->SetBinContent(327,0.6090136);
   ThetaY_mI15_mI10__487->SetBinContent(328,0.3935636);
   ThetaY_mI15_mI10__487->SetBinContent(329,0.1927067);
   ThetaY_mI15_mI10__487->SetBinContent(330,0.0616584);
   ThetaY_mI15_mI10__487->SetBinContent(331,0.00525095);
   ThetaY_mI15_mI10__487->SetBinError(300,0.0003811661);
   ThetaY_mI15_mI10__487->SetBinError(301,0.001455721);
   ThetaY_mI15_mI10__487->SetBinError(302,0.002470029);
   ThetaY_mI15_mI10__487->SetBinError(303,0.003534496);
   ThetaY_mI15_mI10__487->SetBinError(304,0.004398065);
   ThetaY_mI15_mI10__487->SetBinError(305,0.004911827);
   ThetaY_mI15_mI10__487->SetBinError(306,0.005232836);
   ThetaY_mI15_mI10__487->SetBinError(307,0.005436034);
   ThetaY_mI15_mI10__487->SetBinError(308,0.005556497);
   ThetaY_mI15_mI10__487->SetBinError(309,0.00566232);
   ThetaY_mI15_mI10__487->SetBinError(310,0.00567486);
   ThetaY_mI15_mI10__487->SetBinError(311,0.005691204);
   ThetaY_mI15_mI10__487->SetBinError(312,0.005664336);
   ThetaY_mI15_mI10__487->SetBinError(313,0.005620932);
   ThetaY_mI15_mI10__487->SetBinError(314,0.005625269);
   ThetaY_mI15_mI10__487->SetBinError(315,0.005642399);
   ThetaY_mI15_mI10__487->SetBinError(316,0.005630247);
   ThetaY_mI15_mI10__487->SetBinError(317,0.005646444);
   ThetaY_mI15_mI10__487->SetBinError(318,0.005700132);
   ThetaY_mI15_mI10__487->SetBinError(319,0.005670744);
   ThetaY_mI15_mI10__487->SetBinError(320,0.005703317);
   ThetaY_mI15_mI10__487->SetBinError(321,0.005675775);
   ThetaY_mI15_mI10__487->SetBinError(322,0.005675043);
   ThetaY_mI15_mI10__487->SetBinError(323,0.005564709);
   ThetaY_mI15_mI10__487->SetBinError(324,0.005421602);
   ThetaY_mI15_mI10__487->SetBinError(325,0.005225393);
   ThetaY_mI15_mI10__487->SetBinError(326,0.004896804);
   ThetaY_mI15_mI10__487->SetBinError(327,0.004429336);
   ThetaY_mI15_mI10__487->SetBinError(328,0.003560677);
   ThetaY_mI15_mI10__487->SetBinError(329,0.002491572);
   ThetaY_mI15_mI10__487->SetBinError(330,0.001409358);
   ThetaY_mI15_mI10__487->SetBinError(331,0.0004112862);
   ThetaY_mI15_mI10__487->SetEntries(726013);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__487->SetLineColor(ci);
   ThetaY_mI15_mI10__487->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__487->SetMarkerColor(ci);
   ThetaY_mI15_mI10__487->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__487->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__487->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__487->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__487->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__487->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__487->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__487->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__487->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__487->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__487->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__487->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__487->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__487->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__487->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__487->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__487->Draw("AEsame");
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
   
   Double_t _fx3163[32] = {
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
   Double_t _fy3163[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01121928,
   0.07562695,
   0.5001611,
   0.7967376,
   0.9878488,
   0.9154555,
   0.9085711,
   0.8323407,
   0.8195466,
   0.9180661,
   0.9968026,
   0.7917254,
   0.862576,
   1,
   0.7797709,
   0.9340475,
   0.9545467,
   0.646993,
   0.5272722,
   0.1324193,
   0.1229461,
   0,
   0,
   0};
   Double_t _felx3163[32] = {
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
   Double_t _fely3163[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007246771,
   0.01997245,
   0.0518476,
   0.06535242,
   0.0731716,
   0.07096181,
   0.07063811,
   0.06738352,
   0.06700391,
   0.07074324,
   0.07304426,
   0.06537959,
   0.06787406,
   0.07347562,
   0.06483164,
   0.07240696,
   0.07513148,
   0.06407936,
   0.06166676,
   0.03381818,
   0.04022302,
   0,
   0,
   0};
   Double_t _fehx3163[32] = {
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
   Double_t _fehy3163[32] = {
   2.209155,
   0.1505344,
   0.05227093,
   0.02552552,
   0.01648521,
   0.01321683,
   0.01164494,
   0.01079061,
   0.0147986,
   0.02610131,
   0.05752429,
   0.07094841,
   0.07880576,
   0.07669033,
   0.07635819,
   0.07307506,
   0.07272182,
   0.07641893,
   0.07860604,
   0.07101737,
   0.07343958,
   0.07908589,
   0.07046199,
   0.07825253,
   0.08129413,
   0.07076614,
   0.06934105,
   0.04379862,
   0.05617829,
   0.05137077,
   0.1606063,
   1.895671};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3163,_fy3163,_felx3163,_fehx3163,_fely3163,_fehy3163);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3163 = new TH1F("Graph_Graph3163","",100,-100,100);
   Graph_Graph3163->SetMinimum(0);
   Graph_Graph3163->SetMaximum(1.5);
   Graph_Graph3163->SetDirectory(0);
   Graph_Graph3163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3163->SetLineColor(ci);
   Graph_Graph3163->GetXaxis()->SetRange(1,100);
   Graph_Graph3163->GetXaxis()->CenterTitle(true);
   Graph_Graph3163->GetXaxis()->SetLabelFont(42);
   Graph_Graph3163->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3163->GetXaxis()->SetTitleFont(42);
   Graph_Graph3163->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3163->GetYaxis()->CenterTitle(true);
   Graph_Graph3163->GetYaxis()->SetLabelFont(42);
   Graph_Graph3163->GetYaxis()->SetTitleFont(42);
   Graph_Graph3163->GetZaxis()->SetLabelFont(42);
   Graph_Graph3163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3163->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3163);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.110702,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__488 = new TH2D("ThetaY_vs_Y_mI15_mI10__488","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7810,140);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7836,2042);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7862,5879);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7888,12038);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7914,18639);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7940,23248);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7966,26386);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(7992,28475);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8018,29751);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8044,30895);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8070,31032);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8096,31211);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8122,30917);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8148,30445);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8174,30492);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8200,30678);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8226,30546);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8252,30722);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8278,31309);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8304,30987);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8330,31344);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8356,31042);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8382,31034);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8408,29839);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8434,28324);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8460,26311);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8486,23106);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8512,18905);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8538,12217);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8564,5982);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8590,1914);
   ThetaY_vs_Y_mI15_mI10__488->SetBinContent(8616,163);
   ThetaY_vs_Y_mI15_mI10__488->SetEntries(726013);
   ThetaY_vs_Y_mI15_mI10__488->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(1,1567.2);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(2,3134.4);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(3,4701.6);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(4,6268.8);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(5,7836);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(6,9403.2);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(7,10970.4);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(8,12537.6);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(9,14104.8);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(10,15672);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(11,17239.2);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(12,18806.4);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(13,20373.6);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(14,21940.8);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(15,23508);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(16,25075.2);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(17,26642.4);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(18,28209.6);
   ThetaY_vs_Y_mI15_mI10__488->SetContourLevel(19,29776.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__488->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__488->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__488->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__488->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__488->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__488->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__488->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__488->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__488->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__488->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__488->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__488->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__488->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__488->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__488->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__488->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-15_-10","Reco vertices","lpf");
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
