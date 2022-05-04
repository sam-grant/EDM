void S18_VerticalDecayAngleRatio_-15_-10()
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
   upper_pad->Range(-125,-0.064812,125,1.231428);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI15_mI10__600 = new TH1D("S18_ThetaY_mI15_mI10__600","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__600->SetBinContent(309,0.01195219);
   S18_ThetaY_mI15_mI10__600->SetBinContent(310,0.08366534);
   S18_ThetaY_mI15_mI10__600->SetBinContent(311,0.5458167);
   S18_ThetaY_mI15_mI10__600->SetBinContent(312,0.8565737);
   S18_ThetaY_mI15_mI10__600->SetBinContent(313,0.9920319);
   S18_ThetaY_mI15_mI10__600->SetBinContent(314,1);
   S18_ThetaY_mI15_mI10__600->SetBinContent(315,0.9203187);
   S18_ThetaY_mI15_mI10__600->SetBinContent(316,0.8884462);
   S18_ThetaY_mI15_mI10__600->SetBinContent(317,0.8605578);
   S18_ThetaY_mI15_mI10__600->SetBinContent(318,0.7808765);
   S18_ThetaY_mI15_mI10__600->SetBinContent(319,0.9203187);
   S18_ThetaY_mI15_mI10__600->SetBinContent(320,0.9482072);
   S18_ThetaY_mI15_mI10__600->SetBinContent(321,0.7290837);
   S18_ThetaY_mI15_mI10__600->SetBinContent(322,0.7848606);
   S18_ThetaY_mI15_mI10__600->SetBinContent(323,0.6693227);
   S18_ThetaY_mI15_mI10__600->SetBinContent(324,0.374502);
   S18_ThetaY_mI15_mI10__600->SetBinContent(325,0.09163347);
   S18_ThetaY_mI15_mI10__600->SetBinContent(326,0.01195219);
   S18_ThetaY_mI15_mI10__600->SetBinContent(327,0.003984064);
   S18_ThetaY_mI15_mI10__600->SetBinError(309,0.006900601);
   S18_ThetaY_mI15_mI10__600->SetBinError(310,0.01825727);
   S18_ThetaY_mI15_mI10__600->SetBinError(311,0.04663227);
   S18_ThetaY_mI15_mI10__600->SetBinError(312,0.05841784);
   S18_ThetaY_mI15_mI10__600->SetBinError(313,0.06286747);
   S18_ThetaY_mI15_mI10__600->SetBinError(314,0.06311944);
   S18_ThetaY_mI15_mI10__600->SetBinError(315,0.06055253);
   S18_ThetaY_mI15_mI10__600->SetBinError(316,0.05949476);
   S18_ThetaY_mI15_mI10__600->SetBinError(317,0.05855354);
   S18_ThetaY_mI15_mI10__600->SetBinError(318,0.05577689);
   S18_ThetaY_mI15_mI10__600->SetBinError(319,0.06055253);
   S18_ThetaY_mI15_mI10__600->SetBinError(320,0.06146314);
   S18_ThetaY_mI15_mI10__600->SetBinError(321,0.05389542);
   S18_ThetaY_mI15_mI10__600->SetBinError(322,0.055919);
   S18_ThetaY_mI15_mI10__600->SetBinError(323,0.05163937);
   S18_ThetaY_mI15_mI10__600->SetBinError(324,0.03862693);
   S18_ThetaY_mI15_mI10__600->SetBinError(325,0.0191069);
   S18_ThetaY_mI15_mI10__600->SetBinError(326,0.006900601);
   S18_ThetaY_mI15_mI10__600->SetBinError(327,0.003984064);
   S18_ThetaY_mI15_mI10__600->SetMinimum(0);
   S18_ThetaY_mI15_mI10__600->SetMaximum(1.101804);
   S18_ThetaY_mI15_mI10__600->SetEntries(2880);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__600->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__600->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__600->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__600->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__600->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__600->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__600->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__600->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__600->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__600->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__600->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__600->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__600->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__600->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__600->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__600->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__601 = new TH1D("ThetaY_mI15_mI10__601","",630,-1575,1575);
   ThetaY_mI15_mI10__601->SetBinContent(303,0.0005377067);
   ThetaY_mI15_mI10__601->SetBinContent(304,0.05196935);
   ThetaY_mI15_mI10__601->SetBinContent(305,0.2372093);
   ThetaY_mI15_mI10__601->SetBinContent(306,0.5013308);
   ThetaY_mI15_mI10__601->SetBinContent(307,0.6852803);
   ThetaY_mI15_mI10__601->SetBinContent(308,0.811023);
   ThetaY_mI15_mI10__601->SetBinContent(309,0.8989649);
   ThetaY_mI15_mI10__601->SetBinContent(310,0.9450733);
   ThetaY_mI15_mI10__601->SetBinContent(311,0.9759645);
   ThetaY_mI15_mI10__601->SetBinContent(312,0.9809652);
   ThetaY_mI15_mI10__601->SetBinContent(313,1.00164);
   ThetaY_mI15_mI10__601->SetBinContent(314,1);
   ThetaY_mI15_mI10__601->SetBinContent(315,0.9918269);
   ThetaY_mI15_mI10__601->SetBinContent(316,0.9899987);
   ThetaY_mI15_mI10__601->SetBinContent(317,0.9877941);
   ThetaY_mI15_mI10__601->SetBinContent(318,0.9907783);
   ThetaY_mI15_mI10__601->SetBinContent(319,1.000215);
   ThetaY_mI15_mI10__601->SetBinContent(320,0.9767711);
   ThetaY_mI15_mI10__601->SetBinContent(321,0.935287);
   ThetaY_mI15_mI10__601->SetBinContent(322,0.8932921);
   ThetaY_mI15_mI10__601->SetBinContent(323,0.8113187);
   ThetaY_mI15_mI10__601->SetBinContent(324,0.6834252);
   ThetaY_mI15_mI10__601->SetBinContent(325,0.5020298);
   ThetaY_mI15_mI10__601->SetBinContent(326,0.2410539);
   ThetaY_mI15_mI10__601->SetBinContent(327,0.05307165);
   ThetaY_mI15_mI10__601->SetBinContent(328,0.0003495093);
   ThetaY_mI15_mI10__601->SetBinError(303,0.0001202349);
   ThetaY_mI15_mI10__601->SetBinError(304,0.001182038);
   ThetaY_mI15_mI10__601->SetBinError(305,0.002525362);
   ThetaY_mI15_mI10__601->SetBinError(306,0.0036713);
   ThetaY_mI15_mI10__601->SetBinError(307,0.004292317);
   ThetaY_mI15_mI10__601->SetBinError(308,0.004669542);
   ThetaY_mI15_mI10__601->SetBinError(309,0.004916195);
   ThetaY_mI15_mI10__601->SetBinError(310,0.005040695);
   ThetaY_mI15_mI10__601->SetBinError(311,0.005122415);
   ThetaY_mI15_mI10__601->SetBinError(312,0.005135521);
   ThetaY_mI15_mI10__601->SetBinError(313,0.005189357);
   ThetaY_mI15_mI10__601->SetBinError(314,0.005185107);
   ThetaY_mI15_mI10__601->SetBinError(315,0.005163874);
   ThetaY_mI15_mI10__601->SetBinError(316,0.005159113);
   ThetaY_mI15_mI10__601->SetBinError(317,0.005153365);
   ThetaY_mI15_mI10__601->SetBinError(318,0.005161144);
   ThetaY_mI15_mI10__601->SetBinError(319,0.005185665);
   ThetaY_mI15_mI10__601->SetBinError(320,0.005124531);
   ThetaY_mI15_mI10__601->SetBinError(321,0.005014529);
   ThetaY_mI15_mI10__601->SetBinError(322,0.004900659);
   ThetaY_mI15_mI10__601->SetBinError(323,0.004670393);
   ThetaY_mI15_mI10__601->SetBinError(324,0.004286504);
   ThetaY_mI15_mI10__601->SetBinError(325,0.003673859);
   ThetaY_mI15_mI10__601->SetBinError(326,0.002545744);
   ThetaY_mI15_mI10__601->SetBinError(327,0.001194508);
   ThetaY_mI15_mI10__601->SetBinError(328,9.693645e-05);
   ThetaY_mI15_mI10__601->SetEntries(674984);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__601->SetLineColor(ci);
   ThetaY_mI15_mI10__601->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__601->SetMarkerColor(ci);
   ThetaY_mI15_mI10__601->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__601->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__601->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__601->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__601->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__601->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__601->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__601->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__601->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__601->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__601->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__601->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__601->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__601->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__601->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__601->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__601->Draw("AEsame");
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
   
   Double_t _fx3201[26] = {
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
   Double_t _fy3201[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.0132955,
   0.08852789,
   0.5592588,
   0.8731948,
   0.9904076,
   1,
   0.9279026,
   0.8974216,
   0.8711915,
   0.7881445,
   0.9201208,
   0.9707568,
   0.7795293,
   0.8786158,
   0.8249812,
   0.547978,
   0.1825259,
   0.04958306,
   0.07506953,
   0};
   Double_t _felx3201[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3201[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.007236116,
   0.01916884,
   0.04781167,
   0.05967934,
   0.06293082,
   0.06328904,
   0.06119722,
   0.0602315,
   0.05940425,
   0.05639664,
   0.06068242,
   0.0630854,
   0.05772222,
   0.06272987,
   0.06376103,
   0.05652206,
   0.03780294,
   0.02698815,
   0.06210698,
   0};
   Double_t _fehx3201[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3201[26] = {
   14.28834,
   0.1412033,
   0.03092422,
   0.01463128,
   0.01070367,
   0.009044098,
   0.01293406,
   0.0238491,
   0.05208636,
   0.0639063,
   0.0670642,
   0.06742897,
   0.0653746,
   0.06441808,
   0.0636016,
   0.06058578,
   0.06482453,
   0.06732644,
   0.06216506,
   0.06737884,
   0.06889255,
   0.06267852,
   0.04658195,
   0.04824678,
   0.1727687,
   22.54452};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3201,_fy3201,_felx3201,_fehx3201,_fely3201,_fehy3201);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3201 = new TH1F("Graph_Graph3201","",100,-100,100);
   Graph_Graph3201->SetMinimum(0);
   Graph_Graph3201->SetMaximum(1.5);
   Graph_Graph3201->SetDirectory(0);
   Graph_Graph3201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3201->SetLineColor(ci);
   Graph_Graph3201->GetXaxis()->SetRange(1,100);
   Graph_Graph3201->GetXaxis()->CenterTitle(true);
   Graph_Graph3201->GetXaxis()->SetLabelFont(42);
   Graph_Graph3201->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3201->GetXaxis()->SetTitleFont(42);
   Graph_Graph3201->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3201->GetYaxis()->CenterTitle(true);
   Graph_Graph3201->GetYaxis()->SetLabelFont(42);
   Graph_Graph3201->GetYaxis()->SetTitleFont(42);
   Graph_Graph3201->GetZaxis()->SetLabelFont(42);
   Graph_Graph3201->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3201->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3201);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.101804,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__602 = new TH2D("ThetaY_vs_Y_mI15_mI10__602","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(7888,20);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(7914,1933);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(7940,8823);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(7966,18647);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(7992,25489);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8018,30166);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8044,33437);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8070,35152);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8096,36301);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8122,36487);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8148,37256);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8174,37195);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8200,36891);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8226,36823);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8252,36741);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8278,36852);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8304,37203);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8330,36331);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8356,34788);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8382,33226);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8408,30177);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8434,25420);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8460,18673);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8486,8966);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8512,1974);
   ThetaY_vs_Y_mI15_mI10__602->SetBinContent(8538,13);
   ThetaY_vs_Y_mI15_mI10__602->SetEntries(674984);
   ThetaY_vs_Y_mI15_mI10__602->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(1,1862.8);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(2,3725.6);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(3,5588.4);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(4,7451.2);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(5,9314);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(6,11176.8);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(7,13039.6);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(8,14902.4);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(9,16765.2);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(10,18628);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(11,20490.8);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(12,22353.6);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(13,24216.4);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(14,26079.2);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(15,27942);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(16,29804.8);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(17,31667.6);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(18,33530.4);
   ThetaY_vs_Y_mI15_mI10__602->SetContourLevel(19,35393.2);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__602->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__602->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__602->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__602->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__602->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__602->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__602->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__602->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__602->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__602->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__602->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__602->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__602->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__602->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__602->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__602->Draw("COL");
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
