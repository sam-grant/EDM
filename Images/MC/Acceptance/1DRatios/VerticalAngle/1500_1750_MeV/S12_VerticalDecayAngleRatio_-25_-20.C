void S12_VerticalDecayAngleRatio_-25_-20()
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
   upper_pad->Range(-125,-0.06668372,125,1.266991);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__1050 = new TH1D("S12_ThetaY_mI25_mI20__1050","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(313,0.2105263);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(314,0.7039474);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(315,1.026316);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(316,0.75);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(317,1);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(318,0.9407895);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(319,0.8618421);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(320,0.5789474);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(321,0.3947368);
   S12_ThetaY_mI25_mI20__1050->SetBinContent(322,0.09868421);
   S12_ThetaY_mI25_mI20__1050->SetBinError(313,0.03721615);
   S12_ThetaY_mI25_mI20__1050->SetBinError(314,0.06805316);
   S12_ThetaY_mI25_mI20__1050->SetBinError(315,0.08217103);
   S12_ThetaY_mI25_mI20__1050->SetBinError(316,0.07024394);
   S12_ThetaY_mI25_mI20__1050->SetBinError(317,0.08111071);
   S12_ThetaY_mI25_mI20__1050->SetBinError(318,0.07867277);
   S12_ThetaY_mI25_mI20__1050->SetBinError(319,0.07529949);
   S12_ThetaY_mI25_mI20__1050->SetBinError(320,0.061716);
   S12_ThetaY_mI25_mI20__1050->SetBinError(321,0.05096031);
   S12_ThetaY_mI25_mI20__1050->SetBinError(322,0.02548015);
   S12_ThetaY_mI25_mI20__1050->SetMinimum(0);
   S12_ThetaY_mI25_mI20__1050->SetMaximum(1.133623);
   S12_ThetaY_mI25_mI20__1050->SetEntries(998);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1050->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__1050->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__1050->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__1050->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__1050->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__1050->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1050->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1050->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1050->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__1050->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__1050->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1050->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1050->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__1050->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__1050->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__1050->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1051 = new TH1D("ThetaY_mI25_mI20__1051","",630,-1575,1575);
   ThetaY_mI25_mI20__1051->SetBinContent(308,0.001030835);
   ThetaY_mI25_mI20__1051->SetBinContent(309,0.1381768);
   ThetaY_mI25_mI20__1051->SetBinContent(310,0.5073503);
   ThetaY_mI25_mI20__1051->SetBinContent(311,0.7384815);
   ThetaY_mI25_mI20__1051->SetBinContent(312,0.8726246);
   ThetaY_mI25_mI20__1051->SetBinContent(313,0.9645034);
   ThetaY_mI25_mI20__1051->SetBinContent(314,1.01107);
   ThetaY_mI25_mI20__1051->SetBinContent(315,1.030567);
   ThetaY_mI25_mI20__1051->SetBinContent(316,1.029894);
   ThetaY_mI25_mI20__1051->SetBinContent(317,1);
   ThetaY_mI25_mI20__1051->SetBinContent(318,0.9563464);
   ThetaY_mI25_mI20__1051->SetBinContent(319,0.8810954);
   ThetaY_mI25_mI20__1051->SetBinContent(320,0.7318035);
   ThetaY_mI25_mI20__1051->SetBinContent(321,0.5076192);
   ThetaY_mI25_mI20__1051->SetBinContent(322,0.1411796);
   ThetaY_mI25_mI20__1051->SetBinContent(323,0.0008067408);
   ThetaY_mI25_mI20__1051->SetBinError(308,0.000214944);
   ThetaY_mI25_mI20__1051->SetBinError(309,0.002488561);
   ThetaY_mI25_mI20__1051->SetBinError(310,0.004768532);
   ThetaY_mI25_mI20__1051->SetBinError(311,0.005753082);
   ThetaY_mI25_mI20__1051->SetBinError(312,0.006253807);
   ThetaY_mI25_mI20__1051->SetBinError(313,0.006574801);
   ThetaY_mI25_mI20__1051->SetBinError(314,0.006731648);
   ThetaY_mI25_mI20__1051->SetBinError(315,0.006796241);
   ThetaY_mI25_mI20__1051->SetBinError(316,0.006794024);
   ThetaY_mI25_mI20__1051->SetBinError(317,0.006694694);
   ThetaY_mI25_mI20__1051->SetBinError(318,0.00654694);
   ThetaY_mI25_mI20__1051->SetBinError(319,0.006284087);
   ThetaY_mI25_mI20__1051->SetBinError(320,0.005727011);
   ThetaY_mI25_mI20__1051->SetBinError(321,0.004769796);
   ThetaY_mI25_mI20__1051->SetBinError(322,0.002515456);
   ThetaY_mI25_mI20__1051->SetBinError(323,0.0001901506);
   ThetaY_mI25_mI20__1051->SetEntries(234556);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1051->SetLineColor(ci);
   ThetaY_mI25_mI20__1051->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1051->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1051->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1051->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1051->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1051->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1051->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1051->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1051->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1051->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1051->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1051->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1051->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1051->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1051->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1051->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1051->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1051->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1051->Draw("AEsame");
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
   
   Double_t _fx3351[16] = {
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
   Double_t _fy3351[16] = {
   0,
   0,
   0,
   0,
   0,
   0.2182743,
   0.6962398,
   0.9958754,
   0.7282301,
   1,
   0.983733,
   0.9781485,
   0.7911241,
   0.7776239,
   0.6989975,
   0};
   Double_t _felx3351[16] = {
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
   Double_t _fely3351[16] = {
   0,
   0,
   0,
   0,
   0,
   0.03841078,
   0.06736046,
   0.07991637,
   0.06827213,
   0.08129517,
   0.08244062,
   0.08563384,
   0.08439761,
   0.1003708,
   0.1788469,
   0};
   Double_t _fehx3351[16] = {
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
   Double_t _fehy3351[16] = {
   12.23273,
   0.0876819,
   0.02387496,
   0.01640212,
   0.0138806,
   0.04584984,
   0.07421885,
   0.0866058,
   0.07499696,
   0.08819283,
   0.08966114,
   0.0934851,
   0.09392577,
   0.1142548,
   0.2318081,
   15.80812};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3351,_fy3351,_felx3351,_fehx3351,_fely3351,_fehy3351);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3351 = new TH1F("Graph_Graph3351","",100,-100,100);
   Graph_Graph3351->SetMinimum(0);
   Graph_Graph3351->SetMaximum(1.5);
   Graph_Graph3351->SetDirectory(0);
   Graph_Graph3351->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3351->SetLineColor(ci);
   Graph_Graph3351->GetXaxis()->SetRange(1,100);
   Graph_Graph3351->GetXaxis()->CenterTitle(true);
   Graph_Graph3351->GetXaxis()->SetLabelFont(42);
   Graph_Graph3351->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3351->GetXaxis()->SetTitleFont(42);
   Graph_Graph3351->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3351->GetYaxis()->CenterTitle(true);
   Graph_Graph3351->GetYaxis()->SetLabelFont(42);
   Graph_Graph3351->GetYaxis()->SetTitleFont(42);
   Graph_Graph3351->GetZaxis()->SetLabelFont(42);
   Graph_Graph3351->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3351->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3351);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.133623,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1052 = new TH2D("ThetaY_vs_Y_mI25_mI20__1052","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8016,23);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8042,3083);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8068,11320);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8094,16477);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8120,19470);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8146,21520);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8172,22559);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8198,22994);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8224,22979);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8250,22312);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8276,21338);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8302,19659);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8328,16328);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8354,11326);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8380,3150);
   ThetaY_vs_Y_mI25_mI20__1052->SetBinContent(8406,18);
   ThetaY_vs_Y_mI25_mI20__1052->SetEntries(234556);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1052->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1052->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1052->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1052->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1052->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1052->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1052->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1052->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1052->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1052->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1052->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1052->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1052->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1052->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1052->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1052->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-25_-20","Reco vertices","lpf");
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
