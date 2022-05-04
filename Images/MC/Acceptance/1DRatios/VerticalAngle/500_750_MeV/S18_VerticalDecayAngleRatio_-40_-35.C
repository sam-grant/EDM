void S18_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.06783884,125,1.288938);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI40_mI35__414 = new TH1D("S18_ThetaY_mI40_mI35__414","",630,-1575,1575);
   S18_ThetaY_mI40_mI35__414->SetBinContent(314,0.09090909);
   S18_ThetaY_mI40_mI35__414->SetBinContent(315,0.2727273);
   S18_ThetaY_mI40_mI35__414->SetBinContent(316,0.9090909);
   S18_ThetaY_mI40_mI35__414->SetBinContent(317,0.8181818);
   S18_ThetaY_mI40_mI35__414->SetBinContent(318,0.3636364);
   S18_ThetaY_mI40_mI35__414->SetBinContent(319,0.6363636);
   S18_ThetaY_mI40_mI35__414->SetBinContent(320,0.5454545);
   S18_ThetaY_mI40_mI35__414->SetBinContent(321,0.8181818);
   S18_ThetaY_mI40_mI35__414->SetBinContent(322,1);
   S18_ThetaY_mI40_mI35__414->SetBinContent(323,0.6363636);
   S18_ThetaY_mI40_mI35__414->SetBinContent(324,0.5454545);
   S18_ThetaY_mI40_mI35__414->SetBinContent(325,0.7272727);
   S18_ThetaY_mI40_mI35__414->SetBinContent(326,0.4545455);
   S18_ThetaY_mI40_mI35__414->SetBinContent(327,0.5454545);
   S18_ThetaY_mI40_mI35__414->SetBinContent(328,0.2727273);
   S18_ThetaY_mI40_mI35__414->SetBinContent(329,0.1818182);
   S18_ThetaY_mI40_mI35__414->SetBinError(314,0.09090909);
   S18_ThetaY_mI40_mI35__414->SetBinError(315,0.1574592);
   S18_ThetaY_mI40_mI35__414->SetBinError(316,0.2874798);
   S18_ThetaY_mI40_mI35__414->SetBinError(317,0.2727273);
   S18_ThetaY_mI40_mI35__414->SetBinError(318,0.1818182);
   S18_ThetaY_mI40_mI35__414->SetBinError(319,0.2405228);
   S18_ThetaY_mI40_mI35__414->SetBinError(320,0.2226809);
   S18_ThetaY_mI40_mI35__414->SetBinError(321,0.2727273);
   S18_ThetaY_mI40_mI35__414->SetBinError(322,0.3015113);
   S18_ThetaY_mI40_mI35__414->SetBinError(323,0.2405228);
   S18_ThetaY_mI40_mI35__414->SetBinError(324,0.2226809);
   S18_ThetaY_mI40_mI35__414->SetBinError(325,0.2571297);
   S18_ThetaY_mI40_mI35__414->SetBinError(326,0.2032789);
   S18_ThetaY_mI40_mI35__414->SetBinError(327,0.2226809);
   S18_ThetaY_mI40_mI35__414->SetBinError(328,0.1574592);
   S18_ThetaY_mI40_mI35__414->SetBinError(329,0.1285649);
   S18_ThetaY_mI40_mI35__414->SetMinimum(0);
   S18_ThetaY_mI40_mI35__414->SetMaximum(1.15326);
   S18_ThetaY_mI40_mI35__414->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__414->SetLineColor(ci);
   S18_ThetaY_mI40_mI35__414->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI40_mI35__414->SetMarkerColor(ci);
   S18_ThetaY_mI40_mI35__414->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI40_mI35__414->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI40_mI35__414->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__414->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__414->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__414->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI40_mI35__414->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI40_mI35__414->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__414->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__414->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI40_mI35__414->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI40_mI35__414->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI40_mI35__414->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__415 = new TH1D("ThetaY_mI40_mI35__415","",630,-1575,1575);
   ThetaY_mI40_mI35__415->SetBinContent(300,0.005164622);
   ThetaY_mI40_mI35__415->SetBinContent(301,0.06488057);
   ThetaY_mI40_mI35__415->SetBinContent(302,0.1875403);
   ThetaY_mI40_mI35__415->SetBinContent(303,0.3702389);
   ThetaY_mI40_mI35__415->SetBinContent(304,0.5661717);
   ThetaY_mI40_mI35__415->SetBinContent(305,0.7527437);
   ThetaY_mI40_mI35__415->SetBinContent(306,0.8208522);
   ThetaY_mI40_mI35__415->SetBinContent(307,0.9054229);
   ThetaY_mI40_mI35__415->SetBinContent(308,0.9499677);
   ThetaY_mI40_mI35__415->SetBinContent(309,1.003551);
   ThetaY_mI40_mI35__415->SetBinContent(310,0.9780504);
   ThetaY_mI40_mI35__415->SetBinContent(311,0.9767592);
   ThetaY_mI40_mI35__415->SetBinContent(312,1.048418);
   ThetaY_mI40_mI35__415->SetBinContent(313,0.9799871);
   ThetaY_mI40_mI35__415->SetBinContent(314,0.9519045);
   ThetaY_mI40_mI35__415->SetBinContent(315,1.016462);
   ThetaY_mI40_mI35__415->SetBinContent(316,0.9683667);
   ThetaY_mI40_mI35__415->SetBinContent(317,0.9825694);
   ThetaY_mI40_mI35__415->SetBinContent(318,1.015817);
   ThetaY_mI40_mI35__415->SetBinContent(319,0.9819238);
   ThetaY_mI40_mI35__415->SetBinContent(320,1.005165);
   ThetaY_mI40_mI35__415->SetBinContent(321,1.003873);
   ThetaY_mI40_mI35__415->SetBinContent(322,1);
   ThetaY_mI40_mI35__415->SetBinContent(323,0.941898);
   ThetaY_mI40_mI35__415->SetBinContent(324,0.8976759);
   ThetaY_mI40_mI35__415->SetBinContent(325,0.844093);
   ThetaY_mI40_mI35__415->SetBinContent(326,0.7679148);
   ThetaY_mI40_mI35__415->SetBinContent(327,0.5755326);
   ThetaY_mI40_mI35__415->SetBinContent(328,0.396062);
   ThetaY_mI40_mI35__415->SetBinContent(329,0.1836669);
   ThetaY_mI40_mI35__415->SetBinContent(330,0.05713363);
   ThetaY_mI40_mI35__415->SetBinContent(331,0.006132989);
   ThetaY_mI40_mI35__415->SetBinError(300,0.001291156);
   ThetaY_mI40_mI35__415->SetBinError(301,0.004576322);
   ThetaY_mI40_mI35__415->SetBinError(302,0.007780485);
   ThetaY_mI40_mI35__415->SetBinError(303,0.01093202);
   ThetaY_mI40_mI35__415->SetBinError(304,0.01351865);
   ThetaY_mI40_mI35__415->SetBinError(305,0.01558773);
   ThetaY_mI40_mI35__415->SetBinError(306,0.01627765);
   ThetaY_mI40_mI35__415->SetBinError(307,0.01709563);
   ThetaY_mI40_mI35__415->SetBinError(308,0.01751111);
   ThetaY_mI40_mI35__415->SetBinError(309,0.01799819);
   ThetaY_mI40_mI35__415->SetBinError(310,0.01776806);
   ThetaY_mI40_mI35__415->SetBinError(311,0.01775632);
   ThetaY_mI40_mI35__415->SetBinError(312,0.01839614);
   ThetaY_mI40_mI35__415->SetBinError(313,0.01778564);
   ThetaY_mI40_mI35__415->SetBinError(314,0.01752895);
   ThetaY_mI40_mI35__415->SetBinError(315,0.01811361);
   ThetaY_mI40_mI35__415->SetBinError(316,0.01767988);
   ThetaY_mI40_mI35__415->SetBinError(317,0.01780906);
   ThetaY_mI40_mI35__415->SetBinError(318,0.01810785);
   ThetaY_mI40_mI35__415->SetBinError(319,0.0178032);
   ThetaY_mI40_mI35__415->SetBinError(320,0.01801266);
   ThetaY_mI40_mI35__415->SetBinError(321,0.01800109);
   ThetaY_mI40_mI35__415->SetBinError(322,0.01796633);
   ThetaY_mI40_mI35__415->SetBinError(323,0.01743658);
   ThetaY_mI40_mI35__415->SetBinError(324,0.01702233);
   ThetaY_mI40_mI35__415->SetBinError(325,0.01650648);
   ThetaY_mI40_mI35__415->SetBinError(326,0.01574403);
   ThetaY_mI40_mI35__415->SetBinError(327,0.01362995);
   ThetaY_mI40_mI35__415->SetBinError(328,0.01130683);
   ThetaY_mI40_mI35__415->SetBinError(329,0.007699716);
   ThetaY_mI40_mI35__415->SetBinError(330,0.004294427);
   ThetaY_mI40_mI35__415->SetBinError(331,0.001407004);
   ThetaY_mI40_mI35__415->SetEntries(71892);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__415->SetLineColor(ci);
   ThetaY_mI40_mI35__415->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__415->SetMarkerColor(ci);
   ThetaY_mI40_mI35__415->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__415->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__415->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__415->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__415->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__415->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__415->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__415->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__415->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__415->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__415->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__415->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__415->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__415->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__415->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__415->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__415->Draw("AEsame");
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
   
   Double_t _fx3139[32] = {
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
   Double_t _fy3139[32] = {
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
   0.09550233,
   0.2683103,
   0.9387879,
   0.8326962,
   0.3579744,
   0.6480784,
   0.542652,
   0.8150248,
   1,
   0.6756184,
   0.6076297,
   0.8616026,
   0.5919217,
   0.9477387,
   0.6885975,
   0.9899345,
   0,
   0};
   Double_t _felx3139[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3139[32] = {
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
   0.07900905,
   0.1460749,
   0.292283,
   0.2726969,
   0.1714075,
   0.2392399,
   0.2154233,
   0.2669023,
   0.2973543,
   0.249417,
   0.2412421,
   0.2985616,
   0.2558967,
   0.3764668,
   0.375095,
   0.6401103,
   0,
   0};
   Double_t _fehx3139[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3139[32] = {
   34.34417,
   2.591445,
   0.8938399,
   0.4524106,
   0.2957645,
   0.2224285,
   0.2039663,
   0.1849087,
   0.1762354,
   0.1668228,
   0.1711737,
   0.1714,
   0.1596815,
   0.1708353,
   0.219733,
   0.2612384,
   0.4015284,
   0.3811023,
   0.2833683,
   0.3496804,
   0.3246104,
   0.3729976,
   0.4025006,
   0.3645674,
   0.3635465,
   0.4258634,
   0.4011373,
   0.5675806,
   0.6714343,
   1.31098,
   2.944658,
   28.65527};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3139,_fy3139,_felx3139,_fehx3139,_fely3139,_fehy3139);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3139 = new TH1F("Graph_Graph3139","",100,-100,100);
   Graph_Graph3139->SetMinimum(0);
   Graph_Graph3139->SetMaximum(1.5);
   Graph_Graph3139->SetDirectory(0);
   Graph_Graph3139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3139->SetLineColor(ci);
   Graph_Graph3139->GetXaxis()->SetRange(1,100);
   Graph_Graph3139->GetXaxis()->CenterTitle(true);
   Graph_Graph3139->GetXaxis()->SetLabelFont(42);
   Graph_Graph3139->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3139->GetXaxis()->SetTitleFont(42);
   Graph_Graph3139->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3139->GetYaxis()->CenterTitle(true);
   Graph_Graph3139->GetYaxis()->SetLabelFont(42);
   Graph_Graph3139->GetYaxis()->SetTitleFont(42);
   Graph_Graph3139->GetZaxis()->SetLabelFont(42);
   Graph_Graph3139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3139->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3139);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.15326,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__416 = new TH2D("ThetaY_vs_Y_mI40_mI35__416","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7805,16);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7831,201);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7857,581);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7883,1147);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7909,1754);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7935,2332);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7961,2543);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(7987,2805);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8013,2943);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8039,3109);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8065,3030);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8091,3026);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8117,3248);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8143,3036);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8169,2949);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8195,3149);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8221,3000);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8247,3044);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8273,3147);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8299,3042);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8325,3114);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8351,3110);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8377,3098);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8403,2918);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8429,2781);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8455,2615);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8481,2379);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8507,1783);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8533,1227);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8559,569);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8585,177);
   ThetaY_vs_Y_mI40_mI35__416->SetBinContent(8611,19);
   ThetaY_vs_Y_mI40_mI35__416->SetEntries(71892);
   ThetaY_vs_Y_mI40_mI35__416->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(1,162.4);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(2,324.8);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(3,487.2);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(4,649.6);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(5,812);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(6,974.4);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(7,1136.8);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(8,1299.2);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(9,1461.6);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(10,1624);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(11,1786.4);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(12,1948.8);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(13,2111.2);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(14,2273.6);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(15,2436);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(16,2598.4);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(17,2760.8);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(18,2923.2);
   ThetaY_vs_Y_mI40_mI35__416->SetContourLevel(19,3085.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__416->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__416->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__416->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__416->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__416->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__416->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__416->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__416->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__416->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__416->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__416->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__416->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__416->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__416->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__416->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__416->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-40_-35","Reco vertices","lpf");
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
