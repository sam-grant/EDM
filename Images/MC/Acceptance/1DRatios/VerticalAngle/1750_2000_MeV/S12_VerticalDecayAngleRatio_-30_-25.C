void S12_VerticalDecayAngleRatio_-30_-25()
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
   upper_pad->Range(-125,-0.06470589,125,1.229412);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_ThetaY_mI30_mI25__1218 = new TH1D("S12_ThetaY_mI30_mI25__1218","",630,-1575,1575);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(314,0.3636364);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(315,0.7613636);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(316,1);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(317,0.8181818);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(318,0.7272727);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(319,0.6022727);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(320,0.4886364);
   S12_ThetaY_mI30_mI25__1218->SetBinContent(321,0.1363636);
   S12_ThetaY_mI30_mI25__1218->SetBinError(314,0.06428243);
   S12_ThetaY_mI30_mI25__1218->SetBinError(315,0.09301537);
   S12_ThetaY_mI30_mI25__1218->SetBinError(316,0.1066004);
   S12_ThetaY_mI30_mI25__1218->SetBinError(317,0.09642365);
   S12_ThetaY_mI30_mI25__1218->SetBinError(318,0.09090909);
   S12_ThetaY_mI30_mI25__1218->SetBinError(319,0.08272852);
   S12_ThetaY_mI30_mI25__1218->SetBinError(320,0.07451635);
   S12_ThetaY_mI30_mI25__1218->SetBinError(321,0.03936479);
   S12_ThetaY_mI30_mI25__1218->SetMinimum(0);
   S12_ThetaY_mI30_mI25__1218->SetMaximum(1.1);
   S12_ThetaY_mI30_mI25__1218->SetEntries(431);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1218->SetLineColor(ci);
   S12_ThetaY_mI30_mI25__1218->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_ThetaY_mI30_mI25__1218->SetMarkerColor(ci);
   S12_ThetaY_mI30_mI25__1218->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12_ThetaY_mI30_mI25__1218->GetXaxis()->SetRange(296,335);
   S12_ThetaY_mI30_mI25__1218->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1218->GetXaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1218->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1218->GetYaxis()->SetTitle("Normalised entries");
   S12_ThetaY_mI30_mI25__1218->GetYaxis()->CenterTitle(true);
   S12_ThetaY_mI30_mI25__1218->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1218->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1218->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_mI30_mI25__1218->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_mI30_mI25__1218->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_mI30_mI25__1218->Draw("AE");
   
   TH1D *ThetaY_mI30_mI25__1219 = new TH1D("ThetaY_mI30_mI25__1219","",630,-1575,1575);
   ThetaY_mI30_mI25__1219->SetBinContent(309,0.0004841275);
   ThetaY_mI30_mI25__1219->SetBinContent(310,0.1457224);
   ThetaY_mI30_mI25__1219->SetBinContent(311,0.5218895);
   ThetaY_mI30_mI25__1219->SetBinContent(312,0.7482537);
   ThetaY_mI30_mI25__1219->SetBinContent(313,0.8721212);
   ThetaY_mI30_mI25__1219->SetBinContent(314,0.9589183);
   ThetaY_mI30_mI25__1219->SetBinContent(315,0.9754478);
   ThetaY_mI30_mI25__1219->SetBinContent(316,1);
   ThetaY_mI30_mI25__1219->SetBinContent(317,0.9511031);
   ThetaY_mI30_mI25__1219->SetBinContent(318,0.884501);
   ThetaY_mI30_mI25__1219->SetBinContent(319,0.752265);
   ThetaY_mI30_mI25__1219->SetBinContent(320,0.5191922);
   ThetaY_mI30_mI25__1219->SetBinContent(321,0.1471056);
   ThetaY_mI30_mI25__1219->SetBinContent(322,0.0006224497);
   ThetaY_mI30_mI25__1219->SetBinError(309,0.000182983);
   ThetaY_mI30_mI25__1219->SetBinError(310,0.003174637);
   ThetaY_mI30_mI25__1219->SetBinError(311,0.006007865);
   ThetaY_mI30_mI25__1219->SetBinError(312,0.007193749);
   ThetaY_mI30_mI25__1219->SetBinError(313,0.007766392);
   ThetaY_mI30_mI25__1219->SetBinError(314,0.008143698);
   ThetaY_mI30_mI25__1219->SetBinError(315,0.008213588);
   ThetaY_mI30_mI25__1219->SetBinError(316,0.008316314);
   ThetaY_mI30_mI25__1219->SetBinError(317,0.008110445);
   ThetaY_mI30_mI25__1219->SetBinError(318,0.00782132);
   ThetaY_mI30_mI25__1219->SetBinError(319,0.007213006);
   ThetaY_mI30_mI25__1219->SetBinError(320,0.005992319);
   ThetaY_mI30_mI25__1219->SetBinError(321,0.003189668);
   ThetaY_mI30_mI25__1219->SetBinError(322,0.0002074832);
   ThetaY_mI30_mI25__1219->SetEntries(122578);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1219->SetLineColor(ci);
   ThetaY_mI30_mI25__1219->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI30_mI25__1219->SetMarkerColor(ci);
   ThetaY_mI30_mI25__1219->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI30_mI25__1219->GetXaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1219->GetXaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1219->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1219->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1219->GetXaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1219->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI30_mI25__1219->GetYaxis()->CenterTitle(true);
   ThetaY_mI30_mI25__1219->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI30_mI25__1219->GetYaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1219->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI30_mI25__1219->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI30_mI25__1219->GetYaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1219->GetZaxis()->SetLabelFont(42);
   ThetaY_mI30_mI25__1219->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI30_mI25__1219->GetZaxis()->SetTitleFont(42);
   ThetaY_mI30_mI25__1219->Draw("AEsame");
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
   
   Double_t _fx3407[14] = {
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
   Double_t _fy3407[14] = {
   0,
   0,
   0,
   0,
   0,
   0.3792152,
   0.7805273,
   1,
   0.8602451,
   0.8222407,
   0.8006124,
   0.9411474,
   0.9269778,
   0};
   Double_t _felx3407[14] = {
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
   Double_t _fely3407[14] = {
   0,
   0,
   0,
   0,
   0,
   0.06675886,
   0.09534041,
   0.1067172,
   0.1014058,
   0.1027632,
   0.1098864,
   0.143363,
   0.26451,
   0};
   Double_t _fehx3407[14] = {
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
   Double_t _fehy3407[14] = {
   49.42854,
   0.1436282,
   0.04009135,
   0.02796175,
   0.02399005,
   0.07969593,
   0.1077711,
   0.1187705,
   0.1141354,
   0.1164946,
   0.1261247,
   0.1670843,
   0.3536081,
   37.29478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3407,_fy3407,_felx3407,_fehx3407,_fely3407,_fehy3407);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3407 = new TH1F("Graph_Graph3407","",100,-100,100);
   Graph_Graph3407->SetMinimum(0);
   Graph_Graph3407->SetMaximum(1.5);
   Graph_Graph3407->SetDirectory(0);
   Graph_Graph3407->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3407->SetLineColor(ci);
   Graph_Graph3407->GetXaxis()->SetRange(1,100);
   Graph_Graph3407->GetXaxis()->CenterTitle(true);
   Graph_Graph3407->GetXaxis()->SetLabelFont(42);
   Graph_Graph3407->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3407->GetXaxis()->SetTitleFont(42);
   Graph_Graph3407->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3407->GetYaxis()->CenterTitle(true);
   Graph_Graph3407->GetYaxis()->SetLabelFont(42);
   Graph_Graph3407->GetYaxis()->SetTitleFont(42);
   Graph_Graph3407->GetZaxis()->SetLabelFont(42);
   Graph_Graph3407->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3407->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3407);
   
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
   
   TH2D *ThetaY_vs_Y_mI30_mI25__1220 = new TH2D("ThetaY_vs_Y_mI30_mI25__1220","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8041,7);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8067,2107);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8093,7546);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8119,10819);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8145,12610);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8171,13865);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8197,14104);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8223,14459);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8249,13752);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8275,12789);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8301,10877);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8327,7507);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8353,2127);
   ThetaY_vs_Y_mI30_mI25__1220->SetBinContent(8379,9);
   ThetaY_vs_Y_mI30_mI25__1220->SetEntries(122578);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI30_mI25__1220->SetLineColor(ci);
   ThetaY_vs_Y_mI30_mI25__1220->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI30_mI25__1220->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI30_mI25__1220->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1220->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1220->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1220->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1220->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI30_mI25__1220->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI30_mI25__1220->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI30_mI25__1220->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1220->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1220->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI30_mI25__1220->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI30_mI25__1220->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI30_mI25__1220->Draw("COL");
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
