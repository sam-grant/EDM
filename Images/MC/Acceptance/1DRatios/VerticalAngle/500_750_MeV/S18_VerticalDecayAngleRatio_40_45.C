void S18_VerticalDecayAngleRatio_40_45()
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
   upper_pad->Range(-125,-0.1703968,125,3.23754);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_40_45__462 = new TH1D("S18_ThetaY_40_45__462","",630,-1575,1575);
   S18_ThetaY_40_45__462->SetBinContent(303,1);
   S18_ThetaY_40_45__462->SetBinContent(304,0.3333333);
   S18_ThetaY_40_45__462->SetBinContent(305,1.333333);
   S18_ThetaY_40_45__462->SetBinContent(306,0.3333333);
   S18_ThetaY_40_45__462->SetBinContent(307,0.3333333);
   S18_ThetaY_40_45__462->SetBinContent(308,1);
   S18_ThetaY_40_45__462->SetBinContent(309,0.6666667);
   S18_ThetaY_40_45__462->SetBinContent(310,0.6666667);
   S18_ThetaY_40_45__462->SetBinContent(312,1);
   S18_ThetaY_40_45__462->SetBinContent(313,0.6666667);
   S18_ThetaY_40_45__462->SetBinContent(314,1);
   S18_ThetaY_40_45__462->SetBinContent(315,0.3333333);
   S18_ThetaY_40_45__462->SetBinError(303,0.5773503);
   S18_ThetaY_40_45__462->SetBinError(304,0.3333333);
   S18_ThetaY_40_45__462->SetBinError(305,0.6666667);
   S18_ThetaY_40_45__462->SetBinError(306,0.3333333);
   S18_ThetaY_40_45__462->SetBinError(307,0.3333333);
   S18_ThetaY_40_45__462->SetBinError(308,0.5773503);
   S18_ThetaY_40_45__462->SetBinError(309,0.4714045);
   S18_ThetaY_40_45__462->SetBinError(310,0.4714045);
   S18_ThetaY_40_45__462->SetBinError(312,0.5773503);
   S18_ThetaY_40_45__462->SetBinError(313,0.4714045);
   S18_ThetaY_40_45__462->SetBinError(314,0.5773503);
   S18_ThetaY_40_45__462->SetBinError(315,0.3333333);
   S18_ThetaY_40_45__462->SetMinimum(0);
   S18_ThetaY_40_45__462->SetMaximum(2.896746);
   S18_ThetaY_40_45__462->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__462->SetLineColor(ci);
   S18_ThetaY_40_45__462->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_40_45__462->SetMarkerColor(ci);
   S18_ThetaY_40_45__462->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_40_45__462->GetXaxis()->SetRange(296,335);
   S18_ThetaY_40_45__462->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__462->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__462->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__462->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_40_45__462->GetYaxis()->CenterTitle(true);
   S18_ThetaY_40_45__462->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__462->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__462->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_40_45__462->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_40_45__462->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_40_45__462->Draw("AE");
   
   TH1D *ThetaY_40_45__463 = new TH1D("ThetaY_40_45__463","",630,-1575,1575);
   ThetaY_40_45__463->SetBinContent(300,0.01084599);
   ThetaY_40_45__463->SetBinContent(301,0.143167);
   ThetaY_40_45__463->SetBinContent(302,0.4577007);
   ThetaY_40_45__463->SetBinContent(303,1);
   ThetaY_40_45__463->SetBinContent(304,1.56833);
   ThetaY_40_45__463->SetBinContent(305,2.019523);
   ThetaY_40_45__463->SetBinContent(306,2.058568);
   ThetaY_40_45__463->SetBinContent(307,2.197397);
   ThetaY_40_45__463->SetBinContent(308,2.444685);
   ThetaY_40_45__463->SetBinContent(309,2.436009);
   ThetaY_40_45__463->SetBinContent(310,2.570499);
   ThetaY_40_45__463->SetBinContent(311,2.611714);
   ThetaY_40_45__463->SetBinContent(312,2.347072);
   ThetaY_40_45__463->SetBinContent(313,2.559653);
   ThetaY_40_45__463->SetBinContent(314,2.524946);
   ThetaY_40_45__463->SetBinContent(315,2.503254);
   ThetaY_40_45__463->SetBinContent(316,2.546638);
   ThetaY_40_45__463->SetBinContent(317,2.527115);
   ThetaY_40_45__463->SetBinContent(318,2.616052);
   ThetaY_40_45__463->SetBinContent(319,2.633406);
   ThetaY_40_45__463->SetBinContent(320,2.616052);
   ThetaY_40_45__463->SetBinContent(321,2.533623);
   ThetaY_40_45__463->SetBinContent(322,2.600868);
   ThetaY_40_45__463->SetBinContent(323,2.362256);
   ThetaY_40_45__463->SetBinContent(324,2.318872);
   ThetaY_40_45__463->SetBinContent(325,2.121475);
   ThetaY_40_45__463->SetBinContent(326,1.89154);
   ThetaY_40_45__463->SetBinContent(327,1.453362);
   ThetaY_40_45__463->SetBinContent(328,1);
   ThetaY_40_45__463->SetBinContent(329,0.4490239);
   ThetaY_40_45__463->SetBinContent(330,0.1605206);
   ThetaY_40_45__463->SetBinContent(331,0.02169197);
   ThetaY_40_45__463->SetBinError(300,0.004850473);
   ThetaY_40_45__463->SetBinError(301,0.01762264);
   ThetaY_40_45__463->SetBinError(302,0.03150941);
   ThetaY_40_45__463->SetBinError(303,0.04657464);
   ThetaY_40_45__463->SetBinError(304,0.05832681);
   ThetaY_40_45__463->SetBinError(305,0.06618719);
   ThetaY_40_45__463->SetBinError(306,0.06682396);
   ThetaY_40_45__463->SetBinError(307,0.06904048);
   ThetaY_40_45__463->SetBinError(308,0.07282174);
   ThetaY_40_45__463->SetBinError(309,0.07269239);
   ThetaY_40_45__463->SetBinError(310,0.07467208);
   ThetaY_40_45__463->SetBinError(311,0.07526834);
   ThetaY_40_45__463->SetBinError(312,0.07135308);
   ThetaY_40_45__463->SetBinError(313,0.07451438);
   ThetaY_40_45__463->SetBinError(314,0.07400747);
   ThetaY_40_45__463->SetBinError(315,0.07368888);
   ThetaY_40_45__463->SetBinError(316,0.07432469);
   ThetaY_40_45__463->SetBinError(317,0.07403925);
   ThetaY_40_45__463->SetBinError(318,0.07533083);
   ThetaY_40_45__463->SetBinError(319,0.07558027);
   ThetaY_40_45__463->SetBinError(320,0.07533083);
   ThetaY_40_45__463->SetBinError(321,0.07413452);
   ThetaY_40_45__463->SetBinError(322,0.07511189);
   ThetaY_40_45__463->SetBinError(323,0.07158351);
   ThetaY_40_45__463->SetBinError(324,0.07092314);
   ThetaY_40_45__463->SetBinError(325,0.06783729);
   ThetaY_40_45__463->SetBinError(326,0.06405563);
   ThetaY_40_45__463->SetBinError(327,0.05614828);
   ThetaY_40_45__463->SetBinError(328,0.04657464);
   ThetaY_40_45__463->SetBinError(329,0.03120932);
   ThetaY_40_45__463->SetBinError(330,0.01866014);
   ThetaY_40_45__463->SetBinError(331,0.006859604);
   ThetaY_40_45__463->SetEntries(27340);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__463->SetLineColor(ci);
   ThetaY_40_45__463->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__463->SetMarkerColor(ci);
   ThetaY_40_45__463->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__463->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__463->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__463->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__463->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__463->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__463->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__463->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__463->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__463->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__463->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__463->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__463->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__463->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__463->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__463->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__463->Draw("AEsame");
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
   
   Double_t _fx3155[32] = {
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
   Double_t _fy3155[32] = {
   0,
   0,
   0,
   1,
   0.2125403,
   0.660222,
   0.1619248,
   0.1516946,
   0.4090506,
   0.2736717,
   0.259353,
   0,
   0.4260628,
   0.260452,
   0.3960481,
   0.13316,
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
   0};
   Double_t _felx3155[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3155[32] = {
   0,
   0,
   0,
   0.545532,
   0.1758695,
   0.31651,
   0.1339786,
   0.1255124,
   0.2228371,
   0.1768653,
   0.1676067,
   0,
   0.2321142,
   0.1683173,
   0.2157471,
   0.1101743,
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
   0};
   Double_t _fehx3155[32] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3155[32] = {
   68.40276,
   4.346762,
   1.346642,
   0.9789778,
   0.4898583,
   0.5240385,
   0.3729982,
   0.3493943,
   0.3989403,
   0.3616995,
   0.3427381,
   0.2351496,
   0.4155774,
   0.3441932,
   0.386227,
   0.306643,
   0.2411632,
   0.2430277,
   0.2347593,
   0.2332111,
   0.2347593,
   0.242403,
   0.2361309,
   0.2600027,
   0.2648713,
   0.28954,
   0.3247735,
   0.4228249,
   0.6149009,
   1.37278,
   3.870975,
   31.06197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3155,_fy3155,_felx3155,_fehx3155,_fely3155,_fehy3155);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3155 = new TH1F("Graph_Graph3155","",100,-100,100);
   Graph_Graph3155->SetMinimum(0);
   Graph_Graph3155->SetMaximum(1.5);
   Graph_Graph3155->SetDirectory(0);
   Graph_Graph3155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3155->SetLineColor(ci);
   Graph_Graph3155->GetXaxis()->SetRange(1,100);
   Graph_Graph3155->GetXaxis()->CenterTitle(true);
   Graph_Graph3155->GetXaxis()->SetLabelFont(42);
   Graph_Graph3155->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3155->GetXaxis()->SetTitleFont(42);
   Graph_Graph3155->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3155->GetYaxis()->CenterTitle(true);
   Graph_Graph3155->GetYaxis()->SetLabelFont(42);
   Graph_Graph3155->GetYaxis()->SetTitleFont(42);
   Graph_Graph3155->GetZaxis()->SetLabelFont(42);
   Graph_Graph3155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3155->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3155);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.896746,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__464 = new TH2D("ThetaY_vs_Y_40_45__464","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__464->SetBinContent(7821,5);
   ThetaY_vs_Y_40_45__464->SetBinContent(7847,66);
   ThetaY_vs_Y_40_45__464->SetBinContent(7873,211);
   ThetaY_vs_Y_40_45__464->SetBinContent(7899,461);
   ThetaY_vs_Y_40_45__464->SetBinContent(7925,723);
   ThetaY_vs_Y_40_45__464->SetBinContent(7951,931);
   ThetaY_vs_Y_40_45__464->SetBinContent(7977,949);
   ThetaY_vs_Y_40_45__464->SetBinContent(8003,1013);
   ThetaY_vs_Y_40_45__464->SetBinContent(8029,1127);
   ThetaY_vs_Y_40_45__464->SetBinContent(8055,1123);
   ThetaY_vs_Y_40_45__464->SetBinContent(8081,1185);
   ThetaY_vs_Y_40_45__464->SetBinContent(8107,1204);
   ThetaY_vs_Y_40_45__464->SetBinContent(8133,1082);
   ThetaY_vs_Y_40_45__464->SetBinContent(8159,1180);
   ThetaY_vs_Y_40_45__464->SetBinContent(8185,1164);
   ThetaY_vs_Y_40_45__464->SetBinContent(8211,1154);
   ThetaY_vs_Y_40_45__464->SetBinContent(8237,1174);
   ThetaY_vs_Y_40_45__464->SetBinContent(8263,1165);
   ThetaY_vs_Y_40_45__464->SetBinContent(8289,1206);
   ThetaY_vs_Y_40_45__464->SetBinContent(8315,1214);
   ThetaY_vs_Y_40_45__464->SetBinContent(8341,1206);
   ThetaY_vs_Y_40_45__464->SetBinContent(8367,1168);
   ThetaY_vs_Y_40_45__464->SetBinContent(8393,1199);
   ThetaY_vs_Y_40_45__464->SetBinContent(8419,1089);
   ThetaY_vs_Y_40_45__464->SetBinContent(8445,1069);
   ThetaY_vs_Y_40_45__464->SetBinContent(8471,978);
   ThetaY_vs_Y_40_45__464->SetBinContent(8497,872);
   ThetaY_vs_Y_40_45__464->SetBinContent(8523,670);
   ThetaY_vs_Y_40_45__464->SetBinContent(8549,461);
   ThetaY_vs_Y_40_45__464->SetBinContent(8575,207);
   ThetaY_vs_Y_40_45__464->SetBinContent(8601,74);
   ThetaY_vs_Y_40_45__464->SetBinContent(8627,10);
   ThetaY_vs_Y_40_45__464->SetEntries(27340);
   ThetaY_vs_Y_40_45__464->SetContour(20);
   ThetaY_vs_Y_40_45__464->SetContourLevel(0,0);
   ThetaY_vs_Y_40_45__464->SetContourLevel(1,60.7);
   ThetaY_vs_Y_40_45__464->SetContourLevel(2,121.4);
   ThetaY_vs_Y_40_45__464->SetContourLevel(3,182.1);
   ThetaY_vs_Y_40_45__464->SetContourLevel(4,242.8);
   ThetaY_vs_Y_40_45__464->SetContourLevel(5,303.5);
   ThetaY_vs_Y_40_45__464->SetContourLevel(6,364.2);
   ThetaY_vs_Y_40_45__464->SetContourLevel(7,424.9);
   ThetaY_vs_Y_40_45__464->SetContourLevel(8,485.6);
   ThetaY_vs_Y_40_45__464->SetContourLevel(9,546.3);
   ThetaY_vs_Y_40_45__464->SetContourLevel(10,607);
   ThetaY_vs_Y_40_45__464->SetContourLevel(11,667.7);
   ThetaY_vs_Y_40_45__464->SetContourLevel(12,728.4);
   ThetaY_vs_Y_40_45__464->SetContourLevel(13,789.1);
   ThetaY_vs_Y_40_45__464->SetContourLevel(14,849.8);
   ThetaY_vs_Y_40_45__464->SetContourLevel(15,910.5);
   ThetaY_vs_Y_40_45__464->SetContourLevel(16,971.2);
   ThetaY_vs_Y_40_45__464->SetContourLevel(17,1031.9);
   ThetaY_vs_Y_40_45__464->SetContourLevel(18,1092.6);
   ThetaY_vs_Y_40_45__464->SetContourLevel(19,1153.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__464->SetLineColor(ci);
   ThetaY_vs_Y_40_45__464->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__464->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__464->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__464->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__464->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__464->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__464->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__464->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__464->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__464->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__464->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__464->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__464->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__464->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__464->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_40_45","Reco vertices","lpf");
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
