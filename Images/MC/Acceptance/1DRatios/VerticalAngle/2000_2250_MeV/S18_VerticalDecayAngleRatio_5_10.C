void S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_5_10__1467 = new TH1D("S18_ThetaY_5_10__1467","",630,-1575,1575);
   S18_ThetaY_5_10__1467->SetBinContent(311,0.03433476);
   S18_ThetaY_5_10__1467->SetBinContent(312,0.5021459);
   S18_ThetaY_5_10__1467->SetBinContent(313,0.7596567);
   S18_ThetaY_5_10__1467->SetBinContent(314,1);
   S18_ThetaY_5_10__1467->SetBinContent(315,0.9184549);
   S18_ThetaY_5_10__1467->SetBinContent(316,0.8497854);
   S18_ThetaY_5_10__1467->SetBinContent(317,0.7854077);
   S18_ThetaY_5_10__1467->SetBinContent(318,0.4506438);
   S18_ThetaY_5_10__1467->SetBinContent(319,0.02575107);
   S18_ThetaY_5_10__1467->SetBinError(311,0.01213917);
   S18_ThetaY_5_10__1467->SetBinError(312,0.04642341);
   S18_ThetaY_5_10__1467->SetBinError(313,0.05709929);
   S18_ThetaY_5_10__1467->SetBinError(314,0.06551218);
   S18_ThetaY_5_10__1467->SetBinError(315,0.06278429);
   S18_ThetaY_5_10__1467->SetBinError(316,0.06039162);
   S18_ThetaY_5_10__1467->SetBinError(317,0.05805901);
   S18_ThetaY_5_10__1467->SetBinError(318,0.04397833);
   S18_ThetaY_5_10__1467->SetBinError(319,0.01051283);
   S18_ThetaY_5_10__1467->SetMinimum(0);
   S18_ThetaY_5_10__1467->SetMaximum(1.166183);
   S18_ThetaY_5_10__1467->SetEntries(1241);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1467->SetLineColor(ci);
   S18_ThetaY_5_10__1467->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1467->SetMarkerColor(ci);
   S18_ThetaY_5_10__1467->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__1467->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__1467->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1467->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1467->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1467->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__1467->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__1467->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1467->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1467->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1467->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1467->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1467->Draw("AE");
   
   TH1D *ThetaY_5_10__1468 = new TH1D("ThetaY_5_10__1468","",630,-1575,1575);
   ThetaY_5_10__1468->SetBinContent(310,0.001554645);
   ThetaY_5_10__1468->SetBinContent(311,0.2147429);
   ThetaY_5_10__1468->SetBinContent(312,0.644693);
   ThetaY_5_10__1468->SetBinContent(313,0.8752448);
   ThetaY_5_10__1468->SetBinContent(314,1);
   ThetaY_5_10__1468->SetBinContent(315,1.060167);
   ThetaY_5_10__1468->SetBinContent(316,1.051041);
   ThetaY_5_10__1468->SetBinContent(317,0.9944477);
   ThetaY_5_10__1468->SetBinContent(318,0.8696117);
   ThetaY_5_10__1468->SetBinContent(319,0.6421894);
   ThetaY_5_10__1468->SetBinContent(320,0.2134507);
   ThetaY_5_10__1468->SetBinContent(321,0.001534455);
   ThetaY_5_10__1468->SetBinError(310,0.0001771682);
   ThetaY_5_10__1468->SetBinError(311,0.002082234);
   ThetaY_5_10__1468->SetBinError(312,0.003607835);
   ThetaY_5_10__1468->SetBinError(313,0.004203732);
   ThetaY_5_10__1468->SetBinError(314,0.00449335);
   ThetaY_5_10__1468->SetBinError(315,0.004626551);
   ThetaY_5_10__1468->SetBinError(316,0.004606595);
   ThetaY_5_10__1468->SetBinError(317,0.004480858);
   ThetaY_5_10__1468->SetBinError(318,0.004190182);
   ThetaY_5_10__1468->SetBinError(319,0.003600823);
   ThetaY_5_10__1468->SetBinError(320,0.00207596);
   ThetaY_5_10__1468->SetBinError(321,0.000176014);
   ThetaY_5_10__1468->SetEntries(374869);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1468->SetLineColor(ci);
   ThetaY_5_10__1468->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1468->SetMarkerColor(ci);
   ThetaY_5_10__1468->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1468->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1468->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1468->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1468->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1468->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1468->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1468->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1468->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1468->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1468->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1468->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1468->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1468->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1468->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1468->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1468->Draw("AEsame");
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
   
   Double_t _fx3490[12] = {
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
   Double_t _fy3490[12] = {
   0,
   0.1598878,
   0.7788915,
   0.8679362,
   1,
   0.8663306,
   0.808518,
   0.7897929,
   0.5182126,
   0.04009887,
   0,
   0};
   Double_t _felx3490[12] = {
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
   Double_t _fely3490[12] = {
   0,
   0.05534741,
   0.07203605,
   0.06530862,
   0.06561833,
   0.05929478,
   0.05751888,
   0.0584375,
   0.05055267,
   0.01590671,
   0,
   0};
   Double_t _fehx3490[12] = {
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
   Double_t _fehy3490[12] = {
   5.143681,
   0.07889177,
   0.07903008,
   0.07041957,
   0.07007355,
   0.06350018,
   0.06176517,
   0.06293127,
   0.05574352,
   0.02395361,
   0.03702058,
   5.212184};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3490,_fy3490,_felx3490,_fehx3490,_fely3490,_fehy3490);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3490 = new TH1F("Graph_Graph3490","",100,-100,100);
   Graph_Graph3490->SetMinimum(0);
   Graph_Graph3490->SetMaximum(1.5);
   Graph_Graph3490->SetDirectory(0);
   Graph_Graph3490->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3490->SetLineColor(ci);
   Graph_Graph3490->GetXaxis()->SetRange(1,100);
   Graph_Graph3490->GetXaxis()->CenterTitle(true);
   Graph_Graph3490->GetXaxis()->SetLabelFont(42);
   Graph_Graph3490->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3490->GetXaxis()->SetTitleFont(42);
   Graph_Graph3490->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3490->GetYaxis()->CenterTitle(true);
   Graph_Graph3490->GetYaxis()->SetLabelFont(42);
   Graph_Graph3490->GetYaxis()->SetTitleFont(42);
   Graph_Graph3490->GetZaxis()->SetLabelFont(42);
   Graph_Graph3490->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3490->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3490);
   
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
   
   TH2D *ThetaY_vs_Y_5_10__1469 = new TH2D("ThetaY_vs_Y_5_10__1469","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8074,77);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8100,10636);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8126,31931);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8152,43350);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8178,49529);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8204,52509);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8230,52057);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8256,49254);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8282,43071);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8308,31807);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8334,10572);
   ThetaY_vs_Y_5_10__1469->SetBinContent(8360,76);
   ThetaY_vs_Y_5_10__1469->SetEntries(374869);
   ThetaY_vs_Y_5_10__1469->SetContour(20);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(1,2625.45);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(2,5250.9);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(3,7876.35);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(4,10501.8);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(5,13127.25);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(6,15752.7);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(7,18378.15);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(8,21003.6);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(9,23629.05);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(10,26254.5);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(11,28879.95);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(12,31505.4);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(13,34130.85);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(14,36756.3);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(15,39381.75);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(16,42007.2);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(17,44632.65);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(18,47258.1);
   ThetaY_vs_Y_5_10__1469->SetContourLevel(19,49883.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1469->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1469->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1469->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1469->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1469->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1469->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1469->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1469->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1469->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1469->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1469->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1469->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1469->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1469->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1469->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1469->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_5_10","Reco vertices","lpf");
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
