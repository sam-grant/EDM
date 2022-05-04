void S12S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:46 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI45_mI40__639 = new TH1D("S12S18_ThetaY_mI45_mI40__639","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(315,0.1875);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(316,1.1875);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(317,1);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(318,1.0625);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(319,0.625);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(320,1.125);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(321,1);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(322,0.875);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(323,0.9375);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(324,0.875);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(325,1);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(326,0.25);
   S12S18_ThetaY_mI45_mI40__639->SetBinContent(327,0.125);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(315,0.1082532);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(316,0.2724312);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(317,0.25);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(318,0.2576941);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(319,0.1976424);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(320,0.265165);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(321,0.25);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(322,0.2338536);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(323,0.2420615);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(324,0.2338536);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(325,0.25);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(326,0.125);
   S12S18_ThetaY_mI45_mI40__639->SetBinError(327,0.08838835);
   S12S18_ThetaY_mI45_mI40__639->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__639->SetMaximum(2.251416);
   S12S18_ThetaY_mI45_mI40__639->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__639->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__639->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__639->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__639->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__639->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__639->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__639->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__639->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__639->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__639->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__639->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__639->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__639->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__639->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__639->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__639->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__640 = new TH1D("ThetaY_mI45_mI40__640","",630,-1575,1575);
   ThetaY_mI45_mI40__640->SetBinContent(304,0.0878187);
   ThetaY_mI45_mI40__640->SetBinContent(305,0.4773371);
   ThetaY_mI45_mI40__640->SetBinContent(306,1.026912);
   ThetaY_mI45_mI40__640->SetBinContent(307,1.389518);
   ThetaY_mI45_mI40__640->SetBinContent(308,1.6983);
   ThetaY_mI45_mI40__640->SetBinContent(309,1.720963);
   ThetaY_mI45_mI40__640->SetBinContent(310,1.899433);
   ThetaY_mI45_mI40__640->SetBinContent(311,1.964589);
   ThetaY_mI45_mI40__640->SetBinContent(312,1.915014);
   ThetaY_mI45_mI40__640->SetBinContent(313,2.012748);
   ThetaY_mI45_mI40__640->SetBinContent(314,1.981586);
   ThetaY_mI45_mI40__640->SetBinContent(315,1.988669);
   ThetaY_mI45_mI40__640->SetBinContent(316,1.929178);
   ThetaY_mI45_mI40__640->SetBinContent(317,2.046742);
   ThetaY_mI45_mI40__640->SetBinContent(318,1.963173);
   ThetaY_mI45_mI40__640->SetBinContent(319,1.839943);
   ThetaY_mI45_mI40__640->SetBinContent(320,1.956091);
   ThetaY_mI45_mI40__640->SetBinContent(321,1.906516);
   ThetaY_mI45_mI40__640->SetBinContent(322,1.720963);
   ThetaY_mI45_mI40__640->SetBinContent(323,1.657224);
   ThetaY_mI45_mI40__640->SetBinContent(324,1.389518);
   ThetaY_mI45_mI40__640->SetBinContent(325,1);
   ThetaY_mI45_mI40__640->SetBinContent(326,0.5368272);
   ThetaY_mI45_mI40__640->SetBinContent(327,0.1260623);
   ThetaY_mI45_mI40__640->SetBinError(304,0.01115299);
   ThetaY_mI45_mI40__640->SetBinError(305,0.02600221);
   ThetaY_mI45_mI40__640->SetBinError(306,0.03813856);
   ThetaY_mI45_mI40__640->SetBinError(307,0.04436391);
   ThetaY_mI45_mI40__640->SetBinError(308,0.04904615);
   ThetaY_mI45_mI40__640->SetBinError(309,0.04937231);
   ThetaY_mI45_mI40__640->SetBinError(310,0.05186922);
   ThetaY_mI45_mI40__640->SetBinError(311,0.05275134);
   ThetaY_mI45_mI40__640->SetBinError(312,0.05208152);
   ThetaY_mI45_mI40__640->SetBinError(313,0.05339399);
   ThetaY_mI45_mI40__640->SetBinError(314,0.05297905);
   ThetaY_mI45_mI40__640->SetBinError(315,0.05307364);
   ThetaY_mI45_mI40__640->SetBinError(316,0.05227377);
   ThetaY_mI45_mI40__640->SetBinError(317,0.053843);
   ThetaY_mI45_mI40__640->SetBinError(318,0.05273232);
   ThetaY_mI45_mI40__640->SetBinError(319,0.05105049);
   ThetaY_mI45_mI40__640->SetBinError(320,0.05263712);
   ThetaY_mI45_mI40__640->SetBinError(321,0.05196583);
   ThetaY_mI45_mI40__640->SetBinError(322,0.04937231);
   ThetaY_mI45_mI40__640->SetBinError(323,0.04844938);
   ThetaY_mI45_mI40__640->SetBinError(324,0.04436391);
   ThetaY_mI45_mI40__640->SetBinError(325,0.0376355);
   ThetaY_mI45_mI40__640->SetBinError(326,0.02757496);
   ThetaY_mI45_mI40__640->SetBinError(327,0.01336258);
   ThetaY_mI45_mI40__640->SetEntries(25582);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__640->SetLineColor(ci);
   ThetaY_mI45_mI40__640->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__640->SetMarkerColor(ci);
   ThetaY_mI45_mI40__640->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__640->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__640->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__640->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__640->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__640->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__640->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__640->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__640->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__640->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__640->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__640->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__640->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__640->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__640->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__640->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__640->Draw("AEsame");
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
   
   Double_t _fx3214[24] = {
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
   Double_t _fy3214[24] = {
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
   0.09428419,
   0.615547,
   0.4885813,
   0.5412157,
   0.3396844,
   0.5751267,
   0.5245171,
   0.5084362,
   0.5657051,
   0.6297146,
   1,
   0.4656992,
   0.991573};
   Double_t _felx3214[24] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3214[24] = {
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
   0.05135299,
   0.1408881,
   0.1214854,
   0.1307125,
   0.1059667,
   0.1351157,
   0.1304703,
   0.1349659,
   0.145286,
   0.1673716,
   0.249987,
   0.2238057,
   0.6449226};
   Double_t _fehx3214[24] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3214[24] = {
   1.32989,
   0.2417133,
   0.1121908,
   0.08288619,
   0.0678044,
   0.06691083,
   0.06061959,
   0.0586078,
   0.06012605,
   0.05720459,
   0.05810476,
   0.09190628,
   0.177662,
   0.1563491,
   0.1669919,
   0.1457371,
   0.1714474,
   0.167938,
   0.1767821,
   0.1886052,
   0.2193509,
   0.3224234,
   0.3717049,
   1.342086};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3214,_fy3214,_felx3214,_fehx3214,_fely3214,_fehy3214);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3214 = new TH1F("Graph_Graph3214","",100,-100,100);
   Graph_Graph3214->SetMinimum(0);
   Graph_Graph3214->SetMaximum(1.5);
   Graph_Graph3214->SetDirectory(0);
   Graph_Graph3214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3214->SetLineColor(ci);
   Graph_Graph3214->GetXaxis()->SetRange(1,100);
   Graph_Graph3214->GetXaxis()->CenterTitle(true);
   Graph_Graph3214->GetXaxis()->SetLabelFont(42);
   Graph_Graph3214->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3214->GetXaxis()->SetTitleFont(42);
   Graph_Graph3214->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3214->GetYaxis()->CenterTitle(true);
   Graph_Graph3214->GetYaxis()->SetLabelFont(42);
   Graph_Graph3214->GetYaxis()->SetTitleFont(42);
   Graph_Graph3214->GetZaxis()->SetLabelFont(42);
   Graph_Graph3214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3214->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3214);
   
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__641 = new TH2D("ThetaY_vs_Y_mI45_mI40__641","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(7908,62);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(7934,337);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(7960,725);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(7986,981);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8012,1199);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8038,1215);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8064,1341);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8090,1387);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8116,1352);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8142,1421);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8168,1399);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8194,1404);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8220,1362);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8246,1445);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8272,1386);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8298,1299);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8324,1381);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8350,1346);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8376,1215);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8402,1170);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8428,981);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8454,706);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8480,379);
   ThetaY_vs_Y_mI45_mI40__641->SetBinContent(8506,89);
   ThetaY_vs_Y_mI45_mI40__641->SetEntries(25582);
   ThetaY_vs_Y_mI45_mI40__641->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(1,72.25);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(2,144.5);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(3,216.75);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(4,289);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(5,361.25);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(6,433.5);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(7,505.75);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(8,578);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(9,650.25);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(10,722.5);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(11,794.75);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(12,867);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(13,939.25);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(14,1011.5);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(15,1083.75);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(16,1156);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(17,1228.25);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(18,1300.5);
   ThetaY_vs_Y_mI45_mI40__641->SetContourLevel(19,1372.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__641->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__641->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__641->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__641->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__641->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__641->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__641->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__641->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__641->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__641->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__641->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__641->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__641->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__641->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__641->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__641->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_-45_-40","Reco vertices","lpf");
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
