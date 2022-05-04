void S18_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.06612677,125,1.256409);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__444 = new TH1D("S18_ThetaY_10_15__444","",630,-1575,1575);
   S18_ThetaY_10_15__444->SetBinContent(303,0.01030928);
   S18_ThetaY_10_15__444->SetBinContent(304,0.1237113);
   S18_ThetaY_10_15__444->SetBinContent(305,0.3402062);
   S18_ThetaY_10_15__444->SetBinContent(306,0.6701031);
   S18_ThetaY_10_15__444->SetBinContent(307,0.5979381);
   S18_ThetaY_10_15__444->SetBinContent(308,0.8969072);
   S18_ThetaY_10_15__444->SetBinContent(309,0.9690722);
   S18_ThetaY_10_15__444->SetBinContent(310,0.9793814);
   S18_ThetaY_10_15__444->SetBinContent(311,0.742268);
   S18_ThetaY_10_15__444->SetBinContent(312,0.8969072);
   S18_ThetaY_10_15__444->SetBinContent(313,0.6597938);
   S18_ThetaY_10_15__444->SetBinContent(314,1);
   S18_ThetaY_10_15__444->SetBinContent(315,0.9175258);
   S18_ThetaY_10_15__444->SetBinContent(316,0.8453608);
   S18_ThetaY_10_15__444->SetBinContent(317,0.8453608);
   S18_ThetaY_10_15__444->SetBinContent(318,0.8453608);
   S18_ThetaY_10_15__444->SetBinContent(319,0.8865979);
   S18_ThetaY_10_15__444->SetBinContent(320,0.8350515);
   S18_ThetaY_10_15__444->SetBinContent(321,0.3505155);
   S18_ThetaY_10_15__444->SetBinContent(322,0.08247423);
   S18_ThetaY_10_15__444->SetBinContent(323,0.01030928);
   S18_ThetaY_10_15__444->SetBinError(303,0.01030928);
   S18_ThetaY_10_15__444->SetBinError(304,0.03571239);
   S18_ThetaY_10_15__444->SetBinError(305,0.0592223);
   S18_ThetaY_10_15__444->SetBinError(306,0.08311606);
   S18_ThetaY_10_15__444->SetBinError(307,0.07851312);
   S18_ThetaY_10_15__444->SetBinError(308,0.09615855);
   S18_ThetaY_10_15__444->SetBinError(309,0.09995216);
   S18_ThetaY_10_15__444->SetBinError(310,0.1004824);
   S18_ThetaY_10_15__444->SetBinError(311,0.08747713);
   S18_ThetaY_10_15__444->SetBinError(312,0.09615855);
   S18_ThetaY_10_15__444->SetBinError(313,0.08247423);
   S18_ThetaY_10_15__444->SetBinError(314,0.1015346);
   S18_ThetaY_10_15__444->SetBinError(315,0.09725754);
   S18_ThetaY_10_15__444->SetBinError(316,0.09335449);
   S18_ThetaY_10_15__444->SetBinError(317,0.09335449);
   S18_ThetaY_10_15__444->SetBinError(318,0.09335449);
   S18_ThetaY_10_15__444->SetBinError(319,0.09560431);
   S18_ThetaY_10_15__444->SetBinError(320,0.09278351);
   S18_ThetaY_10_15__444->SetBinError(321,0.06011291);
   S18_ThetaY_10_15__444->SetBinError(322,0.02915904);
   S18_ThetaY_10_15__444->SetBinError(323,0.01030928);
   S18_ThetaY_10_15__444->SetMinimum(0);
   S18_ThetaY_10_15__444->SetMaximum(1.124155);
   S18_ThetaY_10_15__444->SetEntries(1310);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__444->SetLineColor(ci);
   S18_ThetaY_10_15__444->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__444->SetMarkerColor(ci);
   S18_ThetaY_10_15__444->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__444->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__444->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__444->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__444->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__444->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__444->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__444->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__444->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__444->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__444->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__444->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__444->Draw("AE");
   
   TH1D *ThetaY_10_15__445 = new TH1D("ThetaY_10_15__445","",630,-1575,1575);
   ThetaY_10_15__445->SetBinContent(300,0.004879794);
   ThetaY_10_15__445->SetBinContent(301,0.06376265);
   ThetaY_10_15__445->SetBinContent(302,0.1906698);
   ThetaY_10_15__445->SetBinContent(303,0.3943199);
   ThetaY_10_15__445->SetBinContent(304,0.5957253);
   ThetaY_10_15__445->SetBinContent(305,0.75832);
   ThetaY_10_15__445->SetBinContent(306,0.8540616);
   ThetaY_10_15__445->SetBinContent(307,0.9237776);
   ThetaY_10_15__445->SetBinContent(308,0.9729334);
   ThetaY_10_15__445->SetBinContent(309,0.9995771);
   ThetaY_10_15__445->SetBinContent(310,1.009304);
   ThetaY_10_15__445->SetBinContent(311,1.00462);
   ThetaY_10_15__445->SetBinContent(312,1.014835);
   ThetaY_10_15__445->SetBinContent(313,1.004782);
   ThetaY_10_15__445->SetBinContent(314,1);
   ThetaY_10_15__445->SetBinContent(315,0.9946973);
   ThetaY_10_15__445->SetBinContent(316,0.9994144);
   ThetaY_10_15__445->SetBinContent(317,0.9985361);
   ThetaY_10_15__445->SetBinContent(318,0.9980806);
   ThetaY_10_15__445->SetBinContent(319,0.9988939);
   ThetaY_10_15__445->SetBinContent(320,1.021959);
   ThetaY_10_15__445->SetBinContent(321,1.003871);
   ThetaY_10_15__445->SetBinContent(322,1.001822);
   ThetaY_10_15__445->SetBinContent(323,0.9621653);
   ThetaY_10_15__445->SetBinContent(324,0.9216956);
   ThetaY_10_15__445->SetBinContent(325,0.8505156);
   ThetaY_10_15__445->SetBinContent(326,0.7509353);
   ThetaY_10_15__445->SetBinContent(327,0.610137);
   ThetaY_10_15__445->SetBinContent(328,0.3838446);
   ThetaY_10_15__445->SetBinContent(329,0.1899541);
   ThetaY_10_15__445->SetBinContent(330,0.06503139);
   ThetaY_10_15__445->SetBinContent(331,0.005205114);
   ThetaY_10_15__445->SetBinError(300,0.0003984335);
   ThetaY_10_15__445->SetBinError(301,0.001440251);
   ThetaY_10_15__445->SetBinError(302,0.002490555);
   ThetaY_10_15__445->SetBinError(303,0.00358162);
   ThetaY_10_15__445->SetBinError(304,0.004402285);
   ThetaY_10_15__445->SetBinError(305,0.004966854);
   ThetaY_10_15__445->SetBinError(306,0.005271082);
   ThetaY_10_15__445->SetBinError(307,0.005481998);
   ThetaY_10_15__445->SetBinError(308,0.005625961);
   ThetaY_10_15__445->SetBinError(309,0.005702474);
   ThetaY_10_15__445->SetBinError(310,0.005730152);
   ThetaY_10_15__445->SetBinError(311,0.005716839);
   ThetaY_10_15__445->SetBinError(312,0.00574583);
   ThetaY_10_15__445->SetBinError(313,0.005717302);
   ThetaY_10_15__445->SetBinError(314,0.00570368);
   ThetaY_10_15__445->SetBinError(315,0.005688537);
   ThetaY_10_15__445->SetBinError(316,0.00570201);
   ThetaY_10_15__445->SetBinError(317,0.005699503);
   ThetaY_10_15__445->SetBinError(318,0.005698203);
   ThetaY_10_15__445->SetBinError(319,0.005700524);
   ThetaY_10_15__445->SetBinError(320,0.005765963);
   ThetaY_10_15__445->SetBinError(321,0.005714709);
   ThetaY_10_15__445->SetBinError(322,0.005708873);
   ThetaY_10_15__445->SetBinError(323,0.005594741);
   ThetaY_10_15__445->SetBinError(324,0.005475816);
   ThetaY_10_15__445->SetBinError(325,0.005260128);
   ThetaY_10_15__445->SetBinError(326,0.004942611);
   ThetaY_10_15__445->SetBinError(327,0.004455216);
   ThetaY_10_15__445->SetBinError(328,0.003533726);
   ThetaY_10_15__445->SetBinError(329,0.002485876);
   ThetaY_10_15__445->SetBinError(330,0.00145451);
   ThetaY_10_15__445->SetBinError(331,0.0004115004);
   ThetaY_10_15__445->SetEntries(723852);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__445->SetLineColor(ci);
   ThetaY_10_15__445->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__445->SetMarkerColor(ci);
   ThetaY_10_15__445->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__445->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__445->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__445->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__445->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__445->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__445->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__445->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__445->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__445->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__445->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__445->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__445->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__445->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__445->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__445->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__445->Draw("AEsame");
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
   
   Double_t _fx3149[32] = {
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
   Double_t _fy3149[32] = {
   0,
   0,
   0,
   0.02614445,
   0.2076651,
   0.4486314,
   0.7846074,
   0.647275,
   0.9218588,
   0.9694822,
   0.9703531,
   0.7388549,
   0.8837965,
   0.6566536,
   1,
   0.9224171,
   0.8458561,
   0.8466002,
   0.8469865,
   0.8875797,
   0.8171086,
   0.3491637,
   0.08232425,
   0.01071466,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3149[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3149[32] = {
   0,
   0,
   0,
   0.02162824,
   0.05912053,
   0.07775231,
   0.09718588,
   0.08483068,
   0.09878512,
   0.09996729,
   0.09953111,
   0.08697205,
   0.09470081,
   0.08195017,
   0.1015175,
   0.09773239,
   0.0933412,
   0.09342341,
   0.0934661,
   0.09565592,
   0.09071739,
   0.05961699,
   0.02849146,
   0.008863723,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3149[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3149[32] = {
   3.913393,
   0.2978001,
   0.09955736,
   0.06012805,
   0.07894528,
   0.09255909,
   0.1100439,
   0.09675338,
   0.1099873,
   0.1108515,
   0.1103076,
   0.09786911,
   0.105439,
   0.09287932,
   0.1123899,
   0.1086831,
   0.1042605,
   0.1043523,
   0.1044,
   0.1065689,
   0.1013981,
   0.07078436,
   0.04060548,
   0.02464003,
   0.02059272,
   0.0223162,
   0.02527563,
   0.03110865,
   0.04944992,
   0.09993253,
   0.2919874,
   3.667397};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3149,_fy3149,_felx3149,_fehx3149,_fely3149,_fehy3149);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3149 = new TH1F("Graph_Graph3149","",100,-100,100);
   Graph_Graph3149->SetMinimum(0);
   Graph_Graph3149->SetMaximum(1.5);
   Graph_Graph3149->SetDirectory(0);
   Graph_Graph3149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3149->SetLineColor(ci);
   Graph_Graph3149->GetXaxis()->SetRange(1,100);
   Graph_Graph3149->GetXaxis()->CenterTitle(true);
   Graph_Graph3149->GetXaxis()->SetLabelFont(42);
   Graph_Graph3149->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3149->GetXaxis()->SetTitleFont(42);
   Graph_Graph3149->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3149->GetYaxis()->CenterTitle(true);
   Graph_Graph3149->GetYaxis()->SetLabelFont(42);
   Graph_Graph3149->GetYaxis()->SetTitleFont(42);
   Graph_Graph3149->GetZaxis()->SetLabelFont(42);
   Graph_Graph3149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3149->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3149);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.124155,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__446 = new TH2D("ThetaY_vs_Y_10_15__446","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__446->SetBinContent(7815,150);
   ThetaY_vs_Y_10_15__446->SetBinContent(7841,1960);
   ThetaY_vs_Y_10_15__446->SetBinContent(7867,5861);
   ThetaY_vs_Y_10_15__446->SetBinContent(7893,12121);
   ThetaY_vs_Y_10_15__446->SetBinContent(7919,18312);
   ThetaY_vs_Y_10_15__446->SetBinContent(7945,23310);
   ThetaY_vs_Y_10_15__446->SetBinContent(7971,26253);
   ThetaY_vs_Y_10_15__446->SetBinContent(7997,28396);
   ThetaY_vs_Y_10_15__446->SetBinContent(8023,29907);
   ThetaY_vs_Y_10_15__446->SetBinContent(8049,30726);
   ThetaY_vs_Y_10_15__446->SetBinContent(8075,31025);
   ThetaY_vs_Y_10_15__446->SetBinContent(8101,30881);
   ThetaY_vs_Y_10_15__446->SetBinContent(8127,31195);
   ThetaY_vs_Y_10_15__446->SetBinContent(8153,30886);
   ThetaY_vs_Y_10_15__446->SetBinContent(8179,30739);
   ThetaY_vs_Y_10_15__446->SetBinContent(8205,30576);
   ThetaY_vs_Y_10_15__446->SetBinContent(8231,30721);
   ThetaY_vs_Y_10_15__446->SetBinContent(8257,30694);
   ThetaY_vs_Y_10_15__446->SetBinContent(8283,30680);
   ThetaY_vs_Y_10_15__446->SetBinContent(8309,30705);
   ThetaY_vs_Y_10_15__446->SetBinContent(8335,31414);
   ThetaY_vs_Y_10_15__446->SetBinContent(8361,30858);
   ThetaY_vs_Y_10_15__446->SetBinContent(8387,30795);
   ThetaY_vs_Y_10_15__446->SetBinContent(8413,29576);
   ThetaY_vs_Y_10_15__446->SetBinContent(8439,28332);
   ThetaY_vs_Y_10_15__446->SetBinContent(8465,26144);
   ThetaY_vs_Y_10_15__446->SetBinContent(8491,23083);
   ThetaY_vs_Y_10_15__446->SetBinContent(8517,18755);
   ThetaY_vs_Y_10_15__446->SetBinContent(8543,11799);
   ThetaY_vs_Y_10_15__446->SetBinContent(8569,5839);
   ThetaY_vs_Y_10_15__446->SetBinContent(8595,1999);
   ThetaY_vs_Y_10_15__446->SetBinContent(8621,160);
   ThetaY_vs_Y_10_15__446->SetEntries(723852);
   ThetaY_vs_Y_10_15__446->SetContour(20);
   ThetaY_vs_Y_10_15__446->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__446->SetContourLevel(1,1570.7);
   ThetaY_vs_Y_10_15__446->SetContourLevel(2,3141.4);
   ThetaY_vs_Y_10_15__446->SetContourLevel(3,4712.1);
   ThetaY_vs_Y_10_15__446->SetContourLevel(4,6282.8);
   ThetaY_vs_Y_10_15__446->SetContourLevel(5,7853.5);
   ThetaY_vs_Y_10_15__446->SetContourLevel(6,9424.2);
   ThetaY_vs_Y_10_15__446->SetContourLevel(7,10994.9);
   ThetaY_vs_Y_10_15__446->SetContourLevel(8,12565.6);
   ThetaY_vs_Y_10_15__446->SetContourLevel(9,14136.3);
   ThetaY_vs_Y_10_15__446->SetContourLevel(10,15707);
   ThetaY_vs_Y_10_15__446->SetContourLevel(11,17277.7);
   ThetaY_vs_Y_10_15__446->SetContourLevel(12,18848.4);
   ThetaY_vs_Y_10_15__446->SetContourLevel(13,20419.1);
   ThetaY_vs_Y_10_15__446->SetContourLevel(14,21989.8);
   ThetaY_vs_Y_10_15__446->SetContourLevel(15,23560.5);
   ThetaY_vs_Y_10_15__446->SetContourLevel(16,25131.2);
   ThetaY_vs_Y_10_15__446->SetContourLevel(17,26701.9);
   ThetaY_vs_Y_10_15__446->SetContourLevel(18,28272.6);
   ThetaY_vs_Y_10_15__446->SetContourLevel(19,29843.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__446->SetLineColor(ci);
   ThetaY_vs_Y_10_15__446->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__446->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__446->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__446->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__446->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__446->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__446->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__446->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__446->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__446->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__446->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__446->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__446->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__446->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__446->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
