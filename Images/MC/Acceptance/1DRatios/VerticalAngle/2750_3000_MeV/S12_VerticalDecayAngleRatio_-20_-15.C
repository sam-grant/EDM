void S12_VerticalDecayAngleRatio_-20_-15()
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
   upper_pad->Range(-125,-0.1167046,125,2.217387);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__18 = new TH1D("S12_ThetaY_mI20_mI15__18","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__18->SetBinContent(314,0.2857143);
   S12_ThetaY_mI20_mI15__18->SetBinContent(315,0.7142857);
   S12_ThetaY_mI20_mI15__18->SetBinContent(316,1.428571);
   S12_ThetaY_mI20_mI15__18->SetBinContent(317,1);
   S12_ThetaY_mI20_mI15__18->SetBinError(314,0.2020305);
   S12_ThetaY_mI20_mI15__18->SetBinError(315,0.3194383);
   S12_ThetaY_mI20_mI15__18->SetBinError(316,0.451754);
   S12_ThetaY_mI20_mI15__18->SetBinError(317,0.3779645);
   S12_ThetaY_mI20_mI15__18->SetMinimum(0);
   S12_ThetaY_mI20_mI15__18->SetMaximum(1.983978);
   S12_ThetaY_mI20_mI15__18->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__18->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__18->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__18->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__18->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__18->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__18->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__18->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__18->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__18->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__18->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__18->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__18->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__18->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__18->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__18->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__18->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__19 = new TH1D("ThetaY_mI20_mI15__19","",630,-1575,1575);
   ThetaY_mI20_mI15__19->SetBinContent(313,0.07208718);
   ThetaY_mI20_mI15__19->SetBinContent(314,0.9905401);
   ThetaY_mI20_mI15__19->SetBinContent(315,1.803616);
   ThetaY_mI20_mI15__19->SetBinContent(316,1.788049);
   ThetaY_mI20_mI15__19->SetBinContent(317,1);
   ThetaY_mI20_mI15__19->SetBinContent(318,0.07508083);
   ThetaY_mI20_mI15__19->SetBinError(313,0.002938054);
   ThetaY_mI20_mI15__19->SetBinError(314,0.01089098);
   ThetaY_mI20_mI15__19->SetBinError(315,0.01469613);
   ThetaY_mI20_mI15__19->SetBinError(316,0.01463257);
   ThetaY_mI20_mI15__19->SetBinError(317,0.01094286);
   ThetaY_mI20_mI15__19->SetBinError(318,0.002998439);
   ThetaY_mI20_mI15__19->SetEntries(47846);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__19->SetLineColor(ci);
   ThetaY_mI20_mI15__19->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__19->SetMarkerColor(ci);
   ThetaY_mI20_mI15__19->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__19->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__19->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__19->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__19->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__19->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__19->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__19->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__19->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__19->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__19->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__19->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__19->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__19->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__19->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__19->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__19->Draw("AEsame");
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
   
   Double_t _fx3007[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3007[6] = {
   0,
   0.2884429,
   0.3960297,
   0.7989553,
   1,
   0};
   Double_t _felx3007[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3007[6] = {
   0,
   0.1863215,
   0.171084,
   0.2484465,
   0.3689168,
   0};
   Double_t _fehx3007[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3007[6] = {
   3.653988,
   0.3805426,
   0.2679865,
   0.3410731,
   0.5389588,
   3.50808};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-100,100);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(1.5);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3007->SetLineColor(ci);
   Graph_Graph3007->GetXaxis()->SetRange(1,100);
   Graph_Graph3007->GetXaxis()->CenterTitle(true);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3007->GetYaxis()->CenterTitle(true);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.983978,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__20 = new TH2D("ThetaY_vs_Y_mI20_mI15__20","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__20->SetBinContent(8147,602);
   ThetaY_vs_Y_mI20_mI15__20->SetBinContent(8173,8272);
   ThetaY_vs_Y_mI20_mI15__20->SetBinContent(8199,15062);
   ThetaY_vs_Y_mI20_mI15__20->SetBinContent(8225,14932);
   ThetaY_vs_Y_mI20_mI15__20->SetBinContent(8251,8351);
   ThetaY_vs_Y_mI20_mI15__20->SetBinContent(8277,627);
   ThetaY_vs_Y_mI20_mI15__20->SetEntries(47846);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__20->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__20->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__20->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__20->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__20->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__20->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__20->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__20->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__20->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__20->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__20->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__20->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__20->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__20->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__20->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__20->Draw("COL");
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
