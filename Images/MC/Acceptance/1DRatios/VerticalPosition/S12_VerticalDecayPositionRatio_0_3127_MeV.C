void S12_VerticalDecayPositionRatio_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun  1 10:06:31 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06217712,81.25,1.181365);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__1 = new TH1D("S12_Y__1","",24,-60,60);
   S12_Y__1->SetBinContent(4,0.01796701);
   S12_Y__1->SetBinContent(5,0.05247436);
   S12_Y__1->SetBinContent(6,0.1041016);
   S12_Y__1->SetBinContent(7,0.1984396);
   S12_Y__1->SetBinContent(8,0.3347749);
   S12_Y__1->SetBinContent(9,0.5164512);
   S12_Y__1->SetBinContent(10,0.7297815);
   S12_Y__1->SetBinContent(11,0.8980829);
   S12_Y__1->SetBinContent(12,1);
   S12_Y__1->SetBinContent(13,0.9938029);
   S12_Y__1->SetBinContent(14,0.8752118);
   S12_Y__1->SetBinContent(15,0.7080695);
   S12_Y__1->SetBinContent(16,0.5140437);
   S12_Y__1->SetBinContent(17,0.3281765);
   S12_Y__1->SetBinContent(18,0.190593);
   S12_Y__1->SetBinContent(19,0.1061079);
   S12_Y__1->SetBinContent(20,0.05189478);
   S12_Y__1->SetBinContent(21,0.01622827);
   S12_Y__1->SetBinError(4,0.0008950004);
   S12_Y__1->SetBinError(5,0.001529533);
   S12_Y__1->SetBinError(6,0.00215434);
   S12_Y__1->SetBinError(7,0.002974401);
   S12_Y__1->SetBinError(8,0.00386333);
   S12_Y__1->SetBinError(9,0.004798439);
   S12_Y__1->SetBinError(10,0.00570403);
   S12_Y__1->SetBinError(11,0.006327667);
   S12_Y__1->SetBinError(12,0.006677061);
   S12_Y__1->SetBinError(13,0.00665634);
   S12_Y__1->SetBinError(14,0.006246575);
   S12_Y__1->SetBinError(15,0.005618538);
   S12_Y__1->SetBinError(16,0.004787242);
   S12_Y__1->SetBinError(17,0.003825068);
   S12_Y__1->SetBinError(18,0.002915002);
   S12_Y__1->SetBinError(19,0.002175);
   S12_Y__1->SetBinError(20,0.001521063);
   S12_Y__1->SetBinError(21,0.0008505922);
   S12_Y__1->SetEntries(171280);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__1->SetLineColor(ci);
   S12_Y__1->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__1->SetMarkerColor(ci);
   S12_Y__1->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__1->GetXaxis()->SetRange(0,25);
   S12_Y__1->GetXaxis()->SetLabelFont(42);
   S12_Y__1->GetXaxis()->SetTitleOffset(1);
   S12_Y__1->GetXaxis()->SetTitleFont(42);
   S12_Y__1->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__1->GetYaxis()->CenterTitle(true);
   S12_Y__1->GetYaxis()->SetLabelFont(42);
   S12_Y__1->GetYaxis()->SetTitleFont(42);
   S12_Y__1->GetZaxis()->SetLabelFont(42);
   S12_Y__1->GetZaxis()->SetTitleOffset(1);
   S12_Y__1->GetZaxis()->SetTitleFont(42);
   S12_Y__1->Draw("AE");
   
   TH1D *Y__2 = new TH1D("Y__2","",24,-60,60);
   Y__2->SetBinContent(4,0.02843465);
   Y__2->SetBinContent(5,0.0744411);
   Y__2->SetBinContent(6,0.1391044);
   Y__2->SetBinContent(7,0.2349926);
   Y__2->SetBinContent(8,0.3726627);
   Y__2->SetBinContent(9,0.5515899);
   Y__2->SetBinContent(10,0.7456989);
   Y__2->SetBinContent(11,0.9088094);
   Y__2->SetBinContent(12,1);
   Y__2->SetBinContent(13,0.9995768);
   Y__2->SetBinContent(14,0.9083714);
   Y__2->SetBinContent(15,0.7450901);
   Y__2->SetBinContent(16,0.5509909);
   Y__2->SetBinContent(17,0.3721882);
   Y__2->SetBinContent(18,0.2347232);
   Y__2->SetBinContent(19,0.1388101);
   Y__2->SetBinContent(20,0.07429343);
   Y__2->SetBinContent(21,0.02837539);
   Y__2->SetBinError(4,6.085107e-05);
   Y__2->SetBinError(5,9.845794e-05);
   Y__2->SetBinError(6,0.0001345906);
   Y__2->SetBinError(7,0.0001749329);
   Y__2->SetBinError(8,0.0002202938);
   Y__2->SetBinError(9,0.0002680109);
   Y__2->SetBinError(10,0.0003116205);
   Y__2->SetBinError(11,0.0003440177);
   Y__2->SetBinError(12,0.0003608646);
   Y__2->SetBinError(13,0.0003607883);
   Y__2->SetBinError(14,0.0003439347);
   Y__2->SetBinError(15,0.0003114933);
   Y__2->SetBinError(16,0.0002678653);
   Y__2->SetBinError(17,0.0002201535);
   Y__2->SetBinError(18,0.0001748326);
   Y__2->SetBinError(19,0.0001344482);
   Y__2->SetBinError(20,9.836023e-05);
   Y__2->SetBinError(21,6.078764e-05);
   Y__2->SetEntries(6.226346e+07);

   ci = TColor::GetColor("#ff0000");
   Y__2->SetLineColor(ci);
   Y__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__2->SetMarkerColor(ci);
   Y__2->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__2->GetXaxis()->CenterTitle(true);
   Y__2->GetXaxis()->SetLabelFont(42);
   Y__2->GetXaxis()->SetTitleSize(0.04);
   Y__2->GetXaxis()->SetTitleOffset(1.1);
   Y__2->GetXaxis()->SetTitleFont(42);
   Y__2->GetYaxis()->SetTitle("Decays");
   Y__2->GetYaxis()->CenterTitle(true);
   Y__2->GetYaxis()->SetNdivisions(4000510);
   Y__2->GetYaxis()->SetLabelFont(42);
   Y__2->GetYaxis()->SetTitleSize(0.04);
   Y__2->GetYaxis()->SetTitleOffset(1.1);
   Y__2->GetYaxis()->SetTitleFont(42);
   Y__2->GetZaxis()->SetLabelFont(42);
   Y__2->GetZaxis()->SetTitleOffset(1);
   Y__2->GetZaxis()->SetTitleFont(42);
   Y__2->Draw("AEsame");
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
   
   Double_t _fx3001[18] = {
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
   Double_t _fy3001[18] = {
   0.6318703,
   0.7049112,
   0.7483707,
   0.8444503,
   0.898332,
   0.9362956,
   0.9786544,
   0.9881972,
   1,
   0.9942237,
   0.9634955,
   0.950314,
   0.9329441,
   0.881749,
   0.8119903,
   0.7644106,
   0.6985111,
   0.5719133};
   Double_t _felx3001[18] = {
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
   Double_t _fely3001[18] = {
   0.03149161,
   0.0205651,
   0.01550302,
   0.01267255,
   0.01038019,
   0.008711049,
   0.007660086,
   0.006972572,
   0.006686756,
   0.00666877,
   0.006886286,
   0.007551128,
   0.008700127,
   0.01029023,
   0.01243312,
   0.01568526,
   0.02049164,
   0.02998759};
   Double_t _fehx3001[18] = {
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
   Double_t _fehy3001[18] = {
   0.03310177,
   0.02117404,
   0.01582756,
   0.01286417,
   0.01050083,
   0.008792475,
   0.00772028,
   0.007021945,
   0.006731619,
   0.006713653,
   0.006935681,
   0.00761137,
   0.008781642,
   0.01041103,
   0.01262498,
   0.01601048,
   0.02110183,
   0.03160288};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-65,65);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1.25);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetRange(1,100);
   Graph_Graph3001->GetXaxis()->CenterTitle(true);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3001->GetYaxis()->CenterTitle(true);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.057011,510,"S");
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
