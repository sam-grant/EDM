void S12S18_VerticalDecayAngleRatio_15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:50 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0703567,125,1.336777);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_15_20__846 = new TH1D("S12S18_ThetaY_15_20__846","",630,-1575,1575);
   S12S18_ThetaY_15_20__846->SetBinContent(306,0.01678657);
   S12S18_ThetaY_15_20__846->SetBinContent(307,0.1726619);
   S12S18_ThetaY_15_20__846->SetBinContent(308,0.4916067);
   S12S18_ThetaY_15_20__846->SetBinContent(309,0.7553957);
   S12S18_ThetaY_15_20__846->SetBinContent(310,0.8729017);
   S12S18_ThetaY_15_20__846->SetBinContent(311,1);
   S12S18_ThetaY_15_20__846->SetBinContent(312,0.8944844);
   S12S18_ThetaY_15_20__846->SetBinContent(313,1.045564);
   S12S18_ThetaY_15_20__846->SetBinContent(314,1.079137);
   S12S18_ThetaY_15_20__846->SetBinContent(315,1.059952);
   S12S18_ThetaY_15_20__846->SetBinContent(316,1.019185);
   S12S18_ThetaY_15_20__846->SetBinContent(317,0.9208633);
   S12S18_ThetaY_15_20__846->SetBinContent(318,0.9544365);
   S12S18_ThetaY_15_20__846->SetBinContent(319,0.3141487);
   S12S18_ThetaY_15_20__846->SetBinContent(320,0.02398082);
   S12S18_ThetaY_15_20__846->SetBinContent(321,0.002398082);
   S12S18_ThetaY_15_20__846->SetBinContent(324,0.002398082);
   S12S18_ThetaY_15_20__846->SetBinError(306,0.006344727);
   S12S18_ThetaY_15_20__846->SetBinError(307,0.0203484);
   S12S18_ThetaY_15_20__846->SetBinError(308,0.0343353);
   S12S18_ThetaY_15_20__846->SetBinError(309,0.04256173);
   S12S18_ThetaY_15_20__846->SetBinError(310,0.04575248);
   S12S18_ThetaY_15_20__846->SetBinError(311,0.04897021);
   S12S18_ThetaY_15_20__846->SetBinError(312,0.04631465);
   S12S18_ThetaY_15_20__846->SetBinError(313,0.05007341);
   S12S18_ThetaY_15_20__846->SetBinError(314,0.05087099);
   S12S18_ThetaY_15_20__846->SetBinError(315,0.05041678);
   S12S18_ThetaY_15_20__846->SetBinError(316,0.04943772);
   S12S18_ThetaY_15_20__846->SetBinError(317,0.04699261);
   S12S18_ThetaY_15_20__846->SetBinError(318,0.04784158);
   S12S18_ThetaY_15_20__846->SetBinError(319,0.0274473);
   S12S18_ThetaY_15_20__846->SetBinError(320,0.0075834);
   S12S18_ThetaY_15_20__846->SetBinError(321,0.002398082);
   S12S18_ThetaY_15_20__846->SetBinError(324,0.002398082);
   S12S18_ThetaY_15_20__846->SetMinimum(0);
   S12S18_ThetaY_15_20__846->SetMaximum(1.196064);
   S12S18_ThetaY_15_20__846->SetEntries(4431);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__846->SetLineColor(ci);
   S12S18_ThetaY_15_20__846->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_15_20__846->SetMarkerColor(ci);
   S12S18_ThetaY_15_20__846->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_15_20__846->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_15_20__846->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__846->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__846->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__846->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_15_20__846->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_15_20__846->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__846->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__846->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_15_20__846->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_15_20__846->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_15_20__846->Draw("AE");
   
   TH1D *ThetaY_15_20__847 = new TH1D("ThetaY_15_20__847","",630,-1575,1575);
   ThetaY_15_20__847->SetBinContent(305,0.0001417133);
   ThetaY_15_20__847->SetBinContent(306,0.0540282);
   ThetaY_15_20__847->SetBinContent(307,0.3284206);
   ThetaY_15_20__847->SetBinContent(308,0.6274711);
   ThetaY_15_20__847->SetBinContent(309,0.8092185);
   ThetaY_15_20__847->SetBinContent(310,0.9338199);
   ThetaY_15_20__847->SetBinContent(311,1);
   ThetaY_15_20__847->SetBinContent(312,1.048608);
   ThetaY_15_20__847->SetBinContent(313,1.082761);
   ThetaY_15_20__847->SetBinContent(314,1.08269);
   ThetaY_15_20__847->SetBinContent(315,1.084851);
   ThetaY_15_20__847->SetBinContent(316,1.086162);
   ThetaY_15_20__847->SetBinContent(317,1.087331);
   ThetaY_15_20__847->SetBinContent(318,1.070573);
   ThetaY_15_20__847->SetBinContent(319,1.043116);
   ThetaY_15_20__847->SetBinContent(320,0.999752);
   ThetaY_15_20__847->SetBinContent(321,0.9341033);
   ThetaY_15_20__847->SetBinContent(322,0.8075533);
   ThetaY_15_20__847->SetBinContent(323,0.6170198);
   ThetaY_15_20__847->SetBinContent(324,0.3240983);
   ThetaY_15_20__847->SetBinContent(325,0.05636647);
   ThetaY_15_20__847->SetBinContent(326,7.085666e-05);
   ThetaY_15_20__847->SetBinError(305,7.085666e-05);
   ThetaY_15_20__847->SetBinError(306,0.00138352);
   ThetaY_15_20__847->SetBinError(307,0.003411069);
   ThetaY_15_20__847->SetBinError(308,0.004714897);
   ThetaY_15_20__847->SetBinError(309,0.005354368);
   ThetaY_15_20__847->SetBinError(310,0.005751841);
   ThetaY_15_20__847->SetBinError(311,0.00595217);
   ThetaY_15_20__847->SetBinError(312,0.006095114);
   ThetaY_15_20__847->SetBinError(313,0.006193577);
   ThetaY_15_20__847->SetBinError(314,0.006193374);
   ThetaY_15_20__847->SetBinError(315,0.006199553);
   ThetaY_15_20__847->SetBinError(316,0.006203297);
   ThetaY_15_20__847->SetBinError(317,0.006206635);
   ThetaY_15_20__847->SetBinError(318,0.006158622);
   ThetaY_15_20__847->SetBinError(319,0.006079134);
   ThetaY_15_20__847->SetBinError(320,0.005951432);
   ThetaY_15_20__847->SetBinError(321,0.005752714);
   ThetaY_15_20__847->SetBinError(322,0.005348856);
   ThetaY_15_20__847->SetBinError(323,0.004675466);
   ThetaY_15_20__847->SetBinError(324,0.003388549);
   ThetaY_15_20__847->SetBinError(325,0.001413142);
   ThetaY_15_20__847->SetBinError(326,5.010322e-05);
   ThetaY_15_20__847->SetEntries(453822);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__847->SetLineColor(ci);
   ThetaY_15_20__847->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__847->SetMarkerColor(ci);
   ThetaY_15_20__847->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__847->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__847->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__847->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__847->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__847->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__847->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__847->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__847->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__847->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__847->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__847->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__847->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__847->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__847->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__847->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__847->Draw("AEsame");
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
   
   Double_t _fx3283[22] = {
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
   Double_t _fy3283[22] = {
   0,
   0.3107002,
   0.525734,
   0.783473,
   0.933488,
   0.9347645,
   1,
   0.853021,
   0.9656461,
   0.9967183,
   0.9770486,
   0.938336,
   0.8469026,
   0.8915191,
   0.3011636,
   0.02398676,
   0.002567255,
   0,
   0,
   0.00739924,
   0,
   0};
   Double_t _felx3283[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3283[22] = {
   0,
   0.1148104,
   0.06205049,
   0.05498949,
   0.05292829,
   0.04930855,
   0.04930999,
   0.04442454,
   0.04655617,
   0.04731209,
   0.04678923,
   0.04581163,
   0.04346823,
   0.04496153,
   0.02633714,
   0.007457955,
   0.002123767,
   0,
   0,
   0.006121121,
   0,
   0};
   Double_t _fehx3283[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3283[22] = {
   39.56234,
   0.1679376,
   0.06985261,
   0.05899482,
   0.05602036,
   0.05198278,
   0.05180541,
   0.04680224,
   0.04885837,
   0.04961466,
   0.04908701,
   0.04810636,
   0.04576017,
   0.04728989,
   0.02874857,
   0.01023762,
   0.005903841,
   0.005467253,
   0.007155611,
   0.01701782,
   0.07837062,
   102.248};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3283,_fy3283,_felx3283,_fehx3283,_fely3283,_fehy3283);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3283 = new TH1F("Graph_Graph3283","",100,-100,100);
   Graph_Graph3283->SetMinimum(0);
   Graph_Graph3283->SetMaximum(1.5);
   Graph_Graph3283->SetDirectory(0);
   Graph_Graph3283->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3283->SetLineColor(ci);
   Graph_Graph3283->GetXaxis()->SetRange(1,100);
   Graph_Graph3283->GetXaxis()->CenterTitle(true);
   Graph_Graph3283->GetXaxis()->SetLabelFont(42);
   Graph_Graph3283->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3283->GetXaxis()->SetTitleFont(42);
   Graph_Graph3283->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3283->GetYaxis()->CenterTitle(true);
   Graph_Graph3283->GetYaxis()->SetLabelFont(42);
   Graph_Graph3283->GetYaxis()->SetTitleFont(42);
   Graph_Graph3283->GetZaxis()->SetLabelFont(42);
   Graph_Graph3283->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3283->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3283);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.196064,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__848 = new TH2D("ThetaY_vs_Y_15_20__848","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__848->SetBinContent(7946,4);
   ThetaY_vs_Y_15_20__848->SetBinContent(7972,1525);
   ThetaY_vs_Y_15_20__848->SetBinContent(7998,9270);
   ThetaY_vs_Y_15_20__848->SetBinContent(8024,17711);
   ThetaY_vs_Y_15_20__848->SetBinContent(8050,22841);
   ThetaY_vs_Y_15_20__848->SetBinContent(8076,26358);
   ThetaY_vs_Y_15_20__848->SetBinContent(8102,28226);
   ThetaY_vs_Y_15_20__848->SetBinContent(8128,29598);
   ThetaY_vs_Y_15_20__848->SetBinContent(8154,30562);
   ThetaY_vs_Y_15_20__848->SetBinContent(8180,30560);
   ThetaY_vs_Y_15_20__848->SetBinContent(8206,30621);
   ThetaY_vs_Y_15_20__848->SetBinContent(8232,30658);
   ThetaY_vs_Y_15_20__848->SetBinContent(8258,30691);
   ThetaY_vs_Y_15_20__848->SetBinContent(8284,30218);
   ThetaY_vs_Y_15_20__848->SetBinContent(8310,29443);
   ThetaY_vs_Y_15_20__848->SetBinContent(8336,28219);
   ThetaY_vs_Y_15_20__848->SetBinContent(8362,26366);
   ThetaY_vs_Y_15_20__848->SetBinContent(8388,22794);
   ThetaY_vs_Y_15_20__848->SetBinContent(8414,17416);
   ThetaY_vs_Y_15_20__848->SetBinContent(8440,9148);
   ThetaY_vs_Y_15_20__848->SetBinContent(8466,1591);
   ThetaY_vs_Y_15_20__848->SetBinContent(8492,2);
   ThetaY_vs_Y_15_20__848->SetEntries(453822);
   ThetaY_vs_Y_15_20__848->SetContour(20);
   ThetaY_vs_Y_15_20__848->SetContourLevel(0,0);
   ThetaY_vs_Y_15_20__848->SetContourLevel(1,1534.55);
   ThetaY_vs_Y_15_20__848->SetContourLevel(2,3069.1);
   ThetaY_vs_Y_15_20__848->SetContourLevel(3,4603.65);
   ThetaY_vs_Y_15_20__848->SetContourLevel(4,6138.2);
   ThetaY_vs_Y_15_20__848->SetContourLevel(5,7672.75);
   ThetaY_vs_Y_15_20__848->SetContourLevel(6,9207.3);
   ThetaY_vs_Y_15_20__848->SetContourLevel(7,10741.85);
   ThetaY_vs_Y_15_20__848->SetContourLevel(8,12276.4);
   ThetaY_vs_Y_15_20__848->SetContourLevel(9,13810.95);
   ThetaY_vs_Y_15_20__848->SetContourLevel(10,15345.5);
   ThetaY_vs_Y_15_20__848->SetContourLevel(11,16880.05);
   ThetaY_vs_Y_15_20__848->SetContourLevel(12,18414.6);
   ThetaY_vs_Y_15_20__848->SetContourLevel(13,19949.15);
   ThetaY_vs_Y_15_20__848->SetContourLevel(14,21483.7);
   ThetaY_vs_Y_15_20__848->SetContourLevel(15,23018.25);
   ThetaY_vs_Y_15_20__848->SetContourLevel(16,24552.8);
   ThetaY_vs_Y_15_20__848->SetContourLevel(17,26087.35);
   ThetaY_vs_Y_15_20__848->SetContourLevel(18,27621.9);
   ThetaY_vs_Y_15_20__848->SetContourLevel(19,29156.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__848->SetLineColor(ci);
   ThetaY_vs_Y_15_20__848->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__848->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__848->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__848->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__848->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__848->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__848->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__848->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__848->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__848->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__848->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__848->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__848->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__848->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__848->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_15_20","Reco vertices","lpf");
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
