void S12_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:44 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06606963,125,1.255323);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI15_mI10__543 = new TH1D("S12_ThetaY_mI15_mI10__543","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__543->SetBinContent(309,0.01915709);
   S12_ThetaY_mI15_mI10__543->SetBinContent(310,0.09195402);
   S12_ThetaY_mI15_mI10__543->SetBinContent(311,0.6590038);
   S12_ThetaY_mI15_mI10__543->SetBinContent(312,1);
   S12_ThetaY_mI15_mI10__543->SetBinContent(313,0.8429119);
   S12_ThetaY_mI15_mI10__543->SetBinContent(314,0.8888889);
   S12_ThetaY_mI15_mI10__543->SetBinContent(315,0.7586207);
   S12_ThetaY_mI15_mI10__543->SetBinContent(316,0.8927203);
   S12_ThetaY_mI15_mI10__543->SetBinContent(317,0.8927203);
   S12_ThetaY_mI15_mI10__543->SetBinContent(318,0.9770115);
   S12_ThetaY_mI15_mI10__543->SetBinContent(319,0.9923372);
   S12_ThetaY_mI15_mI10__543->SetBinContent(320,0.7509579);
   S12_ThetaY_mI15_mI10__543->SetBinContent(321,0.835249);
   S12_ThetaY_mI15_mI10__543->SetBinContent(322,0.8467433);
   S12_ThetaY_mI15_mI10__543->SetBinContent(323,0.6206897);
   S12_ThetaY_mI15_mI10__543->SetBinContent(324,0.3563218);
   S12_ThetaY_mI15_mI10__543->SetBinContent(325,0.09195402);
   S12_ThetaY_mI15_mI10__543->SetBinContent(326,0.01532567);
   S12_ThetaY_mI15_mI10__543->SetBinError(309,0.00856731);
   S12_ThetaY_mI15_mI10__543->SetBinError(310,0.01877004);
   S12_ThetaY_mI15_mI10__543->SetBinError(311,0.05024857);
   S12_ThetaY_mI15_mI10__543->SetBinError(312,0.06189845);
   S12_ThetaY_mI15_mI10__543->SetBinError(313,0.05682911);
   S12_ThetaY_mI15_mI10__543->SetBinError(314,0.05835841);
   S12_ThetaY_mI15_mI10__543->SetBinError(315,0.05391282);
   S12_ThetaY_mI15_mI10__543->SetBinError(316,0.05848405);
   S12_ThetaY_mI15_mI10__543->SetBinError(317,0.05848405);
   S12_ThetaY_mI15_mI10__543->SetBinError(318,0.06118283);
   S12_ThetaY_mI15_mI10__543->SetBinError(319,0.06166083);
   S12_ThetaY_mI15_mI10__543->SetBinError(320,0.05363985);
   S12_ThetaY_mI15_mI10__543->SetBinError(321,0.0565702);
   S12_ThetaY_mI15_mI10__543->SetBinError(322,0.05695812);
   S12_ThetaY_mI15_mI10__543->SetBinError(323,0.04876598);
   S12_ThetaY_mI15_mI10__543->SetBinError(324,0.03694885);
   S12_ThetaY_mI15_mI10__543->SetBinError(325,0.01877004);
   S12_ThetaY_mI15_mI10__543->SetBinError(326,0.007662835);
   S12_ThetaY_mI15_mI10__543->SetMinimum(0);
   S12_ThetaY_mI15_mI10__543->SetMaximum(1.123184);
   S12_ThetaY_mI15_mI10__543->SetEntries(3010);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__543->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__543->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__543->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__543->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__543->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__543->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__543->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__543->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__543->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__543->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__543->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__543->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__543->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__543->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__543->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__543->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__544 = new TH1D("ThetaY_mI15_mI10__544","",630,-1575,1575);
   ThetaY_mI15_mI10__544->SetBinContent(303,0.0005481404);
   ThetaY_mI15_mI10__544->SetBinContent(304,0.05297777);
   ThetaY_mI15_mI10__544->SetBinContent(305,0.2418122);
   ThetaY_mI15_mI10__544->SetBinContent(306,0.5110587);
   ThetaY_mI15_mI10__544->SetBinContent(307,0.6985776);
   ThetaY_mI15_mI10__544->SetBinContent(308,0.8267602);
   ThetaY_mI15_mI10__544->SetBinContent(309,0.9164086);
   ThetaY_mI15_mI10__544->SetBinContent(310,0.9634116);
   ThetaY_mI15_mI10__544->SetBinContent(311,0.9949023);
   ThetaY_mI15_mI10__544->SetBinContent(312,1);
   ThetaY_mI15_mI10__544->SetBinContent(313,1.021076);
   ThetaY_mI15_mI10__544->SetBinContent(314,1.019404);
   ThetaY_mI15_mI10__544->SetBinContent(315,1.011072);
   ThetaY_mI15_mI10__544->SetBinContent(316,1.009209);
   ThetaY_mI15_mI10__544->SetBinContent(317,1.006961);
   ThetaY_mI15_mI10__544->SetBinContent(318,1.010004);
   ThetaY_mI15_mI10__544->SetBinContent(319,1.019623);
   ThetaY_mI15_mI10__544->SetBinContent(320,0.9957245);
   ThetaY_mI15_mI10__544->SetBinContent(321,0.9534355);
   ThetaY_mI15_mI10__544->SetBinContent(322,0.9106257);
   ThetaY_mI15_mI10__544->SetBinContent(323,0.8270617);
   ThetaY_mI15_mI10__544->SetBinContent(324,0.6966865);
   ThetaY_mI15_mI10__544->SetBinContent(325,0.5117713);
   ThetaY_mI15_mI10__544->SetBinContent(326,0.2457314);
   ThetaY_mI15_mI10__544->SetBinContent(327,0.05410146);
   ThetaY_mI15_mI10__544->SetBinContent(328,0.0003562913);
   ThetaY_mI15_mI10__544->SetBinError(303,0.0001225679);
   ThetaY_mI15_mI10__544->SetBinError(304,0.001204974);
   ThetaY_mI15_mI10__544->SetBinError(305,0.002574364);
   ThetaY_mI15_mI10__544->SetBinError(306,0.003742539);
   ThetaY_mI15_mI10__544->SetBinError(307,0.004375606);
   ThetaY_mI15_mI10__544->SetBinError(308,0.004760151);
   ThetaY_mI15_mI10__544->SetBinError(309,0.00501159);
   ThetaY_mI15_mI10__544->SetBinError(310,0.005138506);
   ThetaY_mI15_mI10__544->SetBinError(311,0.005221811);
   ThetaY_mI15_mI10__544->SetBinError(312,0.005235172);
   ThetaY_mI15_mI10__544->SetBinError(313,0.005290052);
   ThetaY_mI15_mI10__544->SetBinError(314,0.00528572);
   ThetaY_mI15_mI10__544->SetBinError(315,0.005264075);
   ThetaY_mI15_mI10__544->SetBinError(316,0.005259221);
   ThetaY_mI15_mI10__544->SetBinError(317,0.005253362);
   ThetaY_mI15_mI10__544->SetBinError(318,0.005261292);
   ThetaY_mI15_mI10__544->SetBinError(319,0.005286288);
   ThetaY_mI15_mI10__544->SetBinError(320,0.005223968);
   ThetaY_mI15_mI10__544->SetBinError(321,0.005111832);
   ThetaY_mI15_mI10__544->SetBinError(322,0.004995752);
   ThetaY_mI15_mI10__544->SetBinError(323,0.004761019);
   ThetaY_mI15_mI10__544->SetBinError(324,0.00436968);
   ThetaY_mI15_mI10__544->SetBinError(325,0.003745147);
   ThetaY_mI15_mI10__544->SetBinError(326,0.002595143);
   ThetaY_mI15_mI10__544->SetBinError(327,0.001217686);
   ThetaY_mI15_mI10__544->SetBinError(328,9.881742e-05);
   ThetaY_mI15_mI10__544->SetEntries(674984);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__544->SetLineColor(ci);
   ThetaY_mI15_mI10__544->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__544->SetMarkerColor(ci);
   ThetaY_mI15_mI10__544->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__544->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__544->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__544->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__544->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__544->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__544->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__544->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__544->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__544->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__544->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__544->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__544->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__544->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__544->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__544->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__544->Draw("AEsame");
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
   
   Double_t _fx3182[26] = {
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
   Double_t _fy3182[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02090453,
   0.09544625,
   0.6623805,
   1,
   0.8255134,
   0.8719691,
   0.7503129,
   0.8845745,
   0.8865487,
   0.9673347,
   0.9732389,
   0.7541824,
   0.8760415,
   0.9298478,
   0.7504756,
   0.5114522,
   0.179678,
   0.06236758,
   0,
   0};
   Double_t _felx3182[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3182[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.009030025,
   0.01935255,
   0.05057564,
   0.06207882,
   0.05577703,
   0.0573837,
   0.05341946,
   0.05809097,
   0.05822103,
   0.06074542,
   0.0606443,
   0.05396847,
   0.05947215,
   0.0627076,
   0.05905899,
   0.05303536,
   0.0364418,
   0.02985346,
   0,
   0};
   Double_t _fehx3182[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3182[26] = {
   13.47934,
   0.1332084,
   0.0291733,
   0.01380286,
   0.01009763,
   0.008532024,
   0.01414357,
   0.02374017,
   0.05459453,
   0.06605946,
   0.05968091,
   0.06129197,
   0.05736674,
   0.06203884,
   0.06217776,
   0.06468705,
   0.06454798,
   0.05797743,
   0.06365525,
   0.06708818,
   0.06390227,
   0.05884452,
   0.04470776,
   0.04933302,
   0.1304403,
   21.26806};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3182,_fy3182,_felx3182,_fehx3182,_fely3182,_fehy3182);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3182 = new TH1F("Graph_Graph3182","",100,-100,100);
   Graph_Graph3182->SetMinimum(0);
   Graph_Graph3182->SetMaximum(1.5);
   Graph_Graph3182->SetDirectory(0);
   Graph_Graph3182->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3182->SetLineColor(ci);
   Graph_Graph3182->GetXaxis()->SetRange(1,100);
   Graph_Graph3182->GetXaxis()->CenterTitle(true);
   Graph_Graph3182->GetXaxis()->SetLabelFont(42);
   Graph_Graph3182->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3182->GetXaxis()->SetTitleFont(42);
   Graph_Graph3182->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3182->GetYaxis()->CenterTitle(true);
   Graph_Graph3182->GetYaxis()->SetLabelFont(42);
   Graph_Graph3182->GetYaxis()->SetTitleFont(42);
   Graph_Graph3182->GetZaxis()->SetLabelFont(42);
   Graph_Graph3182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3182->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3182);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.123184,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__545 = new TH2D("ThetaY_vs_Y_mI15_mI10__545","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(7888,20);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(7914,1933);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(7940,8823);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(7966,18647);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(7992,25489);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8018,30166);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8044,33437);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8070,35152);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8096,36301);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8122,36487);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8148,37256);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8174,37195);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8200,36891);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8226,36823);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8252,36741);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8278,36852);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8304,37203);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8330,36331);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8356,34788);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8382,33226);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8408,30177);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8434,25420);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8460,18673);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8486,8966);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8512,1974);
   ThetaY_vs_Y_mI15_mI10__545->SetBinContent(8538,13);
   ThetaY_vs_Y_mI15_mI10__545->SetEntries(674984);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__545->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__545->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__545->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__545->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__545->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__545->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__545->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__545->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__545->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__545->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__545->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__545->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__545->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__545->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__545->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__545->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
