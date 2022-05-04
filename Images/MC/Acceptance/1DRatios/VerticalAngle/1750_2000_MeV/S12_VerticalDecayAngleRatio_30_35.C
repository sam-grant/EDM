void S12_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0652462,125,1.239678);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_30_35__1254 = new TH1D("S12_ThetaY_30_35__1254","",630,-1575,1575);
   S12_ThetaY_30_35__1254->SetBinContent(310,0.122449);
   S12_ThetaY_30_35__1254->SetBinContent(311,0.4285714);
   S12_ThetaY_30_35__1254->SetBinContent(312,0.7346939);
   S12_ThetaY_30_35__1254->SetBinContent(313,0.6530612);
   S12_ThetaY_30_35__1254->SetBinContent(314,0.9387755);
   S12_ThetaY_30_35__1254->SetBinContent(315,1);
   S12_ThetaY_30_35__1254->SetBinContent(316,0.6734694);
   S12_ThetaY_30_35__1254->SetBinError(310,0.04998959);
   S12_ThetaY_30_35__1254->SetBinError(311,0.09352195);
   S12_ThetaY_30_35__1254->SetBinError(312,0.122449);
   S12_ThetaY_30_35__1254->SetBinError(313,0.115446);
   S12_ThetaY_30_35__1254->SetBinError(314,0.1384149);
   S12_ThetaY_30_35__1254->SetBinError(315,0.1428571);
   S12_ThetaY_30_35__1254->SetBinError(316,0.117236);
   S12_ThetaY_30_35__1254->SetMinimum(0);
   S12_ThetaY_30_35__1254->SetMaximum(1.109185);
   S12_ThetaY_30_35__1254->SetEntries(223);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1254->SetLineColor(ci);
   S12_ThetaY_30_35__1254->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_30_35__1254->SetMarkerColor(ci);
   S12_ThetaY_30_35__1254->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_30_35__1254->GetXaxis()->SetRange(296,335);
   S12_ThetaY_30_35__1254->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1254->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1254->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1254->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_30_35__1254->GetYaxis()->CenterTitle(true);
   S12_ThetaY_30_35__1254->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1254->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1254->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_30_35__1254->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_30_35__1254->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_30_35__1254->Draw("AE");
   
   TH1D *ThetaY_30_35__1255 = new TH1D("ThetaY_30_35__1255","",630,-1575,1575);
   ThetaY_30_35__1255->SetBinContent(309,0.0003578671);
   ThetaY_30_35__1255->SetBinContent(310,0.1474413);
   ThetaY_30_35__1255->SetBinContent(311,0.5169987);
   ThetaY_30_35__1255->SetBinContent(312,0.7644042);
   ThetaY_30_35__1255->SetBinContent(313,0.8938328);
   ThetaY_30_35__1255->SetBinContent(314,0.9866396);
   ThetaY_30_35__1255->SetBinContent(315,1);
   ThetaY_30_35__1255->SetBinContent(316,1.00835);
   ThetaY_30_35__1255->SetBinContent(317,0.9713706);
   ThetaY_30_35__1255->SetBinContent(318,0.8980079);
   ThetaY_30_35__1255->SetBinContent(319,0.7665514);
   ThetaY_30_35__1255->SetBinContent(320,0.5375164);
   ThetaY_30_35__1255->SetBinContent(321,0.1506621);
   ThetaY_30_35__1255->SetBinContent(322,0.0004771561);
   ThetaY_30_35__1255->SetBinError(309,0.0002066147);
   ThetaY_30_35__1255->SetBinError(310,0.00419382);
   ThetaY_30_35__1255->SetBinError(311,0.00785317);
   ThetaY_30_35__1255->SetBinError(312,0.009549086);
   ThetaY_30_35__1255->SetBinError(313,0.01032591);
   ThetaY_30_35__1255->SetBinError(314,0.01084875);
   ThetaY_30_35__1255->SetBinError(315,0.01092195);
   ThetaY_30_35__1255->SetBinError(316,0.01096746);
   ThetaY_30_35__1255->SetBinError(317,0.01076447);
   ThetaY_30_35__1255->SetBinError(318,0.01035);
   ThetaY_30_35__1255->SetBinError(319,0.009562488);
   ThetaY_30_35__1255->SetBinError(320,0.008007485);
   ThetaY_30_35__1255->SetBinError(321,0.004239379);
   ThetaY_30_35__1255->SetBinError(322,0.0002385781);
   ThetaY_30_35__1255->SetEntries(72451);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1255->SetLineColor(ci);
   ThetaY_30_35__1255->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__1255->SetMarkerColor(ci);
   ThetaY_30_35__1255->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__1255->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__1255->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__1255->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1255->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1255->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__1255->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__1255->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__1255->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__1255->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__1255->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__1255->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__1255->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__1255->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__1255->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__1255->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__1255->Draw("AEsame");
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
   
   Double_t _fx3419[14] = {
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
   32.5};
   Double_t _fy3419[14] = {
   0,
   0.8304934,
   0.8289604,
   0.9611328,
   0.7306302,
   0.9514877,
   1,
   0.6678923,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3419[14] = {
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
   Double_t _fely3419[14] = {
   0,
   0.3301033,
   0.1798575,
   0.1598766,
   0.1287458,
   0.1401574,
   0.1427752,
   0.115892,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3419[14] = {
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
   Double_t _fehy3419[14] = {
   144.9413,
   0.4979548,
   0.2239204,
   0.1890021,
   0.1537313,
   0.1625172,
   0.1647957,
   0.1380022,
   0.03868361,
   0.04184425,
   0.04902118,
   0.0699133,
   0.2495603,
   99.99356};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3419,_fy3419,_felx3419,_fehx3419,_fely3419,_fehy3419);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3419 = new TH1F("Graph_Graph3419","",100,-100,100);
   Graph_Graph3419->SetMinimum(0);
   Graph_Graph3419->SetMaximum(1.5);
   Graph_Graph3419->SetDirectory(0);
   Graph_Graph3419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3419->SetLineColor(ci);
   Graph_Graph3419->GetXaxis()->SetRange(1,100);
   Graph_Graph3419->GetXaxis()->CenterTitle(true);
   Graph_Graph3419->GetXaxis()->SetLabelFont(42);
   Graph_Graph3419->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3419->GetXaxis()->SetTitleFont(42);
   Graph_Graph3419->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3419->GetYaxis()->CenterTitle(true);
   Graph_Graph3419->GetYaxis()->SetLabelFont(42);
   Graph_Graph3419->GetYaxis()->SetTitleFont(42);
   Graph_Graph3419->GetZaxis()->SetLabelFont(42);
   Graph_Graph3419->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3419->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3419);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.109185,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__1256 = new TH2D("ThetaY_vs_Y_30_35__1256","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8053,3);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8079,1236);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8105,4334);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8131,6408);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8157,7493);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8183,8271);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8209,8383);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8235,8453);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8261,8143);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8287,7528);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8313,6426);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8339,4506);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8365,1263);
   ThetaY_vs_Y_30_35__1256->SetBinContent(8391,4);
   ThetaY_vs_Y_30_35__1256->SetEntries(72451);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__1256->SetLineColor(ci);
   ThetaY_vs_Y_30_35__1256->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__1256->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__1256->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1256->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1256->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1256->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1256->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__1256->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__1256->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__1256->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1256->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1256->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__1256->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__1256->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__1256->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_30_35","Reco vertices","lpf");
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
