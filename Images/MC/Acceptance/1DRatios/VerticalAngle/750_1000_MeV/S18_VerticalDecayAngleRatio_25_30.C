void S18_VerticalDecayAngleRatio_25_30()
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
   upper_pad->Range(-125,-0.1280982,125,2.433865);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_25_30__624 = new TH1D("S18_ThetaY_25_30__624","",630,-1575,1575);
   S18_ThetaY_25_30__624->SetBinContent(304,0.09090909);
   S18_ThetaY_25_30__624->SetBinContent(305,0.3636364);
   S18_ThetaY_25_30__624->SetBinContent(306,1);
   S18_ThetaY_25_30__624->SetBinContent(307,0.9545455);
   S18_ThetaY_25_30__624->SetBinContent(308,1.045455);
   S18_ThetaY_25_30__624->SetBinContent(309,1.204545);
   S18_ThetaY_25_30__624->SetBinContent(310,1.613636);
   S18_ThetaY_25_30__624->SetBinContent(311,1.659091);
   S18_ThetaY_25_30__624->SetBinContent(312,1.545455);
   S18_ThetaY_25_30__624->SetBinContent(313,1.545455);
   S18_ThetaY_25_30__624->SetBinContent(314,1.636364);
   S18_ThetaY_25_30__624->SetBinContent(315,1.454545);
   S18_ThetaY_25_30__624->SetBinContent(316,1.204545);
   S18_ThetaY_25_30__624->SetBinContent(317,1.318182);
   S18_ThetaY_25_30__624->SetBinContent(318,0.4545455);
   S18_ThetaY_25_30__624->SetBinContent(321,0.02272727);
   S18_ThetaY_25_30__624->SetBinError(304,0.04545455);
   S18_ThetaY_25_30__624->SetBinError(305,0.09090909);
   S18_ThetaY_25_30__624->SetBinError(306,0.1507557);
   S18_ThetaY_25_30__624->SetBinError(307,0.1472896);
   S18_ThetaY_25_30__624->SetBinError(308,0.1541439);
   S18_ThetaY_25_30__624->SetBinError(309,0.165457);
   S18_ThetaY_25_30__624->SetBinError(310,0.1915034);
   S18_ThetaY_25_30__624->SetBinError(311,0.1941819);
   S18_ThetaY_25_30__624->SetBinError(312,0.1874139);
   S18_ThetaY_25_30__624->SetBinError(313,0.1874139);
   S18_ThetaY_25_30__624->SetBinError(314,0.1928473);
   S18_ThetaY_25_30__624->SetBinError(315,0.1818182);
   S18_ThetaY_25_30__624->SetBinError(316,0.165457);
   S18_ThetaY_25_30__624->SetBinError(317,0.1730858);
   S18_ThetaY_25_30__624->SetBinError(318,0.1016395);
   S18_ThetaY_25_30__624->SetBinError(321,0.02272727);
   S18_ThetaY_25_30__624->SetMinimum(0);
   S18_ThetaY_25_30__624->SetMaximum(2.177669);
   S18_ThetaY_25_30__624->SetEntries(753);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__624->SetLineColor(ci);
   S18_ThetaY_25_30__624->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__624->SetMarkerColor(ci);
   S18_ThetaY_25_30__624->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__624->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__624->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__624->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__624->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__624->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__624->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__624->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__624->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__624->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__624->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__624->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__624->Draw("AE");
   
   TH1D *ThetaY_25_30__625 = new TH1D("ThetaY_25_30__625","",630,-1575,1575);
   ThetaY_25_30__625->SetBinContent(303,0.001184233);
   ThetaY_25_30__625->SetBinContent(304,0.09592286);
   ThetaY_25_30__625->SetBinContent(305,0.4743698);
   ThetaY_25_30__625->SetBinContent(306,1);
   ThetaY_25_30__625->SetBinContent(307,1.37371);
   ThetaY_25_30__625->SetBinContent(308,1.604128);
   ThetaY_25_30__625->SetBinContent(309,1.730333);
   ThetaY_25_30__625->SetBinContent(310,1.891051);
   ThetaY_25_30__625->SetBinContent(311,1.952123);
   ThetaY_25_30__625->SetBinContent(312,1.950431);
   ThetaY_25_30__625->SetBinContent(313,1.963627);
   ThetaY_25_30__625->SetBinContent(314,1.975639);
   ThetaY_25_30__625->SetBinContent(315,1.967011);
   ThetaY_25_30__625->SetBinContent(316,1.979699);
   ThetaY_25_30__625->SetBinContent(317,1.978345);
   ThetaY_25_30__625->SetBinContent(318,1.974962);
   ThetaY_25_30__625->SetBinContent(319,1.900863);
   ThetaY_25_30__625->SetBinContent(320,1.925901);
   ThetaY_25_30__625->SetBinContent(321,1.847065);
   ThetaY_25_30__625->SetBinContent(322,1.76789);
   ThetaY_25_30__625->SetBinContent(323,1.606327);
   ThetaY_25_30__625->SetBinContent(324,1.371342);
   ThetaY_25_30__625->SetBinContent(325,1.010489);
   ThetaY_25_30__625->SetBinContent(326,0.4752157);
   ThetaY_25_30__625->SetBinContent(327,0.1023515);
   ThetaY_25_30__625->SetBinContent(328,0.001522585);
   ThetaY_25_30__625->SetBinError(303,0.0004475979);
   ThetaY_25_30__625->SetBinError(304,0.004028381);
   ThetaY_25_30__625->SetBinError(305,0.00895835);
   ThetaY_25_30__625->SetBinError(306,0.01300677);
   ThetaY_25_30__625->SetBinError(307,0.01524464);
   ThetaY_25_30__625->SetBinError(308,0.01647362);
   ThetaY_25_30__625->SetBinError(309,0.01710939);
   ThetaY_25_30__625->SetBinError(310,0.01788632);
   ThetaY_25_30__625->SetBinError(311,0.01817285);
   ThetaY_25_30__625->SetBinError(312,0.01816498);
   ThetaY_25_30__625->SetBinError(313,0.01822632);
   ThetaY_25_30__625->SetBinError(314,0.01828198);
   ThetaY_25_30__625->SetBinError(315,0.01824202);
   ThetaY_25_30__625->SetBinError(316,0.01830076);
   ThetaY_25_30__625->SetBinError(317,0.0182945);
   ThetaY_25_30__625->SetBinError(318,0.01827885);
   ThetaY_25_30__625->SetBinError(319,0.01793267);
   ThetaY_25_30__625->SetBinError(320,0.01805039);
   ThetaY_25_30__625->SetBinError(321,0.01767708);
   ThetaY_25_30__625->SetBinError(322,0.01729407);
   ThetaY_25_30__625->SetBinError(323,0.01648491);
   ThetaY_25_30__625->SetBinError(324,0.01523149);
   ThetaY_25_30__625->SetBinError(325,0.01307481);
   ThetaY_25_30__625->SetBinError(326,0.008966334);
   ThetaY_25_30__625->SetBinError(327,0.004161182);
   ThetaY_25_30__625->SetBinError(328,0.0005075283);
   ThetaY_25_30__625->SetEntries(212332);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__625->SetLineColor(ci);
   ThetaY_25_30__625->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__625->SetMarkerColor(ci);
   ThetaY_25_30__625->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__625->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__625->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__625->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__625->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__625->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__625->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__625->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__625->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__625->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__625->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__625->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__625->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__625->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__625->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__625->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__625->Draw("AEsame");
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
   
   Double_t _fx3209[26] = {
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
   Double_t _fy3209[26] = {
   0,
   0.9477313,
   0.7665672,
   1,
   0.6948668,
   0.6517277,
   0.6961349,
   0.8533015,
   0.8498905,
   0.7923655,
   0.7870407,
   0.8282707,
   0.73947,
   0.6084488,
   0.6663052,
   0.230154,
   0,
   0,
   0.01230453,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3209[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3209[26] = {
   0,
   0.4548357,
   0.1901292,
   0.1507262,
   0.1070612,
   0.0959685,
   0.09556099,
   0.1013452,
   0.09955307,
   0.09612981,
   0.09548196,
   0.09768114,
   0.09244117,
   0.08349736,
   0.08744966,
   0.05107198,
   0,
   0,
   0.01017906,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3209[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3209[26] = {
   40.41388,
   0.7540955,
   0.2444469,
   0.1753877,
   0.1249955,
   0.1112712,
   0.1096853,
   0.1141713,
   0.1119678,
   0.1085745,
   0.1078425,
   0.1099506,
   0.1047975,
   0.09583316,
   0.09976453,
   0.06389751,
   0.0220136,
   0.02172738,
   0.02829888,
   0.0236695,
   0.02605039,
   0.03051476,
   0.04141347,
   0.08807604,
   0.4094235,
   30.49304};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3209,_fy3209,_felx3209,_fehx3209,_fely3209,_fehy3209);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3209 = new TH1F("Graph_Graph3209","",100,-100,100);
   Graph_Graph3209->SetMinimum(0);
   Graph_Graph3209->SetMaximum(1.5);
   Graph_Graph3209->SetDirectory(0);
   Graph_Graph3209->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3209->SetLineColor(ci);
   Graph_Graph3209->GetXaxis()->SetRange(1,100);
   Graph_Graph3209->GetXaxis()->CenterTitle(true);
   Graph_Graph3209->GetXaxis()->SetLabelFont(42);
   Graph_Graph3209->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3209->GetXaxis()->SetTitleFont(42);
   Graph_Graph3209->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3209->GetYaxis()->CenterTitle(true);
   Graph_Graph3209->GetYaxis()->SetLabelFont(42);
   Graph_Graph3209->GetYaxis()->SetTitleFont(42);
   Graph_Graph3209->GetZaxis()->SetLabelFont(42);
   Graph_Graph3209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3209->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3209);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.177669,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__626 = new TH2D("ThetaY_vs_Y_25_30__626","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__626->SetBinContent(7896,7);
   ThetaY_vs_Y_25_30__626->SetBinContent(7922,567);
   ThetaY_vs_Y_25_30__626->SetBinContent(7948,2804);
   ThetaY_vs_Y_25_30__626->SetBinContent(7974,5911);
   ThetaY_vs_Y_25_30__626->SetBinContent(8000,8120);
   ThetaY_vs_Y_25_30__626->SetBinContent(8026,9482);
   ThetaY_vs_Y_25_30__626->SetBinContent(8052,10228);
   ThetaY_vs_Y_25_30__626->SetBinContent(8078,11178);
   ThetaY_vs_Y_25_30__626->SetBinContent(8104,11539);
   ThetaY_vs_Y_25_30__626->SetBinContent(8130,11529);
   ThetaY_vs_Y_25_30__626->SetBinContent(8156,11607);
   ThetaY_vs_Y_25_30__626->SetBinContent(8182,11678);
   ThetaY_vs_Y_25_30__626->SetBinContent(8208,11627);
   ThetaY_vs_Y_25_30__626->SetBinContent(8234,11702);
   ThetaY_vs_Y_25_30__626->SetBinContent(8260,11694);
   ThetaY_vs_Y_25_30__626->SetBinContent(8286,11674);
   ThetaY_vs_Y_25_30__626->SetBinContent(8312,11236);
   ThetaY_vs_Y_25_30__626->SetBinContent(8338,11384);
   ThetaY_vs_Y_25_30__626->SetBinContent(8364,10918);
   ThetaY_vs_Y_25_30__626->SetBinContent(8390,10450);
   ThetaY_vs_Y_25_30__626->SetBinContent(8416,9495);
   ThetaY_vs_Y_25_30__626->SetBinContent(8442,8106);
   ThetaY_vs_Y_25_30__626->SetBinContent(8468,5973);
   ThetaY_vs_Y_25_30__626->SetBinContent(8494,2809);
   ThetaY_vs_Y_25_30__626->SetBinContent(8520,605);
   ThetaY_vs_Y_25_30__626->SetBinContent(8546,9);
   ThetaY_vs_Y_25_30__626->SetEntries(212332);
   ThetaY_vs_Y_25_30__626->SetContour(20);
   ThetaY_vs_Y_25_30__626->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__626->SetContourLevel(1,585.1);
   ThetaY_vs_Y_25_30__626->SetContourLevel(2,1170.2);
   ThetaY_vs_Y_25_30__626->SetContourLevel(3,1755.3);
   ThetaY_vs_Y_25_30__626->SetContourLevel(4,2340.4);
   ThetaY_vs_Y_25_30__626->SetContourLevel(5,2925.5);
   ThetaY_vs_Y_25_30__626->SetContourLevel(6,3510.6);
   ThetaY_vs_Y_25_30__626->SetContourLevel(7,4095.7);
   ThetaY_vs_Y_25_30__626->SetContourLevel(8,4680.8);
   ThetaY_vs_Y_25_30__626->SetContourLevel(9,5265.9);
   ThetaY_vs_Y_25_30__626->SetContourLevel(10,5851);
   ThetaY_vs_Y_25_30__626->SetContourLevel(11,6436.1);
   ThetaY_vs_Y_25_30__626->SetContourLevel(12,7021.2);
   ThetaY_vs_Y_25_30__626->SetContourLevel(13,7606.3);
   ThetaY_vs_Y_25_30__626->SetContourLevel(14,8191.4);
   ThetaY_vs_Y_25_30__626->SetContourLevel(15,8776.5);
   ThetaY_vs_Y_25_30__626->SetContourLevel(16,9361.6);
   ThetaY_vs_Y_25_30__626->SetContourLevel(17,9946.7);
   ThetaY_vs_Y_25_30__626->SetContourLevel(18,10531.8);
   ThetaY_vs_Y_25_30__626->SetContourLevel(19,11116.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__626->SetLineColor(ci);
   ThetaY_vs_Y_25_30__626->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__626->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__626->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__626->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__626->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__626->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__626->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__626->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__626->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__626->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__626->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__626->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__626->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__626->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__626->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
