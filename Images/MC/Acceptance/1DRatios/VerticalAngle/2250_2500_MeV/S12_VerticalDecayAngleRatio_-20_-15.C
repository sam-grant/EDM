void S12_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-10.3778,125,197.1782);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__1566 = new TH1D("S12_ThetaY_mI20_mI15__1566","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(313,1);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(314,45);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(315,93);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(316,88);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(317,89);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(318,73);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(319,15);
   S12_ThetaY_mI20_mI15__1566->SetBinContent(320,1);
   S12_ThetaY_mI20_mI15__1566->SetBinError(313,1);
   S12_ThetaY_mI20_mI15__1566->SetBinError(314,6.708204);
   S12_ThetaY_mI20_mI15__1566->SetBinError(315,9.643651);
   S12_ThetaY_mI20_mI15__1566->SetBinError(316,9.380832);
   S12_ThetaY_mI20_mI15__1566->SetBinError(317,9.433981);
   S12_ThetaY_mI20_mI15__1566->SetBinError(318,8.544004);
   S12_ThetaY_mI20_mI15__1566->SetBinError(319,3.872983);
   S12_ThetaY_mI20_mI15__1566->SetBinError(320,1);
   S12_ThetaY_mI20_mI15__1566->SetMinimum(0);
   S12_ThetaY_mI20_mI15__1566->SetMaximum(176.4226);
   S12_ThetaY_mI20_mI15__1566->SetEntries(405);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1566->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__1566->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1566->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__1566->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__1566->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__1566->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1566->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1566->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1566->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__1566->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__1566->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1566->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1566->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1566->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1566->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1566->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1567 = new TH1D("ThetaY_mI20_mI15__1567","",630,-1575,1575);
   ThetaY_mI20_mI15__1567->SetBinContent(311,1.090395);
   ThetaY_mI20_mI15__1567->SetBinContent(312,47.87571);
   ThetaY_mI20_mI15__1567->SetBinContent(313,113.9492);
   ThetaY_mI20_mI15__1567->SetBinContent(314,146.0791);
   ThetaY_mI20_mI15__1567->SetBinContent(315,159.113);
   ThetaY_mI20_mI15__1567->SetBinContent(316,160.3842);
   ThetaY_mI20_mI15__1567->SetBinContent(317,146.1243);
   ThetaY_mI20_mI15__1567->SetBinContent(318,114.4124);
   ThetaY_mI20_mI15__1567->SetBinContent(319,48.38418);
   ThetaY_mI20_mI15__1567->SetBinContent(320,1);
   ThetaY_mI20_mI15__1567->SetBinError(311,0.07848838);
   ThetaY_mI20_mI15__1567->SetBinError(312,0.520081);
   ThetaY_mI20_mI15__1567->SetBinError(313,0.8023593);
   ThetaY_mI20_mI15__1567->SetBinError(314,0.9084633);
   ThetaY_mI20_mI15__1567->SetBinError(315,0.9481263);
   ThetaY_mI20_mI15__1567->SetBinError(316,0.9519061);
   ThetaY_mI20_mI15__1567->SetBinError(317,0.9086039);
   ThetaY_mI20_mI15__1567->SetBinError(318,0.8039887);
   ThetaY_mI20_mI15__1567->SetBinError(319,0.5228355);
   ThetaY_mI20_mI15__1567->SetBinError(320,0.0751646);
   ThetaY_mI20_mI15__1567->SetEntries(166099);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1567->SetLineColor(ci);
   ThetaY_mI20_mI15__1567->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1567->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1567->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1567->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1567->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1567->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1567->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1567->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1567->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1567->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1567->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1567->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1567->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1567->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1567->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1567->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1567->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1567->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1567->Draw("AEsame");
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
   
   Double_t _fx3523[10] = {
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
   Double_t _fy3523[10] = {
   0,
   0,
   0.008775844,
   0.3080523,
   0.5844903,
   0.5486825,
   0.6090705,
   0.6380426,
   0.3100187,
   1};
   Double_t _felx3523[10] = {
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
   Double_t _fely3523[10] = {
   0,
   0,
   0.007259853,
   0.04578937,
   0.06059844,
   0.05846784,
   0.06454941,
   0.07463818,
   0.07921035,
   0.8281334};
   Double_t _fehx3523[10] = {
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
   Double_t _fehy3523[10] = {
   1.696477,
   0.03845837,
   0.02018194,
   0.05316173,
   0.06723452,
   0.06505902,
   0.07178451,
   0.08392944,
   0.1026062,
   2.321031};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3523,_fy3523,_felx3523,_fehx3523,_fely3523,_fehy3523);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3523 = new TH1F("Graph_Graph3523","",100,-100,100);
   Graph_Graph3523->SetMinimum(0);
   Graph_Graph3523->SetMaximum(1.5);
   Graph_Graph3523->SetDirectory(0);
   Graph_Graph3523->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3523->SetLineColor(ci);
   Graph_Graph3523->GetXaxis()->SetRange(1,100);
   Graph_Graph3523->GetXaxis()->CenterTitle(true);
   Graph_Graph3523->GetXaxis()->SetLabelFont(42);
   Graph_Graph3523->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3523->GetXaxis()->SetTitleFont(42);
   Graph_Graph3523->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3523->GetYaxis()->CenterTitle(true);
   Graph_Graph3523->GetYaxis()->SetLabelFont(42);
   Graph_Graph3523->GetYaxis()->SetTitleFont(42);
   Graph_Graph3523->GetZaxis()->SetLabelFont(42);
   Graph_Graph3523->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3523->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3523);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,176.4226,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1568 = new TH2D("ThetaY_vs_Y_mI20_mI15__1568","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8095,193);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8121,8474);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8147,20169);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8173,25856);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8199,28163);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8225,28388);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8251,25864);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8277,20251);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8303,8564);
   ThetaY_vs_Y_mI20_mI15__1568->SetBinContent(8329,177);
   ThetaY_vs_Y_mI20_mI15__1568->SetEntries(166099);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1568->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1568->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1568->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1568->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1568->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1568->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1568->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1568->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1568->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1568->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1568->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1568->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1568->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1568->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1568->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1568->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-20_-15","Reco vertices","lpf");
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
