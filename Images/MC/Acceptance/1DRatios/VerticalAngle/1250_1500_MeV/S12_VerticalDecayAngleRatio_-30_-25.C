void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.06520993,125,1.238989);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__876 = new TH1D("S12_ThetaY_mI30_mI25__876","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__876->SetBinContent(313,0.04761905);
   S12_ThetaY_mI30_mI25__876->SetBinContent(314,0.6857143);
   S12_ThetaY_mI30_mI25__876->SetBinContent(315,0.847619);
   S12_ThetaY_mI30_mI25__876->SetBinContent(316,1);
   S12_ThetaY_mI30_mI25__876->SetBinContent(317,0.9238095);
   S12_ThetaY_mI30_mI25__876->SetBinContent(318,0.7904762);
   S12_ThetaY_mI30_mI25__876->SetBinContent(319,0.8380952);
   S12_ThetaY_mI30_mI25__876->SetBinContent(320,0.7809524);
   S12_ThetaY_mI30_mI25__876->SetBinContent(321,0.6);
   S12_ThetaY_mI30_mI25__876->SetBinContent(322,0.447619);
   S12_ThetaY_mI30_mI25__876->SetBinContent(323,0.1619048);
   S12_ThetaY_mI30_mI25__876->SetBinError(313,0.02129589);
   S12_ThetaY_mI30_mI25__876->SetBinError(314,0.0808122);
   S12_ThetaY_mI30_mI25__876->SetBinError(315,0.08984744);
   S12_ThetaY_mI30_mI25__876->SetBinError(316,0.09759001);
   S12_ThetaY_mI30_mI25__876->SetBinError(317,0.09379865);
   S12_ThetaY_mI30_mI25__876->SetBinError(318,0.08676603);
   S12_ThetaY_mI30_mI25__876->SetBinError(319,0.08934125);
   S12_ThetaY_mI30_mI25__876->SetBinError(320,0.08624176);
   S12_ThetaY_mI30_mI25__876->SetBinError(321,0.07559289);
   S12_ThetaY_mI30_mI25__876->SetBinError(322,0.06529195);
   S12_ThetaY_mI30_mI25__876->SetBinError(323,0.03926767);
   S12_ThetaY_mI30_mI25__876->SetMinimum(0);
   S12_ThetaY_mI30_mI25__876->SetMaximum(1.108569);
   S12_ThetaY_mI30_mI25__876->SetEntries(748);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__876->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__876->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__876->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__876->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__876->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__876->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__876->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__876->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__876->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__876->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__876->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__876->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__876->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__876->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__876->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__876->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__877 = new TH1D("ThetaY_mI30_mI25__877","",630,-1575,1575);
   ThetaY_mI30_mI25__877->SetBinContent(307,0.004957156);
   ThetaY_mI30_mI25__877->SetBinContent(308,0.179095);
   ThetaY_mI30_mI25__877->SetBinContent(309,0.5040719);
   ThetaY_mI30_mI25__877->SetBinContent(310,0.697401);
   ThetaY_mI30_mI25__877->SetBinContent(311,0.8284116);
   ThetaY_mI30_mI25__877->SetBinContent(312,0.9157283);
   ThetaY_mI30_mI25__877->SetBinContent(313,0.940939);
   ThetaY_mI30_mI25__877->SetBinContent(314,0.9823667);
   ThetaY_mI30_mI25__877->SetBinContent(315,1.00779);
   ThetaY_mI30_mI25__877->SetBinContent(316,1);
   ThetaY_mI30_mI25__877->SetBinContent(317,0.9622548);
   ThetaY_mI30_mI25__877->SetBinContent(318,0.9652291);
   ThetaY_mI30_mI25__877->SetBinContent(319,0.9131081);
   ThetaY_mI30_mI25__877->SetBinContent(320,0.8335104);
   ThetaY_mI30_mI25__877->SetBinContent(321,0.7090858);
   ThetaY_mI30_mI25__877->SetBinContent(322,0.5066922);
   ThetaY_mI30_mI25__877->SetBinContent(323,0.181007);
   ThetaY_mI30_mI25__877->SetBinContent(324,0.005311239);
   ThetaY_mI30_mI25__877->SetBinError(307,0.0005924935);
   ThetaY_mI30_mI25__877->SetBinError(308,0.003561303);
   ThetaY_mI30_mI25__877->SetBinError(309,0.005974665);
   ThetaY_mI30_mI25__877->SetBinError(310,0.007027625);
   ThetaY_mI30_mI25__877->SetBinError(311,0.007659322);
   ThetaY_mI30_mI25__877->SetBinError(312,0.008052868);
   ThetaY_mI30_mI25__877->SetBinError(313,0.008162967);
   ThetaY_mI30_mI25__877->SetBinError(314,0.00834073);
   ThetaY_mI30_mI25__877->SetBinError(315,0.008447968);
   ThetaY_mI30_mI25__877->SetBinError(316,0.008415255);
   ThetaY_mI30_mI25__877->SetBinError(317,0.008254909);
   ThetaY_mI30_mI25__877->SetBinError(318,0.008267657);
   ThetaY_mI30_mI25__877->SetBinError(319,0.008041339);
   ThetaY_mI30_mI25__877->SetBinError(320,0.007682858);
   ThetaY_mI30_mI25__877->SetBinError(321,0.007086253);
   ThetaY_mI30_mI25__877->SetBinError(322,0.005990173);
   ThetaY_mI30_mI25__877->SetBinError(323,0.003580263);
   ThetaY_mI30_mI25__877->SetBinError(324,0.000613289);
   ThetaY_mI30_mI25__877->SetEntries(171386);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__877->SetLineColor(ci);
   ThetaY_mI30_mI25__877->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__877->SetMarkerColor(ci);
   ThetaY_mI30_mI25__877->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__877->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__877->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__877->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__877->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__877->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__877->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__877->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__877->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__877->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__877->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__877->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__877->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__877->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__877->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__877->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__877->Draw("AEsame");
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
   
   Double_t _fx3293[18] = {
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
   Double_t _fy3293[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.05060801,
   0.6980227,
   0.8410673,
   1,
   0.9600467,
   0.8189519,
   0.9178488,
   0.9369438,
   0.84616,
   0.8834142,
   0.8944668,
   0};
   Double_t _felx3293[18] = {
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
   Double_t _fely3293[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.02186295,
   0.08228114,
   0.08925996,
   0.09779261,
   0.09765292,
   0.08997975,
   0.09798578,
   0.1036115,
   0.1066513,
   0.1288115,
   0.2154613,
   0};
   Double_t _fehx3293[18] = {
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
   Double_t _fehy3293[18] = {
   3.583939,
   0.09793644,
   0.0347883,
   0.02514361,
   0.02116692,
   0.01914846,
   0.03424684,
   0.0926097,
   0.09928267,
   0.1078655,
   0.1081376,
   0.1004615,
   0.1090581,
   0.1157657,
   0.1210346,
   0.1491388,
   0.2749856,
   3.342066};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3293,_fy3293,_felx3293,_fehx3293,_fely3293,_fehy3293);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3293 = new TH1F("Graph_Graph3293","",100,-100,100);
   Graph_Graph3293->SetMinimum(0);
   Graph_Graph3293->SetMaximum(1.5);
   Graph_Graph3293->SetDirectory(0);
   Graph_Graph3293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3293->SetLineColor(ci);
   Graph_Graph3293->GetXaxis()->SetRange(1,100);
   Graph_Graph3293->GetXaxis()->CenterTitle(true);
   Graph_Graph3293->GetXaxis()->SetLabelFont(42);
   Graph_Graph3293->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3293->GetXaxis()->SetTitleFont(42);
   Graph_Graph3293->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3293->GetYaxis()->CenterTitle(true);
   Graph_Graph3293->GetYaxis()->SetLabelFont(42);
   Graph_Graph3293->GetYaxis()->SetTitleFont(42);
   Graph_Graph3293->GetZaxis()->SetLabelFont(42);
   Graph_Graph3293->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3293->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3293);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.108569,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__878 = new TH2D("ThetaY_vs_Y_mI30_mI25__878","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(7989,70);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8015,2529);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8041,7118);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8067,9848);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8093,11698);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8119,12931);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8145,13287);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8171,13872);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8197,14231);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8223,14121);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8249,13588);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8275,13630);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8301,12894);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8327,11770);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8353,10013);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8379,7155);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8405,2556);
   ThetaY_vs_Y_mI30_mI25__878->SetBinContent(8431,75);
   ThetaY_vs_Y_mI30_mI25__878->SetEntries(171386);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__878->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__878->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__878->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__878->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__878->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__878->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__878->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__878->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__878->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__878->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__878->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__878->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__878->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__878->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__878->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__878->Draw("COL");
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
