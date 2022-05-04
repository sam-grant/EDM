void S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0648538,125,1.232222);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_15_20__789 = new TH1D("S18_ThetaY_15_20__789","",630,-1575,1575);
   S18_ThetaY_15_20__789->SetBinContent(306,0.01709402);
   S18_ThetaY_15_20__789->SetBinContent(307,0.1367521);
   S18_ThetaY_15_20__789->SetBinContent(308,0.4273504);
   S18_ThetaY_15_20__789->SetBinContent(309,0.6923077);
   S18_ThetaY_15_20__789->SetBinContent(310,0.7564103);
   S18_ThetaY_15_20__789->SetBinContent(311,0.8119658);
   S18_ThetaY_15_20__789->SetBinContent(312,0.8247863);
   S18_ThetaY_15_20__789->SetBinContent(313,0.957265);
   S18_ThetaY_15_20__789->SetBinContent(314,0.8931624);
   S18_ThetaY_15_20__789->SetBinContent(315,1);
   S18_ThetaY_15_20__789->SetBinContent(316,0.9273504);
   S18_ThetaY_15_20__789->SetBinContent(317,0.8760684);
   S18_ThetaY_15_20__789->SetBinContent(318,0.8717949);
   S18_ThetaY_15_20__789->SetBinContent(319,0.2991453);
   S18_ThetaY_15_20__789->SetBinContent(320,0.008547009);
   S18_ThetaY_15_20__789->SetBinContent(321,0.004273504);
   S18_ThetaY_15_20__789->SetBinContent(324,0.004273504);
   S18_ThetaY_15_20__789->SetBinError(306,0.008547009);
   S18_ThetaY_15_20__789->SetBinError(307,0.02417459);
   S18_ThetaY_15_20__789->SetBinError(308,0.04273504);
   S18_ThetaY_15_20__789->SetBinError(309,0.05439283);
   S18_ThetaY_15_20__789->SetBinError(310,0.05685528);
   S18_ThetaY_15_20__789->SetBinError(311,0.05890619);
   S18_ThetaY_15_20__789->SetBinError(312,0.05936942);
   S18_ThetaY_15_20__789->SetBinError(313,0.06395996);
   S18_ThetaY_15_20__789->SetBinError(314,0.06178133);
   S18_ThetaY_15_20__789->SetBinError(315,0.06537205);
   S18_ThetaY_15_20__789->SetBinError(316,0.06295265);
   S18_ThetaY_15_20__789->SetBinError(317,0.06118727);
   S18_ThetaY_15_20__789->SetBinError(318,0.06103785);
   S18_ThetaY_15_20__789->SetBinError(319,0.0357547);
   S18_ThetaY_15_20__789->SetBinError(320,0.006043648);
   S18_ThetaY_15_20__789->SetBinError(321,0.004273504);
   S18_ThetaY_15_20__789->SetBinError(324,0.004273504);
   S18_ThetaY_15_20__789->SetMinimum(0);
   S18_ThetaY_15_20__789->SetMaximum(1.102515);
   S18_ThetaY_15_20__789->SetEntries(2225);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__789->SetLineColor(ci);
   S18_ThetaY_15_20__789->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_15_20__789->SetMarkerColor(ci);
   S18_ThetaY_15_20__789->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_15_20__789->GetXaxis()->SetRange(296,335);
   S18_ThetaY_15_20__789->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__789->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__789->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__789->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_15_20__789->GetYaxis()->CenterTitle(true);
   S18_ThetaY_15_20__789->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__789->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__789->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_15_20__789->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_15_20__789->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_15_20__789->Draw("AE");
   
   TH1D *ThetaY_15_20__790 = new TH1D("ThetaY_15_20__790","",630,-1575,1575);
   ThetaY_15_20__790->SetBinContent(305,0.0001306293);
   ThetaY_15_20__790->SetBinContent(306,0.04980242);
   ThetaY_15_20__790->SetBinContent(307,0.3027334);
   ThetaY_15_20__790->SetBinContent(308,0.5783939);
   ThetaY_15_20__790->SetBinContent(309,0.745926);
   ThetaY_15_20__790->SetBinContent(310,0.8607818);
   ThetaY_15_20__790->SetBinContent(311,0.9217857);
   ThetaY_15_20__790->SetBinContent(312,0.9665916);
   ThetaY_15_20__790->SetBinContent(313,0.9980732);
   ThetaY_15_20__790->SetBinContent(314,0.9980079);
   ThetaY_15_20__790->SetBinContent(315,1);
   ThetaY_15_20__790->SetBinContent(316,1.001208);
   ThetaY_15_20__790->SetBinContent(317,1.002286);
   ThetaY_15_20__790->SetBinContent(318,0.9868391);
   ThetaY_15_20__790->SetBinContent(319,0.9615297);
   ThetaY_15_20__790->SetBinContent(320,0.9215571);
   ThetaY_15_20__790->SetBinContent(321,0.8610431);
   ThetaY_15_20__790->SetBinContent(322,0.7443911);
   ThetaY_15_20__790->SetBinContent(323,0.56876);
   ThetaY_15_20__790->SetBinContent(324,0.2987492);
   ThetaY_15_20__790->SetBinContent(325,0.05195781);
   ThetaY_15_20__790->SetBinContent(326,6.531465e-05);
   ThetaY_15_20__790->SetBinError(305,6.531465e-05);
   ThetaY_15_20__790->SetBinError(306,0.001275309);
   ThetaY_15_20__790->SetBinError(307,0.003144275);
   ThetaY_15_20__790->SetBinError(308,0.004346125);
   ThetaY_15_20__790->SetBinError(309,0.00493558);
   ThetaY_15_20__790->SetBinError(310,0.005301965);
   ThetaY_15_20__790->SetBinError(311,0.005486625);
   ThetaY_15_20__790->SetBinError(312,0.005618389);
   ThetaY_15_20__790->SetBinError(313,0.005709151);
   ThetaY_15_20__790->SetBinError(314,0.005708964);
   ThetaY_15_20__790->SetBinError(315,0.005714659);
   ThetaY_15_20__790->SetBinError(316,0.00571811);
   ThetaY_15_20__790->SetBinError(317,0.005721187);
   ThetaY_15_20__790->SetBinError(318,0.005676929);
   ThetaY_15_20__790->SetBinError(319,0.005603658);
   ThetaY_15_20__790->SetBinError(320,0.005485945);
   ThetaY_15_20__790->SetBinError(321,0.00530277);
   ThetaY_15_20__790->SetBinError(322,0.004930499);
   ThetaY_15_20__790->SetBinError(323,0.004309777);
   ThetaY_15_20__790->SetBinError(324,0.003123516);
   ThetaY_15_20__790->SetBinError(325,0.001302614);
   ThetaY_15_20__790->SetBinError(326,4.618443e-05);
   ThetaY_15_20__790->SetEntries(453822);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__790->SetLineColor(ci);
   ThetaY_15_20__790->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__790->SetMarkerColor(ci);
   ThetaY_15_20__790->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__790->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__790->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__790->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__790->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__790->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__790->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__790->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__790->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__790->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__790->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__790->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__790->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__790->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__790->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__790->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__790->Draw("AEsame");
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
   
   Double_t _fx3264[22] = {
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
   52.5};
   Double_t _fy3264[22] = {
   0,
   0.3432367,
   0.4517246,
   0.7388571,
   0.9281185,
   0.8787479,
   0.8808618,
   0.8532935,
   0.959113,
   0.8949452,
   1,
   0.9262312,
   0.8740702,
   0.8834215,
   0.311114,
   0.00927453,
   0.004963171,
   0,
   0,
   0.01430465,
   0,
   0};
   Double_t _felx3264[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3264[22] = {
   0,
   0.1644386,
   0.07956781,
   0.07396791,
   0.07310089,
   0.06620829,
   0.06406161,
   0.06156693,
   0.06426881,
   0.06206529,
   0.06557342,
   0.06304918,
   0.06120032,
   0.06200843,
   0.03713966,
   0.005990619,
   0.004105794,
   0,
   0,
   0.01183372,
   0,
   0};
   Double_t _fehx3264[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3264[22] = {
   76.48427,
   0.2720307,
   0.09500009,
   0.08177602,
   0.07910189,
   0.07139775,
   0.06890148,
   0.06618011,
   0.068729,
   0.0665286,
   0.07002333,
   0.06749655,
   0.06564529,
   0.06652371,
   0.04186326,
   0.01223346,
   0.01141366,
   0.01056962,
   0.01383366,
   0.03289986,
   0.1515108,
   197.672};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3264,_fy3264,_felx3264,_fehx3264,_fely3264,_fehy3264);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3264 = new TH1F("Graph_Graph3264","",100,-100,100);
   Graph_Graph3264->SetMinimum(0);
   Graph_Graph3264->SetMaximum(1.5);
   Graph_Graph3264->SetDirectory(0);
   Graph_Graph3264->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3264->SetLineColor(ci);
   Graph_Graph3264->GetXaxis()->SetRange(1,100);
   Graph_Graph3264->GetXaxis()->CenterTitle(true);
   Graph_Graph3264->GetXaxis()->SetLabelFont(42);
   Graph_Graph3264->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3264->GetXaxis()->SetTitleFont(42);
   Graph_Graph3264->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3264->GetYaxis()->CenterTitle(true);
   Graph_Graph3264->GetYaxis()->SetLabelFont(42);
   Graph_Graph3264->GetYaxis()->SetTitleFont(42);
   Graph_Graph3264->GetZaxis()->SetLabelFont(42);
   Graph_Graph3264->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3264->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3264);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.102515,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__791 = new TH2D("ThetaY_vs_Y_15_20__791","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__791->SetBinContent(7946,4);
   ThetaY_vs_Y_15_20__791->SetBinContent(7972,1525);
   ThetaY_vs_Y_15_20__791->SetBinContent(7998,9270);
   ThetaY_vs_Y_15_20__791->SetBinContent(8024,17711);
   ThetaY_vs_Y_15_20__791->SetBinContent(8050,22841);
   ThetaY_vs_Y_15_20__791->SetBinContent(8076,26358);
   ThetaY_vs_Y_15_20__791->SetBinContent(8102,28226);
   ThetaY_vs_Y_15_20__791->SetBinContent(8128,29598);
   ThetaY_vs_Y_15_20__791->SetBinContent(8154,30562);
   ThetaY_vs_Y_15_20__791->SetBinContent(8180,30560);
   ThetaY_vs_Y_15_20__791->SetBinContent(8206,30621);
   ThetaY_vs_Y_15_20__791->SetBinContent(8232,30658);
   ThetaY_vs_Y_15_20__791->SetBinContent(8258,30691);
   ThetaY_vs_Y_15_20__791->SetBinContent(8284,30218);
   ThetaY_vs_Y_15_20__791->SetBinContent(8310,29443);
   ThetaY_vs_Y_15_20__791->SetBinContent(8336,28219);
   ThetaY_vs_Y_15_20__791->SetBinContent(8362,26366);
   ThetaY_vs_Y_15_20__791->SetBinContent(8388,22794);
   ThetaY_vs_Y_15_20__791->SetBinContent(8414,17416);
   ThetaY_vs_Y_15_20__791->SetBinContent(8440,9148);
   ThetaY_vs_Y_15_20__791->SetBinContent(8466,1591);
   ThetaY_vs_Y_15_20__791->SetBinContent(8492,2);
   ThetaY_vs_Y_15_20__791->SetEntries(453822);
   ThetaY_vs_Y_15_20__791->SetContour(20);
   ThetaY_vs_Y_15_20__791->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__791->SetContourLevel(1,1534.55);
   ThetaY_vs_Y_15_20__791->SetContourLevel(2,3069.1);
   ThetaY_vs_Y_15_20__791->SetContourLevel(3,4603.65);
   ThetaY_vs_Y_15_20__791->SetContourLevel(4,6138.2);
   ThetaY_vs_Y_15_20__791->SetContourLevel(5,7672.75);
   ThetaY_vs_Y_15_20__791->SetContourLevel(6,9207.3);
   ThetaY_vs_Y_15_20__791->SetContourLevel(7,10741.85);
   ThetaY_vs_Y_15_20__791->SetContourLevel(8,12276.4);
   ThetaY_vs_Y_15_20__791->SetContourLevel(9,13810.95);
   ThetaY_vs_Y_15_20__791->SetContourLevel(10,15345.5);
   ThetaY_vs_Y_15_20__791->SetContourLevel(11,16880.05);
   ThetaY_vs_Y_15_20__791->SetContourLevel(12,18414.6);
   ThetaY_vs_Y_15_20__791->SetContourLevel(13,19949.15);
   ThetaY_vs_Y_15_20__791->SetContourLevel(14,21483.7);
   ThetaY_vs_Y_15_20__791->SetContourLevel(15,23018.25);
   ThetaY_vs_Y_15_20__791->SetContourLevel(16,24552.8);
   ThetaY_vs_Y_15_20__791->SetContourLevel(17,26087.35);
   ThetaY_vs_Y_15_20__791->SetContourLevel(18,27621.9);
   ThetaY_vs_Y_15_20__791->SetContourLevel(19,29156.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__791->SetLineColor(ci);
   ThetaY_vs_Y_15_20__791->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__791->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__791->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__791->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__791->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__791->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__791->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__791->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__791->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__791->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__791->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__791->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__791->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__791->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__791->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_15_20","Reco vertices","lpf");
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
