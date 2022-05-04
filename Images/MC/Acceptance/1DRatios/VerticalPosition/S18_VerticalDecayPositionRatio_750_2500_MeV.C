void S18_VerticalDecayPositionRatio_750_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:34 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06220586,81.25,1.181911);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_Y__175 = new TH1D("S18_Y__175","",24,-60,60);
   S18_Y__175->SetBinContent(4,0.01790634);
   S18_Y__175->SetBinContent(5,0.05545353);
   S18_Y__175->SetBinContent(6,0.1117743);
   S18_Y__175->SetBinContent(7,0.1937047);
   S18_Y__175->SetBinContent(8,0.3282318);
   S18_Y__175->SetBinContent(9,0.5080094);
   S18_Y__175->SetBinContent(10,0.7120702);
   S18_Y__175->SetBinContent(11,0.8823589);
   S18_Y__175->SetBinContent(12,0.9736762);
   S18_Y__175->SetBinContent(13,1);
   S18_Y__175->SetBinContent(14,0.8867463);
   S18_Y__175->SetBinContent(15,0.701255);
   S18_Y__175->SetBinContent(16,0.5074482);
   S18_Y__175->SetBinContent(17,0.322212);
   S18_Y__175->SetBinContent(18,0.187889);
   S18_Y__175->SetBinContent(19,0.1090705);
   S18_Y__175->SetBinContent(20,0.04887256);
   S18_Y__175->SetBinContent(21,0.01709009);
   S18_Y__175->SetBinError(4,0.0009557695);
   S18_Y__175->SetBinError(5,0.001681955);
   S18_Y__175->SetBinError(6,0.002387926);
   S18_Y__175->SetBinError(7,0.003143547);
   S18_Y__175->SetBinError(8,0.004092043);
   S18_Y__175->SetBinError(9,0.005090796);
   S18_Y__175->SetBinError(10,0.006027139);
   S18_Y__175->SetBinError(11,0.006709226);
   S18_Y__175->SetBinError(12,0.007047857);
   S18_Y__175->SetBinError(13,0.007142493);
   S18_Y__175->SetBinError(14,0.006725886);
   S18_Y__175->SetBinError(15,0.005981193);
   S18_Y__175->SetBinError(16,0.005087983);
   S18_Y__175->SetBinError(17,0.004054345);
   S18_Y__175->SetBinError(18,0.003095997);
   S18_Y__175->SetBinError(19,0.002358867);
   S18_Y__175->SetBinError(20,0.001579001);
   S18_Y__175->SetBinError(21,0.0009337315);
   S18_Y__175->SetEntries(148265);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_Y__175->SetLineColor(ci);
   S18_Y__175->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_Y__175->SetMarkerColor(ci);
   S18_Y__175->GetXaxis()->SetTitle("Decay y-position [mm]");
   S18_Y__175->GetXaxis()->SetRange(0,25);
   S18_Y__175->GetXaxis()->SetLabelFont(42);
   S18_Y__175->GetXaxis()->SetTitleOffset(1);
   S18_Y__175->GetXaxis()->SetTitleFont(42);
   S18_Y__175->GetYaxis()->SetTitle("Normalised entries");
   S18_Y__175->GetYaxis()->CenterTitle(true);
   S18_Y__175->GetYaxis()->SetLabelFont(42);
   S18_Y__175->GetYaxis()->SetTitleFont(42);
   S18_Y__175->GetZaxis()->SetLabelFont(42);
   S18_Y__175->GetZaxis()->SetTitleOffset(1);
   S18_Y__175->GetZaxis()->SetTitleFont(42);
   S18_Y__175->Draw("AE");
   
   TH1D *Y__176 = new TH1D("Y__176","",24,-60,60);
   Y__176->SetBinContent(4,0.02849541);
   Y__176->SetBinContent(5,0.07459676);
   Y__176->SetBinContent(6,0.1392607);
   Y__176->SetBinContent(7,0.2350582);
   Y__176->SetBinContent(8,0.3730301);
   Y__176->SetBinContent(9,0.5522169);
   Y__176->SetBinContent(10,0.7465375);
   Y__176->SetBinContent(11,0.9094648);
   Y__176->SetBinContent(12,1.001251);
   Y__176->SetBinContent(13,1);
   Y__176->SetBinContent(14,0.909172);
   Y__176->SetBinContent(15,0.7460401);
   Y__176->SetBinContent(16,0.5514901);
   Y__176->SetBinContent(17,0.3723857);
   Y__176->SetBinContent(18,0.2352631);
   Y__176->SetBinContent(19,0.139057);
   Y__176->SetBinContent(20,0.07437709);
   Y__176->SetBinContent(21,0.02853661);
   Y__176->SetBinError(4,8.121549e-05);
   Y__176->SetBinError(5,0.0001314048);
   Y__176->SetBinError(6,0.0001795419);
   Y__176->SetBinError(7,0.0002332594);
   Y__176->SetBinError(8,0.0002938484);
   Y__176->SetBinError(9,0.0003575249);
   Y__176->SetBinError(10,0.0004156973);
   Y__176->SetBinError(11,0.0004588221);
   Y__176->SetBinError(12,0.0004814186);
   Y__176->SetBinError(13,0.0004811178);
   Y__176->SetBinError(14,0.0004587483);
   Y__176->SetBinError(15,0.0004155588);
   Y__176->SetBinError(16,0.0003572895);
   Y__176->SetBinError(17,0.0002935945);
   Y__176->SetBinError(18,0.000233361);
   Y__176->SetBinError(19,0.0001794105);
   Y__176->SetBinError(20,0.0001312112);
   Y__176->SetBinError(21,8.127418e-05);
   Y__176->SetEntries(3.506322e+07);

   ci = TColor::GetColor("#ff0000");
   Y__176->SetLineColor(ci);
   Y__176->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__176->SetMarkerColor(ci);
   Y__176->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__176->GetXaxis()->CenterTitle(true);
   Y__176->GetXaxis()->SetLabelFont(42);
   Y__176->GetXaxis()->SetTitleSize(0.04);
   Y__176->GetXaxis()->SetTitleOffset(1.1);
   Y__176->GetXaxis()->SetTitleFont(42);
   Y__176->GetYaxis()->SetTitle("Decays");
   Y__176->GetYaxis()->CenterTitle(true);
   Y__176->GetYaxis()->SetNdivisions(4000510);
   Y__176->GetYaxis()->SetLabelFont(42);
   Y__176->GetYaxis()->SetTitleSize(0.04);
   Y__176->GetYaxis()->SetTitleOffset(1.1);
   Y__176->GetYaxis()->SetTitleFont(42);
   Y__176->GetZaxis()->SetLabelFont(42);
   Y__176->GetZaxis()->SetTitleOffset(1);
   Y__176->GetZaxis()->SetTitleFont(42);
   Y__176->Draw("AEsame");
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
   
   Double_t _fx3059[18] = {
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
   Double_t _fy3059[18] = {
   0.6283936,
   0.7433771,
   0.8026262,
   0.8240713,
   0.8799071,
   0.9199454,
   0.9538305,
   0.9701958,
   0.9724595,
   1,
   0.9753338,
   0.9399696,
   0.9201403,
   0.8652643,
   0.7986336,
   0.7843581,
   0.6570916,
   0.598883};
   Double_t _felx3059[18] = {
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
   Double_t _fely3059[18] = {
   0.03357283,
   0.02258178,
   0.01717703,
   0.01339787,
   0.01099133,
   0.009237897,
   0.008090812,
   0.007393262,
   0.0070545,
   0.007158617,
   0.007414093,
   0.008034234,
   0.009244966,
   0.01090855,
   0.01318294,
   0.01699213,
   0.02125755,
   0.03274843};
   Double_t _fehx3059[18] = {
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
   Double_t _fehy3059[18] = {
   0.03541656,
   0.02327848,
   0.01754866,
   0.01361749,
   0.0111295,
   0.009331135,
   0.008159737,
   0.007449819,
   0.007105864,
   0.007210049,
   0.00747067,
   0.008103203,
   0.009338327,
   0.01104696,
   0.01340238,
   0.01736432,
   0.02195671,
   0.03459037};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3059,_fy3059,_felx3059,_fehx3059,_fely3059,_fehy3059);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3059 = new TH1F("Graph_Graph3059","",100,-65,65);
   Graph_Graph3059->SetMinimum(0);
   Graph_Graph3059->SetMaximum(1.25);
   Graph_Graph3059->SetDirectory(0);
   Graph_Graph3059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3059->SetLineColor(ci);
   Graph_Graph3059->GetXaxis()->SetRange(1,100);
   Graph_Graph3059->GetXaxis()->CenterTitle(true);
   Graph_Graph3059->GetXaxis()->SetLabelFont(42);
   Graph_Graph3059->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3059->GetXaxis()->SetTitleFont(42);
   Graph_Graph3059->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3059->GetYaxis()->CenterTitle(true);
   Graph_Graph3059->GetYaxis()->SetLabelFont(42);
   Graph_Graph3059->GetYaxis()->SetTitleFont(42);
   Graph_Graph3059->GetZaxis()->SetLabelFont(42);
   Graph_Graph3059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3059->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3059);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.0575,510,"S");
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
