void S18_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:41 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06638798,125,1.261372);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_0_5__438 = new TH1D("S18_ThetaY_0_5__438","",630,-1575,1575);
   S18_ThetaY_0_5__438->SetBinContent(304,0.007042254);
   S18_ThetaY_0_5__438->SetBinContent(305,0.02112676);
   S18_ThetaY_0_5__438->SetBinContent(306,0.1197183);
   S18_ThetaY_0_5__438->SetBinContent(307,0.4295775);
   S18_ThetaY_0_5__438->SetBinContent(308,0.6126761);
   S18_ThetaY_0_5__438->SetBinContent(309,0.7605634);
   S18_ThetaY_0_5__438->SetBinContent(310,0.7253521);
   S18_ThetaY_0_5__438->SetBinContent(311,0.8309859);
   S18_ThetaY_0_5__438->SetBinContent(312,0.8943662);
   S18_ThetaY_0_5__438->SetBinContent(313,0.7042254);
   S18_ThetaY_0_5__438->SetBinContent(314,0.8732394);
   S18_ThetaY_0_5__438->SetBinContent(315,0.8380282);
   S18_ThetaY_0_5__438->SetBinContent(316,0.8450704);
   S18_ThetaY_0_5__438->SetBinContent(317,1);
   S18_ThetaY_0_5__438->SetBinContent(318,0.8028169);
   S18_ThetaY_0_5__438->SetBinContent(319,0.8098592);
   S18_ThetaY_0_5__438->SetBinContent(320,0.8873239);
   S18_ThetaY_0_5__438->SetBinContent(321,0.7112676);
   S18_ThetaY_0_5__438->SetBinContent(322,0.6056338);
   S18_ThetaY_0_5__438->SetBinContent(323,0.3309859);
   S18_ThetaY_0_5__438->SetBinContent(324,0.1478873);
   S18_ThetaY_0_5__438->SetBinContent(325,0.007042254);
   S18_ThetaY_0_5__438->SetBinContent(326,0.007042254);
   S18_ThetaY_0_5__438->SetBinError(304,0.007042254);
   S18_ThetaY_0_5__438->SetBinError(305,0.01219754);
   S18_ThetaY_0_5__438->SetBinError(306,0.02903596);
   S18_ThetaY_0_5__438->SetBinError(307,0.05500176);
   S18_ThetaY_0_5__438->SetBinError(308,0.06568577);
   S18_ThetaY_0_5__438->SetBinError(309,0.07318525);
   S18_ThetaY_0_5__438->SetBinError(310,0.07147107);
   S18_ThetaY_0_5__438->SetBinError(311,0.07649845);
   S18_ThetaY_0_5__438->SetBinError(312,0.07936217);
   S18_ThetaY_0_5__438->SetBinError(313,0.07042254);
   S18_ThetaY_0_5__438->SetBinError(314,0.07841922);
   S18_ThetaY_0_5__438->SetBinError(315,0.07682192);
   S18_ThetaY_0_5__438->SetBinError(316,0.07714402);
   S18_ThetaY_0_5__438->SetBinError(317,0.08391814);
   S18_ThetaY_0_5__438->SetBinError(318,0.07519069);
   S18_ThetaY_0_5__438->SetBinError(319,0.07551976);
   S18_ThetaY_0_5__438->SetBinError(320,0.0790491);
   S18_ThetaY_0_5__438->SetBinError(321,0.07077377);
   S18_ThetaY_0_5__438->SetBinError(322,0.06530717);
   S18_ThetaY_0_5__438->SetBinError(323,0.04827926);
   S18_ThetaY_0_5__438->SetBinError(324,0.03227166);
   S18_ThetaY_0_5__438->SetBinError(325,0.007042254);
   S18_ThetaY_0_5__438->SetBinError(326,0.007042254);
   S18_ThetaY_0_5__438->SetMinimum(0);
   S18_ThetaY_0_5__438->SetMaximum(1.128596);
   S18_ThetaY_0_5__438->SetEntries(1842);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__438->SetLineColor(ci);
   S18_ThetaY_0_5__438->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_0_5__438->SetMarkerColor(ci);
   S18_ThetaY_0_5__438->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_0_5__438->GetXaxis()->SetRange(296,335);
   S18_ThetaY_0_5__438->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__438->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__438->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__438->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_0_5__438->GetYaxis()->CenterTitle(true);
   S18_ThetaY_0_5__438->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__438->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__438->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_0_5__438->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_0_5__438->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_0_5__438->Draw("AE");
   
   TH1D *ThetaY_0_5__439 = new TH1D("ThetaY_0_5__439","",630,-1575,1575);
   ThetaY_0_5__439->SetBinContent(300,0.005831332);
   ThetaY_0_5__439->SetBinContent(301,0.06532072);
   ThetaY_0_5__439->SetBinContent(302,0.193169);
   ThetaY_0_5__439->SetBinContent(303,0.3932229);
   ThetaY_0_5__439->SetBinContent(304,0.6181212);
   ThetaY_0_5__439->SetBinContent(305,0.7596168);
   ThetaY_0_5__439->SetBinContent(306,0.8654873);
   ThetaY_0_5__439->SetBinContent(307,0.9321311);
   ThetaY_0_5__439->SetBinContent(308,0.9930906);
   ThetaY_0_5__439->SetBinContent(309,1.008771);
   ThetaY_0_5__439->SetBinContent(310,1.020483);
   ThetaY_0_5__439->SetBinContent(311,1.012398);
   ThetaY_0_5__439->SetBinContent(312,1.017739);
   ThetaY_0_5__439->SetBinContent(313,1.014652);
   ThetaY_0_5__439->SetBinContent(314,1.000466);
   ThetaY_0_5__439->SetBinContent(315,1.00664);
   ThetaY_0_5__439->SetBinContent(316,1.010217);
   ThetaY_0_5__439->SetBinContent(317,1);
   ThetaY_0_5__439->SetBinContent(318,1.025996);
   ThetaY_0_5__439->SetBinContent(319,1.01965);
   ThetaY_0_5__439->SetBinContent(320,1.024207);
   ThetaY_0_5__439->SetBinContent(321,1.02406);
   ThetaY_0_5__439->SetBinContent(322,1.00958);
   ThetaY_0_5__439->SetBinContent(323,0.9813054);
   ThetaY_0_5__439->SetBinContent(324,0.9384525);
   ThetaY_0_5__439->SetBinContent(325,0.8686235);
   ThetaY_0_5__439->SetBinContent(326,0.7601803);
   ThetaY_0_5__439->SetBinContent(327,0.6125839);
   ThetaY_0_5__439->SetBinContent(328,0.3917038);
   ThetaY_0_5__439->SetBinContent(329,0.1946391);
   ThetaY_0_5__439->SetBinContent(330,0.06522272);
   ThetaY_0_5__439->SetBinContent(331,0.005047288);
   ThetaY_0_5__439->SetBinError(300,0.0003779891);
   ThetaY_0_5__439->SetBinError(301,0.001265089);
   ThetaY_0_5__439->SetBinError(302,0.002175525);
   ThetaY_0_5__439->SetBinError(303,0.003103951);
   ThetaY_0_5__439->SetBinError(304,0.003891636);
   ThetaY_0_5__439->SetBinError(305,0.004314125);
   ThetaY_0_5__439->SetBinError(306,0.004604959);
   ThetaY_0_5__439->SetBinError(307,0.004778966);
   ThetaY_0_5__439->SetBinError(308,0.004932759);
   ThetaY_0_5__439->SetBinError(309,0.00497155);
   ThetaY_0_5__439->SetBinError(310,0.005000326);
   ThetaY_0_5__439->SetBinError(311,0.004980478);
   ThetaY_0_5__439->SetBinError(312,0.004993599);
   ThetaY_0_5__439->SetBinError(313,0.004986019);
   ThetaY_0_5__439->SetBinError(314,0.004951041);
   ThetaY_0_5__439->SetBinError(315,0.004966295);
   ThetaY_0_5__439->SetBinError(316,0.004975111);
   ThetaY_0_5__439->SetBinError(317,0.004949889);
   ThetaY_0_5__439->SetBinError(318,0.005013814);
   ThetaY_0_5__439->SetBinError(319,0.004998285);
   ThetaY_0_5__439->SetBinError(320,0.005009442);
   ThetaY_0_5__439->SetBinError(321,0.005009083);
   ThetaY_0_5__439->SetBinError(322,0.004973542);
   ThetaY_0_5__439->SetBinError(323,0.004903402);
   ThetaY_0_5__439->SetBinError(324,0.004795143);
   ThetaY_0_5__439->SetBinError(325,0.004613295);
   ThetaY_0_5__439->SetBinError(326,0.004315725);
   ThetaY_0_5__439->SetBinError(327,0.003874166);
   ThetaY_0_5__439->SetBinError(328,0.003097949);
   ThetaY_0_5__439->SetBinError(329,0.002183788);
   ThetaY_0_5__439->SetBinError(330,0.001264139);
   ThetaY_0_5__439->SetBinError(331,0.0003516612);
   ThetaY_0_5__439->SetEntries(972949);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__439->SetLineColor(ci);
   ThetaY_0_5__439->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__439->SetMarkerColor(ci);
   ThetaY_0_5__439->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__439->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__439->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__439->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__439->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__439->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__439->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__439->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__439->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__439->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__439->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__439->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__439->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__439->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__439->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__439->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__439->Draw("AEsame");
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
   
   Double_t _fx3147[32] = {
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
   Double_t _fy3147[32] = {
   0,
   0,
   0,
   0,
   0.011393,
   0.02781239,
   0.1383247,
   0.4608552,
   0.6169387,
   0.7539501,
   0.7107928,
   0.8208098,
   0.8787776,
   0.6940562,
   0.8728331,
   0.8325005,
   0.8365236,
   1,
   0.7824757,
   0.794252,
   0.8663518,
   0.6945563,
   0.5998869,
   0.3372914,
   0.1575864,
   0.008107372,
   0.009263925,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3147[32] = {
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
   Double_t _fely3147[32] = {
   0,
   0,
   0,
   0,
   0.009424885,
   0.01513701,
   0.03322327,
   0.05889067,
   0.06608545,
   0.07253051,
   0.07000824,
   0.07556125,
   0.07799419,
   0.06937219,
   0.07839476,
   0.07631723,
   0.07636728,
   0.08396394,
   0.07327664,
   0.07405782,
   0.07719342,
   0.06907887,
   0.06462804,
   0.04905149,
   0.03412119,
   0.006706829,
   0.007663594,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3147[32] = {
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
   Double_t _fehy3147[32] = {
   2.231945,
   0.1985498,
   0.06712492,
   0.03297286,
   0.02620021,
   0.02705649,
   0.04235467,
   0.06694547,
   0.07357587,
   0.07986962,
   0.07726996,
   0.08286128,
   0.08524586,
   0.07668033,
   0.08577528,
   0.08365797,
   0.08368079,
   0.09133046,
   0.08048441,
   0.08130935,
   0.08440018,
   0.07631816,
   0.07199782,
   0.05676332,
   0.04245189,
   0.01864398,
   0.02130377,
   0.02116513,
   0.03310074,
   0.06661788,
   0.1988483,
   2.580207};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3147,_fy3147,_felx3147,_fehx3147,_fely3147,_fehy3147);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3147 = new TH1F("Graph_Graph3147","",100,-100,100);
   Graph_Graph3147->SetMinimum(0);
   Graph_Graph3147->SetMaximum(1.5);
   Graph_Graph3147->SetDirectory(0);
   Graph_Graph3147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3147->SetLineColor(ci);
   Graph_Graph3147->GetXaxis()->SetRange(1,100);
   Graph_Graph3147->GetXaxis()->CenterTitle(true);
   Graph_Graph3147->GetXaxis()->SetLabelFont(42);
   Graph_Graph3147->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3147->GetXaxis()->SetTitleFont(42);
   Graph_Graph3147->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3147->GetYaxis()->CenterTitle(true);
   Graph_Graph3147->GetYaxis()->SetLabelFont(42);
   Graph_Graph3147->GetYaxis()->SetTitleFont(42);
   Graph_Graph3147->GetZaxis()->SetLabelFont(42);
   Graph_Graph3147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3147->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3147);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.128596,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__440 = new TH2D("ThetaY_vs_Y_0_5__440","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__440->SetBinContent(7813,238);
   ThetaY_vs_Y_0_5__440->SetBinContent(7839,2666);
   ThetaY_vs_Y_0_5__440->SetBinContent(7865,7884);
   ThetaY_vs_Y_0_5__440->SetBinContent(7891,16049);
   ThetaY_vs_Y_0_5__440->SetBinContent(7917,25228);
   ThetaY_vs_Y_0_5__440->SetBinContent(7943,31003);
   ThetaY_vs_Y_0_5__440->SetBinContent(7969,35324);
   ThetaY_vs_Y_0_5__440->SetBinContent(7995,38044);
   ThetaY_vs_Y_0_5__440->SetBinContent(8021,40532);
   ThetaY_vs_Y_0_5__440->SetBinContent(8047,41172);
   ThetaY_vs_Y_0_5__440->SetBinContent(8073,41650);
   ThetaY_vs_Y_0_5__440->SetBinContent(8099,41320);
   ThetaY_vs_Y_0_5__440->SetBinContent(8125,41538);
   ThetaY_vs_Y_0_5__440->SetBinContent(8151,41412);
   ThetaY_vs_Y_0_5__440->SetBinContent(8177,40833);
   ThetaY_vs_Y_0_5__440->SetBinContent(8203,41085);
   ThetaY_vs_Y_0_5__440->SetBinContent(8229,41231);
   ThetaY_vs_Y_0_5__440->SetBinContent(8255,40814);
   ThetaY_vs_Y_0_5__440->SetBinContent(8281,41875);
   ThetaY_vs_Y_0_5__440->SetBinContent(8307,41616);
   ThetaY_vs_Y_0_5__440->SetBinContent(8333,41802);
   ThetaY_vs_Y_0_5__440->SetBinContent(8359,41796);
   ThetaY_vs_Y_0_5__440->SetBinContent(8385,41205);
   ThetaY_vs_Y_0_5__440->SetBinContent(8411,40051);
   ThetaY_vs_Y_0_5__440->SetBinContent(8437,38302);
   ThetaY_vs_Y_0_5__440->SetBinContent(8463,35452);
   ThetaY_vs_Y_0_5__440->SetBinContent(8489,31026);
   ThetaY_vs_Y_0_5__440->SetBinContent(8515,25002);
   ThetaY_vs_Y_0_5__440->SetBinContent(8541,15987);
   ThetaY_vs_Y_0_5__440->SetBinContent(8567,7944);
   ThetaY_vs_Y_0_5__440->SetBinContent(8593,2662);
   ThetaY_vs_Y_0_5__440->SetBinContent(8619,206);
   ThetaY_vs_Y_0_5__440->SetEntries(972949);
   ThetaY_vs_Y_0_5__440->SetContour(20);
   ThetaY_vs_Y_0_5__440->SetContourLevel(0,0);
   ThetaY_vs_Y_0_5__440->SetContourLevel(1,2093.75);
   ThetaY_vs_Y_0_5__440->SetContourLevel(2,4187.5);
   ThetaY_vs_Y_0_5__440->SetContourLevel(3,6281.25);
   ThetaY_vs_Y_0_5__440->SetContourLevel(4,8375);
   ThetaY_vs_Y_0_5__440->SetContourLevel(5,10468.75);
   ThetaY_vs_Y_0_5__440->SetContourLevel(6,12562.5);
   ThetaY_vs_Y_0_5__440->SetContourLevel(7,14656.25);
   ThetaY_vs_Y_0_5__440->SetContourLevel(8,16750);
   ThetaY_vs_Y_0_5__440->SetContourLevel(9,18843.75);
   ThetaY_vs_Y_0_5__440->SetContourLevel(10,20937.5);
   ThetaY_vs_Y_0_5__440->SetContourLevel(11,23031.25);
   ThetaY_vs_Y_0_5__440->SetContourLevel(12,25125);
   ThetaY_vs_Y_0_5__440->SetContourLevel(13,27218.75);
   ThetaY_vs_Y_0_5__440->SetContourLevel(14,29312.5);
   ThetaY_vs_Y_0_5__440->SetContourLevel(15,31406.25);
   ThetaY_vs_Y_0_5__440->SetContourLevel(16,33500);
   ThetaY_vs_Y_0_5__440->SetContourLevel(17,35593.75);
   ThetaY_vs_Y_0_5__440->SetContourLevel(18,37687.5);
   ThetaY_vs_Y_0_5__440->SetContourLevel(19,39781.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__440->SetLineColor(ci);
   ThetaY_vs_Y_0_5__440->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__440->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__440->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__440->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__440->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__440->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__440->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__440->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__440->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__440->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__440->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__440->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__440->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__440->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__440->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_0_5","Reco vertices","lpf");
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
