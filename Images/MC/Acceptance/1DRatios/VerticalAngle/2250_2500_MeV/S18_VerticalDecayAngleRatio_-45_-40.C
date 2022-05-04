void S18_VerticalDecayAngleRatio_-45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:07 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_mI45_mI40__1608 = new TH1D("S18_ThetaY_mI45_mI40__1608","",630,-1575,1575);
   S18_ThetaY_mI45_mI40__1608->SetBinContent(315,0.1428571);
   S18_ThetaY_mI45_mI40__1608->SetBinContent(316,1);
   S18_ThetaY_mI45_mI40__1608->SetBinContent(317,0.7142857);
   S18_ThetaY_mI45_mI40__1608->SetBinContent(318,0.5714286);
   S18_ThetaY_mI45_mI40__1608->SetBinError(315,0.1428571);
   S18_ThetaY_mI45_mI40__1608->SetBinError(316,0.3779645);
   S18_ThetaY_mI45_mI40__1608->SetBinError(317,0.3194383);
   S18_ThetaY_mI45_mI40__1608->SetBinError(318,0.2857143);
   S18_ThetaY_mI45_mI40__1608->SetMinimum(0);
   S18_ThetaY_mI45_mI40__1608->SetMaximum(1.1);
   S18_ThetaY_mI45_mI40__1608->SetEntries(17);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__1608->SetLineColor(ci);
   S18_ThetaY_mI45_mI40__1608->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI45_mI40__1608->SetMarkerColor(ci);
   S18_ThetaY_mI45_mI40__1608->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI45_mI40__1608->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI45_mI40__1608->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1608->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__1608->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1608->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI45_mI40__1608->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI45_mI40__1608->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1608->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1608->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI45_mI40__1608->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI45_mI40__1608->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI45_mI40__1608->Draw("AE");
   
   TH1D *ThetaY_mI45_mI40__1609 = new TH1D("ThetaY_mI45_mI40__1609","",630,-1575,1575);
   ThetaY_mI45_mI40__1609->SetBinContent(311,0.004768392);
   ThetaY_mI45_mI40__1609->SetBinContent(312,0.3262943);
   ThetaY_mI45_mI40__1609->SetBinContent(313,0.6907357);
   ThetaY_mI45_mI40__1609->SetBinContent(314,0.9155313);
   ThetaY_mI45_mI40__1609->SetBinContent(315,0.9993188);
   ThetaY_mI45_mI40__1609->SetBinContent(316,1);
   ThetaY_mI45_mI40__1609->SetBinContent(317,0.9250681);
   ThetaY_mI45_mI40__1609->SetBinContent(318,0.7064033);
   ThetaY_mI45_mI40__1609->SetBinContent(319,0.3113079);
   ThetaY_mI45_mI40__1609->SetBinContent(320,0.005449591);
   ThetaY_mI45_mI40__1609->SetBinError(311,0.001802283);
   ThetaY_mI45_mI40__1609->SetBinError(312,0.01490877);
   ThetaY_mI45_mI40__1609->SetBinError(313,0.02169167);
   ThetaY_mI45_mI40__1609->SetBinError(314,0.02497316);
   ThetaY_mI45_mI40__1609->SetBinError(315,0.0260909);
   ThetaY_mI45_mI40__1609->SetBinError(316,0.02609979);
   ThetaY_mI45_mI40__1609->SetBinError(317,0.0251029);
   ThetaY_mI45_mI40__1609->SetBinError(318,0.0219363);
   ThetaY_mI45_mI40__1609->SetBinError(319,0.01456237);
   ThetaY_mI45_mI40__1609->SetBinError(320,0.001926721);
   ThetaY_mI45_mI40__1609->SetEntries(8639);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1609->SetLineColor(ci);
   ThetaY_mI45_mI40__1609->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI45_mI40__1609->SetMarkerColor(ci);
   ThetaY_mI45_mI40__1609->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI45_mI40__1609->GetXaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1609->GetXaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1609->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1609->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1609->GetXaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1609->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI45_mI40__1609->GetYaxis()->CenterTitle(true);
   ThetaY_mI45_mI40__1609->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI45_mI40__1609->GetYaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1609->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI45_mI40__1609->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI45_mI40__1609->GetYaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1609->GetZaxis()->SetLabelFont(42);
   ThetaY_mI45_mI40__1609->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI45_mI40__1609->GetZaxis()->SetTitleFont(42);
   ThetaY_mI45_mI40__1609->Draw("AEsame");
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
   
   Double_t _fx3537[10] = {
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5};
   Double_t _fy3537[10] = {
   0,
   0,
   0,
   0,
   0.1429545,
   1,
   0.7721439,
   0.8089268,
   0,
   0};
   Double_t _felx3537[10] = {
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
   Double_t _fely3537[10] = {
   0,
   0,
   0,
   0,
   0.118274,
   0.3695501,
   0.334028,
   0.3877317,
   0,
   0};
   Double_t _fehx3537[10] = {
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
   Double_t _fehy3537[10] = {
   63.0885,
   0.8075813,
   0.3811038,
   0.2874651,
   0.3290976,
   0.5405871,
   0.5239634,
   0.6418185,
   0.8465367,
   54.26583};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3537,_fy3537,_felx3537,_fehx3537,_fely3537,_fehy3537);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3537 = new TH1F("Graph_Graph3537","",100,-100,100);
   Graph_Graph3537->SetMinimum(0);
   Graph_Graph3537->SetMaximum(1.5);
   Graph_Graph3537->SetDirectory(0);
   Graph_Graph3537->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3537->SetLineColor(ci);
   Graph_Graph3537->GetXaxis()->SetRange(1,100);
   Graph_Graph3537->GetXaxis()->CenterTitle(true);
   Graph_Graph3537->GetXaxis()->SetLabelFont(42);
   Graph_Graph3537->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3537->GetXaxis()->SetTitleFont(42);
   Graph_Graph3537->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3537->GetYaxis()->CenterTitle(true);
   Graph_Graph3537->GetYaxis()->SetLabelFont(42);
   Graph_Graph3537->GetYaxis()->SetTitleFont(42);
   Graph_Graph3537->GetZaxis()->SetLabelFont(42);
   Graph_Graph3537->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3537->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3537);
   
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
   
   TH2D *ThetaY_vs_Y_mI45_mI40__1610 = new TH2D("ThetaY_vs_Y_mI45_mI40__1610","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8090,7);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8116,479);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8142,1014);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8168,1344);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8194,1467);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8220,1468);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8246,1358);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8272,1037);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8298,457);
   ThetaY_vs_Y_mI45_mI40__1610->SetBinContent(8324,8);
   ThetaY_vs_Y_mI45_mI40__1610->SetEntries(8639);
   ThetaY_vs_Y_mI45_mI40__1610->SetContour(20);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(0,0);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(1,73.4);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(2,146.8);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(3,220.2);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(4,293.6);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(5,367);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(6,440.4);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(7,513.8);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(8,587.2);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(9,660.6);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(10,734);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(11,807.4);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(12,880.8);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(13,954.2);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(14,1027.6);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(15,1101);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(16,1174.4);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(17,1247.8);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(18,1321.2);
   ThetaY_vs_Y_mI45_mI40__1610->SetContourLevel(19,1394.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI45_mI40__1610->SetLineColor(ci);
   ThetaY_vs_Y_mI45_mI40__1610->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI45_mI40__1610->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI45_mI40__1610->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1610->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1610->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1610->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1610->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI45_mI40__1610->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI45_mI40__1610->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI45_mI40__1610->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1610->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1610->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI45_mI40__1610->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI45_mI40__1610->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI45_mI40__1610->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-45_-40","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-45_-40","Reco vertices","lpf");
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
