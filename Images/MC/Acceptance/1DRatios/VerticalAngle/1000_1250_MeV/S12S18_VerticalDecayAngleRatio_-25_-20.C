void S12S18_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-0.08801183,125,1.672225);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__822 = new TH1D("S12S18_ThetaY_mI25_mI20__822","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(312,0.08849558);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(313,0.7610619);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(314,1.265487);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(315,1.331858);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(316,1.207965);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(317,1.115044);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(318,1.309735);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(319,1.225664);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(320,1.123894);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(321,1.141593);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(322,1);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(323,0.6548673);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(324,0.2654867);
   S12S18_ThetaY_mI25_mI20__822->SetBinContent(325,0.03539823);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(312,0.01978821);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(313,0.05803043);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(314,0.0748298);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(315,0.07676704);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(316,0.07310934);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(317,0.07024119);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(318,0.07612677);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(319,0.073643);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(320,0.07051937);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(321,0.07107247);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(322,0.06651901);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(323,0.05382976);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(324,0.03427419);
   S12S18_ThetaY_mI25_mI20__822->SetBinError(325,0.01251516);
   S12S18_ThetaY_mI25_mI20__822->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__822->SetMaximum(1.496201);
   S12S18_ThetaY_mI25_mI20__822->SetEntries(2831);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__822->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__822->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__822->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__822->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__822->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__822->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__822->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__822->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__822->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__822->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__822->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__822->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__822->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__822->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__822->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__822->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__823 = new TH1D("ThetaY_mI25_mI20__823","",630,-1575,1575);
   ThetaY_mI25_mI20__823->SetBinContent(305,6.527415e-05);
   ThetaY_mI25_mI20__823->SetBinContent(306,0.06977807);
   ThetaY_mI25_mI20__823->SetBinContent(307,0.4026762);
   ThetaY_mI25_mI20__823->SetBinContent(308,0.7902089);
   ThetaY_mI25_mI20__823->SetBinContent(309,1.008355);
   ThetaY_mI25_mI20__823->SetBinContent(310,1.160901);
   ThetaY_mI25_mI20__823->SetBinContent(311,1.252611);
   ThetaY_mI25_mI20__823->SetBinContent(312,1.308943);
   ThetaY_mI25_mI20__823->SetBinContent(313,1.335444);
   ThetaY_mI25_mI20__823->SetBinContent(314,1.3453);
   ThetaY_mI25_mI20__823->SetBinContent(315,1.35705);
   ThetaY_mI25_mI20__823->SetBinContent(316,1.360183);
   ThetaY_mI25_mI20__823->SetBinContent(317,1.347715);
   ThetaY_mI25_mI20__823->SetBinContent(318,1.359269);
   ThetaY_mI25_mI20__823->SetBinContent(319,1.288903);
   ThetaY_mI25_mI20__823->SetBinContent(320,1.250653);
   ThetaY_mI25_mI20__823->SetBinContent(321,1.15953);
   ThetaY_mI25_mI20__823->SetBinContent(322,1);
   ThetaY_mI25_mI20__823->SetBinContent(323,0.7779373);
   ThetaY_mI25_mI20__823->SetBinContent(324,0.4098564);
   ThetaY_mI25_mI20__823->SetBinContent(325,0.06879896);
   ThetaY_mI25_mI20__823->SetBinContent(326,0.0001305483);
   ThetaY_mI25_mI20__823->SetBinError(305,6.527415e-05);
   ThetaY_mI25_mI20__823->SetBinError(306,0.002134175);
   ThetaY_mI25_mI20__823->SetBinError(307,0.005126826);
   ThetaY_mI25_mI20__823->SetBinError(308,0.007181937);
   ThetaY_mI25_mI20__823->SetBinError(309,0.008112923);
   ThetaY_mI25_mI20__823->SetBinError(310,0.008704988);
   ThetaY_mI25_mI20__823->SetBinError(311,0.009042296);
   ThetaY_mI25_mI20__823->SetBinError(312,0.009243382);
   ThetaY_mI25_mI20__823->SetBinError(313,0.009336486);
   ThetaY_mI25_mI20__823->SetBinError(314,0.009370877);
   ThetaY_mI25_mI20__823->SetBinError(315,0.009411709);
   ThetaY_mI25_mI20__823->SetBinError(316,0.009422567);
   ThetaY_mI25_mI20__823->SetBinError(317,0.009379285);
   ThetaY_mI25_mI20__823->SetBinError(318,0.009419402);
   ThetaY_mI25_mI20__823->SetBinError(319,0.009172354);
   ThetaY_mI25_mI20__823->SetBinError(320,0.009035225);
   ThetaY_mI25_mI20__823->SetBinError(321,0.008699847);
   ThetaY_mI25_mI20__823->SetBinError(322,0.008079242);
   ThetaY_mI25_mI20__823->SetBinError(323,0.007125953);
   ThetaY_mI25_mI20__823->SetBinError(324,0.005172333);
   ThetaY_mI25_mI20__823->SetBinError(325,0.002119149);
   ThetaY_mI25_mI20__823->SetBinError(326,9.231159e-05);
   ThetaY_mI25_mI20__823->SetEntries(307232);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__823->SetLineColor(ci);
   ThetaY_mI25_mI20__823->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__823->SetMarkerColor(ci);
   ThetaY_mI25_mI20__823->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__823->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__823->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__823->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__823->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__823->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__823->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__823->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__823->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__823->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__823->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__823->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__823->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__823->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__823->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__823->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__823->Draw("AEsame");
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
   
   Double_t _fx3275[22] = {
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
   Double_t _fy3275[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06760845,
   0.5698944,
   0.9406723,
   0.9814368,
   0.8880899,
   0.8273588,
   0.963558,
   0.9509353,
   0.8986458,
   0.9845307,
   1,
   0.8417995,
   0.6477555,
   0.514517,
   0};
   Double_t _felx3275[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3275[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01499744,
   0.04359284,
   0.05597366,
   0.05694413,
   0.05406619,
   0.05239977,
   0.05636914,
   0.05749938,
   0.05671976,
   0.06169601,
   0.06695614,
   0.06954225,
   0.08378223,
   0.1786476,
   0};
   Double_t _fehx3275[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3275[22] = {
   359.476,
   0.1168438,
   0.02023295,
   0.01030959,
   0.008079097,
   0.007017426,
   0.006503619,
   0.01876152,
   0.04706442,
   0.05941061,
   0.06035092,
   0.05746512,
   0.05583113,
   0.05977025,
   0.06108901,
   0.06042111,
   0.06569263,
   0.07160144,
   0.07554547,
   0.09540449,
   0.2551676,
   102.3981};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3275,_fy3275,_felx3275,_fehx3275,_fely3275,_fehy3275);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3275 = new TH1F("Graph_Graph3275","",100,-100,100);
   Graph_Graph3275->SetMinimum(0);
   Graph_Graph3275->SetMaximum(1.5);
   Graph_Graph3275->SetDirectory(0);
   Graph_Graph3275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3275->SetLineColor(ci);
   Graph_Graph3275->GetXaxis()->SetRange(1,100);
   Graph_Graph3275->GetXaxis()->CenterTitle(true);
   Graph_Graph3275->GetXaxis()->SetLabelFont(42);
   Graph_Graph3275->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3275->GetXaxis()->SetTitleFont(42);
   Graph_Graph3275->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3275->GetYaxis()->CenterTitle(true);
   Graph_Graph3275->GetYaxis()->SetLabelFont(42);
   Graph_Graph3275->GetYaxis()->SetTitleFont(42);
   Graph_Graph3275->GetZaxis()->SetLabelFont(42);
   Graph_Graph3275->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3275->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3275);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.496201,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__824 = new TH2D("ThetaY_vs_Y_mI25_mI20__824","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(7938,1);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(7964,1069);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(7990,6169);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8016,12106);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8042,15448);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8068,17785);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8094,19190);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8120,20053);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8146,20459);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8172,20610);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8198,20790);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8224,20838);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8250,20647);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8276,20824);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8302,19746);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8328,19160);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8354,17764);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8380,15320);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8406,11918);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8432,6279);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8458,1054);
   ThetaY_vs_Y_mI25_mI20__824->SetBinContent(8484,2);
   ThetaY_vs_Y_mI25_mI20__824->SetEntries(307232);
   ThetaY_vs_Y_mI25_mI20__824->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(1,1041.9);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(2,2083.8);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(3,3125.7);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(4,4167.6);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(5,5209.5);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(6,6251.4);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(7,7293.3);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(8,8335.2);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(9,9377.1);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(10,10419);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(11,11460.9);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(12,12502.8);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(13,13544.7);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(14,14586.6);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(15,15628.5);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(16,16670.4);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(17,17712.3);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(18,18754.2);
   ThetaY_vs_Y_mI25_mI20__824->SetContourLevel(19,19796.1);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__824->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__824->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__824->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__824->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__824->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__824->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__824->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__824->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__824->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__824->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__824->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__824->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__824->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__824->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__824->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__824->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
