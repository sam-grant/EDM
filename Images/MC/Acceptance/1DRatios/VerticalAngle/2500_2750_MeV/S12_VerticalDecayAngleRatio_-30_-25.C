void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-3.014928,125,57.28363);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__1731 = new TH1D("S12_ThetaY_mI30_mI25__1731","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__1731->SetBinContent(315,15);
   S12_ThetaY_mI30_mI25__1731->SetBinContent(316,15);
   S12_ThetaY_mI30_mI25__1731->SetBinContent(317,14);
   S12_ThetaY_mI30_mI25__1731->SetBinContent(318,9.5);
   S12_ThetaY_mI30_mI25__1731->SetBinContent(319,1);
   S12_ThetaY_mI30_mI25__1731->SetBinError(315,2.738613);
   S12_ThetaY_mI30_mI25__1731->SetBinError(316,2.738613);
   S12_ThetaY_mI30_mI25__1731->SetBinError(317,2.645751);
   S12_ThetaY_mI30_mI25__1731->SetBinError(318,2.179449);
   S12_ThetaY_mI30_mI25__1731->SetBinError(319,0.7071068);
   S12_ThetaY_mI30_mI25__1731->SetMinimum(0);
   S12_ThetaY_mI30_mI25__1731->SetMaximum(51.25377);
   S12_ThetaY_mI30_mI25__1731->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1731->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__1731->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1731->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__1731->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__1731->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__1731->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1731->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1731->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1731->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__1731->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__1731->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1731->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1731->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1731->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1731->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1731->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1732 = new TH1D("ThetaY_mI30_mI25__1732","",630,-1575,1575);
   ThetaY_mI30_mI25__1732->SetBinContent(312,0.990566);
   ThetaY_mI30_mI25__1732->SetBinContent(313,19.45283);
   ThetaY_mI30_mI25__1732->SetBinContent(314,39.10849);
   ThetaY_mI30_mI25__1732->SetBinContent(315,46.59434);
   ThetaY_mI30_mI25__1732->SetBinContent(316,46.13208);
   ThetaY_mI30_mI25__1732->SetBinContent(317,39.20755);
   ThetaY_mI30_mI25__1732->SetBinContent(318,19.66509);
   ThetaY_mI30_mI25__1732->SetBinContent(319,1);
   ThetaY_mI30_mI25__1732->SetBinError(312,0.06835555);
   ThetaY_mI30_mI25__1732->SetBinError(313,0.3029169);
   ThetaY_mI30_mI25__1732->SetBinError(314,0.4295044);
   ThetaY_mI30_mI25__1732->SetBinError(315,0.4688119);
   ThetaY_mI30_mI25__1732->SetBinError(316,0.4664806);
   ThetaY_mI30_mI25__1732->SetBinError(317,0.430048);
   ThetaY_mI30_mI25__1732->SetBinError(318,0.3045651);
   ThetaY_mI30_mI25__1732->SetBinError(319,0.06868028);
   ThetaY_mI30_mI25__1732->SetEntries(44976);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1732->SetLineColor(ci);
   ThetaY_mI30_mI25__1732->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1732->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1732->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1732->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1732->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1732->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1732->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1732->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1732->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1732->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1732->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1732->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1732->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1732->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1732->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1732->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1732->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1732->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1732->Draw("AEsame");
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
   
   Double_t _fx3578[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3578[8] = {
   0,
   0,
   0,
   0.3219275,
   0.3251534,
   0.3570741,
   0.4830895,
   1};
   Double_t _felx3578[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3578[8] = {
   0,
   0,
   0,
   0.05853208,
   0.05911947,
   0.06718433,
   0.1100827,
   0.6478101};
   Double_t _fehx3578[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3578[8] = {
   0.9333629,
   0.04733071,
   0.02353998,
   0.07028893,
   0.07099457,
   0.08120339,
   0.1385988,
   1.333391};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3578,_fy3578,_felx3578,_fehx3578,_fely3578,_fehy3578);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3578 = new TH1F("Graph_Graph3578","",100,-100,100);
   Graph_Graph3578->SetMinimum(0);
   Graph_Graph3578->SetMaximum(1.5);
   Graph_Graph3578->SetDirectory(0);
   Graph_Graph3578->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3578->SetLineColor(ci);
   Graph_Graph3578->GetXaxis()->SetRange(1,100);
   Graph_Graph3578->GetXaxis()->CenterTitle(true);
   Graph_Graph3578->GetXaxis()->SetLabelFont(42);
   Graph_Graph3578->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3578->GetXaxis()->SetTitleFont(42);
   Graph_Graph3578->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3578->GetYaxis()->CenterTitle(true);
   Graph_Graph3578->GetYaxis()->SetLabelFont(42);
   Graph_Graph3578->GetYaxis()->SetTitleFont(42);
   Graph_Graph3578->GetZaxis()->SetLabelFont(42);
   Graph_Graph3578->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3578->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3578);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,51.25377,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1733 = new TH2D("ThetaY_vs_Y_mI30_mI25__1733","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8119,210);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8145,4124);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8171,8291);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8197,9878);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8223,9780);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8249,8312);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8275,4169);
   ThetaY_vs_Y_mI30_mI25__1733->SetBinContent(8301,212);
   ThetaY_vs_Y_mI30_mI25__1733->SetEntries(44976);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1733->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1733->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1733->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1733->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1733->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1733->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1733->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1733->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1733->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1733->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1733->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1733->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1733->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1733->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1733->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1733->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-30_-25","Reco vertices","lpf");
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
