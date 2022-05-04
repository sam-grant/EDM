void S12_VerticalDecayAngleRatio_15_20()
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
   upper_pad->Range(-125,-1.600647,125,30.4123);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_15_20__39 = new TH1D("S12_ThetaY_15_20__39","",630,-1575,1575);
   S12_ThetaY_15_20__39->SetBinContent(313,1);
   S12_ThetaY_15_20__39->SetBinContent(314,4);
   S12_ThetaY_15_20__39->SetBinContent(315,4.5);
   S12_ThetaY_15_20__39->SetBinContent(316,6);
   S12_ThetaY_15_20__39->SetBinContent(317,1);
   S12_ThetaY_15_20__39->SetBinError(313,0.7071068);
   S12_ThetaY_15_20__39->SetBinError(314,1.414214);
   S12_ThetaY_15_20__39->SetBinError(315,1.5);
   S12_ThetaY_15_20__39->SetBinError(316,1.732051);
   S12_ThetaY_15_20__39->SetBinError(317,0.7071068);
   S12_ThetaY_15_20__39->SetMinimum(0);
   S12_ThetaY_15_20__39->SetMaximum(27.211);
   S12_ThetaY_15_20__39->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__39->SetLineColor(ci);
   S12_ThetaY_15_20__39->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_15_20__39->SetMarkerColor(ci);
   S12_ThetaY_15_20__39->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_15_20__39->GetXaxis()->SetRange(296,335);
   S12_ThetaY_15_20__39->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__39->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__39->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__39->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_15_20__39->GetYaxis()->CenterTitle(true);
   S12_ThetaY_15_20__39->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__39->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__39->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_15_20__39->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_15_20__39->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_15_20__39->Draw("AE");
   
   TH1D *ThetaY_15_20__40 = new TH1D("ThetaY_15_20__40","",630,-1575,1575);
   ThetaY_15_20__40->SetBinContent(313,1);
   ThetaY_15_20__40->SetBinContent(314,13.65353);
   ThetaY_15_20__40->SetBinContent(315,24.73727);
   ThetaY_15_20__40->SetBinContent(316,24.3087);
   ThetaY_15_20__40->SetBinContent(317,13.52381);
   ThetaY_15_20__40->SetBinContent(318,0.9573071);
   ThetaY_15_20__40->SetBinError(313,0.04052204);
   ThetaY_15_20__40->SetBinError(314,0.1497317);
   ThetaY_15_20__40->SetBinError(315,0.2015428);
   ThetaY_15_20__40->SetBinError(316,0.1997893);
   ThetaY_15_20__40->SetBinError(317,0.1490187);
   ThetaY_15_20__40->SetBinError(318,0.03964761);
   ThetaY_15_20__40->SetEntries(47612);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__40->SetLineColor(ci);
   ThetaY_15_20__40->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_15_20__40->SetMarkerColor(ci);
   ThetaY_15_20__40->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_15_20__40->GetXaxis()->CenterTitle(true);
   ThetaY_15_20__40->GetXaxis()->SetLabelFont(42);
   ThetaY_15_20__40->GetXaxis()->SetTitleSize(0.04);
   ThetaY_15_20__40->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__40->GetXaxis()->SetTitleFont(42);
   ThetaY_15_20__40->GetYaxis()->SetTitle("Tracks");
   ThetaY_15_20__40->GetYaxis()->CenterTitle(true);
   ThetaY_15_20__40->GetYaxis()->SetNdivisions(4000510);
   ThetaY_15_20__40->GetYaxis()->SetLabelFont(42);
   ThetaY_15_20__40->GetYaxis()->SetTitleSize(0.04);
   ThetaY_15_20__40->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_15_20__40->GetYaxis()->SetTitleFont(42);
   ThetaY_15_20__40->GetZaxis()->SetLabelFont(42);
   ThetaY_15_20__40->GetZaxis()->SetTitleOffset(1);
   ThetaY_15_20__40->GetZaxis()->SetTitleFont(42);
   ThetaY_15_20__40->Draw("AEsame");
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
   
   Double_t _fx3014[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3014[6] = {
   1,
   0.2929645,
   0.1819117,
   0.2468252,
   0.07394366,
   0};
   Double_t _felx3014[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3014[6] = {
   0.6465722,
   0.1014233,
   0.05951047,
   0.07027413,
   0.04776439,
   0};
   Double_t _fehx3014[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3014[6] = {
   1.323956,
   0.1445771,
   0.08311329,
   0.0938423,
   0.09755396,
   0.9630826};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-100,100);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(1.5);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3014->SetLineColor(ci);
   Graph_Graph3014->GetXaxis()->SetRange(1,100);
   Graph_Graph3014->GetXaxis()->CenterTitle(true);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3014->GetYaxis()->CenterTitle(true);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,27.211,510,"S");
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
   
   TH2D *ThetaY_vs_Y_15_20__41 = new TH2D("ThetaY_vs_Y_15_20__41","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_15_20__41->SetBinContent(8154,609);
   ThetaY_vs_Y_15_20__41->SetBinContent(8180,8315);
   ThetaY_vs_Y_15_20__41->SetBinContent(8206,15065);
   ThetaY_vs_Y_15_20__41->SetBinContent(8232,14804);
   ThetaY_vs_Y_15_20__41->SetBinContent(8258,8236);
   ThetaY_vs_Y_15_20__41->SetBinContent(8284,583);
   ThetaY_vs_Y_15_20__41->SetEntries(47612);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_15_20__41->SetLineColor(ci);
   ThetaY_vs_Y_15_20__41->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_15_20__41->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_15_20__41->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__41->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__41->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__41->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__41->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_15_20__41->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_15_20__41->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_15_20__41->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__41->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__41->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_15_20__41->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_15_20__41->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_15_20__41->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_15_20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_15_20","Reco vertices","lpf");
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
