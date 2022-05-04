void S12S18_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.06945612,125,1.319666);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI45_mI40__810 = new TH1D("S12S18_ThetaY_mI45_mI40__810","",630,-1575,1575);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(315,0.06666667);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(316,0.4666667);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(317,1);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(318,0.5666667);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(319,0.7666667);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(320,1);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(321,0.6666667);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(322,0.5666667);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(323,0.1333333);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(324,0.2);
   S12S18_ThetaY_mI45_mI40__810->SetBinContent(325,0.03333333);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(315,0.04714045);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(316,0.1247219);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(317,0.1825742);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(318,0.1374369);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(319,0.1598611);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(320,0.1825742);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(321,0.1490712);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(322,0.1374369);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(323,0.06666667);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(324,0.08164966);
   S12S18_ThetaY_mI45_mI40__810->SetBinError(325,0.03333333);
   S12S18_ThetaY_mI45_mI40__810->SetMinimum(0);
   S12S18_ThetaY_mI45_mI40__810->SetMaximum(1.180754);
   S12S18_ThetaY_mI45_mI40__810->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__810->SetLineColor(ci);
   S12S18_ThetaY_mI45_mI40__810->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI45_mI40__810->SetMarkerColor(ci);
   S12S18_ThetaY_mI45_mI40__810->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI45_mI40__810->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI45_mI40__810->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__810->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__810->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__810->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI45_mI40__810->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI45_mI40__810->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__810->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__810->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI45_mI40__810->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI45_mI40__810->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI45_mI40__810->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__811 = new TH1D("ThetaY_mI45_mI40__811","",630,-1575,1575);
   ThetaY_mI45_mI40__811->SetBinContent(306,0.03902116);
   ThetaY_mI45_mI40__811->SetBinContent(307,0.3174603);
   ThetaY_mI45_mI40__811->SetBinContent(308,0.6283069);
   ThetaY_mI45_mI40__811->SetBinContent(309,0.7466931);
   ThetaY_mI45_mI40__811->SetBinContent(310,0.8664021);
   ThetaY_mI45_mI40__811->SetBinContent(311,0.978836);
   ThetaY_mI45_mI40__811->SetBinContent(312,1.03373);
   ThetaY_mI45_mI40__811->SetBinContent(313,1.011243);
   ThetaY_mI45_mI40__811->SetBinContent(314,1.044974);
   ThetaY_mI45_mI40__811->SetBinContent(315,1.041005);
   ThetaY_mI45_mI40__811->SetBinContent(316,1.073413);
   ThetaY_mI45_mI40__811->SetBinContent(317,1.025794);
   ThetaY_mI45_mI40__811->SetBinContent(318,1.044312);
   ThetaY_mI45_mI40__811->SetBinContent(319,1.024471);
   ThetaY_mI45_mI40__811->SetBinContent(320,1);
   ThetaY_mI45_mI40__811->SetBinContent(321,0.8611111);
   ThetaY_mI45_mI40__811->SetBinContent(322,0.7579365);
   ThetaY_mI45_mI40__811->SetBinContent(323,0.598545);
   ThetaY_mI45_mI40__811->SetBinContent(324,0.3075397);
   ThetaY_mI45_mI40__811->SetBinContent(325,0.05621693);
   ThetaY_mI45_mI40__811->SetBinError(306,0.005080123);
   ThetaY_mI45_mI40__811->SetBinError(307,0.01449001);
   ThetaY_mI45_mI40__811->SetBinError(308,0.02038497);
   ThetaY_mI45_mI40__811->SetBinError(309,0.02222262);
   ThetaY_mI45_mI40__811->SetBinError(310,0.02393778);
   ThetaY_mI45_mI40__811->SetBinError(311,0.02544363);
   ThetaY_mI45_mI40__811->SetBinError(312,0.02614735);
   ThetaY_mI45_mI40__811->SetBinError(313,0.0258614);
   ThetaY_mI45_mI40__811->SetBinError(314,0.02628916);
   ThetaY_mI45_mI40__811->SetBinError(315,0.0262392);
   ThetaY_mI45_mI40__811->SetBinError(316,0.02664449);
   ThetaY_mI45_mI40__811->SetBinError(317,0.02604678);
   ThetaY_mI45_mI40__811->SetBinError(318,0.02628084);
   ThetaY_mI45_mI40__811->SetBinError(319,0.02602998);
   ThetaY_mI45_mI40__811->SetBinError(320,0.02571722);
   ThetaY_mI45_mI40__811->SetBinError(321,0.02386457);
   ThetaY_mI45_mI40__811->SetBinError(322,0.0223893);
   ThetaY_mI45_mI40__811->SetBinError(323,0.01989631);
   ThetaY_mI45_mI40__811->SetBinError(324,0.01426181);
   ThetaY_mI45_mI40__811->SetBinError(325,0.006097582);
   ThetaY_mI45_mI40__811->SetEntries(23371);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__811->SetLineColor(ci);
   ThetaY_mI45_mI40__811->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__811->SetMarkerColor(ci);
   ThetaY_mI45_mI40__811->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__811->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__811->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__811->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__811->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__811->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__811->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__811->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__811->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__811->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__811->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__811->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__811->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__811->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__811->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__811->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__811->Draw("AEsame");
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
   
   Double_t _fx3271[20] = {
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
   47.5};
   Double_t _fy3271[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06404066,
   0.4347505,
   0.9748549,
   0.5426219,
   0.7483538,
   1,
   0.7741935,
   0.747644,
   0.2227624,
   0.6503226,
   0.5929412};
   Double_t _felx3271[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3271[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04138082,
   0.1152513,
   0.1786348,
   0.1309604,
   0.1559988,
   0.1832858,
   0.1729078,
   0.1807847,
   0.1067974,
   0.2593727,
   0.4915977};
   Double_t _fehx3271[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3271[20] = {
   1.597463,
   0.1936785,
   0.09776574,
   0.0822526,
   0.07087994,
   0.06273326,
   0.05939997,
   0.06072163,
   0.05876049,
   0.08458962,
   0.1508702,
   0.2149501,
   0.1672636,
   0.1926124,
   0.2205603,
   0.2168062,
   0.2310679,
   0.1768329,
   0.392423,
   1.390132};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3271,_fy3271,_felx3271,_fehx3271,_fely3271,_fehy3271);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3271 = new TH1F("Graph_Graph3271","",100,-100,100);
   Graph_Graph3271->SetMinimum(0);
   Graph_Graph3271->SetMaximum(1.5);
   Graph_Graph3271->SetDirectory(0);
   Graph_Graph3271->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3271->SetLineColor(ci);
   Graph_Graph3271->GetXaxis()->SetRange(1,100);
   Graph_Graph3271->GetXaxis()->CenterTitle(true);
   Graph_Graph3271->GetXaxis()->SetLabelFont(42);
   Graph_Graph3271->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3271->GetXaxis()->SetTitleFont(42);
   Graph_Graph3271->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3271->GetYaxis()->CenterTitle(true);
   Graph_Graph3271->GetYaxis()->SetLabelFont(42);
   Graph_Graph3271->GetYaxis()->SetTitleFont(42);
   Graph_Graph3271->GetZaxis()->SetLabelFont(42);
   Graph_Graph3271->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3271->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3271);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.180754,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__812 = new TH2D("ThetaY_vs_Y_mI45_mI40__812","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(7960,59);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(7986,480);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8012,950);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8038,1129);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8064,1310);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8090,1480);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8116,1563);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8142,1529);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8168,1580);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8194,1574);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8220,1623);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8246,1551);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8272,1579);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8298,1549);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8324,1512);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8350,1302);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8376,1146);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8402,905);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8428,465);
   ThetaY_vs_Y_mI45_mI40__812->SetBinContent(8454,85);
   ThetaY_vs_Y_mI45_mI40__812->SetEntries(23371);
   ThetaY_vs_Y_mI45_mI40__812->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(1,81.15);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(2,162.3);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(3,243.45);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(4,324.6);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(5,405.75);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(6,486.9);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(7,568.05);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(8,649.2);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(9,730.35);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(10,811.5);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(11,892.65);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(12,973.8);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(13,1054.95);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(14,1136.1);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(15,1217.25);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(16,1298.4);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(17,1379.55);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(18,1460.7);
   ThetaY_vs_Y_mI45_mI40__812->SetContourLevel(19,1541.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__812->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__812->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__812->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__812->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__812->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__812->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__812->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__812->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__812->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__812->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__812->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__812->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__812->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__812->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__812->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__812->Draw("COL");
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
