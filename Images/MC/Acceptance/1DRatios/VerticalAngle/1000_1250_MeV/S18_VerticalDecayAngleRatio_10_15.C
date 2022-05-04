void S18_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.06745511,125,1.281647);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_10_15__786 = new TH1D("S18_ThetaY_10_15__786","",630,-1575,1575);
   S18_ThetaY_10_15__786->SetBinContent(306,0.00330033);
   S18_ThetaY_10_15__786->SetBinContent(307,0.05280528);
   S18_ThetaY_10_15__786->SetBinContent(308,0.3234323);
   S18_ThetaY_10_15__786->SetBinContent(309,0.669967);
   S18_ThetaY_10_15__786->SetBinContent(310,0.8217822);
   S18_ThetaY_10_15__786->SetBinContent(311,0.8910891);
   S18_ThetaY_10_15__786->SetBinContent(312,1);
   S18_ThetaY_10_15__786->SetBinContent(313,0.9141914);
   S18_ThetaY_10_15__786->SetBinContent(314,0.9537954);
   S18_ThetaY_10_15__786->SetBinContent(315,0.9669967);
   S18_ThetaY_10_15__786->SetBinContent(316,0.8547855);
   S18_ThetaY_10_15__786->SetBinContent(317,0.970297);
   S18_ThetaY_10_15__786->SetBinContent(318,0.9405941);
   S18_ThetaY_10_15__786->SetBinContent(319,0.6534653);
   S18_ThetaY_10_15__786->SetBinContent(320,0.1716172);
   S18_ThetaY_10_15__786->SetBinContent(321,0.01650165);
   S18_ThetaY_10_15__786->SetBinError(306,0.00330033);
   S18_ThetaY_10_15__786->SetBinError(307,0.01320132);
   S18_ThetaY_10_15__786->SetBinError(308,0.0326716);
   S18_ThetaY_10_15__786->SetBinError(309,0.04702246);
   S18_ThetaY_10_15__786->SetBinError(310,0.05207833);
   S18_ThetaY_10_15__786->SetBinError(311,0.05422996);
   S18_ThetaY_10_15__786->SetBinError(312,0.0574485);
   S18_ThetaY_10_15__786->SetBinError(313,0.05492844);
   S18_ThetaY_10_15__786->SetBinError(314,0.05610561);
   S18_ThetaY_10_15__786->SetBinError(315,0.05649255);
   S18_ThetaY_10_15__786->SetBinError(316,0.05311379);
   S18_ThetaY_10_15__786->SetBinError(317,0.05658887);
   S18_ThetaY_10_15__786->SetBinError(318,0.05571598);
   S18_ThetaY_10_15__786->SetBinError(319,0.04643976);
   S18_ThetaY_10_15__786->SetBinError(320,0.02379902);
   S18_ThetaY_10_15__786->SetBinError(321,0.007379762);
   S18_ThetaY_10_15__786->SetMinimum(0);
   S18_ThetaY_10_15__786->SetMaximum(1.146737);
   S18_ThetaY_10_15__786->SetEntries(3092);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__786->SetLineColor(ci);
   S18_ThetaY_10_15__786->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_10_15__786->SetMarkerColor(ci);
   S18_ThetaY_10_15__786->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_10_15__786->GetXaxis()->SetRange(296,335);
   S18_ThetaY_10_15__786->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__786->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__786->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__786->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_10_15__786->GetYaxis()->CenterTitle(true);
   S18_ThetaY_10_15__786->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__786->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__786->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_10_15__786->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_10_15__786->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_10_15__786->Draw("AE");
   
   TH1D *ThetaY_10_15__787 = new TH1D("ThetaY_10_15__787","",630,-1575,1575);
   ThetaY_10_15__787->SetBinContent(305,4.978096e-05);
   ThetaY_10_15__787->SetBinContent(306,0.05319096);
   ThetaY_10_15__787->SetBinContent(307,0.3126493);
   ThetaY_10_15__787->SetBinContent(308,0.5950816);
   ThetaY_10_15__787->SetBinContent(309,0.7759857);
   ThetaY_10_15__787->SetBinContent(310,0.8744026);
   ThetaY_10_15__787->SetBinContent(311,0.9533801);
   ThetaY_10_15__787->SetBinContent(312,1);
   ThetaY_10_15__787->SetBinContent(313,1.008513);
   ThetaY_10_15__787->SetBinContent(314,1.042488);
   ThetaY_10_15__787->SetBinContent(315,1.037261);
   ThetaY_10_15__787->SetBinContent(316,1.022003);
   ThetaY_10_15__787->SetBinContent(317,1.03171);
   ThetaY_10_15__787->SetBinContent(318,1.019937);
   ThetaY_10_15__787->SetBinContent(319,0.9973865);
   ThetaY_10_15__787->SetBinContent(320,0.9471824);
   ThetaY_10_15__787->SetBinContent(321,0.8877937);
   ThetaY_10_15__787->SetBinContent(322,0.7680954);
   ThetaY_10_15__787->SetBinContent(323,0.5941856);
   ThetaY_10_15__787->SetBinContent(324,0.311828);
   ThetaY_10_15__787->SetBinContent(325,0.05154819);
   ThetaY_10_15__787->SetBinError(305,3.520046e-05);
   ThetaY_10_15__787->SetBinError(306,0.00115063);
   ThetaY_10_15__787->SetBinError(307,0.002789622);
   ThetaY_10_15__787->SetBinError(308,0.003848619);
   ThetaY_10_15__787->SetBinError(309,0.004394844);
   ThetaY_10_15__787->SetBinError(310,0.004665223);
   ThetaY_10_15__787->SetBinError(311,0.004871354);
   ThetaY_10_15__787->SetBinError(312,0.004989036);
   ThetaY_10_15__787->SetBinError(313,0.005010226);
   ThetaY_10_15__787->SetBinError(314,0.005093921);
   ThetaY_10_15__787->SetBinError(315,0.005081134);
   ThetaY_10_15__787->SetBinError(316,0.005043625);
   ThetaY_10_15__787->SetBinError(317,0.005067521);
   ThetaY_10_15__787->SetBinError(318,0.005038525);
   ThetaY_10_15__787->SetBinError(319,0.004982512);
   ThetaY_10_15__787->SetBinError(320,0.004855494);
   ThetaY_10_15__787->SetBinError(321,0.00470081);
   ThetaY_10_15__787->SetBinError(322,0.004372444);
   ThetaY_10_15__787->SetBinError(323,0.00384572);
   ThetaY_10_15__787->SetBinError(324,0.002785956);
   ThetaY_10_15__787->SetBinError(325,0.001132722);
   ThetaY_10_15__787->SetEntries(614077);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__787->SetLineColor(ci);
   ThetaY_10_15__787->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__787->SetMarkerColor(ci);
   ThetaY_10_15__787->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__787->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__787->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__787->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__787->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__787->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__787->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__787->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__787->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__787->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__787->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__787->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__787->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__787->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__787->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__787->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__787->Draw("AEsame");
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
   
   Double_t _fx3263[21] = {
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
   47.5};
   Double_t _fy3263[21] = {
   0,
   0.06204682,
   0.1688962,
   0.5435092,
   0.8633755,
   0.9398213,
   0.934663,
   1,
   0.906475,
   0.9149221,
   0.9322597,
   0.8363824,
   0.9404741,
   0.9222077,
   0.6551777,
   0.181187,
   0.01858726,
   0,
   0,
   0,
   0};
   Double_t _felx3263[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3263[21] = {
   0,
   0.05133258,
   0.04180367,
   0.05492001,
   0.06074302,
   0.0597285,
   0.05704584,
   0.05763222,
   0.05461703,
   0.05397245,
   0.05462251,
   0.05209966,
   0.0550118,
   0.05478371,
   0.04663635,
   0.02506184,
   0.008029015,
   0,
   0,
   0,
   0};
   Double_t _fehx3263[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3263[21] = {
   200.2929,
   0.1427885,
   0.05370192,
   0.06077366,
   0.0651768,
   0.06365246,
   0.06064012,
   0.06105494,
   0.05801274,
   0.05725567,
   0.05792207,
   0.05545206,
   0.05832918,
   0.0581404,
   0.05008155,
   0.02879439,
   0.01257566,
   0.007910685,
   0.01022612,
   0.01948647,
   0.1179223};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3263,_fy3263,_felx3263,_fehx3263,_fely3263,_fehy3263);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3263 = new TH1F("Graph_Graph3263","",100,-100,100);
   Graph_Graph3263->SetMinimum(0);
   Graph_Graph3263->SetMaximum(1.5);
   Graph_Graph3263->SetDirectory(0);
   Graph_Graph3263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3263->SetLineColor(ci);
   Graph_Graph3263->GetXaxis()->SetRange(1,100);
   Graph_Graph3263->GetXaxis()->CenterTitle(true);
   Graph_Graph3263->GetXaxis()->SetLabelFont(42);
   Graph_Graph3263->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3263->GetXaxis()->SetTitleFont(42);
   Graph_Graph3263->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3263->GetYaxis()->CenterTitle(true);
   Graph_Graph3263->GetYaxis()->SetLabelFont(42);
   Graph_Graph3263->GetYaxis()->SetTitleFont(42);
   Graph_Graph3263->GetZaxis()->SetLabelFont(42);
   Graph_Graph3263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3263->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3263);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.146737,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__788 = new TH2D("ThetaY_vs_Y_10_15__788","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__788->SetBinContent(7945,2);
   ThetaY_vs_Y_10_15__788->SetBinContent(7971,2137);
   ThetaY_vs_Y_10_15__788->SetBinContent(7997,12561);
   ThetaY_vs_Y_10_15__788->SetBinContent(8023,23908);
   ThetaY_vs_Y_10_15__788->SetBinContent(8049,31176);
   ThetaY_vs_Y_10_15__788->SetBinContent(8075,35130);
   ThetaY_vs_Y_10_15__788->SetBinContent(8101,38303);
   ThetaY_vs_Y_10_15__788->SetBinContent(8127,40176);
   ThetaY_vs_Y_10_15__788->SetBinContent(8153,40518);
   ThetaY_vs_Y_10_15__788->SetBinContent(8179,41883);
   ThetaY_vs_Y_10_15__788->SetBinContent(8205,41673);
   ThetaY_vs_Y_10_15__788->SetBinContent(8231,41060);
   ThetaY_vs_Y_10_15__788->SetBinContent(8257,41450);
   ThetaY_vs_Y_10_15__788->SetBinContent(8283,40977);
   ThetaY_vs_Y_10_15__788->SetBinContent(8309,40071);
   ThetaY_vs_Y_10_15__788->SetBinContent(8335,38054);
   ThetaY_vs_Y_10_15__788->SetBinContent(8361,35668);
   ThetaY_vs_Y_10_15__788->SetBinContent(8387,30859);
   ThetaY_vs_Y_10_15__788->SetBinContent(8413,23872);
   ThetaY_vs_Y_10_15__788->SetBinContent(8439,12528);
   ThetaY_vs_Y_10_15__788->SetBinContent(8465,2071);
   ThetaY_vs_Y_10_15__788->SetEntries(614077);
   ThetaY_vs_Y_10_15__788->SetContour(20);
   ThetaY_vs_Y_10_15__788->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__788->SetContourLevel(1,2094.15);
   ThetaY_vs_Y_10_15__788->SetContourLevel(2,4188.3);
   ThetaY_vs_Y_10_15__788->SetContourLevel(3,6282.45);
   ThetaY_vs_Y_10_15__788->SetContourLevel(4,8376.6);
   ThetaY_vs_Y_10_15__788->SetContourLevel(5,10470.75);
   ThetaY_vs_Y_10_15__788->SetContourLevel(6,12564.9);
   ThetaY_vs_Y_10_15__788->SetContourLevel(7,14659.05);
   ThetaY_vs_Y_10_15__788->SetContourLevel(8,16753.2);
   ThetaY_vs_Y_10_15__788->SetContourLevel(9,18847.35);
   ThetaY_vs_Y_10_15__788->SetContourLevel(10,20941.5);
   ThetaY_vs_Y_10_15__788->SetContourLevel(11,23035.65);
   ThetaY_vs_Y_10_15__788->SetContourLevel(12,25129.8);
   ThetaY_vs_Y_10_15__788->SetContourLevel(13,27223.95);
   ThetaY_vs_Y_10_15__788->SetContourLevel(14,29318.1);
   ThetaY_vs_Y_10_15__788->SetContourLevel(15,31412.25);
   ThetaY_vs_Y_10_15__788->SetContourLevel(16,33506.4);
   ThetaY_vs_Y_10_15__788->SetContourLevel(17,35600.55);
   ThetaY_vs_Y_10_15__788->SetContourLevel(18,37694.7);
   ThetaY_vs_Y_10_15__788->SetContourLevel(19,39788.85);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__788->SetLineColor(ci);
   ThetaY_vs_Y_10_15__788->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__788->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__788->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__788->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__788->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__788->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__788->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__788->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__788->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__788->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__788->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__788->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__788->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__788->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__788->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_10_15","Reco vertices","lpf");
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
