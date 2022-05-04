void S12_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06622027,125,1.258185);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__552 = new TH1D("S12_ThetaY_0_5__552","",630,-1575,1575);
   S12_ThetaY_0_5__552->SetBinContent(305,0.003125);
   S12_ThetaY_0_5__552->SetBinContent(306,0.00625);
   S12_ThetaY_0_5__552->SetBinContent(307,0.046875);
   S12_ThetaY_0_5__552->SetBinContent(308,0.253125);
   S12_ThetaY_0_5__552->SetBinContent(309,0.734375);
   S12_ThetaY_0_5__552->SetBinContent(310,0.93125);
   S12_ThetaY_0_5__552->SetBinContent(311,1);
   S12_ThetaY_0_5__552->SetBinContent(312,0.9625);
   S12_ThetaY_0_5__552->SetBinContent(313,1.00625);
   S12_ThetaY_0_5__552->SetBinContent(314,0.8125);
   S12_ThetaY_0_5__552->SetBinContent(315,0.940625);
   S12_ThetaY_0_5__552->SetBinContent(316,0.928125);
   S12_ThetaY_0_5__552->SetBinContent(317,0.89375);
   S12_ThetaY_0_5__552->SetBinContent(318,0.890625);
   S12_ThetaY_0_5__552->SetBinContent(319,0.890625);
   S12_ThetaY_0_5__552->SetBinContent(320,0.94375);
   S12_ThetaY_0_5__552->SetBinContent(321,0.834375);
   S12_ThetaY_0_5__552->SetBinContent(322,0.30625);
   S12_ThetaY_0_5__552->SetBinContent(323,0.05);
   S12_ThetaY_0_5__552->SetBinContent(324,0.009375);
   S12_ThetaY_0_5__552->SetBinError(305,0.003125);
   S12_ThetaY_0_5__552->SetBinError(306,0.004419417);
   S12_ThetaY_0_5__552->SetBinError(307,0.01210307);
   S12_ThetaY_0_5__552->SetBinError(308,0.028125);
   S12_ThetaY_0_5__552->SetBinError(309,0.04790534);
   S12_ThetaY_0_5__552->SetBinError(310,0.05394586);
   S12_ThetaY_0_5__552->SetBinError(311,0.0559017);
   S12_ThetaY_0_5__552->SetBinError(312,0.05484353);
   S12_ThetaY_0_5__552->SetBinError(313,0.05607612);
   S12_ThetaY_0_5__552->SetBinError(314,0.05038911);
   S12_ThetaY_0_5__552->SetBinError(315,0.05421672);
   S12_ThetaY_0_5__552->SetBinError(316,0.05385527);
   S12_ThetaY_0_5__552->SetBinError(317,0.05284855);
   S12_ThetaY_0_5__552->SetBinError(318,0.05275607);
   S12_ThetaY_0_5__552->SetBinError(319,0.05275607);
   S12_ThetaY_0_5__552->SetBinError(320,0.05430671);
   S12_ThetaY_0_5__552->SetBinError(321,0.05106292);
   S12_ThetaY_0_5__552->SetBinError(322,0.03093592);
   S12_ThetaY_0_5__552->SetBinError(323,0.0125);
   S12_ThetaY_0_5__552->SetBinError(324,0.005412659);
   S12_ThetaY_0_5__552->SetMinimum(0);
   S12_ThetaY_0_5__552->SetMaximum(1.125744);
   S12_ThetaY_0_5__552->SetEntries(3982);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__552->SetLineColor(ci);
   S12_ThetaY_0_5__552->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__552->SetMarkerColor(ci);
   S12_ThetaY_0_5__552->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__552->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__552->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__552->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__552->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__552->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__552->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__552->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__552->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__552->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__552->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__552->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__552->Draw("AE");
   
   TH1D *ThetaY_0_5__553 = new TH1D("ThetaY_0_5__553","",630,-1575,1575);
   ThetaY_0_5__553->SetBinContent(303,0.0004524515);
   ThetaY_0_5__553->SetBinContent(304,0.05484946);
   ThetaY_0_5__553->SetBinContent(305,0.2436451);
   ThetaY_0_5__553->SetBinContent(306,0.512936);
   ThetaY_0_5__553->SetBinContent(307,0.7099992);
   ThetaY_0_5__553->SetBinContent(308,0.8219192);
   ThetaY_0_5__553->SetBinContent(309,0.9280397);
   ThetaY_0_5__553->SetBinContent(310,0.9667654);
   ThetaY_0_5__553->SetBinContent(311,1);
   ThetaY_0_5__553->SetBinContent(312,1.002283);
   ThetaY_0_5__553->SetBinContent(313,1.019558);
   ThetaY_0_5__553->SetBinContent(314,1.021224);
   ThetaY_0_5__553->SetBinContent(315,1.023404);
   ThetaY_0_5__553->SetBinContent(316,1.018427);
   ThetaY_0_5__553->SetBinContent(317,1.009028);
   ThetaY_0_5__553->SetBinContent(318,1.019805);
   ThetaY_0_5__553->SetBinContent(319,1.011579);
   ThetaY_0_5__553->SetBinContent(320,0.9992802);
   ThetaY_0_5__553->SetBinContent(321,0.9663541);
   ThetaY_0_5__553->SetBinContent(322,0.9073091);
   ThetaY_0_5__553->SetBinContent(323,0.8352665);
   ThetaY_0_5__553->SetBinContent(324,0.7069143);
   ThetaY_0_5__553->SetBinContent(325,0.5171726);
   ThetaY_0_5__553->SetBinContent(326,0.2405602);
   ThetaY_0_5__553->SetBinContent(327,0.05287512);
   ThetaY_0_5__553->SetBinContent(328,0.0004524515);
   ThetaY_0_5__553->SetBinError(303,9.646298e-05);
   ThetaY_0_5__553->SetBinError(304,0.001062089);
   ThetaY_0_5__553->SetBinError(305,0.002238482);
   ThetaY_0_5__553->SetBinError(306,0.003247927);
   ThetaY_0_5__553->SetBinError(307,0.003821234);
   ThetaY_0_5__553->SetBinError(308,0.004111395);
   ThetaY_0_5__553->SetBinError(309,0.004368757);
   ThetaY_0_5__553->SetBinError(310,0.004458977);
   ThetaY_0_5__553->SetBinError(311,0.004534973);
   ThetaY_0_5__553->SetBinError(312,0.004540146);
   ThetaY_0_5__553->SetBinError(313,0.004579106);
   ThetaY_0_5__553->SetBinError(314,0.004582845);
   ThetaY_0_5__553->SetBinError(315,0.004587734);
   ThetaY_0_5__553->SetBinError(316,0.004576565);
   ThetaY_0_5__553->SetBinError(317,0.004555398);
   ThetaY_0_5__553->SetBinError(318,0.00457966);
   ThetaY_0_5__553->SetBinError(319,0.004561151);
   ThetaY_0_5__553->SetBinError(320,0.00453334);
   ThetaY_0_5__553->SetBinError(321,0.004458028);
   ThetaY_0_5__553->SetBinError(322,0.004319687);
   ThetaY_0_5__553->SetBinError(323,0.004144644);
   ThetaY_0_5__553->SetBinError(324,0.003812923);
   ThetaY_0_5__553->SetBinError(325,0.003261312);
   ThetaY_0_5__553->SetBinError(326,0.002224265);
   ThetaY_0_5__553->SetBinError(327,0.001042798);
   ThetaY_0_5__553->SetBinError(328,9.646298e-05);
   ThetaY_0_5__553->SetEntries(903925);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__553->SetLineColor(ci);
   ThetaY_0_5__553->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__553->SetMarkerColor(ci);
   ThetaY_0_5__553->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__553->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__553->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__553->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__553->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__553->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__553->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__553->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__553->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__553->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__553->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__553->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__553->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__553->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__553->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__553->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__553->Draw("AEsame");
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
   
   Double_t _fx3185[26] = {
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
   Double_t _fy3185[26] = {
   0,
   0,
   0.01282603,
   0.01218476,
   0.0660212,
   0.3079682,
   0.7913186,
   0.9632637,
   1,
   0.9603078,
   0.986947,
   0.7956138,
   0.919114,
   0.9113318,
   0.885753,
   0.8733287,
   0.8804308,
   0.9444298,
   0.8634258,
   0.3375366,
   0.05986113,
   0.01326186,
   0,
   0,
   0,
   0};
   Double_t _felx3185[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3185[26] = {
   0,
   0,
   0.01061046,
   0.007870421,
   0.01685812,
   0.03418209,
   0.05171679,
   0.05594498,
   0.05605549,
   0.05486092,
   0.05514956,
   0.04943859,
   0.05310681,
   0.05300881,
   0.05249689,
   0.05184904,
   0.0522719,
   0.05448374,
   0.05295699,
   0.03407549,
   0.01481015,
   0.0072178,
   0,
   0,
   0,
   0};
   Double_t _fehx3185[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3185[26] = {
   13.2628,
   0.1049268,
   0.02949791,
   0.01607233,
   0.02183177,
   0.03820514,
   0.0552137,
   0.05929379,
   0.05929059,
   0.05808947,
   0.05832203,
   0.05261149,
   0.05626885,
   0.05618674,
   0.05570559,
   0.05502373,
   0.05547256,
   0.05772254,
   0.05631029,
   0.03770313,
   0.01902231,
   0.0129013,
   0.01112473,
   0.02391769,
   0.1088461,
   13.2628};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3185,_fy3185,_felx3185,_fehx3185,_fely3185,_fehy3185);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3185 = new TH1F("Graph_Graph3185","",100,-100,100);
   Graph_Graph3185->SetMinimum(0);
   Graph_Graph3185->SetMaximum(1.5);
   Graph_Graph3185->SetDirectory(0);
   Graph_Graph3185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3185->SetLineColor(ci);
   Graph_Graph3185->GetXaxis()->SetRange(1,100);
   Graph_Graph3185->GetXaxis()->CenterTitle(true);
   Graph_Graph3185->GetXaxis()->SetLabelFont(42);
   Graph_Graph3185->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3185->GetXaxis()->SetTitleFont(42);
   Graph_Graph3185->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3185->GetYaxis()->CenterTitle(true);
   Graph_Graph3185->GetYaxis()->SetLabelFont(42);
   Graph_Graph3185->GetYaxis()->SetTitleFont(42);
   Graph_Graph3185->GetZaxis()->SetLabelFont(42);
   Graph_Graph3185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3185->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3185);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.125744,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__554 = new TH2D("ThetaY_vs_Y_0_5__554","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__554->SetBinContent(7891,22);
   ThetaY_vs_Y_0_5__554->SetBinContent(7917,2667);
   ThetaY_vs_Y_0_5__554->SetBinContent(7943,11847);
   ThetaY_vs_Y_0_5__554->SetBinContent(7969,24941);
   ThetaY_vs_Y_0_5__554->SetBinContent(7995,34523);
   ThetaY_vs_Y_0_5__554->SetBinContent(8021,39965);
   ThetaY_vs_Y_0_5__554->SetBinContent(8047,45125);
   ThetaY_vs_Y_0_5__554->SetBinContent(8073,47008);
   ThetaY_vs_Y_0_5__554->SetBinContent(8099,48624);
   ThetaY_vs_Y_0_5__554->SetBinContent(8125,48735);
   ThetaY_vs_Y_0_5__554->SetBinContent(8151,49575);
   ThetaY_vs_Y_0_5__554->SetBinContent(8177,49656);
   ThetaY_vs_Y_0_5__554->SetBinContent(8203,49762);
   ThetaY_vs_Y_0_5__554->SetBinContent(8229,49520);
   ThetaY_vs_Y_0_5__554->SetBinContent(8255,49063);
   ThetaY_vs_Y_0_5__554->SetBinContent(8281,49587);
   ThetaY_vs_Y_0_5__554->SetBinContent(8307,49187);
   ThetaY_vs_Y_0_5__554->SetBinContent(8333,48589);
   ThetaY_vs_Y_0_5__554->SetBinContent(8359,46988);
   ThetaY_vs_Y_0_5__554->SetBinContent(8385,44117);
   ThetaY_vs_Y_0_5__554->SetBinContent(8411,40614);
   ThetaY_vs_Y_0_5__554->SetBinContent(8437,34373);
   ThetaY_vs_Y_0_5__554->SetBinContent(8463,25147);
   ThetaY_vs_Y_0_5__554->SetBinContent(8489,11697);
   ThetaY_vs_Y_0_5__554->SetBinContent(8515,2571);
   ThetaY_vs_Y_0_5__554->SetBinContent(8541,22);
   ThetaY_vs_Y_0_5__554->SetEntries(903925);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__554->SetLineColor(ci);
   ThetaY_vs_Y_0_5__554->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__554->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__554->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__554->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__554->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__554->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__554->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__554->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__554->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__554->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__554->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__554->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__554->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__554->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__554->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_0_5","Reco vertices","lpf");
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
