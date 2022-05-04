void S12_VerticalDecayAngleRatio_25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:55 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.4712213,125,8.953205);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_25_30__1080 = new TH1D("S12_ThetaY_25_30__1080","",630,-1575,1575);
   S12_ThetaY_25_30__1080->SetBinContent(309,1);
   S12_ThetaY_25_30__1080->SetBinContent(310,2.235294);
   S12_ThetaY_25_30__1080->SetBinContent(311,3.117647);
   S12_ThetaY_25_30__1080->SetBinContent(312,4.705882);
   S12_ThetaY_25_30__1080->SetBinContent(313,4.529412);
   S12_ThetaY_25_30__1080->SetBinContent(314,4.764706);
   S12_ThetaY_25_30__1080->SetBinContent(315,4.411765);
   S12_ThetaY_25_30__1080->SetBinContent(316,5.235294);
   S12_ThetaY_25_30__1080->SetBinContent(317,1.764706);
   S12_ThetaY_25_30__1080->SetBinContent(318,0.05882353);
   S12_ThetaY_25_30__1080->SetBinError(309,0.2425356);
   S12_ThetaY_25_30__1080->SetBinError(310,0.3626126);
   S12_ThetaY_25_30__1080->SetBinError(311,0.4282418);
   S12_ThetaY_25_30__1080->SetBinError(312,0.5261336);
   S12_ThetaY_25_30__1080->SetBinError(313,0.5161744);
   S12_ThetaY_25_30__1080->SetBinError(314,0.5294118);
   S12_ThetaY_25_30__1080->SetBinError(315,0.5094267);
   S12_ThetaY_25_30__1080->SetBinError(316,0.5549401);
   S12_ThetaY_25_30__1080->SetBinError(317,0.3221897);
   S12_ThetaY_25_30__1080->SetBinError(318,0.05882353);
   S12_ThetaY_25_30__1080->SetMinimum(0);
   S12_ThetaY_25_30__1080->SetMaximum(8.010762);
   S12_ThetaY_25_30__1080->SetEntries(541);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1080->SetLineColor(ci);
   S12_ThetaY_25_30__1080->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_25_30__1080->SetMarkerColor(ci);
   S12_ThetaY_25_30__1080->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_25_30__1080->GetXaxis()->SetRange(296,335);
   S12_ThetaY_25_30__1080->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1080->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1080->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1080->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_25_30__1080->GetYaxis()->CenterTitle(true);
   S12_ThetaY_25_30__1080->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1080->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1080->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_25_30__1080->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_25_30__1080->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_25_30__1080->Draw("AE");
   
   TH1D *ThetaY_25_30__1081 = new TH1D("ThetaY_25_30__1081","",630,-1575,1575);
   ThetaY_25_30__1081->SetBinContent(308,0.005979073);
   ThetaY_25_30__1081->SetBinContent(309,1);
   ThetaY_25_30__1081->SetBinContent(310,3.56851);
   ThetaY_25_30__1081->SetBinContent(311,5.134529);
   ThetaY_25_30__1081->SetBinContent(312,6.146487);
   ThetaY_25_30__1081->SetBinContent(313,6.778276);
   ThetaY_25_30__1081->SetBinContent(314,7.073742);
   ThetaY_25_30__1081->SetBinContent(315,7.282511);
   ThetaY_25_30__1081->SetBinContent(316,7.206776);
   ThetaY_25_30__1081->SetBinContent(317,7.075237);
   ThetaY_25_30__1081->SetBinContent(318,6.725461);
   ThetaY_25_30__1081->SetBinContent(319,6.252616);
   ThetaY_25_30__1081->SetBinContent(320,5.225212);
   ThetaY_25_30__1081->SetBinContent(321,3.606378);
   ThetaY_25_30__1081->SetBinContent(322,0.9940209);
   ThetaY_25_30__1081->SetBinContent(323,0.001993024);
   ThetaY_25_30__1081->SetBinError(308,0.00172601);
   ThetaY_25_30__1081->SetBinError(309,0.02232165);
   ThetaY_25_30__1081->SetBinError(310,0.04216672);
   ThetaY_25_30__1081->SetBinError(311,0.05057974);
   ThetaY_25_30__1081->SetBinError(312,0.05534008);
   ThetaY_25_30__1081->SetBinError(313,0.05811469);
   ThetaY_25_30__1081->SetBinError(314,0.05936779);
   ThetaY_25_30__1081->SetBinError(315,0.06023749);
   ThetaY_25_30__1081->SetBinError(316,0.05992345);
   ThetaY_25_30__1081->SetBinError(317,0.05937407);
   ThetaY_25_30__1081->SetBinError(318,0.05788784);
   ThetaY_25_30__1081->SetBinError(319,0.0558158);
   ThetaY_25_30__1081->SetBinError(320,0.05102444);
   ThetaY_25_30__1081->SetBinError(321,0.04238985);
   ThetaY_25_30__1081->SetBinError(322,0.02225482);
   ThetaY_25_30__1081->SetBinError(323,0.0009965122);
   ThetaY_25_30__1081->SetEntries(148674);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1081->SetLineColor(ci);
   ThetaY_25_30__1081->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__1081->SetMarkerColor(ci);
   ThetaY_25_30__1081->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__1081->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__1081->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__1081->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1081->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1081->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__1081->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__1081->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__1081->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__1081->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__1081->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__1081->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__1081->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__1081->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__1081->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__1081->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__1081->Draw("AEsame");
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
   
   Double_t _fx3361[16] = {
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
   37.5};
   Double_t _fy3361[16] = {
   0,
   1,
   0.6263942,
   0.6071924,
   0.7656214,
   0.6682247,
   0.6735764,
   0.6058027,
   0.7264405,
   0.24942,
   0.008746394,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3361[16] = {
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
   Double_t _fely3361[16] = {
   0,
   0.2410881,
   0.1014267,
   0.08334994,
   0.08569298,
   0.0761976,
   0.07489723,
   0.0699723,
   0.07709114,
   0.04532871,
   0.007235523,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3361[16] = {
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
   Double_t _fehy3361[16] = {
   19.57566,
   0.3077927,
   0.1193652,
   0.09566909,
   0.09587424,
   0.08543084,
   0.08373312,
   0.07856732,
   0.0857469,
   0.05442724,
   0.02011502,
   0.01732128,
   0.02072737,
   0.03003267,
   0.1089971,
   69.00286};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3361,_fy3361,_felx3361,_fehx3361,_fely3361,_fehy3361);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3361 = new TH1F("Graph_Graph3361","",100,-100,100);
   Graph_Graph3361->SetMinimum(0);
   Graph_Graph3361->SetMaximum(1.5);
   Graph_Graph3361->SetDirectory(0);
   Graph_Graph3361->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3361->SetLineColor(ci);
   Graph_Graph3361->GetXaxis()->SetRange(1,100);
   Graph_Graph3361->GetXaxis()->CenterTitle(true);
   Graph_Graph3361->GetXaxis()->SetLabelFont(42);
   Graph_Graph3361->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3361->GetXaxis()->SetTitleFont(42);
   Graph_Graph3361->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3361->GetYaxis()->CenterTitle(true);
   Graph_Graph3361->GetYaxis()->SetLabelFont(42);
   Graph_Graph3361->GetYaxis()->SetTitleFont(42);
   Graph_Graph3361->GetZaxis()->SetLabelFont(42);
   Graph_Graph3361->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3361->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3361);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,8.010762,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__1082 = new TH2D("ThetaY_vs_Y_25_30__1082","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8026,12);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8052,2007);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8078,7162);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8104,10305);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8130,12336);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8156,13604);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8182,14197);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8208,14616);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8234,14464);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8260,14200);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8286,13498);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8312,12549);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8338,10487);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8364,7238);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8390,1995);
   ThetaY_vs_Y_25_30__1082->SetBinContent(8416,4);
   ThetaY_vs_Y_25_30__1082->SetEntries(148674);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__1082->SetLineColor(ci);
   ThetaY_vs_Y_25_30__1082->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__1082->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__1082->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1082->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1082->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1082->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1082->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__1082->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__1082->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__1082->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1082->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1082->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__1082->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__1082->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__1082->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_25_30","Reco vertices","lpf");
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
