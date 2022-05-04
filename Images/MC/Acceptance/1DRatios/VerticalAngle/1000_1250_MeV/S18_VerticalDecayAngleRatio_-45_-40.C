void S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:48 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.235502,125,23.47453);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI45_mI40__753 = new TH1D("S18_ThetaY_mI45_mI40__753","",630,-1575,1575);
   S18_ThetaY_mI45_mI40__753->SetBinContent(316,4);
   S18_ThetaY_mI45_mI40__753->SetBinContent(317,17);
   S18_ThetaY_mI45_mI40__753->SetBinContent(318,9);
   S18_ThetaY_mI45_mI40__753->SetBinContent(319,11);
   S18_ThetaY_mI45_mI40__753->SetBinContent(320,12);
   S18_ThetaY_mI45_mI40__753->SetBinContent(321,7);
   S18_ThetaY_mI45_mI40__753->SetBinContent(322,7);
   S18_ThetaY_mI45_mI40__753->SetBinContent(323,3);
   S18_ThetaY_mI45_mI40__753->SetBinContent(324,4);
   S18_ThetaY_mI45_mI40__753->SetBinContent(325,1);
   S18_ThetaY_mI45_mI40__753->SetBinError(316,2);
   S18_ThetaY_mI45_mI40__753->SetBinError(317,4.123106);
   S18_ThetaY_mI45_mI40__753->SetBinError(318,3);
   S18_ThetaY_mI45_mI40__753->SetBinError(319,3.316625);
   S18_ThetaY_mI45_mI40__753->SetBinError(320,3.464102);
   S18_ThetaY_mI45_mI40__753->SetBinError(321,2.645751);
   S18_ThetaY_mI45_mI40__753->SetBinError(322,2.645751);
   S18_ThetaY_mI45_mI40__753->SetBinError(323,1.732051);
   S18_ThetaY_mI45_mI40__753->SetBinError(324,2);
   S18_ThetaY_mI45_mI40__753->SetBinError(325,1);
   S18_ThetaY_mI45_mI40__753->SetMinimum(0);
   S18_ThetaY_mI45_mI40__753->SetMaximum(21.00353);
   S18_ThetaY_mI45_mI40__753->SetEntries(75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__753->SetLineColor(ci);
   S18_ThetaY_mI45_mI40__753->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__753->SetMarkerColor(ci);
   S18_ThetaY_mI45_mI40__753->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI45_mI40__753->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI45_mI40__753->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__753->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__753->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__753->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI45_mI40__753->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI45_mI40__753->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__753->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__753->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__753->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__753->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__753->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__754 = new TH1D("ThetaY_mI45_mI40__754","",630,-1575,1575);
   ThetaY_mI45_mI40__754->SetBinContent(306,0.6941176);
   ThetaY_mI45_mI40__754->SetBinContent(307,5.647059);
   ThetaY_mI45_mI40__754->SetBinContent(308,11.17647);
   ThetaY_mI45_mI40__754->SetBinContent(309,13.28235);
   ThetaY_mI45_mI40__754->SetBinContent(310,15.41176);
   ThetaY_mI45_mI40__754->SetBinContent(311,17.41176);
   ThetaY_mI45_mI40__754->SetBinContent(312,18.38824);
   ThetaY_mI45_mI40__754->SetBinContent(313,17.98824);
   ThetaY_mI45_mI40__754->SetBinContent(314,18.58824);
   ThetaY_mI45_mI40__754->SetBinContent(315,18.51765);
   ThetaY_mI45_mI40__754->SetBinContent(316,19.09412);
   ThetaY_mI45_mI40__754->SetBinContent(317,18.24706);
   ThetaY_mI45_mI40__754->SetBinContent(318,18.57647);
   ThetaY_mI45_mI40__754->SetBinContent(319,18.22353);
   ThetaY_mI45_mI40__754->SetBinContent(320,17.78824);
   ThetaY_mI45_mI40__754->SetBinContent(321,15.31765);
   ThetaY_mI45_mI40__754->SetBinContent(322,13.48235);
   ThetaY_mI45_mI40__754->SetBinContent(323,10.64706);
   ThetaY_mI45_mI40__754->SetBinContent(324,5.470588);
   ThetaY_mI45_mI40__754->SetBinContent(325,1);
   ThetaY_mI45_mI40__754->SetBinError(306,0.09036642);
   ThetaY_mI45_mI40__754->SetBinError(307,0.2577518);
   ThetaY_mI45_mI40__754->SetBinError(308,0.3626126);
   ThetaY_mI45_mI40__754->SetBinError(309,0.3953011);
   ThetaY_mI45_mI40__754->SetBinError(310,0.4258108);
   ThetaY_mI45_mI40__754->SetBinError(311,0.4525973);
   ThetaY_mI45_mI40__754->SetBinError(312,0.4651152);
   ThetaY_mI45_mI40__754->SetBinError(313,0.4600286);
   ThetaY_mI45_mI40__754->SetBinError(314,0.4676378);
   ThetaY_mI45_mI40__754->SetBinError(315,0.466749);
   ThetaY_mI45_mI40__754->SetBinError(316,0.4739585);
   ThetaY_mI45_mI40__754->SetBinError(317,0.4633263);
   ThetaY_mI45_mI40__754->SetBinError(318,0.4674898);
   ThetaY_mI45_mI40__754->SetBinError(319,0.4630275);
   ThetaY_mI45_mI40__754->SetBinError(320,0.457464);
   ThetaY_mI45_mI40__754->SetBinError(321,0.4245087);
   ThetaY_mI45_mI40__754->SetBinError(322,0.3982661);
   ThetaY_mI45_mI40__754->SetBinError(323,0.3539202);
   ThetaY_mI45_mI40__754->SetBinError(324,0.2536925);
   ThetaY_mI45_mI40__754->SetBinError(325,0.1084652);
   ThetaY_mI45_mI40__754->SetEntries(23371);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__754->SetLineColor(ci);
   ThetaY_mI45_mI40__754->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__754->SetMarkerColor(ci);
   ThetaY_mI45_mI40__754->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__754->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__754->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__754->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__754->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__754->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__754->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__754->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__754->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__754->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__754->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__754->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__754->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__754->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__754->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__754->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__754->Draw("AEsame");
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
   
   Double_t _fx3252[20] = {
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
   Double_t _fy3252[20] = {
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
   0.2094886,
   0.931657,
   0.4844839,
   0.6036152,
   0.6746032,
   0.4569892,
   0.5191972,
   0.281768,
   0.7311828,
   1};
   Double_t _felx3252[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3252[20] = {
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
   0.100356,
   0.2248734,
   0.1588574,
   0.1797788,
   0.1926986,
   0.1689251,
   0.1919813,
   0.1535344,
   0.351123,
   0.8290834};
   Double_t _fehx3252[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3252[20] = {
   2.694134,
   0.3266403,
   0.1648827,
   0.1387197,
   0.1195396,
   0.1058001,
   0.1001785,
   0.1024075,
   0.09910003,
   0.09947801,
   0.1660058,
   0.28722,
   0.2221769,
   0.243558,
   0.2577418,
   0.2471576,
   0.2809595,
   0.2749803,
   0.582593,
   2.344469};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3252,_fy3252,_felx3252,_fehx3252,_fely3252,_fehy3252);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3252 = new TH1F("Graph_Graph3252","",100,-100,100);
   Graph_Graph3252->SetMinimum(0);
   Graph_Graph3252->SetMaximum(1.5);
   Graph_Graph3252->SetDirectory(0);
   Graph_Graph3252->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3252->SetLineColor(ci);
   Graph_Graph3252->GetXaxis()->SetRange(1,100);
   Graph_Graph3252->GetXaxis()->CenterTitle(true);
   Graph_Graph3252->GetXaxis()->SetLabelFont(42);
   Graph_Graph3252->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3252->GetXaxis()->SetTitleFont(42);
   Graph_Graph3252->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3252->GetYaxis()->CenterTitle(true);
   Graph_Graph3252->GetYaxis()->SetLabelFont(42);
   Graph_Graph3252->GetYaxis()->SetTitleFont(42);
   Graph_Graph3252->GetZaxis()->SetLabelFont(42);
   Graph_Graph3252->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3252->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3252);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,21.00353,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__755 = new TH2D("ThetaY_vs_Y_mI45_mI40__755","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(7960,59);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(7986,480);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8012,950);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8038,1129);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8064,1310);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8090,1480);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8116,1563);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8142,1529);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8168,1580);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8194,1574);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8220,1623);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8246,1551);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8272,1579);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8298,1549);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8324,1512);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8350,1302);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8376,1146);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8402,905);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8428,465);
   ThetaY_vs_Y_mI45_mI40__755->SetBinContent(8454,85);
   ThetaY_vs_Y_mI45_mI40__755->SetEntries(23371);
   ThetaY_vs_Y_mI45_mI40__755->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(1,81.15);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(2,162.3);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(3,243.45);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(4,324.6);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(5,405.75);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(6,486.9);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(7,568.05);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(8,649.2);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(9,730.35);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(10,811.5);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(11,892.65);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(12,973.8);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(13,1054.95);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(14,1136.1);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(15,1217.25);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(16,1298.4);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(17,1379.55);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(18,1460.7);
   ThetaY_vs_Y_mI45_mI40__755->SetContourLevel(19,1541.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__755->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__755->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__755->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__755->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__755->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__755->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__755->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__755->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__755->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__755->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__755->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__755->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__755->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__755->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__755->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__755->Draw("COL");
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
