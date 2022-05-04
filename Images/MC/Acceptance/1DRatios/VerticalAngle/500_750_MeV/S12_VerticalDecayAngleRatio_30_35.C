void S12_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:40 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.08033383,125,1.526343);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__399 = new TH1D("S12_ThetaY_30_35__399","",630,-1575,1575);
   S12_ThetaY_30_35__399->SetBinContent(301,0.05555556);
   S12_ThetaY_30_35__399->SetBinContent(303,0.1111111);
   S12_ThetaY_30_35__399->SetBinContent(304,0.5);
   S12_ThetaY_30_35__399->SetBinContent(305,0.6111111);
   S12_ThetaY_30_35__399->SetBinContent(306,1);
   S12_ThetaY_30_35__399->SetBinContent(307,0.9444444);
   S12_ThetaY_30_35__399->SetBinContent(308,0.8888889);
   S12_ThetaY_30_35__399->SetBinContent(309,0.8888889);
   S12_ThetaY_30_35__399->SetBinContent(310,0.7222222);
   S12_ThetaY_30_35__399->SetBinContent(311,0.7777778);
   S12_ThetaY_30_35__399->SetBinContent(312,1);
   S12_ThetaY_30_35__399->SetBinContent(313,1.055556);
   S12_ThetaY_30_35__399->SetBinContent(314,1);
   S12_ThetaY_30_35__399->SetBinContent(315,0.9444444);
   S12_ThetaY_30_35__399->SetBinContent(316,1.111111);
   S12_ThetaY_30_35__399->SetBinContent(317,0.3888889);
   S12_ThetaY_30_35__399->SetBinContent(318,0.05555556);
   S12_ThetaY_30_35__399->SetBinError(301,0.05555556);
   S12_ThetaY_30_35__399->SetBinError(303,0.07856742);
   S12_ThetaY_30_35__399->SetBinError(304,0.1666667);
   S12_ThetaY_30_35__399->SetBinError(305,0.1842569);
   S12_ThetaY_30_35__399->SetBinError(306,0.2357023);
   S12_ThetaY_30_35__399->SetBinError(307,0.2290614);
   S12_ThetaY_30_35__399->SetBinError(308,0.2222222);
   S12_ThetaY_30_35__399->SetBinError(309,0.2222222);
   S12_ThetaY_30_35__399->SetBinError(310,0.2003084);
   S12_ThetaY_30_35__399->SetBinError(311,0.2078699);
   S12_ThetaY_30_35__399->SetBinError(312,0.2357023);
   S12_ThetaY_30_35__399->SetBinError(313,0.2421611);
   S12_ThetaY_30_35__399->SetBinError(314,0.2357023);
   S12_ThetaY_30_35__399->SetBinError(315,0.2290614);
   S12_ThetaY_30_35__399->SetBinError(316,0.248452);
   S12_ThetaY_30_35__399->SetBinError(317,0.1469862);
   S12_ThetaY_30_35__399->SetBinError(318,0.05555556);
   S12_ThetaY_30_35__399->SetMinimum(0);
   S12_ThetaY_30_35__399->SetMaximum(1.365675);
   S12_ThetaY_30_35__399->SetEntries(217);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__399->SetLineColor(ci);
   S12_ThetaY_30_35__399->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__399->SetMarkerColor(ci);
   S12_ThetaY_30_35__399->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__399->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__399->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__399->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__399->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__399->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__399->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__399->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__399->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__399->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__399->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__399->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__399->Draw("AE");
   
   TH1D *ThetaY_30_35__400 = new TH1D("ThetaY_30_35__400","",630,-1575,1575);
   ThetaY_30_35__400->SetBinContent(300,0.006656959);
   ThetaY_30_35__400->SetBinContent(301,0.07489078);
   ThetaY_30_35__400->SetBinContent(302,0.2280008);
   ThetaY_30_35__400->SetBinContent(303,0.4501768);
   ThetaY_30_35__400->SetBinContent(304,0.7295611);
   ThetaY_30_35__400->SetBinContent(305,0.9103391);
   ThetaY_30_35__400->SetBinContent(306,1);
   ThetaY_30_35__400->SetBinContent(307,1.092781);
   ThetaY_30_35__400->SetBinContent(308,1.174537);
   ThetaY_30_35__400->SetBinContent(309,1.187643);
   ThetaY_30_35__400->SetBinContent(310,1.241523);
   ThetaY_30_35__400->SetBinContent(311,1.191596);
   ThetaY_30_35__400->SetBinContent(312,1.193676);
   ThetaY_30_35__400->SetBinContent(313,1.177033);
   ThetaY_30_35__400->SetBinContent(314,1.202829);
   ThetaY_30_35__400->SetBinContent(315,1.199293);
   ThetaY_30_35__400->SetBinContent(316,1.167672);
   ThetaY_30_35__400->SetBinContent(317,1.199501);
   ThetaY_30_35__400->SetBinContent(318,1.209902);
   ThetaY_30_35__400->SetBinContent(319,1.224672);
   ThetaY_30_35__400->SetBinContent(320,1.234658);
   ThetaY_30_35__400->SetBinContent(321,1.222592);
   ThetaY_30_35__400->SetBinContent(322,1.167256);
   ThetaY_30_35__400->SetBinContent(323,1.178906);
   ThetaY_30_35__400->SetBinContent(324,1.09507);
   ThetaY_30_35__400->SetBinContent(325,1.016434);
   ThetaY_30_35__400->SetBinContent(326,0.8780944);
   ThetaY_30_35__400->SetBinContent(327,0.7133347);
   ThetaY_30_35__400->SetBinContent(328,0.4672353);
   ThetaY_30_35__400->SetBinContent(329,0.2211358);
   ThetaY_30_35__400->SetBinContent(330,0.07634699);
   ThetaY_30_35__400->SetBinContent(331,0.005200749);
   ThetaY_30_35__400->SetBinError(300,0.001176795);
   ThetaY_30_35__400->SetBinError(301,0.003947091);
   ThetaY_30_35__400->SetBinError(302,0.006887017);
   ThetaY_30_35__400->SetBinError(303,0.009677307);
   ThetaY_30_35__400->SetBinError(304,0.01231952);
   ThetaY_30_35__400->SetBinError(305,0.01376146);
   ThetaY_30_35__400->SetBinError(306,0.01442324);
   ThetaY_30_35__400->SetBinError(307,0.01507751);
   ThetaY_30_35__400->SetBinError(308,0.01563134);
   ThetaY_30_35__400->SetBinError(309,0.01571831);
   ThetaY_30_35__400->SetBinError(310,0.0160709);
   ThetaY_30_35__400->SetBinError(311,0.01574445);
   ThetaY_30_35__400->SetBinError(312,0.01575818);
   ThetaY_30_35__400->SetBinError(313,0.01564795);
   ThetaY_30_35__400->SetBinError(314,0.01581849);
   ThetaY_30_35__400->SetBinError(315,0.01579521);
   ThetaY_30_35__400->SetBinError(316,0.0155856);
   ThetaY_30_35__400->SetBinError(317,0.01579658);
   ThetaY_30_35__400->SetBinError(318,0.01586493);
   ThetaY_30_35__400->SetBinError(319,0.01596147);
   ThetaY_30_35__400->SetBinError(320,0.01602641);
   ThetaY_30_35__400->SetBinError(321,0.01594791);
   ThetaY_30_35__400->SetBinError(322,0.01558282);
   ThetaY_30_35__400->SetBinError(323,0.01566039);
   ThetaY_30_35__400->SetBinError(324,0.01509329);
   ThetaY_30_35__400->SetBinError(325,0.01454128);
   ThetaY_30_35__400->SetBinError(326,0.01351554);
   ThetaY_30_35__400->SetBinError(327,0.01218175);
   ThetaY_30_35__400->SetBinError(328,0.009858952);
   ThetaY_30_35__400->SetBinError(329,0.006782542);
   ThetaY_30_35__400->SetBinError(330,0.003985281);
   ThetaY_30_35__400->SetBinError(331,0.00104015);
   ThetaY_30_35__400->SetEntries(135262);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__400->SetLineColor(ci);
   ThetaY_30_35__400->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__400->SetMarkerColor(ci);
   ThetaY_30_35__400->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__400->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__400->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__400->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__400->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__400->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__400->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__400->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__400->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__400->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__400->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__400->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__400->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__400->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__400->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__400->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__400->Draw("AEsame");
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
   
   Double_t _fx3134[32] = {
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
   Double_t _fy3134[32] = {
   0,
   0.741821,
   0,
   0.2468166,
   0.6853436,
   0.6713005,
   1,
   0.8642575,
   0.7567993,
   0.7484479,
   0.5817229,
   0.6527196,
   0.8377483,
   0.8967931,
   0.8313732,
   0.7875012,
   0.9515609,
   0.324209,
   0.04591739,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3134[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3134[32] = {
   0,
   0.613993,
   0,
   0.1594669,
   0.2244015,
   0.1995194,
   0.2339081,
   0.2078502,
   0.1874537,
   0.1853824,
   0.159404,
   0.1725381,
   0.1958998,
   0.2042382,
   0.1944069,
   0.189365,
   0.2113405,
   0.1196258,
   0.03798624,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3134[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3134[32] = {
   15.81479,
   1.713667,
   0.4489674,
   0.3258827,
   0.3135741,
   0.2700031,
   0.2963283,
   0.2651091,
   0.2408775,
   0.2382145,
   0.2105182,
   0.2255761,
   0.2481511,
   0.257093,
   0.2462589,
   0.2415191,
   0.2644928,
   0.1747858,
   0.1056182,
   0.08352844,
   0.08285279,
   0.08367059,
   0.08763781,
   0.08677165,
   0.09341585,
   0.1006442,
   0.1165037,
   0.14342,
   0.2189923,
   0.4629173,
   1.343025,
   20.40843};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3134,_fy3134,_felx3134,_fehx3134,_fely3134,_fehy3134);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3134 = new TH1F("Graph_Graph3134","",100,-100,100);
   Graph_Graph3134->SetMinimum(0);
   Graph_Graph3134->SetMaximum(1.5);
   Graph_Graph3134->SetDirectory(0);
   Graph_Graph3134->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3134->SetLineColor(ci);
   Graph_Graph3134->GetXaxis()->SetRange(1,100);
   Graph_Graph3134->GetXaxis()->CenterTitle(true);
   Graph_Graph3134->GetXaxis()->SetLabelFont(42);
   Graph_Graph3134->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3134->GetXaxis()->SetTitleFont(42);
   Graph_Graph3134->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3134->GetYaxis()->CenterTitle(true);
   Graph_Graph3134->GetYaxis()->SetLabelFont(42);
   Graph_Graph3134->GetYaxis()->SetTitleFont(42);
   Graph_Graph3134->GetZaxis()->SetLabelFont(42);
   Graph_Graph3134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3134->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3134);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.365675,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__401 = new TH2D("ThetaY_vs_Y_30_35__401","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__401->SetBinContent(7819,32);
   ThetaY_vs_Y_30_35__401->SetBinContent(7845,360);
   ThetaY_vs_Y_30_35__401->SetBinContent(7871,1096);
   ThetaY_vs_Y_30_35__401->SetBinContent(7897,2164);
   ThetaY_vs_Y_30_35__401->SetBinContent(7923,3507);
   ThetaY_vs_Y_30_35__401->SetBinContent(7949,4376);
   ThetaY_vs_Y_30_35__401->SetBinContent(7975,4807);
   ThetaY_vs_Y_30_35__401->SetBinContent(8001,5253);
   ThetaY_vs_Y_30_35__401->SetBinContent(8027,5646);
   ThetaY_vs_Y_30_35__401->SetBinContent(8053,5709);
   ThetaY_vs_Y_30_35__401->SetBinContent(8079,5968);
   ThetaY_vs_Y_30_35__401->SetBinContent(8105,5728);
   ThetaY_vs_Y_30_35__401->SetBinContent(8131,5738);
   ThetaY_vs_Y_30_35__401->SetBinContent(8157,5658);
   ThetaY_vs_Y_30_35__401->SetBinContent(8183,5782);
   ThetaY_vs_Y_30_35__401->SetBinContent(8209,5765);
   ThetaY_vs_Y_30_35__401->SetBinContent(8235,5613);
   ThetaY_vs_Y_30_35__401->SetBinContent(8261,5766);
   ThetaY_vs_Y_30_35__401->SetBinContent(8287,5816);
   ThetaY_vs_Y_30_35__401->SetBinContent(8313,5887);
   ThetaY_vs_Y_30_35__401->SetBinContent(8339,5935);
   ThetaY_vs_Y_30_35__401->SetBinContent(8365,5877);
   ThetaY_vs_Y_30_35__401->SetBinContent(8391,5611);
   ThetaY_vs_Y_30_35__401->SetBinContent(8417,5667);
   ThetaY_vs_Y_30_35__401->SetBinContent(8443,5264);
   ThetaY_vs_Y_30_35__401->SetBinContent(8469,4886);
   ThetaY_vs_Y_30_35__401->SetBinContent(8495,4221);
   ThetaY_vs_Y_30_35__401->SetBinContent(8521,3429);
   ThetaY_vs_Y_30_35__401->SetBinContent(8547,2246);
   ThetaY_vs_Y_30_35__401->SetBinContent(8573,1063);
   ThetaY_vs_Y_30_35__401->SetBinContent(8599,367);
   ThetaY_vs_Y_30_35__401->SetBinContent(8625,25);
   ThetaY_vs_Y_30_35__401->SetEntries(135262);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__401->SetLineColor(ci);
   ThetaY_vs_Y_30_35__401->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__401->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__401->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__401->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__401->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__401->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__401->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__401->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__401->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__401->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__401->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__401->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__401->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__401->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__401->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
