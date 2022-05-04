void S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:11 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07774924,125,1.477236);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__1800 = new TH1D("S18_ThetaY_mI10_mI5__1800","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__1800->SetBinContent(313,0.03061224);
   S18_ThetaY_mI10_mI5__1800->SetBinContent(314,1);
   S18_ThetaY_mI10_mI5__1800->SetBinContent(315,1.112245);
   S18_ThetaY_mI10_mI5__1800->SetBinContent(316,1.173469);
   S18_ThetaY_mI10_mI5__1800->SetBinContent(317,0.9591837);
   S18_ThetaY_mI10_mI5__1800->SetBinContent(318,0.255102);
   S18_ThetaY_mI10_mI5__1800->SetBinContent(319,0.01020408);
   S18_ThetaY_mI10_mI5__1800->SetBinError(313,0.01767399);
   S18_ThetaY_mI10_mI5__1800->SetBinError(314,0.1010153);
   S18_ThetaY_mI10_mI5__1800->SetBinError(315,0.1065337);
   S18_ThetaY_mI10_mI5__1800->SetBinError(316,0.1094266);
   S18_ThetaY_mI10_mI5__1800->SetBinError(317,0.09893224);
   S18_ThetaY_mI10_mI5__1800->SetBinError(318,0.05102041);
   S18_ThetaY_mI10_mI5__1800->SetBinError(319,0.01020408);
   S18_ThetaY_mI10_mI5__1800->SetMinimum(0);
   S18_ThetaY_mI10_mI5__1800->SetMaximum(1.321737);
   S18_ThetaY_mI10_mI5__1800->SetEntries(445);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1800->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__1800->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__1800->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__1800->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__1800->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__1800->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1800->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1800->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1800->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__1800->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__1800->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1800->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1800->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__1800->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__1800->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__1800->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1801 = new TH1D("ThetaY_mI10_mI5__1801","",630,-1575,1575);
   ThetaY_mI10_mI5__1801->SetBinContent(312,0.02447387);
   ThetaY_mI10_mI5__1801->SetBinContent(313,0.4984429);
   ThetaY_mI10_mI5__1801->SetBinContent(314,1);
   ThetaY_mI10_mI5__1801->SetBinContent(315,1.201579);
   ThetaY_mI10_mI5__1801->SetBinContent(316,1.190947);
   ThetaY_mI10_mI5__1801->SetBinContent(317,1.007015);
   ThetaY_mI10_mI5__1801->SetBinContent(318,0.5059926);
   ThetaY_mI10_mI5__1801->SetBinContent(319,0.02526031);
   ThetaY_mI10_mI5__1801->SetBinError(312,0.0008774309);
   ThetaY_mI10_mI5__1801->SetBinError(313,0.003959764);
   ThetaY_mI10_mI5__1801->SetBinError(314,0.005608692);
   ThetaY_mI10_mI5__1801->SetBinError(315,0.006148055);
   ThetaY_mI10_mI5__1801->SetBinError(316,0.006120793);
   ThetaY_mI10_mI5__1801->SetBinError(317,0.00562833);
   ThetaY_mI10_mI5__1801->SetBinError(318,0.00398964);
   ThetaY_mI10_mI5__1801->SetBinError(319,0.000891417);
   ThetaY_mI10_mI5__1801->SetEntries(173368);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1801->SetLineColor(ci);
   ThetaY_mI10_mI5__1801->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1801->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1801->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1801->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1801->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1801->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1801->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1801->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1801->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1801->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1801->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1801->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1801->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1801->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1801->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1801->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1801->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1801->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1801->Draw("AEsame");
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
   
   Double_t _fx3601[8] = {
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5};
   Double_t _fy3601[8] = {
   0,
   0.06141576,
   1,
   0.9256526,
   0.985325,
   0.9525019,
   0.5041616,
   0.4039571};
   Double_t _felx3601[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3601[8] = {
   0,
   0.03342692,
   0.1009964,
   0.08865036,
   0.09188635,
   0.09821042,
   0.1002283,
   0.3342513};
   Double_t _fehx3601[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3601[8] = {
   0.7685003,
   0.05975202,
   0.1117542,
   0.09757858,
   0.1008851,
   0.1089025,
   0.1224598,
   0.9308199};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3601,_fy3601,_felx3601,_fehx3601,_fely3601,_fehy3601);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3601 = new TH1F("Graph_Graph3601","",100,-100,100);
   Graph_Graph3601->SetMinimum(0);
   Graph_Graph3601->SetMaximum(1.5);
   Graph_Graph3601->SetDirectory(0);
   Graph_Graph3601->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3601->SetLineColor(ci);
   Graph_Graph3601->GetXaxis()->SetRange(1,100);
   Graph_Graph3601->GetXaxis()->CenterTitle(true);
   Graph_Graph3601->GetXaxis()->SetLabelFont(42);
   Graph_Graph3601->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3601->GetXaxis()->SetTitleFont(42);
   Graph_Graph3601->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3601->GetYaxis()->CenterTitle(true);
   Graph_Graph3601->GetYaxis()->SetLabelFont(42);
   Graph_Graph3601->GetYaxis()->SetTitleFont(42);
   Graph_Graph3601->GetZaxis()->SetLabelFont(42);
   Graph_Graph3601->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3601->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3601);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.321737,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1802 = new TH2D("ThetaY_vs_Y_mI10_mI5__1802","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8123,778);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8149,15845);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8175,31789);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8201,38197);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8227,37859);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8253,32012);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8279,16085);
   ThetaY_vs_Y_mI10_mI5__1802->SetBinContent(8305,803);
   ThetaY_vs_Y_mI10_mI5__1802->SetEntries(173368);
   ThetaY_vs_Y_mI10_mI5__1802->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(1,1909.85);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(2,3819.7);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(3,5729.55);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(4,7639.4);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(5,9549.25);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(6,11459.1);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(7,13368.95);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(8,15278.8);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(9,17188.65);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(10,19098.5);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(11,21008.35);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(12,22918.2);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(13,24828.05);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(14,26737.9);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(15,28647.75);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(16,30557.6);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(17,32467.45);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(18,34377.3);
   ThetaY_vs_Y_mI10_mI5__1802->SetContourLevel(19,36287.15);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1802->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1802->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1802->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1802->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1802->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1802->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1802->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1802->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1802->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1802->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1802->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1802->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1802->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1802->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1802->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1802->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-10_-5","Reco vertices","lpf");
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
