void S12S18_VerticalDecayPositionRatio_750_2500_MeV()
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
   upper_pad->Range(-81.25,-0.06207654,81.25,1.179454);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__178 = new TH1D("S12S18_Y__178","",24,-60,60);
   S12S18_Y__178->SetBinContent(4,0.01802054);
   S12S18_Y__178->SetBinContent(5,0.05393419);
   S12S18_Y__178->SetBinContent(6,0.1080213);
   S12S18_Y__178->SetBinContent(7,0.1959575);
   S12S18_Y__178->SetBinContent(8,0.3334438);
   S12S18_Y__178->SetBinContent(9,0.5142355);
   S12S18_Y__178->SetBinContent(10,0.7235745);
   S12S18_Y__178->SetBinContent(11,0.8928708);
   S12S18_Y__178->SetBinContent(12,0.9907221);
   S12S18_Y__178->SetBinContent(13,1);
   S12S18_Y__178->SetBinContent(14,0.8866515);
   S12S18_Y__178->SetBinContent(15,0.7057324);
   S12S18_Y__178->SetBinContent(16,0.5104122);
   S12S18_Y__178->SetBinContent(17,0.323962);
   S12S18_Y__178->SetBinContent(18,0.1881324);
   S12S18_Y__178->SetBinContent(19,0.107486);
   S12S18_Y__178->SetBinContent(20,0.04985599);
   S12S18_Y__178->SetBinContent(21,0.0167716);
   S12S18_Y__178->SetBinError(4,0.0006777323);
   S12S18_Y__178->SetBinError(5,0.001172482);
   S12S18_Y__178->SetBinError(6,0.001659315);
   S12S18_Y__178->SetBinError(7,0.002234885);
   S12S18_Y__178->SetBinError(8,0.002915315);
   S12S18_Y__178->SetBinError(9,0.003620389);
   S12S18_Y__178->SetBinError(10,0.004294532);
   S12S18_Y__178->SetBinError(11,0.004770551);
   S12S18_Y__178->SetBinError(12,0.005025163);
   S12S18_Y__178->SetBinError(13,0.005048638);
   S12S18_Y__178->SetBinError(14,0.004753908);
   S12S18_Y__178->SetBinError(15,0.004241254);
   S12S18_Y__178->SetBinError(16,0.003606905);
   S12S18_Y__178->SetBinError(17,0.002873567);
   S12S18_Y__178->SetBinError(18,0.002189808);
   S12S18_Y__178->SetBinError(19,0.001655199);
   S12S18_Y__178->SetBinError(20,0.001127283);
   S12S18_Y__178->SetBinError(21,0.0006538249);
   S12S18_Y__178->SetEntries(298947);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__178->SetLineColor(ci);
   S12S18_Y__178->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__178->SetMarkerColor(ci);
   S12S18_Y__178->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__178->GetXaxis()->SetRange(0,25);
   S12S18_Y__178->GetXaxis()->SetLabelFont(42);
   S12S18_Y__178->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__178->GetXaxis()->SetTitleFont(42);
   S12S18_Y__178->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__178->GetYaxis()->CenterTitle(true);
   S12S18_Y__178->GetYaxis()->SetLabelFont(42);
   S12S18_Y__178->GetYaxis()->SetTitleFont(42);
   S12S18_Y__178->GetZaxis()->SetLabelFont(42);
   S12S18_Y__178->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__178->GetZaxis()->SetTitleFont(42);
   S12S18_Y__178->Draw("AE");
   
   TH1D *Y__179 = new TH1D("Y__179","",24,-60,60);
   Y__179->SetBinContent(4,0.02849541);
   Y__179->SetBinContent(5,0.07459676);
   Y__179->SetBinContent(6,0.1392607);
   Y__179->SetBinContent(7,0.2350582);
   Y__179->SetBinContent(8,0.3730301);
   Y__179->SetBinContent(9,0.5522169);
   Y__179->SetBinContent(10,0.7465375);
   Y__179->SetBinContent(11,0.9094648);
   Y__179->SetBinContent(12,1.001251);
   Y__179->SetBinContent(13,1);
   Y__179->SetBinContent(14,0.909172);
   Y__179->SetBinContent(15,0.7460401);
   Y__179->SetBinContent(16,0.5514901);
   Y__179->SetBinContent(17,0.3723857);
   Y__179->SetBinContent(18,0.2352631);
   Y__179->SetBinContent(19,0.139057);
   Y__179->SetBinContent(20,0.07437709);
   Y__179->SetBinContent(21,0.02853661);
   Y__179->SetBinError(4,8.121549e-05);
   Y__179->SetBinError(5,0.0001314048);
   Y__179->SetBinError(6,0.0001795419);
   Y__179->SetBinError(7,0.0002332594);
   Y__179->SetBinError(8,0.0002938484);
   Y__179->SetBinError(9,0.0003575249);
   Y__179->SetBinError(10,0.0004156973);
   Y__179->SetBinError(11,0.0004588221);
   Y__179->SetBinError(12,0.0004814186);
   Y__179->SetBinError(13,0.0004811178);
   Y__179->SetBinError(14,0.0004587483);
   Y__179->SetBinError(15,0.0004155588);
   Y__179->SetBinError(16,0.0003572895);
   Y__179->SetBinError(17,0.0002935945);
   Y__179->SetBinError(18,0.000233361);
   Y__179->SetBinError(19,0.0001794105);
   Y__179->SetBinError(20,0.0001312112);
   Y__179->SetBinError(21,8.127418e-05);
   Y__179->SetEntries(3.506322e+07);

   ci = TColor::GetColor("#ff0000");
   Y__179->SetLineColor(ci);
   Y__179->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__179->SetMarkerColor(ci);
   Y__179->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__179->GetXaxis()->CenterTitle(true);
   Y__179->GetXaxis()->SetLabelFont(42);
   Y__179->GetXaxis()->SetTitleSize(0.04);
   Y__179->GetXaxis()->SetTitleOffset(1.1);
   Y__179->GetXaxis()->SetTitleFont(42);
   Y__179->GetYaxis()->SetTitle("Decays");
   Y__179->GetYaxis()->CenterTitle(true);
   Y__179->GetYaxis()->SetNdivisions(4000510);
   Y__179->GetYaxis()->SetLabelFont(42);
   Y__179->GetYaxis()->SetTitleSize(0.04);
   Y__179->GetYaxis()->SetTitleOffset(1.1);
   Y__179->GetYaxis()->SetTitleFont(42);
   Y__179->GetZaxis()->SetLabelFont(42);
   Y__179->GetZaxis()->SetTitleOffset(1);
   Y__179->GetZaxis()->SetTitleFont(42);
   Y__179->Draw("AEsame");
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
   
   Double_t _fx3060[18] = {
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
   Double_t _fy3060[18] = {
   0.6324016,
   0.7230098,
   0.7756768,
   0.8336551,
   0.893879,
   0.9312201,
   0.9692407,
   0.9817541,
   0.9894841,
   1,
   0.9752297,
   0.9459712,
   0.9255147,
   0.8699636,
   0.7996684,
   0.7729638,
   0.6703138,
   0.587722};
   Double_t _felx3060[18] = {
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
   Double_t _fely3060[18] = {
   0.02384638,
   0.01576785,
   0.01195658,
   0.009543504,
   0.007846783,
   0.006583708,
   0.005777828,
   0.005268754,
   0.005041361,
   0.005071489,
   0.005251909,
   0.005709354,
   0.006567663,
   0.00774696,
   0.009341434,
   0.01194425,
   0.01520106,
   0.02296693};
   Double_t _fehx3060[18] = {
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
   Double_t _fehy3060[18] = {
   0.02476318,
   0.01611559,
   0.01214234,
   0.009653396,
   0.007915974,
   0.006630422,
   0.005812376,
   0.005297108,
   0.005067113,
   0.005097275,
   0.00528027,
   0.005743918,
   0.006614437,
   0.00781626,
   0.009451209,
   0.01213028,
   0.0155498,
   0.02388265};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3060,_fy3060,_felx3060,_fehx3060,_fely3060,_fehy3060);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3060 = new TH1F("Graph_Graph3060","",100,-65,65);
   Graph_Graph3060->SetMinimum(0);
   Graph_Graph3060->SetMaximum(1.25);
   Graph_Graph3060->SetDirectory(0);
   Graph_Graph3060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3060->SetLineColor(ci);
   Graph_Graph3060->GetXaxis()->SetRange(1,100);
   Graph_Graph3060->GetXaxis()->CenterTitle(true);
   Graph_Graph3060->GetXaxis()->SetLabelFont(42);
   Graph_Graph3060->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3060->GetXaxis()->SetTitleFont(42);
   Graph_Graph3060->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3060->GetYaxis()->CenterTitle(true);
   Graph_Graph3060->GetYaxis()->SetLabelFont(42);
   Graph_Graph3060->GetYaxis()->SetTitleFont(42);
   Graph_Graph3060->GetZaxis()->SetLabelFont(42);
   Graph_Graph3060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3060->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3060);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.055301,510,"S");
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
