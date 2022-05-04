void S12_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-0.06620852,125,1.257962);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__1563 = new TH1D("S12_ThetaY_mI25_mI20__1563","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__1563->SetBinContent(314,0.2093023);
   S12_ThetaY_mI25_mI20__1563->SetBinContent(315,1);
   S12_ThetaY_mI25_mI20__1563->SetBinContent(316,0.627907);
   S12_ThetaY_mI25_mI20__1563->SetBinContent(317,0.7093023);
   S12_ThetaY_mI25_mI20__1563->SetBinContent(318,0.4418605);
   S12_ThetaY_mI25_mI20__1563->SetBinContent(319,0.2093023);
   S12_ThetaY_mI25_mI20__1563->SetBinError(314,0.04933303);
   S12_ThetaY_mI25_mI20__1563->SetBinError(315,0.1078328);
   S12_ThetaY_mI25_mI20__1563->SetBinError(316,0.08544732);
   S12_ThetaY_mI25_mI20__1563->SetBinError(317,0.09081686);
   S12_ThetaY_mI25_mI20__1563->SetBinError(318,0.07167923);
   S12_ThetaY_mI25_mI20__1563->SetBinError(319,0.04933303);
   S12_ThetaY_mI25_mI20__1563->SetMinimum(0);
   S12_ThetaY_mI25_mI20__1563->SetMaximum(1.125545);
   S12_ThetaY_mI25_mI20__1563->SetEntries(275);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1563->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__1563->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1563->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__1563->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__1563->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__1563->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1563->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1563->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1563->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__1563->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__1563->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1563->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1563->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1563->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1563->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1563->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1564 = new TH1D("ThetaY_mI25_mI20__1564","",630,-1575,1575);
   ThetaY_mI25_mI20__1564->SetBinContent(311,0.005686045);
   ThetaY_mI25_mI20__1564->SetBinContent(312,0.306515);
   ThetaY_mI25_mI20__1564->SetBinContent(313,0.726379);
   ThetaY_mI25_mI20__1564->SetBinContent(314,0.91269);
   ThetaY_mI25_mI20__1564->SetBinContent(315,1);
   ThetaY_mI25_mI20__1564->SetBinContent(316,1.023222);
   ThetaY_mI25_mI20__1564->SetBinContent(317,0.9249655);
   ThetaY_mI25_mI20__1564->SetBinContent(318,0.7244659);
   ThetaY_mI25_mI20__1564->SetBinContent(319,0.2991285);
   ThetaY_mI25_mI20__1564->SetBinContent(320,0.00611117);
   ThetaY_mI25_mI20__1564->SetBinError(311,0.0005496907);
   ThetaY_mI25_mI20__1564->SetBinError(312,0.004035889);
   ThetaY_mI25_mI20__1564->SetBinError(313,0.006212908);
   ThetaY_mI25_mI20__1564->SetBinError(314,0.006964259);
   ThetaY_mI25_mI20__1564->SetBinError(315,0.007289761);
   ThetaY_mI25_mI20__1564->SetBinError(316,0.007373918);
   ThetaY_mI25_mI20__1564->SetBinError(317,0.007010936);
   ThetaY_mI25_mI20__1564->SetBinError(318,0.006204721);
   ThetaY_mI25_mI20__1564->SetBinError(319,0.003986963);
   ThetaY_mI25_mI20__1564->SetBinError(320,0.0005698696);
   ThetaY_mI25_mI20__1564->SetEntries(111575);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1564->SetLineColor(ci);
   ThetaY_mI25_mI20__1564->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1564->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1564->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1564->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1564->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1564->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1564->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1564->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1564->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1564->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1564->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1564->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1564->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1564->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1564->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1564->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1564->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1564->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1564->Draw("AEsame");
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
   
   Double_t _fx3522[10] = {
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
   Double_t _fy3522[10] = {
   0,
   0,
   0,
   0.2293247,
   1,
   0.6136564,
   0.766842,
   0.609912,
   0.6997071,
   0};
   Double_t _felx3522[10] = {
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
   Double_t _fely3522[10] = {
   0,
   0,
   0,
   0.05357249,
   0.1078656,
   0.08336321,
   0.09808287,
   0.09863717,
   0.1636248,
   0};
   Double_t _fehx3522[10] = {
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
   Double_t _fehy3522[10] = {
   3.797447,
   0.06985186,
   0.02947314,
   0.06783703,
   0.1201855,
   0.09554224,
   0.1115152,
   0.116051,
   0.2072698,
   3.531157};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3522,_fy3522,_felx3522,_fehx3522,_fely3522,_fehy3522);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3522 = new TH1F("Graph_Graph3522","",100,-100,100);
   Graph_Graph3522->SetMinimum(0);
   Graph_Graph3522->SetMaximum(1.5);
   Graph_Graph3522->SetDirectory(0);
   Graph_Graph3522->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3522->SetLineColor(ci);
   Graph_Graph3522->GetXaxis()->SetRange(1,100);
   Graph_Graph3522->GetXaxis()->CenterTitle(true);
   Graph_Graph3522->GetXaxis()->SetLabelFont(42);
   Graph_Graph3522->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3522->GetXaxis()->SetTitleFont(42);
   Graph_Graph3522->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3522->GetYaxis()->CenterTitle(true);
   Graph_Graph3522->GetYaxis()->SetLabelFont(42);
   Graph_Graph3522->GetYaxis()->SetTitleFont(42);
   Graph_Graph3522->GetZaxis()->SetLabelFont(42);
   Graph_Graph3522->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3522->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3522);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.125545,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1565 = new TH2D("ThetaY_vs_Y_mI25_mI20__1565","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8094,107);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8120,5768);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8146,13669);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8172,17175);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8198,18818);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8224,19255);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8250,17406);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8276,13633);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8302,5629);
   ThetaY_vs_Y_mI25_mI20__1565->SetBinContent(8328,115);
   ThetaY_vs_Y_mI25_mI20__1565->SetEntries(111575);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1565->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1565->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1565->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1565->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1565->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1565->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1565->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1565->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1565->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1565->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1565->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1565->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1565->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1565->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1565->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1565->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-25_-20","Reco vertices","lpf");
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
