void S12_VerticalDecayAngleRatio_35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.2098467,125,3.987086);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_35_40__1599 = new TH1D("S12_ThetaY_35_40__1599","",630,-1575,1575);
   S12_ThetaY_35_40__1599->SetBinContent(312,1);
   S12_ThetaY_35_40__1599->SetBinContent(313,0.8333333);
   S12_ThetaY_35_40__1599->SetBinContent(314,1.166667);
   S12_ThetaY_35_40__1599->SetBinContent(315,1.666667);
   S12_ThetaY_35_40__1599->SetBinContent(316,0.6666667);
   S12_ThetaY_35_40__1599->SetBinError(312,0.4082483);
   S12_ThetaY_35_40__1599->SetBinError(313,0.372678);
   S12_ThetaY_35_40__1599->SetBinError(314,0.4409586);
   S12_ThetaY_35_40__1599->SetBinError(315,0.5270463);
   S12_ThetaY_35_40__1599->SetBinError(316,0.3333333);
   S12_ThetaY_35_40__1599->SetMinimum(0);
   S12_ThetaY_35_40__1599->SetMaximum(3.567393);
   S12_ThetaY_35_40__1599->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1599->SetLineColor(ci);
   S12_ThetaY_35_40__1599->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_35_40__1599->SetMarkerColor(ci);
   S12_ThetaY_35_40__1599->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_35_40__1599->GetXaxis()->SetRange(296,335);
   S12_ThetaY_35_40__1599->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1599->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1599->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1599->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_35_40__1599->GetYaxis()->CenterTitle(true);
   S12_ThetaY_35_40__1599->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1599->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1599->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_35_40__1599->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_35_40__1599->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_35_40__1599->Draw("AE");
   
   TH1D *ThetaY_35_40__1600 = new TH1D("ThetaY_35_40__1600","",630,-1575,1575);
   ThetaY_35_40__1600->SetBinContent(311,0.02347024);
   ThetaY_35_40__1600->SetBinContent(312,1);
   ThetaY_35_40__1600->SetBinContent(313,2.295893);
   ThetaY_35_40__1600->SetBinContent(314,2.923722);
   ThetaY_35_40__1600->SetBinContent(315,3.243085);
   ThetaY_35_40__1600->SetBinContent(316,3.203688);
   ThetaY_35_40__1600->SetBinContent(317,3.039396);
   ThetaY_35_40__1600->SetBinContent(318,2.28751);
   ThetaY_35_40__1600->SetBinContent(319,0.9346186);
   ThetaY_35_40__1600->SetBinContent(320,0.01676446);
   ThetaY_35_40__1600->SetBinError(311,0.004435459);
   ThetaY_35_40__1600->SetBinError(312,0.02895208);
   ThetaY_35_40__1600->SetBinError(313,0.04386878);
   ThetaY_35_40__1600->SetBinError(314,0.04950486);
   ThetaY_35_40__1600->SetBinError(315,0.05213855);
   ThetaY_35_40__1600->SetBinError(316,0.05182089);
   ThetaY_35_40__1600->SetBinError(317,0.05047467);
   ThetaY_35_40__1600->SetBinError(318,0.04378863);
   ThetaY_35_40__1600->SetBinError(319,0.02798962);
   ThetaY_35_40__1600->SetBinError(320,0.003748647);
   ThetaY_35_40__1600->SetEntries(22629);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1600->SetLineColor(ci);
   ThetaY_35_40__1600->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_35_40__1600->SetMarkerColor(ci);
   ThetaY_35_40__1600->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_35_40__1600->GetXaxis()->CenterTitle(true);
   ThetaY_35_40__1600->GetXaxis()->SetLabelFont(42);
   ThetaY_35_40__1600->GetXaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1600->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1600->GetXaxis()->SetTitleFont(42);
   ThetaY_35_40__1600->GetYaxis()->SetTitle("Tracks");
   ThetaY_35_40__1600->GetYaxis()->CenterTitle(true);
   ThetaY_35_40__1600->GetYaxis()->SetNdivisions(4000510);
   ThetaY_35_40__1600->GetYaxis()->SetLabelFont(42);
   ThetaY_35_40__1600->GetYaxis()->SetTitleSize(0.04);
   ThetaY_35_40__1600->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_35_40__1600->GetYaxis()->SetTitleFont(42);
   ThetaY_35_40__1600->GetZaxis()->SetLabelFont(42);
   ThetaY_35_40__1600->GetZaxis()->SetTitleOffset(1);
   ThetaY_35_40__1600->GetZaxis()->SetTitleFont(42);
   ThetaY_35_40__1600->Draw("AEsame");
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
   
   Double_t _fx3534[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3534[10] = {
   0,
   1,
   0.362967,
   0.3990348,
   0.513914,
   0.2080935,
   0,
   0,
   0,
   0};
   Double_t _felx3534[10] = {
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
   Double_t _fely3534[10] = {
   0,
   0.3975082,
   0.1568982,
   0.1472859,
   0.159948,
   0.09963173,
   0,
   0,
   0,
   0};
   Double_t _fehx3534[10] = {
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
   Double_t _fehy3534[10] = {
   13.51282,
   0.5996726,
   0.245921,
   0.2152565,
   0.2196888,
   0.1646913,
   0.1009789,
   0.134181,
   0.328573,
   19.17167};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3534,_fy3534,_felx3534,_fehx3534,_fely3534,_fehy3534);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3534 = new TH1F("Graph_Graph3534","",100,-100,100);
   Graph_Graph3534->SetMinimum(0);
   Graph_Graph3534->SetMaximum(1.5);
   Graph_Graph3534->SetDirectory(0);
   Graph_Graph3534->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3534->SetLineColor(ci);
   Graph_Graph3534->GetXaxis()->SetRange(1,100);
   Graph_Graph3534->GetXaxis()->CenterTitle(true);
   Graph_Graph3534->GetXaxis()->SetLabelFont(42);
   Graph_Graph3534->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3534->GetXaxis()->SetTitleFont(42);
   Graph_Graph3534->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3534->GetYaxis()->CenterTitle(true);
   Graph_Graph3534->GetYaxis()->SetLabelFont(42);
   Graph_Graph3534->GetYaxis()->SetTitleFont(42);
   Graph_Graph3534->GetZaxis()->SetLabelFont(42);
   Graph_Graph3534->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3534->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3534);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,3.567393,510,"S");
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
   
   TH2D *ThetaY_vs_Y_35_40__1601 = new TH2D("ThetaY_vs_Y_35_40__1601","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8106,28);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8132,1193);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8158,2739);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8184,3488);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8210,3869);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8236,3822);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8262,3626);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8288,2729);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8314,1115);
   ThetaY_vs_Y_35_40__1601->SetBinContent(8340,20);
   ThetaY_vs_Y_35_40__1601->SetEntries(22629);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_35_40__1601->SetLineColor(ci);
   ThetaY_vs_Y_35_40__1601->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_35_40__1601->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_35_40__1601->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1601->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1601->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1601->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1601->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_35_40__1601->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_35_40__1601->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_35_40__1601->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1601->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1601->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_35_40__1601->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_35_40__1601->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_35_40__1601->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_35_40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_35_40","Reco vertices","lpf");
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
