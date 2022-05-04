void S12_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:55 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07064318,125,1.34222);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__1041 = new TH1D("S12_ThetaY_mI40_mI35__1041","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(315,0.4);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(316,0.9333333);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(317,0.8333333);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(318,1);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(319,0.7333333);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(320,0.6333333);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(321,0.4666667);
   S12_ThetaY_mI40_mI35__1041->SetBinContent(322,0.1);
   S12_ThetaY_mI40_mI35__1041->SetBinError(315,0.1154701);
   S12_ThetaY_mI40_mI35__1041->SetBinError(316,0.1763834);
   S12_ThetaY_mI40_mI35__1041->SetBinError(317,0.1666667);
   S12_ThetaY_mI40_mI35__1041->SetBinError(318,0.1825742);
   S12_ThetaY_mI40_mI35__1041->SetBinError(319,0.1563472);
   S12_ThetaY_mI40_mI35__1041->SetBinError(320,0.1452966);
   S12_ThetaY_mI40_mI35__1041->SetBinError(321,0.1247219);
   S12_ThetaY_mI40_mI35__1041->SetBinError(322,0.05773503);
   S12_ThetaY_mI40_mI35__1041->SetMinimum(0);
   S12_ThetaY_mI40_mI35__1041->SetMaximum(1.200934);
   S12_ThetaY_mI40_mI35__1041->SetEntries(153);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1041->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__1041->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1041->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__1041->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__1041->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__1041->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1041->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1041->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1041->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__1041->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__1041->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1041->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1041->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1041->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1041->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1041->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1042 = new TH1D("ThetaY_mI40_mI35__1042","",630,-1575,1575);
   ThetaY_mI40_mI35__1042->SetBinContent(308,0.0007004436);
   ThetaY_mI40_mI35__1042->SetBinContent(309,0.1480271);
   ThetaY_mI40_mI35__1042->SetBinContent(310,0.5087555);
   ThetaY_mI40_mI35__1042->SetBinContent(311,0.7560121);
   ThetaY_mI40_mI35__1042->SetBinContent(312,0.9052066);
   ThetaY_mI40_mI35__1042->SetBinContent(313,0.9922951);
   ThetaY_mI40_mI35__1042->SetBinContent(314,1.066542);
   ThetaY_mI40_mI35__1042->SetBinContent(315,1.088956);
   ThetaY_mI40_mI35__1042->SetBinContent(316,1.091758);
   ThetaY_mI40_mI35__1042->SetBinContent(317,1.035489);
   ThetaY_mI40_mI35__1042->SetBinContent(318,1);
   ThetaY_mI40_mI35__1042->SetBinContent(319,0.9203829);
   ThetaY_mI40_mI35__1042->SetBinContent(320,0.7688536);
   ThetaY_mI40_mI35__1042->SetBinContent(321,0.5178613);
   ThetaY_mI40_mI35__1042->SetBinContent(322,0.1475601);
   ThetaY_mI40_mI35__1042->SetBinContent(323,0.0004669624);
   ThetaY_mI40_mI35__1042->SetBinError(308,0.0004044013);
   ThetaY_mI40_mI35__1042->SetBinError(309,0.005878907);
   ThetaY_mI40_mI35__1042->SetBinError(310,0.01089885);
   ThetaY_mI40_mI35__1042->SetBinError(311,0.01328588);
   ThetaY_mI40_mI35__1042->SetBinError(312,0.01453784);
   ThetaY_mI40_mI35__1042->SetBinError(313,0.01522111);
   ThetaY_mI40_mI35__1042->SetBinError(314,0.01578029);
   ThetaY_mI40_mI35__1042->SetBinError(315,0.01594524);
   ThetaY_mI40_mI35__1042->SetBinError(316,0.01596574);
   ThetaY_mI40_mI35__1042->SetBinError(317,0.01554887);
   ThetaY_mI40_mI35__1042->SetBinError(318,0.01528009);
   ThetaY_mI40_mI35__1042->SetBinError(319,0.0146592);
   ThetaY_mI40_mI35__1042->SetBinError(320,0.01339824);
   ThetaY_mI40_mI35__1042->SetBinError(321,0.01099595);
   ThetaY_mI40_mI35__1042->SetBinError(322,0.005869626);
   ThetaY_mI40_mI35__1042->SetBinError(323,0.0003301923);
   ThetaY_mI40_mI35__1042->SetEntries(46894);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1042->SetLineColor(ci);
   ThetaY_mI40_mI35__1042->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1042->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1042->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1042->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1042->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1042->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1042->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1042->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1042->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1042->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1042->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1042->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1042->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1042->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1042->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1042->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1042->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1042->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1042->Draw("AEsame");
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
   
   Double_t _fx3348[16] = {
   -37.5,
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
   32.5,
   37.5};
   Double_t _fy3348[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.3673242,
   0.8548902,
   0.8047726,
   1,
   0.7967698,
   0.8237372,
   0.9011422,
   0.6776899,
   0};
   Double_t _felx3348[16] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3348[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1046668,
   0.1610523,
   0.1603039,
   0.1821655,
   0.169021,
   0.1878146,
   0.2386345,
   0.3694642,
   0};
   Double_t _fehx3348[16] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3348[16] = {
   120.9527,
   0.4151711,
   0.1206735,
   0.08119557,
   0.06780989,
   0.06185728,
   0.05755024,
   0.1398254,
   0.1947247,
   0.1959724,
   0.2188635,
   0.2093925,
   0.2365143,
   0.3122375,
   0.6622967,
   215.6594};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3348,_fy3348,_felx3348,_fehx3348,_fely3348,_fehy3348);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3348 = new TH1F("Graph_Graph3348","",100,-100,100);
   Graph_Graph3348->SetMinimum(0);
   Graph_Graph3348->SetMaximum(1.5);
   Graph_Graph3348->SetDirectory(0);
   Graph_Graph3348->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3348->SetLineColor(ci);
   Graph_Graph3348->GetXaxis()->SetRange(1,100);
   Graph_Graph3348->GetXaxis()->CenterTitle(true);
   Graph_Graph3348->GetXaxis()->SetLabelFont(42);
   Graph_Graph3348->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3348->GetXaxis()->SetTitleFont(42);
   Graph_Graph3348->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3348->GetYaxis()->CenterTitle(true);
   Graph_Graph3348->GetYaxis()->SetLabelFont(42);
   Graph_Graph3348->GetYaxis()->SetTitleFont(42);
   Graph_Graph3348->GetZaxis()->SetLabelFont(42);
   Graph_Graph3348->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3348->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3348);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.200934,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1043 = new TH2D("ThetaY_vs_Y_mI40_mI35__1043","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8013,3);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8039,634);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8065,2179);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8091,3238);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8117,3877);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8143,4250);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8169,4568);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8195,4664);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8221,4676);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8247,4435);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8273,4283);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8299,3942);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8325,3293);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8351,2218);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8377,632);
   ThetaY_vs_Y_mI40_mI35__1043->SetBinContent(8403,2);
   ThetaY_vs_Y_mI40_mI35__1043->SetEntries(46894);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1043->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1043->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1043->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1043->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1043->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1043->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1043->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1043->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1043->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1043->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1043->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1043->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1043->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1043->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1043->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1043->Draw("COL");
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
