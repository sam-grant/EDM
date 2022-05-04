void S12_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.2219575,125,4.217192);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__735 = new TH1D("S12_ThetaY_20_25__735","",630,-1575,1575);
   S12_ThetaY_20_25__735->SetBinContent(306,0.05263158);
   S12_ThetaY_20_25__735->SetBinContent(307,1);
   S12_ThetaY_20_25__735->SetBinContent(308,1.473684);
   S12_ThetaY_20_25__735->SetBinContent(309,1.789474);
   S12_ThetaY_20_25__735->SetBinContent(310,1.684211);
   S12_ThetaY_20_25__735->SetBinContent(311,2.45614);
   S12_ThetaY_20_25__735->SetBinContent(312,2.210526);
   S12_ThetaY_20_25__735->SetBinContent(313,2.824561);
   S12_ThetaY_20_25__735->SetBinContent(314,2.614035);
   S12_ThetaY_20_25__735->SetBinContent(315,2.22807);
   S12_ThetaY_20_25__735->SetBinContent(316,2.684211);
   S12_ThetaY_20_25__735->SetBinContent(317,2.22807);
   S12_ThetaY_20_25__735->SetBinContent(318,1.385965);
   S12_ThetaY_20_25__735->SetBinContent(319,0.1052632);
   S12_ThetaY_20_25__735->SetBinError(306,0.03038686);
   S12_ThetaY_20_25__735->SetBinError(307,0.1324532);
   S12_ThetaY_20_25__735->SetBinError(308,0.1607921);
   S12_ThetaY_20_25__735->SetBinError(309,0.1771843);
   S12_ThetaY_20_25__735->SetBinError(310,0.171894);
   S12_ThetaY_20_25__735->SetBinError(311,0.2075817);
   S12_ThetaY_20_25__735->SetBinError(312,0.1969293);
   S12_ThetaY_20_25__735->SetBinError(313,0.2226066);
   S12_ThetaY_20_25__735->SetBinError(314,0.2141501);
   S12_ThetaY_20_25__735->SetBinError(315,0.1977093);
   S12_ThetaY_20_25__735->SetBinError(316,0.2170056);
   S12_ThetaY_20_25__735->SetBinError(317,0.1977093);
   S12_ThetaY_20_25__735->SetBinError(318,0.1559332);
   S12_ThetaY_20_25__735->SetBinError(319,0.0429735);
   S12_ThetaY_20_25__735->SetMinimum(0);
   S12_ThetaY_20_25__735->SetMaximum(3.773277);
   S12_ThetaY_20_25__735->SetEntries(1410);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__735->SetLineColor(ci);
   S12_ThetaY_20_25__735->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__735->SetMarkerColor(ci);
   S12_ThetaY_20_25__735->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__735->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__735->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__735->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__735->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__735->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__735->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__735->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__735->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__735->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__735->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__735->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__735->Draw("AE");
   
   TH1D *ThetaY_20_25__736 = new TH1D("ThetaY_20_25__736","",630,-1575,1575);
   ThetaY_20_25__736->SetBinContent(305,0.0001633453);
   ThetaY_20_25__736->SetBinContent(306,0.1698791);
   ThetaY_20_25__736->SetBinContent(307,1);
   ThetaY_20_25__736->SetBinContent(308,1.922411);
   ThetaY_20_25__736->SetBinContent(309,2.511107);
   ThetaY_20_25__736->SetBinContent(310,2.905586);
   ThetaY_20_25__736->SetBinContent(311,3.161058);
   ThetaY_20_25__736->SetBinContent(312,3.259392);
   ThetaY_20_25__736->SetBinContent(313,3.337145);
   ThetaY_20_25__736->SetBinContent(314,3.375368);
   ThetaY_20_25__736->SetBinContent(315,3.430252);
   ThetaY_20_25__736->SetBinContent(316,3.391212);
   ThetaY_20_25__736->SetBinContent(317,3.374224);
   ThetaY_20_25__736->SetBinContent(318,3.327181);
   ThetaY_20_25__736->SetBinContent(319,3.249592);
   ThetaY_20_25__736->SetBinContent(320,3.125123);
   ThetaY_20_25__736->SetBinContent(321,2.911303);
   ThetaY_20_25__736->SetBinContent(322,2.512088);
   ThetaY_20_25__736->SetBinContent(323,1.915224);
   ThetaY_20_25__736->SetBinContent(324,1.028912);
   ThetaY_20_25__736->SetBinContent(325,0.1783731);
   ThetaY_20_25__736->SetBinError(305,0.0001633453);
   ThetaY_20_25__736->SetBinError(306,0.005267728);
   ThetaY_20_25__736->SetBinError(307,0.01278066);
   ThetaY_20_25__736->SetBinError(308,0.01772052);
   ThetaY_20_25__736->SetBinError(309,0.02025284);
   ThetaY_20_25__736->SetBinError(310,0.02178564);
   ThetaY_20_25__736->SetBinError(311,0.02272321);
   ThetaY_20_25__736->SetBinError(312,0.02307393);
   ThetaY_20_25__736->SetBinError(313,0.02334753);
   ThetaY_20_25__736->SetBinError(314,0.02348085);
   ThetaY_20_25__736->SetBinError(315,0.02367098);
   ThetaY_20_25__736->SetBinError(316,0.0235359);
   ThetaY_20_25__736->SetBinError(317,0.02347688);
   ThetaY_20_25__736->SetBinError(318,0.02331264);
   ThetaY_20_25__736->SetBinError(319,0.02303922);
   ThetaY_20_25__736->SetBinError(320,0.02259367);
   ThetaY_20_25__736->SetBinError(321,0.02180706);
   ThetaY_20_25__736->SetBinError(322,0.02025679);
   ThetaY_20_25__736->SetBinError(323,0.01768736);
   ThetaY_20_25__736->SetBinError(324,0.0129641);
   ThetaY_20_25__736->SetBinError(325,0.005397815);
   ThetaY_20_25__736->SetEntries(306624);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__736->SetLineColor(ci);
   ThetaY_20_25__736->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__736->SetMarkerColor(ci);
   ThetaY_20_25__736->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__736->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__736->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__736->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__736->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__736->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__736->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__736->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__736->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__736->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__736->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__736->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__736->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__736->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__736->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__736->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__736->Draw("AEsame");
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
   
   Double_t _fx3246[21] = {
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
   Double_t _fy3246[21] = {
   0,
   0.3098178,
   1,
   0.7665813,
   0.7126233,
   0.5796457,
   0.7769993,
   0.678202,
   0.8464006,
   0.7744446,
   0.6495355,
   0.7915195,
   0.6603207,
   0.4165584,
   0.03239273,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3246[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3246[21] = {
   0,
   0.1687921,
   0.1326665,
   0.08376799,
   0.07067547,
   0.05921417,
   0.06582511,
   0.06052751,
   0.06689686,
   0.0636003,
   0.05773346,
   0.06415419,
   0.058695,
   0.04685657,
   0.01285041,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3246[21] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3246[21] = {
   569.5581,
   0.3022265,
   0.1515784,
   0.09347108,
   0.07806332,
   0.06559959,
   0.07165639,
   0.06618979,
   0.07240888,
   0.06905426,
   0.06311119,
   0.06958073,
   0.06416263,
   0.05245142,
   0.01935198,
   0.01033565,
   0.01109479,
   0.01285805,
   0.01686548,
   0.03139563,
   0.1812262};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,_fx3246,_fy3246,_felx3246,_fehx3246,_fely3246,_fehy3246);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3246 = new TH1F("Graph_Graph3246","",100,-100,100);
   Graph_Graph3246->SetMinimum(0);
   Graph_Graph3246->SetMaximum(1.5);
   Graph_Graph3246->SetDirectory(0);
   Graph_Graph3246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3246->SetLineColor(ci);
   Graph_Graph3246->GetXaxis()->SetRange(1,100);
   Graph_Graph3246->GetXaxis()->CenterTitle(true);
   Graph_Graph3246->GetXaxis()->SetLabelFont(42);
   Graph_Graph3246->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3246->GetXaxis()->SetTitleFont(42);
   Graph_Graph3246->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3246->GetYaxis()->CenterTitle(true);
   Graph_Graph3246->GetYaxis()->SetLabelFont(42);
   Graph_Graph3246->GetYaxis()->SetTitleFont(42);
   Graph_Graph3246->GetZaxis()->SetLabelFont(42);
   Graph_Graph3246->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3246->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3246);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.773277,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__737 = new TH2D("ThetaY_vs_Y_20_25__737","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__737->SetBinContent(7947,1);
   ThetaY_vs_Y_20_25__737->SetBinContent(7973,1040);
   ThetaY_vs_Y_20_25__737->SetBinContent(7999,6122);
   ThetaY_vs_Y_20_25__737->SetBinContent(8025,11769);
   ThetaY_vs_Y_20_25__737->SetBinContent(8051,15373);
   ThetaY_vs_Y_20_25__737->SetBinContent(8077,17788);
   ThetaY_vs_Y_20_25__737->SetBinContent(8103,19352);
   ThetaY_vs_Y_20_25__737->SetBinContent(8129,19954);
   ThetaY_vs_Y_20_25__737->SetBinContent(8155,20430);
   ThetaY_vs_Y_20_25__737->SetBinContent(8181,20664);
   ThetaY_vs_Y_20_25__737->SetBinContent(8207,21000);
   ThetaY_vs_Y_20_25__737->SetBinContent(8233,20761);
   ThetaY_vs_Y_20_25__737->SetBinContent(8259,20657);
   ThetaY_vs_Y_20_25__737->SetBinContent(8285,20369);
   ThetaY_vs_Y_20_25__737->SetBinContent(8311,19894);
   ThetaY_vs_Y_20_25__737->SetBinContent(8337,19132);
   ThetaY_vs_Y_20_25__737->SetBinContent(8363,17823);
   ThetaY_vs_Y_20_25__737->SetBinContent(8389,15379);
   ThetaY_vs_Y_20_25__737->SetBinContent(8415,11725);
   ThetaY_vs_Y_20_25__737->SetBinContent(8441,6299);
   ThetaY_vs_Y_20_25__737->SetBinContent(8467,1092);
   ThetaY_vs_Y_20_25__737->SetEntries(306624);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__737->SetLineColor(ci);
   ThetaY_vs_Y_20_25__737->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__737->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__737->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__737->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__737->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__737->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__737->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__737->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__737->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__737->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__737->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__737->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__737->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__737->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__737->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_20_25","Reco vertices","lpf");
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
