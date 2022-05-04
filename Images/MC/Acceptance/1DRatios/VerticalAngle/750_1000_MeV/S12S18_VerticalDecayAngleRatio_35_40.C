void S12S18_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.1235989,125,2.348378);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_35_40__687 = new TH1D("S12S18_ThetaY_35_40__687","",630,-1575,1575);
   S12S18_ThetaY_35_40__687->SetBinContent(304,0.03030303);
   S12S18_ThetaY_35_40__687->SetBinContent(305,0.1515152);
   S12S18_ThetaY_35_40__687->SetBinContent(306,1);
   S12S18_ThetaY_35_40__687->SetBinContent(307,0.969697);
   S12S18_ThetaY_35_40__687->SetBinContent(308,1);
   S12S18_ThetaY_35_40__687->SetBinContent(309,1.090909);
   S12S18_ThetaY_35_40__687->SetBinContent(310,1.636364);
   S12S18_ThetaY_35_40__687->SetBinContent(311,1.515152);
   S12S18_ThetaY_35_40__687->SetBinContent(312,1.515152);
   S12S18_ThetaY_35_40__687->SetBinContent(313,1.515152);
   S12S18_ThetaY_35_40__687->SetBinContent(314,1.575758);
   S12S18_ThetaY_35_40__687->SetBinContent(315,1.30303);
   S12S18_ThetaY_35_40__687->SetBinContent(316,0.7878788);
   S12S18_ThetaY_35_40__687->SetBinContent(317,0.03030303);
   S12S18_ThetaY_35_40__687->SetBinError(304,0.03030303);
   S12S18_ThetaY_35_40__687->SetBinError(305,0.06775964);
   S12S18_ThetaY_35_40__687->SetBinError(306,0.1740777);
   S12S18_ThetaY_35_40__687->SetBinError(307,0.1714198);
   S12S18_ThetaY_35_40__687->SetBinError(308,0.1740777);
   S12S18_ThetaY_35_40__687->SetBinError(309,0.1818182);
   S12S18_ThetaY_35_40__687->SetBinError(310,0.2226809);
   S12S18_ThetaY_35_40__687->SetBinError(311,0.2142748);
   S12S18_ThetaY_35_40__687->SetBinError(312,0.2142748);
   S12S18_ThetaY_35_40__687->SetBinError(313,0.2142748);
   S12S18_ThetaY_35_40__687->SetBinError(314,0.2185183);
   S12S18_ThetaY_35_40__687->SetBinError(315,0.1987103);
   S12S18_ThetaY_35_40__687->SetBinError(316,0.1545157);
   S12S18_ThetaY_35_40__687->SetBinError(317,0.03030303);
   S12S18_ThetaY_35_40__687->SetMinimum(0);
   S12S18_ThetaY_35_40__687->SetMaximum(2.101181);
   S12S18_ThetaY_35_40__687->SetEntries(466);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__687->SetLineColor(ci);
   S12S18_ThetaY_35_40__687->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_35_40__687->SetMarkerColor(ci);
   S12S18_ThetaY_35_40__687->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_35_40__687->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_35_40__687->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__687->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__687->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__687->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_35_40__687->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_35_40__687->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__687->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__687->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_35_40__687->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_35_40__687->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_35_40__687->Draw("AE");
   
   TH1D *ThetaY_35_40__688 = new TH1D("ThetaY_35_40__688","",630,-1575,1575);
   ThetaY_35_40__688->SetBinContent(304,0.09599589);
   ThetaY_35_40__688->SetBinContent(305,0.4722793);
   ThetaY_35_40__688->SetBinContent(306,1);
   ThetaY_35_40__688->SetBinContent(307,1.305441);
   ThetaY_35_40__688->SetBinContent(308,1.5);
   ThetaY_35_40__688->SetBinContent(309,1.685832);
   ThetaY_35_40__688->SetBinContent(310,1.819815);
   ThetaY_35_40__688->SetBinContent(311,1.870637);
   ThetaY_35_40__688->SetBinContent(312,1.884497);
   ThetaY_35_40__688->SetBinContent(313,1.908111);
   ThetaY_35_40__688->SetBinContent(314,1.85729);
   ThetaY_35_40__688->SetBinContent(315,1.864476);
   ThetaY_35_40__688->SetBinContent(316,1.892197);
   ThetaY_35_40__688->SetBinContent(317,1.909651);
   ThetaY_35_40__688->SetBinContent(318,1.884497);
   ThetaY_35_40__688->SetBinContent(319,1.910164);
   ThetaY_35_40__688->SetBinContent(320,1.87269);
   ThetaY_35_40__688->SetBinContent(321,1.771047);
   ThetaY_35_40__688->SetBinContent(322,1.676591);
   ThetaY_35_40__688->SetBinContent(323,1.516427);
   ThetaY_35_40__688->SetBinContent(324,1.299281);
   ThetaY_35_40__688->SetBinContent(325,0.9851129);
   ThetaY_35_40__688->SetBinContent(326,0.4604723);
   ThetaY_35_40__688->SetBinContent(327,0.09856263);
   ThetaY_35_40__688->SetBinContent(328,0.001026694);
   ThetaY_35_40__688->SetBinError(304,0.007019915);
   ThetaY_35_40__688->SetBinError(305,0.01557059);
   ThetaY_35_40__688->SetBinError(306,0.02265716);
   ThetaY_35_40__688->SetBinError(307,0.02588715);
   ThetaY_35_40__688->SetBinError(308,0.02774924);
   ThetaY_35_40__688->SetBinError(309,0.02941796);
   ThetaY_35_40__688->SetBinError(310,0.03056463);
   ThetaY_35_40__688->SetBinError(311,0.03098848);
   ThetaY_35_40__688->SetBinError(312,0.03110307);
   ThetaY_35_40__688->SetBinError(313,0.03129733);
   ThetaY_35_40__688->SetBinError(314,0.03087773);
   ThetaY_35_40__688->SetBinError(315,0.03093741);
   ThetaY_35_40__688->SetBinError(316,0.03116655);
   ThetaY_35_40__688->SetBinError(317,0.03130996);
   ThetaY_35_40__688->SetBinError(318,0.03110307);
   ThetaY_35_40__688->SetBinError(319,0.03131417);
   ThetaY_35_40__688->SetBinError(320,0.03100548);
   ThetaY_35_40__688->SetBinError(321,0.03015231);
   ThetaY_35_40__688->SetBinError(322,0.02933723);
   ThetaY_35_40__688->SetBinError(323,0.02790078);
   ThetaY_35_40__688->SetBinError(324,0.025826);
   ThetaY_35_40__688->SetBinError(325,0.02248788);
   ThetaY_35_40__688->SetBinError(326,0.01537472);
   ThetaY_35_40__688->SetBinError(327,0.007113145);
   ThetaY_35_40__688->SetBinError(328,0.0007259823);
   ThetaY_35_40__688->SetEntries(67288);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__688->SetLineColor(ci);
   ThetaY_35_40__688->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__688->SetMarkerColor(ci);
   ThetaY_35_40__688->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__688->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__688->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__688->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__688->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__688->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__688->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__688->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__688->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__688->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__688->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__688->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__688->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__688->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__688->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__688->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__688->Draw("AEsame");
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
   
   Double_t _fx3230[25] = {
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
   62.5};
   Double_t _fy3230[25] = {
   0.3156701,
   0.3208169,
   1,
   0.7428115,
   0.6666667,
   0.6471044,
   0.8991922,
   0.8099657,
   0.8040085,
   0.7940584,
   0.8484178,
   0.698872,
   0.416383,
   0.01586836,
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
   Double_t _felx3230[25] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3230[25] = {
   0.261402,
   0.1388853,
   0.1746094,
   0.1314168,
   0.116092,
   0.1079186,
   0.1228934,
   0.1149275,
   0.1140766,
   0.1126557,
   0.1180989,
   0.1067734,
   0.08140618,
   0.01312771,
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
   Double_t _fehx3230[25] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3230[25] = {
   0.7323159,
   0.2180197,
   0.2082388,
   0.1570762,
   0.1383599,
   0.1276542,
   0.1409986,
   0.1325559,
   0.1315733,
   0.1299325,
   0.1358437,
   0.1245159,
   0.09915028,
   0.0365059,
   0.02961136,
   0.02921337,
   0.02979811,
   0.03150872,
   0.03328435,
   0.03680093,
   0.04295362,
   0.05665879,
   0.1212794,
   0.5687436,
   89.16955};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3230,_fy3230,_felx3230,_fehx3230,_fely3230,_fehy3230);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3230 = new TH1F("Graph_Graph3230","",100,-100,100);
   Graph_Graph3230->SetMinimum(0);
   Graph_Graph3230->SetMaximum(1.5);
   Graph_Graph3230->SetDirectory(0);
   Graph_Graph3230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3230->SetLineColor(ci);
   Graph_Graph3230->GetXaxis()->SetRange(1,100);
   Graph_Graph3230->GetXaxis()->CenterTitle(true);
   Graph_Graph3230->GetXaxis()->SetLabelFont(42);
   Graph_Graph3230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3230->GetXaxis()->SetTitleFont(42);
   Graph_Graph3230->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3230->GetYaxis()->CenterTitle(true);
   Graph_Graph3230->GetYaxis()->SetLabelFont(42);
   Graph_Graph3230->GetYaxis()->SetTitleFont(42);
   Graph_Graph3230->GetZaxis()->SetLabelFont(42);
   Graph_Graph3230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3230->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3230);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.101181,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__689 = new TH2D("ThetaY_vs_Y_35_40__689","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__689->SetBinContent(7924,187);
   ThetaY_vs_Y_35_40__689->SetBinContent(7950,920);
   ThetaY_vs_Y_35_40__689->SetBinContent(7976,1948);
   ThetaY_vs_Y_35_40__689->SetBinContent(8002,2543);
   ThetaY_vs_Y_35_40__689->SetBinContent(8028,2922);
   ThetaY_vs_Y_35_40__689->SetBinContent(8054,3284);
   ThetaY_vs_Y_35_40__689->SetBinContent(8080,3545);
   ThetaY_vs_Y_35_40__689->SetBinContent(8106,3644);
   ThetaY_vs_Y_35_40__689->SetBinContent(8132,3671);
   ThetaY_vs_Y_35_40__689->SetBinContent(8158,3717);
   ThetaY_vs_Y_35_40__689->SetBinContent(8184,3618);
   ThetaY_vs_Y_35_40__689->SetBinContent(8210,3632);
   ThetaY_vs_Y_35_40__689->SetBinContent(8236,3686);
   ThetaY_vs_Y_35_40__689->SetBinContent(8262,3720);
   ThetaY_vs_Y_35_40__689->SetBinContent(8288,3671);
   ThetaY_vs_Y_35_40__689->SetBinContent(8314,3721);
   ThetaY_vs_Y_35_40__689->SetBinContent(8340,3648);
   ThetaY_vs_Y_35_40__689->SetBinContent(8366,3450);
   ThetaY_vs_Y_35_40__689->SetBinContent(8392,3266);
   ThetaY_vs_Y_35_40__689->SetBinContent(8418,2954);
   ThetaY_vs_Y_35_40__689->SetBinContent(8444,2531);
   ThetaY_vs_Y_35_40__689->SetBinContent(8470,1919);
   ThetaY_vs_Y_35_40__689->SetBinContent(8496,897);
   ThetaY_vs_Y_35_40__689->SetBinContent(8522,192);
   ThetaY_vs_Y_35_40__689->SetBinContent(8548,2);
   ThetaY_vs_Y_35_40__689->SetEntries(67288);
   ThetaY_vs_Y_35_40__689->SetContour(20);
   ThetaY_vs_Y_35_40__689->SetContourLevel(0,0);
   ThetaY_vs_Y_35_40__689->SetContourLevel(1,186.05);
   ThetaY_vs_Y_35_40__689->SetContourLevel(2,372.1);
   ThetaY_vs_Y_35_40__689->SetContourLevel(3,558.15);
   ThetaY_vs_Y_35_40__689->SetContourLevel(4,744.2);
   ThetaY_vs_Y_35_40__689->SetContourLevel(5,930.25);
   ThetaY_vs_Y_35_40__689->SetContourLevel(6,1116.3);
   ThetaY_vs_Y_35_40__689->SetContourLevel(7,1302.35);
   ThetaY_vs_Y_35_40__689->SetContourLevel(8,1488.4);
   ThetaY_vs_Y_35_40__689->SetContourLevel(9,1674.45);
   ThetaY_vs_Y_35_40__689->SetContourLevel(10,1860.5);
   ThetaY_vs_Y_35_40__689->SetContourLevel(11,2046.55);
   ThetaY_vs_Y_35_40__689->SetContourLevel(12,2232.6);
   ThetaY_vs_Y_35_40__689->SetContourLevel(13,2418.65);
   ThetaY_vs_Y_35_40__689->SetContourLevel(14,2604.7);
   ThetaY_vs_Y_35_40__689->SetContourLevel(15,2790.75);
   ThetaY_vs_Y_35_40__689->SetContourLevel(16,2976.8);
   ThetaY_vs_Y_35_40__689->SetContourLevel(17,3162.85);
   ThetaY_vs_Y_35_40__689->SetContourLevel(18,3348.9);
   ThetaY_vs_Y_35_40__689->SetContourLevel(19,3534.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__689->SetLineColor(ci);
   ThetaY_vs_Y_35_40__689->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__689->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__689->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__689->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__689->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__689->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__689->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__689->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__689->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__689->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__689->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__689->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__689->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__689->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__689->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_35_40","Reco vertices","lpf");
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
