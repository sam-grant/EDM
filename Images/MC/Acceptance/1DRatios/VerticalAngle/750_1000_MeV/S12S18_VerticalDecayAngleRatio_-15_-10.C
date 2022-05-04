void S12S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.06479807,125,1.231163);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI15_mI10__657 = new TH1D("S12S18_ThetaY_mI15_mI10__657","",630,-1575,1575);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(309,0.01632653);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(310,0.09183673);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(311,0.6306122);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(312,0.9714286);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(313,0.9571429);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(314,0.9857143);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(315,0.8755102);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(316,0.9306122);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(317,0.9163265);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(318,0.9204082);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(319,1);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(320,0.8857143);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(321,0.8183673);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(322,0.8530612);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(323,0.6734694);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(324,0.3816327);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(325,0.09591837);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(326,0.01428571);
   S12S18_ThetaY_mI15_mI10__657->SetBinContent(327,0.002040816);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(309,0.0057723);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(310,0.01369021);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(311,0.03587428);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(312,0.04452536);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(313,0.04419675);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(314,0.04485155);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(315,0.04227003);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(316,0.04357991);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(317,0.04324412);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(318,0.04334033);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(319,0.0451754);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(320,0.04251565);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(321,0.04086732);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(322,0.04172459);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(323,0.03707327);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(324,0.02790774);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(325,0.01399113);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(326,0.005399492);
   S12S18_ThetaY_mI15_mI10__657->SetBinError(327,0.002040816);
   S12S18_ThetaY_mI15_mI10__657->SetMinimum(0);
   S12S18_ThetaY_mI15_mI10__657->SetMaximum(1.101567);
   S12S18_ThetaY_mI15_mI10__657->SetEntries(5890);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__657->SetLineColor(ci);
   S12S18_ThetaY_mI15_mI10__657->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__657->SetMarkerColor(ci);
   S12S18_ThetaY_mI15_mI10__657->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI15_mI10__657->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI15_mI10__657->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__657->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__657->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__657->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI15_mI10__657->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI15_mI10__657->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__657->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__657->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__657->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__657->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__657->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__658 = new TH1D("ThetaY_mI15_mI10__658","",630,-1575,1575);
   ThetaY_mI15_mI10__658->SetBinContent(303,0.0005375911);
   ThetaY_mI15_mI10__658->SetBinContent(304,0.05195818);
   ThetaY_mI15_mI10__658->SetBinContent(305,0.2371583);
   ThetaY_mI15_mI10__658->SetBinContent(306,0.501223);
   ThetaY_mI15_mI10__658->SetBinContent(307,0.6851329);
   ThetaY_mI15_mI10__658->SetBinContent(308,0.8108486);
   ThetaY_mI15_mI10__658->SetBinContent(309,0.8987716);
   ThetaY_mI15_mI10__658->SetBinContent(310,0.94487);
   ThetaY_mI15_mI10__658->SetBinContent(311,0.9757546);
   ThetaY_mI15_mI10__658->SetBinContent(312,0.9807542);
   ThetaY_mI15_mI10__658->SetBinContent(313,1.001425);
   ThetaY_mI15_mI10__658->SetBinContent(314,0.999785);
   ThetaY_mI15_mI10__658->SetBinContent(315,0.9916136);
   ThetaY_mI15_mI10__658->SetBinContent(316,0.9897858);
   ThetaY_mI15_mI10__658->SetBinContent(317,0.9875816);
   ThetaY_mI15_mI10__658->SetBinContent(318,0.9905653);
   ThetaY_mI15_mI10__658->SetBinContent(319,1);
   ThetaY_mI15_mI10__658->SetBinContent(320,0.976561);
   ThetaY_mI15_mI10__658->SetBinContent(321,0.9350859);
   ThetaY_mI15_mI10__658->SetBinContent(322,0.8931);
   ThetaY_mI15_mI10__658->SetBinContent(323,0.8111443);
   ThetaY_mI15_mI10__658->SetBinContent(324,0.6832782);
   ThetaY_mI15_mI10__658->SetBinContent(325,0.5019219);
   ThetaY_mI15_mI10__658->SetBinContent(326,0.2410021);
   ThetaY_mI15_mI10__658->SetBinContent(327,0.05306024);
   ThetaY_mI15_mI10__658->SetBinContent(328,0.0003494342);
   ThetaY_mI15_mI10__658->SetBinError(303,0.000120209);
   ThetaY_mI15_mI10__658->SetBinError(304,0.001181784);
   ThetaY_mI15_mI10__658->SetBinError(305,0.002524819);
   ThetaY_mI15_mI10__658->SetBinError(306,0.003670511);
   ThetaY_mI15_mI10__658->SetBinError(307,0.004291394);
   ThetaY_mI15_mI10__658->SetBinError(308,0.004668538);
   ThetaY_mI15_mI10__658->SetBinError(309,0.004915138);
   ThetaY_mI15_mI10__658->SetBinError(310,0.005039611);
   ThetaY_mI15_mI10__658->SetBinError(311,0.005121313);
   ThetaY_mI15_mI10__658->SetBinError(312,0.005134417);
   ThetaY_mI15_mI10__658->SetBinError(313,0.005188241);
   ThetaY_mI15_mI10__658->SetBinError(314,0.005183992);
   ThetaY_mI15_mI10__658->SetBinError(315,0.005162764);
   ThetaY_mI15_mI10__658->SetBinError(316,0.005158003);
   ThetaY_mI15_mI10__658->SetBinError(317,0.005152257);
   ThetaY_mI15_mI10__658->SetBinError(318,0.005160034);
   ThetaY_mI15_mI10__658->SetBinError(319,0.005184549);
   ThetaY_mI15_mI10__658->SetBinError(320,0.005123429);
   ThetaY_mI15_mI10__658->SetBinError(321,0.005013451);
   ThetaY_mI15_mI10__658->SetBinError(322,0.004899605);
   ThetaY_mI15_mI10__658->SetBinError(323,0.004669389);
   ThetaY_mI15_mI10__658->SetBinError(324,0.004285582);
   ThetaY_mI15_mI10__658->SetBinError(325,0.003673069);
   ThetaY_mI15_mI10__658->SetBinError(326,0.002545197);
   ThetaY_mI15_mI10__658->SetBinError(327,0.001194251);
   ThetaY_mI15_mI10__658->SetBinError(328,9.691561e-05);
   ThetaY_mI15_mI10__658->SetEntries(674984);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__658->SetLineColor(ci);
   ThetaY_mI15_mI10__658->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__658->SetMarkerColor(ci);
   ThetaY_mI15_mI10__658->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__658->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__658->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__658->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__658->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__658->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__658->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__658->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__658->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__658->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__658->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__658->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__658->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__658->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__658->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__658->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__658->Draw("AEsame");
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
   
   Double_t _fx3220[26] = {
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
   Double_t _fy3220[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.01816538,
   0.0971951,
   0.6462816,
   0.9904913,
   0.9557812,
   0.9859263,
   0.8829147,
   0.9402158,
   0.9278489,
   0.9291747,
   1,
   0.9069728,
   0.8751788,
   0.9551687,
   0.8302708,
   0.5585318,
   0.1911022,
   0.05927631,
   0.03846225,
   0};
   Double_t _felx3220[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3220[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.006286769,
   0.01444398,
   0.03690135,
   0.04567762,
   0.0443944,
   0.04513532,
   0.04285739,
   0.0442846,
   0.04403766,
   0.04400315,
   0.04545582,
   0.0437779,
   0.04393658,
   0.0469923,
   0.04593011,
   0.0409564,
   0.0278098,
   0.02186748,
   0.03182083,
   0};
   Double_t _fehx3220[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3220[26] = {
   7.320702,
   0.0723462,
   0.01584418,
   0.007496409,
   0.005484079,
   0.00463379,
   0.008959726,
   0.0167688,
   0.03907208,
   0.0478356,
   0.04650719,
   0.04725174,
   0.04499122,
   0.04642249,
   0.04618035,
   0.04613931,
   0.04757184,
   0.04594503,
   0.04620104,
   0.04936461,
   0.04854566,
   0.04407747,
   0.0321861,
   0.03194608,
   0.08851891,
   11.5508};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3220,_fy3220,_felx3220,_fehx3220,_fely3220,_fehy3220);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3220 = new TH1F("Graph_Graph3220","",100,-100,100);
   Graph_Graph3220->SetMinimum(0);
   Graph_Graph3220->SetMaximum(1.5);
   Graph_Graph3220->SetDirectory(0);
   Graph_Graph3220->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3220->SetLineColor(ci);
   Graph_Graph3220->GetXaxis()->SetRange(1,100);
   Graph_Graph3220->GetXaxis()->CenterTitle(true);
   Graph_Graph3220->GetXaxis()->SetLabelFont(42);
   Graph_Graph3220->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3220->GetXaxis()->SetTitleFont(42);
   Graph_Graph3220->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3220->GetYaxis()->CenterTitle(true);
   Graph_Graph3220->GetYaxis()->SetLabelFont(42);
   Graph_Graph3220->GetYaxis()->SetTitleFont(42);
   Graph_Graph3220->GetZaxis()->SetLabelFont(42);
   Graph_Graph3220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3220->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3220);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.101567,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__659 = new TH2D("ThetaY_vs_Y_mI15_mI10__659","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(7888,20);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(7914,1933);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(7940,8823);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(7966,18647);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(7992,25489);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8018,30166);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8044,33437);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8070,35152);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8096,36301);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8122,36487);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8148,37256);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8174,37195);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8200,36891);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8226,36823);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8252,36741);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8278,36852);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8304,37203);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8330,36331);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8356,34788);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8382,33226);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8408,30177);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8434,25420);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8460,18673);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8486,8966);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8512,1974);
   ThetaY_vs_Y_mI15_mI10__659->SetBinContent(8538,13);
   ThetaY_vs_Y_mI15_mI10__659->SetEntries(674984);
   ThetaY_vs_Y_mI15_mI10__659->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(1,1862.8);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(2,3725.6);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(3,5588.4);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(4,7451.2);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(5,9314);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(6,11176.8);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(7,13039.6);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(8,14902.4);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(9,16765.2);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(10,18628);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(11,20490.8);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(12,22353.6);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(13,24216.4);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(14,26079.2);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(15,27942);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(16,29804.8);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(17,31667.6);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(18,33530.4);
   ThetaY_vs_Y_mI15_mI10__659->SetContourLevel(19,35393.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__659->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__659->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__659->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__659->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__659->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__659->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__659->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__659->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__659->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__659->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__659->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__659->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__659->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__659->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__659->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__659->Draw("COL");
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
