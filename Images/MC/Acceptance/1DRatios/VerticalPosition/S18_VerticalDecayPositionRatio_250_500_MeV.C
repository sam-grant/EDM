void S18_VerticalDecayPositionRatio_250_500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:37 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06537922,81.25,1.242205);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__238 = new TH1D("S18_Y__238","",24,-60,60);
   S18_Y__238->SetBinContent(4,0.01369863);
   S18_Y__238->SetBinContent(5,0.02739726);
   S18_Y__238->SetBinContent(6,0.09246575);
   S18_Y__238->SetBinContent(7,0.1472603);
   S18_Y__238->SetBinContent(8,0.3116438);
   S18_Y__238->SetBinContent(9,0.4589041);
   S18_Y__238->SetBinContent(10,0.5958904);
   S18_Y__238->SetBinContent(11,0.7842466);
   S18_Y__238->SetBinContent(12,1);
   S18_Y__238->SetBinContent(13,0.989726);
   S18_Y__238->SetBinContent(14,0.890411);
   S18_Y__238->SetBinContent(15,0.7226027);
   S18_Y__238->SetBinContent(16,0.5273973);
   S18_Y__238->SetBinContent(17,0.3664384);
   S18_Y__238->SetBinContent(18,0.2054795);
   S18_Y__238->SetBinContent(19,0.130137);
   S18_Y__238->SetBinContent(20,0.04109589);
   S18_Y__238->SetBinContent(21,0.0239726);
   S18_Y__238->SetBinError(4,0.006849315);
   S18_Y__238->SetBinError(5,0.009686394);
   S18_Y__238->SetBinError(6,0.01779504);
   S18_Y__238->SetBinError(7,0.02245698);
   S18_Y__238->SetBinError(8,0.03266915);
   S18_Y__238->SetBinError(9,0.03964328);
   S18_Y__238->SetBinError(10,0.04517434);
   S18_Y__238->SetBinError(11,0.05182447);
   S18_Y__238->SetBinError(12,0.05852057);
   S18_Y__238->SetBinError(13,0.05821918);
   S18_Y__238->SetBinError(14,0.05522094);
   S18_Y__238->SetBinError(15,0.04974602);
   S18_Y__238->SetBinError(16,0.04249888);
   S18_Y__238->SetBinError(17,0.03542493);
   S18_Y__238->SetBinError(18,0.02652728);
   S18_Y__238->SetBinError(19,0.02111101);
   S18_Y__238->SetBinError(20,0.01186336);
   S18_Y__238->SetBinError(21,0.009060792);
   S18_Y__238->SetEntries(2140);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__238->SetLineColor(ci);
   S18_Y__238->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__238->SetMarkerColor(ci);
   S18_Y__238->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__238->GetXaxis()->SetRange(0,25);
   S18_Y__238->GetXaxis()->SetLabelFont(42);
   S18_Y__238->GetXaxis()->SetTitleOffset(1);
   S18_Y__238->GetXaxis()->SetTitleFont(42);
   S18_Y__238->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__238->GetYaxis()->CenterTitle(true);
   S18_Y__238->GetYaxis()->SetLabelFont(42);
   S18_Y__238->GetYaxis()->SetTitleFont(42);
   S18_Y__238->GetZaxis()->SetLabelFont(42);
   S18_Y__238->GetZaxis()->SetTitleOffset(1);
   S18_Y__238->GetZaxis()->SetTitleFont(42);
   S18_Y__238->Draw("AE");
   
   TH1D *Y__239 = new TH1D("Y__239","",24,-60,60);
   Y__239->SetBinContent(4,0.02833883);
   Y__239->SetBinContent(5,0.07454026);
   Y__239->SetBinContent(6,0.1392081);
   Y__239->SetBinContent(7,0.2346658);
   Y__239->SetBinContent(8,0.3731855);
   Y__239->SetBinContent(9,0.551054);
   Y__239->SetBinContent(10,0.7449777);
   Y__239->SetBinContent(11,0.9085471);
   Y__239->SetBinContent(12,1);
   Y__239->SetBinContent(13,0.9975139);
   Y__239->SetBinContent(14,0.907286);
   Y__239->SetBinContent(15,0.7442748);
   Y__239->SetBinContent(16,0.5514002);
   Y__239->SetBinContent(17,0.3728316);
   Y__239->SetBinContent(18,0.2344684);
   Y__239->SetBinContent(19,0.1386743);
   Y__239->SetBinContent(20,0.07438859);
   Y__239->SetBinContent(21,0.02838356);
   Y__239->SetBinError(4,0.0001659912);
   Y__239->SetBinError(5,0.000269209);
   Y__239->SetBinError(6,0.000367897);
   Y__239->SetBinError(7,0.0004776601);
   Y__239->SetBinError(8,0.0006023604);
   Y__239->SetBinError(9,0.0007319664);
   Y__239->SetBinError(10,0.0008510708);
   Y__239->SetBinError(11,0.0009398699);
   Y__239->SetBinError(12,0.0009860389);
   Y__239->SetBinError(13,0.0009848124);
   Y__239->SetBinError(14,0.0009392175);
   Y__239->SetBinError(15,0.0008506692);
   Y__239->SetBinError(16,0.0007321962);
   Y__239->SetBinError(17,0.0006020747);
   Y__239->SetBinError(18,0.0004774592);
   Y__239->SetBinError(19,0.000367191);
   Y__239->SetBinError(20,0.0002689349);
   Y__239->SetBinError(21,0.0001661221);
   Y__239->SetEntries(8334841);

   ci = TColor::GetColor("#ff0000");
   Y__239->SetLineColor(ci);
   Y__239->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__239->SetMarkerColor(ci);
   Y__239->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__239->GetXaxis()->CenterTitle(true);
   Y__239->GetXaxis()->SetLabelFont(42);
   Y__239->GetXaxis()->SetTitleSize(0.04);
   Y__239->GetXaxis()->SetTitleOffset(1.1);
   Y__239->GetXaxis()->SetTitleFont(42);
   Y__239->GetYaxis()->SetTitle("Decays");
   Y__239->GetYaxis()->CenterTitle(true);
   Y__239->GetYaxis()->SetNdivisions(4000510);
   Y__239->GetYaxis()->SetLabelFont(42);
   Y__239->GetYaxis()->SetTitleSize(0.04);
   Y__239->GetYaxis()->SetTitleOffset(1.1);
   Y__239->GetYaxis()->SetTitleFont(42);
   Y__239->GetZaxis()->SetLabelFont(42);
   Y__239->GetZaxis()->SetTitleOffset(1);
   Y__239->GetZaxis()->SetTitleFont(42);
   Y__239->Draw("AEsame");
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
   
   Double_t _fx3080[18] = {
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
   Double_t _fy3080[18] = {
   0.4833872,
   0.3675498,
   0.664227,
   0.6275319,
   0.835091,
   0.8327751,
   0.7998768,
   0.8631876,
   1,
   0.9921927,
   0.9814005,
   0.9708817,
   0.9564692,
   0.9828522,
   0.876363,
   0.9384363,
   0.5524489,
   0.8445947};
   Double_t _felx3080[18] = {
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
   Double_t _fely3080[18] = {
   0.2313544,
   0.1271959,
   0.1270455,
   0.09533235,
   0.08739044,
   0.07185941,
   0.06058706,
   0.05700636,
   0.05849536,
   0.05833871,
   0.06083319,
   0.06679445,
   0.07700114,
   0.09488035,
   0.1128356,
   0.1515812,
   0.1572414,
   0.3115036};
   Double_t _fehx3080[18] = {
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
   Double_t _fehy3080[18] = {
   0.3822556,
   0.1812686,
   0.1540261,
   0.1110451,
   0.0970519,
   0.0783448,
   0.06535979,
   0.06090151,
   0.06202144,
   0.0618741,
   0.0647262,
   0.07155585,
   0.08346461,
   0.1045138,
   0.1283912,
   0.1782937,
   0.209945,
   0.4549924};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3080,_fy3080,_felx3080,_fehx3080,_fely3080,_fehy3080);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3080 = new TH1F("Graph_Graph3080","",100,-65,65);
   Graph_Graph3080->SetMinimum(0);
   Graph_Graph3080->SetMaximum(1.25);
   Graph_Graph3080->SetDirectory(0);
   Graph_Graph3080->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3080->SetLineColor(ci);
   Graph_Graph3080->GetXaxis()->SetRange(1,100);
   Graph_Graph3080->GetXaxis()->CenterTitle(true);
   Graph_Graph3080->GetXaxis()->SetLabelFont(42);
   Graph_Graph3080->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3080->GetXaxis()->SetTitleFont(42);
   Graph_Graph3080->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3080->GetYaxis()->CenterTitle(true);
   Graph_Graph3080->GetYaxis()->SetLabelFont(42);
   Graph_Graph3080->GetYaxis()->SetTitleFont(42);
   Graph_Graph3080->GetZaxis()->SetLabelFont(42);
   Graph_Graph3080->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3080->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3080);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.111447,510,"S");
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
   entry=leg->AddEntry("S18_Y","Truth vertices","lpf");
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
