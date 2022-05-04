void S12_VerticalDecayAngleRatio_10_15()
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
   upper_pad->Range(-125,-0.09039282,125,1.717464);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_10_15__1071 = new TH1D("S12_ThetaY_10_15__1071","",630,-1575,1575);
   S12_ThetaY_10_15__1071->SetBinContent(309,0.04608295);
   S12_ThetaY_10_15__1071->SetBinContent(310,0.4700461);
   S12_ThetaY_10_15__1071->SetBinContent(311,1);
   S12_ThetaY_10_15__1071->SetBinContent(312,1.119816);
   S12_ThetaY_10_15__1071->SetBinContent(313,1.221198);
   S12_ThetaY_10_15__1071->SetBinContent(314,1.207373);
   S12_ThetaY_10_15__1071->SetBinContent(315,1.207373);
   S12_ThetaY_10_15__1071->SetBinContent(316,1.211982);
   S12_ThetaY_10_15__1071->SetBinContent(317,1.285714);
   S12_ThetaY_10_15__1071->SetBinContent(318,1.156682);
   S12_ThetaY_10_15__1071->SetBinContent(319,0.2534562);
   S12_ThetaY_10_15__1071->SetBinContent(320,0.004608295);
   S12_ThetaY_10_15__1071->SetBinError(309,0.01457271);
   S12_ThetaY_10_15__1071->SetBinError(310,0.0465415);
   S12_ThetaY_10_15__1071->SetBinError(311,0.06788442);
   S12_ThetaY_10_15__1071->SetBinError(312,0.07183621);
   S12_ThetaY_10_15__1071->SetBinError(313,0.07501761);
   S12_ThetaY_10_15__1071->SetBinError(314,0.07459177);
   S12_ThetaY_10_15__1071->SetBinError(315,0.07459177);
   S12_ThetaY_10_15__1071->SetBinError(316,0.07473398);
   S12_ThetaY_10_15__1071->SetBinError(317,0.0769737);
   S12_ThetaY_10_15__1071->SetBinError(318,0.07300912);
   S12_ThetaY_10_15__1071->SetBinError(319,0.03417603);
   S12_ThetaY_10_15__1071->SetBinError(320,0.004608295);
   S12_ThetaY_10_15__1071->SetMinimum(0);
   S12_ThetaY_10_15__1071->SetMaximum(1.536678);
   S12_ThetaY_10_15__1071->SetEntries(2210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1071->SetLineColor(ci);
   S12_ThetaY_10_15__1071->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_10_15__1071->SetMarkerColor(ci);
   S12_ThetaY_10_15__1071->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_10_15__1071->GetXaxis()->SetRange(296,335);
   S12_ThetaY_10_15__1071->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1071->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1071->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1071->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_10_15__1071->GetYaxis()->CenterTitle(true);
   S12_ThetaY_10_15__1071->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1071->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1071->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_10_15__1071->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_10_15__1071->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_10_15__1071->Draw("AE");
   
   TH1D *ThetaY_10_15__1072 = new TH1D("ThetaY_10_15__1072","",630,-1575,1575);
   ThetaY_10_15__1072->SetBinContent(308,0.001334182);
   ThetaY_10_15__1072->SetBinContent(309,0.1909397);
   ThetaY_10_15__1072->SetBinContent(310,0.6853452);
   ThetaY_10_15__1072->SetBinContent(311,1);
   ThetaY_10_15__1072->SetBinContent(312,1.182631);
   ThetaY_10_15__1072->SetBinContent(313,1.297765);
   ThetaY_10_15__1072->SetBinContent(314,1.361685);
   ThetaY_10_15__1072->SetBinContent(315,1.39698);
   ThetaY_10_15__1072->SetBinContent(316,1.391492);
   ThetaY_10_15__1072->SetBinContent(317,1.364383);
   ThetaY_10_15__1072->SetBinContent(318,1.291246);
   ThetaY_10_15__1072->SetBinContent(319,1.192031);
   ThetaY_10_15__1072->SetBinContent(320,1.000788);
   ThetaY_10_15__1072->SetBinContent(321,0.684193);
   ThetaY_10_15__1072->SetBinContent(322,0.1913945);
   ThetaY_10_15__1072->SetBinContent(323,0.001425149);
   ThetaY_10_15__1072->SetBinError(308,0.0002011356);
   ThetaY_10_15__1072->SetBinError(309,0.002406187);
   ThetaY_10_15__1072->SetBinError(310,0.004558647);
   ThetaY_10_15__1072->SetBinError(311,0.005506571);
   ThetaY_10_15__1072->SetBinError(312,0.005988333);
   ThetaY_10_15__1072->SetBinError(313,0.006273058);
   ThetaY_10_15__1072->SetBinError(314,0.006425687);
   ThetaY_10_15__1072->SetBinError(315,0.006508431);
   ThetaY_10_15__1072->SetBinError(316,0.006495634);
   ThetaY_10_15__1072->SetBinError(317,0.006432051);
   ThetaY_10_15__1072->SetBinError(318,0.006257282);
   ThetaY_10_15__1072->SetBinError(319,0.006012085);
   ThetaY_10_15__1072->SetBinError(320,0.005508741);
   ThetaY_10_15__1072->SetBinError(321,0.004554813);
   ThetaY_10_15__1072->SetBinError(322,0.002409051);
   ThetaY_10_15__1072->SetBinError(323,0.0002078794);
   ThetaY_10_15__1072->SetEntries(469411);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1072->SetLineColor(ci);
   ThetaY_10_15__1072->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1072->SetMarkerColor(ci);
   ThetaY_10_15__1072->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1072->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1072->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1072->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1072->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1072->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1072->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1072->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1072->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1072->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1072->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1072->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1072->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1072->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1072->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1072->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1072->Draw("AEsame");
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
   
   Double_t _fx3358[16] = {
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
   Double_t _fy3358[16] = {
   0,
   0.2413482,
   0.685853,
   1,
   0.9468848,
   0.9410008,
   0.8866761,
   0.8642739,
   0.8709946,
   0.9423409,
   0.8957875,
   0.2126255,
   0.004604665,
   0,
   0,
   0};
   Double_t _felx3358[16] = {
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
   Double_t _fely3358[16] = {
   0,
   0.07508201,
   0.06794944,
   0.06805391,
   0.06088894,
   0.05794667,
   0.05490295,
   0.0535119,
   0.0538267,
   0.05655659,
   0.05666958,
   0.02860261,
   0.003809213,
   0,
   0,
   0};
   Double_t _fehx3358[16] = {
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
   Double_t _fehy3358[16] = {
   6.493837,
   0.1030987,
   0.0750429,
   0.07285291,
   0.06493784,
   0.06163126,
   0.05841384,
   0.05693355,
   0.05726181,
   0.06005861,
   0.06037468,
   0.03273657,
   0.01058908,
   0.01240047,
   0.0443336,
   6.071169};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3358,_fy3358,_felx3358,_fehx3358,_fely3358,_fehy3358);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3358 = new TH1F("Graph_Graph3358","",100,-100,100);
   Graph_Graph3358->SetMinimum(0);
   Graph_Graph3358->SetMaximum(1.5);
   Graph_Graph3358->SetDirectory(0);
   Graph_Graph3358->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3358->SetLineColor(ci);
   Graph_Graph3358->GetXaxis()->SetRange(1,100);
   Graph_Graph3358->GetXaxis()->CenterTitle(true);
   Graph_Graph3358->GetXaxis()->SetLabelFont(42);
   Graph_Graph3358->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3358->GetXaxis()->SetTitleFont(42);
   Graph_Graph3358->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3358->GetYaxis()->CenterTitle(true);
   Graph_Graph3358->GetYaxis()->SetLabelFont(42);
   Graph_Graph3358->GetYaxis()->SetTitleFont(42);
   Graph_Graph3358->GetZaxis()->SetLabelFont(42);
   Graph_Graph3358->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3358->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3358);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.536678,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1073 = new TH2D("ThetaY_vs_Y_10_15__1073","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8023,44);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8049,6297);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8075,22602);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8101,32979);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8127,39002);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8153,42799);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8179,44907);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8205,46071);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8231,45890);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8257,44996);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8283,42584);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8309,39312);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8335,33005);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8361,22564);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8387,6312);
   ThetaY_vs_Y_10_15__1073->SetBinContent(8413,47);
   ThetaY_vs_Y_10_15__1073->SetEntries(469411);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1073->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1073->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1073->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1073->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1073->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1073->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1073->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1073->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1073->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1073->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1073->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1073->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1073->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1073->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1073->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1073->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_10_15","Reco vertices","lpf");
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
