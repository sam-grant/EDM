void S12_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07112342,125,1.351345);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__897 = new TH1D("S12_ThetaY_5_10__897","",630,-1575,1575);
   S12_ThetaY_5_10__897->SetBinContent(308,0.005376344);
   S12_ThetaY_5_10__897->SetBinContent(309,0.1478495);
   S12_ThetaY_5_10__897->SetBinContent(310,0.5456989);
   S12_ThetaY_5_10__897->SetBinContent(311,0.75);
   S12_ThetaY_5_10__897->SetBinContent(312,1);
   S12_ThetaY_5_10__897->SetBinContent(313,0.8924731);
   S12_ThetaY_5_10__897->SetBinContent(314,0.8844086);
   S12_ThetaY_5_10__897->SetBinContent(315,0.9112903);
   S12_ThetaY_5_10__897->SetBinContent(316,0.9489247);
   S12_ThetaY_5_10__897->SetBinContent(317,0.8548387);
   S12_ThetaY_5_10__897->SetBinContent(318,0.8709677);
   S12_ThetaY_5_10__897->SetBinContent(319,0.6774194);
   S12_ThetaY_5_10__897->SetBinContent(320,0.2204301);
   S12_ThetaY_5_10__897->SetBinContent(321,0.01075269);
   S12_ThetaY_5_10__897->SetBinError(308,0.003801649);
   S12_ThetaY_5_10__897->SetBinError(309,0.01993602);
   S12_ThetaY_5_10__897->SetBinError(310,0.03830056);
   S12_ThetaY_5_10__897->SetBinError(311,0.04490133);
   S12_ThetaY_5_10__897->SetBinError(312,0.05184758);
   S12_ThetaY_5_10__897->SetBinError(313,0.04898083);
   S12_ThetaY_5_10__897->SetBinError(314,0.04875902);
   S12_ThetaY_5_10__897->SetBinError(315,0.0494945);
   S12_ThetaY_5_10__897->SetBinError(316,0.05050617);
   S12_ThetaY_5_10__897->SetBinError(317,0.04793697);
   S12_ThetaY_5_10__897->SetBinError(318,0.0483871);
   S12_ThetaY_5_10__897->SetBinError(319,0.04267341);
   S12_ThetaY_5_10__897->SetBinError(320,0.02434243);
   S12_ThetaY_5_10__897->SetBinError(321,0.005376344);
   S12_ThetaY_5_10__897->SetMinimum(0);
   S12_ThetaY_5_10__897->SetMaximum(1.209098);
   S12_ThetaY_5_10__897->SetEntries(3244);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__897->SetLineColor(ci);
   S12_ThetaY_5_10__897->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__897->SetMarkerColor(ci);
   S12_ThetaY_5_10__897->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__897->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__897->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__897->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__897->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__897->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__897->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__897->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__897->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__897->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__897->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__897->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__897->Draw("AE");
   
   TH1D *ThetaY_5_10__898 = new TH1D("ThetaY_5_10__898","",630,-1575,1575);
   ThetaY_5_10__898->SetBinContent(307,0.006455623);
   ThetaY_5_10__898->SetBinContent(308,0.1960745);
   ThetaY_5_10__898->SetBinContent(309,0.5525371);
   ThetaY_5_10__898->SetBinContent(310,0.7630666);
   ThetaY_5_10__898->SetBinContent(311,0.9127689);
   ThetaY_5_10__898->SetBinContent(312,1);
   ThetaY_5_10__898->SetBinContent(313,1.055955);
   ThetaY_5_10__898->SetBinContent(314,1.081638);
   ThetaY_5_10__898->SetBinContent(315,1.09918);
   ThetaY_5_10__898->SetBinContent(316,1.090439);
   ThetaY_5_10__898->SetBinContent(317,1.083923);
   ThetaY_5_10__898->SetBinContent(318,1.059644);
   ThetaY_5_10__898->SetBinContent(319,1.007739);
   ThetaY_5_10__898->SetBinContent(320,0.9175404);
   ThetaY_5_10__898->SetBinContent(321,0.7670964);
   ThetaY_5_10__898->SetBinContent(322,0.554562);
   ThetaY_5_10__898->SetBinContent(323,0.1917039);
   ThetaY_5_10__898->SetBinContent(324,0.006535817);
   ThetaY_5_10__898->SetBinError(307,0.0003597578);
   ThetaY_5_10__898->SetBinError(308,0.001982676);
   ThetaY_5_10__898->SetBinError(309,0.003328295);
   ThetaY_5_10__898->SetBinError(310,0.003911311);
   ThetaY_5_10__898->SetBinError(311,0.004277811);
   ThetaY_5_10__898->SetBinError(312,0.004477557);
   ThetaY_5_10__898->SetBinError(313,0.004601124);
   ThetaY_5_10__898->SetBinError(314,0.00465674);
   ThetaY_5_10__898->SetBinError(315,0.004694351);
   ThetaY_5_10__898->SetBinError(316,0.004675648);
   ThetaY_5_10__898->SetBinError(317,0.004661658);
   ThetaY_5_10__898->SetBinError(318,0.004609154);
   ThetaY_5_10__898->SetBinError(319,0.004494849);
   ThetaY_5_10__898->SetBinError(320,0.004288977);
   ThetaY_5_10__898->SetBinError(321,0.003921625);
   ThetaY_5_10__898->SetBinError(322,0.003334389);
   ThetaY_5_10__898->SetBinError(323,0.001960454);
   ThetaY_5_10__898->SetBinError(324,0.0003619854);
   ThetaY_5_10__898->SetEntries(665728);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__898->SetLineColor(ci);
   ThetaY_5_10__898->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__898->SetMarkerColor(ci);
   ThetaY_5_10__898->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__898->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__898->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__898->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__898->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__898->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__898->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__898->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__898->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__898->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__898->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__898->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__898->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__898->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__898->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__898->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__898->Draw("AEsame");
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
   
   Double_t _fx3300[18] = {
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
   Double_t _fy3300[18] = {
   0,
   0.0274199,
   0.2675828,
   0.7151393,
   0.8216757,
   1,
   0.8451807,
   0.8176571,
   0.8290638,
   0.8702228,
   0.7886525,
   0.8219435,
   0.6722172,
   0.2402402,
   0.01401739,
   0,
   0,
   0};
   Double_t _felx3300[18] = {
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
   Double_t _fely3300[18] = {
   0,
   0.01771185,
   0.03600607,
   0.05028451,
   0.04931284,
   0.05201668,
   0.04650743,
   0.04519276,
   0.04514489,
   0.04644493,
   0.0443316,
   0.04577923,
   0.04242315,
   0.02649932,
   0.006708788,
   0,
   0,
   0};
   Double_t _fehx3300[18] = {
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
   Double_t _fehy3300[18] = {
   0.7688116,
   0.03617351,
   0.04121216,
   0.05395237,
   0.05236619,
   0.05479654,
   0.04914073,
   0.04776329,
   0.04767361,
   0.04899337,
   0.04689733,
   0.04840375,
   0.04518971,
   0.02959752,
   0.01108442,
   0.008924426,
   0.02581825,
   0.7593517};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3300,_fy3300,_felx3300,_fehx3300,_fely3300,_fehy3300);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3300 = new TH1F("Graph_Graph3300","",100,-100,100);
   Graph_Graph3300->SetMinimum(0);
   Graph_Graph3300->SetMaximum(1.5);
   Graph_Graph3300->SetDirectory(0);
   Graph_Graph3300->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3300->SetLineColor(ci);
   Graph_Graph3300->GetXaxis()->SetRange(1,100);
   Graph_Graph3300->GetXaxis()->CenterTitle(true);
   Graph_Graph3300->GetXaxis()->SetLabelFont(42);
   Graph_Graph3300->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3300->GetXaxis()->SetTitleFont(42);
   Graph_Graph3300->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3300->GetYaxis()->CenterTitle(true);
   Graph_Graph3300->GetYaxis()->SetLabelFont(42);
   Graph_Graph3300->GetYaxis()->SetTitleFont(42);
   Graph_Graph3300->GetZaxis()->SetLabelFont(42);
   Graph_Graph3300->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3300->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3300);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.209098,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__899 = new TH2D("ThetaY_vs_Y_5_10__899","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__899->SetBinContent(7996,322);
   ThetaY_vs_Y_5_10__899->SetBinContent(8022,9780);
   ThetaY_vs_Y_5_10__899->SetBinContent(8048,27560);
   ThetaY_vs_Y_5_10__899->SetBinContent(8074,38061);
   ThetaY_vs_Y_5_10__899->SetBinContent(8100,45528);
   ThetaY_vs_Y_5_10__899->SetBinContent(8126,49879);
   ThetaY_vs_Y_5_10__899->SetBinContent(8152,52670);
   ThetaY_vs_Y_5_10__899->SetBinContent(8178,53951);
   ThetaY_vs_Y_5_10__899->SetBinContent(8204,54826);
   ThetaY_vs_Y_5_10__899->SetBinContent(8230,54390);
   ThetaY_vs_Y_5_10__899->SetBinContent(8256,54065);
   ThetaY_vs_Y_5_10__899->SetBinContent(8282,52854);
   ThetaY_vs_Y_5_10__899->SetBinContent(8308,50265);
   ThetaY_vs_Y_5_10__899->SetBinContent(8334,45766);
   ThetaY_vs_Y_5_10__899->SetBinContent(8360,38262);
   ThetaY_vs_Y_5_10__899->SetBinContent(8386,27661);
   ThetaY_vs_Y_5_10__899->SetBinContent(8412,9562);
   ThetaY_vs_Y_5_10__899->SetBinContent(8438,326);
   ThetaY_vs_Y_5_10__899->SetEntries(665728);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__899->SetLineColor(ci);
   ThetaY_vs_Y_5_10__899->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__899->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__899->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__899->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__899->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__899->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__899->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__899->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__899->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__899->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__899->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__899->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__899->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__899->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__899->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_5_10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_5_10","Reco vertices","lpf");
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
