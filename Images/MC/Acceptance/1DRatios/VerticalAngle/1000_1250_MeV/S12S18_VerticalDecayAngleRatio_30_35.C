void S12S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.36439,125,25.9234);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_30_35__855 = new TH1D("S12S18_ThetaY_30_35__855","",630,-1575,1575);
   S12S18_ThetaY_30_35__855->SetBinContent(306,1);
   S12S18_ThetaY_30_35__855->SetBinContent(307,3.857143);
   S12S18_ThetaY_30_35__855->SetBinContent(308,10.57143);
   S12S18_ThetaY_30_35__855->SetBinContent(309,11.28571);
   S12S18_ThetaY_30_35__855->SetBinContent(310,14.14286);
   S12S18_ThetaY_30_35__855->SetBinContent(311,16.42857);
   S12S18_ThetaY_30_35__855->SetBinContent(312,15.85714);
   S12S18_ThetaY_30_35__855->SetBinContent(313,12.71429);
   S12S18_ThetaY_30_35__855->SetBinContent(314,15.14286);
   S12S18_ThetaY_30_35__855->SetBinContent(315,15);
   S12S18_ThetaY_30_35__855->SetBinContent(316,15.14286);
   S12S18_ThetaY_30_35__855->SetBinContent(317,2.428571);
   S12S18_ThetaY_30_35__855->SetBinError(306,0.3779645);
   S12S18_ThetaY_30_35__855->SetBinError(307,0.7423075);
   S12S18_ThetaY_30_35__855->SetBinError(308,1.228904);
   S12S18_ThetaY_30_35__855->SetBinError(309,1.269742);
   S12S18_ThetaY_30_35__855->SetBinError(310,1.421411);
   S12S18_ThetaY_30_35__855->SetBinError(311,1.531972);
   S12S18_ThetaY_30_35__855->SetBinError(312,1.505093);
   S12S18_ThetaY_30_35__855->SetBinError(313,1.347712);
   S12S18_ThetaY_30_35__855->SetBinError(314,1.470804);
   S12S18_ThetaY_30_35__855->SetBinError(315,1.46385);
   S12S18_ThetaY_30_35__855->SetBinError(316,1.470804);
   S12S18_ThetaY_30_35__855->SetBinError(317,0.5890151);
   S12S18_ThetaY_30_35__855->SetMinimum(0);
   S12S18_ThetaY_30_35__855->SetMaximum(23.19462);
   S12S18_ThetaY_30_35__855->SetEntries(935);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__855->SetLineColor(ci);
   S12S18_ThetaY_30_35__855->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_30_35__855->SetMarkerColor(ci);
   S12S18_ThetaY_30_35__855->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_30_35__855->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_30_35__855->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__855->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__855->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__855->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_30_35__855->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_30_35__855->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__855->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__855->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_30_35__855->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_30_35__855->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_30_35__855->Draw("AE");
   
   TH1D *ThetaY_30_35__856 = new TH1D("ThetaY_30_35__856","",630,-1575,1575);
   ThetaY_30_35__856->SetBinContent(305,0.002688172);
   ThetaY_30_35__856->SetBinContent(306,1);
   ThetaY_30_35__856->SetBinContent(307,6.274194);
   ThetaY_30_35__856->SetBinContent(308,11.74462);
   ThetaY_30_35__856->SetBinContent(309,14.95161);
   ThetaY_30_35__856->SetBinContent(310,17.56452);
   ThetaY_30_35__856->SetBinContent(311,19.26344);
   ThetaY_30_35__856->SetBinContent(312,19.62097);
   ThetaY_30_35__856->SetBinContent(313,20.55914);
   ThetaY_30_35__856->SetBinContent(314,20.92742);
   ThetaY_30_35__856->SetBinContent(315,20.51613);
   ThetaY_30_35__856->SetBinContent(316,21.08602);
   ThetaY_30_35__856->SetBinContent(317,20.83333);
   ThetaY_30_35__856->SetBinContent(318,20.68011);
   ThetaY_30_35__856->SetBinContent(319,20.1371);
   ThetaY_30_35__856->SetBinContent(320,19.12903);
   ThetaY_30_35__856->SetBinContent(321,17.4543);
   ThetaY_30_35__856->SetBinContent(322,15.11828);
   ThetaY_30_35__856->SetBinContent(323,12.14247);
   ThetaY_30_35__856->SetBinContent(324,6.19086);
   ThetaY_30_35__856->SetBinContent(325,0.9623656);
   ThetaY_30_35__856->SetBinContent(326,0.002688172);
   ThetaY_30_35__856->SetBinError(305,0.002688172);
   ThetaY_30_35__856->SetBinError(306,0.05184758);
   ThetaY_30_35__856->SetBinError(307,0.1298696);
   ThetaY_30_35__856->SetBinError(308,0.1776839);
   ThetaY_30_35__856->SetBinError(309,0.2004807);
   ThetaY_30_35__856->SetBinError(310,0.2172934);
   ThetaY_30_35__856->SetBinError(311,0.2275598);
   ThetaY_30_35__856->SetBinError(312,0.2296618);
   ThetaY_30_35__856->SetBinError(313,0.2350883);
   ThetaY_30_35__856->SetBinError(314,0.2371845);
   ThetaY_30_35__856->SetBinError(315,0.2348423);
   ThetaY_30_35__856->SetBinError(316,0.2380816);
   ThetaY_30_35__856->SetBinError(317,0.2366508);
   ThetaY_30_35__856->SetBinError(318,0.2357789);
   ThetaY_30_35__856->SetBinError(319,0.2326628);
   ThetaY_30_35__856->SetBinError(320,0.2267645);
   ThetaY_30_35__856->SetBinError(321,0.2166106);
   ThetaY_30_35__856->SetBinError(322,0.201595);
   ThetaY_30_35__856->SetBinError(323,0.1806684);
   ThetaY_30_35__856->SetBinError(324,0.1290043);
   ThetaY_30_35__856->SetBinError(325,0.0508626);
   ThetaY_30_35__856->SetBinError(326,0.002688172);
   ThetaY_30_35__856->SetEntries(113892);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__856->SetLineColor(ci);
   ThetaY_30_35__856->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__856->SetMarkerColor(ci);
   ThetaY_30_35__856->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__856->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__856->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__856->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__856->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__856->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__856->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__856->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__856->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__856->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__856->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__856->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__856->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__856->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__856->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__856->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__856->Draw("AEsame");
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
   
   Double_t _fx3286[22] = {
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
   Double_t _fy3286[22] = {
   0,
   1,
   0.6147631,
   0.9001079,
   0.7548158,
   0.8051948,
   0.8528368,
   0.8081733,
   0.618425,
   0.7235893,
   0.7311321,
   0.7181467,
   0.1165714,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3286[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3286[22] = {
   0,
   0.3717989,
   0.1182283,
   0.1052672,
   0.08533559,
   0.08139193,
   0.08004091,
   0.07716778,
   0.06580498,
   0.07064189,
   0.07172121,
   0.07010704,
   0.02802114,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3286[22] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3286[22] = {
   281.8152,
   0.5464049,
   0.1435534,
   0.1183897,
   0.09559272,
   0.0900807,
   0.08794264,
   0.08492479,
   0.07321923,
   0.07790986,
   0.07913774,
   0.07731952,
   0.03573375,
   0.01271921,
   0.01306223,
   0.01375068,
   0.01507023,
   0.01739921,
   0.02166418,
   0.04249946,
   0.273992,
   281.8152};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3286,_fy3286,_felx3286,_fehx3286,_fely3286,_fehy3286);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3286 = new TH1F("Graph_Graph3286","",100,-100,100);
   Graph_Graph3286->SetMinimum(0);
   Graph_Graph3286->SetMaximum(1.5);
   Graph_Graph3286->SetDirectory(0);
   Graph_Graph3286->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3286->SetLineColor(ci);
   Graph_Graph3286->GetXaxis()->SetRange(1,100);
   Graph_Graph3286->GetXaxis()->CenterTitle(true);
   Graph_Graph3286->GetXaxis()->SetLabelFont(42);
   Graph_Graph3286->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3286->GetXaxis()->SetTitleFont(42);
   Graph_Graph3286->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3286->GetYaxis()->CenterTitle(true);
   Graph_Graph3286->GetYaxis()->SetLabelFont(42);
   Graph_Graph3286->GetYaxis()->SetTitleFont(42);
   Graph_Graph3286->GetZaxis()->SetLabelFont(42);
   Graph_Graph3286->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3286->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3286);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,23.19462,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__857 = new TH2D("ThetaY_vs_Y_30_35__857","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__857->SetBinContent(7949,1);
   ThetaY_vs_Y_30_35__857->SetBinContent(7975,372);
   ThetaY_vs_Y_30_35__857->SetBinContent(8001,2334);
   ThetaY_vs_Y_30_35__857->SetBinContent(8027,4369);
   ThetaY_vs_Y_30_35__857->SetBinContent(8053,5562);
   ThetaY_vs_Y_30_35__857->SetBinContent(8079,6534);
   ThetaY_vs_Y_30_35__857->SetBinContent(8105,7166);
   ThetaY_vs_Y_30_35__857->SetBinContent(8131,7299);
   ThetaY_vs_Y_30_35__857->SetBinContent(8157,7648);
   ThetaY_vs_Y_30_35__857->SetBinContent(8183,7785);
   ThetaY_vs_Y_30_35__857->SetBinContent(8209,7632);
   ThetaY_vs_Y_30_35__857->SetBinContent(8235,7844);
   ThetaY_vs_Y_30_35__857->SetBinContent(8261,7750);
   ThetaY_vs_Y_30_35__857->SetBinContent(8287,7693);
   ThetaY_vs_Y_30_35__857->SetBinContent(8313,7491);
   ThetaY_vs_Y_30_35__857->SetBinContent(8339,7116);
   ThetaY_vs_Y_30_35__857->SetBinContent(8365,6493);
   ThetaY_vs_Y_30_35__857->SetBinContent(8391,5624);
   ThetaY_vs_Y_30_35__857->SetBinContent(8417,4517);
   ThetaY_vs_Y_30_35__857->SetBinContent(8443,2303);
   ThetaY_vs_Y_30_35__857->SetBinContent(8469,358);
   ThetaY_vs_Y_30_35__857->SetBinContent(8495,1);
   ThetaY_vs_Y_30_35__857->SetEntries(113892);
   ThetaY_vs_Y_30_35__857->SetContour(20);
   ThetaY_vs_Y_30_35__857->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__857->SetContourLevel(1,392.2);
   ThetaY_vs_Y_30_35__857->SetContourLevel(2,784.4);
   ThetaY_vs_Y_30_35__857->SetContourLevel(3,1176.6);
   ThetaY_vs_Y_30_35__857->SetContourLevel(4,1568.8);
   ThetaY_vs_Y_30_35__857->SetContourLevel(5,1961);
   ThetaY_vs_Y_30_35__857->SetContourLevel(6,2353.2);
   ThetaY_vs_Y_30_35__857->SetContourLevel(7,2745.4);
   ThetaY_vs_Y_30_35__857->SetContourLevel(8,3137.6);
   ThetaY_vs_Y_30_35__857->SetContourLevel(9,3529.8);
   ThetaY_vs_Y_30_35__857->SetContourLevel(10,3922);
   ThetaY_vs_Y_30_35__857->SetContourLevel(11,4314.2);
   ThetaY_vs_Y_30_35__857->SetContourLevel(12,4706.4);
   ThetaY_vs_Y_30_35__857->SetContourLevel(13,5098.6);
   ThetaY_vs_Y_30_35__857->SetContourLevel(14,5490.8);
   ThetaY_vs_Y_30_35__857->SetContourLevel(15,5883);
   ThetaY_vs_Y_30_35__857->SetContourLevel(16,6275.2);
   ThetaY_vs_Y_30_35__857->SetContourLevel(17,6667.4);
   ThetaY_vs_Y_30_35__857->SetContourLevel(18,7059.6);
   ThetaY_vs_Y_30_35__857->SetContourLevel(19,7451.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__857->SetLineColor(ci);
   ThetaY_vs_Y_30_35__857->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__857->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__857->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__857->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__857->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__857->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__857->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__857->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__857->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__857->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__857->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__857->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__857->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__857->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__857->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_30_35","Reco vertices","lpf");
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
