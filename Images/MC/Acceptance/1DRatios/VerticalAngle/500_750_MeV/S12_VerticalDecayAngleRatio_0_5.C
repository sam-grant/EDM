void S12_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06571655,125,1.248614);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__381 = new TH1D("S12_ThetaY_0_5__381","",630,-1575,1575);
   S12_ThetaY_0_5__381->SetBinContent(304,0.0078125);
   S12_ThetaY_0_5__381->SetBinContent(305,0.015625);
   S12_ThetaY_0_5__381->SetBinContent(306,0.1015625);
   S12_ThetaY_0_5__381->SetBinContent(307,0.421875);
   S12_ThetaY_0_5__381->SetBinContent(308,0.828125);
   S12_ThetaY_0_5__381->SetBinContent(309,0.8828125);
   S12_ThetaY_0_5__381->SetBinContent(310,0.9375);
   S12_ThetaY_0_5__381->SetBinContent(311,0.796875);
   S12_ThetaY_0_5__381->SetBinContent(312,0.7578125);
   S12_ThetaY_0_5__381->SetBinContent(313,0.8671875);
   S12_ThetaY_0_5__381->SetBinContent(314,0.90625);
   S12_ThetaY_0_5__381->SetBinContent(315,0.921875);
   S12_ThetaY_0_5__381->SetBinContent(316,1);
   S12_ThetaY_0_5__381->SetBinContent(317,0.828125);
   S12_ThetaY_0_5__381->SetBinContent(318,0.953125);
   S12_ThetaY_0_5__381->SetBinContent(319,0.859375);
   S12_ThetaY_0_5__381->SetBinContent(320,0.7734375);
   S12_ThetaY_0_5__381->SetBinContent(321,0.8359375);
   S12_ThetaY_0_5__381->SetBinContent(322,0.859375);
   S12_ThetaY_0_5__381->SetBinContent(323,0.4296875);
   S12_ThetaY_0_5__381->SetBinContent(324,0.125);
   S12_ThetaY_0_5__381->SetBinContent(325,0.015625);
   S12_ThetaY_0_5__381->SetBinError(304,0.0078125);
   S12_ThetaY_0_5__381->SetBinError(305,0.01104854);
   S12_ThetaY_0_5__381->SetBinError(306,0.02816837);
   S12_ThetaY_0_5__381->SetBinError(307,0.05740992);
   S12_ThetaY_0_5__381->SetBinError(308,0.08043461);
   S12_ThetaY_0_5__381->SetBinError(309,0.08304801);
   S12_ThetaY_0_5__381->SetBinError(310,0.08558165);
   S12_ThetaY_0_5__381->SetBinError(311,0.07890238);
   S12_ThetaY_0_5__381->SetBinError(312,0.0769442);
   S12_ThetaY_0_5__381->SetBinError(313,0.08230979);
   S12_ThetaY_0_5__381->SetBinError(314,0.0841432);
   S12_ThetaY_0_5__381->SetBinError(315,0.08486547);
   S12_ThetaY_0_5__381->SetBinError(316,0.08838835);
   S12_ThetaY_0_5__381->SetBinError(317,0.08043461);
   S12_ThetaY_0_5__381->SetBinError(318,0.08629188);
   S12_ThetaY_0_5__381->SetBinError(319,0.08193819);
   S12_ThetaY_0_5__381->SetBinError(320,0.07773339);
   S12_ThetaY_0_5__381->SetBinError(321,0.08081313);
   S12_ThetaY_0_5__381->SetBinError(322,0.08193819);
   S12_ThetaY_0_5__381->SetBinError(323,0.05793905);
   S12_ThetaY_0_5__381->SetBinError(324,0.03125);
   S12_ThetaY_0_5__381->SetBinError(325,0.01104854);
   S12_ThetaY_0_5__381->SetMinimum(0);
   S12_ThetaY_0_5__381->SetMaximum(1.117181);
   S12_ThetaY_0_5__381->SetEntries(1808);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__381->SetLineColor(ci);
   S12_ThetaY_0_5__381->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__381->SetMarkerColor(ci);
   S12_ThetaY_0_5__381->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__381->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__381->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__381->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__381->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__381->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__381->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__381->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__381->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__381->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__381->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__381->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__381->Draw("AE");
   
   TH1D *ThetaY_0_5__382 = new TH1D("ThetaY_0_5__382","",630,-1575,1575);
   ThetaY_0_5__382->SetBinContent(300,0.005772356);
   ThetaY_0_5__382->SetBinContent(301,0.06466009);
   ThetaY_0_5__382->SetBinContent(302,0.1912153);
   ThetaY_0_5__382->SetBinContent(303,0.389246);
   ThetaY_0_5__382->SetBinContent(304,0.6118697);
   ThetaY_0_5__382->SetBinContent(305,0.7519342);
   ThetaY_0_5__382->SetBinContent(306,0.856734);
   ThetaY_0_5__382->SetBinContent(307,0.9227038);
   ThetaY_0_5__382->SetBinContent(308,0.9830467);
   ThetaY_0_5__382->SetBinContent(309,0.998569);
   ThetaY_0_5__382->SetBinContent(310,1.010162);
   ThetaY_0_5__382->SetBinContent(311,1.002159);
   ThetaY_0_5__382->SetBinContent(312,1.007446);
   ThetaY_0_5__382->SetBinContent(313,1.00439);
   ThetaY_0_5__382->SetBinContent(314,0.9903471);
   ThetaY_0_5__382->SetBinContent(315,0.996459);
   ThetaY_0_5__382->SetBinContent(316,1);
   ThetaY_0_5__382->SetBinContent(317,0.9898863);
   ThetaY_0_5__382->SetBinContent(318,1.015619);
   ThetaY_0_5__382->SetBinContent(319,1.009338);
   ThetaY_0_5__382->SetBinContent(320,1.013849);
   ThetaY_0_5__382->SetBinContent(321,1.013703);
   ThetaY_0_5__382->SetBinContent(322,0.9993694);
   ThetaY_0_5__382->SetBinContent(323,0.9713808);
   ThetaY_0_5__382->SetBinContent(324,0.9289612);
   ThetaY_0_5__382->SetBinContent(325,0.8598385);
   ThetaY_0_5__382->SetBinContent(326,0.7524921);
   ThetaY_0_5__382->SetBinContent(327,0.6063884);
   ThetaY_0_5__382->SetBinContent(328,0.3877422);
   ThetaY_0_5__382->SetBinContent(329,0.1926706);
   ThetaY_0_5__382->SetBinContent(330,0.06456307);
   ThetaY_0_5__382->SetBinContent(331,0.004996241);
   ThetaY_0_5__382->SetBinError(300,0.0003741662);
   ThetaY_0_5__382->SetBinError(301,0.001252294);
   ThetaY_0_5__382->SetBinError(302,0.002153523);
   ThetaY_0_5__382->SetBinError(303,0.003072558);
   ThetaY_0_5__382->SetBinError(304,0.003852277);
   ThetaY_0_5__382->SetBinError(305,0.004270493);
   ThetaY_0_5__382->SetBinError(306,0.004558386);
   ThetaY_0_5__382->SetBinError(307,0.004730633);
   ThetaY_0_5__382->SetBinError(308,0.00488287);
   ThetaY_0_5__382->SetBinError(309,0.004921269);
   ThetaY_0_5__382->SetBinError(310,0.004949754);
   ThetaY_0_5__382->SetBinError(311,0.004930106);
   ThetaY_0_5__382->SetBinError(312,0.004943095);
   ThetaY_0_5__382->SetBinError(313,0.004935592);
   ThetaY_0_5__382->SetBinError(314,0.004900967);
   ThetaY_0_5__382->SetBinError(315,0.004916067);
   ThetaY_0_5__382->SetBinError(316,0.004924794);
   ThetaY_0_5__382->SetBinError(317,0.004899827);
   ThetaY_0_5__382->SetBinError(318,0.004963106);
   ThetaY_0_5__382->SetBinError(319,0.004947734);
   ThetaY_0_5__382->SetBinError(320,0.004958778);
   ThetaY_0_5__382->SetBinError(321,0.004958422);
   ThetaY_0_5__382->SetBinError(322,0.004923241);
   ThetaY_0_5__382->SetBinError(323,0.00485381);
   ThetaY_0_5__382->SetBinError(324,0.004746646);
   ThetaY_0_5__382->SetBinError(325,0.004566637);
   ThetaY_0_5__382->SetBinError(326,0.004272077);
   ThetaY_0_5__382->SetBinError(327,0.003834984);
   ThetaY_0_5__382->SetBinError(328,0.003066618);
   ThetaY_0_5__382->SetBinError(329,0.002161702);
   ThetaY_0_5__382->SetBinError(330,0.001251354);
   ThetaY_0_5__382->SetBinError(331,0.0003481046);
   ThetaY_0_5__382->SetEntries(972949);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__382->SetLineColor(ci);
   ThetaY_0_5__382->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__382->SetMarkerColor(ci);
   ThetaY_0_5__382->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__382->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__382->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__382->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__382->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__382->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__382->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__382->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__382->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__382->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__382->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__382->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__382->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__382->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__382->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__382->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__382->Draw("AEsame");
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
   
   Double_t _fx3128[32] = {
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
   Double_t _fy3128[32] = {
   0,
   0,
   0,
   0,
   0.01276824,
   0.02077974,
   0.1185461,
   0.4572161,
   0.8424065,
   0.8840776,
   0.9280687,
   0.7951586,
   0.7522116,
   0.8633973,
   0.9150832,
   0.925151,
   1,
   0.836586,
   0.9384668,
   0.8514247,
   0.7628726,
   0.8246373,
   0.8599173,
   0.4423471,
   0.1345589,
   0.01817202,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3128[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3128[32] = {
   0,
   0,
   0,
   0,
   0.01056256,
   0.01342206,
   0.03245676,
   0.06206916,
   0.08179829,
   0.08315672,
   0.08472333,
   0.07869922,
   0.07633175,
   0.08193508,
   0.08496016,
   0.08516728,
   0.08840865,
   0.08123239,
   0.08497075,
   0.08116272,
   0.07663159,
   0.07969685,
   0.08197335,
   0.05950427,
   0.03329139,
   0.01173765,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3128[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3128[32] = {
   2.501363,
   0.2225167,
   0.07522754,
   0.036953,
   0.02936283,
   0.02740907,
   0.04284759,
   0.07112869,
   0.09015674,
   0.09137431,
   0.09283692,
   0.08690437,
   0.0845025,
   0.09010778,
   0.09324196,
   0.09339543,
   0.09659524,
   0.08953292,
   0.09303811,
   0.08929671,
   0.08474702,
   0.08780024,
   0.09018871,
   0.06810431,
   0.04276,
   0.02396918,
   0.01911437,
   0.02371996,
   0.03709632,
   0.07465929,
   0.2228512,
   2.891663};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3128,_fy3128,_felx3128,_fehx3128,_fely3128,_fehy3128);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3128 = new TH1F("Graph_Graph3128","",100,-100,100);
   Graph_Graph3128->SetMinimum(0);
   Graph_Graph3128->SetMaximum(1.5);
   Graph_Graph3128->SetDirectory(0);
   Graph_Graph3128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3128->SetLineColor(ci);
   Graph_Graph3128->GetXaxis()->SetRange(1,100);
   Graph_Graph3128->GetXaxis()->CenterTitle(true);
   Graph_Graph3128->GetXaxis()->SetLabelFont(42);
   Graph_Graph3128->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3128->GetXaxis()->SetTitleFont(42);
   Graph_Graph3128->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3128->GetYaxis()->CenterTitle(true);
   Graph_Graph3128->GetYaxis()->SetLabelFont(42);
   Graph_Graph3128->GetYaxis()->SetTitleFont(42);
   Graph_Graph3128->GetZaxis()->SetLabelFont(42);
   Graph_Graph3128->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3128->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3128);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.117181,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__383 = new TH2D("ThetaY_vs_Y_0_5__383","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__383->SetBinContent(7813,238);
   ThetaY_vs_Y_0_5__383->SetBinContent(7839,2666);
   ThetaY_vs_Y_0_5__383->SetBinContent(7865,7884);
   ThetaY_vs_Y_0_5__383->SetBinContent(7891,16049);
   ThetaY_vs_Y_0_5__383->SetBinContent(7917,25228);
   ThetaY_vs_Y_0_5__383->SetBinContent(7943,31003);
   ThetaY_vs_Y_0_5__383->SetBinContent(7969,35324);
   ThetaY_vs_Y_0_5__383->SetBinContent(7995,38044);
   ThetaY_vs_Y_0_5__383->SetBinContent(8021,40532);
   ThetaY_vs_Y_0_5__383->SetBinContent(8047,41172);
   ThetaY_vs_Y_0_5__383->SetBinContent(8073,41650);
   ThetaY_vs_Y_0_5__383->SetBinContent(8099,41320);
   ThetaY_vs_Y_0_5__383->SetBinContent(8125,41538);
   ThetaY_vs_Y_0_5__383->SetBinContent(8151,41412);
   ThetaY_vs_Y_0_5__383->SetBinContent(8177,40833);
   ThetaY_vs_Y_0_5__383->SetBinContent(8203,41085);
   ThetaY_vs_Y_0_5__383->SetBinContent(8229,41231);
   ThetaY_vs_Y_0_5__383->SetBinContent(8255,40814);
   ThetaY_vs_Y_0_5__383->SetBinContent(8281,41875);
   ThetaY_vs_Y_0_5__383->SetBinContent(8307,41616);
   ThetaY_vs_Y_0_5__383->SetBinContent(8333,41802);
   ThetaY_vs_Y_0_5__383->SetBinContent(8359,41796);
   ThetaY_vs_Y_0_5__383->SetBinContent(8385,41205);
   ThetaY_vs_Y_0_5__383->SetBinContent(8411,40051);
   ThetaY_vs_Y_0_5__383->SetBinContent(8437,38302);
   ThetaY_vs_Y_0_5__383->SetBinContent(8463,35452);
   ThetaY_vs_Y_0_5__383->SetBinContent(8489,31026);
   ThetaY_vs_Y_0_5__383->SetBinContent(8515,25002);
   ThetaY_vs_Y_0_5__383->SetBinContent(8541,15987);
   ThetaY_vs_Y_0_5__383->SetBinContent(8567,7944);
   ThetaY_vs_Y_0_5__383->SetBinContent(8593,2662);
   ThetaY_vs_Y_0_5__383->SetBinContent(8619,206);
   ThetaY_vs_Y_0_5__383->SetEntries(972949);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__383->SetLineColor(ci);
   ThetaY_vs_Y_0_5__383->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__383->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__383->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__383->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__383->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__383->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__383->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__383->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__383->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__383->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__383->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__383->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__383->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__383->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__383->Draw("COL");
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
