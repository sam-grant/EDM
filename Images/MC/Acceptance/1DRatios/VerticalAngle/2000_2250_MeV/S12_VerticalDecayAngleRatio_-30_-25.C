void S12_VerticalDecayAngleRatio_-30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-39.95,125,759.05);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__1389 = new TH1D("S12_ThetaY_mI30_mI25__1389","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(314,13);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(315,51);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(316,64);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(317,49);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(318,43);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(319,46);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(320,14);
   S12_ThetaY_mI30_mI25__1389->SetBinContent(321,1);
   S12_ThetaY_mI30_mI25__1389->SetBinError(314,3.605551);
   S12_ThetaY_mI30_mI25__1389->SetBinError(315,7.141428);
   S12_ThetaY_mI30_mI25__1389->SetBinError(316,8);
   S12_ThetaY_mI30_mI25__1389->SetBinError(317,7);
   S12_ThetaY_mI30_mI25__1389->SetBinError(318,6.557439);
   S12_ThetaY_mI30_mI25__1389->SetBinError(319,6.78233);
   S12_ThetaY_mI30_mI25__1389->SetBinError(320,3.741657);
   S12_ThetaY_mI30_mI25__1389->SetBinError(321,1);
   S12_ThetaY_mI30_mI25__1389->SetMinimum(0);
   S12_ThetaY_mI30_mI25__1389->SetMaximum(679.15);
   S12_ThetaY_mI30_mI25__1389->SetEntries(281);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1389->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__1389->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1389->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__1389->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__1389->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__1389->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1389->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1389->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1389->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__1389->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__1389->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1389->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1389->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1389->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1389->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1389->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1390 = new TH1D("ThetaY_mI30_mI25__1390","",630,-1575,1575);
   ThetaY_mI30_mI25__1390->SetBinContent(310,0.6818182);
   ThetaY_mI30_mI25__1390->SetBinContent(311,123);
   ThetaY_mI30_mI25__1390->SetBinContent(312,372.5455);
   ThetaY_mI30_mI25__1390->SetBinContent(313,505.1818);
   ThetaY_mI30_mI25__1390->SetBinContent(314,572.5909);
   ThetaY_mI30_mI25__1390->SetBinContent(315,611.4545);
   ThetaY_mI30_mI25__1390->SetBinContent(316,617.4091);
   ThetaY_mI30_mI25__1390->SetBinContent(317,577.5909);
   ThetaY_mI30_mI25__1390->SetBinContent(318,516.5455);
   ThetaY_mI30_mI25__1390->SetBinContent(319,374.4091);
   ThetaY_mI30_mI25__1390->SetBinContent(320,125.4545);
   ThetaY_mI30_mI25__1390->SetBinContent(321,1);
   ThetaY_mI30_mI25__1390->SetBinError(310,0.1760447);
   ThetaY_mI30_mI25__1390->SetBinError(311,2.36451);
   ThetaY_mI30_mI25__1390->SetBinError(312,4.11508);
   ThetaY_mI30_mI25__1390->SetBinError(313,4.791953);
   ThetaY_mI30_mI25__1390->SetBinError(314,5.101653);
   ThetaY_mI30_mI25__1390->SetBinError(315,5.271944);
   ThetaY_mI30_mI25__1390->SetBinError(316,5.297551);
   ThetaY_mI30_mI25__1390->SetBinError(317,5.123879);
   ThetaY_mI30_mI25__1390->SetBinError(318,4.845548);
   ThetaY_mI30_mI25__1390->SetBinError(319,4.12536);
   ThetaY_mI30_mI25__1390->SetBinError(320,2.387986);
   ThetaY_mI30_mI25__1390->SetBinError(321,0.2132007);
   ThetaY_mI30_mI25__1390->SetEntries(96753);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1390->SetLineColor(ci);
   ThetaY_mI30_mI25__1390->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1390->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1390->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1390->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1390->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1390->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1390->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1390->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1390->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1390->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1390->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1390->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1390->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1390->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1390->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1390->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1390->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1390->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1390->Draw("AEsame");
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
   
   Double_t _fx3464[12] = {
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
   27.5};
   Double_t _fy3464[12] = {
   0,
   0,
   0,
   0,
   0.02270382,
   0.08340767,
   0.103659,
   0.08483513,
   0.08324534,
   0.1228603,
   0.1115942,
   1};
   Double_t _felx3464[12] = {
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
   Double_t _fely3464[12] = {
   0,
   0,
   0,
   0,
   0.006218,
   0.01166262,
   0.01295338,
   0.01210061,
   0.0126686,
   0.01809794,
   0.02953462,
   0.8341351};
   Double_t _fehx3464[12] = {
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
   Double_t _fehy3464[12] = {
   2.87286,
   0.01497275,
   0.004942292,
   0.003644577,
   0.008209828,
   0.01342066,
   0.01468391,
   0.01396436,
   0.01476193,
   0.02098521,
   0.03863431,
   2.476696};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3464,_fy3464,_felx3464,_fehx3464,_fely3464,_fehy3464);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3464 = new TH1F("Graph_Graph3464","",100,-100,100);
   Graph_Graph3464->SetMinimum(0);
   Graph_Graph3464->SetMaximum(1.5);
   Graph_Graph3464->SetDirectory(0);
   Graph_Graph3464->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3464->SetLineColor(ci);
   Graph_Graph3464->GetXaxis()->SetRange(1,100);
   Graph_Graph3464->GetXaxis()->CenterTitle(true);
   Graph_Graph3464->GetXaxis()->SetLabelFont(42);
   Graph_Graph3464->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3464->GetXaxis()->SetTitleFont(42);
   Graph_Graph3464->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3464->GetYaxis()->CenterTitle(true);
   Graph_Graph3464->GetYaxis()->SetLabelFont(42);
   Graph_Graph3464->GetYaxis()->SetTitleFont(42);
   Graph_Graph3464->GetZaxis()->SetLabelFont(42);
   Graph_Graph3464->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3464->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3464);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,679.15,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1391 = new TH2D("ThetaY_vs_Y_mI30_mI25__1391","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8067,15);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8093,2706);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8119,8196);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8145,11114);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8171,12597);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8197,13452);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8223,13583);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8249,12707);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8275,11364);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8301,8237);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8327,2760);
   ThetaY_vs_Y_mI30_mI25__1391->SetBinContent(8353,22);
   ThetaY_vs_Y_mI30_mI25__1391->SetEntries(96753);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1391->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1391->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1391->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1391->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1391->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1391->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1391->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1391->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1391->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1391->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1391->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1391->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1391->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1391->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1391->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1391->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-30_-25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-30_-25","Reco vertices","lpf");
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
