void S12_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-1.558886,125,29.61883);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__27 = new TH1D("S12_ThetaY_mI5_0__27","",630,-1575,1575);
   S12_ThetaY_mI5_0__27->SetBinContent(314,13);
   S12_ThetaY_mI5_0__27->SetBinContent(315,17);
   S12_ThetaY_mI5_0__27->SetBinContent(316,18);
   S12_ThetaY_mI5_0__27->SetBinContent(317,7);
   S12_ThetaY_mI5_0__27->SetBinContent(318,1);
   S12_ThetaY_mI5_0__27->SetBinError(314,3.605551);
   S12_ThetaY_mI5_0__27->SetBinError(315,4.123106);
   S12_ThetaY_mI5_0__27->SetBinError(316,4.242641);
   S12_ThetaY_mI5_0__27->SetBinError(317,2.645751);
   S12_ThetaY_mI5_0__27->SetBinError(318,1);
   S12_ThetaY_mI5_0__27->SetMinimum(0);
   S12_ThetaY_mI5_0__27->SetMaximum(26.50106);
   S12_ThetaY_mI5_0__27->SetEntries(56);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__27->SetLineColor(ci);
   S12_ThetaY_mI5_0__27->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__27->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__27->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__27->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__27->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__27->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__27->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__27->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__27->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__27->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__27->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__27->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__27->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__27->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__27->Draw("AE");
   
   TH1D *ThetaY_mI5_0__28 = new TH1D("ThetaY_mI5_0__28","",630,-1575,1575);
   ThetaY_mI5_0__28->SetBinContent(313,0.9178445);
   ThetaY_mI5_0__28->SetBinContent(314,13.27473);
   ThetaY_mI5_0__28->SetBinContent(315,24.01943);
   ThetaY_mI5_0__28->SetBinContent(316,24.09187);
   ThetaY_mI5_0__28->SetBinContent(317,13.08834);
   ThetaY_mI5_0__28->SetBinContent(318,1);
   ThetaY_mI5_0__28->SetBinError(313,0.02847484);
   ThetaY_mI5_0__28->SetBinError(314,0.1082903);
   ThetaY_mI5_0__28->SetBinError(315,0.145666);
   ThetaY_mI5_0__28->SetBinError(316,0.1458855);
   ThetaY_mI5_0__28->SetBinError(317,0.1075274);
   ThetaY_mI5_0__28->SetBinError(318,0.02972191);
   ThetaY_mI5_0__28->SetEntries(86476);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__28->SetLineColor(ci);
   ThetaY_mI5_0__28->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__28->SetMarkerColor(ci);
   ThetaY_mI5_0__28->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__28->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__28->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__28->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__28->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__28->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__28->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__28->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__28->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__28->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__28->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__28->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__28->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__28->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__28->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__28->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__28->Draw("AEsame");
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
   
   Double_t _fx3010[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3010[6] = {
   0,
   0.9793039,
   0.7077602,
   0.7471399,
   0.5348272,
   1};
   Double_t _felx3010[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3010[6] = {
   0,
   0.2681857,
   0.1700036,
   0.1745071,
   0.1972752,
   0.8273855};
   Double_t _fehx3010[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3010[6] = {
   2.007588,
   0.3540816,
   0.2167347,
   0.2209576,
   0.2881688,
   2.30288};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-100,100);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(1.5);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3010->SetLineColor(ci);
   Graph_Graph3010->GetXaxis()->SetRange(1,100);
   Graph_Graph3010->GetXaxis()->CenterTitle(true);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3010->GetYaxis()->CenterTitle(true);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,26.50106,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI5_0__29 = new TH2D("ThetaY_vs_Y_mI5_0__29","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__29->SetBinContent(8150,1039);
   ThetaY_vs_Y_mI5_0__29->SetBinContent(8176,15027);
   ThetaY_vs_Y_mI5_0__29->SetBinContent(8202,27190);
   ThetaY_vs_Y_mI5_0__29->SetBinContent(8228,27272);
   ThetaY_vs_Y_mI5_0__29->SetBinContent(8254,14816);
   ThetaY_vs_Y_mI5_0__29->SetBinContent(8280,1132);
   ThetaY_vs_Y_mI5_0__29->SetEntries(86476);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__29->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__29->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__29->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__29->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__29->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__29->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__29->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__29->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__29->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__29->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__29->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__29->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__29->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__29->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__29->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__29->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
