void S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.06533539,125,1.241372);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI15_mI10__429 = new TH1D("S18_ThetaY_mI15_mI10__429","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__429->SetBinContent(308,0.02020202);
   S18_ThetaY_mI15_mI10__429->SetBinContent(309,0.08080808);
   S18_ThetaY_mI15_mI10__429->SetBinContent(310,0.4545455);
   S18_ThetaY_mI15_mI10__429->SetBinContent(311,0.7676768);
   S18_ThetaY_mI15_mI10__429->SetBinContent(312,0.9494949);
   S18_ThetaY_mI15_mI10__429->SetBinContent(313,0.7575758);
   S18_ThetaY_mI15_mI10__429->SetBinContent(314,0.7272727);
   S18_ThetaY_mI15_mI10__429->SetBinContent(315,0.7474747);
   S18_ThetaY_mI15_mI10__429->SetBinContent(316,0.6969697);
   S18_ThetaY_mI15_mI10__429->SetBinContent(317,0.7777778);
   S18_ThetaY_mI15_mI10__429->SetBinContent(318,0.9090909);
   S18_ThetaY_mI15_mI10__429->SetBinContent(319,0.7171717);
   S18_ThetaY_mI15_mI10__429->SetBinContent(320,0.7979798);
   S18_ThetaY_mI15_mI10__429->SetBinContent(321,1);
   S18_ThetaY_mI15_mI10__429->SetBinContent(322,0.6262626);
   S18_ThetaY_mI15_mI10__429->SetBinContent(323,0.8686869);
   S18_ThetaY_mI15_mI10__429->SetBinContent(324,0.7777778);
   S18_ThetaY_mI15_mI10__429->SetBinContent(325,0.4747475);
   S18_ThetaY_mI15_mI10__429->SetBinContent(326,0.4040404);
   S18_ThetaY_mI15_mI10__429->SetBinContent(327,0.08080808);
   S18_ThetaY_mI15_mI10__429->SetBinContent(328,0.06060606);
   S18_ThetaY_mI15_mI10__429->SetBinError(308,0.01428499);
   S18_ThetaY_mI15_mI10__429->SetBinError(309,0.02856997);
   S18_ThetaY_mI15_mI10__429->SetBinError(310,0.06775964);
   S18_ThetaY_mI15_mI10__429->SetBinError(311,0.08805856);
   S18_ThetaY_mI15_mI10__429->SetBinError(312,0.09793293);
   S18_ThetaY_mI15_mI10__429->SetBinError(313,0.08747731);
   S18_ThetaY_mI15_mI10__429->SetBinError(314,0.08570991);
   S18_ThetaY_mI15_mI10__429->SetBinError(315,0.08689217);
   S18_ThetaY_mI15_mI10__429->SetBinError(316,0.08390529);
   S18_ThetaY_mI15_mI10__429->SetBinError(317,0.088636);
   S18_ThetaY_mI15_mI10__429->SetBinError(318,0.0958266);
   S18_ThetaY_mI15_mI10__429->SetBinError(319,0.08511262);
   S18_ThetaY_mI15_mI10__429->SetBinError(320,0.08977974);
   S18_ThetaY_mI15_mI10__429->SetBinError(321,0.1005038);
   S18_ThetaY_mI15_mI10__429->SetBinError(322,0.07953543);
   S18_ThetaY_mI15_mI10__429->SetBinError(323,0.09367291);
   S18_ThetaY_mI15_mI10__429->SetBinError(324,0.088636);
   S18_ThetaY_mI15_mI10__429->SetBinError(325,0.06924904);
   S18_ThetaY_mI15_mI10__429->SetBinError(326,0.0638844);
   S18_ThetaY_mI15_mI10__429->SetBinError(327,0.02856997);
   S18_ThetaY_mI15_mI10__429->SetBinError(328,0.02474232);
   S18_ThetaY_mI15_mI10__429->SetMinimum(0);
   S18_ThetaY_mI15_mI10__429->SetMaximum(1.110702);
   S18_ThetaY_mI15_mI10__429->SetEntries(1257);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__429->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__429->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__429->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__429->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__429->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__429->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__429->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__429->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__429->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__429->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__429->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__429->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__429->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__429->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__429->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__429->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__430 = new TH1D("ThetaY_mI15_mI10__430","",630,-1575,1575);
   ThetaY_mI15_mI10__430->SetBinContent(300,0.004510019);
   ThetaY_mI15_mI10__430->SetBinContent(301,0.06578184);
   ThetaY_mI15_mI10__430->SetBinContent(302,0.1893886);
   ThetaY_mI15_mI10__430->SetBinContent(303,0.3877972);
   ThetaY_mI15_mI10__430->SetBinContent(304,0.6004446);
   ThetaY_mI15_mI10__430->SetBinContent(305,0.7489208);
   ThetaY_mI15_mI10__430->SetBinContent(306,0.8500097);
   ThetaY_mI15_mI10__430->SetBinContent(307,0.9173056);
   ThetaY_mI15_mI10__430->SetBinContent(308,0.9584112);
   ThetaY_mI15_mI10__430->SetBinContent(309,0.9952645);
   ThetaY_mI15_mI10__430->SetBinContent(310,0.9996779);
   ThetaY_mI15_mI10__430->SetBinContent(311,1.005444);
   ThetaY_mI15_mI10__430->SetBinContent(312,0.9959732);
   ThetaY_mI15_mI10__430->SetBinContent(313,0.980768);
   ThetaY_mI15_mI10__430->SetBinContent(314,0.9822821);
   ThetaY_mI15_mI10__430->SetBinContent(315,0.988274);
   ThetaY_mI15_mI10__430->SetBinContent(316,0.9840216);
   ThetaY_mI15_mI10__430->SetBinContent(317,0.9896914);
   ThetaY_mI15_mI10__430->SetBinContent(318,1.008601);
   ThetaY_mI15_mI10__430->SetBinContent(319,0.9982282);
   ThetaY_mI15_mI10__430->SetBinContent(320,1.009729);
   ThetaY_mI15_mI10__430->SetBinContent(321,1);
   ThetaY_mI15_mI10__430->SetBinContent(322,0.9997423);
   ThetaY_mI15_mI10__430->SetBinContent(323,0.9612461);
   ThetaY_mI15_mI10__430->SetBinContent(324,0.9124412);
   ThetaY_mI15_mI10__430->SetBinContent(325,0.8475936);
   ThetaY_mI15_mI10__430->SetBinContent(326,0.7443464);
   ThetaY_mI15_mI10__430->SetBinContent(327,0.6090136);
   ThetaY_mI15_mI10__430->SetBinContent(328,0.3935636);
   ThetaY_mI15_mI10__430->SetBinContent(329,0.1927067);
   ThetaY_mI15_mI10__430->SetBinContent(330,0.0616584);
   ThetaY_mI15_mI10__430->SetBinContent(331,0.00525095);
   ThetaY_mI15_mI10__430->SetBinError(300,0.0003811661);
   ThetaY_mI15_mI10__430->SetBinError(301,0.001455721);
   ThetaY_mI15_mI10__430->SetBinError(302,0.002470029);
   ThetaY_mI15_mI10__430->SetBinError(303,0.003534496);
   ThetaY_mI15_mI10__430->SetBinError(304,0.004398065);
   ThetaY_mI15_mI10__430->SetBinError(305,0.004911827);
   ThetaY_mI15_mI10__430->SetBinError(306,0.005232836);
   ThetaY_mI15_mI10__430->SetBinError(307,0.005436034);
   ThetaY_mI15_mI10__430->SetBinError(308,0.005556497);
   ThetaY_mI15_mI10__430->SetBinError(309,0.00566232);
   ThetaY_mI15_mI10__430->SetBinError(310,0.00567486);
   ThetaY_mI15_mI10__430->SetBinError(311,0.005691204);
   ThetaY_mI15_mI10__430->SetBinError(312,0.005664336);
   ThetaY_mI15_mI10__430->SetBinError(313,0.005620932);
   ThetaY_mI15_mI10__430->SetBinError(314,0.005625269);
   ThetaY_mI15_mI10__430->SetBinError(315,0.005642399);
   ThetaY_mI15_mI10__430->SetBinError(316,0.005630247);
   ThetaY_mI15_mI10__430->SetBinError(317,0.005646444);
   ThetaY_mI15_mI10__430->SetBinError(318,0.005700132);
   ThetaY_mI15_mI10__430->SetBinError(319,0.005670744);
   ThetaY_mI15_mI10__430->SetBinError(320,0.005703317);
   ThetaY_mI15_mI10__430->SetBinError(321,0.005675775);
   ThetaY_mI15_mI10__430->SetBinError(322,0.005675043);
   ThetaY_mI15_mI10__430->SetBinError(323,0.005564709);
   ThetaY_mI15_mI10__430->SetBinError(324,0.005421602);
   ThetaY_mI15_mI10__430->SetBinError(325,0.005225393);
   ThetaY_mI15_mI10__430->SetBinError(326,0.004896804);
   ThetaY_mI15_mI10__430->SetBinError(327,0.004429336);
   ThetaY_mI15_mI10__430->SetBinError(328,0.003560677);
   ThetaY_mI15_mI10__430->SetBinError(329,0.002491572);
   ThetaY_mI15_mI10__430->SetBinError(330,0.001409358);
   ThetaY_mI15_mI10__430->SetBinError(331,0.0004112862);
   ThetaY_mI15_mI10__430->SetEntries(726013);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__430->SetLineColor(ci);
   ThetaY_mI15_mI10__430->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__430->SetMarkerColor(ci);
   ThetaY_mI15_mI10__430->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__430->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__430->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__430->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__430->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__430->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__430->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__430->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__430->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__430->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__430->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__430->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__430->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__430->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__430->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__430->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__430->Draw("AEsame");
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
   
   Double_t _fx3144[32] = {
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
   Double_t _fy3144[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02107866,
   0.08119257,
   0.4546919,
   0.76352,
   0.9533338,
   0.7724312,
   0.7403909,
   0.7563437,
   0.708287,
   0.7858791,
   0.9013383,
   0.7184447,
   0.7902912,
   1,
   0.6264241,
   0.9037092,
   0.8524141,
   0.5601122,
   0.5428124,
   0.1326868,
   0.1539931,
   0,
   0,
   0};
   Double_t _felx3144[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3144[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01361515,
   0.02809979,
   0.06757653,
   0.08749362,
   0.09830125,
   0.08910151,
   0.08715414,
   0.08782841,
   0.08515527,
   0.08947485,
   0.09496732,
   0.08515849,
   0.08883651,
   0.1004921,
   0.07941877,
   0.09739813,
   0.09706022,
   0.0814802,
   0.085538,
   0.04592469,
   0.06109501,
   0,
   0,
   0};
   Double_t _fehx3144[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3144[32] = {
   4.150534,
   0.2828222,
   0.09820598,
   0.04795703,
   0.03097221,
   0.02483162,
   0.02187837,
   0.02027327,
   0.02780344,
   0.04004726,
   0.07845454,
   0.09814706,
   0.1090039,
   0.1000273,
   0.09807423,
   0.09867462,
   0.09606794,
   0.1002949,
   0.1055455,
   0.09590751,
   0.09943463,
   0.1111399,
   0.09019041,
   0.1085105,
   0.1087991,
   0.09429588,
   0.1002143,
   0.06545421,
   0.09201207,
   0.09651478,
   0.3017452,
   3.561564};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3144,_fy3144,_felx3144,_fehx3144,_fely3144,_fehy3144);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3144 = new TH1F("Graph_Graph3144","",100,-100,100);
   Graph_Graph3144->SetMinimum(0);
   Graph_Graph3144->SetMaximum(1.5);
   Graph_Graph3144->SetDirectory(0);
   Graph_Graph3144->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3144->SetLineColor(ci);
   Graph_Graph3144->GetXaxis()->SetRange(1,100);
   Graph_Graph3144->GetXaxis()->CenterTitle(true);
   Graph_Graph3144->GetXaxis()->SetLabelFont(42);
   Graph_Graph3144->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3144->GetXaxis()->SetTitleFont(42);
   Graph_Graph3144->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3144->GetYaxis()->CenterTitle(true);
   Graph_Graph3144->GetYaxis()->SetLabelFont(42);
   Graph_Graph3144->GetYaxis()->SetTitleFont(42);
   Graph_Graph3144->GetZaxis()->SetLabelFont(42);
   Graph_Graph3144->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3144->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3144);
   
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__431 = new TH2D("ThetaY_vs_Y_mI15_mI10__431","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7810,140);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7836,2042);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7862,5879);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7888,12038);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7914,18639);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7940,23248);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7966,26386);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(7992,28475);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8018,29751);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8044,30895);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8070,31032);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8096,31211);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8122,30917);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8148,30445);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8174,30492);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8200,30678);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8226,30546);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8252,30722);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8278,31309);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8304,30987);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8330,31344);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8356,31042);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8382,31034);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8408,29839);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8434,28324);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8460,26311);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8486,23106);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8512,18905);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8538,12217);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8564,5982);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8590,1914);
   ThetaY_vs_Y_mI15_mI10__431->SetBinContent(8616,163);
   ThetaY_vs_Y_mI15_mI10__431->SetEntries(726013);
   ThetaY_vs_Y_mI15_mI10__431->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(1,1567.2);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(2,3134.4);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(3,4701.6);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(4,6268.8);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(5,7836);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(6,9403.2);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(7,10970.4);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(8,12537.6);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(9,14104.8);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(10,15672);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(11,17239.2);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(12,18806.4);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(13,20373.6);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(14,21940.8);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(15,23508);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(16,25075.2);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(17,26642.4);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(18,28209.6);
   ThetaY_vs_Y_mI15_mI10__431->SetContourLevel(19,29776.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__431->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__431->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__431->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__431->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__431->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__431->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__431->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__431->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__431->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__431->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__431->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__431->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__431->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__431->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__431->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__431->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-15_-10","Reco vertices","lpf");
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
