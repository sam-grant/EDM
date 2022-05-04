void S12_VerticalDecayPositionRatio_1000_1250_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:47 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06269123,81.25,1.191133);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__694 = new TH1D("S12_Y__694","",24,-60,60);
   S12_Y__694->SetBinContent(4,0.020027);
   S12_Y__694->SetBinContent(5,0.05423042);
   S12_Y__694->SetBinContent(6,0.1005851);
   S12_Y__694->SetBinContent(7,0.1973447);
   S12_Y__694->SetBinContent(8,0.3249325);
   S12_Y__694->SetBinContent(9,0.509676);
   S12_Y__694->SetBinContent(10,0.7220972);
   S12_Y__694->SetBinContent(11,0.8841134);
   S12_Y__694->SetBinContent(12,1);
   S12_Y__694->SetBinContent(13,0.9680468);
   S12_Y__694->SetBinContent(14,0.8393339);
   S12_Y__694->SetBinContent(15,0.6854185);
   S12_Y__694->SetBinContent(16,0.4963996);
   S12_Y__694->SetBinContent(17,0.3172817);
   S12_Y__694->SetBinContent(18,0.180243);
   S12_Y__694->SetBinContent(19,0.1053105);
   S12_Y__694->SetBinContent(20,0.05175518);
   S12_Y__694->SetBinContent(21,0.01552655);
   S12_Y__694->SetBinError(4,0.002122858);
   S12_Y__694->SetBinError(5,0.003493289);
   S12_Y__694->SetBinError(6,0.00475751);
   S12_Y__694->SetBinError(7,0.006663858);
   S12_Y__694->SetBinError(8,0.008550855);
   S12_Y__694->SetBinError(9,0.01070927);
   S12_Y__694->SetBinError(10,0.01274708);
   S12_Y__694->SetBinError(11,0.0141048);
   S12_Y__694->SetBinError(12,0.01500075);
   S12_Y__694->SetBinError(13,0.01475914);
   S12_Y__694->SetBinError(14,0.01374296);
   S12_Y__694->SetBinError(15,0.01241912);
   S12_Y__694->SetBinError(16,0.01056887);
   S12_Y__694->SetBinError(17,0.008449587);
   S12_Y__694->SetBinError(18,0.006368574);
   S12_Y__694->SetBinError(19,0.004867981);
   S12_Y__694->SetBinError(20,0.003412635);
   S12_Y__694->SetBinError(21,0.001869177);
   S12_Y__694->SetEntries(33207);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__694->SetLineColor(ci);
   S12_Y__694->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__694->SetMarkerColor(ci);
   S12_Y__694->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__694->GetXaxis()->SetRange(0,25);
   S12_Y__694->GetXaxis()->SetLabelFont(42);
   S12_Y__694->GetXaxis()->SetTitleOffset(1);
   S12_Y__694->GetXaxis()->SetTitleFont(42);
   S12_Y__694->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__694->GetYaxis()->CenterTitle(true);
   S12_Y__694->GetYaxis()->SetLabelFont(42);
   S12_Y__694->GetYaxis()->SetTitleFont(42);
   S12_Y__694->GetZaxis()->SetLabelFont(42);
   S12_Y__694->GetZaxis()->SetTitleOffset(1);
   S12_Y__694->GetZaxis()->SetTitleFont(42);
   S12_Y__694->Draw("AE");
   
   TH1D *Y__695 = new TH1D("Y__695","",24,-60,60);
   Y__695->SetBinContent(4,0.02836125);
   Y__695->SetBinContent(5,0.07438896);
   Y__695->SetBinContent(6,0.1386256);
   Y__695->SetBinContent(7,0.2348992);
   Y__695->SetBinContent(8,0.3728331);
   Y__695->SetBinContent(9,0.5507975);
   Y__695->SetBinContent(10,0.7447913);
   Y__695->SetBinContent(11,0.9082637);
   Y__695->SetBinContent(12,1);
   Y__695->SetBinContent(13,0.9984734);
   Y__695->SetBinContent(14,0.9052311);
   Y__695->SetBinContent(15,0.7451966);
   Y__695->SetBinContent(16,0.5507234);
   Y__695->SetBinContent(17,0.3720953);
   Y__695->SetBinContent(18,0.234699);
   Y__695->SetBinContent(19,0.1382106);
   Y__695->SetBinContent(20,0.07422271);
   Y__695->SetBinContent(21,0.02851051);
   Y__695->SetBinError(4,0.0001855183);
   Y__695->SetBinError(5,0.0003004542);
   Y__695->SetBinError(6,0.0004101528);
   Y__695->SetBinError(7,0.000533906);
   Y__695->SetBinError(8,0.0006726378);
   Y__695->SetBinError(9,0.0008175606);
   Y__695->SetBinError(10,0.0009506952);
   Y__695->SetBinError(11,0.001049857);
   Y__695->SetBinError(12,0.0011016);
   Y__695->SetBinError(13,0.001100759);
   Y__695->SetBinError(14,0.001048102);
   Y__695->SetBinError(15,0.0009509538);
   Y__695->SetBinError(16,0.0008175057);
   Y__695->SetBinError(17,0.0006719719);
   Y__695->SetBinError(18,0.0005336784);
   Y__695->SetBinError(19,0.0004095384);
   Y__695->SetBinError(20,0.0003001183);
   Y__695->SetBinError(21,0.0001860058);
   Y__695->SetEntries(6675047);

   ci = TColor::GetColor("#ff0000");
   Y__695->SetLineColor(ci);
   Y__695->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__695->SetMarkerColor(ci);
   Y__695->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__695->GetXaxis()->CenterTitle(true);
   Y__695->GetXaxis()->SetLabelFont(42);
   Y__695->GetXaxis()->SetTitleSize(0.04);
   Y__695->GetXaxis()->SetTitleOffset(1.1);
   Y__695->GetXaxis()->SetTitleFont(42);
   Y__695->GetYaxis()->SetTitle("Decays");
   Y__695->GetYaxis()->CenterTitle(true);
   Y__695->GetYaxis()->SetNdivisions(4000510);
   Y__695->GetYaxis()->SetLabelFont(42);
   Y__695->GetYaxis()->SetTitleSize(0.04);
   Y__695->GetYaxis()->SetTitleOffset(1.1);
   Y__695->GetYaxis()->SetTitleFont(42);
   Y__695->GetZaxis()->SetLabelFont(42);
   Y__695->GetZaxis()->SetTitleOffset(1);
   Y__695->GetZaxis()->SetTitleFont(42);
   Y__695->Draw("AEsame");
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
   
   Double_t _fx3232[18] = {
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
   Double_t _fy3232[18] = {
   0.7061397,
   0.7290117,
   0.725588,
   0.8401251,
   0.8715226,
   0.9253419,
   0.9695297,
   0.9734105,
   1,
   0.9695269,
   0.927204,
   0.9197822,
   0.9013592,
   0.8526895,
   0.7679753,
   0.7619572,
   0.6972957,
   0.5445905};
   Double_t _felx3232[18] = {
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
   Double_t _fely3232[18] = {
   0.07485036,
   0.04701898,
   0.03437322,
   0.02842772,
   0.02298595,
   0.01949021,
   0.01715875,
   0.01556945,
   0.01504057,
   0.01481972,
   0.01521894,
   0.01670592,
   0.019236,
   0.02275755,
   0.02718547,
   0.03528103,
   0.04603084,
   0.06549635};
   Double_t _fehx3232[18] = {
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
   Double_t _fehy3232[18] = {
   0.08324201,
   0.05015477,
   0.03604178,
   0.02940646,
   0.02360041,
   0.01990516,
   0.01746518,
   0.01582051,
   0.01526853,
   0.01504801,
   0.01547083,
   0.01701217,
   0.01965101,
   0.02337326,
   0.02816541,
   0.03695406,
   0.04917542,
   0.07389347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3232,_fy3232,_felx3232,_fehx3232,_fely3232,_fehy3232);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3232 = new TH1F("Graph_Graph3232","",100,-65,65);
   Graph_Graph3232->SetMinimum(0);
   Graph_Graph3232->SetMaximum(1.25);
   Graph_Graph3232->SetDirectory(0);
   Graph_Graph3232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3232->SetLineColor(ci);
   Graph_Graph3232->GetXaxis()->SetRange(1,100);
   Graph_Graph3232->GetXaxis()->CenterTitle(true);
   Graph_Graph3232->GetXaxis()->SetLabelFont(42);
   Graph_Graph3232->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3232->GetXaxis()->SetTitleFont(42);
   Graph_Graph3232->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3232->GetYaxis()->CenterTitle(true);
   Graph_Graph3232->GetYaxis()->SetLabelFont(42);
   Graph_Graph3232->GetYaxis()->SetTitleFont(42);
   Graph_Graph3232->GetZaxis()->SetLabelFont(42);
   Graph_Graph3232->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3232->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3232);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.065751,510,"S");
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
