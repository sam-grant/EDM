void S12_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06918673,125,1.314548);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI15_mI10__1398 = new TH1D("S12_ThetaY_mI15_mI10__1398","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(312,0.02688172);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(313,0.3602151);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(314,1);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(315,0.8010753);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(316,0.9569892);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(317,1);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(318,0.6075269);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(319,0.6021505);
   S12_ThetaY_mI15_mI10__1398->SetBinContent(320,0.09139785);
   S12_ThetaY_mI15_mI10__1398->SetBinError(312,0.01202187);
   S12_ThetaY_mI15_mI10__1398->SetBinError(313,0.04400727);
   S12_ThetaY_mI15_mI10__1398->SetBinError(314,0.07332356);
   S12_ThetaY_mI15_mI10__1398->SetBinError(315,0.06562664);
   S12_ThetaY_mI15_mI10__1398->SetBinError(316,0.07172938);
   S12_ThetaY_mI15_mI10__1398->SetBinError(317,0.07332356);
   S12_ThetaY_mI15_mI10__1398->SetBinError(318,0.05715132);
   S12_ThetaY_mI15_mI10__1398->SetBinError(319,0.05689788);
   S12_ThetaY_mI15_mI10__1398->SetBinError(320,0.02216723);
   S12_ThetaY_mI15_mI10__1398->SetMinimum(0);
   S12_ThetaY_mI15_mI10__1398->SetMaximum(1.176174);
   S12_ThetaY_mI15_mI10__1398->SetEntries(1013);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1398->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__1398->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1398->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__1398->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__1398->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__1398->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1398->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1398->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1398->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__1398->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__1398->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1398->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1398->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1398->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1398->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1398->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1399 = new TH1D("ThetaY_mI15_mI10__1399","",630,-1575,1575);
   ThetaY_mI15_mI10__1399->SetBinContent(310,0.001730617);
   ThetaY_mI15_mI10__1399->SetBinContent(311,0.2172666);
   ThetaY_mI15_mI10__1399->SetBinContent(312,0.6408722);
   ThetaY_mI15_mI10__1399->SetBinContent(313,0.8741347);
   ThetaY_mI15_mI10__1399->SetBinContent(314,1);
   ThetaY_mI15_mI10__1399->SetBinContent(315,1.069249);
   ThetaY_mI15_mI10__1399->SetBinContent(316,1.051523);
   ThetaY_mI15_mI10__1399->SetBinContent(317,1.009073);
   ThetaY_mI15_mI10__1399->SetBinContent(318,0.8735661);
   ThetaY_mI15_mI10__1399->SetBinContent(319,0.6414161);
   ThetaY_mI15_mI10__1399->SetBinContent(320,0.2137312);
   ThetaY_mI15_mI10__1399->SetBinContent(321,0.001532832);
   ThetaY_mI15_mI10__1399->SetBinError(310,0.0002068483);
   ThetaY_mI15_mI10__1399->SetBinError(311,0.002317651);
   ThetaY_mI15_mI10__1399->SetBinError(312,0.003980496);
   ThetaY_mI15_mI10__1399->SetBinError(313,0.004648798);
   ThetaY_mI15_mI10__1399->SetBinError(314,0.004972233);
   ThetaY_mI15_mI10__1399->SetBinError(315,0.005141514);
   ThetaY_mI15_mI10__1399->SetBinError(316,0.005098716);
   ThetaY_mI15_mI10__1399->SetBinError(317,0.00499474);
   ThetaY_mI15_mI10__1399->SetBinError(318,0.004647285);
   ThetaY_mI15_mI10__1399->SetBinError(319,0.003982185);
   ThetaY_mI15_mI10__1399->SetBinError(320,0.002298717);
   ThetaY_mI15_mI10__1399->SetBinError(321,0.0001946699);
   ThetaY_mI15_mI10__1399->SetEntries(307166);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1399->SetLineColor(ci);
   ThetaY_mI15_mI10__1399->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1399->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1399->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1399->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1399->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1399->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1399->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1399->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1399->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1399->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1399->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1399->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1399->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1399->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1399->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1399->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1399->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1399->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1399->Draw("AEsame");
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
   
   Double_t _fx3467[12] = {
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
   27.5};
   Double_t _fy3467[12] = {
   0,
   0,
   0.04194552,
   0.4120819,
   1,
   0.749194,
   0.9100983,
   0.9910082,
   0.6954561,
   0.938783,
   0.4276299,
   0};
   Double_t _felx3467[12] = {
   2.5,
   2.5,
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
   Double_t _fely3467[12] = {
   0,
   0,
   0.01811933,
   0.05026472,
   0.07342499,
   0.06141228,
   0.06829233,
   0.07276328,
   0.06542957,
   0.08876338,
   0.1027816,
   0};
   Double_t _fehx3467[12] = {
   2.5,
   2.5,
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
   Double_t _fehy3467[12] = {
   5.795201,
   0.04556155,
   0.0283805,
   0.05680606,
   0.07902677,
   0.06666666,
   0.07362149,
   0.07831444,
   0.07189717,
   0.0975846,
   0.1310661,
   6.554132};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3467,_fy3467,_felx3467,_fehx3467,_fely3467,_fehy3467);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3467 = new TH1F("Graph_Graph3467","",100,-100,100);
   Graph_Graph3467->SetMinimum(0);
   Graph_Graph3467->SetMaximum(1.5);
   Graph_Graph3467->SetDirectory(0);
   Graph_Graph3467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3467->SetLineColor(ci);
   Graph_Graph3467->GetXaxis()->SetRange(1,100);
   Graph_Graph3467->GetXaxis()->CenterTitle(true);
   Graph_Graph3467->GetXaxis()->SetLabelFont(42);
   Graph_Graph3467->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3467->GetXaxis()->SetTitleFont(42);
   Graph_Graph3467->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3467->GetYaxis()->CenterTitle(true);
   Graph_Graph3467->GetYaxis()->SetLabelFont(42);
   Graph_Graph3467->GetYaxis()->SetTitleFont(42);
   Graph_Graph3467->GetZaxis()->SetLabelFont(42);
   Graph_Graph3467->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3467->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3467);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.176174,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1400 = new TH2D("ThetaY_vs_Y_mI15_mI10__1400","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8070,70);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8096,8788);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8122,25922);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8148,35357);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8174,40448);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8200,43249);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8226,42532);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8252,40815);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8278,35334);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8304,25944);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8330,8645);
   ThetaY_vs_Y_mI15_mI10__1400->SetBinContent(8356,62);
   ThetaY_vs_Y_mI15_mI10__1400->SetEntries(307166);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1400->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1400->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1400->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1400->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1400->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1400->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1400->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1400->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1400->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1400->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1400->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1400->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1400->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1400->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1400->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1400->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
