void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.08808044,125,1.673528);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__705 = new TH1D("S12_ThetaY_mI30_mI25__705","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__705->SetBinContent(313,0.1395349);
   S12_ThetaY_mI30_mI25__705->SetBinContent(314,0.8953488);
   S12_ThetaY_mI30_mI25__705->SetBinContent(315,1.069767);
   S12_ThetaY_mI30_mI25__705->SetBinContent(316,1.034884);
   S12_ThetaY_mI30_mI25__705->SetBinContent(317,0.8953488);
   S12_ThetaY_mI30_mI25__705->SetBinContent(318,1.232558);
   S12_ThetaY_mI30_mI25__705->SetBinContent(319,0.9767442);
   S12_ThetaY_mI30_mI25__705->SetBinContent(320,1.162791);
   S12_ThetaY_mI30_mI25__705->SetBinContent(321,1.034884);
   S12_ThetaY_mI30_mI25__705->SetBinContent(322,1);
   S12_ThetaY_mI30_mI25__705->SetBinContent(323,0.5116279);
   S12_ThetaY_mI30_mI25__705->SetBinContent(324,0.1860465);
   S12_ThetaY_mI30_mI25__705->SetBinContent(325,0.05813953);
   S12_ThetaY_mI30_mI25__705->SetBinError(313,0.04028025);
   S12_ThetaY_mI30_mI25__705->SetBinError(314,0.1020345);
   S12_ThetaY_mI30_mI25__705->SetBinError(315,0.111531);
   S12_ThetaY_mI30_mI25__705->SetBinError(316,0.1096975);
   S12_ThetaY_mI30_mI25__705->SetBinError(317,0.1020345);
   S12_ThetaY_mI30_mI25__705->SetBinError(318,0.1197166);
   S12_ThetaY_mI30_mI25__705->SetBinError(319,0.1065715);
   S12_ThetaY_mI30_mI25__705->SetBinError(320,0.1162791);
   S12_ThetaY_mI30_mI25__705->SetBinError(321,0.1096975);
   S12_ThetaY_mI30_mI25__705->SetBinError(322,0.1078328);
   S12_ThetaY_mI30_mI25__705->SetBinError(323,0.07713081);
   S12_ThetaY_mI30_mI25__705->SetBinError(324,0.04651163);
   S12_ThetaY_mI30_mI25__705->SetBinError(325,0.02600079);
   S12_ThetaY_mI30_mI25__705->SetMinimum(0);
   S12_ThetaY_mI30_mI25__705->SetMaximum(1.497367);
   S12_ThetaY_mI30_mI25__705->SetEntries(877);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__705->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__705->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__705->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__705->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__705->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__705->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__705->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__705->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__705->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__705->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__705->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__705->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__705->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__705->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__705->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__705->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__706 = new TH1D("ThetaY_mI30_mI25__706","",630,-1575,1575);
   ThetaY_mI30_mI25__706->SetBinContent(305,0.0001032418);
   ThetaY_mI30_mI25__706->SetBinContent(306,0.06535205);
   ThetaY_mI30_mI25__706->SetBinContent(307,0.4039851);
   ThetaY_mI30_mI25__706->SetBinContent(308,0.7790626);
   ThetaY_mI30_mI25__706->SetBinContent(309,1.002375);
   ThetaY_mI30_mI25__706->SetBinContent(310,1.155276);
   ThetaY_mI30_mI25__706->SetBinContent(311,1.24396);
   ThetaY_mI30_mI25__706->SetBinContent(312,1.327793);
   ThetaY_mI30_mI25__706->SetBinContent(313,1.34999);
   ThetaY_mI30_mI25__706->SetBinContent(314,1.349473);
   ThetaY_mI30_mI25__706->SetBinContent(315,1.361243);
   ThetaY_mI30_mI25__706->SetBinContent(316,1.341627);
   ThetaY_mI30_mI25__706->SetBinContent(317,1.330374);
   ThetaY_mI30_mI25__706->SetBinContent(318,1.310551);
   ThetaY_mI30_mI25__706->SetBinContent(319,1.31561);
   ThetaY_mI30_mI25__706->SetBinContent(320,1.256246);
   ThetaY_mI30_mI25__706->SetBinContent(321,1.142577);
   ThetaY_mI30_mI25__706->SetBinContent(322,1);
   ThetaY_mI30_mI25__706->SetBinContent(323,0.7748297);
   ThetaY_mI30_mI25__706->SetBinContent(324,0.4053273);
   ThetaY_mI30_mI25__706->SetBinContent(325,0.06855255);
   ThetaY_mI30_mI25__706->SetBinError(305,0.0001032418);
   ThetaY_mI30_mI25__706->SetBinError(306,0.002597511);
   ThetaY_mI30_mI25__706->SetBinError(307,0.006458185);
   ThetaY_mI30_mI25__706->SetBinError(308,0.008968379);
   ThetaY_mI30_mI25__706->SetBinError(309,0.01017285);
   ThetaY_mI30_mI25__706->SetBinError(310,0.01092121);
   ThetaY_mI30_mI25__706->SetBinError(311,0.01133264);
   ThetaY_mI30_mI25__706->SetBinError(312,0.01170827);
   ThetaY_mI30_mI25__706->SetBinError(313,0.01180573);
   ThetaY_mI30_mI25__706->SetBinError(314,0.01180348);
   ThetaY_mI30_mI25__706->SetBinError(315,0.01185484);
   ThetaY_mI30_mI25__706->SetBinError(316,0.01176911);
   ThetaY_mI30_mI25__706->SetBinError(317,0.01171965);
   ThetaY_mI30_mI25__706->SetBinError(318,0.01163201);
   ThetaY_mI30_mI25__706->SetBinError(319,0.01165444);
   ThetaY_mI30_mI25__706->SetBinError(320,0.01138846);
   ThetaY_mI30_mI25__706->SetBinError(321,0.01086102);
   ThetaY_mI30_mI25__706->SetBinError(322,0.0101608);
   ThetaY_mI30_mI25__706->SetBinError(323,0.008943981);
   ThetaY_mI30_mI25__706->SetBinError(324,0.006468904);
   ThetaY_mI30_mI25__706->SetBinError(325,0.002660355);
   ThetaY_mI30_mI25__706->SetEntries(193568);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__706->SetLineColor(ci);
   ThetaY_mI30_mI25__706->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__706->SetMarkerColor(ci);
   ThetaY_mI30_mI25__706->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__706->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__706->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__706->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__706->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__706->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__706->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__706->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__706->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__706->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__706->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__706->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__706->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__706->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__706->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__706->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__706->Draw("AEsame");
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
   
   Double_t _fx3236[21] = {
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
   Double_t _fy3236[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.10336,
   0.6634801,
   0.7858754,
   0.7713647,
   0.6730055,
   0.9404883,
   0.7424268,
   0.9256074,
   0.9057453,
   1,
   0.6603102,
   0.4590032,
   0.8481017};
   Double_t _felx3236[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3236[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02942929,
   0.07566514,
   0.08206584,
   0.08188655,
   0.07675463,
   0.09158052,
   0.08110679,
   0.09278098,
   0.09620847,
   0.1080941,
   0.09944965,
   0.1137581,
   0.3674702};
   Double_t _fehx3236[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3236[21] = {
   597.2629,
   0.3280446,
   0.05300261,
   0.02748154,
   0.02135854,
   0.0185315,
   0.01721025,
   0.01612357,
   0.0393001,
   0.08483524,
   0.09112518,
   0.0910848,
   0.08605727,
   0.100972,
   0.09049836,
   0.1025908,
   0.1070237,
   0.1204739,
   0.1157035,
   0.1462128,
   0.5773583};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3236,_fy3236,_felx3236,_fehx3236,_fely3236,_fehy3236);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3236 = new TH1F("Graph_Graph3236","",100,-100,100);
   Graph_Graph3236->SetMinimum(0);
   Graph_Graph3236->SetMaximum(1.5);
   Graph_Graph3236->SetDirectory(0);
   Graph_Graph3236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3236->SetLineColor(ci);
   Graph_Graph3236->GetXaxis()->SetRange(1,100);
   Graph_Graph3236->GetXaxis()->CenterTitle(true);
   Graph_Graph3236->GetXaxis()->SetLabelFont(42);
   Graph_Graph3236->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3236->GetXaxis()->SetTitleFont(42);
   Graph_Graph3236->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3236->GetYaxis()->CenterTitle(true);
   Graph_Graph3236->GetYaxis()->SetLabelFont(42);
   Graph_Graph3236->GetYaxis()->SetTitleFont(42);
   Graph_Graph3236->GetZaxis()->SetLabelFont(42);
   Graph_Graph3236->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3236->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3236);
   
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__707 = new TH2D("ThetaY_vs_Y_mI30_mI25__707","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(7937,1);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(7963,633);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(7989,3913);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8015,7546);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8041,9709);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8067,11190);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8093,12049);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8119,12861);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8145,13076);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8171,13071);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8197,13185);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8223,12995);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8249,12886);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8275,12694);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8301,12743);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8327,12168);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8353,11067);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8379,9686);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8405,7505);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8431,3926);
   ThetaY_vs_Y_mI30_mI25__707->SetBinContent(8457,664);
   ThetaY_vs_Y_mI30_mI25__707->SetEntries(193568);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__707->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__707->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__707->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__707->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__707->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__707->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__707->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__707->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__707->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__707->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__707->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__707->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__707->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__707->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__707->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__707->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_-30_-25","Reco vertices","lpf");
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
