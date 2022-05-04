void S12_VerticalDecayAngleRatio_5_10()
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
   upper_pad->Range(-125,-0.06859903,125,1.303382);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__1410 = new TH1D("S12_ThetaY_5_10__1410","",630,-1575,1575);
   S12_ThetaY_5_10__1410->SetBinContent(311,0.06140351);
   S12_ThetaY_5_10__1410->SetBinContent(312,0.4605263);
   S12_ThetaY_5_10__1410->SetBinContent(313,0.8245614);
   S12_ThetaY_5_10__1410->SetBinContent(314,1);
   S12_ThetaY_5_10__1410->SetBinContent(315,0.9473684);
   S12_ThetaY_5_10__1410->SetBinContent(316,0.9517544);
   S12_ThetaY_5_10__1410->SetBinContent(317,0.9517544);
   S12_ThetaY_5_10__1410->SetBinContent(318,0.4736842);
   S12_ThetaY_5_10__1410->SetBinContent(319,0.05701754);
   S12_ThetaY_5_10__1410->SetBinError(311,0.01641078);
   S12_ThetaY_5_10__1410->SetBinError(312,0.04494277);
   S12_ThetaY_5_10__1410->SetBinError(313,0.06013732);
   S12_ThetaY_5_10__1410->SetBinError(314,0.06622662);
   S12_ThetaY_5_10__1410->SetBinError(315,0.06446026);
   S12_ThetaY_5_10__1410->SetBinError(316,0.0646093);
   S12_ThetaY_5_10__1410->SetBinError(317,0.0646093);
   S12_ThetaY_5_10__1410->SetBinError(318,0.04558028);
   S12_ThetaY_5_10__1410->SetBinError(319,0.01581382);
   S12_ThetaY_5_10__1410->SetMinimum(0);
   S12_ThetaY_5_10__1410->SetMaximum(1.166183);
   S12_ThetaY_5_10__1410->SetEntries(1306);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1410->SetLineColor(ci);
   S12_ThetaY_5_10__1410->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1410->SetMarkerColor(ci);
   S12_ThetaY_5_10__1410->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__1410->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__1410->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1410->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1410->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1410->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__1410->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__1410->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1410->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1410->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1410->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1410->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1410->Draw("AE");
   
   TH1D *ThetaY_5_10__1411 = new TH1D("ThetaY_5_10__1411","",630,-1575,1575);
   ThetaY_5_10__1411->SetBinContent(310,0.001554645);
   ThetaY_5_10__1411->SetBinContent(311,0.2147429);
   ThetaY_5_10__1411->SetBinContent(312,0.644693);
   ThetaY_5_10__1411->SetBinContent(313,0.8752448);
   ThetaY_5_10__1411->SetBinContent(314,1);
   ThetaY_5_10__1411->SetBinContent(315,1.060167);
   ThetaY_5_10__1411->SetBinContent(316,1.051041);
   ThetaY_5_10__1411->SetBinContent(317,0.9944477);
   ThetaY_5_10__1411->SetBinContent(318,0.8696117);
   ThetaY_5_10__1411->SetBinContent(319,0.6421894);
   ThetaY_5_10__1411->SetBinContent(320,0.2134507);
   ThetaY_5_10__1411->SetBinContent(321,0.001534455);
   ThetaY_5_10__1411->SetBinError(310,0.0001771682);
   ThetaY_5_10__1411->SetBinError(311,0.002082234);
   ThetaY_5_10__1411->SetBinError(312,0.003607835);
   ThetaY_5_10__1411->SetBinError(313,0.004203732);
   ThetaY_5_10__1411->SetBinError(314,0.00449335);
   ThetaY_5_10__1411->SetBinError(315,0.004626551);
   ThetaY_5_10__1411->SetBinError(316,0.004606595);
   ThetaY_5_10__1411->SetBinError(317,0.004480858);
   ThetaY_5_10__1411->SetBinError(318,0.004190182);
   ThetaY_5_10__1411->SetBinError(319,0.003600823);
   ThetaY_5_10__1411->SetBinError(320,0.00207596);
   ThetaY_5_10__1411->SetBinError(321,0.000176014);
   ThetaY_5_10__1411->SetEntries(374869);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1411->SetLineColor(ci);
   ThetaY_5_10__1411->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1411->SetMarkerColor(ci);
   ThetaY_5_10__1411->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1411->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1411->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1411->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1411->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1411->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1411->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1411->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1411->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1411->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1411->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1411->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1411->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1411->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1411->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1411->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1411->Draw("AEsame");
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
   
   Double_t _fx3471[12] = {
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
   Double_t _fy3471[12] = {
   0,
   0.2859397,
   0.7143343,
   0.9420923,
   1,
   0.8936032,
   0.9055351,
   0.9570683,
   0.5447077,
   0.08878618,
   0,
   0};
   Double_t _felx3471[12] = {
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
   Double_t _fely3471[12] = {
   0,
   0.07554474,
   0.06971401,
   0.06879595,
   0.06632955,
   0.0608792,
   0.06155168,
   0.06506218,
   0.05239825,
   0.02430924,
   0,
   0};
   Double_t _fehx3471[12] = {
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
   Double_t _fehy3471[12] = {
   5.256481,
   0.09874429,
   0.07687619,
   0.07401472,
   0.07088357,
   0.06517633,
   0.06588605,
   0.06964438,
   0.05769987,
   0.03209197,
   0.03783243,
   5.326486};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3471,_fy3471,_felx3471,_fehx3471,_fely3471,_fehy3471);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3471 = new TH1F("Graph_Graph3471","",100,-100,100);
   Graph_Graph3471->SetMinimum(0);
   Graph_Graph3471->SetMaximum(1.5);
   Graph_Graph3471->SetDirectory(0);
   Graph_Graph3471->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3471->SetLineColor(ci);
   Graph_Graph3471->GetXaxis()->SetRange(1,100);
   Graph_Graph3471->GetXaxis()->CenterTitle(true);
   Graph_Graph3471->GetXaxis()->SetLabelFont(42);
   Graph_Graph3471->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3471->GetXaxis()->SetTitleFont(42);
   Graph_Graph3471->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3471->GetYaxis()->CenterTitle(true);
   Graph_Graph3471->GetYaxis()->SetLabelFont(42);
   Graph_Graph3471->GetYaxis()->SetTitleFont(42);
   Graph_Graph3471->GetZaxis()->SetLabelFont(42);
   Graph_Graph3471->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3471->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3471);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.166183,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1412 = new TH2D("ThetaY_vs_Y_5_10__1412","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8074,77);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8100,10636);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8126,31931);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8152,43350);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8178,49529);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8204,52509);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8230,52057);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8256,49254);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8282,43071);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8308,31807);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8334,10572);
   ThetaY_vs_Y_5_10__1412->SetBinContent(8360,76);
   ThetaY_vs_Y_5_10__1412->SetEntries(374869);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1412->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1412->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1412->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1412->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1412->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1412->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1412->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1412->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1412->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1412->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1412->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1412->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1412->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1412->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1412->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1412->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
