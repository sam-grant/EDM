void S12_VerticalDecayAngleRatio_20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:10 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06585466,125,1.251238);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__1761 = new TH1D("S12_ThetaY_20_25__1761","",630,-1575,1575);
   S12_ThetaY_20_25__1761->SetBinContent(313,0.3518519);
   S12_ThetaY_20_25__1761->SetBinContent(314,0.6851852);
   S12_ThetaY_20_25__1761->SetBinContent(315,1);
   S12_ThetaY_20_25__1761->SetBinContent(316,0.7777778);
   S12_ThetaY_20_25__1761->SetBinContent(317,0.01851852);
   S12_ThetaY_20_25__1761->SetBinError(313,0.08072035);
   S12_ThetaY_20_25__1761->SetBinError(314,0.1126438);
   S12_ThetaY_20_25__1761->SetBinError(315,0.1360828);
   S12_ThetaY_20_25__1761->SetBinError(316,0.1200137);
   S12_ThetaY_20_25__1761->SetBinError(317,0.01851852);
   S12_ThetaY_20_25__1761->SetMinimum(0);
   S12_ThetaY_20_25__1761->SetMaximum(1.119529);
   S12_ThetaY_20_25__1761->SetEntries(153);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1761->SetLineColor(ci);
   S12_ThetaY_20_25__1761->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1761->SetMarkerColor(ci);
   S12_ThetaY_20_25__1761->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__1761->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__1761->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1761->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1761->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1761->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__1761->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__1761->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1761->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1761->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1761->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1761->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1761->Draw("AE");
   
   TH1D *ThetaY_20_25__1762 = new TH1D("ThetaY_20_25__1762","",630,-1575,1575);
   ThetaY_20_25__1762->SetBinContent(312,0.02055017);
   ThetaY_20_25__1762->SetBinContent(313,0.4279118);
   ThetaY_20_25__1762->SetBinContent(314,0.8479547);
   ThetaY_20_25__1762->SetBinContent(315,1);
   ThetaY_20_25__1762->SetBinContent(316,1.017754);
   ThetaY_20_25__1762->SetBinContent(317,0.8417116);
   ThetaY_20_25__1762->SetBinContent(318,0.4179619);
   ThetaY_20_25__1762->SetBinContent(319,0.02152566);
   ThetaY_20_25__1762->SetBinError(312,0.001156038);
   ThetaY_20_25__1762->SetBinError(313,0.005275229);
   ThetaY_20_25__1762->SetBinError(314,0.007425924);
   ThetaY_20_25__1762->SetBinError(315,0.008064254);
   ThetaY_20_25__1762->SetBinError(316,0.008135524);
   ThetaY_20_25__1762->SetBinError(317,0.007398537);
   ThetaY_20_25__1762->SetBinError(318,0.005213538);
   ThetaY_20_25__1762->SetBinError(319,0.001183157);
   ThetaY_20_25__1762->SetEntries(70663);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1762->SetLineColor(ci);
   ThetaY_20_25__1762->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1762->SetMarkerColor(ci);
   ThetaY_20_25__1762->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1762->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1762->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1762->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1762->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1762->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1762->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1762->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1762->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1762->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1762->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1762->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1762->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1762->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1762->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1762->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1762->Draw("AEsame");
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
   
   Double_t _fx3588[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3588[8] = {
   0,
   0.8222532,
   0.8080445,
   1,
   0.7642102,
   0.02200102,
   0,
   0};
   Double_t _felx3588[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3588[8] = {
   0,
   0.1872205,
   0.1324212,
   0.1358938,
   0.1176027,
   0.01820053,
   0,
   0};
   Double_t _fehx3588[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3588[8] = {
   1.663855,
   0.2356528,
   0.1561411,
   0.1557568,
   0.1372684,
   0.05059839,
   0.08158131,
   1.588244};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3588,_fy3588,_felx3588,_fehx3588,_fely3588,_fehy3588);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3588 = new TH1F("Graph_Graph3588","",100,-100,100);
   Graph_Graph3588->SetMinimum(0);
   Graph_Graph3588->SetMaximum(1.5);
   Graph_Graph3588->SetDirectory(0);
   Graph_Graph3588->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3588->SetLineColor(ci);
   Graph_Graph3588->GetXaxis()->SetRange(1,100);
   Graph_Graph3588->GetXaxis()->CenterTitle(true);
   Graph_Graph3588->GetXaxis()->SetLabelFont(42);
   Graph_Graph3588->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3588->GetXaxis()->SetTitleFont(42);
   Graph_Graph3588->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3588->GetYaxis()->CenterTitle(true);
   Graph_Graph3588->GetYaxis()->SetLabelFont(42);
   Graph_Graph3588->GetYaxis()->SetTitleFont(42);
   Graph_Graph3588->GetZaxis()->SetLabelFont(42);
   Graph_Graph3588->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3588->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3588);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.119529,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1763 = new TH2D("ThetaY_vs_Y_20_25__1763","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8129,316);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8155,6580);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8181,13039);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8207,15377);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8233,15650);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8259,12943);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8285,6427);
   ThetaY_vs_Y_20_25__1763->SetBinContent(8311,331);
   ThetaY_vs_Y_20_25__1763->SetEntries(70663);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1763->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1763->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1763->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1763->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1763->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1763->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1763->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1763->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1763->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1763->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1763->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1763->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1763->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1763->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1763->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1763->Draw("COL");
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
