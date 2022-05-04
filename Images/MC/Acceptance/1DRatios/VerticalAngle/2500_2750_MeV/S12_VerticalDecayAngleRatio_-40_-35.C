void S12_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.06528863,125,1.240484);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__1725 = new TH1D("S12_ThetaY_mI40_mI35__1725","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__1725->SetBinContent(315,0.2307692);
   S12_ThetaY_mI40_mI35__1725->SetBinContent(316,1);
   S12_ThetaY_mI40_mI35__1725->SetBinContent(317,0.4615385);
   S12_ThetaY_mI40_mI35__1725->SetBinContent(318,0.2307692);
   S12_ThetaY_mI40_mI35__1725->SetBinError(315,0.1332347);
   S12_ThetaY_mI40_mI35__1725->SetBinError(316,0.2773501);
   S12_ThetaY_mI40_mI35__1725->SetBinError(317,0.1884223);
   S12_ThetaY_mI40_mI35__1725->SetBinError(318,0.1332347);
   S12_ThetaY_mI40_mI35__1725->SetMinimum(0);
   S12_ThetaY_mI40_mI35__1725->SetMaximum(1.109907);
   S12_ThetaY_mI40_mI35__1725->SetEntries(25);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1725->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__1725->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1725->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__1725->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__1725->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__1725->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1725->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1725->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1725->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__1725->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__1725->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1725->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1725->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1725->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1725->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1725->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1726 = new TH1D("ThetaY_mI40_mI35__1726","",630,-1575,1575);
   ThetaY_mI40_mI35__1726->SetBinContent(312,0.01704728);
   ThetaY_mI40_mI35__1726->SetBinContent(313,0.4342232);
   ThetaY_mI40_mI35__1726->SetBinContent(314,0.8613702);
   ThetaY_mI40_mI35__1726->SetBinContent(315,1.009006);
   ThetaY_mI40_mI35__1726->SetBinContent(316,1);
   ThetaY_mI40_mI35__1726->SetBinContent(317,0.8362818);
   ThetaY_mI40_mI35__1726->SetBinContent(318,0.4213573);
   ThetaY_mI40_mI35__1726->SetBinContent(319,0.02026375);
   ThetaY_mI40_mI35__1726->SetBinError(312,0.002341624);
   ThetaY_mI40_mI35__1726->SetBinError(313,0.01181806);
   ThetaY_mI40_mI35__1726->SetBinError(314,0.01664503);
   ThetaY_mI40_mI35__1726->SetBinError(315,0.01801509);
   ThetaY_mI40_mI35__1726->SetBinError(316,0.01793452);
   ThetaY_mI40_mI35__1726->SetBinError(317,0.01640083);
   ThetaY_mI40_mI35__1726->SetBinError(318,0.01164166);
   ThetaY_mI40_mI35__1726->SetBinError(319,0.002552993);
   ThetaY_mI40_mI35__1726->SetEntries(14300);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1726->SetLineColor(ci);
   ThetaY_mI40_mI35__1726->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1726->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1726->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1726->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1726->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1726->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1726->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1726->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1726->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1726->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1726->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1726->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1726->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1726->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1726->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1726->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1726->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1726->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1726->Draw("AEsame");
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
   
   Double_t _fx3576[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3576[8] = {
   0,
   0,
   0,
   0.2287094,
   1,
   0.5518935,
   0.5476806,
   0};
   Double_t _felx3576[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3576[8] = {
   0,
   0,
   0,
   0.1245154,
   0.274275,
   0.2191277,
   0.2983174,
   0};
   Double_t _fehx3576[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3576[8] = {
   8.453277,
   0.3263613,
   0.1644656,
   0.2226821,
   0.3623799,
   0.3302389,
   0.5339483,
   7.091805};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3576,_fy3576,_felx3576,_fehx3576,_fely3576,_fehy3576);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3576 = new TH1F("Graph_Graph3576","",100,-100,100);
   Graph_Graph3576->SetMinimum(0);
   Graph_Graph3576->SetMaximum(1.5);
   Graph_Graph3576->SetDirectory(0);
   Graph_Graph3576->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3576->SetLineColor(ci);
   Graph_Graph3576->GetXaxis()->SetRange(1,100);
   Graph_Graph3576->GetXaxis()->CenterTitle(true);
   Graph_Graph3576->GetXaxis()->SetLabelFont(42);
   Graph_Graph3576->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3576->GetXaxis()->SetTitleFont(42);
   Graph_Graph3576->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3576->GetYaxis()->CenterTitle(true);
   Graph_Graph3576->GetYaxis()->SetLabelFont(42);
   Graph_Graph3576->GetYaxis()->SetTitleFont(42);
   Graph_Graph3576->GetZaxis()->SetLabelFont(42);
   Graph_Graph3576->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3576->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3576);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.109907,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1727 = new TH2D("ThetaY_vs_Y_mI40_mI35__1727","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8117,53);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8143,1350);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8169,2678);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8195,3137);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8221,3109);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8247,2600);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8273,1310);
   ThetaY_vs_Y_mI40_mI35__1727->SetBinContent(8299,63);
   ThetaY_vs_Y_mI40_mI35__1727->SetEntries(14300);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1727->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1727->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1727->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1727->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1727->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1727->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1727->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1727->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1727->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1727->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1727->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1727->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1727->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1727->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1727->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1727->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-40_-35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-40_-35","Reco vertices","lpf");
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
