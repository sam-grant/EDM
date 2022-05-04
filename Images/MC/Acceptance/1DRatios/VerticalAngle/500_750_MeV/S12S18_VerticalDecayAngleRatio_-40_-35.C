void S12S18_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-11.0613,125,210.1647);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI40_mI35__471 = new TH1D("S12S18_ThetaY_mI40_mI35__471","",630,-1575,1575);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(314,1);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(315,8);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(316,21);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(317,19);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(318,13);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(319,12);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(320,16);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(321,20);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(322,17);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(323,12);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(324,13);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(325,12);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(326,17);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(327,12);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(328,5);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(329,3);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(330,1);
   S12S18_ThetaY_mI40_mI35__471->SetBinContent(331,1);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(314,1);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(315,2.828427);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(316,4.582576);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(317,4.358899);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(318,3.605551);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(319,3.464102);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(320,4);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(321,4.472136);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(322,4.123106);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(323,3.464102);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(324,3.605551);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(325,3.464102);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(326,4.123106);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(327,3.464102);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(328,2.236068);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(329,1.732051);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(330,1);
   S12S18_ThetaY_mI40_mI35__471->SetBinError(331,1);
   S12S18_ThetaY_mI40_mI35__471->SetMinimum(0);
   S12S18_ThetaY_mI40_mI35__471->SetMaximum(188.0421);
   S12S18_ThetaY_mI40_mI35__471->SetEntries(203);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__471->SetLineColor(ci);
   S12S18_ThetaY_mI40_mI35__471->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI40_mI35__471->SetMarkerColor(ci);
   S12S18_ThetaY_mI40_mI35__471->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI40_mI35__471->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI40_mI35__471->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__471->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__471->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__471->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI40_mI35__471->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI40_mI35__471->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__471->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__471->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI40_mI35__471->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI40_mI35__471->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI40_mI35__471->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__472 = new TH1D("ThetaY_mI40_mI35__472","",630,-1575,1575);
   ThetaY_mI40_mI35__472->SetBinContent(300,0.8421053);
   ThetaY_mI40_mI35__472->SetBinContent(301,10.57895);
   ThetaY_mI40_mI35__472->SetBinContent(302,30.57895);
   ThetaY_mI40_mI35__472->SetBinContent(303,60.36842);
   ThetaY_mI40_mI35__472->SetBinContent(304,92.31579);
   ThetaY_mI40_mI35__472->SetBinContent(305,122.7368);
   ThetaY_mI40_mI35__472->SetBinContent(306,133.8421);
   ThetaY_mI40_mI35__472->SetBinContent(307,147.6316);
   ThetaY_mI40_mI35__472->SetBinContent(308,154.8947);
   ThetaY_mI40_mI35__472->SetBinContent(309,163.6316);
   ThetaY_mI40_mI35__472->SetBinContent(310,159.4737);
   ThetaY_mI40_mI35__472->SetBinContent(311,159.2632);
   ThetaY_mI40_mI35__472->SetBinContent(312,170.9474);
   ThetaY_mI40_mI35__472->SetBinContent(313,159.7895);
   ThetaY_mI40_mI35__472->SetBinContent(314,155.2105);
   ThetaY_mI40_mI35__472->SetBinContent(315,165.7368);
   ThetaY_mI40_mI35__472->SetBinContent(316,157.8947);
   ThetaY_mI40_mI35__472->SetBinContent(317,160.2105);
   ThetaY_mI40_mI35__472->SetBinContent(318,165.6316);
   ThetaY_mI40_mI35__472->SetBinContent(319,160.1053);
   ThetaY_mI40_mI35__472->SetBinContent(320,163.8947);
   ThetaY_mI40_mI35__472->SetBinContent(321,163.6842);
   ThetaY_mI40_mI35__472->SetBinContent(322,163.0526);
   ThetaY_mI40_mI35__472->SetBinContent(323,153.5789);
   ThetaY_mI40_mI35__472->SetBinContent(324,146.3684);
   ThetaY_mI40_mI35__472->SetBinContent(325,137.6316);
   ThetaY_mI40_mI35__472->SetBinContent(326,125.2105);
   ThetaY_mI40_mI35__472->SetBinContent(327,93.84211);
   ThetaY_mI40_mI35__472->SetBinContent(328,64.57895);
   ThetaY_mI40_mI35__472->SetBinContent(329,29.94737);
   ThetaY_mI40_mI35__472->SetBinContent(330,9.315789);
   ThetaY_mI40_mI35__472->SetBinContent(331,1);
   ThetaY_mI40_mI35__472->SetBinError(300,0.2105263);
   ThetaY_mI40_mI35__472->SetBinError(301,0.7461814);
   ThetaY_mI40_mI35__472->SetBinError(302,1.268629);
   ThetaY_mI40_mI35__472->SetBinError(303,1.782494);
   ThetaY_mI40_mI35__472->SetBinError(304,2.204252);
   ThetaY_mI40_mI35__472->SetBinError(305,2.54162);
   ThetaY_mI40_mI35__472->SetBinError(306,2.654114);
   ThetaY_mI40_mI35__472->SetBinError(307,2.787487);
   ThetaY_mI40_mI35__472->SetBinError(308,2.855233);
   ThetaY_mI40_mI35__472->SetBinError(309,2.934653);
   ThetaY_mI40_mI35__472->SetBinError(310,2.897128);
   ThetaY_mI40_mI35__472->SetBinError(311,2.895215);
   ThetaY_mI40_mI35__472->SetBinError(312,2.999538);
   ThetaY_mI40_mI35__472->SetBinError(313,2.899995);
   ThetaY_mI40_mI35__472->SetBinError(314,2.858142);
   ThetaY_mI40_mI35__472->SetBinError(315,2.953471);
   ThetaY_mI40_mI35__472->SetBinError(316,2.88275);
   ThetaY_mI40_mI35__472->SetBinError(317,2.903814);
   ThetaY_mI40_mI35__472->SetBinError(318,2.952533);
   ThetaY_mI40_mI35__472->SetBinError(319,2.902859);
   ThetaY_mI40_mI35__472->SetBinError(320,2.937012);
   ThetaY_mI40_mI35__472->SetBinError(321,2.935125);
   ThetaY_mI40_mI35__472->SetBinError(322,2.929457);
   ThetaY_mI40_mI35__472->SetBinError(323,2.84308);
   ThetaY_mI40_mI35__472->SetBinError(324,2.775536);
   ThetaY_mI40_mI35__472->SetBinError(325,2.691425);
   ThetaY_mI40_mI35__472->SetBinError(326,2.567105);
   ThetaY_mI40_mI35__472->SetBinError(327,2.222399);
   ThetaY_mI40_mI35__472->SetBinError(328,1.843608);
   ThetaY_mI40_mI35__472->SetBinError(329,1.255459);
   ThetaY_mI40_mI35__472->SetBinError(330,0.7002176);
   ThetaY_mI40_mI35__472->SetBinError(331,0.2294157);
   ThetaY_mI40_mI35__472->SetEntries(71892);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__472->SetLineColor(ci);
   ThetaY_mI40_mI35__472->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__472->SetMarkerColor(ci);
   ThetaY_mI40_mI35__472->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__472->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__472->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__472->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__472->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__472->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__472->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__472->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__472->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__472->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__472->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__472->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__472->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__472->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__472->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__472->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__472->Draw("AEsame");
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
   
   Double_t _fx3158[32] = {
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
   Double_t _fy3158[32] = {
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
   0.006442862,
   0.04826929,
   0.133,
   0.118594,
   0.07848745,
   0.07495069,
   0.09762364,
   0.1221865,
   0.1042608,
   0.07813571,
   0.08881697,
   0.08718929,
   0.1357713,
   0.1278744,
   0.07742461,
   0.1001757,
   0.1073446,
   1};
   Double_t _felx3158[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3158[32] = {
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
   0.005330178,
   0.01672237,
   0.02888623,
   0.02704581,
   0.02152664,
   0.02137024,
   0.02420683,
   0.02717441,
   0.02510086,
   0.02228009,
   0.02436584,
   0.02486713,
   0.03271252,
   0.03650677,
   0.03349918,
   0.05462448,
   0.08889567,
   0.8351731};
   Double_t _fehx3158[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3158[32] = {
   2.316956,
   0.1748263,
   0.06030101,
   0.03052092,
   0.01995312,
   0.01500567,
   0.01376016,
   0.01247447,
   0.01188935,
   0.01125435,
   0.01154787,
   0.01156314,
   0.01077258,
   0.01152504,
   0.01482382,
   0.02384879,
   0.03597512,
   0.0340614,
   0.0284413,
   0.02855762,
   0.03111914,
   0.03402455,
   0.03202865,
   0.02977461,
   0.03219625,
   0.03323548,
   0.04175354,
   0.04881585,
   0.05255626,
   0.09795093,
   0.2491503,
   2.505559};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3158,_fy3158,_felx3158,_fehx3158,_fely3158,_fehy3158);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3158 = new TH1F("Graph_Graph3158","",100,-100,100);
   Graph_Graph3158->SetMinimum(0);
   Graph_Graph3158->SetMaximum(1.5);
   Graph_Graph3158->SetDirectory(0);
   Graph_Graph3158->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3158->SetLineColor(ci);
   Graph_Graph3158->GetXaxis()->SetRange(1,100);
   Graph_Graph3158->GetXaxis()->CenterTitle(true);
   Graph_Graph3158->GetXaxis()->SetLabelFont(42);
   Graph_Graph3158->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3158->GetXaxis()->SetTitleFont(42);
   Graph_Graph3158->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3158->GetYaxis()->CenterTitle(true);
   Graph_Graph3158->GetYaxis()->SetLabelFont(42);
   Graph_Graph3158->GetYaxis()->SetTitleFont(42);
   Graph_Graph3158->GetZaxis()->SetLabelFont(42);
   Graph_Graph3158->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3158->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3158);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,188.0421,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__473 = new TH2D("ThetaY_vs_Y_mI40_mI35__473","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7805,16);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7831,201);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7857,581);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7883,1147);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7909,1754);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7935,2332);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7961,2543);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(7987,2805);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8013,2943);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8039,3109);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8065,3030);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8091,3026);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8117,3248);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8143,3036);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8169,2949);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8195,3149);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8221,3000);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8247,3044);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8273,3147);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8299,3042);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8325,3114);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8351,3110);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8377,3098);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8403,2918);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8429,2781);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8455,2615);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8481,2379);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8507,1783);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8533,1227);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8559,569);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8585,177);
   ThetaY_vs_Y_mI40_mI35__473->SetBinContent(8611,19);
   ThetaY_vs_Y_mI40_mI35__473->SetEntries(71892);
   ThetaY_vs_Y_mI40_mI35__473->SetContour(20);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(0,0);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(1,162.4);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(2,324.8);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(3,487.2);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(4,649.6);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(5,812);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(6,974.4);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(7,1136.8);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(8,1299.2);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(9,1461.6);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(10,1624);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(11,1786.4);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(12,1948.8);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(13,2111.2);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(14,2273.6);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(15,2436);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(16,2598.4);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(17,2760.8);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(18,2923.2);
   ThetaY_vs_Y_mI40_mI35__473->SetContourLevel(19,3085.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__473->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__473->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__473->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__473->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__473->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__473->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__473->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__473->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__473->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__473->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__473->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__473->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__473->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__473->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__473->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__473->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-40_-35","Reco vertices","lpf");
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
