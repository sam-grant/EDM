void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.09020266,125,1.71385);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__1047 = new TH1D("S12_ThetaY_mI30_mI25__1047","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(313,0.01428571);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(314,0.7714286);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(315,1.157143);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(316,1.185714);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(317,1.2);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(318,1.071429);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(319,1.142857);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(320,1);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(321,0.6);
   S12_ThetaY_mI30_mI25__1047->SetBinContent(322,0.1285714);
   S12_ThetaY_mI30_mI25__1047->SetBinError(313,0.01428571);
   S12_ThetaY_mI30_mI25__1047->SetBinError(314,0.1049781);
   S12_ThetaY_mI30_mI25__1047->SetBinError(315,0.1285714);
   S12_ThetaY_mI30_mI25__1047->SetBinError(316,0.1301491);
   S12_ThetaY_mI30_mI25__1047->SetBinError(317,0.1309307);
   S12_ThetaY_mI30_mI25__1047->SetBinError(318,0.1237179);
   S12_ThetaY_mI30_mI25__1047->SetBinError(319,0.1277753);
   S12_ThetaY_mI30_mI25__1047->SetBinError(320,0.1195229);
   S12_ThetaY_mI30_mI25__1047->SetBinError(321,0.09258201);
   S12_ThetaY_mI30_mI25__1047->SetBinError(322,0.04285714);
   S12_ThetaY_mI30_mI25__1047->SetMinimum(0);
   S12_ThetaY_mI30_mI25__1047->SetMaximum(1.533445);
   S12_ThetaY_mI30_mI25__1047->SetEntries(579);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1047->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__1047->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1047->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__1047->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__1047->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__1047->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1047->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1047->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1047->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__1047->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__1047->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1047->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1047->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1047->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1047->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1047->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1048 = new TH1D("ThetaY_mI30_mI25__1048","",630,-1575,1575);
   ThetaY_mI30_mI25__1048->SetBinContent(308,0.001053842);
   ThetaY_mI30_mI25__1048->SetBinContent(309,0.1872006);
   ThetaY_mI30_mI25__1048->SetBinContent(310,0.6894999);
   ThetaY_mI30_mI25__1048->SetBinContent(311,0.994635);
   ThetaY_mI30_mI25__1048->SetBinContent(312,1.196302);
   ThetaY_mI30_mI25__1048->SetBinContent(313,1.297088);
   ThetaY_mI30_mI25__1048->SetBinContent(314,1.36645);
   ThetaY_mI30_mI25__1048->SetBinContent(315,1.394041);
   ThetaY_mI30_mI25__1048->SetBinContent(316,1.385131);
   ThetaY_mI30_mI25__1048->SetBinContent(317,1.345947);
   ThetaY_mI30_mI25__1048->SetBinContent(318,1.296417);
   ThetaY_mI30_mI25__1048->SetBinContent(319,1.18059);
   ThetaY_mI30_mI25__1048->SetBinContent(320,1);
   ThetaY_mI30_mI25__1048->SetBinContent(321,0.6872006);
   ThetaY_mI30_mI25__1048->SetBinContent(322,0.1888293);
   ThetaY_mI30_mI25__1048->SetBinContent(323,0.001053842);
   ThetaY_mI30_mI25__1048->SetBinError(308,0.0003177452);
   ThetaY_mI30_mI25__1048->SetBinError(309,0.004234918);
   ThetaY_mI30_mI25__1048->SetBinError(310,0.008127528);
   ThetaY_mI30_mI25__1048->SetBinError(311,0.00976165);
   ThetaY_mI30_mI25__1048->SetBinError(312,0.01070562);
   ThetaY_mI30_mI25__1048->SetBinError(313,0.01114746);
   ThetaY_mI30_mI25__1048->SetBinError(314,0.01144164);
   ThetaY_mI30_mI25__1048->SetBinError(315,0.01155657);
   ThetaY_mI30_mI25__1048->SetBinError(316,0.01151958);
   ThetaY_mI30_mI25__1048->SetBinError(317,0.01135548);
   ThetaY_mI30_mI25__1048->SetBinError(318,0.01114458);
   ThetaY_mI30_mI25__1048->SetBinError(319,0.01063508);
   ThetaY_mI30_mI25__1048->SetBinError(320,0.009787941);
   ThetaY_mI30_mI25__1048->SetBinError(321,0.008113965);
   ThetaY_mI30_mI25__1048->SetBinError(322,0.0042533);
   ThetaY_mI30_mI25__1048->SetBinError(323,0.0003177452);
   ThetaY_mI30_mI25__1048->SetEntries(148339);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1048->SetLineColor(ci);
   ThetaY_mI30_mI25__1048->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1048->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1048->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1048->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1048->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1048->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1048->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1048->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1048->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1048->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1048->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1048->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1048->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1048->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1048->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1048->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1048->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1048->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1048->Draw("AEsame");
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
   
   Double_t _fx3350[16] = {
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
   Double_t _fy3350[16] = {
   0,
   0,
   0,
   0,
   0,
   0.01101369,
   0.5645496,
   0.8300637,
   0.8560303,
   0.8915652,
   0.8264537,
   0.9680389,
   1,
   0.8731075,
   0.6808871,
   0};
   Double_t _felx3350[16] = {
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
   Double_t _fely3350[16] = {
   0,
   0,
   0,
   0,
   0,
   0.009111158,
   0.07672908,
   0.09229129,
   0.09403751,
   0.09737019,
   0.09547753,
   0.1083491,
   0.1196303,
   0.1345682,
   0.2231426,
   0};
   Double_t _fehx3350[16] = {
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
   Double_t _fehy3350[16] = {
   27.16659,
   0.1405589,
   0.03814892,
   0.02644452,
   0.0219863,
   0.02532935,
   0.08794635,
   0.1031782,
   0.1049895,
   0.1086405,
   0.1072086,
   0.1212222,
   0.1348886,
   0.1571211,
   0.3119878,
   27.16659};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3350,_fy3350,_felx3350,_fehx3350,_fely3350,_fehy3350);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3350 = new TH1F("Graph_Graph3350","",100,-100,100);
   Graph_Graph3350->SetMinimum(0);
   Graph_Graph3350->SetMaximum(1.5);
   Graph_Graph3350->SetDirectory(0);
   Graph_Graph3350->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3350->SetLineColor(ci);
   Graph_Graph3350->GetXaxis()->SetRange(1,100);
   Graph_Graph3350->GetXaxis()->CenterTitle(true);
   Graph_Graph3350->GetXaxis()->SetLabelFont(42);
   Graph_Graph3350->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3350->GetXaxis()->SetTitleFont(42);
   Graph_Graph3350->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3350->GetYaxis()->CenterTitle(true);
   Graph_Graph3350->GetYaxis()->SetLabelFont(42);
   Graph_Graph3350->GetYaxis()->SetTitleFont(42);
   Graph_Graph3350->GetZaxis()->SetLabelFont(42);
   Graph_Graph3350->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3350->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3350);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.533445,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1049 = new TH2D("ThetaY_vs_Y_mI30_mI25__1049","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8015,11);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8041,1954);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8067,7197);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8093,10382);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8119,12487);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8145,13539);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8171,14263);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8197,14551);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8223,14458);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8249,14049);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8275,13532);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8301,12323);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8327,10438);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8353,7173);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8379,1971);
   ThetaY_vs_Y_mI30_mI25__1049->SetBinContent(8405,11);
   ThetaY_vs_Y_mI30_mI25__1049->SetEntries(148339);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1049->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1049->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1049->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1049->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1049->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1049->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1049->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1049->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1049->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1049->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1049->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1049->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1049->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1049->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1049->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1049->Draw("COL");
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
