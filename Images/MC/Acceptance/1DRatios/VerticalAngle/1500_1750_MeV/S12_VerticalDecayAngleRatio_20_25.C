void S12_VerticalDecayAngleRatio_20_25()
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
   upper_pad->Range(-125,-0.131115,125,2.491185);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_20_25__1077 = new TH1D("S12_ThetaY_20_25__1077","",630,-1575,1575);
   S12_ThetaY_20_25__1077->SetBinContent(309,0.164557);
   S12_ThetaY_20_25__1077->SetBinContent(310,1);
   S12_ThetaY_20_25__1077->SetBinContent(311,1.265823);
   S12_ThetaY_20_25__1077->SetBinContent(312,1.620253);
   S12_ThetaY_20_25__1077->SetBinContent(313,1.822785);
   S12_ThetaY_20_25__1077->SetBinContent(314,1.582278);
   S12_ThetaY_20_25__1077->SetBinContent(315,1.607595);
   S12_ThetaY_20_25__1077->SetBinContent(316,1.683544);
   S12_ThetaY_20_25__1077->SetBinContent(317,1.544304);
   S12_ThetaY_20_25__1077->SetBinContent(318,0.164557);
   S12_ThetaY_20_25__1077->SetBinError(309,0.04563989);
   S12_ThetaY_20_25__1077->SetBinError(310,0.1125088);
   S12_ThetaY_20_25__1077->SetBinError(311,0.1265823);
   S12_ThetaY_20_25__1077->SetBinError(312,0.1432115);
   S12_ThetaY_20_25__1077->SetBinError(313,0.1518987);
   S12_ThetaY_20_25__1077->SetBinError(314,0.1415233);
   S12_ThetaY_20_25__1077->SetBinError(315,0.142651);
   S12_ThetaY_20_25__1077->SetBinError(316,0.1459818);
   S12_ThetaY_20_25__1077->SetBinError(317,0.1398147);
   S12_ThetaY_20_25__1077->SetBinError(318,0.04563989);
   S12_ThetaY_20_25__1077->SetMinimum(0);
   S12_ThetaY_20_25__1077->SetMaximum(2.228955);
   S12_ThetaY_20_25__1077->SetEntries(984);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1077->SetLineColor(ci);
   S12_ThetaY_20_25__1077->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_20_25__1077->SetMarkerColor(ci);
   S12_ThetaY_20_25__1077->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_20_25__1077->GetXaxis()->SetRange(296,335);
   S12_ThetaY_20_25__1077->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1077->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1077->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1077->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_20_25__1077->GetYaxis()->CenterTitle(true);
   S12_ThetaY_20_25__1077->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1077->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1077->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_20_25__1077->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_20_25__1077->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_20_25__1077->Draw("AE");
   
   TH1D *ThetaY_20_25__1078 = new TH1D("ThetaY_20_25__1078","",630,-1575,1575);
   ThetaY_20_25__1078->SetBinContent(308,0.001228393);
   ThetaY_20_25__1078->SetBinContent(309,0.2740195);
   ThetaY_20_25__1078->SetBinContent(310,1);
   ThetaY_20_25__1078->SetBinContent(311,1.433798);
   ThetaY_20_25__1078->SetBinContent(312,1.699395);
   ThetaY_20_25__1078->SetBinContent(313,1.866456);
   ThetaY_20_25__1078->SetBinContent(314,1.96113);
   ThetaY_20_25__1078->SetBinContent(315,2.004563);
   ThetaY_20_25__1078->SetBinContent(316,2.026323);
   ThetaY_20_25__1078->SetBinContent(317,1.970343);
   ThetaY_20_25__1078->SetBinContent(318,1.883741);
   ThetaY_20_25__1078->SetBinContent(319,1.706414);
   ThetaY_20_25__1078->SetBinContent(320,1.424234);
   ThetaY_20_25__1078->SetBinContent(321,0.9968413);
   ThetaY_20_25__1078->SetBinContent(322,0.2668246);
   ThetaY_20_25__1078->SetBinContent(323,0.001667105);
   ThetaY_20_25__1078->SetBinError(308,0.000328302);
   ThetaY_20_25__1078->SetBinError(309,0.004903379);
   ThetaY_20_25__1078->SetBinError(310,0.009367091);
   ThetaY_20_25__1078->SetBinError(311,0.01121628);
   ThetaY_20_25__1078->SetBinError(312,0.01221102);
   ThetaY_20_25__1078->SetBinError(313,0.01279716);
   ThetaY_20_25__1078->SetBinError(314,0.01311771);
   ThetaY_20_25__1078->SetBinError(315,0.01326217);
   ThetaY_20_25__1078->SetBinError(316,0.01333396);
   ThetaY_20_25__1078->SetBinError(317,0.01314848);
   ThetaY_20_25__1078->SetBinError(318,0.01285628);
   ThetaY_20_25__1078->SetBinError(319,0.01223621);
   ThetaY_20_25__1078->SetBinError(320,0.01117881);
   ThetaY_20_25__1078->SetBinError(321,0.009352285);
   ThetaY_20_25__1078->SetBinError(322,0.004838577);
   ThetaY_20_25__1078->SetBinError(323,0.0003824602);
   ThetaY_20_25__1078->SetEntries(233832);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1078->SetLineColor(ci);
   ThetaY_20_25__1078->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_20_25__1078->SetMarkerColor(ci);
   ThetaY_20_25__1078->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_20_25__1078->GetXaxis()->CenterTitle(true);
   ThetaY_20_25__1078->GetXaxis()->SetLabelFont(42);
   ThetaY_20_25__1078->GetXaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1078->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1078->GetXaxis()->SetTitleFont(42);
   ThetaY_20_25__1078->GetYaxis()->SetTitle("Tracks");
   ThetaY_20_25__1078->GetYaxis()->CenterTitle(true);
   ThetaY_20_25__1078->GetYaxis()->SetNdivisions(4000510);
   ThetaY_20_25__1078->GetYaxis()->SetLabelFont(42);
   ThetaY_20_25__1078->GetYaxis()->SetTitleSize(0.04);
   ThetaY_20_25__1078->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_20_25__1078->GetYaxis()->SetTitleFont(42);
   ThetaY_20_25__1078->GetZaxis()->SetLabelFont(42);
   ThetaY_20_25__1078->GetZaxis()->SetTitleOffset(1);
   ThetaY_20_25__1078->GetZaxis()->SetTitleFont(42);
   ThetaY_20_25__1078->Draw("AEsame");
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
   
   Double_t _fx3360[16] = {
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
   Double_t _fy3360[16] = {
   0,
   0.6005302,
   1,
   0.8828457,
   0.9534296,
   0.976602,
   0.8068197,
   0.8019679,
   0.8308372,
   0.7837741,
   0.08735645,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3360[16] = {
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
   Double_t _fely3360[16] = {
   0,
   0.164709,
   0.1126538,
   0.08840339,
   0.08443742,
   0.08156175,
   0.0722672,
   0.07126512,
   0.07215745,
   0.07105291,
   0.02391997,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3360[16] = {
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
   Double_t _fehy3360[16] = {
   20.27507,
   0.2176173,
   0.1261316,
   0.09773809,
   0.09227305,
   0.08867967,
   0.07905295,
   0.0779013,
   0.07871734,
   0.07780933,
   0.03157942,
   0.0136574,
   0.01636345,
   0.02337981,
   0.08736498,
   14.67842};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3360,_fy3360,_felx3360,_fehx3360,_fely3360,_fehy3360);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3360 = new TH1F("Graph_Graph3360","",100,-100,100);
   Graph_Graph3360->SetMinimum(0);
   Graph_Graph3360->SetMaximum(1.5);
   Graph_Graph3360->SetDirectory(0);
   Graph_Graph3360->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3360->SetLineColor(ci);
   Graph_Graph3360->GetXaxis()->SetRange(1,100);
   Graph_Graph3360->GetXaxis()->CenterTitle(true);
   Graph_Graph3360->GetXaxis()->SetLabelFont(42);
   Graph_Graph3360->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3360->GetXaxis()->SetTitleFont(42);
   Graph_Graph3360->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3360->GetYaxis()->CenterTitle(true);
   Graph_Graph3360->GetYaxis()->SetLabelFont(42);
   Graph_Graph3360->GetYaxis()->SetTitleFont(42);
   Graph_Graph3360->GetZaxis()->SetLabelFont(42);
   Graph_Graph3360->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3360->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3360);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2.228955,510,"S");
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
   
   TH2D *ThetaY_vs_Y_20_25__1079 = new TH2D("ThetaY_vs_Y_20_25__1079","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8025,14);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8051,3123);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8077,11397);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8103,16341);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8129,19368);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8155,21272);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8181,22351);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8207,22846);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8233,23094);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8259,22456);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8285,21469);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8311,19448);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8337,16232);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8363,11361);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8389,3041);
   ThetaY_vs_Y_20_25__1079->SetBinContent(8415,19);
   ThetaY_vs_Y_20_25__1079->SetEntries(233832);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_20_25__1079->SetLineColor(ci);
   ThetaY_vs_Y_20_25__1079->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_20_25__1079->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_20_25__1079->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1079->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1079->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1079->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1079->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_20_25__1079->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_20_25__1079->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_20_25__1079->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1079->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1079->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_20_25__1079->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_20_25__1079->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_20_25__1079->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_20_25","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_20_25","Reco vertices","lpf");
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
