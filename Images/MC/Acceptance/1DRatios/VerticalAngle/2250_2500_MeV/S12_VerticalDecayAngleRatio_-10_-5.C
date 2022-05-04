void S12_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:06 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07018528,125,1.33352);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__1572 = new TH1D("S12_ThetaY_mI10_mI5__1572","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(313,0.2312139);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(314,0.8265896);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(315,0.9768786);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(316,0.8959538);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(317,1);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(318,0.5895954);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(319,0.1387283);
   S12_ThetaY_mI10_mI5__1572->SetBinContent(320,0.005780347);
   S12_ThetaY_mI10_mI5__1572->SetBinError(313,0.03655812);
   S12_ThetaY_mI10_mI5__1572->SetBinError(314,0.06912289);
   S12_ThetaY_mI10_mI5__1572->SetBinError(315,0.07514451);
   S12_ThetaY_mI10_mI5__1572->SetBinError(316,0.07196474);
   S12_ThetaY_mI10_mI5__1572->SetBinError(317,0.07602859);
   S12_ThetaY_mI10_mI5__1572->SetBinError(318,0.05837864);
   S12_ThetaY_mI10_mI5__1572->SetBinError(319,0.0283178);
   S12_ThetaY_mI10_mI5__1572->SetBinError(320,0.005780347);
   S12_ThetaY_mI10_mI5__1572->SetMinimum(0);
   S12_ThetaY_mI10_mI5__1572->SetMaximum(1.19315);
   S12_ThetaY_mI10_mI5__1572->SetEntries(807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1572->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__1572->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1572->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__1572->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__1572->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__1572->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1572->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1572->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1572->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__1572->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__1572->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1572->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1572->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1572->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1572->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1572->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1573 = new TH1D("ThetaY_mI10_mI5__1573","",630,-1575,1575);
   ThetaY_mI10_mI5__1573->SetBinContent(311,0.006531846);
   ThetaY_mI10_mI5__1573->SetBinContent(312,0.325709);
   ThetaY_mI10_mI5__1573->SetBinContent(313,0.7763133);
   ThetaY_mI10_mI5__1573->SetBinContent(314,0.9820781);
   ThetaY_mI10_mI5__1573->SetBinContent(315,1.084356);
   ThetaY_mI10_mI5__1573->SetBinContent(316,1.084682);
   ThetaY_mI10_mI5__1573->SetBinContent(317,1);
   ThetaY_mI10_mI5__1573->SetBinContent(318,0.7667829);
   ThetaY_mI10_mI5__1573->SetBinContent(319,0.3266853);
   ThetaY_mI10_mI5__1573->SetBinContent(320,0.007182706);
   ThetaY_mI10_mI5__1573->SetBinError(311,0.0003896572);
   ThetaY_mI10_mI5__1573->SetBinError(312,0.002751564);
   ThetaY_mI10_mI5__1573->SetBinError(313,0.004247988);
   ThetaY_mI10_mI5__1573->SetBinError(314,0.004777908);
   ThetaY_mI10_mI5__1573->SetBinError(315,0.005020544);
   ThetaY_mI10_mI5__1573->SetBinError(316,0.005021297);
   ThetaY_mI10_mI5__1573->SetBinError(317,0.004821307);
   ThetaY_mI10_mI5__1573->SetBinError(318,0.004221833);
   ThetaY_mI10_mI5__1573->SetBinError(319,0.002755685);
   ThetaY_mI10_mI5__1573->SetBinError(320,0.0004086099);
   ThetaY_mI10_mI5__1573->SetEntries(273621);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1573->SetLineColor(ci);
   ThetaY_mI10_mI5__1573->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1573->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1573->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1573->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1573->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1573->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1573->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1573->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1573->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1573->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1573->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1573->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1573->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1573->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1573->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1573->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1573->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1573->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1573->Draw("AEsame");
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
   
   Double_t _fx3525[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3525[10] = {
   0,
   0,
   0.2978358,
   0.841674,
   0.9008836,
   0.8260063,
   1,
   0.7689209,
   0.4246544,
   0.804759};
   Double_t _felx3525[10] = {
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
   Double_t _fely3525[10] = {
   0,
   0,
   0.04692165,
   0.07042003,
   0.06935472,
   0.0663841,
   0.07610679,
   0.07612584,
   0.08614473,
   0.6661437};
   Double_t _fehx3525[10] = {
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
   Double_t _fehy3525[10] = {
   1.634558,
   0.0326747,
   0.05496926,
   0.07657536,
   0.07491277,
   0.07194786,
   0.0821337,
   0.08406579,
   0.105691,
   1.860464};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3525,_fy3525,_felx3525,_fehx3525,_fely3525,_fehy3525);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3525 = new TH1F("Graph_Graph3525","",100,-100,100);
   Graph_Graph3525->SetMinimum(0);
   Graph_Graph3525->SetMaximum(1.5);
   Graph_Graph3525->SetDirectory(0);
   Graph_Graph3525->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3525->SetLineColor(ci);
   Graph_Graph3525->GetXaxis()->SetRange(1,100);
   Graph_Graph3525->GetXaxis()->CenterTitle(true);
   Graph_Graph3525->GetXaxis()->SetLabelFont(42);
   Graph_Graph3525->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3525->GetXaxis()->SetTitleFont(42);
   Graph_Graph3525->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3525->GetYaxis()->CenterTitle(true);
   Graph_Graph3525->GetYaxis()->SetLabelFont(42);
   Graph_Graph3525->GetYaxis()->SetTitleFont(42);
   Graph_Graph3525->GetZaxis()->SetLabelFont(42);
   Graph_Graph3525->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3525->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3525);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.19315,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1574 = new TH2D("ThetaY_vs_Y_mI10_mI5__1574","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8097,281);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8123,14012);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8149,33397);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8175,42249);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8201,46649);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8227,46663);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8253,43020);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8279,32987);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8305,14054);
   ThetaY_vs_Y_mI10_mI5__1574->SetBinContent(8331,309);
   ThetaY_vs_Y_mI10_mI5__1574->SetEntries(273621);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1574->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1574->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1574->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1574->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1574->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1574->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1574->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1574->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1574->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1574->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1574->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1574->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1574->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1574->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1574->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1574->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
