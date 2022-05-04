void S12_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:35 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0824451,125,1.566457);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__183 = new TH1D("S12_ThetaY_mI45_mI40__183","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__183->SetBinContent(319,1);
   S12_ThetaY_mI45_mI40__183->SetBinContent(325,1);
   S12_ThetaY_mI45_mI40__183->SetBinContent(326,1);
   S12_ThetaY_mI45_mI40__183->SetBinContent(329,1);
   S12_ThetaY_mI45_mI40__183->SetBinError(319,1);
   S12_ThetaY_mI45_mI40__183->SetBinError(325,1);
   S12_ThetaY_mI45_mI40__183->SetBinError(326,1);
   S12_ThetaY_mI45_mI40__183->SetBinError(329,1);
   S12_ThetaY_mI45_mI40__183->SetMinimum(0);
   S12_ThetaY_mI45_mI40__183->SetMaximum(1.401567);
   S12_ThetaY_mI45_mI40__183->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__183->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__183->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__183->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__183->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__183->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__183->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__183->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__183->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__183->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__183->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__183->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__183->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__183->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__183->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__183->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__183->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__184 = new TH1D("ThetaY_mI45_mI40__184","",630,-1575,1575);
   ThetaY_mI45_mI40__184->SetBinContent(293,0.001305483);
   ThetaY_mI45_mI40__184->SetBinContent(294,0.04830287);
   ThetaY_mI45_mI40__184->SetBinContent(295,0.08224543);
   ThetaY_mI45_mI40__184->SetBinContent(296,0.1684073);
   ThetaY_mI45_mI40__184->SetBinContent(297,0.2284595);
   ThetaY_mI45_mI40__184->SetBinContent(298,0.3772846);
   ThetaY_mI45_mI40__184->SetBinContent(299,0.4960836);
   ThetaY_mI45_mI40__184->SetBinContent(300,0.7650131);
   ThetaY_mI45_mI40__184->SetBinContent(301,0.8942559);
   ThetaY_mI45_mI40__184->SetBinContent(302,0.9699739);
   ThetaY_mI45_mI40__184->SetBinContent(303,1.045692);
   ThetaY_mI45_mI40__184->SetBinContent(304,1.062663);
   ThetaY_mI45_mI40__184->SetBinContent(305,1.189295);
   ThetaY_mI45_mI40__184->SetBinContent(306,1.194517);
   ThetaY_mI45_mI40__184->SetBinContent(307,1.274151);
   ThetaY_mI45_mI40__184->SetBinContent(308,1.195822);
   ThetaY_mI45_mI40__184->SetBinContent(309,1.199739);
   ThetaY_mI45_mI40__184->SetBinContent(310,1.208877);
   ThetaY_mI45_mI40__184->SetBinContent(311,1.109661);
   ThetaY_mI45_mI40__184->SetBinContent(312,1.088773);
   ThetaY_mI45_mI40__184->SetBinContent(313,1.155352);
   ThetaY_mI45_mI40__184->SetBinContent(314,1.144909);
   ThetaY_mI45_mI40__184->SetBinContent(315,1.189295);
   ThetaY_mI45_mI40__184->SetBinContent(316,1.117493);
   ThetaY_mI45_mI40__184->SetBinContent(317,1.155352);
   ThetaY_mI45_mI40__184->SetBinContent(318,1.172324);
   ThetaY_mI45_mI40__184->SetBinContent(319,1.130548);
   ThetaY_mI45_mI40__184->SetBinContent(320,1.150131);
   ThetaY_mI45_mI40__184->SetBinContent(321,1.108355);
   ThetaY_mI45_mI40__184->SetBinContent(322,1.130548);
   ThetaY_mI45_mI40__184->SetBinContent(323,1.168407);
   ThetaY_mI45_mI40__184->SetBinContent(324,1.163185);
   ThetaY_mI45_mI40__184->SetBinContent(325,1.24282);
   ThetaY_mI45_mI40__184->SetBinContent(326,1.12141);
   ThetaY_mI45_mI40__184->SetBinContent(327,1.06658);
   ThetaY_mI45_mI40__184->SetBinContent(328,1.118799);
   ThetaY_mI45_mI40__184->SetBinContent(329,1);
   ThetaY_mI45_mI40__184->SetBinContent(330,0.9138381);
   ThetaY_mI45_mI40__184->SetBinContent(331,0.7545692);
   ThetaY_mI45_mI40__184->SetBinContent(332,0.5443864);
   ThetaY_mI45_mI40__184->SetBinContent(333,0.3642298);
   ThetaY_mI45_mI40__184->SetBinContent(334,0.270235);
   ThetaY_mI45_mI40__184->SetBinContent(335,0.1527415);
   ThetaY_mI45_mI40__184->SetBinContent(336,0.08224543);
   ThetaY_mI45_mI40__184->SetBinContent(337,0.03133159);
   ThetaY_mI45_mI40__184->SetBinContent(338,0.001305483);
   ThetaY_mI45_mI40__184->SetBinError(293,0.001305483);
   ThetaY_mI45_mI40__184->SetBinError(294,0.007940943);
   ThetaY_mI45_mI40__184->SetBinError(295,0.01036195);
   ThetaY_mI45_mI40__184->SetBinError(296,0.01482744);
   ThetaY_mI45_mI40__184->SetBinError(297,0.01726992);
   ThetaY_mI45_mI40__184->SetBinError(298,0.02219321);
   ThetaY_mI45_mI40__184->SetBinError(299,0.02544855);
   ThetaY_mI45_mI40__184->SetBinError(300,0.0316024);
   ThetaY_mI45_mI40__184->SetBinError(301,0.03416776);
   ThetaY_mI45_mI40__184->SetBinError(302,0.03558489);
   ThetaY_mI45_mI40__184->SetBinError(303,0.03694771);
   ThetaY_mI45_mI40__184->SetBinError(304,0.03724633);
   ThetaY_mI45_mI40__184->SetBinError(305,0.0394031);
   ThetaY_mI45_mI40__184->SetBinError(306,0.03948951);
   ThetaY_mI45_mI40__184->SetBinError(307,0.04078459);
   ThetaY_mI45_mI40__184->SetBinError(308,0.03951109);
   ThetaY_mI45_mI40__184->SetBinError(309,0.03957573);
   ThetaY_mI45_mI40__184->SetBinError(310,0.03972617);
   ThetaY_mI45_mI40__184->SetBinError(311,0.03806104);
   ThetaY_mI45_mI40__184->SetBinError(312,0.03770112);
   ThetaY_mI45_mI40__184->SetBinError(313,0.03883675);
   ThetaY_mI45_mI40__184->SetBinError(314,0.03866082);
   ThetaY_mI45_mI40__184->SetBinError(315,0.0394031);
   ThetaY_mI45_mI40__184->SetBinError(316,0.03819514);
   ThetaY_mI45_mI40__184->SetBinError(317,0.03883675);
   ThetaY_mI45_mI40__184->SetBinError(318,0.03912095);
   ThetaY_mI45_mI40__184->SetBinError(319,0.0384176);
   ThetaY_mI45_mI40__184->SetBinError(320,0.03874888);
   ThetaY_mI45_mI40__184->SetBinError(321,0.03803865);
   ThetaY_mI45_mI40__184->SetBinError(322,0.0384176);
   ThetaY_mI45_mI40__184->SetBinError(323,0.03905555);
   ThetaY_mI45_mI40__184->SetBinError(324,0.03896818);
   ThetaY_mI45_mI40__184->SetBinError(325,0.04028002);
   ThetaY_mI45_mI40__184->SetBinError(326,0.03826201);
   ThetaY_mI45_mI40__184->SetBinError(327,0.0373149);
   ThetaY_mI45_mI40__184->SetBinError(328,0.03821744);
   ThetaY_mI45_mI40__184->SetBinError(329,0.03613147);
   ThetaY_mI45_mI40__184->SetBinError(330,0.03453983);
   ThetaY_mI45_mI40__184->SetBinError(331,0.03138594);
   ThetaY_mI45_mI40__184->SetBinError(332,0.02665872);
   ThetaY_mI45_mI40__184->SetBinError(333,0.02180587);
   ThetaY_mI45_mI40__184->SetBinError(334,0.01878263);
   ThetaY_mI45_mI40__184->SetBinError(335,0.01412096);
   ThetaY_mI45_mI40__184->SetBinError(336,0.01036195);
   ThetaY_mI45_mI40__184->SetBinError(337,0.006395535);
   ThetaY_mI45_mI40__184->SetBinError(338,0.001305483);
   ThetaY_mI45_mI40__184->SetEntries(29147);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__184->SetLineColor(ci);
   ThetaY_mI45_mI40__184->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__184->SetMarkerColor(ci);
   ThetaY_mI45_mI40__184->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__184->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__184->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__184->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__184->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__184->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__184->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__184->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__184->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__184->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__184->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__184->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__184->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__184->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__184->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__184->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__184->Draw("AEsame");
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
   
   Double_t _fx3062[46] = {
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
   Double_t _fy3062[46] = {
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
   0,
   0.8845266,
   0,
   0,
   0,
   0,
   0,
   0.8046218,
   0.8917346,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3062[46] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3062[46] = {
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
   0,
   0.7318823,
   0,
   0,
   0,
   0,
   0,
   0.6657537,
   0.7378477,
   0,
   0,
   0.827452,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3062[46] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3062[46] = {
   4062.078,
   39.07828,
   22.71476,
   11.01034,
   8.100952,
   4.895238,
   3.720116,
   2.410307,
   2.061488,
   1.900365,
   1.762602,
   1.734421,
   1.549559,
   1.542778,
   1.446264,
   1.541092,
   1.536057,
   1.524433,
   1.660883,
   1.692782,
   1.59513,
   1.609696,
   1.549559,
   1.649229,
   1.59513,
   1.572015,
   2.03787,
   1.60238,
   1.662842,
   1.630165,
   1.577289,
   1.584378,
   1.853458,
   2.054508,
   1.728045,
   1.647303,
   2.304483,
   2.017255,
   2.443721,
   3.389305,
   5.071275,
   6.843055,
   12.14851,
   22.71476,
   61.07171,
   4062.078};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(46,_fx3062,_fy3062,_felx3062,_fehx3062,_fely3062,_fehy3062);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3062 = new TH1F("Graph_Graph3062","",100,-100,100);
   Graph_Graph3062->SetMinimum(0);
   Graph_Graph3062->SetMaximum(1.5);
   Graph_Graph3062->SetDirectory(0);
   Graph_Graph3062->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3062->SetLineColor(ci);
   Graph_Graph3062->GetXaxis()->SetRange(1,100);
   Graph_Graph3062->GetXaxis()->CenterTitle(true);
   Graph_Graph3062->GetXaxis()->SetLabelFont(42);
   Graph_Graph3062->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3062->GetXaxis()->SetTitleFont(42);
   Graph_Graph3062->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3062->GetYaxis()->CenterTitle(true);
   Graph_Graph3062->GetYaxis()->SetLabelFont(42);
   Graph_Graph3062->GetYaxis()->SetTitleFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelFont(42);
   Graph_Graph3062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3062);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.401567,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__185 = new TH2D("ThetaY_vs_Y_mI45_mI40__185","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7622,1);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7648,37);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7674,63);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7700,129);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7726,175);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7752,289);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7778,380);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7804,586);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7830,685);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7856,743);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7882,801);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7908,814);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7934,911);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7960,915);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(7986,976);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8012,916);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8038,919);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8064,926);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8090,850);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8116,834);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8142,885);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8168,877);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8194,911);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8220,856);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8246,885);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8272,898);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8298,866);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8324,881);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8350,849);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8376,866);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8402,895);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8428,891);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8454,952);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8480,859);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8506,817);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8532,857);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8558,766);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8584,700);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8610,578);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8636,417);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8662,279);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8688,207);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8714,117);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8740,63);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8766,24);
   ThetaY_vs_Y_mI45_mI40__185->SetBinContent(8792,1);
   ThetaY_vs_Y_mI45_mI40__185->SetEntries(29147);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__185->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__185->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__185->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__185->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__185->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__185->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__185->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__185->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__185->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__185->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__185->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__185->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__185->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__185->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__185->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__185->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-45_-40","Reco vertices","lpf");
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
