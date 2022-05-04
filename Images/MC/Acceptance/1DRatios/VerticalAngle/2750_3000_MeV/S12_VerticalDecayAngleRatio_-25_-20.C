void S12_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:16:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-1.607537,125,30.5432);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__15 = new TH1D("S12_ThetaY_mI25_mI20__15","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__15->SetBinContent(314,1);
   S12_ThetaY_mI25_mI20__15->SetBinContent(315,12);
   S12_ThetaY_mI25_mI20__15->SetBinContent(316,4);
   S12_ThetaY_mI25_mI20__15->SetBinContent(317,5);
   S12_ThetaY_mI25_mI20__15->SetBinContent(318,1);
   S12_ThetaY_mI25_mI20__15->SetBinError(314,1);
   S12_ThetaY_mI25_mI20__15->SetBinError(315,3.464102);
   S12_ThetaY_mI25_mI20__15->SetBinError(316,2);
   S12_ThetaY_mI25_mI20__15->SetBinError(317,2.236068);
   S12_ThetaY_mI25_mI20__15->SetBinError(318,1);
   S12_ThetaY_mI25_mI20__15->SetMinimum(0);
   S12_ThetaY_mI25_mI20__15->SetMaximum(27.32812);
   S12_ThetaY_mI25_mI20__15->SetEntries(23);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__15->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__15->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__15->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__15->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__15->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__15->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__15->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__15->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__15->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__15->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__15->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__15->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__15->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__15->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__15->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__15->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__16 = new TH1D("ThetaY_mI25_mI20__16","",630,-1575,1575);
   ThetaY_mI25_mI20__16->SetBinContent(313,0.9783654);
   ThetaY_mI25_mI20__16->SetBinContent(314,13.57452);
   ThetaY_mI25_mI20__16->SetBinContent(315,24.84375);
   ThetaY_mI25_mI20__16->SetBinContent(316,24.40625);
   ThetaY_mI25_mI20__16->SetBinContent(317,12.96394);
   ThetaY_mI25_mI20__16->SetBinContent(318,1);
   ThetaY_mI25_mI20__16->SetBinError(313,0.04849577);
   ThetaY_mI25_mI20__16->SetBinError(314,0.1806407);
   ThetaY_mI25_mI20__16->SetBinError(315,0.2443779);
   ThetaY_mI25_mI20__16->SetBinError(316,0.2422166);
   ThetaY_mI25_mI20__16->SetBinError(317,0.1765314);
   ThetaY_mI25_mI20__16->SetBinError(318,0.04902903);
   ThetaY_mI25_mI20__16->SetEntries(32351);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__16->SetLineColor(ci);
   ThetaY_mI25_mI20__16->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__16->SetMarkerColor(ci);
   ThetaY_mI25_mI20__16->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__16->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__16->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__16->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__16->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__16->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__16->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__16->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__16->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__16->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__16->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__16->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__16->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__16->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__16->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__16->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__16->Draw("AEsame");
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
   
   Double_t _fx3006[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3006[6] = {
   0,
   0.07366743,
   0.4830189,
   0.1638924,
   0.3856851,
   1};
   Double_t _felx3006[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3006[6] = {
   0,
   0.06094317,
   0.1375436,
   0.0784487,
   0.1666563,
   0.8276248};
   Double_t _fehx3006[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3006[6] = {
   1.885995,
   0.1694497,
   0.1836869,
   0.1296336,
   0.2611167,
   2.308659};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-100,100);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(1.5);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetRange(1,100);
   Graph_Graph3006->GetXaxis()->CenterTitle(true);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3006->GetYaxis()->CenterTitle(true);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,27.32812,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__17 = new TH2D("ThetaY_vs_Y_mI25_mI20__17","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__17->SetBinContent(8146,407);
   ThetaY_vs_Y_mI25_mI20__17->SetBinContent(8172,5647);
   ThetaY_vs_Y_mI25_mI20__17->SetBinContent(8198,10335);
   ThetaY_vs_Y_mI25_mI20__17->SetBinContent(8224,10153);
   ThetaY_vs_Y_mI25_mI20__17->SetBinContent(8250,5393);
   ThetaY_vs_Y_mI25_mI20__17->SetBinContent(8276,416);
   ThetaY_vs_Y_mI25_mI20__17->SetEntries(32351);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__17->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__17->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__17->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__17->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__17->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__17->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__17->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__17->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__17->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__17->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__17->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__17->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__17->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__17->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__17->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__17->Draw("COL");
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
