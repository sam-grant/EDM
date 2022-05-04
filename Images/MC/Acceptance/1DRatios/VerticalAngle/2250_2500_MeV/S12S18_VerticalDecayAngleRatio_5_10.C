void S12S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:09 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.09122421,125,1.73326);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_5_10__1695 = new TH1D("S12S18_ThetaY_5_10__1695","",630,-1575,1575);
   S12S18_ThetaY_5_10__1695->SetBinContent(311,0.004484305);
   S12S18_ThetaY_5_10__1695->SetBinContent(312,0.2107623);
   S12S18_ThetaY_5_10__1695->SetBinContent(313,1);
   S12S18_ThetaY_5_10__1695->SetBinContent(314,1.26009);
   S12S18_ThetaY_5_10__1695->SetBinContent(315,1.237668);
   S12S18_ThetaY_5_10__1695->SetBinContent(316,1.336323);
   S12S18_ThetaY_5_10__1695->SetBinContent(317,1.219731);
   S12S18_ThetaY_5_10__1695->SetBinContent(318,0.2869955);
   S12S18_ThetaY_5_10__1695->SetBinError(311,0.004484305);
   S12S18_ThetaY_5_10__1695->SetBinError(312,0.03074285);
   S12S18_ThetaY_5_10__1695->SetBinError(313,0.06696495);
   S12S18_ThetaY_5_10__1695->SetBinError(314,0.07517065);
   S12S18_ThetaY_5_10__1695->SetBinError(315,0.07449887);
   S12S18_ThetaY_5_10__1695->SetBinError(316,0.07741111);
   S12S18_ThetaY_5_10__1695->SetBinError(317,0.07395705);
   S12S18_ThetaY_5_10__1695->SetBinError(318,0.03587444);
   S12S18_ThetaY_5_10__1695->SetMinimum(0);
   S12S18_ThetaY_5_10__1695->SetMaximum(1.550812);
   S12S18_ThetaY_5_10__1695->SetEntries(1462);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1695->SetLineColor(ci);
   S12S18_ThetaY_5_10__1695->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_5_10__1695->SetMarkerColor(ci);
   S12S18_ThetaY_5_10__1695->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_5_10__1695->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_5_10__1695->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1695->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1695->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1695->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_5_10__1695->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_5_10__1695->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1695->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1695->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_5_10__1695->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_5_10__1695->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_5_10__1695->Draw("AE");
   
   TH1D *ThetaY_5_10__1696 = new TH1D("ThetaY_5_10__1696","",630,-1575,1575);
   ThetaY_5_10__1696->SetBinContent(311,0.008940626);
   ThetaY_5_10__1696->SetBinContent(312,0.4134589);
   ThetaY_5_10__1696->SetBinContent(313,1);
   ThetaY_5_10__1696->SetBinContent(314,1.28571);
   ThetaY_5_10__1696->SetBinContent(315,1.409829);
   ThetaY_5_10__1696->SetBinContent(316,1.398788);
   ThetaY_5_10__1696->SetBinContent(317,1.28598);
   ThetaY_5_10__1696->SetBinContent(318,0.9961297);
   ThetaY_5_10__1696->SetBinContent(319,0.4123489);
   ThetaY_5_10__1696->SetBinContent(320,0.008640605);
   ThetaY_5_10__1696->SetBinError(311,0.0005179165);
   ThetaY_5_10__1696->SetBinError(312,0.003522022);
   ThetaY_5_10__1696->SetBinError(313,0.005477417);
   ThetaY_5_10__1696->SetBinError(314,0.006210797);
   ThetaY_5_10__1696->SetBinError(315,0.006503678);
   ThetaY_5_10__1696->SetBinError(316,0.006478161);
   ThetaY_5_10__1696->SetBinError(317,0.006211449);
   ThetaY_5_10__1696->SetBinError(318,0.005466807);
   ThetaY_5_10__1696->SetBinError(319,0.00351729);
   ThetaY_5_10__1696->SetBinError(320,0.0005091525);
   ThetaY_5_10__1696->SetEntries(273975);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1696->SetLineColor(ci);
   ThetaY_5_10__1696->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1696->SetMarkerColor(ci);
   ThetaY_5_10__1696->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1696->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1696->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1696->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1696->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1696->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1696->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1696->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1696->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1696->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1696->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1696->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1696->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1696->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1696->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1696->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1696->Draw("AEsame");
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
   
   Double_t _fx3566[10] = {
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
   Double_t _fy3566[10] = {
   0.501565,
   0.509754,
   1,
   0.980073,
   0.8778855,
   0.9553434,
   0.9484836,
   0.2881106,
   0,
   0};
   Double_t _felx3566[10] = {
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
   Double_t _fely3566[10] = {
   0.4151826,
   0.0742134,
   0.06713724,
   0.05862207,
   0.05296481,
   0.05548642,
   0.05765634,
   0.03595356,
   0,
   0};
   Double_t _fehx3566[10] = {
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
   Double_t _fehy3566[10] = {
   1.15976,
   0.08589924,
   0.07180555,
   0.06223938,
   0.05626213,
   0.05880788,
   0.06127383,
   0.04074799,
   0.0200225,
   0.9585146};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3566,_fy3566,_felx3566,_fehx3566,_fely3566,_fehy3566);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3566 = new TH1F("Graph_Graph3566","",100,-100,100);
   Graph_Graph3566->SetMinimum(0);
   Graph_Graph3566->SetMaximum(1.5);
   Graph_Graph3566->SetDirectory(0);
   Graph_Graph3566->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3566->SetLineColor(ci);
   Graph_Graph3566->GetXaxis()->SetRange(1,100);
   Graph_Graph3566->GetXaxis()->CenterTitle(true);
   Graph_Graph3566->GetXaxis()->SetLabelFont(42);
   Graph_Graph3566->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3566->GetXaxis()->SetTitleFont(42);
   Graph_Graph3566->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3566->GetYaxis()->CenterTitle(true);
   Graph_Graph3566->GetYaxis()->SetLabelFont(42);
   Graph_Graph3566->GetYaxis()->SetTitleFont(42);
   Graph_Graph3566->GetZaxis()->SetLabelFont(42);
   Graph_Graph3566->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3566->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3566);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.550812,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1697 = new TH2D("ThetaY_vs_Y_5_10__1697","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8100,298);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8126,13781);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8152,33331);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8178,42854);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8204,46991);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8230,46623);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8256,42863);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8282,33202);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8308,13744);
   ThetaY_vs_Y_5_10__1697->SetBinContent(8334,288);
   ThetaY_vs_Y_5_10__1697->SetEntries(273975);
   ThetaY_vs_Y_5_10__1697->SetContour(20);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(1,2349.55);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(2,4699.1);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(3,7048.65);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(4,9398.2);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(5,11747.75);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(6,14097.3);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(7,16446.85);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(8,18796.4);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(9,21145.95);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(10,23495.5);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(11,25845.05);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(12,28194.6);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(13,30544.15);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(14,32893.7);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(15,35243.25);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(16,37592.8);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(17,39942.35);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(18,42291.9);
   ThetaY_vs_Y_5_10__1697->SetContourLevel(19,44641.45);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1697->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1697->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1697->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1697->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1697->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1697->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1697->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1697->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1697->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1697->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1697->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1697->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1697->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1697->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1697->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1697->Draw("COL");
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
   entry=leg->AddEntry("S12S18_ThetaY_5_10","Reco vertices","lpf");
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
