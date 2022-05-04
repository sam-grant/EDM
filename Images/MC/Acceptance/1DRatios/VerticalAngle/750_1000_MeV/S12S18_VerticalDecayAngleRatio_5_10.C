void S12S18_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.06509799,125,1.236862);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__669 = new TH1D("S12S18_ThetaY_5_10__669","",630,-1575,1575);
   S12S18_ThetaY_5_10__669->SetBinContent(305,0.003472222);
   S12S18_ThetaY_5_10__669->SetBinContent(306,0.03472222);
   S12S18_ThetaY_5_10__669->SetBinContent(307,0.1753472);
   S12S18_ThetaY_5_10__669->SetBinContent(308,0.6197917);
   S12S18_ThetaY_5_10__669->SetBinContent(309,0.8402778);
   S12S18_ThetaY_5_10__669->SetBinContent(310,0.8697917);
   S12S18_ThetaY_5_10__669->SetBinContent(311,0.9861111);
   S12S18_ThetaY_5_10__669->SetBinContent(312,0.8975694);
   S12S18_ThetaY_5_10__669->SetBinContent(313,0.9166667);
   S12S18_ThetaY_5_10__669->SetBinContent(314,1);
   S12S18_ThetaY_5_10__669->SetBinContent(315,0.9565972);
   S12S18_ThetaY_5_10__669->SetBinContent(316,0.9513889);
   S12S18_ThetaY_5_10__669->SetBinContent(317,0.8472222);
   S12S18_ThetaY_5_10__669->SetBinContent(318,0.9461806);
   S12S18_ThetaY_5_10__669->SetBinContent(319,0.953125);
   S12S18_ThetaY_5_10__669->SetBinContent(320,0.8350694);
   S12S18_ThetaY_5_10__669->SetBinContent(321,0.4045139);
   S12S18_ThetaY_5_10__669->SetBinContent(322,0.06944444);
   S12S18_ThetaY_5_10__669->SetBinContent(323,0.005208333);
   S12S18_ThetaY_5_10__669->SetBinError(305,0.002455232);
   S12S18_ThetaY_5_10__669->SetBinError(306,0.007764125);
   S12S18_ThetaY_5_10__669->SetBinError(307,0.0174477);
   S12S18_ThetaY_5_10__669->SetBinError(308,0.03280285);
   S12S18_ThetaY_5_10__669->SetBinError(309,0.03819444);
   S12S18_ThetaY_5_10__669->SetBinError(310,0.03885943);
   S12S18_ThetaY_5_10__669->SetBinError(311,0.0413763);
   S12S18_ThetaY_5_10__669->SetBinError(312,0.03947506);
   S12S18_ThetaY_5_10__669->SetBinError(313,0.0398928);
   S12S18_ThetaY_5_10__669->SetBinError(314,0.04166667);
   S12S18_ThetaY_5_10__669->SetBinError(315,0.04075241);
   S12S18_ThetaY_5_10__669->SetBinError(316,0.04064132);
   S12S18_ThetaY_5_10__669->SetBinError(317,0.03835195);
   S12S18_ThetaY_5_10__669->SetBinError(318,0.04052992);
   S12S18_ThetaY_5_10__669->SetBinError(319,0.04067838);
   S12S18_ThetaY_5_10__669->SetBinError(320,0.03807589);
   S12S18_ThetaY_5_10__669->SetBinError(321,0.02650059);
   S12S18_ThetaY_5_10__669->SetBinError(322,0.01098013);
   S12S18_ThetaY_5_10__669->SetBinError(323,0.003007033);
   S12S18_ThetaY_5_10__669->SetMinimum(0);
   S12S18_ThetaY_5_10__669->SetMaximum(1.106666);
   S12S18_ThetaY_5_10__669->SetEntries(7092);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__669->SetLineColor(ci);
   S12S18_ThetaY_5_10__669->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__669->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__669->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__669->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__669->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__669->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__669->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__669->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__669->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__669->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__669->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__669->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__669->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__669->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__669->Draw("AE");
   
   TH1D *ThetaY_5_10__670 = new TH1D("ThetaY_5_10__670","",630,-1575,1575);
   ThetaY_5_10__670->SetBinContent(303,0.0003773501);
   ThetaY_5_10__670->SetBinContent(304,0.05149719);
   ThetaY_5_10__670->SetBinContent(305,0.2401057);
   ThetaY_5_10__670->SetBinContent(306,0.5059599);
   ThetaY_5_10__670->SetBinContent(307,0.688109);
   ThetaY_5_10__670->SetBinContent(308,0.8179397);
   ThetaY_5_10__670->SetBinContent(309,0.8924552);
   ThetaY_5_10__670->SetBinContent(310,0.943908);
   ThetaY_5_10__670->SetBinContent(311,0.9879914);
   ThetaY_5_10__670->SetBinContent(312,0.9869481);
   ThetaY_5_10__670->SetBinContent(313,0.992342);
   ThetaY_5_10__670->SetBinContent(314,1);
   ThetaY_5_10__670->SetBinContent(315,0.999889);
   ThetaY_5_10__670->SetBinContent(316,1.000244);
   ThetaY_5_10__670->SetBinContent(317,0.9937626);
   ThetaY_5_10__670->SetBinContent(318,0.9907216);
   ThetaY_5_10__670->SetBinContent(319,1.00606);
   ThetaY_5_10__670->SetBinContent(320,0.9861712);
   ThetaY_5_10__670->SetBinContent(321,0.9471932);
   ThetaY_5_10__670->SetBinContent(322,0.8976271);
   ThetaY_5_10__670->SetBinContent(323,0.8162305);
   ThetaY_5_10__670->SetBinContent(324,0.6968547);
   ThetaY_5_10__670->SetBinContent(325,0.503829);
   ThetaY_5_10__670->SetBinContent(326,0.2399725);
   ThetaY_5_10__670->SetBinContent(327,0.05225189);
   ThetaY_5_10__670->SetBinContent(328,0.0003995472);
   ThetaY_5_10__670->SetBinError(303,9.152085e-05);
   ThetaY_5_10__670->SetBinError(304,0.001069152);
   ThetaY_5_10__670->SetBinError(305,0.002308602);
   ThetaY_5_10__670->SetBinError(306,0.003351242);
   ThetaY_5_10__670->SetBinError(307,0.003908197);
   ThetaY_5_10__670->SetBinError(308,0.004260969);
   ThetaY_5_10__670->SetBinError(309,0.00445083);
   ThetaY_5_10__670->SetBinError(310,0.004577334);
   ThetaY_5_10__670->SetBinError(311,0.004683002);
   ThetaY_5_10__670->SetBinError(312,0.004680529);
   ThetaY_5_10__670->SetBinError(313,0.004693302);
   ThetaY_5_10__670->SetBinError(314,0.004711376);
   ThetaY_5_10__670->SetBinError(315,0.004711115);
   ThetaY_5_10__670->SetBinError(316,0.004711951);
   ThetaY_5_10__670->SetBinError(317,0.00469666);
   ThetaY_5_10__670->SetBinError(318,0.004689468);
   ThetaY_5_10__670->SetBinError(319,0.00472563);
   ThetaY_5_10__670->SetBinError(320,0.004678687);
   ThetaY_5_10__670->SetBinError(321,0.004585293);
   ThetaY_5_10__670->SetBinError(322,0.004463708);
   ThetaY_5_10__670->SetBinError(323,0.004256515);
   ThetaY_5_10__670->SetBinError(324,0.003932954);
   ThetaY_5_10__670->SetBinError(325,0.003344178);
   ThetaY_5_10__670->SetBinError(326,0.002307961);
   ThetaY_5_10__670->SetBinError(327,0.001076958);
   ThetaY_5_10__670->SetBinError(328,9.417417e-05);
   ThetaY_5_10__670->SetEntries(821678);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__670->SetLineColor(ci);
   ThetaY_5_10__670->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__670->SetMarkerColor(ci);
   ThetaY_5_10__670->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__670->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__670->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__670->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__670->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__670->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__670->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__670->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__670->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__670->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__670->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__670->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__670->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__670->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__670->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__670->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__670->Draw("AEsame");
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
   
   Double_t _fx3224[26] = {
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
   62.5};
   Double_t _fy3224[26] = {
   0,
   0,
   0.01446123,
   0.06862643,
   0.2548248,
   0.7577474,
   0.9415349,
   0.9214793,
   0.9980969,
   0.9094393,
   0.9237407,
   1,
   0.9567034,
   0.9511566,
   0.8525398,
   0.9550418,
   0.947384,
   0.8467794,
   0.4270659,
   0.07736447,
   0.006380959,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3224[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3224[26] = {
   0,
   0,
   0.009341154,
   0.01522238,
   0.02535478,
   0.04027865,
   0.04303848,
   0.04139618,
   0.04213272,
   0.04021552,
   0.04042411,
   0.04191957,
   0.04099257,
   0.04086481,
   0.03878872,
   0.04114544,
   0.04066469,
   0.03880435,
   0.02803385,
   0.01218692,
   0.003472845,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3224[26] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3224[26] = {
   8.94582,
   0.0620905,
   0.01907743,
   0.01904255,
   0.0280133,
   0.04247995,
   0.04505339,
   0.04329999,
   0.04395095,
   0.04203538,
   0.042234,
   0.04371574,
   0.04278875,
   0.04266033,
   0.0405959,
   0.04295842,
   0.04244971,
   0.0406256,
   0.02993807,
   0.0142768,
   0.006207441,
   0.00458677,
   0.006344112,
   0.01332024,
   0.06119335,
   8.423008};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3224,_fy3224,_felx3224,_fehx3224,_fely3224,_fehy3224);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3224 = new TH1F("Graph_Graph3224","",100,-100,100);
   Graph_Graph3224->SetMinimum(0);
   Graph_Graph3224->SetMaximum(1.5);
   Graph_Graph3224->SetDirectory(0);
   Graph_Graph3224->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3224->SetLineColor(ci);
   Graph_Graph3224->GetXaxis()->SetRange(1,100);
   Graph_Graph3224->GetXaxis()->CenterTitle(true);
   Graph_Graph3224->GetXaxis()->SetLabelFont(42);
   Graph_Graph3224->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3224->GetXaxis()->SetTitleFont(42);
   Graph_Graph3224->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3224->GetYaxis()->CenterTitle(true);
   Graph_Graph3224->GetYaxis()->SetLabelFont(42);
   Graph_Graph3224->GetYaxis()->SetTitleFont(42);
   Graph_Graph3224->GetZaxis()->SetLabelFont(42);
   Graph_Graph3224->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3224->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3224);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106666,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__671 = new TH2D("ThetaY_vs_Y_5_10__671","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__671->SetBinContent(7892,17);
   ThetaY_vs_Y_5_10__671->SetBinContent(7918,2320);
   ThetaY_vs_Y_5_10__671->SetBinContent(7944,10817);
   ThetaY_vs_Y_5_10__671->SetBinContent(7970,22794);
   ThetaY_vs_Y_5_10__671->SetBinContent(7996,31000);
   ThetaY_vs_Y_5_10__671->SetBinContent(8022,36849);
   ThetaY_vs_Y_5_10__671->SetBinContent(8048,40206);
   ThetaY_vs_Y_5_10__671->SetBinContent(8074,42524);
   ThetaY_vs_Y_5_10__671->SetBinContent(8100,44510);
   ThetaY_vs_Y_5_10__671->SetBinContent(8126,44463);
   ThetaY_vs_Y_5_10__671->SetBinContent(8152,44706);
   ThetaY_vs_Y_5_10__671->SetBinContent(8178,45051);
   ThetaY_vs_Y_5_10__671->SetBinContent(8204,45046);
   ThetaY_vs_Y_5_10__671->SetBinContent(8230,45062);
   ThetaY_vs_Y_5_10__671->SetBinContent(8256,44770);
   ThetaY_vs_Y_5_10__671->SetBinContent(8282,44633);
   ThetaY_vs_Y_5_10__671->SetBinContent(8308,45324);
   ThetaY_vs_Y_5_10__671->SetBinContent(8334,44428);
   ThetaY_vs_Y_5_10__671->SetBinContent(8360,42672);
   ThetaY_vs_Y_5_10__671->SetBinContent(8386,40439);
   ThetaY_vs_Y_5_10__671->SetBinContent(8412,36772);
   ThetaY_vs_Y_5_10__671->SetBinContent(8438,31394);
   ThetaY_vs_Y_5_10__671->SetBinContent(8464,22698);
   ThetaY_vs_Y_5_10__671->SetBinContent(8490,10811);
   ThetaY_vs_Y_5_10__671->SetBinContent(8516,2354);
   ThetaY_vs_Y_5_10__671->SetBinContent(8542,18);
   ThetaY_vs_Y_5_10__671->SetEntries(821678);
   ThetaY_vs_Y_5_10__671->SetContour(20);
   ThetaY_vs_Y_5_10__671->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__671->SetContourLevel(1,2266.2);
   ThetaY_vs_Y_5_10__671->SetContourLevel(2,4532.4);
   ThetaY_vs_Y_5_10__671->SetContourLevel(3,6798.6);
   ThetaY_vs_Y_5_10__671->SetContourLevel(4,9064.8);
   ThetaY_vs_Y_5_10__671->SetContourLevel(5,11331);
   ThetaY_vs_Y_5_10__671->SetContourLevel(6,13597.2);
   ThetaY_vs_Y_5_10__671->SetContourLevel(7,15863.4);
   ThetaY_vs_Y_5_10__671->SetContourLevel(8,18129.6);
   ThetaY_vs_Y_5_10__671->SetContourLevel(9,20395.8);
   ThetaY_vs_Y_5_10__671->SetContourLevel(10,22662);
   ThetaY_vs_Y_5_10__671->SetContourLevel(11,24928.2);
   ThetaY_vs_Y_5_10__671->SetContourLevel(12,27194.4);
   ThetaY_vs_Y_5_10__671->SetContourLevel(13,29460.6);
   ThetaY_vs_Y_5_10__671->SetContourLevel(14,31726.8);
   ThetaY_vs_Y_5_10__671->SetContourLevel(15,33993);
   ThetaY_vs_Y_5_10__671->SetContourLevel(16,36259.2);
   ThetaY_vs_Y_5_10__671->SetContourLevel(17,38525.4);
   ThetaY_vs_Y_5_10__671->SetContourLevel(18,40791.6);
   ThetaY_vs_Y_5_10__671->SetContourLevel(19,43057.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__671->SetLineColor(ci);
   ThetaY_vs_Y_5_10__671->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__671->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__671->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__671->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__671->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__671->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__671->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__671->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__671->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__671->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__671->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__671->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__671->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__671->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__671->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_5_10","Reco vertices","lpf");
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
