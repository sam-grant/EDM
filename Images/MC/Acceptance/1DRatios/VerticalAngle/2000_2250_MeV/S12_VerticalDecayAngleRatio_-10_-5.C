void S12_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06498805,125,1.234773);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__1401 = new TH1D("S12_ThetaY_mI10_mI5__1401","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(312,0.03389831);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(313,0.5847458);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(314,0.8389831);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(315,0.9110169);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(316,1);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(317,0.8601695);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(318,0.7372881);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(319,0.3898305);
   S12_ThetaY_mI10_mI5__1401->SetBinContent(320,0.04661017);
   S12_ThetaY_mI10_mI5__1401->SetBinError(312,0.01198486);
   S12_ThetaY_mI10_mI5__1401->SetBinError(313,0.04977686);
   S12_ThetaY_mI10_mI5__1401->SetBinError(314,0.05962393);
   S12_ThetaY_mI10_mI5__1401->SetBinError(315,0.06213084);
   S12_ThetaY_mI10_mI5__1401->SetBinError(316,0.06509446);
   S12_ThetaY_mI10_mI5__1401->SetBinError(317,0.06037206);
   S12_ThetaY_mI10_mI5__1401->SetBinError(318,0.05589367);
   S12_ThetaY_mI10_mI5__1401->SetBinError(319,0.04064264);
   S12_ThetaY_mI10_mI5__1401->SetBinError(320,0.01405349);
   S12_ThetaY_mI10_mI5__1401->SetMinimum(0);
   S12_ThetaY_mI10_mI5__1401->SetMaximum(1.104797);
   S12_ThetaY_mI10_mI5__1401->SetEntries(1275);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1401->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__1401->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1401->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__1401->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__1401->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__1401->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1401->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1401->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1401->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__1401->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__1401->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1401->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1401->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1401->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1401->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1401->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1402 = new TH1D("ThetaY_mI10_mI5__1402","",630,-1575,1575);
   ThetaY_mI10_mI5__1402->SetBinContent(310,0.001479205);
   ThetaY_mI10_mI5__1402->SetBinContent(311,0.2031313);
   ThetaY_mI10_mI5__1402->SetBinContent(312,0.6126981);
   ThetaY_mI10_mI5__1402->SetBinContent(313,0.8277783);
   ThetaY_mI10_mI5__1402->SetBinContent(314,0.9462684);
   ThetaY_mI10_mI5__1402->SetBinContent(315,1.004361);
   ThetaY_mI10_mI5__1402->SetBinContent(316,1);
   ThetaY_mI10_mI5__1402->SetBinContent(317,0.9495149);
   ThetaY_mI10_mI5__1402->SetBinContent(318,0.8395159);
   ThetaY_mI10_mI5__1402->SetBinContent(319,0.6074152);
   ThetaY_mI10_mI5__1402->SetBinContent(320,0.2052445);
   ThetaY_mI10_mI5__1402->SetBinContent(321,0.001652099);
   ThetaY_mI10_mI5__1402->SetBinError(310,0.000168571);
   ThetaY_mI10_mI5__1402->SetBinError(311,0.00197541);
   ThetaY_mI10_mI5__1402->SetBinError(312,0.003430773);
   ThetaY_mI10_mI5__1402->SetBinError(313,0.00398773);
   ThetaY_mI10_mI5__1402->SetBinError(314,0.004263595);
   ThetaY_mI10_mI5__1402->SetBinError(315,0.004392519);
   ThetaY_mI10_mI5__1402->SetBinError(316,0.004382973);
   ThetaY_mI10_mI5__1402->SetBinError(317,0.004270903);
   ThetaY_mI10_mI5__1402->SetBinError(318,0.004015903);
   ThetaY_mI10_mI5__1402->SetBinError(319,0.003415951);
   ThetaY_mI10_mI5__1402->SetBinError(320,0.001985658);
   ThetaY_mI10_mI5__1402->SetBinError(321,0.0001781504);
   ThetaY_mI10_mI5__1402->SetEntries(374747);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1402->SetLineColor(ci);
   ThetaY_mI10_mI5__1402->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1402->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1402->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1402->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1402->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1402->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1402->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1402->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1402->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1402->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1402->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1402->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1402->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1402->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1402->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1402->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1402->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1402->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1402->Draw("AEsame");
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
   
   Double_t _fx3468[12] = {
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
   27.5};
   Double_t _fy3468[12] = {
   0,
   0,
   0.05532628,
   0.7064038,
   0.8866227,
   0.9070615,
   1,
   0.9059041,
   0.8782301,
   0.6417859,
   0.2270959,
   0};
   Double_t _felx3468[12] = {
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
   Double_t _fely3468[12] = {
   0,
   0,
   0.0191477,
   0.06015559,
   0.0630821,
   0.06193936,
   0.06519502,
   0.06365933,
   0.066646,
   0.06688506,
   0.06745001,
   0};
   Double_t _fehx3468[12] = {
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
   Double_t _fehy3468[12] = {
   5.33729,
   0.03840678,
   0.02728886,
   0.06551167,
   0.06773968,
   0.06632183,
   0.0695919,
   0.06829942,
   0.0719078,
   0.07424959,
   0.0912452,
   4.772739};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3468,_fy3468,_felx3468,_fehx3468,_fely3468,_fehy3468);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3468 = new TH1F("Graph_Graph3468","",100,-100,100);
   Graph_Graph3468->SetMinimum(0);
   Graph_Graph3468->SetMaximum(1.5);
   Graph_Graph3468->SetDirectory(0);
   Graph_Graph3468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3468->SetLineColor(ci);
   Graph_Graph3468->GetXaxis()->SetRange(1,100);
   Graph_Graph3468->GetXaxis()->CenterTitle(true);
   Graph_Graph3468->GetXaxis()->SetLabelFont(42);
   Graph_Graph3468->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3468->GetXaxis()->SetTitleFont(42);
   Graph_Graph3468->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3468->GetYaxis()->CenterTitle(true);
   Graph_Graph3468->GetYaxis()->SetLabelFont(42);
   Graph_Graph3468->GetYaxis()->SetTitleFont(42);
   Graph_Graph3468->GetZaxis()->SetLabelFont(42);
   Graph_Graph3468->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3468->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3468);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.104797,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1403 = new TH2D("ThetaY_vs_Y_mI10_mI5__1403","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8071,77);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8097,10574);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8123,31894);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8149,43090);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8175,49258);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8201,52282);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8227,52055);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8253,49427);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8279,43701);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8305,31619);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8331,10684);
   ThetaY_vs_Y_mI10_mI5__1403->SetBinContent(8357,86);
   ThetaY_vs_Y_mI10_mI5__1403->SetEntries(374747);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1403->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1403->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1403->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1403->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1403->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1403->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1403->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1403->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1403->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1403->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1403->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1403->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1403->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1403->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1403->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1403->Draw("COL");
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
