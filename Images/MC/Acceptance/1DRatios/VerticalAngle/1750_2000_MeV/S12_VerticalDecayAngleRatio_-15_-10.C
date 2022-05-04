void S12_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   
   TH1D *S12_ThetaY_mI15_mI10__1227 = new TH1D("S12_ThetaY_mI15_mI10__1227","",630,-1575,1575);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(312,0.06060606);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(313,0.5454545);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(314,0.9204545);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(315,0.9659091);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(316,1);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(317,0.9204545);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(318,0.780303);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(319,0.6590909);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(320,0.3712121);
   S12_ThetaY_mI15_mI10__1227->SetBinContent(321,0.05681818);
   S12_ThetaY_mI15_mI10__1227->SetBinError(312,0.01515152);
   S12_ThetaY_mI15_mI10__1227->SetBinError(313,0.04545455);
   S12_ThetaY_mI15_mI10__1227->SetBinError(314,0.05904719);
   S12_ThetaY_mI15_mI10__1227->SetBinError(315,0.06048757);
   S12_ThetaY_mI15_mI10__1227->SetBinError(316,0.06154575);
   S12_ThetaY_mI15_mI10__1227->SetBinError(317,0.05904719);
   S12_ThetaY_mI15_mI10__1227->SetBinError(318,0.05436629);
   S12_ThetaY_mI15_mI10__1227->SetBinError(319,0.04996555);
   S12_ThetaY_mI15_mI10__1227->SetBinError(320,0.03749809);
   S12_ThetaY_mI15_mI10__1227->SetBinError(321,0.01467039);
   S12_ThetaY_mI15_mI10__1227->SetMinimum(0);
   S12_ThetaY_mI15_mI10__1227->SetMaximum(1.1);
   S12_ThetaY_mI15_mI10__1227->SetEntries(1658);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1227->SetLineColor(ci);
   S12_ThetaY_mI15_mI10__1227->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI15_mI10__1227->SetMarkerColor(ci);
   S12_ThetaY_mI15_mI10__1227->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI15_mI10__1227->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI15_mI10__1227->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1227->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1227->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1227->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI15_mI10__1227->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI15_mI10__1227->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1227->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1227->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI15_mI10__1227->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI15_mI10__1227->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI15_mI10__1227->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1228 = new TH1D("ThetaY_mI15_mI10__1228","",630,-1575,1575);
   ThetaY_mI15_mI10__1228->SetBinContent(309,0.0004166027);
   ThetaY_mI15_mI10__1228->SetBinContent(310,0.14967);
   ThetaY_mI15_mI10__1228->SetBinContent(311,0.5320017);
   ThetaY_mI15_mI10__1228->SetBinContent(312,0.751332);
   ThetaY_mI15_mI10__1228->SetBinContent(313,0.8907405);
   ThetaY_mI15_mI10__1228->SetBinContent(314,0.9622865);
   ThetaY_mI15_mI10__1228->SetBinContent(315,0.9903304);
   ThetaY_mI15_mI10__1228->SetBinContent(316,1);
   ThetaY_mI15_mI10__1228->SetBinContent(317,0.9587563);
   ThetaY_mI15_mI10__1228->SetBinContent(318,0.8916614);
   ThetaY_mI15_mI10__1228->SetBinContent(319,0.7572302);
   ThetaY_mI15_mI10__1228->SetBinContent(320,0.5302256);
   ThetaY_mI15_mI10__1228->SetBinContent(321,0.144605);
   ThetaY_mI15_mI10__1228->SetBinContent(322,0.0006577938);
   ThetaY_mI15_mI10__1228->SetBinError(309,9.557522e-05);
   ThetaY_mI15_mI10__1228->SetBinError(310,0.001811555);
   ThetaY_mI15_mI10__1228->SetBinError(311,0.003415393);
   ThetaY_mI15_mI10__1228->SetBinError(312,0.004058824);
   ThetaY_mI15_mI10__1228->SetBinError(313,0.004419365);
   ThetaY_mI15_mI10__1228->SetBinError(314,0.004593423);
   ThetaY_mI15_mI10__1228->SetBinError(315,0.004659875);
   ThetaY_mI15_mI10__1228->SetBinError(316,0.00468257);
   ThetaY_mI15_mI10__1228->SetBinError(317,0.00458499);
   ThetaY_mI15_mI10__1228->SetBinError(318,0.004421649);
   ThetaY_mI15_mI10__1228->SetBinError(319,0.004074724);
   ThetaY_mI15_mI10__1228->SetBinError(320,0.003409688);
   ThetaY_mI15_mI10__1228->SetBinError(321,0.001780639);
   ThetaY_mI15_mI10__1228->SetBinError(322,0.0001200962);
   ThetaY_mI15_mI10__1228->SetEntries(390392);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1228->SetLineColor(ci);
   ThetaY_mI15_mI10__1228->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1228->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1228->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1228->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1228->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1228->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1228->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1228->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1228->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1228->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1228->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1228->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1228->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1228->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1228->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1228->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1228->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1228->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1228->Draw("AEsame");
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
   
   Double_t _fx3410[14] = {
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
   32.5};
   Double_t _fy3410[14] = {
   0,
   0,
   0,
   0.08066482,
   0.6123608,
   0.9565286,
   0.9753402,
   1,
   0.9600506,
   0.8751114,
   0.870397,
   0.7001022,
   0.3929199,
   0};
   Double_t _felx3410[14] = {
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
   Double_t _fely3410[14] = {
   0,
   0,
   0,
   0.01995785,
   0.05106042,
   0.06148797,
   0.06120954,
   0.06168388,
   0.06171499,
   0.06107579,
   0.06608612,
   0.07074165,
   0.1004164,
   0};
   Double_t _fehx3410[14] = {
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
   Double_t _fehy3410[14] = {
   17.57695,
   0.04659923,
   0.01310866,
   0.02563442,
   0.0555078,
   0.06557506,
   0.06517837,
   0.06561285,
   0.06581722,
   0.06549636,
   0.071307,
   0.07828143,
   0.130089,
   10.9335};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3410,_fy3410,_felx3410,_fehx3410,_fely3410,_fehy3410);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3410 = new TH1F("Graph_Graph3410","",100,-100,100);
   Graph_Graph3410->SetMinimum(0);
   Graph_Graph3410->SetMaximum(1.5);
   Graph_Graph3410->SetDirectory(0);
   Graph_Graph3410->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3410->SetLineColor(ci);
   Graph_Graph3410->GetXaxis()->SetRange(1,100);
   Graph_Graph3410->GetXaxis()->CenterTitle(true);
   Graph_Graph3410->GetXaxis()->SetLabelFont(42);
   Graph_Graph3410->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3410->GetXaxis()->SetTitleFont(42);
   Graph_Graph3410->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3410->GetYaxis()->CenterTitle(true);
   Graph_Graph3410->GetYaxis()->SetLabelFont(42);
   Graph_Graph3410->GetYaxis()->SetTitleFont(42);
   Graph_Graph3410->GetZaxis()->SetLabelFont(42);
   Graph_Graph3410->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3410->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3410);
   
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1229 = new TH2D("ThetaY_vs_Y_mI15_mI10__1229","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8044,19);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8070,6826);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8096,24263);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8122,34266);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8148,40624);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8174,43887);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8200,45166);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8226,45607);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8252,43726);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8278,40666);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8304,34535);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8330,24182);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8356,6595);
   ThetaY_vs_Y_mI15_mI10__1229->SetBinContent(8382,30);
   ThetaY_vs_Y_mI15_mI10__1229->SetEntries(390392);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1229->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1229->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1229->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1229->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1229->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1229->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1229->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1229->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1229->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1229->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1229->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1229->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1229->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1229->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1229->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1229->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-15_-10","Reco vertices","lpf");
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
