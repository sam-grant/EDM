void S18_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.1324363,125,2.516289);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI45_mI40__582 = new TH1D("S18_ThetaY_mI45_mI40__582","",630,-1575,1575);
   S18_ThetaY_mI45_mI40__582->SetBinContent(316,0.7692308);
   S18_ThetaY_mI45_mI40__582->SetBinContent(317,0.3076923);
   S18_ThetaY_mI45_mI40__582->SetBinContent(318,0.6153846);
   S18_ThetaY_mI45_mI40__582->SetBinContent(319,0.5384615);
   S18_ThetaY_mI45_mI40__582->SetBinContent(320,0.5384615);
   S18_ThetaY_mI45_mI40__582->SetBinContent(321,0.5384615);
   S18_ThetaY_mI45_mI40__582->SetBinContent(322,0.4615385);
   S18_ThetaY_mI45_mI40__582->SetBinContent(323,0.6923077);
   S18_ThetaY_mI45_mI40__582->SetBinContent(324,0.3846154);
   S18_ThetaY_mI45_mI40__582->SetBinContent(325,1);
   S18_ThetaY_mI45_mI40__582->SetBinContent(326,0.1538462);
   S18_ThetaY_mI45_mI40__582->SetBinContent(327,0.07692308);
   S18_ThetaY_mI45_mI40__582->SetBinError(316,0.2432521);
   S18_ThetaY_mI45_mI40__582->SetBinError(317,0.1538462);
   S18_ThetaY_mI45_mI40__582->SetBinError(318,0.2175713);
   S18_ThetaY_mI45_mI40__582->SetBinError(319,0.2035193);
   S18_ThetaY_mI45_mI40__582->SetBinError(320,0.2035193);
   S18_ThetaY_mI45_mI40__582->SetBinError(321,0.2035193);
   S18_ThetaY_mI45_mI40__582->SetBinError(322,0.1884223);
   S18_ThetaY_mI45_mI40__582->SetBinError(323,0.2307692);
   S18_ThetaY_mI45_mI40__582->SetBinError(324,0.1720052);
   S18_ThetaY_mI45_mI40__582->SetBinError(325,0.2773501);
   S18_ThetaY_mI45_mI40__582->SetBinError(326,0.1087857);
   S18_ThetaY_mI45_mI40__582->SetBinError(327,0.07692308);
   S18_ThetaY_mI45_mI40__582->SetMinimum(0);
   S18_ThetaY_mI45_mI40__582->SetMaximum(2.251416);
   S18_ThetaY_mI45_mI40__582->SetEntries(79);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__582->SetLineColor(ci);
   S18_ThetaY_mI45_mI40__582->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__582->SetMarkerColor(ci);
   S18_ThetaY_mI45_mI40__582->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI45_mI40__582->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI45_mI40__582->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__582->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__582->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__582->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI45_mI40__582->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI45_mI40__582->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__582->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__582->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__582->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__582->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__582->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__583 = new TH1D("ThetaY_mI45_mI40__583","",630,-1575,1575);
   ThetaY_mI45_mI40__583->SetBinContent(304,0.0878187);
   ThetaY_mI45_mI40__583->SetBinContent(305,0.4773371);
   ThetaY_mI45_mI40__583->SetBinContent(306,1.026912);
   ThetaY_mI45_mI40__583->SetBinContent(307,1.389518);
   ThetaY_mI45_mI40__583->SetBinContent(308,1.6983);
   ThetaY_mI45_mI40__583->SetBinContent(309,1.720963);
   ThetaY_mI45_mI40__583->SetBinContent(310,1.899433);
   ThetaY_mI45_mI40__583->SetBinContent(311,1.964589);
   ThetaY_mI45_mI40__583->SetBinContent(312,1.915014);
   ThetaY_mI45_mI40__583->SetBinContent(313,2.012748);
   ThetaY_mI45_mI40__583->SetBinContent(314,1.981586);
   ThetaY_mI45_mI40__583->SetBinContent(315,1.988669);
   ThetaY_mI45_mI40__583->SetBinContent(316,1.929178);
   ThetaY_mI45_mI40__583->SetBinContent(317,2.046742);
   ThetaY_mI45_mI40__583->SetBinContent(318,1.963173);
   ThetaY_mI45_mI40__583->SetBinContent(319,1.839943);
   ThetaY_mI45_mI40__583->SetBinContent(320,1.956091);
   ThetaY_mI45_mI40__583->SetBinContent(321,1.906516);
   ThetaY_mI45_mI40__583->SetBinContent(322,1.720963);
   ThetaY_mI45_mI40__583->SetBinContent(323,1.657224);
   ThetaY_mI45_mI40__583->SetBinContent(324,1.389518);
   ThetaY_mI45_mI40__583->SetBinContent(325,1);
   ThetaY_mI45_mI40__583->SetBinContent(326,0.5368272);
   ThetaY_mI45_mI40__583->SetBinContent(327,0.1260623);
   ThetaY_mI45_mI40__583->SetBinError(304,0.01115299);
   ThetaY_mI45_mI40__583->SetBinError(305,0.02600221);
   ThetaY_mI45_mI40__583->SetBinError(306,0.03813856);
   ThetaY_mI45_mI40__583->SetBinError(307,0.04436391);
   ThetaY_mI45_mI40__583->SetBinError(308,0.04904615);
   ThetaY_mI45_mI40__583->SetBinError(309,0.04937231);
   ThetaY_mI45_mI40__583->SetBinError(310,0.05186922);
   ThetaY_mI45_mI40__583->SetBinError(311,0.05275134);
   ThetaY_mI45_mI40__583->SetBinError(312,0.05208152);
   ThetaY_mI45_mI40__583->SetBinError(313,0.05339399);
   ThetaY_mI45_mI40__583->SetBinError(314,0.05297905);
   ThetaY_mI45_mI40__583->SetBinError(315,0.05307364);
   ThetaY_mI45_mI40__583->SetBinError(316,0.05227377);
   ThetaY_mI45_mI40__583->SetBinError(317,0.053843);
   ThetaY_mI45_mI40__583->SetBinError(318,0.05273232);
   ThetaY_mI45_mI40__583->SetBinError(319,0.05105049);
   ThetaY_mI45_mI40__583->SetBinError(320,0.05263712);
   ThetaY_mI45_mI40__583->SetBinError(321,0.05196583);
   ThetaY_mI45_mI40__583->SetBinError(322,0.04937231);
   ThetaY_mI45_mI40__583->SetBinError(323,0.04844938);
   ThetaY_mI45_mI40__583->SetBinError(324,0.04436391);
   ThetaY_mI45_mI40__583->SetBinError(325,0.0376355);
   ThetaY_mI45_mI40__583->SetBinError(326,0.02757496);
   ThetaY_mI45_mI40__583->SetBinError(327,0.01336258);
   ThetaY_mI45_mI40__583->SetEntries(25582);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__583->SetLineColor(ci);
   ThetaY_mI45_mI40__583->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__583->SetMarkerColor(ci);
   ThetaY_mI45_mI40__583->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__583->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__583->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__583->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__583->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__583->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__583->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__583->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__583->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__583->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__583->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__583->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__583->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__583->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__583->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__583->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__583->Draw("AEsame");
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
   
   Double_t _fx3195[24] = {
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
   57.5};
   Double_t _fy3195[24] = {
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
   0.3987349,
   0.1503327,
   0.3134643,
   0.2926512,
   0.2752743,
   0.2824323,
   0.2681861,
   0.4177515,
   0.2767976,
   1,
   0.2865841,
   0.6101988};
   Double_t _felx3195[24] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3195[24] = {
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
   0.1243679,
   0.0720259,
   0.1087519,
   0.1081785,
   0.101741,
   0.1043925,
   0.1066021,
   0.1370986,
   0.1198122,
   0.2760743,
   0.1854126,
   0.5058558};
   Double_t _fehx3195[24] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3195[24] = {
   1.636788,
   0.2974933,
   0.1380809,
   0.1020138,
   0.08345157,
   0.08235179,
   0.07460872,
   0.07213268,
   0.07400129,
   0.07040565,
   0.07151355,
   0.0712587,
   0.1710288,
   0.119161,
   0.1552486,
   0.1582786,
   0.148844,
   0.1527298,
   0.1608122,
   0.1918511,
   0.1880522,
   0.3658731,
   0.3803002,
   1.429352};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3195,_fy3195,_felx3195,_fehx3195,_fely3195,_fehy3195);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3195 = new TH1F("Graph_Graph3195","",100,-100,100);
   Graph_Graph3195->SetMinimum(0);
   Graph_Graph3195->SetMaximum(1.5);
   Graph_Graph3195->SetDirectory(0);
   Graph_Graph3195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3195->SetLineColor(ci);
   Graph_Graph3195->GetXaxis()->SetRange(1,100);
   Graph_Graph3195->GetXaxis()->CenterTitle(true);
   Graph_Graph3195->GetXaxis()->SetLabelFont(42);
   Graph_Graph3195->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3195->GetXaxis()->SetTitleFont(42);
   Graph_Graph3195->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3195->GetYaxis()->CenterTitle(true);
   Graph_Graph3195->GetYaxis()->SetLabelFont(42);
   Graph_Graph3195->GetYaxis()->SetTitleFont(42);
   Graph_Graph3195->GetZaxis()->SetLabelFont(42);
   Graph_Graph3195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3195->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3195);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.251416,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__584 = new TH2D("ThetaY_vs_Y_mI45_mI40__584","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(7908,62);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(7934,337);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(7960,725);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(7986,981);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8012,1199);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8038,1215);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8064,1341);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8090,1387);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8116,1352);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8142,1421);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8168,1399);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8194,1404);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8220,1362);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8246,1445);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8272,1386);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8298,1299);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8324,1381);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8350,1346);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8376,1215);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8402,1170);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8428,981);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8454,706);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8480,379);
   ThetaY_vs_Y_mI45_mI40__584->SetBinContent(8506,89);
   ThetaY_vs_Y_mI45_mI40__584->SetEntries(25582);
   ThetaY_vs_Y_mI45_mI40__584->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(1,72.25);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(2,144.5);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(3,216.75);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(4,289);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(5,361.25);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(6,433.5);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(7,505.75);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(8,578);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(9,650.25);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(10,722.5);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(11,794.75);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(12,867);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(13,939.25);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(14,1011.5);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(15,1083.75);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(16,1156);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(17,1228.25);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(18,1300.5);
   ThetaY_vs_Y_mI45_mI40__584->SetContourLevel(19,1372.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__584->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__584->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__584->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__584->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__584->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__584->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__584->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__584->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__584->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__584->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__584->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__584->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__584->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__584->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__584->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__584->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-45_-40","Reco vertices","lpf");
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
