void S12_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI10_mI5__1743 = new TH1D("S12_ThetaY_mI10_mI5__1743","",630,-1575,1575);
   S12_ThetaY_mI10_mI5__1743->SetBinContent(313,0.016);
   S12_ThetaY_mI10_mI5__1743->SetBinContent(314,0.784);
   S12_ThetaY_mI10_mI5__1743->SetBinContent(315,1);
   S12_ThetaY_mI10_mI5__1743->SetBinContent(316,0.968);
   S12_ThetaY_mI10_mI5__1743->SetBinContent(317,0.784);
   S12_ThetaY_mI10_mI5__1743->SetBinContent(318,0.296);
   S12_ThetaY_mI10_mI5__1743->SetBinError(313,0.01131371);
   S12_ThetaY_mI10_mI5__1743->SetBinError(314,0.07919596);
   S12_ThetaY_mI10_mI5__1743->SetBinError(315,0.08944272);
   S12_ThetaY_mI10_mI5__1743->SetBinError(316,0.088);
   S12_ThetaY_mI10_mI5__1743->SetBinError(317,0.07919596);
   S12_ThetaY_mI10_mI5__1743->SetBinError(318,0.0486621);
   S12_ThetaY_mI10_mI5__1743->SetMinimum(0);
   S12_ThetaY_mI10_mI5__1743->SetMaximum(1.1);
   S12_ThetaY_mI10_mI5__1743->SetEntries(481);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1743->SetLineColor(ci);
   S12_ThetaY_mI10_mI5__1743->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI10_mI5__1743->SetMarkerColor(ci);
   S12_ThetaY_mI10_mI5__1743->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI10_mI5__1743->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI10_mI5__1743->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1743->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1743->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1743->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI10_mI5__1743->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI10_mI5__1743->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1743->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1743->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI10_mI5__1743->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI10_mI5__1743->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI10_mI5__1743->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1744 = new TH1D("ThetaY_mI10_mI5__1744","",630,-1575,1575);
   ThetaY_mI10_mI5__1744->SetBinContent(312,0.02036809);
   ThetaY_mI10_mI5__1744->SetBinContent(313,0.4148232);
   ThetaY_mI10_mI5__1744->SetBinContent(314,0.8322381);
   ThetaY_mI10_mI5__1744->SetBinContent(315,1);
   ThetaY_mI10_mI5__1744->SetBinContent(316,0.9911511);
   ThetaY_mI10_mI5__1744->SetBinContent(317,0.8380763);
   ThetaY_mI10_mI5__1744->SetBinContent(318,0.4211064);
   ThetaY_mI10_mI5__1744->SetBinContent(319,0.02102259);
   ThetaY_mI10_mI5__1744->SetBinError(312,0.0007302315);
   ThetaY_mI10_mI5__1744->SetBinError(313,0.003295466);
   ThetaY_mI10_mI5__1744->SetBinError(314,0.004667767);
   ThetaY_mI10_mI5__1744->SetBinError(315,0.005116646);
   ThetaY_mI10_mI5__1744->SetBinError(316,0.005093957);
   ThetaY_mI10_mI5__1744->SetBinError(317,0.004684111);
   ThetaY_mI10_mI5__1744->SetBinError(318,0.00332033);
   ThetaY_mI10_mI5__1744->SetBinError(319,0.0007418712);
   ThetaY_mI10_mI5__1744->SetEntries(173368);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1744->SetLineColor(ci);
   ThetaY_mI10_mI5__1744->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1744->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1744->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1744->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1744->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1744->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1744->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1744->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1744->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1744->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1744->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1744->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1744->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1744->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1744->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1744->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1744->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1744->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1744->Draw("AEsame");
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
   
   Double_t _fx3582[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3582[8] = {
   0,
   0.03857065,
   0.9420381,
   1,
   0.9766422,
   0.9354757,
   0.7029103,
   0};
   Double_t _felx3582[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3582[8] = {
   0,
   0.02491405,
   0.09514248,
   0.08946786,
   0.08880327,
   0.0944787,
   0.1151619,
   0};
   Double_t _fehx3582[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3582[8] = {
   0.7239565,
   0.05087943,
   0.1052767,
   0.09785677,
   0.09727237,
   0.1045421,
   0.1357822,
   0.7013916};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3582,_fy3582,_felx3582,_fehx3582,_fely3582,_fehy3582);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3582 = new TH1F("Graph_Graph3582","",100,-100,100);
   Graph_Graph3582->SetMinimum(0);
   Graph_Graph3582->SetMaximum(1.5);
   Graph_Graph3582->SetDirectory(0);
   Graph_Graph3582->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3582->SetLineColor(ci);
   Graph_Graph3582->GetXaxis()->SetRange(1,100);
   Graph_Graph3582->GetXaxis()->CenterTitle(true);
   Graph_Graph3582->GetXaxis()->SetLabelFont(42);
   Graph_Graph3582->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3582->GetXaxis()->SetTitleFont(42);
   Graph_Graph3582->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3582->GetYaxis()->CenterTitle(true);
   Graph_Graph3582->GetYaxis()->SetLabelFont(42);
   Graph_Graph3582->GetYaxis()->SetTitleFont(42);
   Graph_Graph3582->GetZaxis()->SetLabelFont(42);
   Graph_Graph3582->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3582->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3582);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1745 = new TH2D("ThetaY_vs_Y_mI10_mI5__1745","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8123,778);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8149,15845);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8175,31789);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8201,38197);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8227,37859);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8253,32012);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8279,16085);
   ThetaY_vs_Y_mI10_mI5__1745->SetBinContent(8305,803);
   ThetaY_vs_Y_mI10_mI5__1745->SetEntries(173368);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1745->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1745->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1745->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1745->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1745->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1745->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1745->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1745->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1745->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1745->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1745->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1745->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1745->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1745->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1745->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1745->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-10_-5","Reco vertices","lpf");
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
