void S12_VerticalDecayPositionRatio_1500_1750_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:55 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.06287101,81.25,1.194549);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__1036 = new TH1D("S12_Y__1036","",24,-60,60);
   S12_Y__1036->SetBinContent(4,0.01636189);
   S12_Y__1036->SetBinContent(5,0.04908566);
   S12_Y__1036->SetBinContent(6,0.09752968);
   S12_Y__1036->SetBinContent(7,0.1857555);
   S12_Y__1036->SetBinContent(8,0.3201797);
   S12_Y__1036->SetBinContent(9,0.5306384);
   S12_Y__1036->SetBinContent(10,0.7196022);
   S12_Y__1036->SetBinContent(11,0.876163);
   S12_Y__1036->SetBinContent(12,1);
   S12_Y__1036->SetBinContent(13,0.9788258);
   S12_Y__1036->SetBinContent(14,0.8915624);
   S12_Y__1036->SetBinContent(15,0.7090151);
   S12_Y__1036->SetBinContent(16,0.5049727);
   S12_Y__1036->SetBinContent(17,0.3156882);
   S12_Y__1036->SetBinContent(18,0.1735643);
   S12_Y__1036->SetBinContent(19,0.1020212);
   S12_Y__1036->SetBinContent(20,0.04619827);
   S12_Y__1036->SetBinContent(21,0.01251203);
   S12_Y__1036->SetBinError(4,0.002291122);
   S12_Y__1036->SetBinError(5,0.00396834);
   S12_Y__1036->SetBinError(6,0.005593711);
   S12_Y__1036->SetBinError(7,0.007719737);
   S12_Y__1036->SetBinError(8,0.01013511);
   S12_Y__1036->SetBinError(9,0.01304761);
   S12_Y__1036->SetBinError(10,0.0151942);
   S12_Y__1036->SetBinError(11,0.01676579);
   S12_Y__1036->SetBinError(12,0.01791149);
   S12_Y__1036->SetBinError(13,0.01772084);
   S12_Y__1036->SetBinError(14,0.01691249);
   S12_Y__1036->SetBinError(15,0.01508201);
   S12_Y__1036->SetBinError(16,0.01272816);
   S12_Y__1036->SetBinError(17,0.01006377);
   S12_Y__1036->SetBinError(18,0.007462113);
   S12_Y__1036->SetBinError(19,0.005721063);
   S12_Y__1036->SetBinError(20,0.003849856);
   S12_Y__1036->SetBinError(21,0.002003528);
   S12_Y__1036->SetEntries(23470);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__1036->SetLineColor(ci);
   S12_Y__1036->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__1036->SetMarkerColor(ci);
   S12_Y__1036->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__1036->GetXaxis()->SetRange(0,25);
   S12_Y__1036->GetXaxis()->SetLabelFont(42);
   S12_Y__1036->GetXaxis()->SetTitleOffset(1);
   S12_Y__1036->GetXaxis()->SetTitleFont(42);
   S12_Y__1036->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__1036->GetYaxis()->CenterTitle(true);
   S12_Y__1036->GetYaxis()->SetLabelFont(42);
   S12_Y__1036->GetYaxis()->SetTitleFont(42);
   S12_Y__1036->GetZaxis()->SetLabelFont(42);
   S12_Y__1036->GetZaxis()->SetTitleOffset(1);
   S12_Y__1036->GetZaxis()->SetTitleFont(42);
   S12_Y__1036->Draw("AE");
   
   TH1D *Y__1037 = new TH1D("Y__1037","",24,-60,60);
   Y__1037->SetBinContent(4,0.02838498);
   Y__1037->SetBinContent(5,0.07445797);
   Y__1037->SetBinContent(6,0.1388716);
   Y__1037->SetBinContent(7,0.2355316);
   Y__1037->SetBinContent(8,0.3724264);
   Y__1037->SetBinContent(9,0.5518391);
   Y__1037->SetBinContent(10,0.7445511);
   Y__1037->SetBinContent(11,0.9105803);
   Y__1037->SetBinContent(12,1);
   Y__1037->SetBinContent(13,0.9993522);
   Y__1037->SetBinContent(14,0.9074793);
   Y__1037->SetBinContent(15,0.7453275);
   Y__1037->SetBinContent(16,0.5511023);
   Y__1037->SetBinContent(17,0.3712768);
   Y__1037->SetBinContent(18,0.2360635);
   Y__1037->SetBinContent(19,0.1394765);
   Y__1037->SetBinContent(20,0.07416423);
   Y__1037->SetBinContent(21,0.02851835);
   Y__1037->SetBinError(4,0.0002122957);
   Y__1037->SetBinError(5,0.0003438369);
   Y__1037->SetBinError(6,0.0004695735);
   Y__1037->SetBinError(7,0.0006115354);
   Y__1037->SetBinError(8,0.0007689838);
   Y__1037->SetBinError(9,0.0009360589);
   Y__1037->SetBinError(10,0.001087287);
   Y__1037->SetBinError(11,0.00120242);
   Y__1037->SetBinError(12,0.001260077);
   Y__1037->SetBinError(13,0.001259668);
   Y__1037->SetBinError(14,0.00120037);
   Y__1037->SetBinError(15,0.001087854);
   Y__1037->SetBinError(16,0.0009354338);
   Y__1037->SetBinError(17,0.000767796);
   Y__1037->SetBinError(18,0.0006122255);
   Y__1037->SetBinError(19,0.0004705952);
   Y__1037->SetBinError(20,0.000343158);
   Y__1037->SetBinError(21,0.0002127939);
   Y__1037->SetEntries(5107343);

   ci = TColor::GetColor("#ff0000");
   Y__1037->SetLineColor(ci);
   Y__1037->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1037->SetMarkerColor(ci);
   Y__1037->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1037->GetXaxis()->CenterTitle(true);
   Y__1037->GetXaxis()->SetLabelFont(42);
   Y__1037->GetXaxis()->SetTitleSize(0.04);
   Y__1037->GetXaxis()->SetTitleOffset(1.1);
   Y__1037->GetXaxis()->SetTitleFont(42);
   Y__1037->GetYaxis()->SetTitle("Decays");
   Y__1037->GetYaxis()->CenterTitle(true);
   Y__1037->GetYaxis()->SetNdivisions(4000510);
   Y__1037->GetYaxis()->SetLabelFont(42);
   Y__1037->GetYaxis()->SetTitleSize(0.04);
   Y__1037->GetYaxis()->SetTitleOffset(1.1);
   Y__1037->GetYaxis()->SetTitleFont(42);
   Y__1037->GetZaxis()->SetLabelFont(42);
   Y__1037->GetZaxis()->SetTitleOffset(1);
   Y__1037->GetZaxis()->SetTitleFont(42);
   Y__1037->Draw("AEsame");
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
   
   Double_t _fx3346[18] = {
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
   Double_t _fy3346[18] = {
   0.5764277,
   0.6592399,
   0.7023013,
   0.7886649,
   0.8597126,
   0.9615819,
   0.9664913,
   0.9622029,
   1,
   0.9794603,
   0.9824603,
   0.9512799,
   0.9162958,
   0.850277,
   0.7352441,
   0.7314578,
   0.6229185,
   0.4387361};
   Double_t _felx3346[18] = {
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
   Double_t _fely3346[18] = {
   0.08056299,
   0.05332433,
   0.04032728,
   0.03283012,
   0.02726694,
   0.02369764,
   0.0204544,
   0.01845485,
   0.01795478,
   0.01777427,
   0.01868089,
   0.02028144,
   0.02314564,
   0.02715815,
   0.03165819,
   0.04107047,
   0.05192888,
   0.07002549};
   Double_t _fehx3346[18] = {
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
   Double_t _fehy3346[18] = {
   0.0926994,
   0.0578237,
   0.04271268,
   0.03422628,
   0.02814589,
   0.02428904,
   0.02089198,
   0.01881228,
   0.01828011,
   0.01809981,
   0.01903955,
   0.02071857,
   0.02373788,
   0.02803988,
   0.03305181,
   0.0434444,
   0.05645063,
   0.08220988};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3346,_fy3346,_felx3346,_fehx3346,_fely3346,_fehy3346);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3346 = new TH1F("Graph_Graph3346","",100,-65,65);
   Graph_Graph3346->SetMinimum(0);
   Graph_Graph3346->SetMaximum(1.25);
   Graph_Graph3346->SetDirectory(0);
   Graph_Graph3346->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3346->SetLineColor(ci);
   Graph_Graph3346->GetXaxis()->SetRange(1,100);
   Graph_Graph3346->GetXaxis()->CenterTitle(true);
   Graph_Graph3346->GetXaxis()->SetLabelFont(42);
   Graph_Graph3346->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3346->GetXaxis()->SetTitleFont(42);
   Graph_Graph3346->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3346->GetYaxis()->CenterTitle(true);
   Graph_Graph3346->GetYaxis()->SetLabelFont(42);
   Graph_Graph3346->GetYaxis()->SetTitleFont(42);
   Graph_Graph3346->GetZaxis()->SetLabelFont(42);
   Graph_Graph3346->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3346->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3346);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.068807,510,"S");
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
