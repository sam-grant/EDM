void S12S18_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.06487727,125,1.232668);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__840 = new TH1D("S12S18_ThetaY_5_10__840","",630,-1575,1575);
   S12S18_ThetaY_5_10__840->SetBinContent(307,0.01402525);
   S12S18_ThetaY_5_10__840->SetBinContent(308,0.1514727);
   S12S18_ThetaY_5_10__840->SetBinContent(309,0.4978962);
   S12S18_ThetaY_5_10__840->SetBinContent(310,0.8485273);
   S12S18_ThetaY_5_10__840->SetBinContent(311,0.8695652);
   S12S18_ThetaY_5_10__840->SetBinContent(312,0.9663394);
   S12S18_ThetaY_5_10__840->SetBinContent(313,0.9677419);
   S12S18_ThetaY_5_10__840->SetBinContent(314,0.8513324);
   S12S18_ThetaY_5_10__840->SetBinContent(315,0.9186536);
   S12S18_ThetaY_5_10__840->SetBinContent(316,1);
   S12S18_ThetaY_5_10__840->SetBinContent(317,0.943899);
   S12S18_ThetaY_5_10__840->SetBinContent(318,0.9495091);
   S12S18_ThetaY_5_10__840->SetBinContent(319,0.8274895);
   S12S18_ThetaY_5_10__840->SetBinContent(320,0.5539972);
   S12S18_ThetaY_5_10__840->SetBinContent(321,0.1065919);
   S12S18_ThetaY_5_10__840->SetBinContent(322,0.005610098);
   S12S18_ThetaY_5_10__840->SetBinError(307,0.004435172);
   S12S18_ThetaY_5_10__840->SetBinError(308,0.01457546);
   S12S18_ThetaY_5_10__840->SetBinError(309,0.02642559);
   S12S18_ThetaY_5_10__840->SetBinError(310,0.03449754);
   S12S18_ThetaY_5_10__840->SetBinError(311,0.03492258);
   S12S18_ThetaY_5_10__840->SetBinError(312,0.0368146);
   S12S18_ThetaY_5_10__840->SetBinError(313,0.03684131);
   S12S18_ThetaY_5_10__840->SetBinError(314,0.03455452);
   S12S18_ThetaY_5_10__840->SetBinError(315,0.03589477);
   S12S18_ThetaY_5_10__840->SetBinError(316,0.03745029);
   S12S18_ThetaY_5_10__840->SetBinError(317,0.03638463);
   S12S18_ThetaY_5_10__840->SetBinError(318,0.0364926);
   S12S18_ThetaY_5_10__840->SetBinError(319,0.0340672);
   S12S18_ThetaY_5_10__840->SetBinError(320,0.02787462);
   S12S18_ThetaY_5_10__840->SetBinError(321,0.01222693);
   S12S18_ThetaY_5_10__840->SetBinError(322,0.002805049);
   S12S18_ThetaY_5_10__840->SetMinimum(0);
   S12S18_ThetaY_5_10__840->SetMaximum(1.102914);
   S12S18_ThetaY_5_10__840->SetEntries(7467);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__840->SetLineColor(ci);
   S12S18_ThetaY_5_10__840->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__840->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__840->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__840->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__840->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__840->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__840->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__840->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__840->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__840->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__840->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__840->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__840->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__840->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__840->Draw("AE");
   
   TH1D *ThetaY_5_10__841 = new TH1D("ThetaY_5_10__841","",630,-1575,1575);
   ThetaY_5_10__841->SetBinContent(305,9.882985e-05);
   ThetaY_5_10__841->SetBinContent(306,0.04809061);
   ThetaY_5_10__841->SetBinContent(307,0.2968256);
   ThetaY_5_10__841->SetBinContent(308,0.5685286);
   ThetaY_5_10__841->SetBinContent(309,0.740374);
   ThetaY_5_10__841->SetBinContent(310,0.8544632);
   ThetaY_5_10__841->SetBinContent(311,0.9227744);
   ThetaY_5_10__841->SetBinContent(312,0.9688291);
   ThetaY_5_10__841->SetBinContent(313,0.9849581);
   ThetaY_5_10__841->SetBinContent(314,0.992568);
   ThetaY_5_10__841->SetBinContent(315,1.002649);
   ThetaY_5_10__841->SetBinContent(316,1);
   ThetaY_5_10__841->SetBinContent(317,0.9953748);
   ThetaY_5_10__841->SetBinContent(318,0.9784353);
   ThetaY_5_10__841->SetBinContent(319,0.9660816);
   ThetaY_5_10__841->SetBinContent(320,0.9228732);
   ThetaY_5_10__841->SetBinContent(321,0.8488101);
   ThetaY_5_10__841->SetBinContent(322,0.7390497);
   ThetaY_5_10__841->SetBinContent(323,0.5674217);
   ThetaY_5_10__841->SetBinContent(324,0.2979127);
   ThetaY_5_10__841->SetBinContent(325,0.04830803);
   ThetaY_5_10__841->SetBinContent(326,5.929791e-05);
   ThetaY_5_10__841->SetBinError(305,4.419805e-05);
   ThetaY_5_10__841->SetBinError(306,0.0009749654);
   ThetaY_5_10__841->SetBinError(307,0.002422199);
   ThetaY_5_10__841->SetBinError(308,0.003352241);
   ThetaY_5_10__841->SetBinError(309,0.003825469);
   ThetaY_5_10__841->SetBinError(310,0.004109659);
   ThetaY_5_10__841->SetBinError(311,0.004270776);
   ThetaY_5_10__841->SetBinError(312,0.004376054);
   ThetaY_5_10__841->SetBinError(313,0.00441233);
   ThetaY_5_10__841->SetBinError(314,0.004429342);
   ThetaY_5_10__841->SetBinError(315,0.004451778);
   ThetaY_5_10__841->SetBinError(316,0.004445894);
   ThetaY_5_10__841->SetBinError(317,0.0044356);
   ThetaY_5_10__841->SetBinError(318,0.004397695);
   ThetaY_5_10__841->SetBinError(319,0.004369844);
   ThetaY_5_10__841->SetBinError(320,0.004271005);
   ThetaY_5_10__841->SetBinError(321,0.004096041);
   ThetaY_5_10__841->SetBinError(322,0.003822046);
   ThetaY_5_10__841->SetBinError(323,0.003348976);
   ThetaY_5_10__841->SetBinError(324,0.00242663);
   ThetaY_5_10__841->SetBinError(325,0.0009771669);
   ThetaY_5_10__841->SetBinError(326,3.423567e-05);
   ThetaY_5_10__841->SetEntries(745953);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__841->SetLineColor(ci);
   ThetaY_5_10__841->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__841->SetMarkerColor(ci);
   ThetaY_5_10__841->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__841->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__841->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__841->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__841->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__841->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__841->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__841->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__841->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__841->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__841->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__841->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__841->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__841->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__841->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__841->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__841->Draw("AEsame");
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
   
   Double_t _fx3281[22] = {
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
   Double_t _fy3281[22] = {
   0,
   0,
   0.0472508,
   0.2664292,
   0.6724929,
   0.9930532,
   0.9423379,
   0.9974302,
   0.9825209,
   0.8577069,
   0.9162268,
   1,
   0.9482851,
   0.9704363,
   0.856542,
   0.6002961,
   0.125578,
   0.007590962,
   0,
   0,
   0,
   0};
   Double_t _felx3281[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3281[22] = {
   0,
   0,
   0.01469328,
   0.025645,
   0.03584361,
   0.0406432,
   0.03808501,
   0.03825555,
   0.03765252,
   0.03501304,
   0.0360208,
   0.03770407,
   0.03678766,
   0.03754144,
   0.03546508,
   0.03031852,
   0.01438557,
   0.003633073,
   0,
   0,
   0,
   0};
   Double_t _fehx3281[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3281[22] = {
   31.58539,
   0.05371226,
   0.02017125,
   0.02824176,
   0.03780795,
   0.04234266,
   0.03965709,
   0.03975254,
   0.03912465,
   0.0364731,
   0.0374663,
   0.03915397,
   0.03824401,
   0.0390234,
   0.03696557,
   0.03189056,
   0.01613644,
   0.00600266,
   0.004550691,
   0.008667759,
   0.05347042,
   60.11475};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3281,_fy3281,_felx3281,_fehx3281,_fely3281,_fehy3281);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3281 = new TH1F("Graph_Graph3281","",100,-100,100);
   Graph_Graph3281->SetMinimum(0);
   Graph_Graph3281->SetMaximum(1.5);
   Graph_Graph3281->SetDirectory(0);
   Graph_Graph3281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3281->SetLineColor(ci);
   Graph_Graph3281->GetXaxis()->SetRange(1,100);
   Graph_Graph3281->GetXaxis()->CenterTitle(true);
   Graph_Graph3281->GetXaxis()->SetLabelFont(42);
   Graph_Graph3281->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3281->GetXaxis()->SetTitleFont(42);
   Graph_Graph3281->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3281->GetYaxis()->CenterTitle(true);
   Graph_Graph3281->GetYaxis()->SetLabelFont(42);
   Graph_Graph3281->GetYaxis()->SetTitleFont(42);
   Graph_Graph3281->GetZaxis()->SetLabelFont(42);
   Graph_Graph3281->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3281->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3281);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.102914,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__842 = new TH2D("ThetaY_vs_Y_5_10__842","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__842->SetBinContent(7944,5);
   ThetaY_vs_Y_5_10__842->SetBinContent(7970,2433);
   ThetaY_vs_Y_5_10__842->SetBinContent(7996,15017);
   ThetaY_vs_Y_5_10__842->SetBinContent(8022,28763);
   ThetaY_vs_Y_5_10__842->SetBinContent(8048,37457);
   ThetaY_vs_Y_5_10__842->SetBinContent(8074,43229);
   ThetaY_vs_Y_5_10__842->SetBinContent(8100,46685);
   ThetaY_vs_Y_5_10__842->SetBinContent(8126,49015);
   ThetaY_vs_Y_5_10__842->SetBinContent(8152,49831);
   ThetaY_vs_Y_5_10__842->SetBinContent(8178,50216);
   ThetaY_vs_Y_5_10__842->SetBinContent(8204,50726);
   ThetaY_vs_Y_5_10__842->SetBinContent(8230,50592);
   ThetaY_vs_Y_5_10__842->SetBinContent(8256,50358);
   ThetaY_vs_Y_5_10__842->SetBinContent(8282,49501);
   ThetaY_vs_Y_5_10__842->SetBinContent(8308,48876);
   ThetaY_vs_Y_5_10__842->SetBinContent(8334,46690);
   ThetaY_vs_Y_5_10__842->SetBinContent(8360,42943);
   ThetaY_vs_Y_5_10__842->SetBinContent(8386,37390);
   ThetaY_vs_Y_5_10__842->SetBinContent(8412,28707);
   ThetaY_vs_Y_5_10__842->SetBinContent(8438,15072);
   ThetaY_vs_Y_5_10__842->SetBinContent(8464,2444);
   ThetaY_vs_Y_5_10__842->SetBinContent(8490,3);
   ThetaY_vs_Y_5_10__842->SetEntries(745953);
   ThetaY_vs_Y_5_10__842->SetContour(20);
   ThetaY_vs_Y_5_10__842->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__842->SetContourLevel(1,2536.3);
   ThetaY_vs_Y_5_10__842->SetContourLevel(2,5072.6);
   ThetaY_vs_Y_5_10__842->SetContourLevel(3,7608.9);
   ThetaY_vs_Y_5_10__842->SetContourLevel(4,10145.2);
   ThetaY_vs_Y_5_10__842->SetContourLevel(5,12681.5);
   ThetaY_vs_Y_5_10__842->SetContourLevel(6,15217.8);
   ThetaY_vs_Y_5_10__842->SetContourLevel(7,17754.1);
   ThetaY_vs_Y_5_10__842->SetContourLevel(8,20290.4);
   ThetaY_vs_Y_5_10__842->SetContourLevel(9,22826.7);
   ThetaY_vs_Y_5_10__842->SetContourLevel(10,25363);
   ThetaY_vs_Y_5_10__842->SetContourLevel(11,27899.3);
   ThetaY_vs_Y_5_10__842->SetContourLevel(12,30435.6);
   ThetaY_vs_Y_5_10__842->SetContourLevel(13,32971.9);
   ThetaY_vs_Y_5_10__842->SetContourLevel(14,35508.2);
   ThetaY_vs_Y_5_10__842->SetContourLevel(15,38044.5);
   ThetaY_vs_Y_5_10__842->SetContourLevel(16,40580.8);
   ThetaY_vs_Y_5_10__842->SetContourLevel(17,43117.1);
   ThetaY_vs_Y_5_10__842->SetContourLevel(18,45653.4);
   ThetaY_vs_Y_5_10__842->SetContourLevel(19,48189.7);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__842->SetLineColor(ci);
   ThetaY_vs_Y_5_10__842->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__842->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__842->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__842->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__842->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__842->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__842->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__842->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__842->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__842->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__842->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__842->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__842->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__842->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__842->Draw("COL");
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
