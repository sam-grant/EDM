void S12_VerticalDecayPositionRatio_2500_2750_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-81.25,-0.0682572,81.25,1.296887);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__1720 = new TH1D("S12_Y__1720","",24,-60,60);
   S12_Y__1720->SetBinContent(4,0.01039501);
   S12_Y__1720->SetBinContent(5,0.05197505);
   S12_Y__1720->SetBinContent(6,0.09355509);
   S12_Y__1720->SetBinContent(7,0.2266112);
   S12_Y__1720->SetBinContent(8,0.3014553);
   S12_Y__1720->SetBinContent(9,0.5072765);
   S12_Y__1720->SetBinContent(10,0.7567568);
   S12_Y__1720->SetBinContent(11,1);
   S12_Y__1720->SetBinContent(12,1.058212);
   S12_Y__1720->SetBinContent(13,1.056133);
   S12_Y__1720->SetBinContent(14,0.8357588);
   S12_Y__1720->SetBinContent(15,0.7234927);
   S12_Y__1720->SetBinContent(16,0.5862786);
   S12_Y__1720->SetBinContent(17,0.3180873);
   S12_Y__1720->SetBinContent(18,0.1850312);
   S12_Y__1720->SetBinContent(19,0.07484407);
   S12_Y__1720->SetBinContent(20,0.04573805);
   S12_Y__1720->SetBinContent(21,0.01039501);
   S12_Y__1720->SetBinError(4,0.00464879);
   S12_Y__1720->SetBinError(5,0.01039501);
   S12_Y__1720->SetBinError(6,0.01394637);
   S12_Y__1720->SetBinError(7,0.02170542);
   S12_Y__1720->SetBinError(8,0.0250345);
   S12_Y__1720->SetBinError(9,0.03247505);
   S12_Y__1720->SetBinError(10,0.03966483);
   S12_Y__1720->SetBinError(11,0.04559608);
   S12_Y__1720->SetBinError(12,0.04690442);
   S12_Y__1720->SetBinError(13,0.04685833);
   S12_Y__1720->SetBinError(14,0.04168386);
   S12_Y__1720->SetBinError(15,0.03878328);
   S12_Y__1720->SetBinError(16,0.03491238);
   S12_Y__1720->SetBinError(17,0.02571584);
   S12_Y__1720->SetBinError(18,0.01961327);
   S12_Y__1720->SetBinError(19,0.01247401);
   S12_Y__1720->SetBinError(20,0.009751384);
   S12_Y__1720->SetBinError(21,0.00464879);
   S12_Y__1720->SetEntries(3772);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__1720->SetLineColor(ci);
   S12_Y__1720->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__1720->SetMarkerColor(ci);
   S12_Y__1720->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__1720->GetXaxis()->SetRange(0,25);
   S12_Y__1720->GetXaxis()->SetLabelFont(42);
   S12_Y__1720->GetXaxis()->SetTitleOffset(1);
   S12_Y__1720->GetXaxis()->SetTitleFont(42);
   S12_Y__1720->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__1720->GetYaxis()->CenterTitle(true);
   S12_Y__1720->GetYaxis()->SetLabelFont(42);
   S12_Y__1720->GetYaxis()->SetTitleFont(42);
   S12_Y__1720->GetZaxis()->SetLabelFont(42);
   S12_Y__1720->GetZaxis()->SetTitleOffset(1);
   S12_Y__1720->GetZaxis()->SetTitleFont(42);
   S12_Y__1720->Draw("AE");
   
   TH1D *Y__1721 = new TH1D("Y__1721","",24,-60,60);
   Y__1721->SetBinContent(4,0.03112454);
   Y__1721->SetBinContent(5,0.0824835);
   Y__1721->SetBinContent(6,0.1533213);
   Y__1721->SetBinContent(7,0.259425);
   Y__1721->SetBinContent(8,0.410416);
   Y__1721->SetBinContent(9,0.6081918);
   Y__1721->SetBinContent(10,0.8203532);
   Y__1721->SetBinContent(11,1);
   Y__1721->SetBinContent(12,1.104027);
   Y__1721->SetBinContent(13,1.105008);
   Y__1721->SetBinContent(14,1.000519);
   Y__1721->SetBinContent(15,0.8189862);
   Y__1721->SetBinContent(16,0.6082553);
   Y__1721->SetBinContent(17,0.4075896);
   Y__1721->SetBinContent(18,0.2569678);
   Y__1721->SetBinContent(19,0.1508698);
   Y__1721->SetBinContent(20,0.08157792);
   Y__1721->SetBinContent(21,0.0308073);
   Y__1721->SetBinError(4,0.0004237084);
   Y__1721->SetBinError(5,0.0006897617);
   Y__1721->SetBinError(6,0.0009404089);
   Y__1721->SetBinError(7,0.001223268);
   Y__1721->SetBinError(8,0.001538607);
   Y__1721->SetBinError(9,0.001872992);
   Y__1721->SetBinError(10,0.002175284);
   Y__1721->SetBinError(11,0.002401682);
   Y__1721->SetBinError(12,0.002523512);
   Y__1721->SetBinError(13,0.002524633);
   Y__1721->SetBinError(14,0.002402305);
   Y__1721->SetBinError(15,0.002173471);
   Y__1721->SetBinError(16,0.001873089);
   Y__1721->SetBinError(17,0.0015333);
   Y__1721->SetBinError(18,0.001217461);
   Y__1721->SetBinError(19,0.0009328605);
   Y__1721->SetBinError(20,0.0006859648);
   Y__1721->SetBinError(21,0.0004215435);
   Y__1721->SetEntries(1548163);

   ci = TColor::GetColor("#ff0000");
   Y__1721->SetLineColor(ci);
   Y__1721->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1721->SetMarkerColor(ci);
   Y__1721->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1721->GetXaxis()->CenterTitle(true);
   Y__1721->GetXaxis()->SetLabelFont(42);
   Y__1721->GetXaxis()->SetTitleSize(0.04);
   Y__1721->GetXaxis()->SetTitleOffset(1.1);
   Y__1721->GetXaxis()->SetTitleFont(42);
   Y__1721->GetYaxis()->SetTitle("Decays");
   Y__1721->GetYaxis()->CenterTitle(true);
   Y__1721->GetYaxis()->SetNdivisions(4000510);
   Y__1721->GetYaxis()->SetLabelFont(42);
   Y__1721->GetYaxis()->SetTitleSize(0.04);
   Y__1721->GetYaxis()->SetTitleOffset(1.1);
   Y__1721->GetYaxis()->SetTitleFont(42);
   Y__1721->GetZaxis()->SetLabelFont(42);
   Y__1721->GetZaxis()->SetTitleOffset(1);
   Y__1721->GetZaxis()->SetTitleFont(42);
   Y__1721->Draw("AEsame");
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
   
   Double_t _fx3574[18] = {
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
   Double_t _fy3574[18] = {
   0.3339811,
   0.6301266,
   0.61019,
   0.8735133,
   0.7345116,
   0.8340732,
   0.9224767,
   1,
   0.9585017,
   0.9557697,
   0.8353252,
   0.8834004,
   0.9638693,
   0.7804107,
   0.7200558,
   0.4960838,
   0.560667,
   0.3374204};
   Double_t _felx3574[18] = {
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
   Double_t _fely3574[18] = {
   0.1443147,
   0.1252821,
   0.09069748,
   0.08363916,
   0.06098912,
   0.05342094,
   0.04839036,
   0.0456433,
   0.04252723,
   0.04244754,
   0.04169303,
   0.0473903,
   0.05743995,
   0.06309124,
   0.07625735,
   0.08234986,
   0.1187077,
   0.1458014};
   Double_t _fehx3574[18] = {
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
   Double_t _fehy3574[18] = {
   0.2261119,
   0.1530748,
   0.1052998,
   0.09206044,
   0.06627732,
   0.05695768,
   0.05099824,
   0.04777599,
   0.04445752,
   0.04437615,
   0.04382809,
   0.05000376,
   0.06096996,
   0.06841118,
   0.08479689,
   0.09730616,
   0.1469717,
   0.2284422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3574,_fy3574,_felx3574,_fehx3574,_fely3574,_fehy3574);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3574 = new TH1F("Graph_Graph3574","",100,-65,65);
   Graph_Graph3574->SetMinimum(0);
   Graph_Graph3574->SetMaximum(1.25);
   Graph_Graph3574->SetDirectory(0);
   Graph_Graph3574->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3574->SetLineColor(ci);
   Graph_Graph3574->GetXaxis()->SetRange(1,100);
   Graph_Graph3574->GetXaxis()->CenterTitle(true);
   Graph_Graph3574->GetXaxis()->SetLabelFont(42);
   Graph_Graph3574->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3574->GetXaxis()->SetTitleFont(42);
   Graph_Graph3574->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3574->GetYaxis()->CenterTitle(true);
   Graph_Graph3574->GetYaxis()->SetLabelFont(42);
   Graph_Graph3574->GetYaxis()->SetTitleFont(42);
   Graph_Graph3574->GetZaxis()->SetLabelFont(42);
   Graph_Graph3574->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3574->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3574);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.160372,510,"S");
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
