void S12_VerticalDecayAngleRatio_-40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09362449,125,1.778865);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__870 = new TH1D("S12_ThetaY_mI40_mI35__870","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__870->SetBinContent(315,0.28125);
   S12_ThetaY_mI40_mI35__870->SetBinContent(316,1.09375);
   S12_ThetaY_mI40_mI35__870->SetBinContent(317,0.84375);
   S12_ThetaY_mI40_mI35__870->SetBinContent(318,0.875);
   S12_ThetaY_mI40_mI35__870->SetBinContent(319,1.15625);
   S12_ThetaY_mI40_mI35__870->SetBinContent(320,0.8125);
   S12_ThetaY_mI40_mI35__870->SetBinContent(321,1);
   S12_ThetaY_mI40_mI35__870->SetBinContent(322,0.3125);
   S12_ThetaY_mI40_mI35__870->SetBinContent(323,0.125);
   S12_ThetaY_mI40_mI35__870->SetBinError(315,0.09375);
   S12_ThetaY_mI40_mI35__870->SetBinError(316,0.1848775);
   S12_ThetaY_mI40_mI35__870->SetBinError(317,0.1623798);
   S12_ThetaY_mI40_mI35__870->SetBinError(318,0.1653595);
   S12_ThetaY_mI40_mI35__870->SetBinError(319,0.1900863);
   S12_ThetaY_mI40_mI35__870->SetBinError(320,0.1593444);
   S12_ThetaY_mI40_mI35__870->SetBinError(321,0.1767767);
   S12_ThetaY_mI40_mI35__870->SetBinError(322,0.09882118);
   S12_ThetaY_mI40_mI35__870->SetBinError(323,0.0625);
   S12_ThetaY_mI40_mI35__870->SetMinimum(0);
   S12_ThetaY_mI40_mI35__870->SetMaximum(1.591616);
   S12_ThetaY_mI40_mI35__870->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__870->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__870->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__870->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__870->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__870->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__870->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__870->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__870->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__870->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__870->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__870->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__870->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__870->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__870->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__870->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__870->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__871 = new TH1D("ThetaY_mI40_mI35__871","",630,-1575,1575);
   ThetaY_mI40_mI35__871->SetBinContent(307,0.006694294);
   ThetaY_mI40_mI35__871->SetBinContent(308,0.2642652);
   ThetaY_mI40_mI35__871->SetBinContent(309,0.7057698);
   ThetaY_mI40_mI35__871->SetBinContent(310,1.005419);
   ThetaY_mI40_mI35__871->SetBinContent(311,1.188078);
   ThetaY_mI40_mI35__871->SetBinContent(312,1.337265);
   ThetaY_mI40_mI35__871->SetBinContent(313,1.363405);
   ThetaY_mI40_mI35__871->SetBinContent(314,1.41154);
   ThetaY_mI40_mI35__871->SetBinContent(315,1.446924);
   ThetaY_mI40_mI35__871->SetBinContent(316,1.445967);
   ThetaY_mI40_mI35__871->SetBinContent(317,1.437679);
   ThetaY_mI40_mI35__871->SetBinContent(318,1.346509);
   ThetaY_mI40_mI35__871->SetBinContent(319,1.310488);
   ThetaY_mI40_mI35__871->SetBinContent(320,1.195728);
   ThetaY_mI40_mI35__871->SetBinContent(321,1);
   ThetaY_mI40_mI35__871->SetBinContent(322,0.7456168);
   ThetaY_mI40_mI35__871->SetBinContent(323,0.2441823);
   ThetaY_mI40_mI35__871->SetBinContent(324,0.007969398);
   ThetaY_mI40_mI35__871->SetBinError(307,0.001460815);
   ThetaY_mI40_mI35__871->SetBinError(308,0.009178311);
   ThetaY_mI40_mI35__871->SetBinError(309,0.01499941);
   ThetaY_mI40_mI35__871->SetBinError(310,0.01790261);
   ThetaY_mI40_mI35__871->SetBinError(311,0.019461);
   ThetaY_mI40_mI35__871->SetBinError(312,0.02064674);
   ThetaY_mI40_mI35__871->SetBinError(313,0.02084755);
   ThetaY_mI40_mI35__871->SetBinError(314,0.02121237);
   ThetaY_mI40_mI35__871->SetBinError(315,0.0214766);
   ThetaY_mI40_mI35__871->SetBinError(316,0.0214695);
   ThetaY_mI40_mI35__871->SetBinError(317,0.02140788);
   ThetaY_mI40_mI35__871->SetBinError(318,0.02071798);
   ThetaY_mI40_mI35__871->SetBinError(319,0.02043898);
   ThetaY_mI40_mI35__871->SetBinError(320,0.01952356);
   ThetaY_mI40_mI35__871->SetBinError(321,0.0178543);
   ThetaY_mI40_mI35__871->SetBinError(322,0.01541703);
   ThetaY_mI40_mI35__871->SetBinError(323,0.008822667);
   ThetaY_mI40_mI35__871->SetBinError(324,0.00159388);
   ThetaY_mI40_mI35__871->SetEntries(54783);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__871->SetLineColor(ci);
   ThetaY_mI40_mI35__871->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__871->SetMarkerColor(ci);
   ThetaY_mI40_mI35__871->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__871->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__871->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__871->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__871->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__871->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__871->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__871->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__871->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__871->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__871->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__871->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__871->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__871->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__871->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__871->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__871->Draw("AEsame");
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
   
   Double_t _fx3291[18] = {
   -42.5,
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
   37.5,
   42.5};
   Double_t _fy3291[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1943779,
   0.756414,
   0.5868833,
   0.6498284,
   0.8823051,
   0.6795021,
   1,
   0.4191161,
   0.5119125,
   0};
   Double_t _felx3291[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3291[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06362831,
   0.1277201,
   0.1125657,
   0.1224585,
   0.1450231,
   0.1328403,
   0.176716,
   0.1305437,
   0.2455001,
   0};
   Double_t _fehx3291[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3291[18] = {
   8.982144,
   0.2179472,
   0.08155046,
   0.05723853,
   0.04843634,
   0.04303153,
   0.04220634,
   0.04076675,
   0.0888985,
   0.1513828,
   0.1365766,
   0.1480741,
   0.1711151,
   0.1617928,
   0.2111603,
   0.17938,
   0.4066563,
   7.491563};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3291,_fy3291,_felx3291,_fehx3291,_fely3291,_fehy3291);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3291 = new TH1F("Graph_Graph3291","",100,-100,100);
   Graph_Graph3291->SetMinimum(0);
   Graph_Graph3291->SetMaximum(1.5);
   Graph_Graph3291->SetDirectory(0);
   Graph_Graph3291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3291->SetLineColor(ci);
   Graph_Graph3291->GetXaxis()->SetRange(1,100);
   Graph_Graph3291->GetXaxis()->CenterTitle(true);
   Graph_Graph3291->GetXaxis()->SetLabelFont(42);
   Graph_Graph3291->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3291->GetXaxis()->SetTitleFont(42);
   Graph_Graph3291->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3291->GetYaxis()->CenterTitle(true);
   Graph_Graph3291->GetYaxis()->SetLabelFont(42);
   Graph_Graph3291->GetYaxis()->SetTitleFont(42);
   Graph_Graph3291->GetZaxis()->SetLabelFont(42);
   Graph_Graph3291->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3291->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3291);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.591616,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__872 = new TH2D("ThetaY_vs_Y_mI40_mI35__872","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(7987,21);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8013,829);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8039,2214);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8065,3154);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8091,3727);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8117,4195);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8143,4277);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8169,4428);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8195,4539);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8221,4536);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8247,4510);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8273,4224);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8299,4111);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8325,3751);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8351,3137);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8377,2339);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8403,766);
   ThetaY_vs_Y_mI40_mI35__872->SetBinContent(8429,25);
   ThetaY_vs_Y_mI40_mI35__872->SetEntries(54783);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__872->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__872->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__872->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__872->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__872->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__872->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__872->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__872->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__872->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__872->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__872->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__872->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__872->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__872->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__872->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__872->Draw("COL");
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
