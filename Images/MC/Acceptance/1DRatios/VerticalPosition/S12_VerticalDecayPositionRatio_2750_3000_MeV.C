void S12_VerticalDecayPositionRatio_2750_3000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:16:56 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-1.960514,81.25,37.24977);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__1 = new TH1D("S12_Y__1","",24,-60,60);
   S12_Y__1->SetBinContent(4,1);
   S12_Y__1->SetBinContent(5,1);
   S12_Y__1->SetBinContent(6,3.5);
   S12_Y__1->SetBinContent(7,4.5);
   S12_Y__1->SetBinContent(8,11.5);
   S12_Y__1->SetBinContent(9,12);
   S12_Y__1->SetBinContent(10,23);
   S12_Y__1->SetBinContent(11,22.5);
   S12_Y__1->SetBinContent(12,28);
   S12_Y__1->SetBinContent(13,28);
   S12_Y__1->SetBinContent(14,22.5);
   S12_Y__1->SetBinContent(15,18);
   S12_Y__1->SetBinContent(16,16.5);
   S12_Y__1->SetBinContent(17,10);
   S12_Y__1->SetBinContent(18,4.5);
   S12_Y__1->SetBinContent(19,3.5);
   S12_Y__1->SetBinContent(20,2);
   S12_Y__1->SetBinError(4,0.7071068);
   S12_Y__1->SetBinError(5,0.7071068);
   S12_Y__1->SetBinError(6,1.322876);
   S12_Y__1->SetBinError(7,1.5);
   S12_Y__1->SetBinError(8,2.397916);
   S12_Y__1->SetBinError(9,2.44949);
   S12_Y__1->SetBinError(10,3.391165);
   S12_Y__1->SetBinError(11,3.354102);
   S12_Y__1->SetBinError(12,3.741657);
   S12_Y__1->SetBinError(13,3.741657);
   S12_Y__1->SetBinError(14,3.354102);
   S12_Y__1->SetBinError(15,3);
   S12_Y__1->SetBinError(16,2.872281);
   S12_Y__1->SetBinError(17,2.236068);
   S12_Y__1->SetBinError(18,1.5);
   S12_Y__1->SetBinError(19,1.322876);
   S12_Y__1->SetBinError(20,1);
   S12_Y__1->SetEntries(424);

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
   Y__2->SetBinContent(4,1);
   Y__2->SetBinContent(5,2.639544);
   Y__2->SetBinContent(6,4.842962);
   Y__2->SetBinContent(7,8.368999);
   Y__2->SetBinContent(8,13.16151);
   Y__2->SetBinContent(9,19.46542);
   Y__2->SetBinContent(10,26.26363);
   Y__2->SetBinContent(11,31.67738);
   Y__2->SetBinContent(12,35.18145);
   Y__2->SetBinContent(13,35.15582);
   Y__2->SetBinContent(14,32.14361);
   Y__2->SetBinContent(15,26.45688);
   Y__2->SetBinContent(16,19.37022);
   Y__2->SetBinContent(17,13.1786);
   Y__2->SetBinContent(18,8.229455);
   Y__2->SetBinContent(19,4.923515);
   Y__2->SetBinContent(20,2.624085);
   Y__2->SetBinContent(21,0.9869813);
   Y__2->SetBinError(4,0.02017015);
   Y__2->SetBinError(5,0.03276978);
   Y__2->SetBinError(6,0.0443879);
   Y__2->SetBinError(7,0.05835067);
   Y__2->SetBinError(8,0.07317487);
   Y__2->SetBinError(9,0.08898995);
   Y__2->SetBinError(10,0.1033681);
   Y__2->SetBinError(11,0.113523);
   Y__2->SetBinError(12,0.1196371);
   Y__2->SetBinError(13,0.1195935);
   Y__2->SetBinError(14,0.1143553);
   Y__2->SetBinError(15,0.1037477);
   Y__2->SetBinError(16,0.08877207);
   Y__2->SetBinError(17,0.07322236);
   Y__2->SetBinError(18,0.05786215);
   Y__2->SetBinError(19,0.04475553);
   Y__2->SetBinError(20,0.03267367);
   Y__2->SetBinError(21,0.02003842);
   Y__2->SetEntries(702177);

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
   1,
   0.3788533,
   0.7226983,
   0.5376987,
   0.8737597,
   0.6164779,
   0.8757358,
   0.710286,
   0.795874,
   0.7964542,
   0.6999835,
   0.6803524,
   0.8518231,
   0.7588059,
   0.5468163,
   0.7108742,
   0.7621705,
   0};
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
   0.6460723,
   0.2447278,
   0.2665863,
   0.1758897,
   0.1809192,
   0.1249854,
   0.1286939,
   0.105518,
   0.1060683,
   0.1061457,
   0.1039871,
   0.1128932,
   0.1475777,
   0.1682938,
   0.1788728,
   0.2622236,
   0.364853,
   0};
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
   1.320174,
   0.4998595,
   0.3894297,
   0.2456395,
   0.222917,
   0.1533181,
   0.149156,
   0.1224933,
   0.1212437,
   0.1213322,
   0.120716,
   0.1333846,
   0.1756668,
   0.2105196,
   0.2498061,
   0.3830554,
   0.602974,
   0.9330067};
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,33.32874,510,"S");
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
