void S12_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06753707,125,1.283204);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__1383 = new TH1D("S12_ThetaY_mI40_mI35__1383","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__1383->SetBinContent(315,0.1818182);
   S12_ThetaY_mI40_mI35__1383->SetBinContent(316,1);
   S12_ThetaY_mI40_mI35__1383->SetBinContent(317,1);
   S12_ThetaY_mI40_mI35__1383->SetBinContent(318,0.8181818);
   S12_ThetaY_mI40_mI35__1383->SetBinContent(319,0.4545455);
   S12_ThetaY_mI40_mI35__1383->SetBinContent(320,0.1363636);
   S12_ThetaY_mI40_mI35__1383->SetBinError(315,0.09090909);
   S12_ThetaY_mI40_mI35__1383->SetBinError(316,0.2132007);
   S12_ThetaY_mI40_mI35__1383->SetBinError(317,0.2132007);
   S12_ThetaY_mI40_mI35__1383->SetBinError(318,0.1928473);
   S12_ThetaY_mI40_mI35__1383->SetBinError(319,0.1437399);
   S12_ThetaY_mI40_mI35__1383->SetBinError(320,0.07872958);
   S12_ThetaY_mI40_mI35__1383->SetMinimum(0);
   S12_ThetaY_mI40_mI35__1383->SetMaximum(1.14813);
   S12_ThetaY_mI40_mI35__1383->SetEntries(79);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1383->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__1383->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1383->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__1383->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__1383->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__1383->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1383->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1383->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1383->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__1383->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__1383->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1383->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1383->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1383->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1383->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1383->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1384 = new TH1D("ThetaY_mI40_mI35__1384","",630,-1575,1575);
   ThetaY_mI40_mI35__1384->SetBinContent(310,0.000488878);
   ThetaY_mI40_mI35__1384->SetBinContent(311,0.2107064);
   ThetaY_mI40_mI35__1384->SetBinContent(312,0.6167196);
   ThetaY_mI40_mI35__1384->SetBinContent(313,0.8931802);
   ThetaY_mI40_mI35__1384->SetBinContent(314,0.9931557);
   ThetaY_mI40_mI35__1384->SetBinContent(315,1.043755);
   ThetaY_mI40_mI35__1384->SetBinContent(316,1.038377);
   ThetaY_mI40_mI35__1384->SetBinContent(317,1);
   ThetaY_mI40_mI35__1384->SetBinContent(318,0.8638475);
   ThetaY_mI40_mI35__1384->SetBinContent(319,0.6194085);
   ThetaY_mI40_mI35__1384->SetBinContent(320,0.1923735);
   ThetaY_mI40_mI35__1384->SetBinContent(321,0.000977756);
   ThetaY_mI40_mI35__1384->SetBinError(310,0.000345689);
   ThetaY_mI40_mI35__1384->SetBinError(311,0.007176689);
   ThetaY_mI40_mI35__1384->SetBinError(312,0.01227804);
   ThetaY_mI40_mI35__1384->SetBinError(313,0.01477593);
   ThetaY_mI40_mI35__1384->SetBinError(314,0.01558095);
   ThetaY_mI40_mI35__1384->SetBinError(315,0.01597293);
   ThetaY_mI40_mI35__1384->SetBinError(316,0.01593172);
   ThetaY_mI40_mI35__1384->SetBinError(317,0.01563455);
   ThetaY_mI40_mI35__1384->SetBinError(318,0.01453128);
   ThetaY_mI40_mI35__1384->SetBinError(319,0.01230478);
   ThetaY_mI40_mI35__1384->SetBinError(320,0.006857375);
   ThetaY_mI40_mI35__1384->SetBinError(321,0.000488878);
   ThetaY_mI40_mI35__1384->SetEntries(30572);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1384->SetLineColor(ci);
   ThetaY_mI40_mI35__1384->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1384->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1384->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1384->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1384->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1384->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1384->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1384->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1384->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1384->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1384->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1384->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1384->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1384->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1384->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1384->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1384->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1384->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1384->Draw("AEsame");
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
   
   Double_t _fx3462[12] = {
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
   Double_t _fy3462[12] = {
   0,
   0,
   0,
   0,
   0,
   0.1741963,
   0.9630414,
   1,
   0.9471369,
   0.733838,
   0.7088483,
   0};
   Double_t _felx3462[12] = {
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
   Double_t _fely3462[12] = {
   0,
   0,
   0,
   0,
   0,
   0.08339868,
   0.2042536,
   0.2121123,
   0.2216841,
   0.2285372,
   0.3863193,
   0};
   Double_t _fehx3462[12] = {
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
   Double_t _fehy3462[12] = {
   280.8978,
   0.3975779,
   0.1357397,
   0.09371445,
   0.08427859,
   0.1378505,
   0.2530251,
   0.2627682,
   0.2809078,
   0.3140062,
   0.6921109,
   108.6865};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3462,_fy3462,_felx3462,_fehx3462,_fely3462,_fehy3462);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3462 = new TH1F("Graph_Graph3462","",100,-100,100);
   Graph_Graph3462->SetMinimum(0);
   Graph_Graph3462->SetMaximum(1.5);
   Graph_Graph3462->SetDirectory(0);
   Graph_Graph3462->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3462->SetLineColor(ci);
   Graph_Graph3462->GetXaxis()->SetRange(1,100);
   Graph_Graph3462->GetXaxis()->CenterTitle(true);
   Graph_Graph3462->GetXaxis()->SetLabelFont(42);
   Graph_Graph3462->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3462->GetXaxis()->SetTitleFont(42);
   Graph_Graph3462->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3462->GetYaxis()->CenterTitle(true);
   Graph_Graph3462->GetYaxis()->SetLabelFont(42);
   Graph_Graph3462->GetYaxis()->SetTitleFont(42);
   Graph_Graph3462->GetZaxis()->SetLabelFont(42);
   Graph_Graph3462->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3462->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3462);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.14813,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1385 = new TH2D("ThetaY_vs_Y_mI40_mI35__1385","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8065,2);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8091,862);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8117,2523);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8143,3654);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8169,4063);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8195,4270);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8221,4248);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8247,4091);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8273,3534);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8299,2534);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8325,787);
   ThetaY_vs_Y_mI40_mI35__1385->SetBinContent(8351,4);
   ThetaY_vs_Y_mI40_mI35__1385->SetEntries(30572);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1385->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1385->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1385->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1385->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1385->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1385->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1385->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1385->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1385->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1385->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1385->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1385->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1385->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1385->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1385->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1385->Draw("COL");
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
