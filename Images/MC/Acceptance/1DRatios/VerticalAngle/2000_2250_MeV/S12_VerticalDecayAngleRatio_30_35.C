void S12_VerticalDecayAngleRatio_30_35()
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
   upper_pad->Range(-125,-0.3298362,125,6.266888);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__1425 = new TH1D("S12_ThetaY_30_35__1425","",630,-1575,1575);
   S12_ThetaY_30_35__1425->SetBinContent(311,1);
   S12_ThetaY_30_35__1425->SetBinContent(312,1.875);
   S12_ThetaY_30_35__1425->SetBinContent(313,2.5);
   S12_ThetaY_30_35__1425->SetBinContent(314,3.875);
   S12_ThetaY_30_35__1425->SetBinContent(315,5);
   S12_ThetaY_30_35__1425->SetBinContent(316,2.375);
   S12_ThetaY_30_35__1425->SetBinContent(317,0.125);
   S12_ThetaY_30_35__1425->SetBinError(311,0.3535534);
   S12_ThetaY_30_35__1425->SetBinError(312,0.4841229);
   S12_ThetaY_30_35__1425->SetBinError(313,0.559017);
   S12_ThetaY_30_35__1425->SetBinError(314,0.6959705);
   S12_ThetaY_30_35__1425->SetBinError(315,0.7905694);
   S12_ThetaY_30_35__1425->SetBinError(316,0.5448624);
   S12_ThetaY_30_35__1425->SetBinError(317,0.125);
   S12_ThetaY_30_35__1425->SetMinimum(0);
   S12_ThetaY_30_35__1425->SetMaximum(5.607215);
   S12_ThetaY_30_35__1425->SetEntries(134);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1425->SetLineColor(ci);
   S12_ThetaY_30_35__1425->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1425->SetMarkerColor(ci);
   S12_ThetaY_30_35__1425->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__1425->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__1425->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1425->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1425->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1425->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__1425->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__1425->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1425->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1425->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1425->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1425->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1425->Draw("AE");
   
   TH1D *ThetaY_30_35__1426 = new TH1D("ThetaY_30_35__1426","",630,-1575,1575);
   ThetaY_30_35__1426->SetBinContent(310,0.01582278);
   ThetaY_30_35__1426->SetBinContent(311,1);
   ThetaY_30_35__1426->SetBinContent(312,3.062025);
   ThetaY_30_35__1426->SetBinContent(313,4.176582);
   ThetaY_30_35__1426->SetBinContent(314,4.767722);
   ThetaY_30_35__1426->SetBinContent(315,5.027215);
   ThetaY_30_35__1426->SetBinContent(316,5.097468);
   ThetaY_30_35__1426->SetBinContent(317,4.738608);
   ThetaY_30_35__1426->SetBinContent(318,4.144304);
   ThetaY_30_35__1426->SetBinContent(319,3.022152);
   ThetaY_30_35__1426->SetBinContent(320,1.010759);
   ThetaY_30_35__1426->SetBinContent(321,0.01075949);
   ThetaY_30_35__1426->SetBinError(310,0.003164557);
   ThetaY_30_35__1426->SetBinError(311,0.02515773);
   ThetaY_30_35__1426->SetBinError(312,0.04402262);
   ThetaY_30_35__1426->SetBinError(313,0.05141407);
   ThetaY_30_35__1426->SetBinError(314,0.05493219);
   ThetaY_30_35__1426->SetBinError(315,0.05640728);
   ThetaY_30_35__1426->SetBinError(316,0.05680005);
   ThetaY_30_35__1426->SetBinError(317,0.05476421);
   ThetaY_30_35__1426->SetBinError(318,0.05121501);
   ThetaY_30_35__1426->SetBinError(319,0.04373505);
   ThetaY_30_35__1426->SetBinError(320,0.02529271);
   ThetaY_30_35__1426->SetBinError(321,0.002609561);
   ThetaY_30_35__1426->SetEntries(56996);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1426->SetLineColor(ci);
   ThetaY_30_35__1426->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1426->SetMarkerColor(ci);
   ThetaY_30_35__1426->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1426->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1426->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1426->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1426->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1426->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1426->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1426->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1426->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1426->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1426->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1426->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1426->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1426->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1426->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1426->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1426->Draw("AEsame");
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
   
   Double_t _fx3476[12] = {
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
   Double_t _fy3476[12] = {
   0,
   1,
   0.6123398,
   0.5985755,
   0.8127572,
   0.9945864,
   0.4659176,
   0.02637906,
   0,
   0,
   0,
   0};
   Double_t _felx3476[12] = {
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
   Double_t _fely3476[12] = {
   0,
   0.3468267,
   0.1565528,
   0.1329093,
   0.1454731,
   0.1569821,
   0.1060591,
   0.02182253,
   0,
   0,
   0,
   0};
   Double_t _fehx3476[12] = {
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
   Double_t _fehy3476[12] = {
   15.09298,
   0.4950064,
   0.2028463,
   0.1663217,
   0.174196,
   0.1839797,
   0.1334839,
   0.06067271,
   0.05553648,
   0.07616165,
   0.2278093,
   22.58943};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3476,_fy3476,_felx3476,_fehx3476,_fely3476,_fehy3476);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3476 = new TH1F("Graph_Graph3476","",100,-100,100);
   Graph_Graph3476->SetMinimum(0);
   Graph_Graph3476->SetMaximum(1.5);
   Graph_Graph3476->SetDirectory(0);
   Graph_Graph3476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3476->SetLineColor(ci);
   Graph_Graph3476->GetXaxis()->SetRange(1,100);
   Graph_Graph3476->GetXaxis()->CenterTitle(true);
   Graph_Graph3476->GetXaxis()->SetLabelFont(42);
   Graph_Graph3476->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3476->GetXaxis()->SetTitleFont(42);
   Graph_Graph3476->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3476->GetYaxis()->CenterTitle(true);
   Graph_Graph3476->GetYaxis()->SetLabelFont(42);
   Graph_Graph3476->GetYaxis()->SetTitleFont(42);
   Graph_Graph3476->GetZaxis()->SetLabelFont(42);
   Graph_Graph3476->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3476->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3476);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.607215,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1427 = new TH2D("ThetaY_vs_Y_30_35__1427","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8079,25);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8105,1580);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8131,4838);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8157,6599);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8183,7533);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8209,7943);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8235,8054);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8261,7487);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8287,6548);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8313,4775);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8339,1597);
   ThetaY_vs_Y_30_35__1427->SetBinContent(8365,17);
   ThetaY_vs_Y_30_35__1427->SetEntries(56996);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1427->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1427->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1427->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1427->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1427->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1427->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1427->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1427->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1427->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1427->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1427->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1427->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1427->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1427->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1427->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1427->Draw("COL");
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
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
