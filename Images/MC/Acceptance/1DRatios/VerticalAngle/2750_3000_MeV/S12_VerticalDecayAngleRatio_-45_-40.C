void S12_VerticalDecayAngleRatio_-45_-40()
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
   upper_pad->Range(-125,-0.1172059,125,2.226912);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI45_mI40__3 = new TH1D("S12_ThetaY_mI45_mI40__3","",630,-1575,1575);
   S12_ThetaY_mI45_mI40__3->SetBinContent(317,1);
   S12_ThetaY_mI45_mI40__3->SetBinError(317,0.7071068);
   S12_ThetaY_mI45_mI40__3->SetMinimum(0);
   S12_ThetaY_mI45_mI40__3->SetMaximum(1.9925);
   S12_ThetaY_mI45_mI40__3->SetEntries(2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__3->SetLineColor(ci);
   S12_ThetaY_mI45_mI40__3->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI45_mI40__3->SetMarkerColor(ci);
   S12_ThetaY_mI45_mI40__3->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI45_mI40__3->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI45_mI40__3->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__3->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__3->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__3->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI45_mI40__3->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI45_mI40__3->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__3->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__3->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI45_mI40__3->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI45_mI40__3->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI45_mI40__3->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__4 = new TH1D("ThetaY_mI45_mI40__4","",630,-1575,1575);
   ThetaY_mI45_mI40__4->SetBinContent(313,0.075);
   ThetaY_mI45_mI40__4->SetBinContent(314,0.8681818);
   ThetaY_mI45_mI40__4->SetBinContent(315,1.784091);
   ThetaY_mI45_mI40__4->SetBinContent(316,1.811364);
   ThetaY_mI45_mI40__4->SetBinContent(317,1);
   ThetaY_mI45_mI40__4->SetBinContent(318,0.04772727);
   ThetaY_mI45_mI40__4->SetBinError(313,0.01305582);
   ThetaY_mI45_mI40__4->SetBinError(314,0.04442005);
   ThetaY_mI45_mI40__4->SetBinError(315,0.06367694);
   ThetaY_mI45_mI40__4->SetBinError(316,0.06416179);
   ThetaY_mI45_mI40__4->SetBinError(317,0.04767313);
   ThetaY_mI45_mI40__4->SetBinError(318,0.01041494);
   ThetaY_mI45_mI40__4->SetEntries(2458);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__4->SetLineColor(ci);
   ThetaY_mI45_mI40__4->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__4->SetMarkerColor(ci);
   ThetaY_mI45_mI40__4->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__4->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__4->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__4->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__4->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__4->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__4->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__4->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__4->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__4->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__4->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__4->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__4->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__4->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__4->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__4->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__4->Draw("AEsame");
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
   
   Double_t _fx3002[6] = {
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5};
   Double_t _fy3002[6] = {
   0,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3002[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3002[6] = {
   0,
   0,
   0,
   0,
   0.6468269,
   0};
   Double_t _fehx3002[6] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3002[6] = {
   12.62229,
   1.062833,
   0.5165606,
   0.508774,
   1.325889,
   20.15757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-100,100);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(1.5);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->GetXaxis()->SetRange(1,100);
   Graph_Graph3002->GetXaxis()->CenterTitle(true);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3002->GetYaxis()->CenterTitle(true);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.9925,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__5 = new TH2D("ThetaY_vs_Y_mI45_mI40__5","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__5->SetBinContent(8142,33);
   ThetaY_vs_Y_mI45_mI40__5->SetBinContent(8168,382);
   ThetaY_vs_Y_mI45_mI40__5->SetBinContent(8194,785);
   ThetaY_vs_Y_mI45_mI40__5->SetBinContent(8220,797);
   ThetaY_vs_Y_mI45_mI40__5->SetBinContent(8246,440);
   ThetaY_vs_Y_mI45_mI40__5->SetBinContent(8272,21);
   ThetaY_vs_Y_mI45_mI40__5->SetEntries(2458);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__5->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__5->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__5->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__5->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__5->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__5->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__5->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__5->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__5->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__5->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__5->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__5->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__5->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__5->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__5->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__5->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-45_-40","Reco vertices","lpf");
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
