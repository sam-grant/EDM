void S12_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:39 2022) by ROOT version 6.24/06
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
   
   TH1D *S12_ThetaY_mI40_mI35__357 = new TH1D("S12_ThetaY_mI40_mI35__357","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__357->SetBinContent(315,5);
   S12_ThetaY_mI40_mI35__357->SetBinContent(316,11);
   S12_ThetaY_mI40_mI35__357->SetBinContent(317,10);
   S12_ThetaY_mI40_mI35__357->SetBinContent(318,9);
   S12_ThetaY_mI40_mI35__357->SetBinContent(319,5);
   S12_ThetaY_mI40_mI35__357->SetBinContent(320,10);
   S12_ThetaY_mI40_mI35__357->SetBinContent(321,11);
   S12_ThetaY_mI40_mI35__357->SetBinContent(322,6);
   S12_ThetaY_mI40_mI35__357->SetBinContent(323,5);
   S12_ThetaY_mI40_mI35__357->SetBinContent(324,7);
   S12_ThetaY_mI40_mI35__357->SetBinContent(325,4);
   S12_ThetaY_mI40_mI35__357->SetBinContent(326,12);
   S12_ThetaY_mI40_mI35__357->SetBinContent(327,6);
   S12_ThetaY_mI40_mI35__357->SetBinContent(328,2);
   S12_ThetaY_mI40_mI35__357->SetBinContent(329,1);
   S12_ThetaY_mI40_mI35__357->SetBinContent(330,1);
   S12_ThetaY_mI40_mI35__357->SetBinContent(331,1);
   S12_ThetaY_mI40_mI35__357->SetBinError(315,2.236068);
   S12_ThetaY_mI40_mI35__357->SetBinError(316,3.316625);
   S12_ThetaY_mI40_mI35__357->SetBinError(317,3.162278);
   S12_ThetaY_mI40_mI35__357->SetBinError(318,3);
   S12_ThetaY_mI40_mI35__357->SetBinError(319,2.236068);
   S12_ThetaY_mI40_mI35__357->SetBinError(320,3.162278);
   S12_ThetaY_mI40_mI35__357->SetBinError(321,3.316625);
   S12_ThetaY_mI40_mI35__357->SetBinError(322,2.44949);
   S12_ThetaY_mI40_mI35__357->SetBinError(323,2.236068);
   S12_ThetaY_mI40_mI35__357->SetBinError(324,2.645751);
   S12_ThetaY_mI40_mI35__357->SetBinError(325,2);
   S12_ThetaY_mI40_mI35__357->SetBinError(326,3.464102);
   S12_ThetaY_mI40_mI35__357->SetBinError(327,2.44949);
   S12_ThetaY_mI40_mI35__357->SetBinError(328,1.414214);
   S12_ThetaY_mI40_mI35__357->SetBinError(329,1);
   S12_ThetaY_mI40_mI35__357->SetBinError(330,1);
   S12_ThetaY_mI40_mI35__357->SetBinError(331,1);
   S12_ThetaY_mI40_mI35__357->SetMinimum(0);
   S12_ThetaY_mI40_mI35__357->SetMaximum(188.0421);
   S12_ThetaY_mI40_mI35__357->SetEntries(106);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__357->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__357->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__357->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__357->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__357->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__357->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__357->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__357->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__357->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__357->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__357->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__357->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__357->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__357->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__357->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__357->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__358 = new TH1D("ThetaY_mI40_mI35__358","",630,-1575,1575);
   ThetaY_mI40_mI35__358->SetBinContent(300,0.8421053);
   ThetaY_mI40_mI35__358->SetBinContent(301,10.57895);
   ThetaY_mI40_mI35__358->SetBinContent(302,30.57895);
   ThetaY_mI40_mI35__358->SetBinContent(303,60.36842);
   ThetaY_mI40_mI35__358->SetBinContent(304,92.31579);
   ThetaY_mI40_mI35__358->SetBinContent(305,122.7368);
   ThetaY_mI40_mI35__358->SetBinContent(306,133.8421);
   ThetaY_mI40_mI35__358->SetBinContent(307,147.6316);
   ThetaY_mI40_mI35__358->SetBinContent(308,154.8947);
   ThetaY_mI40_mI35__358->SetBinContent(309,163.6316);
   ThetaY_mI40_mI35__358->SetBinContent(310,159.4737);
   ThetaY_mI40_mI35__358->SetBinContent(311,159.2632);
   ThetaY_mI40_mI35__358->SetBinContent(312,170.9474);
   ThetaY_mI40_mI35__358->SetBinContent(313,159.7895);
   ThetaY_mI40_mI35__358->SetBinContent(314,155.2105);
   ThetaY_mI40_mI35__358->SetBinContent(315,165.7368);
   ThetaY_mI40_mI35__358->SetBinContent(316,157.8947);
   ThetaY_mI40_mI35__358->SetBinContent(317,160.2105);
   ThetaY_mI40_mI35__358->SetBinContent(318,165.6316);
   ThetaY_mI40_mI35__358->SetBinContent(319,160.1053);
   ThetaY_mI40_mI35__358->SetBinContent(320,163.8947);
   ThetaY_mI40_mI35__358->SetBinContent(321,163.6842);
   ThetaY_mI40_mI35__358->SetBinContent(322,163.0526);
   ThetaY_mI40_mI35__358->SetBinContent(323,153.5789);
   ThetaY_mI40_mI35__358->SetBinContent(324,146.3684);
   ThetaY_mI40_mI35__358->SetBinContent(325,137.6316);
   ThetaY_mI40_mI35__358->SetBinContent(326,125.2105);
   ThetaY_mI40_mI35__358->SetBinContent(327,93.84211);
   ThetaY_mI40_mI35__358->SetBinContent(328,64.57895);
   ThetaY_mI40_mI35__358->SetBinContent(329,29.94737);
   ThetaY_mI40_mI35__358->SetBinContent(330,9.315789);
   ThetaY_mI40_mI35__358->SetBinContent(331,1);
   ThetaY_mI40_mI35__358->SetBinError(300,0.2105263);
   ThetaY_mI40_mI35__358->SetBinError(301,0.7461814);
   ThetaY_mI40_mI35__358->SetBinError(302,1.268629);
   ThetaY_mI40_mI35__358->SetBinError(303,1.782494);
   ThetaY_mI40_mI35__358->SetBinError(304,2.204252);
   ThetaY_mI40_mI35__358->SetBinError(305,2.54162);
   ThetaY_mI40_mI35__358->SetBinError(306,2.654114);
   ThetaY_mI40_mI35__358->SetBinError(307,2.787487);
   ThetaY_mI40_mI35__358->SetBinError(308,2.855233);
   ThetaY_mI40_mI35__358->SetBinError(309,2.934653);
   ThetaY_mI40_mI35__358->SetBinError(310,2.897128);
   ThetaY_mI40_mI35__358->SetBinError(311,2.895215);
   ThetaY_mI40_mI35__358->SetBinError(312,2.999538);
   ThetaY_mI40_mI35__358->SetBinError(313,2.899995);
   ThetaY_mI40_mI35__358->SetBinError(314,2.858142);
   ThetaY_mI40_mI35__358->SetBinError(315,2.953471);
   ThetaY_mI40_mI35__358->SetBinError(316,2.88275);
   ThetaY_mI40_mI35__358->SetBinError(317,2.903814);
   ThetaY_mI40_mI35__358->SetBinError(318,2.952533);
   ThetaY_mI40_mI35__358->SetBinError(319,2.902859);
   ThetaY_mI40_mI35__358->SetBinError(320,2.937012);
   ThetaY_mI40_mI35__358->SetBinError(321,2.935125);
   ThetaY_mI40_mI35__358->SetBinError(322,2.929457);
   ThetaY_mI40_mI35__358->SetBinError(323,2.84308);
   ThetaY_mI40_mI35__358->SetBinError(324,2.775536);
   ThetaY_mI40_mI35__358->SetBinError(325,2.691425);
   ThetaY_mI40_mI35__358->SetBinError(326,2.567105);
   ThetaY_mI40_mI35__358->SetBinError(327,2.222399);
   ThetaY_mI40_mI35__358->SetBinError(328,1.843608);
   ThetaY_mI40_mI35__358->SetBinError(329,1.255459);
   ThetaY_mI40_mI35__358->SetBinError(330,0.7002176);
   ThetaY_mI40_mI35__358->SetBinError(331,0.2294157);
   ThetaY_mI40_mI35__358->SetEntries(71892);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__358->SetLineColor(ci);
   ThetaY_mI40_mI35__358->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__358->SetMarkerColor(ci);
   ThetaY_mI40_mI35__358->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__358->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__358->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__358->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__358->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__358->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__358->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__358->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__358->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__358->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__358->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__358->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__358->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__358->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__358->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__358->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__358->Draw("AEsame");
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
   
   Double_t _fx3120[32] = {
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
   Double_t _fy3120[32] = {
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
   0.03016831,
   0.06966667,
   0.06241787,
   0.05433746,
   0.03122945,
   0.06101477,
   0.06720257,
   0.03679793,
   0.03255655,
   0.04782452,
   0.0290631,
   0.09583859,
   0.06393718,
   0.03096985,
   0.03339192,
   0.1073446,
   1};
   Double_t _felx3120[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3120[32] = {
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
   0.01303944,
   0.02071679,
   0.01943281,
   0.01779402,
   0.0134984,
   0.01899534,
   0.01998285,
   0.01460819,
   0.01407242,
   0.01765622,
   0.0139176,
   0.02733971,
   0.02539753,
   0.02001388,
   0.02763258,
   0.08889567,
   0.8351731};
   Double_t _fehx3120[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3120[32] = {
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
   0.01186515,
   0.02043586,
   0.02804315,
   0.02669579,
   0.02486702,
   0.02115566,
   0.02609432,
   0.02704882,
   0.02201243,
   0.02205596,
   0.02580872,
   0.02301133,
   0.03654391,
   0.03829062,
   0.04092428,
   0.07700846,
   0.2491503,
   2.505559};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3120,_fy3120,_felx3120,_fehx3120,_fely3120,_fehy3120);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3120 = new TH1F("Graph_Graph3120","",100,-100,100);
   Graph_Graph3120->SetMinimum(0);
   Graph_Graph3120->SetMaximum(1.5);
   Graph_Graph3120->SetDirectory(0);
   Graph_Graph3120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3120->SetLineColor(ci);
   Graph_Graph3120->GetXaxis()->SetRange(1,100);
   Graph_Graph3120->GetXaxis()->CenterTitle(true);
   Graph_Graph3120->GetXaxis()->SetLabelFont(42);
   Graph_Graph3120->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3120->GetXaxis()->SetTitleFont(42);
   Graph_Graph3120->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3120->GetYaxis()->CenterTitle(true);
   Graph_Graph3120->GetYaxis()->SetLabelFont(42);
   Graph_Graph3120->GetYaxis()->SetTitleFont(42);
   Graph_Graph3120->GetZaxis()->SetLabelFont(42);
   Graph_Graph3120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3120->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3120);
   
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__359 = new TH2D("ThetaY_vs_Y_mI40_mI35__359","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7805,16);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7831,201);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7857,581);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7883,1147);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7909,1754);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7935,2332);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7961,2543);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(7987,2805);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8013,2943);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8039,3109);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8065,3030);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8091,3026);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8117,3248);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8143,3036);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8169,2949);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8195,3149);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8221,3000);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8247,3044);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8273,3147);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8299,3042);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8325,3114);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8351,3110);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8377,3098);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8403,2918);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8429,2781);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8455,2615);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8481,2379);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8507,1783);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8533,1227);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8559,569);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8585,177);
   ThetaY_vs_Y_mI40_mI35__359->SetBinContent(8611,19);
   ThetaY_vs_Y_mI40_mI35__359->SetEntries(71892);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__359->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__359->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__359->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__359->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__359->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__359->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__359->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__359->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__359->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__359->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__359->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__359->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__359->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__359->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__359->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__359->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-40_-35","Reco vertices","lpf");
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
