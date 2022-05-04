void S12_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:03 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06896377,125,1.310311);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI20_mI15__1395 = new TH1D("S12_ThetaY_mI20_mI15__1395","",630,-1575,1575);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(313,0.0979021);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(314,0.6783217);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(315,0.8461538);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(316,0.9370629);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(317,1);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(318,0.8811189);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(319,0.5874126);
   S12_ThetaY_mI20_mI15__1395->SetBinContent(320,0.1118881);
   S12_ThetaY_mI20_mI15__1395->SetBinError(313,0.02616544);
   S12_ThetaY_mI20_mI15__1395->SetBinError(314,0.06887313);
   S12_ThetaY_mI20_mI15__1395->SetBinError(315,0.07692308);
   S12_ThetaY_mI20_mI15__1395->SetBinError(316,0.08094991);
   S12_ThetaY_mI20_mI15__1395->SetBinError(317,0.0836242);
   S12_ThetaY_mI20_mI15__1395->SetBinError(318,0.07849631);
   S12_ThetaY_mI20_mI15__1395->SetBinError(319,0.06409197);
   S12_ThetaY_mI20_mI15__1395->SetBinError(320,0.02797203);
   S12_ThetaY_mI20_mI15__1395->SetMinimum(0);
   S12_ThetaY_mI20_mI15__1395->SetMaximum(1.172384);
   S12_ThetaY_mI20_mI15__1395->SetEntries(735);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1395->SetLineColor(ci);
   S12_ThetaY_mI20_mI15__1395->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI20_mI15__1395->SetMarkerColor(ci);
   S12_ThetaY_mI20_mI15__1395->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI20_mI15__1395->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI20_mI15__1395->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1395->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1395->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1395->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI20_mI15__1395->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI20_mI15__1395->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1395->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1395->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI20_mI15__1395->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI20_mI15__1395->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI20_mI15__1395->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__1396 = new TH1D("ThetaY_mI20_mI15__1396","",630,-1575,1575);
   ThetaY_mI20_mI15__1396->SetBinContent(310,0.001475718);
   ThetaY_mI20_mI15__1396->SetBinContent(311,0.2193789);
   ThetaY_mI20_mI15__1396->SetBinContent(312,0.6472028);
   ThetaY_mI20_mI15__1396->SetBinContent(313,0.8771465);
   ThetaY_mI20_mI15__1396->SetBinContent(314,1.004763);
   ThetaY_mI20_mI15__1396->SetBinContent(315,1.064294);
   ThetaY_mI20_mI15__1396->SetBinContent(316,1.065804);
   ThetaY_mI20_mI15__1396->SetBinContent(317,1);
   ThetaY_mI20_mI15__1396->SetBinContent(318,0.886135);
   ThetaY_mI20_mI15__1396->SetBinContent(319,0.6478736);
   ThetaY_mI20_mI15__1396->SetBinContent(320,0.2123692);
   ThetaY_mI20_mI15__1396->SetBinContent(321,0.001844647);
   ThetaY_mI20_mI15__1396->SetBinError(310,0.0002224728);
   ThetaY_mI20_mI15__1396->SetBinError(311,0.002712518);
   ThetaY_mI20_mI15__1396->SetBinError(312,0.00465903);
   ThetaY_mI20_mI15__1396->SetBinError(313,0.005423896);
   ThetaY_mI20_mI15__1396->SetBinError(314,0.005805064);
   ThetaY_mI20_mI15__1396->SetBinError(315,0.005974564);
   ThetaY_mI20_mI15__1396->SetBinError(316,0.005978798);
   ThetaY_mI20_mI15__1396->SetBinError(317,0.00579129);
   ThetaY_mI20_mI15__1396->SetBinError(318,0.005451616);
   ThetaY_mI20_mI15__1396->SetBinError(319,0.004661444);
   ThetaY_mI20_mI15__1396->SetBinError(320,0.002668831);
   ThetaY_mI20_mI15__1396->SetBinError(321,0.0002487322);
   ThetaY_mI20_mI15__1396->SetEntries(227445);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1396->SetLineColor(ci);
   ThetaY_mI20_mI15__1396->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__1396->SetMarkerColor(ci);
   ThetaY_mI20_mI15__1396->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__1396->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1396->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1396->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1396->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1396->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1396->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__1396->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__1396->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__1396->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1396->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__1396->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__1396->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1396->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__1396->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__1396->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__1396->Draw("AEsame");
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
   
   Double_t _fx3466[12] = {
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
   Double_t _fy3466[12] = {
   0,
   0,
   0,
   0.1116143,
   0.6751065,
   0.7950374,
   0.8792079,
   1,
   0.9943394,
   0.9066777,
   0.5268566,
   0};
   Double_t _felx3466[12] = {
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
   Double_t _fely3466[12] = {
   0,
   0,
   0,
   0.02947754,
   0.06853792,
   0.07231252,
   0.07601575,
   0.08372505,
   0.08867419,
   0.09894131,
   0.1304797,
   0};
   Double_t _fehx3466[12] = {
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
   Double_t _fehy3466[12] = {
   8.909165,
   0.05869339,
   0.01989313,
   0.03852383,
   0.07587858,
   0.07921153,
   0.08289295,
   0.09104962,
   0.09696171,
   0.1103816,
   0.1676565,
   7.097386};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3466,_fy3466,_felx3466,_fehx3466,_fely3466,_fehy3466);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3466 = new TH1F("Graph_Graph3466","",100,-100,100);
   Graph_Graph3466->SetMinimum(0);
   Graph_Graph3466->SetMaximum(1.5);
   Graph_Graph3466->SetDirectory(0);
   Graph_Graph3466->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3466->SetLineColor(ci);
   Graph_Graph3466->GetXaxis()->SetRange(1,100);
   Graph_Graph3466->GetXaxis()->CenterTitle(true);
   Graph_Graph3466->GetXaxis()->SetLabelFont(42);
   Graph_Graph3466->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3466->GetXaxis()->SetTitleFont(42);
   Graph_Graph3466->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3466->GetYaxis()->CenterTitle(true);
   Graph_Graph3466->GetYaxis()->SetLabelFont(42);
   Graph_Graph3466->GetYaxis()->SetTitleFont(42);
   Graph_Graph3466->GetZaxis()->SetLabelFont(42);
   Graph_Graph3466->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3466->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3466);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.172384,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__1397 = new TH2D("ThetaY_vs_Y_mI20_mI15__1397","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8069,44);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8095,6541);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8121,19297);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8147,26153);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8173,29958);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8199,31733);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8225,31778);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8251,29816);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8277,26421);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8303,19317);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8329,6332);
   ThetaY_vs_Y_mI20_mI15__1397->SetBinContent(8355,55);
   ThetaY_vs_Y_mI20_mI15__1397->SetEntries(227445);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__1397->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__1397->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__1397->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__1397->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1397->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1397->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1397->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1397->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__1397->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__1397->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__1397->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1397->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1397->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__1397->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__1397->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__1397->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-20_-15","Reco vertices","lpf");
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
