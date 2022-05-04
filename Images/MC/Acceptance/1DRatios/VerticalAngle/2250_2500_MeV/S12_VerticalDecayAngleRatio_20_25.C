void S12_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2139943,125,4.065891);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__1590 = new TH1D("S12_ThetaY_20_25__1590","",630,-1575,1575);
   S12_ThetaY_20_25__1590->SetBinContent(312,1);
   S12_ThetaY_20_25__1590->SetBinContent(313,1.714286);
   S12_ThetaY_20_25__1590->SetBinContent(314,1.892857);
   S12_ThetaY_20_25__1590->SetBinContent(315,2.035714);
   S12_ThetaY_20_25__1590->SetBinContent(316,1.464286);
   S12_ThetaY_20_25__1590->SetBinContent(317,0.3214286);
   S12_ThetaY_20_25__1590->SetBinError(312,0.1889822);
   S12_ThetaY_20_25__1590->SetBinError(313,0.2474358);
   S12_ThetaY_20_25__1590->SetBinError(314,0.2600039);
   S12_ThetaY_20_25__1590->SetBinError(315,0.2696369);
   S12_ThetaY_20_25__1590->SetBinError(316,0.228683);
   S12_ThetaY_20_25__1590->SetBinError(317,0.1071429);
   S12_ThetaY_20_25__1590->SetMinimum(0);
   S12_ThetaY_20_25__1590->SetMaximum(3.637902);
   S12_ThetaY_20_25__1590->SetEntries(236);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1590->SetLineColor(ci);
   S12_ThetaY_20_25__1590->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1590->SetMarkerColor(ci);
   S12_ThetaY_20_25__1590->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__1590->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__1590->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1590->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1590->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1590->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__1590->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__1590->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1590->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1590->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1590->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1590->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1590->Draw("AE");
   
   TH1D *ThetaY_20_25__1591 = new TH1D("ThetaY_20_25__1591","",630,-1575,1575);
   ThetaY_20_25__1591->SetBinContent(311,0.02313446);
   ThetaY_20_25__1591->SetBinContent(312,1);
   ThetaY_20_25__1591->SetBinContent(313,2.359193);
   ThetaY_20_25__1591->SetBinContent(314,3.037572);
   ThetaY_20_25__1591->SetBinContent(315,3.298661);
   ThetaY_20_25__1591->SetBinContent(316,3.307184);
   ThetaY_20_25__1591->SetBinContent(317,2.999478);
   ThetaY_20_25__1591->SetBinContent(318,2.372587);
   ThetaY_20_25__1591->SetBinContent(319,0.969386);
   ThetaY_20_25__1591->SetBinContent(320,0.01774222);
   ThetaY_20_25__1591->SetBinError(311,0.002006012);
   ThetaY_20_25__1591->SetBinError(312,0.01318876);
   ThetaY_20_25__1591->SetBinError(313,0.02025749);
   ThetaY_20_25__1591->SetBinError(314,0.0229862);
   ThetaY_20_25__1591->SetBinError(315,0.0239537);
   ThetaY_20_25__1591->SetBinError(316,0.02398463);
   ThetaY_20_25__1591->SetBinError(317,0.02284161);
   ThetaY_20_25__1591->SetBinError(318,0.02031491);
   ThetaY_20_25__1591->SetBinError(319,0.01298531);
   ThetaY_20_25__1591->SetBinError(320,0.001756741);
   ThetaY_20_25__1591->SetEntries(111444);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1591->SetLineColor(ci);
   ThetaY_20_25__1591->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1591->SetMarkerColor(ci);
   ThetaY_20_25__1591->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1591->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1591->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1591->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1591->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1591->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1591->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1591->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1591->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1591->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1591->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1591->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1591->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1591->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1591->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1591->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1591->Draw("AEsame");
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
   
   Double_t _fx3531[10] = {
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
   Double_t _fy3531[10] = {
   0,
   1,
   0.7266408,
   0.6231481,
   0.6171336,
   0.4427591,
   0.1071615,
   0,
   0,
   0};
   Double_t _felx3531[10] = {
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
   Double_t _fely3531[10] = {
   0,
   0.1882884,
   0.1046959,
   0.08545208,
   0.08162115,
   0.06893662,
   0.03505554,
   0,
   0,
   0};
   Double_t _fehx3531[10] = {
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
   Double_t _fehy3531[10] = {
   2.861876,
   0.2276221,
   0.1209975,
   0.09806385,
   0.09320733,
   0.08061111,
   0.04895812,
   0.02771457,
   0.06783844,
   3.73954};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3531,_fy3531,_felx3531,_fehx3531,_fely3531,_fehy3531);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3531 = new TH1F("Graph_Graph3531","",100,-100,100);
   Graph_Graph3531->SetMinimum(0);
   Graph_Graph3531->SetMaximum(1.5);
   Graph_Graph3531->SetDirectory(0);
   Graph_Graph3531->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3531->SetLineColor(ci);
   Graph_Graph3531->GetXaxis()->SetRange(1,100);
   Graph_Graph3531->GetXaxis()->CenterTitle(true);
   Graph_Graph3531->GetXaxis()->SetLabelFont(42);
   Graph_Graph3531->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3531->GetXaxis()->SetTitleFont(42);
   Graph_Graph3531->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3531->GetYaxis()->CenterTitle(true);
   Graph_Graph3531->GetYaxis()->SetLabelFont(42);
   Graph_Graph3531->GetYaxis()->SetTitleFont(42);
   Graph_Graph3531->GetZaxis()->SetLabelFont(42);
   Graph_Graph3531->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3531->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3531);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.637902,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1592 = new TH2D("ThetaY_vs_Y_20_25__1592","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8103,133);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8129,5749);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8155,13563);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8181,17463);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8207,18964);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8233,19013);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8259,17244);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8285,13640);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8311,5573);
   ThetaY_vs_Y_20_25__1592->SetBinContent(8337,102);
   ThetaY_vs_Y_20_25__1592->SetEntries(111444);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1592->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1592->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1592->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1592->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1592->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1592->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1592->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1592->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1592->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1592->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1592->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1592->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1592->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1592->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1592->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1592->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_20_25","Reco vertices","lpf");
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
