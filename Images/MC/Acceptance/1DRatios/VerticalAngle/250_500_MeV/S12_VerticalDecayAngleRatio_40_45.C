void S12_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:36 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06561724,125,1.246727);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__234 = new TH1D("S12_ThetaY_40_45__234","",630,-1575,1575);
   S12_ThetaY_40_45__234->SetBinContent(306,0.5);
   S12_ThetaY_40_45__234->SetBinContent(309,0.5);
   S12_ThetaY_40_45__234->SetBinContent(310,0.5);
   S12_ThetaY_40_45__234->SetBinContent(311,1);
   S12_ThetaY_40_45__234->SetBinContent(312,0.5);
   S12_ThetaY_40_45__234->SetBinError(306,0.5);
   S12_ThetaY_40_45__234->SetBinError(309,0.5);
   S12_ThetaY_40_45__234->SetBinError(310,0.5);
   S12_ThetaY_40_45__234->SetBinError(311,0.7071068);
   S12_ThetaY_40_45__234->SetBinError(312,0.5);
   S12_ThetaY_40_45__234->SetMinimum(0);
   S12_ThetaY_40_45__234->SetMaximum(1.115493);
   S12_ThetaY_40_45__234->SetEntries(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__234->SetLineColor(ci);
   S12_ThetaY_40_45__234->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__234->SetMarkerColor(ci);
   S12_ThetaY_40_45__234->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__234->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__234->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__234->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__234->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__234->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__234->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__234->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__234->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__234->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__234->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__234->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__234->Draw("AE");
   
   TH1D *ThetaY_40_45__235 = new TH1D("ThetaY_40_45__235","",630,-1575,1575);
   ThetaY_40_45__235->SetBinContent(293,0.009750813);
   ThetaY_40_45__235->SetBinContent(294,0.03033586);
   ThetaY_40_45__235->SetBinContent(295,0.07258938);
   ThetaY_40_45__235->SetBinContent(296,0.1310943);
   ThetaY_40_45__235->SetBinContent(297,0.2188516);
   ThetaY_40_45__235->SetBinContent(298,0.2708559);
   ThetaY_40_45__235->SetBinContent(299,0.4312026);
   ThetaY_40_45__235->SetBinContent(300,0.5947996);
   ThetaY_40_45__235->SetBinContent(301,0.6738895);
   ThetaY_40_45__235->SetBinContent(302,0.787649);
   ThetaY_40_45__235->SetBinContent(303,0.8710726);
   ThetaY_40_45__235->SetBinContent(304,0.9393283);
   ThetaY_40_45__235->SetBinContent(305,0.8970748);
   ThetaY_40_45__235->SetBinContent(306,0.9945829);
   ThetaY_40_45__235->SetBinContent(307,0.9631636);
   ThetaY_40_45__235->SetBinContent(308,0.9891658);
   ThetaY_40_45__235->SetBinContent(309,1.006501);
   ThetaY_40_45__235->SetBinContent(310,0.9523294);
   ThetaY_40_45__235->SetBinContent(311,1);
   ThetaY_40_45__235->SetBinContent(312,0.9620802);
   ThetaY_40_45__235->SetBinContent(313,0.9804984);
   ThetaY_40_45__235->SetBinContent(314,0.9447454);
   ThetaY_40_45__235->SetBinContent(315,0.9382449);
   ThetaY_40_45__235->SetBinContent(316,0.9263272);
   ThetaY_40_45__235->SetBinContent(317,0.9772481);
   ThetaY_40_45__235->SetBinContent(318,0.971831);
   ThetaY_40_45__235->SetBinContent(319,0.9523294);
   ThetaY_40_45__235->SetBinContent(320,0.9989166);
   ThetaY_40_45__235->SetBinContent(321,0.9664139);
   ThetaY_40_45__235->SetBinContent(322,1.014085);
   ThetaY_40_45__235->SetBinContent(323,1.014085);
   ThetaY_40_45__235->SetBinContent(324,0.9685807);
   ThetaY_40_45__235->SetBinContent(325,1.005417);
   ThetaY_40_45__235->SetBinContent(326,0.9469122);
   ThetaY_40_45__235->SetBinContent(327,0.9393283);
   ThetaY_40_45__235->SetBinContent(328,0.9089924);
   ThetaY_40_45__235->SetBinContent(329,0.8580715);
   ThetaY_40_45__235->SetBinContent(330,0.6858072);
   ThetaY_40_45__235->SetBinContent(331,0.5796316);
   ThetaY_40_45__235->SetBinContent(332,0.4951246);
   ThetaY_40_45__235->SetBinContent(333,0.2860238);
   ThetaY_40_45__235->SetBinContent(334,0.2264355);
   ThetaY_40_45__235->SetBinContent(335,0.1332611);
   ThetaY_40_45__235->SetBinContent(336,0.06825569);
   ThetaY_40_45__235->SetBinContent(337,0.03466956);
   ThetaY_40_45__235->SetBinContent(338,0.01083424);
   ThetaY_40_45__235->SetBinError(293,0.003250271);
   ThetaY_40_45__235->SetBinError(294,0.005732939);
   ThetaY_40_45__235->SetBinError(295,0.008868205);
   ThetaY_40_45__235->SetBinError(296,0.01191766);
   ThetaY_40_45__235->SetBinError(297,0.01539834);
   ThetaY_40_45__235->SetBinError(298,0.01713043);
   ThetaY_40_45__235->SetBinError(299,0.02161423);
   ThetaY_40_45__235->SetBinError(300,0.02538543);
   ThetaY_40_45__235->SetBinError(301,0.02702051);
   ThetaY_40_45__235->SetBinError(302,0.02921228);
   ThetaY_40_45__235->SetBinError(303,0.03072036);
   ThetaY_40_45__235->SetBinError(304,0.03190126);
   ThetaY_40_45__235->SetBinError(305,0.0311755);
   ThetaY_40_45__235->SetBinError(306,0.03282613);
   ThetaY_40_45__235->SetBinError(307,0.03230347);
   ThetaY_40_45__235->SetBinError(308,0.03273661);
   ThetaY_40_45__235->SetBinError(309,0.03302221);
   ThetaY_40_45__235->SetBinError(310,0.03212127);
   ThetaY_40_45__235->SetBinError(311,0.0329154);
   ThetaY_40_45__235->SetBinError(312,0.0322853);
   ThetaY_40_45__235->SetBinError(313,0.03259287);
   ThetaY_40_45__235->SetBinError(314,0.03199312);
   ThetaY_40_45__235->SetBinError(315,0.03188286);
   ThetaY_40_45__235->SetBinError(316,0.03167972);
   ThetaY_40_45__235->SetBinError(317,0.0325388);
   ThetaY_40_45__235->SetBinError(318,0.03244849);
   ThetaY_40_45__235->SetBinError(319,0.03212127);
   ThetaY_40_45__235->SetBinError(320,0.03289757);
   ThetaY_40_45__235->SetBinError(321,0.03235793);
   ThetaY_40_45__235->SetBinError(322,0.03314639);
   ThetaY_40_45__235->SetBinError(323,0.03314639);
   ThetaY_40_45__235->SetBinError(324,0.03239419);
   ThetaY_40_45__235->SetBinError(325,0.03300443);
   ThetaY_40_45__235->SetBinError(326,0.03202978);
   ThetaY_40_45__235->SetBinError(327,0.03190126);
   ThetaY_40_45__235->SetBinError(328,0.0313819);
   ThetaY_40_45__235->SetBinError(329,0.03049024);
   ThetaY_40_45__235->SetBinError(330,0.02725839);
   ThetaY_40_45__235->SetBinError(331,0.02505966);
   ThetaY_40_45__235->SetBinError(332,0.02316095);
   ThetaY_40_45__235->SetBinError(333,0.01760355);
   ThetaY_40_45__235->SetBinError(334,0.01566287);
   ThetaY_40_45__235->SetBinError(335,0.01201575);
   ThetaY_40_45__235->SetBinError(336,0.008599408);
   ThetaY_40_45__235->SetBinError(337,0.00612877);
   ThetaY_40_45__235->SetBinError(338,0.003426086);
   ThetaY_40_45__235->SetEntries(29193);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__235->SetLineColor(ci);
   ThetaY_40_45__235->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__235->SetMarkerColor(ci);
   ThetaY_40_45__235->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__235->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__235->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__235->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__235->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__235->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__235->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__235->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__235->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__235->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__235->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__235->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__235->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__235->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__235->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__235->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__235->Draw("AEsame");
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
   
   Double_t _fx3079[46] = {
   -112.5,
   -107.5,
   -102.5,
   -97.5,
   -92.5,
   -87.5,
   -82.5,
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
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5};
   Double_t _fy3079[46] = {
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
   0,
   0.5027233,
   0,
   0,
   0.4967707,
   0.5250284,
   1,
   0.5197072,
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
   0,
   0};
   Double_t _felx3079[46] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3079[46] = {
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
   0,
   0.4159623,
   0,
   0,
   0.411036,
   0.434422,
   0.6463463,
   0.4300181,
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
   0,
   0};
   Double_t _fehx3079[46] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3079[46] = {
   104.7525,
   31.36378,
   12.8569,
   7.075438,
   4.225322,
   3.41107,
   2.139697,
   1.550196,
   1.367991,
   1.170163,
   1.057966,
   0.9810083,
   1.027267,
   1.158104,
   0.9567062,
   0.931532,
   1.144367,
   1.209584,
   1.322245,
   1.197302,
   0.9397749,
   0.9753773,
   0.9821423,
   0.9947917,
   0.9429037,
   0.948165,
   0.9676017,
   0.9224298,
   0.9534853,
   0.9086192,
   0.9086192,
   0.95135,
   0.9164599,
   0.973143,
   0.9810083,
   1.013783,
   1.074015,
   1.344184,
   1.590832,
   1.8629,
   3.229549,
   4.08318,
   6.959527,
   13.6852,
   27.32961,
   93.28698};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(46,_fx3079,_fy3079,_felx3079,_fehx3079,_fely3079,_fehy3079);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3079 = new TH1F("Graph_Graph3079","",100,-100,100);
   Graph_Graph3079->SetMinimum(0);
   Graph_Graph3079->SetMaximum(1.5);
   Graph_Graph3079->SetDirectory(0);
   Graph_Graph3079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3079->SetLineColor(ci);
   Graph_Graph3079->GetXaxis()->SetRange(1,100);
   Graph_Graph3079->GetXaxis()->CenterTitle(true);
   Graph_Graph3079->GetXaxis()->SetLabelFont(42);
   Graph_Graph3079->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3079->GetXaxis()->SetTitleFont(42);
   Graph_Graph3079->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3079->GetYaxis()->CenterTitle(true);
   Graph_Graph3079->GetYaxis()->SetLabelFont(42);
   Graph_Graph3079->GetYaxis()->SetTitleFont(42);
   Graph_Graph3079->GetZaxis()->SetLabelFont(42);
   Graph_Graph3079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3079);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.115493,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__236 = new TH2D("ThetaY_vs_Y_40_45__236","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__236->SetBinContent(7639,9);
   ThetaY_vs_Y_40_45__236->SetBinContent(7665,28);
   ThetaY_vs_Y_40_45__236->SetBinContent(7691,67);
   ThetaY_vs_Y_40_45__236->SetBinContent(7717,121);
   ThetaY_vs_Y_40_45__236->SetBinContent(7743,202);
   ThetaY_vs_Y_40_45__236->SetBinContent(7769,250);
   ThetaY_vs_Y_40_45__236->SetBinContent(7795,398);
   ThetaY_vs_Y_40_45__236->SetBinContent(7821,549);
   ThetaY_vs_Y_40_45__236->SetBinContent(7847,622);
   ThetaY_vs_Y_40_45__236->SetBinContent(7873,727);
   ThetaY_vs_Y_40_45__236->SetBinContent(7899,804);
   ThetaY_vs_Y_40_45__236->SetBinContent(7925,867);
   ThetaY_vs_Y_40_45__236->SetBinContent(7951,828);
   ThetaY_vs_Y_40_45__236->SetBinContent(7977,918);
   ThetaY_vs_Y_40_45__236->SetBinContent(8003,889);
   ThetaY_vs_Y_40_45__236->SetBinContent(8029,913);
   ThetaY_vs_Y_40_45__236->SetBinContent(8055,929);
   ThetaY_vs_Y_40_45__236->SetBinContent(8081,879);
   ThetaY_vs_Y_40_45__236->SetBinContent(8107,923);
   ThetaY_vs_Y_40_45__236->SetBinContent(8133,888);
   ThetaY_vs_Y_40_45__236->SetBinContent(8159,905);
   ThetaY_vs_Y_40_45__236->SetBinContent(8185,872);
   ThetaY_vs_Y_40_45__236->SetBinContent(8211,866);
   ThetaY_vs_Y_40_45__236->SetBinContent(8237,855);
   ThetaY_vs_Y_40_45__236->SetBinContent(8263,902);
   ThetaY_vs_Y_40_45__236->SetBinContent(8289,897);
   ThetaY_vs_Y_40_45__236->SetBinContent(8315,879);
   ThetaY_vs_Y_40_45__236->SetBinContent(8341,922);
   ThetaY_vs_Y_40_45__236->SetBinContent(8367,892);
   ThetaY_vs_Y_40_45__236->SetBinContent(8393,936);
   ThetaY_vs_Y_40_45__236->SetBinContent(8419,936);
   ThetaY_vs_Y_40_45__236->SetBinContent(8445,894);
   ThetaY_vs_Y_40_45__236->SetBinContent(8471,928);
   ThetaY_vs_Y_40_45__236->SetBinContent(8497,874);
   ThetaY_vs_Y_40_45__236->SetBinContent(8523,867);
   ThetaY_vs_Y_40_45__236->SetBinContent(8549,839);
   ThetaY_vs_Y_40_45__236->SetBinContent(8575,792);
   ThetaY_vs_Y_40_45__236->SetBinContent(8601,633);
   ThetaY_vs_Y_40_45__236->SetBinContent(8627,535);
   ThetaY_vs_Y_40_45__236->SetBinContent(8653,457);
   ThetaY_vs_Y_40_45__236->SetBinContent(8679,264);
   ThetaY_vs_Y_40_45__236->SetBinContent(8705,209);
   ThetaY_vs_Y_40_45__236->SetBinContent(8731,123);
   ThetaY_vs_Y_40_45__236->SetBinContent(8757,63);
   ThetaY_vs_Y_40_45__236->SetBinContent(8783,32);
   ThetaY_vs_Y_40_45__236->SetBinContent(8809,10);
   ThetaY_vs_Y_40_45__236->SetEntries(29193);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__236->SetLineColor(ci);
   ThetaY_vs_Y_40_45__236->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__236->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__236->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__236->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__236->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__236->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__236->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__236->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__236->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__236->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__236->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__236->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__236->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__236->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__236->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
