void S12_VerticalDecayAngleRatio_-40_-35()
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
   upper_pad->Range(-125,-0.06541788,125,1.24294);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI40_mI35__1212 = new TH1D("S12_ThetaY_mI40_mI35__1212","",630,-1575,1575);
   S12_ThetaY_mI40_mI35__1212->SetBinContent(315,0.2608696);
   S12_ThetaY_mI40_mI35__1212->SetBinContent(316,1);
   S12_ThetaY_mI40_mI35__1212->SetBinContent(317,0.9130435);
   S12_ThetaY_mI40_mI35__1212->SetBinContent(318,0.7826087);
   S12_ThetaY_mI40_mI35__1212->SetBinContent(319,0.7391304);
   S12_ThetaY_mI40_mI35__1212->SetBinContent(320,0.3043478);
   S12_ThetaY_mI40_mI35__1212->SetBinContent(321,0.1304348);
   S12_ThetaY_mI40_mI35__1212->SetBinError(315,0.1064996);
   S12_ThetaY_mI40_mI35__1212->SetBinError(316,0.2085144);
   S12_ThetaY_mI40_mI35__1212->SetBinError(317,0.1992424);
   S12_ThetaY_mI40_mI35__1212->SetBinError(318,0.1844626);
   S12_ThetaY_mI40_mI35__1212->SetBinError(319,0.1792655);
   S12_ThetaY_mI40_mI35__1212->SetBinError(320,0.1150327);
   S12_ThetaY_mI40_mI35__1212->SetBinError(321,0.07530656);
   S12_ThetaY_mI40_mI35__1212->SetMinimum(0);
   S12_ThetaY_mI40_mI35__1212->SetMaximum(1.112104);
   S12_ThetaY_mI40_mI35__1212->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1212->SetLineColor(ci);
   S12_ThetaY_mI40_mI35__1212->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI40_mI35__1212->SetMarkerColor(ci);
   S12_ThetaY_mI40_mI35__1212->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI40_mI35__1212->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI40_mI35__1212->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1212->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1212->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1212->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI40_mI35__1212->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI40_mI35__1212->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1212->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1212->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI40_mI35__1212->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI40_mI35__1212->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI40_mI35__1212->Draw("AE");
   
   TH1D *ThetaY_mI40_mI35__1213 = new TH1D("ThetaY_mI40_mI35__1213","",630,-1575,1575);
   ThetaY_mI40_mI35__1213->SetBinContent(310,0.1397447);
   ThetaY_mI40_mI35__1213->SetBinContent(311,0.5176056);
   ThetaY_mI40_mI35__1213->SetBinContent(312,0.7535211);
   ThetaY_mI40_mI35__1213->SetBinContent(313,0.9066901);
   ThetaY_mI40_mI35__1213->SetBinContent(314,0.9790933);
   ThetaY_mI40_mI35__1213->SetBinContent(315,1.011004);
   ThetaY_mI40_mI35__1213->SetBinContent(316,1);
   ThetaY_mI40_mI35__1213->SetBinContent(317,0.9742518);
   ThetaY_mI40_mI35__1213->SetBinContent(318,0.9040493);
   ThetaY_mI40_mI35__1213->SetBinContent(319,0.7396567);
   ThetaY_mI40_mI35__1213->SetBinContent(320,0.5228873);
   ThetaY_mI40_mI35__1213->SetBinContent(321,0.1487676);
   ThetaY_mI40_mI35__1213->SetBinContent(322,0.0008802817);
   ThetaY_mI40_mI35__1213->SetBinError(310,0.0055456);
   ThetaY_mI40_mI35__1213->SetBinError(311,0.01067285);
   ThetaY_mI40_mI35__1213->SetBinError(312,0.01287741);
   ThetaY_mI40_mI35__1213->SetBinError(313,0.01412571);
   ThetaY_mI40_mI35__1213->SetBinError(314,0.01467888);
   ThetaY_mI40_mI35__1213->SetBinError(315,0.01491616);
   ThetaY_mI40_mI35__1213->SetBinError(316,0.01483477);
   ThetaY_mI40_mI35__1213->SetBinError(317,0.01464254);
   ThetaY_mI40_mI35__1213->SetBinError(318,0.01410512);
   ThetaY_mI40_mI35__1213->SetBinError(319,0.01275839);
   ThetaY_mI40_mI35__1213->SetBinError(320,0.01072716);
   ThetaY_mI40_mI35__1213->SetBinError(321,0.005721831);
   ThetaY_mI40_mI35__1213->SetBinError(322,0.0004401408);
   ThetaY_mI40_mI35__1213->SetEntries(39070);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1213->SetLineColor(ci);
   ThetaY_mI40_mI35__1213->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI40_mI35__1213->SetMarkerColor(ci);
   ThetaY_mI40_mI35__1213->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI40_mI35__1213->GetXaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1213->GetXaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1213->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1213->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1213->GetXaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1213->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI40_mI35__1213->GetYaxis()->CenterTitle(true);
   ThetaY_mI40_mI35__1213->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI40_mI35__1213->GetYaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1213->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI40_mI35__1213->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI40_mI35__1213->GetYaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1213->GetZaxis()->SetLabelFont(42);
   ThetaY_mI40_mI35__1213->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI40_mI35__1213->GetZaxis()->SetTitleFont(42);
   ThetaY_mI40_mI35__1213->Draw("AEsame");
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
   
   Double_t _fx3405[13] = {
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
   Double_t _fy3405[13] = {
   0,
   0,
   0,
   0,
   0,
   0.2580303,
   1,
   0.9371741,
   0.8656704,
   0.9992885,
   0.5820524,
   0.8767687,
   0};
   Double_t _felx3405[13] = {
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
   Double_t _fely3405[13] = {
   0,
   0,
   0,
   0,
   0,
   0.1024063,
   0.2074896,
   0.2033266,
   0.2025483,
   0.2405308,
   0.2149268,
   0.4779445,
   0};
   Double_t _fehx3405[13] = {
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
   Double_t _fehy3405[13] = {
   0.5736214,
   0.1547042,
   0.1062557,
   0.08830173,
   0.08177053,
   0.1542754,
   0.2558196,
   0.253135,
   0.2566281,
   0.3068931,
   0.3142106,
   0.8565935,
   115.4726};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3405,_fy3405,_felx3405,_fehx3405,_fely3405,_fehy3405);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3405 = new TH1F("Graph_Graph3405","",100,-100,100);
   Graph_Graph3405->SetMinimum(0);
   Graph_Graph3405->SetMaximum(1.5);
   Graph_Graph3405->SetDirectory(0);
   Graph_Graph3405->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3405->SetLineColor(ci);
   Graph_Graph3405->GetXaxis()->SetRange(1,100);
   Graph_Graph3405->GetXaxis()->CenterTitle(true);
   Graph_Graph3405->GetXaxis()->SetLabelFont(42);
   Graph_Graph3405->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3405->GetXaxis()->SetTitleFont(42);
   Graph_Graph3405->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3405->GetYaxis()->CenterTitle(true);
   Graph_Graph3405->GetYaxis()->SetLabelFont(42);
   Graph_Graph3405->GetYaxis()->SetTitleFont(42);
   Graph_Graph3405->GetZaxis()->SetLabelFont(42);
   Graph_Graph3405->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3405->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3405);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.112104,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI40_mI35__1214 = new TH2D("ThetaY_vs_Y_mI40_mI35__1214","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8065,635);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8091,2352);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8117,3424);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8143,4120);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8169,4449);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8195,4594);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8221,4544);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8247,4427);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8273,4108);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8299,3361);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8325,2376);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8351,676);
   ThetaY_vs_Y_mI40_mI35__1214->SetBinContent(8377,4);
   ThetaY_vs_Y_mI40_mI35__1214->SetEntries(39070);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI40_mI35__1214->SetLineColor(ci);
   ThetaY_vs_Y_mI40_mI35__1214->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI40_mI35__1214->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI40_mI35__1214->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1214->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1214->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1214->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1214->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI40_mI35__1214->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI40_mI35__1214->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI40_mI35__1214->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1214->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1214->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI40_mI35__1214->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI40_mI35__1214->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI40_mI35__1214->Draw("COL");
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
