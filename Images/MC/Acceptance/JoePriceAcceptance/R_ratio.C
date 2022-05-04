void R_ratio()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 27 11:18:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06206956,81.25,1.179322);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_R__3 = new TH1D("S12S18_R__3","",24,-60,60);
   S12S18_R__3->SetBinContent(4,0.03880633);
   S12S18_R__3->SetBinContent(5,0.08477467);
   S12S18_R__3->SetBinContent(6,0.1413155);
   S12S18_R__3->SetBinContent(7,0.224799);
   S12S18_R__3->SetBinContent(8,0.3167844);
   S12S18_R__3->SetBinContent(9,0.4241413);
   S12S18_R__3->SetBinContent(10,0.5180999);
   S12S18_R__3->SetBinContent(11,0.6218027);
   S12S18_R__3->SetBinContent(12,0.6972473);
   S12S18_R__3->SetBinContent(13,0.7663094);
   S12S18_R__3->SetBinContent(14,0.8408283);
   S12S18_R__3->SetBinContent(15,0.9599513);
   S12S18_R__3->SetBinContent(16,1);
   S12S18_R__3->SetBinContent(17,0.7585627);
   S12S18_R__3->SetBinContent(18,0.4487211);
   S12S18_R__3->SetBinContent(19,0.2488916);
   S12S18_R__3->SetBinContent(20,0.1316687);
   S12S18_R__3->SetBinContent(21,0.05069428);
   S12S18_R__3->SetBinError(4,0.0009722876);
   S12S18_R__3->SetBinError(5,0.001437065);
   S12S18_R__3->SetBinError(6,0.001855403);
   S12S18_R__3->SetBinError(7,0.002340133);
   S12S18_R__3->SetBinError(8,0.002777956);
   S12S18_R__3->SetBinError(9,0.003214391);
   S12S18_R__3->SetBinError(10,0.003552632);
   S12S18_R__3->SetBinError(11,0.003891972);
   S12S18_R__3->SetBinError(12,0.004121325);
   S12S18_R__3->SetBinError(13,0.004320614);
   S12S18_R__3->SetBinError(14,0.004525818);
   S12S18_R__3->SetBinError(15,0.004835796);
   S12S18_R__3->SetBinError(16,0.004935639);
   S12S18_R__3->SetBinError(17,0.00429872);
   S12S18_R__3->SetBinError(18,0.003306219);
   S12S18_R__3->SetBinError(19,0.002462343);
   S12S18_R__3->SetBinError(20,0.001790955);
   S12S18_R__3->SetBinError(21,0.001111278);
   S12S18_R__3->SetEntries(339623);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_R__3->SetLineColor(ci);
   S12S18_R__3->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_R__3->SetMarkerColor(ci);
   S12S18_R__3->GetXaxis()->SetTitle("Decay radial position [mm]");
   S12S18_R__3->GetXaxis()->SetRange(0,25);
   S12S18_R__3->GetXaxis()->SetLabelFont(42);
   S12S18_R__3->GetXaxis()->SetTitleOffset(1);
   S12S18_R__3->GetXaxis()->SetTitleFont(42);
   S12S18_R__3->GetYaxis()->SetTitle("Normalised entries");
   S12S18_R__3->GetYaxis()->CenterTitle(true);
   S12S18_R__3->GetYaxis()->SetLabelFont(42);
   S12S18_R__3->GetYaxis()->SetTitleFont(42);
   S12S18_R__3->GetZaxis()->SetLabelFont(42);
   S12S18_R__3->GetZaxis()->SetTitleOffset(1);
   S12S18_R__3->GetZaxis()->SetTitleFont(42);
   S12S18_R__3->Draw("AE");
   
   TH1D *R__4 = new TH1D("R__4","",24,-60,60);
   R__4->SetBinContent(4,0.0400296);
   R__4->SetBinContent(5,0.08258405);
   R__4->SetBinContent(6,0.1339885);
   R__4->SetBinContent(7,0.2006211);
   R__4->SetBinContent(8,0.2822742);
   R__4->SetBinContent(9,0.3744154);
   R__4->SetBinContent(10,0.4696296);
   R__4->SetBinContent(11,0.5596361);
   R__4->SetBinContent(12,0.6420476);
   R__4->SetBinContent(13,0.7177057);
   R__4->SetBinContent(14,0.8079146);
   R__4->SetBinContent(15,0.9447349);
   R__4->SetBinContent(16,1);
   R__4->SetBinContent(17,0.7748244);
   R__4->SetBinContent(18,0.4699478);
   R__4->SetBinContent(19,0.2681767);
   R__4->SetBinContent(20,0.1444602);
   R__4->SetBinContent(21,0.05689202);
   R__4->SetBinError(4,7.158136e-05);
   R__4->SetBinError(5,0.0001028152);
   R__4->SetBinError(6,0.0001309613);
   R__4->SetBinError(7,0.0001602498);
   R__4->SetBinError(8,0.0001900837);
   R__4->SetBinError(9,0.0002189204);
   R__4->SetBinError(10,0.0002451811);
   R__4->SetBinError(11,0.0002676469);
   R__4->SetBinError(12,0.0002866771);
   R__4->SetBinError(13,0.0003030976);
   R__4->SetBinError(14,0.0003215822);
   R__4->SetBinError(15,0.0003477477);
   R__4->SetBinError(16,0.0003577744);
   R__4->SetBinError(17,0.0003149278);
   R__4->SetBinError(18,0.0002452642);
   R__4->SetBinError(19,0.0001852763);
   R__4->SetBinError(20,0.0001359826);
   R__4->SetBinError(21,8.533653e-05);
   R__4->SetEntries(6.226346e+07);

   ci = TColor::GetColor("#ff0000");
   R__4->SetLineColor(ci);
   R__4->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   R__4->SetMarkerColor(ci);
   R__4->GetXaxis()->SetTitle("Decay radial position [mm]");
   R__4->GetXaxis()->CenterTitle(true);
   R__4->GetXaxis()->SetLabelFont(42);
   R__4->GetXaxis()->SetTitleSize(0.04);
   R__4->GetXaxis()->SetTitleOffset(1.1);
   R__4->GetXaxis()->SetTitleFont(42);
   R__4->GetYaxis()->SetTitle("Decays");
   R__4->GetYaxis()->CenterTitle(true);
   R__4->GetYaxis()->SetNdivisions(4000510);
   R__4->GetYaxis()->SetLabelFont(42);
   R__4->GetYaxis()->SetTitleSize(0.04);
   R__4->GetYaxis()->SetTitleOffset(1.1);
   R__4->GetYaxis()->SetTitleFont(42);
   R__4->GetZaxis()->SetLabelFont(42);
   R__4->GetZaxis()->SetTitleOffset(1);
   R__4->GetZaxis()->SetTitleFont(42);
   R__4->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
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
   
   Double_t _fx3002[18] = {
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
   Double_t _fy3002[18] = {
   0.969441,
   1.026526,
   1.054684,
   1.120515,
   1.122258,
   1.132809,
   1.10321,
   1.111084,
   1.085974,
   1.067721,
   1.040739,
   1.016107,
   1,
   0.9790124,
   0.9548317,
   0.9280879,
   0.9114529,
   0.8910613};
   Double_t _felx3002[18] = {
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
   Double_t _fely3002[18] = {
   0.02434841,
   0.01744726,
   0.01388539,
   0.01169852,
   0.009870184,
   0.008610521,
   0.007586586,
   0.006974694,
   0.006437283,
   0.006036867,
   0.00561712,
   0.005132305,
   0.004948569,
   0.005562214,
   0.007052852,
   0.009204,
   0.01242683,
   0.0195772};
   Double_t _fehx3002[18] = {
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
   Double_t _fehy3002[18] = {
   0.02496784,
   0.01774638,
   0.01406943,
   0.0118213,
   0.00995738,
   0.008676223,
   0.00763894,
   0.007018616,
   0.006475555,
   0.006071097,
   0.00564752,
   0.005158295,
   0.004973119,
   0.005593907,
   0.007105143,
   0.009295738,
   0.01259743,
   0.02001217};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-65,65);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(1.25);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->GetXaxis()->SetRange(1,100);
   Graph_Graph3002->GetXaxis()->CenterTitle(true);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3002->GetYaxis()->CenterTitle(true);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.055182,510,"S");
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
   gaxis->SetTitle("Decay radial position [mm]");
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
   p1->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   p1->Modified();
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
   TLegendEntry *entry=leg->AddEntry("R","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_R","Truth vertices","lpf");
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
