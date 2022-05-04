void S12_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:51 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-10.97157,125,208.4598);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI25_mI20__879 = new TH1D("S12_ThetaY_mI25_mI20__879","",630,-1575,1575);
   S12_ThetaY_mI25_mI20__879->SetBinContent(312,0.5);
   S12_ThetaY_mI25_mI20__879->SetBinContent(313,30.5);
   S12_ThetaY_mI25_mI20__879->SetBinContent(314,73);
   S12_ThetaY_mI25_mI20__879->SetBinContent(315,75);
   S12_ThetaY_mI25_mI20__879->SetBinContent(316,70.5);
   S12_ThetaY_mI25_mI20__879->SetBinContent(317,83.5);
   S12_ThetaY_mI25_mI20__879->SetBinContent(318,68);
   S12_ThetaY_mI25_mI20__879->SetBinContent(319,56);
   S12_ThetaY_mI25_mI20__879->SetBinContent(320,61);
   S12_ThetaY_mI25_mI20__879->SetBinContent(321,54);
   S12_ThetaY_mI25_mI20__879->SetBinContent(322,38.5);
   S12_ThetaY_mI25_mI20__879->SetBinContent(323,13);
   S12_ThetaY_mI25_mI20__879->SetBinContent(324,1);
   S12_ThetaY_mI25_mI20__879->SetBinError(312,0.5);
   S12_ThetaY_mI25_mI20__879->SetBinError(313,3.905125);
   S12_ThetaY_mI25_mI20__879->SetBinError(314,6.041523);
   S12_ThetaY_mI25_mI20__879->SetBinError(315,6.123724);
   S12_ThetaY_mI25_mI20__879->SetBinError(316,5.937171);
   S12_ThetaY_mI25_mI20__879->SetBinError(317,6.461424);
   S12_ThetaY_mI25_mI20__879->SetBinError(318,5.830952);
   S12_ThetaY_mI25_mI20__879->SetBinError(319,5.291503);
   S12_ThetaY_mI25_mI20__879->SetBinError(320,5.522681);
   S12_ThetaY_mI25_mI20__879->SetBinError(321,5.196152);
   S12_ThetaY_mI25_mI20__879->SetBinError(322,4.387482);
   S12_ThetaY_mI25_mI20__879->SetBinError(323,2.54951);
   S12_ThetaY_mI25_mI20__879->SetBinError(324,0.7071068);
   S12_ThetaY_mI25_mI20__879->SetMinimum(0);
   S12_ThetaY_mI25_mI20__879->SetMaximum(186.5167);
   S12_ThetaY_mI25_mI20__879->SetEntries(1249);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__879->SetLineColor(ci);
   S12_ThetaY_mI25_mI20__879->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI25_mI20__879->SetMarkerColor(ci);
   S12_ThetaY_mI25_mI20__879->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI25_mI20__879->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI25_mI20__879->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__879->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__879->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__879->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI25_mI20__879->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI25_mI20__879->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__879->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__879->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI25_mI20__879->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI25_mI20__879->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI25_mI20__879->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__880 = new TH1D("ThetaY_mI25_mI20__880","",630,-1575,1575);
   ThetaY_mI25_mI20__880->SetBinContent(307,0.7651515);
   ThetaY_mI25_mI20__880->SetBinContent(308,29.51515);
   ThetaY_mI25_mI20__880->SetBinContent(309,85.2803);
   ThetaY_mI25_mI20__880->SetBinContent(310,118.4773);
   ThetaY_mI25_mI20__880->SetBinContent(311,141.6515);
   ThetaY_mI25_mI20__880->SetBinContent(312,153.3712);
   ThetaY_mI25_mI20__880->SetBinContent(313,162.4848);
   ThetaY_mI25_mI20__880->SetBinContent(314,167);
   ThetaY_mI25_mI20__880->SetBinContent(315,169.5606);
   ThetaY_mI25_mI20__880->SetBinContent(316,168.5758);
   ThetaY_mI25_mI20__880->SetBinContent(317,166.5227);
   ThetaY_mI25_mI20__880->SetBinContent(318,162.7348);
   ThetaY_mI25_mI20__880->SetBinContent(319,156.803);
   ThetaY_mI25_mI20__880->SetBinContent(320,140.803);
   ThetaY_mI25_mI20__880->SetBinContent(321,117.6742);
   ThetaY_mI25_mI20__880->SetBinContent(322,85.67424);
   ThetaY_mI25_mI20__880->SetBinContent(323,30.95455);
   ThetaY_mI25_mI20__880->SetBinContent(324,1);
   ThetaY_mI25_mI20__880->SetBinError(307,0.07613542);
   ThetaY_mI25_mI20__880->SetBinError(308,0.4728632);
   ThetaY_mI25_mI20__880->SetBinError(309,0.8037804);
   ThetaY_mI25_mI20__880->SetBinError(310,0.9473938);
   ThetaY_mI25_mI20__880->SetBinError(311,1.035914);
   ThetaY_mI25_mI20__880->SetBinError(312,1.077916);
   ThetaY_mI25_mI20__880->SetBinError(313,1.10948);
   ThetaY_mI25_mI20__880->SetBinError(314,1.12479);
   ThetaY_mI25_mI20__880->SetBinError(315,1.13338);
   ThetaY_mI25_mI20__880->SetBinError(316,1.130084);
   ThetaY_mI25_mI20__880->SetBinError(317,1.123181);
   ThetaY_mI25_mI20__880->SetBinError(318,1.110333);
   ThetaY_mI25_mI20__880->SetBinError(319,1.089909);
   ThetaY_mI25_mI20__880->SetBinError(320,1.032807);
   ThetaY_mI25_mI20__880->SetBinError(321,0.9441777);
   ThetaY_mI25_mI20__880->SetBinError(322,0.8056347);
   ThetaY_mI25_mI20__880->SetBinError(323,0.4842563);
   ThetaY_mI25_mI20__880->SetBinError(324,0.08703883);
   ThetaY_mI25_mI20__880->SetEntries(271768);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__880->SetLineColor(ci);
   ThetaY_mI25_mI20__880->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__880->SetMarkerColor(ci);
   ThetaY_mI25_mI20__880->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__880->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__880->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__880->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__880->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__880->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__880->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__880->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__880->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__880->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__880->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__880->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__880->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__880->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__880->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__880->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__880->Draw("AEsame");
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
   
   Double_t _fx3294[18] = {
   -42.5,
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
   37.5,
   42.5};
   Double_t _fy3294[18] = {
   0,
   0,
   0,
   0,
   0,
   0.003260064,
   0.1877098,
   0.4371257,
   0.4423197,
   0.4182096,
   0.5014331,
   0.4178576,
   0.357136,
   0.4332293,
   0.458894,
   0.4493766,
   0.4199706,
   1};
   Double_t _felx3294[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fely3294[18] = {
   0,
   0,
   0,
   0,
   0,
   0.002696901,
   0.02400123,
   0.03625399,
   0.03619487,
   0.03528831,
   0.0389093,
   0.03589921,
   0.03378599,
   0.03929625,
   0.04424027,
   0.05127125,
   0.08208045,
   0.6489525};
   Double_t _fehx3294[18] = {
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
   2.5,
   2.5,
   2.5};
   Double_t _fehy3294[18] = {
   1.214075,
   0.03119511,
   0.01079483,
   0.007769971,
   0.006498738,
   0.007497215,
   0.02728673,
   0.03939493,
   0.03928696,
   0.03840113,
   0.04205428,
   0.03912615,
   0.03714588,
   0.04303552,
   0.04872886,
   0.05748866,
   0.09996212,
   1.34219};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3294,_fy3294,_felx3294,_fehx3294,_fely3294,_fehy3294);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3294 = new TH1F("Graph_Graph3294","",100,-100,100);
   Graph_Graph3294->SetMinimum(0);
   Graph_Graph3294->SetMaximum(1.5);
   Graph_Graph3294->SetDirectory(0);
   Graph_Graph3294->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3294->SetLineColor(ci);
   Graph_Graph3294->GetXaxis()->SetRange(1,100);
   Graph_Graph3294->GetXaxis()->CenterTitle(true);
   Graph_Graph3294->GetXaxis()->SetLabelFont(42);
   Graph_Graph3294->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3294->GetXaxis()->SetTitleFont(42);
   Graph_Graph3294->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3294->GetYaxis()->CenterTitle(true);
   Graph_Graph3294->GetYaxis()->SetLabelFont(42);
   Graph_Graph3294->GetYaxis()->SetTitleFont(42);
   Graph_Graph3294->GetZaxis()->SetLabelFont(42);
   Graph_Graph3294->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3294->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3294);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,186.5167,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__881 = new TH2D("ThetaY_vs_Y_mI25_mI20__881","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(7990,101);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8016,3896);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8042,11257);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8068,15639);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8094,18698);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8120,20245);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8146,21448);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8172,22044);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8198,22382);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8224,22252);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8250,21981);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8276,21481);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8302,20698);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8328,18586);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8354,15533);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8380,11309);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8406,4086);
   ThetaY_vs_Y_mI25_mI20__881->SetBinContent(8432,132);
   ThetaY_vs_Y_mI25_mI20__881->SetEntries(271768);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__881->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__881->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__881->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__881->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__881->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__881->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__881->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__881->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__881->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__881->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__881->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__881->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__881->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__881->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__881->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__881->Draw("COL");
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
