void S12_VerticalDecayAngleRatio_0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__894 = new TH1D("S12_ThetaY_0_5__894","",630,-1575,1575);
   S12_ThetaY_0_5__894->SetBinContent(308,0.007009346);
   S12_ThetaY_0_5__894->SetBinContent(309,0.06074766);
   S12_ThetaY_0_5__894->SetBinContent(310,0.3481308);
   S12_ThetaY_0_5__894->SetBinContent(311,0.6962617);
   S12_ThetaY_0_5__894->SetBinContent(312,0.8901869);
   S12_ThetaY_0_5__894->SetBinContent(313,0.9415888);
   S12_ThetaY_0_5__894->SetBinContent(314,0.9205607);
   S12_ThetaY_0_5__894->SetBinContent(315,0.9252336);
   S12_ThetaY_0_5__894->SetBinContent(316,1);
   S12_ThetaY_0_5__894->SetBinContent(317,0.8668224);
   S12_ThetaY_0_5__894->SetBinContent(318,0.9252336);
   S12_ThetaY_0_5__894->SetBinContent(319,0.7780374);
   S12_ThetaY_0_5__894->SetBinContent(320,0.5070093);
   S12_ThetaY_0_5__894->SetBinContent(321,0.09813084);
   S12_ThetaY_0_5__894->SetBinContent(322,0.004672897);
   S12_ThetaY_0_5__894->SetBinError(308,0.004046848);
   S12_ThetaY_0_5__894->SetBinError(309,0.0119136);
   S12_ThetaY_0_5__894->SetBinError(310,0.02851999);
   S12_ThetaY_0_5__894->SetBinError(311,0.04033336);
   S12_ThetaY_0_5__894->SetBinError(312,0.04560566);
   S12_ThetaY_0_5__894->SetBinError(313,0.04690388);
   S12_ThetaY_0_5__894->SetBinError(314,0.04637718);
   S12_ThetaY_0_5__894->SetBinError(315,0.04649474);
   S12_ThetaY_0_5__894->SetBinError(316,0.04833682);
   S12_ThetaY_0_5__894->SetBinError(317,0.04500318);
   S12_ThetaY_0_5__894->SetBinError(318,0.04649474);
   S12_ThetaY_0_5__894->SetBinError(319,0.04263619);
   S12_ThetaY_0_5__894->SetBinError(320,0.03441804);
   S12_ThetaY_0_5__894->SetBinError(321,0.01514192);
   S12_ThetaY_0_5__894->SetBinError(322,0.003304237);
   S12_ThetaY_0_5__894->SetMinimum(0);
   S12_ThetaY_0_5__894->SetMaximum(1.1);
   S12_ThetaY_0_5__894->SetEntries(3839);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__894->SetLineColor(ci);
   S12_ThetaY_0_5__894->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__894->SetMarkerColor(ci);
   S12_ThetaY_0_5__894->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__894->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__894->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__894->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__894->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__894->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__894->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__894->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__894->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__894->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__894->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__894->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__894->Draw("AE");
   
   TH1D *ThetaY_0_5__895 = new TH1D("ThetaY_0_5__895","",630,-1575,1575);
   ThetaY_0_5__895->SetBinContent(307,0.005884805);
   ThetaY_0_5__895->SetBinContent(308,0.1789114);
   ThetaY_0_5__895->SetBinContent(309,0.4991581);
   ThetaY_0_5__895->SetBinContent(310,0.7063433);
   ThetaY_0_5__895->SetBinContent(311,0.8301242);
   ThetaY_0_5__895->SetBinContent(312,0.914662);
   ThetaY_0_5__895->SetBinContent(313,0.9602901);
   ThetaY_0_5__895->SetBinContent(314,0.9856964);
   ThetaY_0_5__895->SetBinContent(315,0.9980662);
   ThetaY_0_5__895->SetBinContent(316,1);
   ThetaY_0_5__895->SetBinContent(317,0.9871134);
   ThetaY_0_5__895->SetBinContent(318,0.9611403);
   ThetaY_0_5__895->SetBinContent(319,0.9159957);
   ThetaY_0_5__895->SetBinContent(320,0.8332583);
   ThetaY_0_5__895->SetBinContent(321,0.7021755);
   ThetaY_0_5__895->SetBinContent(322,0.5075769);
   ThetaY_0_5__895->SetBinContent(323,0.1773443);
   ThetaY_0_5__895->SetBinContent(324,0.005834792);
   ThetaY_0_5__895->SetBinError(307,0.0003132165);
   ThetaY_0_5__895->SetBinError(308,0.001727021);
   ThetaY_0_5__895->SetBinError(309,0.002884681);
   ThetaY_0_5__895->SetBinError(310,0.00343152);
   ThetaY_0_5__895->SetBinError(311,0.003720062);
   ThetaY_0_5__895->SetBinError(312,0.003904892);
   ThetaY_0_5__895->SetBinError(313,0.004001104);
   ThetaY_0_5__895->SetBinError(314,0.004053687);
   ThetaY_0_5__895->SetBinError(315,0.004079044);
   ThetaY_0_5__895->SetBinError(316,0.004082993);
   ThetaY_0_5__895->SetBinError(317,0.0040566);
   ThetaY_0_5__895->SetBinError(318,0.004002875);
   ThetaY_0_5__895->SetBinError(319,0.003907737);
   ThetaY_0_5__895->SetBinError(320,0.003727078);
   ThetaY_0_5__895->SetBinError(321,0.003421382);
   ThetaY_0_5__895->SetBinError(322,0.002908905);
   ThetaY_0_5__895->SetBinError(323,0.001719441);
   ThetaY_0_5__895->SetBinError(324,0.0003118828);
   ThetaY_0_5__895->SetEntries(729992);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__895->SetLineColor(ci);
   ThetaY_0_5__895->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__895->SetMarkerColor(ci);
   ThetaY_0_5__895->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__895->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__895->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__895->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__895->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__895->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__895->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__895->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__895->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__895->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__895->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__895->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__895->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__895->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__895->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__895->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__895->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-125,-0.6923077,125,1.615385);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3299[18] = {
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
   Double_t _fy3299[18] = {
   0,
   0.03917775,
   0.1217002,
   0.4928635,
   0.838744,
   0.9732414,
   0.9805254,
   0.9339191,
   0.9270263,
   1,
   0.8781386,
   0.9626416,
   0.8493898,
   0.608466,
   0.1397526,
   0.009206284,
   0,
   0};
   Double_t _felx3299[18] = {
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
   Double_t _fely3299[18] = {
   0,
   0.02132409,
   0.02372282,
   0.04040201,
   0.0487045,
   0.0500111,
   0.04899327,
   0.04718626,
   0.04671854,
   0.04848963,
   0.04571232,
   0.04851952,
   0.04666327,
   0.04136263,
   0.02148854,
   0.005946529,
   0,
   0};
   Double_t _fehx3299[18] = {
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
   Double_t _fehy3299[18] = {
   0.7328517,
   0.03811983,
   0.02886933,
   0.04385892,
   0.05161931,
   0.05265042,
   0.05150555,
   0.04963362,
   0.04913528,
   0.05090073,
   0.048157,
   0.05102979,
   0.04930095,
   0.04427561,
   0.02507763,
   0.01214337,
   0.0242569,
   0.7391498};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3299,_fy3299,_felx3299,_fehx3299,_fely3299,_fehy3299);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3299 = new TH1F("Graph_Graph3299","",100,-100,100);
   Graph_Graph3299->SetMinimum(0);
   Graph_Graph3299->SetMaximum(1.5);
   Graph_Graph3299->SetDirectory(0);
   Graph_Graph3299->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3299->SetLineColor(ci);
   Graph_Graph3299->GetXaxis()->SetRange(1,100);
   Graph_Graph3299->GetXaxis()->CenterTitle(true);
   Graph_Graph3299->GetXaxis()->SetLabelFont(42);
   Graph_Graph3299->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3299->GetXaxis()->SetTitleFont(42);
   Graph_Graph3299->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3299->GetYaxis()->CenterTitle(true);
   Graph_Graph3299->GetYaxis()->SetLabelFont(42);
   Graph_Graph3299->GetYaxis()->SetTitleFont(42);
   Graph_Graph3299->GetZaxis()->SetLabelFont(42);
   Graph_Graph3299->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3299->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3299);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-100,0.7,100,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1,100,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-100,1.3,100,1.3);
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
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-100,100,510,"+U");
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-100,100,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("#theta_{y} [mrad]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.5,510,"-S");
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
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0.69,0.69,0.99,0.99);
   p2->Draw();
   p2->cd();
   p2->Range(0,0,1,1);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetFrameBorderMode(0);
   
   TH2D *ThetaY_vs_Y_0_5__896 = new TH2D("ThetaY_vs_Y_0_5__896","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__896->SetBinContent(7995,353);
   ThetaY_vs_Y_0_5__896->SetBinContent(8021,10732);
   ThetaY_vs_Y_0_5__896->SetBinContent(8047,29942);
   ThetaY_vs_Y_0_5__896->SetBinContent(8073,42370);
   ThetaY_vs_Y_0_5__896->SetBinContent(8099,49795);
   ThetaY_vs_Y_0_5__896->SetBinContent(8125,54866);
   ThetaY_vs_Y_0_5__896->SetBinContent(8151,57603);
   ThetaY_vs_Y_0_5__896->SetBinContent(8177,59127);
   ThetaY_vs_Y_0_5__896->SetBinContent(8203,59869);
   ThetaY_vs_Y_0_5__896->SetBinContent(8229,59985);
   ThetaY_vs_Y_0_5__896->SetBinContent(8255,59212);
   ThetaY_vs_Y_0_5__896->SetBinContent(8281,57654);
   ThetaY_vs_Y_0_5__896->SetBinContent(8307,54946);
   ThetaY_vs_Y_0_5__896->SetBinContent(8333,49983);
   ThetaY_vs_Y_0_5__896->SetBinContent(8359,42120);
   ThetaY_vs_Y_0_5__896->SetBinContent(8385,30447);
   ThetaY_vs_Y_0_5__896->SetBinContent(8411,10638);
   ThetaY_vs_Y_0_5__896->SetBinContent(8437,350);
   ThetaY_vs_Y_0_5__896->SetEntries(729992);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__896->SetLineColor(ci);
   ThetaY_vs_Y_0_5__896->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__896->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__896->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__896->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__896->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__896->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__896->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__896->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__896->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__896->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__896->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__896->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__896->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__896->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__896->Draw("COL");
   p2->Modified();
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_0_5","Reco vertices","lpf");
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
