void S12_VerticalDecayAngleRatio_-5_0()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI5_0__1404 = new TH1D("S12_ThetaY_mI5_0__1404","",630,-1575,1575);
   S12_ThetaY_mI5_0__1404->SetBinContent(311,0.00390625);
   S12_ThetaY_mI5_0__1404->SetBinContent(312,0.1679688);
   S12_ThetaY_mI5_0__1404->SetBinContent(313,0.6171875);
   S12_ThetaY_mI5_0__1404->SetBinContent(314,0.9296875);
   S12_ThetaY_mI5_0__1404->SetBinContent(315,1);
   S12_ThetaY_mI5_0__1404->SetBinContent(316,0.8515625);
   S12_ThetaY_mI5_0__1404->SetBinContent(317,0.8359375);
   S12_ThetaY_mI5_0__1404->SetBinContent(318,0.8046875);
   S12_ThetaY_mI5_0__1404->SetBinContent(319,0.2421875);
   S12_ThetaY_mI5_0__1404->SetBinContent(320,0.01953125);
   S12_ThetaY_mI5_0__1404->SetBinError(311,0.00390625);
   S12_ThetaY_mI5_0__1404->SetBinError(312,0.02561499);
   S12_ThetaY_mI5_0__1404->SetBinError(313,0.0491008);
   S12_ThetaY_mI5_0__1404->SetBinError(314,0.06026269);
   S12_ThetaY_mI5_0__1404->SetBinError(315,0.0625);
   S12_ThetaY_mI5_0__1404->SetBinError(316,0.05767509);
   S12_ThetaY_mI5_0__1404->SetBinError(317,0.05714351);
   S12_ThetaY_mI5_0__1404->SetBinError(318,0.05606523);
   S12_ThetaY_mI5_0__1404->SetBinError(319,0.03075784);
   S12_ThetaY_mI5_0__1404->SetBinError(320,0.008734641);
   S12_ThetaY_mI5_0__1404->SetMinimum(0);
   S12_ThetaY_mI5_0__1404->SetMaximum(1.1);
   S12_ThetaY_mI5_0__1404->SetEntries(1401);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1404->SetLineColor(ci);
   S12_ThetaY_mI5_0__1404->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI5_0__1404->SetMarkerColor(ci);
   S12_ThetaY_mI5_0__1404->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI5_0__1404->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI5_0__1404->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1404->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1404->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1404->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI5_0__1404->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI5_0__1404->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1404->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1404->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI5_0__1404->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI5_0__1404->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI5_0__1404->Draw("AE");
   
   TH1D *ThetaY_mI5_0__1405 = new TH1D("ThetaY_mI5_0__1405","",630,-1575,1575);
   ThetaY_mI5_0__1405->SetBinContent(310,0.001594924);
   ThetaY_mI5_0__1405->SetBinContent(311,0.1968171);
   ThetaY_mI5_0__1405->SetBinContent(312,0.607198);
   ThetaY_mI5_0__1405->SetBinContent(313,0.8153009);
   ThetaY_mI5_0__1405->SetBinContent(314,0.9484944);
   ThetaY_mI5_0__1405->SetBinContent(315,1);
   ThetaY_mI5_0__1405->SetBinContent(316,0.9927882);
   ThetaY_mI5_0__1405->SetBinContent(317,0.9396703);
   ThetaY_mI5_0__1405->SetBinContent(318,0.8236742);
   ThetaY_mI5_0__1405->SetBinContent(319,0.6097464);
   ThetaY_mI5_0__1405->SetBinContent(320,0.2026247);
   ThetaY_mI5_0__1405->SetBinContent(321,0.001958983);
   ThetaY_mI5_0__1405->SetBinError(310,0.0001662823);
   ThetaY_mI5_0__1405->SetBinError(311,0.001847173);
   ThetaY_mI5_0__1405->SetBinError(312,0.003244451);
   ThetaY_mI5_0__1405->SetBinError(313,0.003759543);
   ThetaY_mI5_0__1405->SetBinError(314,0.004055024);
   ThetaY_mI5_0__1405->SetBinError(315,0.004163668);
   ThetaY_mI5_0__1405->SetBinError(316,0.004148627);
   ThetaY_mI5_0__1405->SetBinError(317,0.004036118);
   ThetaY_mI5_0__1405->SetBinError(318,0.003778799);
   ThetaY_mI5_0__1405->SetBinError(319,0.003251252);
   ThetaY_mI5_0__1405->SetBinError(320,0.001874227);
   ThetaY_mI5_0__1405->SetBinError(321,0.0001842856);
   ThetaY_mI5_0__1405->SetEntries(411849);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1405->SetLineColor(ci);
   ThetaY_mI5_0__1405->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI5_0__1405->SetMarkerColor(ci);
   ThetaY_mI5_0__1405->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI5_0__1405->GetXaxis()->CenterTitle(true);
   ThetaY_mI5_0__1405->GetXaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1405->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1405->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1405->GetXaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1405->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI5_0__1405->GetYaxis()->CenterTitle(true);
   ThetaY_mI5_0__1405->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI5_0__1405->GetYaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1405->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI5_0__1405->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI5_0__1405->GetYaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1405->GetZaxis()->SetLabelFont(42);
   ThetaY_mI5_0__1405->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI5_0__1405->GetZaxis()->SetTitleFont(42);
   ThetaY_mI5_0__1405->Draw("AEsame");
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
   
   Double_t _fx3469[12] = {
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
   Double_t _fy3469[12] = {
   0,
   0.01984711,
   0.2766293,
   0.7570058,
   0.9801719,
   1,
   0.8577484,
   0.8896073,
   0.9769488,
   0.3971938,
   0.09639126,
   0};
   Double_t _felx3469[12] = {
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
   Double_t _fely3469[12] = {
   0,
   0.01641872,
   0.04204607,
   0.06026074,
   0.06362785,
   0.06259711,
   0.05815939,
   0.06088408,
   0.06815858,
   0.05035088,
   0.04164247,
   0};
   Double_t _fehx3469[12] = {
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
   Double_t _fehy3469[12] = {
   4.554404,
   0.04564558,
   0.04898123,
   0.06526125,
   0.06789991,
   0.06664489,
   0.06224428,
   0.06520187,
   0.07308967,
   0.05717894,
   0.06523155,
   3.701101};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3469,_fy3469,_felx3469,_fehx3469,_fely3469,_fehy3469);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3469 = new TH1F("Graph_Graph3469","",100,-100,100);
   Graph_Graph3469->SetMinimum(0);
   Graph_Graph3469->SetMaximum(1.5);
   Graph_Graph3469->SetDirectory(0);
   Graph_Graph3469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3469->SetLineColor(ci);
   Graph_Graph3469->GetXaxis()->SetRange(1,100);
   Graph_Graph3469->GetXaxis()->CenterTitle(true);
   Graph_Graph3469->GetXaxis()->SetLabelFont(42);
   Graph_Graph3469->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3469->GetXaxis()->SetTitleFont(42);
   Graph_Graph3469->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3469->GetYaxis()->CenterTitle(true);
   Graph_Graph3469->GetYaxis()->SetLabelFont(42);
   Graph_Graph3469->GetYaxis()->SetTitleFont(42);
   Graph_Graph3469->GetZaxis()->SetLabelFont(42);
   Graph_Graph3469->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3469->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3469);
   
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
   
   TH2D *ThetaY_vs_Y_mI5_0__1406 = new TH2D("ThetaY_vs_Y_mI5_0__1406","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8072,92);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8098,11353);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8124,35025);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8150,47029);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8176,54712);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8202,57683);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8228,57267);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8254,54203);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8280,47512);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8306,35172);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8332,11688);
   ThetaY_vs_Y_mI5_0__1406->SetBinContent(8358,113);
   ThetaY_vs_Y_mI5_0__1406->SetEntries(411849);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI5_0__1406->SetLineColor(ci);
   ThetaY_vs_Y_mI5_0__1406->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI5_0__1406->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI5_0__1406->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1406->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1406->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1406->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1406->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI5_0__1406->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI5_0__1406->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI5_0__1406->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1406->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1406->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI5_0__1406->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI5_0__1406->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI5_0__1406->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-5_0","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12_ThetaY_-5_0","Reco vertices","lpf");
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
