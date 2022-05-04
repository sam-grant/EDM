void S12_VerticalDecayPositionRatio_250_500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:35 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.2230868,81.25,4.238649);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__181 = new TH1D("S12_Y__181","",24,-60,60);
   S12_Y__181->SetBinContent(4,0.04597701);
   S12_Y__181->SetBinContent(5,0.1724138);
   S12_Y__181->SetBinContent(6,0.2988506);
   S12_Y__181->SetBinContent(7,0.5862069);
   S12_Y__181->SetBinContent(8,0.7931034);
   S12_Y__181->SetBinContent(9,1.655172);
   S12_Y__181->SetBinContent(10,2.126437);
   S12_Y__181->SetBinContent(11,2.735632);
   S12_Y__181->SetBinContent(12,3.413793);
   S12_Y__181->SetBinContent(13,3.310345);
   S12_Y__181->SetBinContent(14,2.574713);
   S12_Y__181->SetBinContent(15,2.586207);
   S12_Y__181->SetBinContent(16,1.83908);
   S12_Y__181->SetBinContent(17,1.287356);
   S12_Y__181->SetBinContent(18,1);
   S12_Y__181->SetBinContent(19,0.4712644);
   S12_Y__181->SetBinContent(20,0.2528736);
   S12_Y__181->SetBinContent(21,0.06896552);
   S12_Y__181->SetBinError(4,0.02298851);
   S12_Y__181->SetBinError(5,0.04451705);
   S12_Y__181->SetBinError(6,0.05860942);
   S12_Y__181->SetBinError(7,0.08208538);
   S12_Y__181->SetBinError(8,0.09547844);
   S12_Y__181->SetBinError(9,0.137931);
   S12_Y__181->SetBinError(10,0.1563387);
   S12_Y__181->SetBinError(11,0.1773247);
   S12_Y__181->SetBinError(12,0.1980884);
   S12_Y__181->SetBinError(13,0.1950639);
   S12_Y__181->SetBinError(14,0.1720302);
   S12_Y__181->SetBinError(15,0.1724138);
   S12_Y__181->SetBinError(16,0.1453921);
   S12_Y__181->SetBinError(17,0.1216437);
   S12_Y__181->SetBinError(18,0.1072113);
   S12_Y__181->SetBinError(19,0.07359913);
   S12_Y__181->SetBinError(20,0.05391282);
   S12_Y__181->SetBinError(21,0.02815505);
   S12_Y__181->SetEntries(2194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__181->SetLineColor(ci);
   S12_Y__181->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__181->SetMarkerColor(ci);
   S12_Y__181->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__181->GetXaxis()->SetRange(0,25);
   S12_Y__181->GetXaxis()->SetLabelFont(42);
   S12_Y__181->GetXaxis()->SetTitleOffset(1);
   S12_Y__181->GetXaxis()->SetTitleFont(42);
   S12_Y__181->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__181->GetYaxis()->CenterTitle(true);
   S12_Y__181->GetYaxis()->SetLabelFont(42);
   S12_Y__181->GetYaxis()->SetTitleFont(42);
   S12_Y__181->GetZaxis()->SetLabelFont(42);
   S12_Y__181->GetZaxis()->SetTitleOffset(1);
   S12_Y__181->GetZaxis()->SetTitleFont(42);
   S12_Y__181->Draw("AE");
   
   TH1D *Y__182 = new TH1D("Y__182","",24,-60,60);
   Y__182->SetBinContent(4,0.1208642);
   Y__182->SetBinContent(5,0.3179117);
   Y__182->SetBinContent(6,0.5937177);
   Y__182->SetBinContent(7,1.000842);
   Y__182->SetBinContent(8,1.591624);
   Y__182->SetBinContent(9,2.350227);
   Y__182->SetBinContent(10,3.177305);
   Y__182->SetBinContent(11,3.874923);
   Y__182->SetBinContent(12,4.264967);
   Y__182->SetBinContent(13,4.254363);
   Y__182->SetBinContent(14,3.869544);
   Y__182->SetBinContent(15,3.174307);
   Y__182->SetBinContent(16,2.351703);
   Y__182->SetBinContent(17,1.590114);
   Y__182->SetBinContent(18,1);
   Y__182->SetBinContent(19,0.5914412);
   Y__182->SetBinContent(20,0.3172648);
   Y__182->SetBinContent(21,0.1210549);
   Y__182->SetBinError(4,0.0007079469);
   Y__182->SetBinError(5,0.001148167);
   Y__182->SetBinError(6,0.001569068);
   Y__182->SetBinError(7,0.002037204);
   Y__182->SetBinError(8,0.002569047);
   Y__182->SetBinError(9,0.003121812);
   Y__182->SetBinError(10,0.003629789);
   Y__182->SetBinError(11,0.004008514);
   Y__182->SetBinError(12,0.004205423);
   Y__182->SetBinError(13,0.004200192);
   Y__182->SetBinError(14,0.004005731);
   Y__182->SetBinError(15,0.003628076);
   Y__182->SetBinError(16,0.003122792);
   Y__182->SetBinError(17,0.002567829);
   Y__182->SetBinError(18,0.002036347);
   Y__182->SetBinError(19,0.001566057);
   Y__182->SetBinError(20,0.001146998);
   Y__182->SetBinError(21,0.0007085053);
   Y__182->SetEntries(8334841);

   ci = TColor::GetColor("#ff0000");
   Y__182->SetLineColor(ci);
   Y__182->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__182->SetMarkerColor(ci);
   Y__182->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__182->GetXaxis()->CenterTitle(true);
   Y__182->GetXaxis()->SetLabelFont(42);
   Y__182->GetXaxis()->SetTitleSize(0.04);
   Y__182->GetXaxis()->SetTitleOffset(1.1);
   Y__182->GetXaxis()->SetTitleFont(42);
   Y__182->GetYaxis()->SetTitle("Decays");
   Y__182->GetYaxis()->CenterTitle(true);
   Y__182->GetYaxis()->SetNdivisions(4000510);
   Y__182->GetYaxis()->SetLabelFont(42);
   Y__182->GetYaxis()->SetTitleSize(0.04);
   Y__182->GetYaxis()->SetTitleOffset(1.1);
   Y__182->GetYaxis()->SetTitleFont(42);
   Y__182->GetZaxis()->SetLabelFont(42);
   Y__182->GetZaxis()->SetTitleOffset(1);
   Y__182->GetZaxis()->SetTitleFont(42);
   Y__182->Draw("AEsame");
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
   
   Double_t _fx3061[18] = {
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
   Double_t _fy3061[18] = {
   0.3804023,
   0.5423323,
   0.5033546,
   0.5857139,
   0.4982984,
   0.7042606,
   0.669258,
   0.7059837,
   0.8004267,
   0.7781058,
   0.6653787,
   0.8147312,
   0.7820206,
   0.8095999,
   1,
   0.7968068,
   0.7970425,
   0.5697044};
   Double_t _felx3061[18] = {
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
   Double_t _fely3061[18] = {
   0.1820647,
   0.1384658,
   0.09808559,
   0.08175498,
   0.05984765,
   0.05862759,
   0.04916625,
   0.04573578,
   0.04642601,
   0.04583013,
   0.04442961,
   0.054283,
   0.06176818,
   0.07639671,
   0.1070239,
   0.123948,
   0.1686521,
   0.2259961};
   Double_t _fehx3061[18] = {
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
   Double_t _fehy3061[18] = {
   0.3008166,
   0.1793089,
   0.1193534,
   0.09404871,
   0.06750666,
   0.06372389,
   0.05291806,
   0.04879923,
   0.04920022,
   0.04861244,
   0.04750025,
   0.05802611,
   0.06685094,
   0.08396997,
   0.1191406,
   0.144911,
   0.2087676,
   0.3403252};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3061,_fy3061,_felx3061,_fehx3061,_fely3061,_fehy3061);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3061 = new TH1F("Graph_Graph3061","",100,-65,65);
   Graph_Graph3061->SetMinimum(0);
   Graph_Graph3061->SetMaximum(1.25);
   Graph_Graph3061->SetDirectory(0);
   Graph_Graph3061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3061->SetLineColor(ci);
   Graph_Graph3061->GetXaxis()->SetRange(1,100);
   Graph_Graph3061->GetXaxis()->CenterTitle(true);
   Graph_Graph3061->GetXaxis()->SetLabelFont(42);
   Graph_Graph3061->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3061->GetXaxis()->SetTitleFont(42);
   Graph_Graph3061->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3061->GetYaxis()->CenterTitle(true);
   Graph_Graph3061->GetYaxis()->SetLabelFont(42);
   Graph_Graph3061->GetYaxis()->SetTitleFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelFont(42);
   Graph_Graph3061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3061);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.792476,510,"S");
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
