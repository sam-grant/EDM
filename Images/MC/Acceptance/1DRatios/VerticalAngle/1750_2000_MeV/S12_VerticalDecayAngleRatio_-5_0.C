void S12_VerticalDecayAngleRatio_-5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06715044,125,1.275858);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__1233 = new TH1D("S12_ThetaY_mI5_0__1233","",630,-1575,1575);
   S12_ThetaY_mI5_0__1233->SetBinContent(311,0.0591716);
   S12_ThetaY_mI5_0__1233->SetBinContent(312,0.4674556);
   S12_ThetaY_mI5_0__1233->SetBinContent(313,0.8727811);
   S12_ThetaY_mI5_0__1233->SetBinContent(314,0.8402367);
   S12_ThetaY_mI5_0__1233->SetBinContent(315,0.9615385);
   S12_ThetaY_mI5_0__1233->SetBinContent(316,0.9674556);
   S12_ThetaY_mI5_0__1233->SetBinContent(317,1);
   S12_ThetaY_mI5_0__1233->SetBinContent(318,0.8284024);
   S12_ThetaY_mI5_0__1233->SetBinContent(319,0.6360947);
   S12_ThetaY_mI5_0__1233->SetBinContent(320,0.1390533);
   S12_ThetaY_mI5_0__1233->SetBinContent(321,0.01775148);
   S12_ThetaY_mI5_0__1233->SetBinError(311,0.01323117);
   S12_ThetaY_mI5_0__1233->SetBinError(312,0.03718877);
   S12_ThetaY_mI5_0__1233->SetBinError(313,0.05081528);
   S12_ThetaY_mI5_0__1233->SetBinError(314,0.04985887);
   S12_ThetaY_mI5_0__1233->SetBinError(315,0.05333656);
   S12_ThetaY_mI5_0__1233->SetBinError(316,0.05350042);
   S12_ThetaY_mI5_0__1233->SetBinError(317,0.05439283);
   S12_ThetaY_mI5_0__1233->SetBinError(318,0.04950651);
   S12_ThetaY_mI5_0__1233->SetBinError(319,0.0433813);
   S12_ThetaY_mI5_0__1233->SetBinError(320,0.020283);
   S12_ThetaY_mI5_0__1233->SetBinError(321,0.007247011);
   S12_ThetaY_mI5_0__1233->SetMinimum(0);
   S12_ThetaY_mI5_0__1233->SetMaximum(1.141557);
   S12_ThetaY_mI5_0__1233->SetEntries(2295);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1233->SetLineColor(ci);
   S12_ThetaY_mI5_0__1233->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1233->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__1233->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__1233->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__1233->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1233->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1233->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1233->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__1233->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__1233->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1233->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1233->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1233->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1233->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1233->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1234 = new TH1D("ThetaY_mI5_0__1234","",630,-1575,1575);
   ThetaY_mI5_0__1234->SetBinContent(309,0.0007147476);
   ThetaY_mI5_0__1234->SetBinContent(310,0.1517137);
   ThetaY_mI5_0__1234->SetBinContent(311,0.5558014);
   ThetaY_mI5_0__1234->SetBinContent(312,0.7855247);
   ThetaY_mI5_0__1234->SetBinContent(313,0.9197951);
   ThetaY_mI5_0__1234->SetBinContent(314,0.9973282);
   ThetaY_mI5_0__1234->SetBinContent(315,1.03778);
   ThetaY_mI5_0__1234->SetBinContent(316,1.028675);
   ThetaY_mI5_0__1234->SetBinContent(317,1);
   ThetaY_mI5_0__1234->SetBinContent(318,0.9148429);
   ThetaY_mI5_0__1234->SetBinContent(319,0.7890133);
   ThetaY_mI5_0__1234->SetBinContent(320,0.5471053);
   ThetaY_mI5_0__1234->SetBinContent(321,0.153943);
   ThetaY_mI5_0__1234->SetBinContent(322,0.0006296586);
   ThetaY_mI5_0__1234->SetBinError(309,0.000110288);
   ThetaY_mI5_0__1234->SetBinError(310,0.001606808);
   ThetaY_mI5_0__1234->SetBinError(311,0.00307547);
   ThetaY_mI5_0__1234->SetBinError(312,0.003656214);
   ThetaY_mI5_0__1234->SetBinError(313,0.003956373);
   ThetaY_mI5_0__1234->SetBinError(314,0.004119749);
   ThetaY_mI5_0__1234->SetBinError(315,0.004202467);
   ThetaY_mI5_0__1234->SetBinError(316,0.004183992);
   ThetaY_mI5_0__1234->SetBinError(317,0.004125264);
   ThetaY_mI5_0__1234->SetBinError(318,0.003945708);
   ThetaY_mI5_0__1234->SetBinError(319,0.003664324);
   ThetaY_mI5_0__1234->SetBinError(320,0.003051316);
   ThetaY_mI5_0__1234->SetBinError(321,0.001618571);
   ThetaY_mI5_0__1234->SetBinError(322,0.0001035152);
   ThetaY_mI5_0__1234->SetEntries(521975);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1234->SetLineColor(ci);
   ThetaY_mI5_0__1234->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1234->SetMarkerColor(ci);
   ThetaY_mI5_0__1234->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1234->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1234->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1234->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1234->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1234->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1234->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1234->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1234->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1234->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1234->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1234->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1234->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1234->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1234->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1234->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1234->Draw("AEsame");
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
   
   Double_t _fx3412[14] = {
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
   32.5};
   Double_t _fy3412[14] = {
   0,
   0,
   0.1064618,
   0.5950871,
   0.9488864,
   0.8424876,
   0.9265344,
   0.9404872,
   1,
   0.9055132,
   0.80619,
   0.2541618,
   0.115312,
   0};
   Double_t _felx3412[14] = {
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
   Double_t _fely3412[14] = {
   0,
   0,
   0.02361185,
   0.04737284,
   0.05536498,
   0.05008352,
   0.05150475,
   0.05212247,
   0.05452162,
   0.05422263,
   0.0550656,
   0.03696736,
   0.04575211,
   0};
   Double_t _fehx3412[14] = {
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
   Double_t _fehy3412[14] = {
   7.790093,
   0.03590561,
   0.02953616,
   0.05130405,
   0.05869471,
   0.05315408,
   0.0544515,
   0.05509532,
   0.05757945,
   0.05757204,
   0.05896292,
   0.0427805,
   0.0689093,
   8.869242};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3412,_fy3412,_felx3412,_fehx3412,_fely3412,_fehy3412);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3412 = new TH1F("Graph_Graph3412","",100,-100,100);
   Graph_Graph3412->SetMinimum(0);
   Graph_Graph3412->SetMaximum(1.5);
   Graph_Graph3412->SetDirectory(0);
   Graph_Graph3412->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3412->SetLineColor(ci);
   Graph_Graph3412->GetXaxis()->SetRange(1,100);
   Graph_Graph3412->GetXaxis()->CenterTitle(true);
   Graph_Graph3412->GetXaxis()->SetLabelFont(42);
   Graph_Graph3412->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3412->GetXaxis()->SetTitleFont(42);
   Graph_Graph3412->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3412->GetYaxis()->CenterTitle(true);
   Graph_Graph3412->GetYaxis()->SetLabelFont(42);
   Graph_Graph3412->GetYaxis()->SetTitleFont(42);
   Graph_Graph3412->GetZaxis()->SetLabelFont(42);
   Graph_Graph3412->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3412->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3412);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.141557,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1235 = new TH2D("ThetaY_vs_Y_mI5_0__1235","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8046,42);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8072,8915);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8098,32660);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8124,46159);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8150,54049);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8176,58605);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8202,60982);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8228,60447);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8254,58762);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8280,53758);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8306,46364);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8332,32149);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8358,9046);
   ThetaY_vs_Y_mI5_0__1235->SetBinContent(8384,37);
   ThetaY_vs_Y_mI5_0__1235->SetEntries(521975);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1235->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1235->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1235->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1235->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1235->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1235->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1235->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1235->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1235->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1235->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1235->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1235->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1235->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1235->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1235->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1235->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
