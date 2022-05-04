void S12_VerticalDecayPositionRatio_1250_1500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06276156,81.25,1.19247);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__865 = new TH1D("S12_Y__865","",24,-60,60);
   S12_Y__865->SetBinContent(4,0.01484762);
   S12_Y__865->SetBinContent(5,0.05418078);
   S12_Y__865->SetBinContent(6,0.1049753);
   S12_Y__865->SetBinContent(7,0.1948424);
   S12_Y__865->SetBinContent(8,0.3253451);
   S12_Y__865->SetBinContent(9,0.4980464);
   S12_Y__865->SetBinContent(10,0.7072154);
   S12_Y__865->SetBinContent(11,0.8707997);
   S12_Y__865->SetBinContent(12,0.9934879);
   S12_Y__865->SetBinContent(13,1);
   S12_Y__865->SetBinContent(14,0.8450117);
   S12_Y__865->SetBinContent(15,0.7074759);
   S12_Y__865->SetBinContent(16,0.504819);
   S12_Y__865->SetBinContent(17,0.3073717);
   S12_Y__865->SetBinContent(18,0.185465);
   S12_Y__865->SetBinContent(19,0.1101849);
   S12_Y__865->SetBinContent(20,0.04662673);
   S12_Y__865->SetBinContent(21,0.0151081);
   S12_Y__865->SetBinError(4,0.001966615);
   S12_Y__865->SetBinError(5,0.003756761);
   S12_Y__865->SetBinError(6,0.00522919);
   S12_Y__865->SetBinError(7,0.007124144);
   S12_Y__865->SetBinError(8,0.009205833);
   S12_Y__865->SetBinError(9,0.01139006);
   S12_Y__865->SetBinError(10,0.01357272);
   S12_Y__865->SetBinError(11,0.01506087);
   S12_Y__865->SetBinError(12,0.0160869);
   S12_Y__865->SetBinError(13,0.01613953);
   S12_Y__865->SetBinError(14,0.01483619);
   S12_Y__865->SetBinError(15,0.01357522);
   S12_Y__865->SetBinError(16,0.01146724);
   S12_Y__865->SetBinError(17,0.008947936);
   S12_Y__865->SetBinError(18,0.006950593);
   S12_Y__865->SetBinError(19,0.005357375);
   S12_Y__865->SetBinError(20,0.003485045);
   S12_Y__865->SetBinError(21,0.001983791);
   S12_Y__865->SetEntries(28738);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__865->SetLineColor(ci);
   S12_Y__865->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__865->SetMarkerColor(ci);
   S12_Y__865->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__865->GetXaxis()->SetRange(0,25);
   S12_Y__865->GetXaxis()->SetLabelFont(42);
   S12_Y__865->GetXaxis()->SetTitleOffset(1);
   S12_Y__865->GetXaxis()->SetTitleFont(42);
   S12_Y__865->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__865->GetYaxis()->CenterTitle(true);
   S12_Y__865->GetYaxis()->SetLabelFont(42);
   S12_Y__865->GetYaxis()->SetTitleFont(42);
   S12_Y__865->GetZaxis()->SetLabelFont(42);
   S12_Y__865->GetZaxis()->SetTitleOffset(1);
   S12_Y__865->GetZaxis()->SetTitleFont(42);
   S12_Y__865->Draw("AE");
   
   TH1D *Y__866 = new TH1D("Y__866","",24,-60,60);
   Y__866->SetBinContent(4,0.02857018);
   Y__866->SetBinContent(5,0.07504603);
   Y__866->SetBinContent(6,0.1395782);
   Y__866->SetBinContent(7,0.2347779);
   Y__866->SetBinContent(8,0.372289);
   Y__866->SetBinContent(9,0.553902);
   Y__866->SetBinContent(10,0.7479082);
   Y__866->SetBinContent(11,0.9096168);
   Y__866->SetBinContent(12,1.002948);
   Y__866->SetBinContent(13,1);
   Y__866->SetBinContent(14,0.9119662);
   Y__866->SetBinContent(15,0.746915);
   Y__866->SetBinContent(16,0.5531499);
   Y__866->SetBinContent(17,0.3725739);
   Y__866->SetBinContent(18,0.234845);
   Y__866->SetBinContent(19,0.1396015);
   Y__866->SetBinContent(20,0.07455561);
   Y__866->SetBinContent(21,0.02877155);
   Y__866->SetBinError(4,0.0001978324);
   Y__866->SetBinError(5,0.0003206305);
   Y__866->SetBinError(6,0.0004372701);
   Y__866->SetBinError(7,0.000567113);
   Y__866->SetBinError(8,0.0007141362);
   Y__866->SetBinError(9,0.0008710787);
   Y__866->SetBinError(10,0.001012197);
   Y__866->SetBinError(11,0.001116272);
   Y__866->SetBinError(12,0.001172142);
   Y__866->SetBinError(13,0.001170418);
   Y__866->SetBinError(14,0.001117713);
   Y__866->SetBinError(15,0.001011525);
   Y__866->SetBinError(16,0.0008704872);
   Y__866->SetBinError(17,0.0007144094);
   Y__866->SetBinError(18,0.000567194);
   Y__866->SetBinError(19,0.0004373066);
   Y__866->SetBinError(20,0.0003195811);
   Y__866->SetBinError(21,0.0001985284);
   Y__866->SetEntries(5932656);

   ci = TColor::GetColor("#ff0000");
   Y__866->SetLineColor(ci);
   Y__866->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__866->SetMarkerColor(ci);
   Y__866->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__866->GetXaxis()->CenterTitle(true);
   Y__866->GetXaxis()->SetLabelFont(42);
   Y__866->GetXaxis()->SetTitleSize(0.04);
   Y__866->GetXaxis()->SetTitleOffset(1.1);
   Y__866->GetXaxis()->SetTitleFont(42);
   Y__866->GetYaxis()->SetTitle("Decays");
   Y__866->GetYaxis()->CenterTitle(true);
   Y__866->GetYaxis()->SetNdivisions(4000510);
   Y__866->GetYaxis()->SetLabelFont(42);
   Y__866->GetYaxis()->SetTitleSize(0.04);
   Y__866->GetYaxis()->SetTitleOffset(1.1);
   Y__866->GetYaxis()->SetTitleFont(42);
   Y__866->GetZaxis()->SetLabelFont(42);
   Y__866->GetZaxis()->SetTitleOffset(1);
   Y__866->GetZaxis()->SetTitleFont(42);
   Y__866->Draw("AEsame");
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
   
   Double_t _fx3289[18] = {
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
   Double_t _fy3289[18] = {
   0.5196894,
   0.7219673,
   0.752089,
   0.8299009,
   0.8739048,
   0.8991598,
   0.9455912,
   0.9573258,
   0.9905677,
   1,
   0.9265823,
   0.9471973,
   0.912626,
   0.8249952,
   0.7897334,
   0.7892818,
   0.6253953,
   0.5251056};
   Double_t _felx3289[18] = {
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
   Double_t _fely3289[18] = {
   0.06872413,
   0.0501136,
   0.03752249,
   0.03040345,
   0.02478105,
   0.02061004,
   0.0181915,
   0.01659817,
   0.01608062,
   0.0161812,
   0.01630709,
   0.01821912,
   0.02077867,
   0.02406513,
   0.02965087,
   0.03844039,
   0.04677688,
   0.06884366};
   Double_t _fehx3289[18] = {
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
   Double_t _fehy3289[18] = {
   0.07847779,
   0.05371996,
   0.0394433,
   0.03153841,
   0.02549402,
   0.02108801,
   0.01854492,
   0.0168885,
   0.01634383,
   0.0164452,
   0.01659666,
   0.01857301,
   0.02125728,
   0.02477766,
   0.03078576,
   0.04036014,
   0.05041454,
   0.0785241};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3289,_fy3289,_felx3289,_fehx3289,_fely3289,_fehy3289);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3289 = new TH1F("Graph_Graph3289","",100,-65,65);
   Graph_Graph3289->SetMinimum(0);
   Graph_Graph3289->SetMaximum(1.25);
   Graph_Graph3289->SetDirectory(0);
   Graph_Graph3289->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3289->SetLineColor(ci);
   Graph_Graph3289->GetXaxis()->SetRange(1,100);
   Graph_Graph3289->GetXaxis()->CenterTitle(true);
   Graph_Graph3289->GetXaxis()->SetLabelFont(42);
   Graph_Graph3289->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3289->GetXaxis()->SetTitleFont(42);
   Graph_Graph3289->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3289->GetYaxis()->CenterTitle(true);
   Graph_Graph3289->GetYaxis()->SetLabelFont(42);
   Graph_Graph3289->GetYaxis()->SetTitleFont(42);
   Graph_Graph3289->GetZaxis()->SetLabelFont(42);
   Graph_Graph3289->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3289->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3289);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.066947,510,"S");
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
   entry=leg->AddEntry("S12_Y","Truth vertices","lpf");
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
