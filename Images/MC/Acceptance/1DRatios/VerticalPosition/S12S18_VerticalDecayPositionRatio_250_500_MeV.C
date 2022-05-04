void S12S18_VerticalDecayPositionRatio_250_500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:38 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.2576762,81.25,4.895848);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__295 = new TH1D("S12S18_Y__295","",24,-60,60);
   S12S18_Y__295->SetBinContent(4,0.05442177);
   S12S18_Y__295->SetBinContent(5,0.1564626);
   S12S18_Y__295->SetBinContent(6,0.3605442);
   S12S18_Y__295->SetBinContent(7,0.6394558);
   S12S18_Y__295->SetBinContent(8,1.088435);
   S12S18_Y__295->SetBinContent(9,1.891156);
   S12S18_Y__295->SetBinContent(10,2.442177);
   S12S18_Y__295->SetBinContent(11,3.176871);
   S12S18_Y__295->SetBinContent(12,4.006803);
   S12S18_Y__295->SetBinContent(13,3.92517);
   S12S18_Y__295->SetBinContent(14,3.292517);
   S12S18_Y__295->SetBinContent(15,2.965986);
   S12S18_Y__295->SetBinContent(16,2.136054);
   S12S18_Y__295->SetBinContent(17,1.489796);
   S12S18_Y__295->SetBinContent(18,1);
   S12S18_Y__295->SetBinContent(19,0.537415);
   S12S18_Y__295->SetBinContent(20,0.2312925);
   S12S18_Y__295->SetBinContent(21,0.08843537);
   S12S18_Y__295->SetBinError(4,0.019241);
   S12S18_Y__295->SetBinError(5,0.0326247);
   S12S18_Y__295->SetBinError(6,0.04952456);
   S12S18_Y__295->SetBinError(7,0.06595483);
   S12S18_Y__295->SetBinError(8,0.08604837);
   S12S18_Y__295->SetBinError(9,0.113424);
   S12S18_Y__295->SetBinError(10,0.1288932);
   S12S18_Y__295->SetBinError(11,0.147008);
   S12S18_Y__295->SetBinError(12,0.1650974);
   S12S18_Y__295->SetBinError(13,0.163407);
   S12S18_Y__295->SetBinError(14,0.1496599);
   S12S18_Y__295->SetBinError(15,0.142045);
   S12S18_Y__295->SetBinError(16,0.1205445);
   S12S18_Y__295->SetBinError(17,0.1006711);
   S12S18_Y__295->SetBinError(18,0.08247861);
   S12S18_Y__295->SetBinError(19,0.06046391);
   S12S18_Y__295->SetBinError(20,0.03966634);
   S12S18_Y__295->SetBinError(21,0.02452756);
   S12S18_Y__295->SetEntries(4334);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__295->SetLineColor(ci);
   S12S18_Y__295->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__295->SetMarkerColor(ci);
   S12S18_Y__295->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__295->GetXaxis()->SetRange(0,25);
   S12S18_Y__295->GetXaxis()->SetLabelFont(42);
   S12S18_Y__295->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__295->GetXaxis()->SetTitleFont(42);
   S12S18_Y__295->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__295->GetYaxis()->CenterTitle(true);
   S12S18_Y__295->GetYaxis()->SetLabelFont(42);
   S12S18_Y__295->GetYaxis()->SetTitleFont(42);
   S12S18_Y__295->GetZaxis()->SetLabelFont(42);
   S12S18_Y__295->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__295->GetZaxis()->SetTitleFont(42);
   S12S18_Y__295->Draw("AE");
   
   TH1D *Y__296 = new TH1D("Y__296","",24,-60,60);
   Y__296->SetBinContent(4,0.1208642);
   Y__296->SetBinContent(5,0.3179117);
   Y__296->SetBinContent(6,0.5937177);
   Y__296->SetBinContent(7,1.000842);
   Y__296->SetBinContent(8,1.591624);
   Y__296->SetBinContent(9,2.350227);
   Y__296->SetBinContent(10,3.177305);
   Y__296->SetBinContent(11,3.874923);
   Y__296->SetBinContent(12,4.264967);
   Y__296->SetBinContent(13,4.254363);
   Y__296->SetBinContent(14,3.869544);
   Y__296->SetBinContent(15,3.174307);
   Y__296->SetBinContent(16,2.351703);
   Y__296->SetBinContent(17,1.590114);
   Y__296->SetBinContent(18,1);
   Y__296->SetBinContent(19,0.5914412);
   Y__296->SetBinContent(20,0.3172648);
   Y__296->SetBinContent(21,0.1210549);
   Y__296->SetBinError(4,0.0007079469);
   Y__296->SetBinError(5,0.001148167);
   Y__296->SetBinError(6,0.001569068);
   Y__296->SetBinError(7,0.002037204);
   Y__296->SetBinError(8,0.002569047);
   Y__296->SetBinError(9,0.003121812);
   Y__296->SetBinError(10,0.003629789);
   Y__296->SetBinError(11,0.004008514);
   Y__296->SetBinError(12,0.004205423);
   Y__296->SetBinError(13,0.004200192);
   Y__296->SetBinError(14,0.004005731);
   Y__296->SetBinError(15,0.003628076);
   Y__296->SetBinError(16,0.003122792);
   Y__296->SetBinError(17,0.002567829);
   Y__296->SetBinError(18,0.002036347);
   Y__296->SetBinError(19,0.001566057);
   Y__296->SetBinError(20,0.001146998);
   Y__296->SetBinError(21,0.0007085053);
   Y__296->SetEntries(8334841);

   ci = TColor::GetColor("#ff0000");
   Y__296->SetLineColor(ci);
   Y__296->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__296->SetMarkerColor(ci);
   Y__296->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__296->GetXaxis()->CenterTitle(true);
   Y__296->GetXaxis()->SetLabelFont(42);
   Y__296->GetXaxis()->SetTitleSize(0.04);
   Y__296->GetXaxis()->SetTitleOffset(1.1);
   Y__296->GetXaxis()->SetTitleFont(42);
   Y__296->GetYaxis()->SetTitle("Decays");
   Y__296->GetYaxis()->CenterTitle(true);
   Y__296->GetYaxis()->SetNdivisions(4000510);
   Y__296->GetYaxis()->SetLabelFont(42);
   Y__296->GetYaxis()->SetTitleSize(0.04);
   Y__296->GetYaxis()->SetTitleOffset(1.1);
   Y__296->GetYaxis()->SetTitleFont(42);
   Y__296->GetZaxis()->SetLabelFont(42);
   Y__296->GetZaxis()->SetTitleOffset(1);
   Y__296->GetZaxis()->SetTitleFont(42);
   Y__296->Draw("AEsame");
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
   
   Double_t _fx3099[18] = {
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
   Double_t _fy3099[18] = {
   0.4502721,
   0.4921573,
   0.6072654,
   0.638918,
   0.6838522,
   0.8046697,
   0.7686315,
   0.819854,
   0.9394687,
   0.9226222,
   0.8508797,
   0.9343729,
   0.908301,
   0.9369112,
   1,
   0.9086533,
   0.7290203,
   0.7305393};
   Double_t _felx3099[18] = {
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
   Double_t _fely3099[18] = {
   0.1558349,
   0.1018852,
   0.08316538,
   0.06579462,
   0.05401793,
   0.04824365,
   0.04055741,
   0.0379342,
   0.03871022,
   0.03840893,
   0.03867301,
   0.04474391,
   0.05124525,
   0.06328024,
   0.08240968,
   0.1020426,
   0.1244348,
   0.2000216};
   Double_t _fehx3099[18] = {
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
   Double_t _fehy3099[18] = {
   0.2220939,
   0.1255288,
   0.09541742,
   0.07294605,
   0.0584633,
   0.05122665,
   0.04275612,
   0.0397314,
   0.04033912,
   0.04004221,
   0.04047201,
   0.04693967,
   0.05422143,
   0.0677059,
   0.08949823,
   0.1142007,
   0.1477326,
   0.2640617};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3099,_fy3099,_felx3099,_fehx3099,_fely3099,_fehy3099);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3099 = new TH1F("Graph_Graph3099","",100,-65,65);
   Graph_Graph3099->SetMinimum(0);
   Graph_Graph3099->SetMaximum(1.25);
   Graph_Graph3099->SetDirectory(0);
   Graph_Graph3099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3099->SetLineColor(ci);
   Graph_Graph3099->GetXaxis()->SetRange(1,100);
   Graph_Graph3099->GetXaxis()->CenterTitle(true);
   Graph_Graph3099->GetXaxis()->SetLabelFont(42);
   Graph_Graph3099->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3099->GetXaxis()->SetTitleFont(42);
   Graph_Graph3099->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3099->GetYaxis()->CenterTitle(true);
   Graph_Graph3099->GetYaxis()->SetLabelFont(42);
   Graph_Graph3099->GetYaxis()->SetTitleFont(42);
   Graph_Graph3099->GetZaxis()->SetLabelFont(42);
   Graph_Graph3099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3099->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3099);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,4.380495,510,"S");
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
