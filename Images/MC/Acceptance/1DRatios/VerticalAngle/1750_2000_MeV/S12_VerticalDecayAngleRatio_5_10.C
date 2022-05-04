void S12_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:59 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0669664,125,1.272362);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_5_10__1239 = new TH1D("S12_ThetaY_5_10__1239","",630,-1575,1575);
   S12_ThetaY_5_10__1239->SetBinContent(310,0.0487013);
   S12_ThetaY_5_10__1239->SetBinContent(311,0.3538961);
   S12_ThetaY_5_10__1239->SetBinContent(312,0.7175325);
   S12_ThetaY_5_10__1239->SetBinContent(313,0.9090909);
   S12_ThetaY_5_10__1239->SetBinContent(314,0.9805195);
   S12_ThetaY_5_10__1239->SetBinContent(315,0.9415584);
   S12_ThetaY_5_10__1239->SetBinContent(316,0.8798701);
   S12_ThetaY_5_10__1239->SetBinContent(317,1);
   S12_ThetaY_5_10__1239->SetBinContent(318,0.6590909);
   S12_ThetaY_5_10__1239->SetBinContent(319,0.2564935);
   S12_ThetaY_5_10__1239->SetBinContent(320,0.006493506);
   S12_ThetaY_5_10__1239->SetBinError(310,0.01257462);
   S12_ThetaY_5_10__1239->SetBinError(311,0.0338971);
   S12_ThetaY_5_10__1239->SetBinError(312,0.04826646);
   S12_ThetaY_5_10__1239->SetBinError(313,0.05432857);
   S12_ThetaY_5_10__1239->SetBinError(314,0.05642256);
   S12_ThetaY_5_10__1239->SetBinError(315,0.05529022);
   S12_ThetaY_5_10__1239->SetBinError(316,0.0534483);
   S12_ThetaY_5_10__1239->SetBinError(317,0.05698029);
   S12_ThetaY_5_10__1239->SetBinError(318,0.04625911);
   S12_ThetaY_5_10__1239->SetBinError(319,0.02885777);
   S12_ThetaY_5_10__1239->SetBinError(320,0.004591602);
   S12_ThetaY_5_10__1239->SetMinimum(0);
   S12_ThetaY_5_10__1239->SetMaximum(1.138429);
   S12_ThetaY_5_10__1239->SetEntries(2080);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1239->SetLineColor(ci);
   S12_ThetaY_5_10__1239->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_5_10__1239->SetMarkerColor(ci);
   S12_ThetaY_5_10__1239->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_5_10__1239->GetXaxis()->SetRange(296,335);
   S12_ThetaY_5_10__1239->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1239->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1239->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1239->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_5_10__1239->GetYaxis()->CenterTitle(true);
   S12_ThetaY_5_10__1239->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1239->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1239->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_5_10__1239->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_5_10__1239->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_5_10__1239->Draw("AE");
   
   TH1D *ThetaY_5_10__1240 = new TH1D("ThetaY_5_10__1240","",630,-1575,1575);
   ThetaY_5_10__1240->SetBinContent(309,0.0006758025);
   ThetaY_5_10__1240->SetBinContent(310,0.1512108);
   ThetaY_5_10__1240->SetBinContent(311,0.5536512);
   ThetaY_5_10__1240->SetBinContent(312,0.7891496);
   ThetaY_5_10__1240->SetBinContent(313,0.9247043);
   ThetaY_5_10__1240->SetBinContent(314,0.9997184);
   ThetaY_5_10__1240->SetBinContent(315,1.03043);
   ThetaY_5_10__1240->SetBinContent(316,1.034935);
   ThetaY_5_10__1240->SetBinContent(317,1);
   ThetaY_5_10__1240->SetBinContent(318,0.9199549);
   ThetaY_5_10__1240->SetBinContent(319,0.7843439);
   ThetaY_5_10__1240->SetBinContent(320,0.5576309);
   ThetaY_5_10__1240->SetBinContent(321,0.1512859);
   ThetaY_5_10__1240->SetBinContent(322,0.0004693073);
   ThetaY_5_10__1240->SetBinError(309,0.0001126338);
   ThetaY_5_10__1240->SetBinError(310,0.001684807);
   ThetaY_5_10__1240->SetBinError(311,0.003223864);
   ThetaY_5_10__1240->SetBinError(312,0.003848915);
   ThetaY_5_10__1240->SetBinError(313,0.004166392);
   ThetaY_5_10__1240->SetBinError(314,0.00433209);
   ThetaY_5_10__1240->SetBinError(315,0.004398128);
   ThetaY_5_10__1240->SetBinError(316,0.004407733);
   ThetaY_5_10__1240->SetBinError(317,0.0043327);
   ThetaY_5_10__1240->SetBinError(318,0.004155678);
   ThetaY_5_10__1240->SetBinError(319,0.003837178);
   ThetaY_5_10__1240->SetBinError(320,0.003235431);
   ThetaY_5_10__1240->SetBinError(321,0.001685225);
   ThetaY_5_10__1240->SetBinError(322,9.386146e-05);
   ThetaY_5_10__1240->SetEntries(474005);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1240->SetLineColor(ci);
   ThetaY_5_10__1240->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1240->SetMarkerColor(ci);
   ThetaY_5_10__1240->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1240->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1240->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1240->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1240->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1240->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1240->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1240->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1240->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1240->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1240->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1240->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1240->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1240->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1240->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1240->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1240->Draw("AEsame");
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
   
   Double_t _fx3414[14] = {
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
   32.5};
   Double_t _fy3414[14] = {
   0,
   0.3220755,
   0.6392041,
   0.9092477,
   0.9831152,
   0.9807957,
   0.913753,
   0.8501693,
   1,
   0.7164382,
   0.3270166,
   0.01164481,
   0,
   0};
   Double_t _felx3414[14] = {
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
   Double_t _fely3414[14] = {
   0,
   0.08229516,
   0.06124246,
   0.06127607,
   0.05888336,
   0.05656641,
   0.0537675,
   0.05173849,
   0.05711325,
   0.05034614,
   0.03674848,
   0.007521627,
   0,
   0};
   Double_t _fehx3414[14] = {
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
   Double_t _fehy3414[14] = {
   9.074872,
   0.1066044,
   0.0674136,
   0.06555317,
   0.06252166,
   0.05992797,
   0.05702942,
   0.05498818,
   0.06047332,
   0.05401592,
   0.04113076,
   0.01535989,
   0.03951476,
   13.21721};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3414,_fy3414,_felx3414,_fehx3414,_fely3414,_fehy3414);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3414 = new TH1F("Graph_Graph3414","",100,-100,100);
   Graph_Graph3414->SetMinimum(0);
   Graph_Graph3414->SetMaximum(1.5);
   Graph_Graph3414->SetDirectory(0);
   Graph_Graph3414->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3414->SetLineColor(ci);
   Graph_Graph3414->GetXaxis()->SetRange(1,100);
   Graph_Graph3414->GetXaxis()->CenterTitle(true);
   Graph_Graph3414->GetXaxis()->SetLabelFont(42);
   Graph_Graph3414->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3414->GetXaxis()->SetTitleFont(42);
   Graph_Graph3414->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3414->GetYaxis()->CenterTitle(true);
   Graph_Graph3414->GetYaxis()->SetLabelFont(42);
   Graph_Graph3414->GetYaxis()->SetTitleFont(42);
   Graph_Graph3414->GetZaxis()->SetLabelFont(42);
   Graph_Graph3414->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3414->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3414);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.138429,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1241 = new TH2D("ThetaY_vs_Y_5_10__1241","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8048,36);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8074,8055);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8100,29493);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8126,42038);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8152,49259);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8178,53255);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8204,54891);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8230,55131);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8256,53270);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8282,49006);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8308,41782);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8334,29705);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8360,8059);
   ThetaY_vs_Y_5_10__1241->SetBinContent(8386,25);
   ThetaY_vs_Y_5_10__1241->SetEntries(474005);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1241->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1241->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1241->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1241->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1241->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1241->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1241->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1241->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1241->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1241->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1241->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1241->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1241->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1241->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1241->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1241->Draw("COL");
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
