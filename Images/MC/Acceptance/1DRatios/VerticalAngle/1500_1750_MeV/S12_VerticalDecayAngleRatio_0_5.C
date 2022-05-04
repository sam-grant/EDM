void S12_VerticalDecayAngleRatio_0_5()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_0_5__1065 = new TH1D("S12_ThetaY_0_5__1065","",630,-1575,1575);
   S12_ThetaY_0_5__1065->SetBinContent(310,0.1068702);
   S12_ThetaY_0_5__1065->SetBinContent(311,0.4961832);
   S12_ThetaY_0_5__1065->SetBinContent(312,0.8066158);
   S12_ThetaY_0_5__1065->SetBinContent(313,0.9287532);
   S12_ThetaY_0_5__1065->SetBinContent(314,0.8651399);
   S12_ThetaY_0_5__1065->SetBinContent(315,0.9338422);
   S12_ThetaY_0_5__1065->SetBinContent(316,1);
   S12_ThetaY_0_5__1065->SetBinContent(317,0.8524173);
   S12_ThetaY_0_5__1065->SetBinContent(318,0.9160305);
   S12_ThetaY_0_5__1065->SetBinContent(319,0.6335878);
   S12_ThetaY_0_5__1065->SetBinContent(320,0.2061069);
   S12_ThetaY_0_5__1065->SetBinContent(321,0.0178117);
   S12_ThetaY_0_5__1065->SetBinError(310,0.01649043);
   S12_ThetaY_0_5__1065->SetBinError(311,0.03553242);
   S12_ThetaY_0_5__1065->SetBinError(312,0.04530406);
   S12_ThetaY_0_5__1065->SetBinError(313,0.04861316);
   S12_ThetaY_0_5__1065->SetBinError(314,0.0469188);
   S12_ThetaY_0_5__1065->SetBinError(315,0.04874617);
   S12_ThetaY_0_5__1065->SetBinError(316,0.05044333);
   S12_ThetaY_0_5__1065->SetBinError(317,0.04657253);
   S12_ThetaY_0_5__1065->SetBinError(318,0.04827905);
   S12_ThetaY_0_5__1065->SetBinError(319,0.04015199);
   S12_ThetaY_0_5__1065->SetBinError(320,0.02290076);
   S12_ThetaY_0_5__1065->SetBinError(321,0.006732192);
   S12_ThetaY_0_5__1065->SetMinimum(0);
   S12_ThetaY_0_5__1065->SetMaximum(1.1);
   S12_ThetaY_0_5__1065->SetEntries(3051);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1065->SetLineColor(ci);
   S12_ThetaY_0_5__1065->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_0_5__1065->SetMarkerColor(ci);
   S12_ThetaY_0_5__1065->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_0_5__1065->GetXaxis()->SetRange(296,335);
   S12_ThetaY_0_5__1065->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1065->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1065->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1065->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_0_5__1065->GetYaxis()->CenterTitle(true);
   S12_ThetaY_0_5__1065->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1065->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1065->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_0_5__1065->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_0_5__1065->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_0_5__1065->Draw("AE");
   
   TH1D *ThetaY_0_5__1066 = new TH1D("ThetaY_0_5__1066","",630,-1575,1575);
   ThetaY_0_5__1066->SetBinContent(308,0.00092381);
   ThetaY_0_5__1066->SetBinContent(309,0.1346818);
   ThetaY_0_5__1066->SetBinContent(310,0.4969774);
   ThetaY_0_5__1066->SetBinContent(311,0.714251);
   ThetaY_0_5__1066->SetBinContent(312,0.8483007);
   ThetaY_0_5__1066->SetBinContent(313,0.9339395);
   ThetaY_0_5__1066->SetBinContent(314,0.9802758);
   ThetaY_0_5__1066->SetBinContent(315,0.9996272);
   ThetaY_0_5__1066->SetBinContent(316,1);
   ThetaY_0_5__1066->SetBinContent(317,0.9731609);
   ThetaY_0_5__1066->SetBinContent(318,0.936484);
   ThetaY_0_5__1066->SetBinContent(319,0.8475551);
   ThetaY_0_5__1066->SetBinContent(320,0.7111878);
   ThetaY_0_5__1066->SetBinContent(321,0.4888413);
   ThetaY_0_5__1066->SetBinContent(322,0.1335797);
   ThetaY_0_5__1066->SetBinContent(323,0.0009724316);
   ThetaY_0_5__1066->SetBinError(308,0.0001223616);
   ThetaY_0_5__1066->SetBinError(309,0.001477435);
   ThetaY_0_5__1066->SetBinError(310,0.002838064);
   ThetaY_0_5__1066->SetBinError(311,0.003402353);
   ThetaY_0_5__1066->SetBinError(312,0.003707907);
   ThetaY_0_5__1066->SetBinError(313,0.00389057);
   ThetaY_0_5__1066->SetBinError(314,0.003985915);
   ThetaY_0_5__1066->SetBinError(315,0.004025065);
   ThetaY_0_5__1066->SetBinError(316,0.004025816);
   ThetaY_0_5__1066->SetBinError(317,0.003971424);
   ThetaY_0_5__1066->SetBinError(318,0.003895867);
   ThetaY_0_5__1066->SetBinError(319,0.003706277);
   ThetaY_0_5__1066->SetBinError(320,0.003395049);
   ThetaY_0_5__1066->SetBinError(321,0.002814737);
   ThetaY_0_5__1066->SetBinError(322,0.001471377);
   ThetaY_0_5__1066->SetBinError(323,0.0001255404);
   ThetaY_0_5__1066->SetEntries(629397);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1066->SetLineColor(ci);
   ThetaY_0_5__1066->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_0_5__1066->SetMarkerColor(ci);
   ThetaY_0_5__1066->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_0_5__1066->GetXaxis()->CenterTitle(true);
   ThetaY_0_5__1066->GetXaxis()->SetLabelFont(42);
   ThetaY_0_5__1066->GetXaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1066->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1066->GetXaxis()->SetTitleFont(42);
   ThetaY_0_5__1066->GetYaxis()->SetTitle("Tracks");
   ThetaY_0_5__1066->GetYaxis()->CenterTitle(true);
   ThetaY_0_5__1066->GetYaxis()->SetNdivisions(4000510);
   ThetaY_0_5__1066->GetYaxis()->SetLabelFont(42);
   ThetaY_0_5__1066->GetYaxis()->SetTitleSize(0.04);
   ThetaY_0_5__1066->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_0_5__1066->GetYaxis()->SetTitleFont(42);
   ThetaY_0_5__1066->GetZaxis()->SetLabelFont(42);
   ThetaY_0_5__1066->GetZaxis()->SetTitleOffset(1);
   ThetaY_0_5__1066->GetZaxis()->SetTitleFont(42);
   ThetaY_0_5__1066->Draw("AEsame");
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
   
   Double_t _fx3356[16] = {
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
   Double_t _fy3356[16] = {
   0,
   0,
   0.2150404,
   0.6946903,
   0.9508607,
   0.9944469,
   0.8825475,
   0.9341905,
   1,
   0.8759264,
   0.9781593,
   0.7475476,
   0.2898065,
   0.03643658,
   0,
   0};
   Double_t _felx3356[16] = {
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
   Double_t _fely3356[16] = {
   0,
   0,
   0.03307091,
   0.04981444,
   0.0535384,
   0.05219197,
   0.04797322,
   0.04888656,
   0.05058181,
   0.04796596,
   0.05168943,
   0.04745423,
   0.03216341,
   0.0134385,
   0,
   0};
   Double_t _fehx3356[16] = {
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
   Double_t _fehy3356[16] = {
   5.153664,
   0.03478609,
   0.03859598,
   0.05352252,
   0.05664231,
   0.05500675,
   0.05065544,
   0.05151512,
   0.05320826,
   0.0506682,
   0.05449676,
   0.05056763,
   0.03594843,
   0.01962866,
   0.03507312,
   4.892009};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3356,_fy3356,_felx3356,_fehx3356,_fely3356,_fehy3356);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3356 = new TH1F("Graph_Graph3356","",100,-100,100);
   Graph_Graph3356->SetMinimum(0);
   Graph_Graph3356->SetMaximum(1.5);
   Graph_Graph3356->SetDirectory(0);
   Graph_Graph3356->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3356->SetLineColor(ci);
   Graph_Graph3356->GetXaxis()->SetRange(1,100);
   Graph_Graph3356->GetXaxis()->CenterTitle(true);
   Graph_Graph3356->GetXaxis()->SetLabelFont(42);
   Graph_Graph3356->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3356->GetXaxis()->SetTitleFont(42);
   Graph_Graph3356->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3356->GetYaxis()->CenterTitle(true);
   Graph_Graph3356->GetYaxis()->SetLabelFont(42);
   Graph_Graph3356->GetYaxis()->SetTitleFont(42);
   Graph_Graph3356->GetZaxis()->SetLabelFont(42);
   Graph_Graph3356->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3356->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3356);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.1,510,"S");
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
   
   TH2D *ThetaY_vs_Y_0_5__1067 = new TH2D("ThetaY_vs_Y_0_5__1067","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8021,57);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8047,8310);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8073,30664);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8099,44070);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8125,52341);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8151,57625);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8177,60484);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8203,61678);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8229,61701);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8255,60045);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8281,57782);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8307,52295);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8333,43881);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8359,30162);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8385,8242);
   ThetaY_vs_Y_0_5__1067->SetBinContent(8411,60);
   ThetaY_vs_Y_0_5__1067->SetEntries(629397);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_0_5__1067->SetLineColor(ci);
   ThetaY_vs_Y_0_5__1067->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_0_5__1067->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_0_5__1067->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1067->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1067->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1067->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1067->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_0_5__1067->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_0_5__1067->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_0_5__1067->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1067->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1067->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_0_5__1067->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_0_5__1067->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_0_5__1067->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_0_5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_0_5","Reco vertices","lpf");
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
