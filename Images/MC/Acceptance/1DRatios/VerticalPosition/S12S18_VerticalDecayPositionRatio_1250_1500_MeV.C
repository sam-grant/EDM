void S12S18_VerticalDecayPositionRatio_1250_1500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.06247102,81.25,1.186949);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__979 = new TH1D("S12S18_Y__979","",24,-60,60);
   S12S18_Y__979->SetBinContent(4,0.01621551);
   S12S18_Y__979->SetBinContent(5,0.05557735);
   S12S18_Y__979->SetBinContent(6,0.1082778);
   S12S18_Y__979->SetBinContent(7,0.1930169);
   S12S18_Y__979->SetBinContent(8,0.3227409);
   S12S18_Y__979->SetBinContent(9,0.4983654);
   S12S18_Y__979->SetBinContent(10,0.7060285);
   S12S18_Y__979->SetBinContent(11,0.8749837);
   S12S18_Y__979->SetBinContent(12,0.9797306);
   S12S18_Y__979->SetBinContent(13,1);
   S12S18_Y__979->SetBinContent(14,0.8829606);
   S12S18_Y__979->SetBinContent(15,0.7124362);
   S12S18_Y__979->SetBinContent(16,0.5079116);
   S12S18_Y__979->SetBinContent(17,0.3162024);
   S12S18_Y__979->SetBinContent(18,0.1904015);
   S12S18_Y__979->SetBinContent(19,0.1097162);
   S12S18_Y__979->SetBinContent(20,0.04550804);
   S12S18_Y__979->SetBinContent(21,0.01686936);
   S12S18_Y__979->SetBinError(4,0.001456196);
   S12S18_Y__979->SetBinError(5,0.002695897);
   S12S18_Y__979->SetBinError(6,0.003762912);
   S12S18_Y__979->SetBinError(7,0.005024028);
   S12S18_Y__979->SetBinError(8,0.006496531);
   S12S18_Y__979->SetBinError(9,0.008072878);
   S12S18_Y__979->SetBinError(10,0.009608721);
   S12S18_Y__979->SetBinError(11,0.01069681);
   S12S18_Y__979->SetBinError(12,0.01131899);
   S12S18_Y__979->SetBinError(13,0.01143548);
   S12S18_Y__979->SetBinError(14,0.01074546);
   S12S18_Y__979->SetBinError(15,0.009652225);
   S12S18_Y__979->SetBinError(16,0.008149829);
   S12S18_Y__979->SetBinError(17,0.006430386);
   S12S18_Y__979->SetBinError(18,0.004989874);
   S12S18_Y__979->SetBinError(19,0.003787825);
   S12S18_Y__979->SetBinError(20,0.002439487);
   S12S18_Y__979->SetBinError(21,0.001485264);
   S12S18_Y__979->SetEntries(57635);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__979->SetLineColor(ci);
   S12S18_Y__979->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__979->SetMarkerColor(ci);
   S12S18_Y__979->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__979->GetXaxis()->SetRange(0,25);
   S12S18_Y__979->GetXaxis()->SetLabelFont(42);
   S12S18_Y__979->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__979->GetXaxis()->SetTitleFont(42);
   S12S18_Y__979->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__979->GetYaxis()->CenterTitle(true);
   S12S18_Y__979->GetYaxis()->SetLabelFont(42);
   S12S18_Y__979->GetYaxis()->SetTitleFont(42);
   S12S18_Y__979->GetZaxis()->SetLabelFont(42);
   S12S18_Y__979->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__979->GetZaxis()->SetTitleFont(42);
   S12S18_Y__979->Draw("AE");
   
   TH1D *Y__980 = new TH1D("Y__980","",24,-60,60);
   Y__980->SetBinContent(4,0.02857018);
   Y__980->SetBinContent(5,0.07504603);
   Y__980->SetBinContent(6,0.1395782);
   Y__980->SetBinContent(7,0.2347779);
   Y__980->SetBinContent(8,0.372289);
   Y__980->SetBinContent(9,0.553902);
   Y__980->SetBinContent(10,0.7479082);
   Y__980->SetBinContent(11,0.9096168);
   Y__980->SetBinContent(12,1.002948);
   Y__980->SetBinContent(13,1);
   Y__980->SetBinContent(14,0.9119662);
   Y__980->SetBinContent(15,0.746915);
   Y__980->SetBinContent(16,0.5531499);
   Y__980->SetBinContent(17,0.3725739);
   Y__980->SetBinContent(18,0.234845);
   Y__980->SetBinContent(19,0.1396015);
   Y__980->SetBinContent(20,0.07455561);
   Y__980->SetBinContent(21,0.02877155);
   Y__980->SetBinError(4,0.0001978324);
   Y__980->SetBinError(5,0.0003206305);
   Y__980->SetBinError(6,0.0004372701);
   Y__980->SetBinError(7,0.000567113);
   Y__980->SetBinError(8,0.0007141362);
   Y__980->SetBinError(9,0.0008710787);
   Y__980->SetBinError(10,0.001012197);
   Y__980->SetBinError(11,0.001116272);
   Y__980->SetBinError(12,0.001172142);
   Y__980->SetBinError(13,0.001170418);
   Y__980->SetBinError(14,0.001117713);
   Y__980->SetBinError(15,0.001011525);
   Y__980->SetBinError(16,0.0008704872);
   Y__980->SetBinError(17,0.0007144094);
   Y__980->SetBinError(18,0.000567194);
   Y__980->SetBinError(19,0.0004373066);
   Y__980->SetBinError(20,0.0003195811);
   Y__980->SetBinError(21,0.0001985284);
   Y__980->SetEntries(5932656);

   ci = TColor::GetColor("#ff0000");
   Y__980->SetLineColor(ci);
   Y__980->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__980->SetMarkerColor(ci);
   Y__980->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__980->GetXaxis()->CenterTitle(true);
   Y__980->GetXaxis()->SetLabelFont(42);
   Y__980->GetXaxis()->SetTitleSize(0.04);
   Y__980->GetXaxis()->SetTitleOffset(1.1);
   Y__980->GetXaxis()->SetTitleFont(42);
   Y__980->GetYaxis()->SetTitle("Decays");
   Y__980->GetYaxis()->CenterTitle(true);
   Y__980->GetYaxis()->SetNdivisions(4000510);
   Y__980->GetYaxis()->SetLabelFont(42);
   Y__980->GetYaxis()->SetTitleSize(0.04);
   Y__980->GetYaxis()->SetTitleOffset(1.1);
   Y__980->GetYaxis()->SetTitleFont(42);
   Y__980->GetZaxis()->SetLabelFont(42);
   Y__980->GetZaxis()->SetTitleOffset(1);
   Y__980->GetZaxis()->SetTitleFont(42);
   Y__980->Draw("AEsame");
   upper_pad->Modified();
   c->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-81.25,-0.5769231,81.25,1.346154);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3327[18] = {
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
   Double_t _fy3327[18] = {
   0.5675677,
   0.7405768,
   0.7757495,
   0.8221253,
   0.8669097,
   0.8997357,
   0.9440042,
   0.9619255,
   0.9768509,
   1,
   0.9681945,
   0.9538384,
   0.9182169,
   0.8486971,
   0.8107536,
   0.7859243,
   0.6103906,
   0.5863209};
   Double_t _felx3327[18] = {
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
   Double_t _fely3327[18] = {
   0.05105019,
   0.03604783,
   0.02706289,
   0.02148852,
   0.01752807,
   0.01464242,
   0.01291042,
   0.01181849,
   0.01134306,
   0.01149496,
   0.01184204,
   0.01298678,
   0.01480353,
   0.01733468,
   0.02133505,
   0.02723903,
   0.03280876,
   0.0517126};
   Double_t _fehx3327[18] = {
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
   Double_t _fehy3327[18] = {
   0.05586493,
   0.03784737,
   0.02802416,
   0.02205779,
   0.01788617,
   0.01488272,
   0.01308823,
   0.01196461,
   0.01147556,
   0.01162788,
   0.01198779,
   0.01316484,
   0.01504417,
   0.01769248,
   0.02190413,
   0.02820014,
   0.03462212,
   0.05649058};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3327,_fy3327,_felx3327,_fehx3327,_fely3327,_fehy3327);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3327 = new TH1F("Graph_Graph3327","",100,-65,65);
   Graph_Graph3327->SetMinimum(0);
   Graph_Graph3327->SetMaximum(1.25);
   Graph_Graph3327->SetDirectory(0);
   Graph_Graph3327->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3327->SetLineColor(ci);
   Graph_Graph3327->GetXaxis()->SetRange(1,100);
   Graph_Graph3327->GetXaxis()->CenterTitle(true);
   Graph_Graph3327->GetXaxis()->SetLabelFont(42);
   Graph_Graph3327->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3327->GetXaxis()->SetTitleFont(42);
   Graph_Graph3327->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3327->GetYaxis()->CenterTitle(true);
   Graph_Graph3327->GetYaxis()->SetLabelFont(42);
   Graph_Graph3327->GetYaxis()->SetTitleFont(42);
   Graph_Graph3327->GetZaxis()->SetLabelFont(42);
   Graph_Graph3327->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3327->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3327);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   c->cd();
  
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-65,65,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.062007,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-65,65,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Decay y-position [mm]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.25,510,"-S");
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
   c->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Y","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_Y","Truth vertices","lpf");
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
