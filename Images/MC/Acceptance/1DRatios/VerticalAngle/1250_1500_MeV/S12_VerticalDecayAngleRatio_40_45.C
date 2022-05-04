void S12_VerticalDecayAngleRatio_40_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.132689,125,2.521091);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_40_45__918 = new TH1D("S12_ThetaY_40_45__918","",630,-1575,1575);
   S12_ThetaY_40_45__918->SetBinContent(308,0.125);
   S12_ThetaY_40_45__918->SetBinContent(309,1);
   S12_ThetaY_40_45__918->SetBinContent(310,0.5);
   S12_ThetaY_40_45__918->SetBinContent(311,1.125);
   S12_ThetaY_40_45__918->SetBinContent(312,1.125);
   S12_ThetaY_40_45__918->SetBinContent(313,1.625);
   S12_ThetaY_40_45__918->SetBinContent(314,0.875);
   S12_ThetaY_40_45__918->SetBinContent(315,0.75);
   S12_ThetaY_40_45__918->SetBinContent(316,0.125);
   S12_ThetaY_40_45__918->SetBinError(308,0.125);
   S12_ThetaY_40_45__918->SetBinError(309,0.3535534);
   S12_ThetaY_40_45__918->SetBinError(310,0.25);
   S12_ThetaY_40_45__918->SetBinError(311,0.375);
   S12_ThetaY_40_45__918->SetBinError(312,0.375);
   S12_ThetaY_40_45__918->SetBinError(313,0.4506939);
   S12_ThetaY_40_45__918->SetBinError(314,0.3307189);
   S12_ThetaY_40_45__918->SetBinError(315,0.3061862);
   S12_ThetaY_40_45__918->SetBinError(316,0.125);
   S12_ThetaY_40_45__918->SetMinimum(0);
   S12_ThetaY_40_45__918->SetMaximum(2.255713);
   S12_ThetaY_40_45__918->SetEntries(58);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__918->SetLineColor(ci);
   S12_ThetaY_40_45__918->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_40_45__918->SetMarkerColor(ci);
   S12_ThetaY_40_45__918->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_40_45__918->GetXaxis()->SetRange(296,335);
   S12_ThetaY_40_45__918->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__918->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__918->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__918->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_40_45__918->GetYaxis()->CenterTitle(true);
   S12_ThetaY_40_45__918->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__918->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__918->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_40_45__918->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_40_45__918->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_40_45__918->Draw("AE");
   
   TH1D *ThetaY_40_45__919 = new TH1D("ThetaY_40_45__919","",630,-1575,1575);
   ThetaY_40_45__919->SetBinContent(307,0.01177856);
   ThetaY_40_45__919->SetBinContent(308,0.3568905);
   ThetaY_40_45__919->SetBinContent(309,1);
   ThetaY_40_45__919->SetBinContent(310,1.426384);
   ThetaY_40_45__919->SetBinContent(311,1.731449);
   ThetaY_40_45__919->SetBinContent(312,1.833922);
   ThetaY_40_45__919->SetBinContent(313,1.923439);
   ThetaY_40_45__919->SetBinContent(314,2.017668);
   ThetaY_40_45__919->SetBinContent(315,1.995289);
   ThetaY_40_45__919->SetBinContent(316,2.050648);
   ThetaY_40_45__919->SetBinContent(317,1.975265);
   ThetaY_40_45__919->SetBinContent(318,1.898704);
   ThetaY_40_45__919->SetBinContent(319,1.936396);
   ThetaY_40_45__919->SetBinContent(320,1.664311);
   ThetaY_40_45__919->SetBinContent(321,1.454653);
   ThetaY_40_45__919->SetBinContent(322,1.061249);
   ThetaY_40_45__919->SetBinContent(323,0.3898704);
   ThetaY_40_45__919->SetBinContent(324,0.01060071);
   ThetaY_40_45__919->SetBinError(307,0.003724709);
   ThetaY_40_45__919->SetBinError(308,0.02050282);
   ThetaY_40_45__919->SetBinError(309,0.03431991);
   ThetaY_40_45__919->SetBinError(310,0.04098872);
   ThetaY_40_45__919->SetBinError(311,0.04515969);
   ThetaY_40_45__919->SetBinError(312,0.04647684);
   ThetaY_40_45__919->SetBinError(313,0.04759764);
   ThetaY_40_45__919->SetBinError(314,0.04874959);
   ThetaY_40_45__919->SetBinError(315,0.04847848);
   ThetaY_40_45__919->SetBinError(316,0.0491464);
   ThetaY_40_45__919->SetBinError(317,0.04823462);
   ThetaY_40_45__919->SetBinError(318,0.0472906);
   ThetaY_40_45__919->SetBinError(319,0.04775768);
   ThetaY_40_45__919->SetBinError(320,0.04427549);
   ThetaY_40_45__919->SetBinError(321,0.04139289);
   ThetaY_40_45__919->SetBinError(322,0.03535531);
   ThetaY_40_45__919->SetBinError(323,0.02142922);
   ThetaY_40_45__919->SetBinError(324,0.003533569);
   ThetaY_40_45__919->SetEntries(21003);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__919->SetLineColor(ci);
   ThetaY_40_45__919->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_40_45__919->SetMarkerColor(ci);
   ThetaY_40_45__919->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_40_45__919->GetXaxis()->CenterTitle(true);
   ThetaY_40_45__919->GetXaxis()->SetLabelFont(42);
   ThetaY_40_45__919->GetXaxis()->SetTitleSize(0.04);
   ThetaY_40_45__919->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__919->GetXaxis()->SetTitleFont(42);
   ThetaY_40_45__919->GetYaxis()->SetTitle("Tracks");
   ThetaY_40_45__919->GetYaxis()->CenterTitle(true);
   ThetaY_40_45__919->GetYaxis()->SetNdivisions(4000510);
   ThetaY_40_45__919->GetYaxis()->SetLabelFont(42);
   ThetaY_40_45__919->GetYaxis()->SetTitleSize(0.04);
   ThetaY_40_45__919->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_40_45__919->GetYaxis()->SetTitleFont(42);
   ThetaY_40_45__919->GetZaxis()->SetLabelFont(42);
   ThetaY_40_45__919->GetZaxis()->SetTitleOffset(1);
   ThetaY_40_45__919->GetZaxis()->SetTitleFont(42);
   ThetaY_40_45__919->Draw("AEsame");
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
   
   Double_t _fx3307[18] = {
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
   42.5};
   Double_t _fy3307[18] = {
   0,
   0.3502475,
   1,
   0.3505367,
   0.6497449,
   0.6134393,
   0.8448408,
   0.433669,
   0.3758855,
   0.06095635,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3307[18] = {
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
   Double_t _fely3307[18] = {
   0,
   0.2899228,
   0.3474947,
   0.1679812,
   0.2130851,
   0.2011478,
   0.2321237,
   0.1602148,
   0.1493229,
   0.05043143,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3307[18] = {
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
   Double_t _fehy3307[18] = {
   21.45196,
   0.8097973,
   0.4966105,
   0.2779852,
   0.2980543,
   0.2813303,
   0.3069378,
   0.2343133,
   0.2251415,
   0.1403036,
   0.1165687,
   0.1212717,
   0.1189099,
   0.1383622,
   0.1583191,
   0.2170679,
   0.5919117,
   24.08853};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3307,_fy3307,_felx3307,_fehx3307,_fely3307,_fehy3307);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3307 = new TH1F("Graph_Graph3307","",100,-100,100);
   Graph_Graph3307->SetMinimum(0);
   Graph_Graph3307->SetMaximum(1.5);
   Graph_Graph3307->SetDirectory(0);
   Graph_Graph3307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3307->SetLineColor(ci);
   Graph_Graph3307->GetXaxis()->SetRange(1,100);
   Graph_Graph3307->GetXaxis()->CenterTitle(true);
   Graph_Graph3307->GetXaxis()->SetLabelFont(42);
   Graph_Graph3307->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3307->GetXaxis()->SetTitleFont(42);
   Graph_Graph3307->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3307->GetYaxis()->CenterTitle(true);
   Graph_Graph3307->GetYaxis()->SetLabelFont(42);
   Graph_Graph3307->GetYaxis()->SetTitleFont(42);
   Graph_Graph3307->GetZaxis()->SetLabelFont(42);
   Graph_Graph3307->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3307->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3307);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.255713,510,"S");
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
   
   TH2D *ThetaY_vs_Y_40_45__920 = new TH2D("ThetaY_vs_Y_40_45__920","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_40_45__920->SetBinContent(8003,10);
   ThetaY_vs_Y_40_45__920->SetBinContent(8029,303);
   ThetaY_vs_Y_40_45__920->SetBinContent(8055,849);
   ThetaY_vs_Y_40_45__920->SetBinContent(8081,1211);
   ThetaY_vs_Y_40_45__920->SetBinContent(8107,1470);
   ThetaY_vs_Y_40_45__920->SetBinContent(8133,1557);
   ThetaY_vs_Y_40_45__920->SetBinContent(8159,1633);
   ThetaY_vs_Y_40_45__920->SetBinContent(8185,1713);
   ThetaY_vs_Y_40_45__920->SetBinContent(8211,1694);
   ThetaY_vs_Y_40_45__920->SetBinContent(8237,1741);
   ThetaY_vs_Y_40_45__920->SetBinContent(8263,1677);
   ThetaY_vs_Y_40_45__920->SetBinContent(8289,1612);
   ThetaY_vs_Y_40_45__920->SetBinContent(8315,1644);
   ThetaY_vs_Y_40_45__920->SetBinContent(8341,1413);
   ThetaY_vs_Y_40_45__920->SetBinContent(8367,1235);
   ThetaY_vs_Y_40_45__920->SetBinContent(8393,901);
   ThetaY_vs_Y_40_45__920->SetBinContent(8419,331);
   ThetaY_vs_Y_40_45__920->SetBinContent(8445,9);
   ThetaY_vs_Y_40_45__920->SetEntries(21003);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_40_45__920->SetLineColor(ci);
   ThetaY_vs_Y_40_45__920->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_40_45__920->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_40_45__920->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__920->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__920->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__920->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__920->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_40_45__920->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_40_45__920->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_40_45__920->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__920->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__920->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_40_45__920->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_40_45__920->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_40_45__920->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_40_45","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_40_45","Reco vertices","lpf");
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
