void S12S18_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.08808044,125,1.673528);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI30_mI25__819 = new TH1D("S12S18_ThetaY_mI30_mI25__819","",630,-1575,1575);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(313,0.1523179);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(314,1.059603);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(315,1.225166);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(316,1.099338);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(317,1.092715);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(318,1.245033);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(319,1.18543);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(320,1.245033);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(321,1.092715);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(322,1);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(323,0.6225166);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(324,0.2119205);
   S12S18_ThetaY_mI30_mI25__819->SetBinContent(325,0.0397351);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(313,0.03176047);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(314,0.08376894);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(315,0.09007596);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(316,0.08532516);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(317,0.08506777);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(318,0.09080337);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(319,0.08860323);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(320,0.09080337);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(321,0.08506777);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(322,0.08137885);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(323,0.06420768);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(324,0.03746261);
   S12S18_ThetaY_mI30_mI25__819->SetBinError(325,0.01622179);
   S12S18_ThetaY_mI30_mI25__819->SetMinimum(0);
   S12S18_ThetaY_mI30_mI25__819->SetMaximum(1.497367);
   S12S18_ThetaY_mI30_mI25__819->SetEntries(1702);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__819->SetLineColor(ci);
   S12S18_ThetaY_mI30_mI25__819->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI30_mI25__819->SetMarkerColor(ci);
   S12S18_ThetaY_mI30_mI25__819->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI30_mI25__819->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI30_mI25__819->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__819->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__819->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__819->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI30_mI25__819->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI30_mI25__819->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__819->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__819->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI30_mI25__819->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI30_mI25__819->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI30_mI25__819->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__820 = new TH1D("ThetaY_mI30_mI25__820","",630,-1575,1575);
   ThetaY_mI30_mI25__820->SetBinContent(305,0.0001032418);
   ThetaY_mI30_mI25__820->SetBinContent(306,0.06535205);
   ThetaY_mI30_mI25__820->SetBinContent(307,0.4039851);
   ThetaY_mI30_mI25__820->SetBinContent(308,0.7790626);
   ThetaY_mI30_mI25__820->SetBinContent(309,1.002375);
   ThetaY_mI30_mI25__820->SetBinContent(310,1.155276);
   ThetaY_mI30_mI25__820->SetBinContent(311,1.24396);
   ThetaY_mI30_mI25__820->SetBinContent(312,1.327793);
   ThetaY_mI30_mI25__820->SetBinContent(313,1.34999);
   ThetaY_mI30_mI25__820->SetBinContent(314,1.349473);
   ThetaY_mI30_mI25__820->SetBinContent(315,1.361243);
   ThetaY_mI30_mI25__820->SetBinContent(316,1.341627);
   ThetaY_mI30_mI25__820->SetBinContent(317,1.330374);
   ThetaY_mI30_mI25__820->SetBinContent(318,1.310551);
   ThetaY_mI30_mI25__820->SetBinContent(319,1.31561);
   ThetaY_mI30_mI25__820->SetBinContent(320,1.256246);
   ThetaY_mI30_mI25__820->SetBinContent(321,1.142577);
   ThetaY_mI30_mI25__820->SetBinContent(322,1);
   ThetaY_mI30_mI25__820->SetBinContent(323,0.7748297);
   ThetaY_mI30_mI25__820->SetBinContent(324,0.4053273);
   ThetaY_mI30_mI25__820->SetBinContent(325,0.06855255);
   ThetaY_mI30_mI25__820->SetBinError(305,0.0001032418);
   ThetaY_mI30_mI25__820->SetBinError(306,0.002597511);
   ThetaY_mI30_mI25__820->SetBinError(307,0.006458185);
   ThetaY_mI30_mI25__820->SetBinError(308,0.008968379);
   ThetaY_mI30_mI25__820->SetBinError(309,0.01017285);
   ThetaY_mI30_mI25__820->SetBinError(310,0.01092121);
   ThetaY_mI30_mI25__820->SetBinError(311,0.01133264);
   ThetaY_mI30_mI25__820->SetBinError(312,0.01170827);
   ThetaY_mI30_mI25__820->SetBinError(313,0.01180573);
   ThetaY_mI30_mI25__820->SetBinError(314,0.01180348);
   ThetaY_mI30_mI25__820->SetBinError(315,0.01185484);
   ThetaY_mI30_mI25__820->SetBinError(316,0.01176911);
   ThetaY_mI30_mI25__820->SetBinError(317,0.01171965);
   ThetaY_mI30_mI25__820->SetBinError(318,0.01163201);
   ThetaY_mI30_mI25__820->SetBinError(319,0.01165444);
   ThetaY_mI30_mI25__820->SetBinError(320,0.01138846);
   ThetaY_mI30_mI25__820->SetBinError(321,0.01086102);
   ThetaY_mI30_mI25__820->SetBinError(322,0.0101608);
   ThetaY_mI30_mI25__820->SetBinError(323,0.008943981);
   ThetaY_mI30_mI25__820->SetBinError(324,0.006468904);
   ThetaY_mI30_mI25__820->SetBinError(325,0.002660355);
   ThetaY_mI30_mI25__820->SetEntries(193568);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__820->SetLineColor(ci);
   ThetaY_mI30_mI25__820->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__820->SetMarkerColor(ci);
   ThetaY_mI30_mI25__820->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__820->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__820->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__820->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__820->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__820->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__820->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__820->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__820->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__820->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__820->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__820->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__820->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__820->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__820->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__820->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__820->Draw("AEsame");
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
   
   Double_t _fx3274[21] = {
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
   Double_t _fy3274[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1128289,
   0.7851971,
   0.9000344,
   0.8194063,
   0.8213596,
   0.9500071,
   0.9010499,
   0.9910742,
   0.9563603,
   1,
   0.8034238,
   0.5228381,
   0.5796298};
   Double_t _felx3274[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3274[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0233739,
   0.06238642,
   0.06657175,
   0.06393629,
   0.06428316,
   0.0697328,
   0.06775303,
   0.07277004,
   0.07492616,
   0.08191573,
   0.08323024,
   0.09230287,
   0.2308001};
   Double_t _fehx3274[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3274[21] = {
   340.163,
   0.1868334,
   0.03018692,
   0.01565174,
   0.01216447,
   0.01055436,
   0.009801862,
   0.009182961,
   0.02880428,
   0.06755693,
   0.0716933,
   0.0691363,
   0.06952795,
   0.07505534,
   0.07305556,
   0.07832649,
   0.08104693,
   0.08892672,
   0.0923463,
   0.110267,
   0.3486958};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3274,_fy3274,_felx3274,_fehx3274,_fely3274,_fehy3274);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3274 = new TH1F("Graph_Graph3274","",100,-100,100);
   Graph_Graph3274->SetMinimum(0);
   Graph_Graph3274->SetMaximum(1.5);
   Graph_Graph3274->SetDirectory(0);
   Graph_Graph3274->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3274->SetLineColor(ci);
   Graph_Graph3274->GetXaxis()->SetRange(1,100);
   Graph_Graph3274->GetXaxis()->CenterTitle(true);
   Graph_Graph3274->GetXaxis()->SetLabelFont(42);
   Graph_Graph3274->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3274->GetXaxis()->SetTitleFont(42);
   Graph_Graph3274->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3274->GetYaxis()->CenterTitle(true);
   Graph_Graph3274->GetYaxis()->SetLabelFont(42);
   Graph_Graph3274->GetYaxis()->SetTitleFont(42);
   Graph_Graph3274->GetZaxis()->SetLabelFont(42);
   Graph_Graph3274->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3274->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3274);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.497367,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__821 = new TH2D("ThetaY_vs_Y_mI30_mI25__821","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(7937,1);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(7963,633);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(7989,3913);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8015,7546);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8041,9709);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8067,11190);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8093,12049);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8119,12861);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8145,13076);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8171,13071);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8197,13185);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8223,12995);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8249,12886);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8275,12694);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8301,12743);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8327,12168);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8353,11067);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8379,9686);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8405,7505);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8431,3926);
   ThetaY_vs_Y_mI30_mI25__821->SetBinContent(8457,664);
   ThetaY_vs_Y_mI30_mI25__821->SetEntries(193568);
   ThetaY_vs_Y_mI30_mI25__821->SetContour(20);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(0,0);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(1,659.25);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(2,1318.5);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(3,1977.75);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(4,2637);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(5,3296.25);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(6,3955.5);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(7,4614.75);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(8,5274);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(9,5933.25);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(10,6592.5);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(11,7251.75);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(12,7911);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(13,8570.25);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(14,9229.5);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(15,9888.75);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(16,10548);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(17,11207.25);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(18,11866.5);
   ThetaY_vs_Y_mI30_mI25__821->SetContourLevel(19,12525.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__821->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__821->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__821->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__821->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__821->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__821->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__821->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__821->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__821->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__821->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__821->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__821->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__821->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__821->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__821->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__821->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-30_-25","Reco vertices","lpf");
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
