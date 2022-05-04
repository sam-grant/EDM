void S12S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:01 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06746237,125,1.281785);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__1344 = new TH1D("S12S18_ThetaY_mI10_mI5__1344","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(311,0.008650519);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(312,0.2733564);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(313,0.8235294);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(314,1);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(315,1.034602);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(316,0.9636678);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(317,0.9792388);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(318,0.8442907);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(319,0.6418685);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(320,0.3027682);
   S12S18_ThetaY_mI10_mI5__1344->SetBinContent(321,0.03114187);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(311,0.00386863);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(312,0.02174707);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(313,0.03774641);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(314,0.04159452);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(315,0.04230803);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(316,0.04083192);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(317,0.04116047);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(318,0.03821924);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(319,0.03332415);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(320,0.02288712);
   S12S18_ThetaY_mI10_mI5__1344->SetBinError(321,0.007340209);
   S12S18_ThetaY_mI10_mI5__1344->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__1344->SetMaximum(1.14686);
   S12S18_ThetaY_mI10_mI5__1344->SetEntries(3990);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1344->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__1344->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1344->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__1344->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__1344->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__1344->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1344->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1344->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1344->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__1344->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__1344->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1344->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1344->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1344->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1344->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1344->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1345 = new TH1D("ThetaY_mI10_mI5__1345","",630,-1575,1575);
   ThetaY_mI10_mI5__1345->SetBinContent(309,0.000490307);
   ThetaY_mI10_mI5__1345->SetBinContent(310,0.1515614);
   ThetaY_mI10_mI5__1345->SetBinContent(311,0.5530286);
   ThetaY_mI10_mI5__1345->SetBinContent(312,0.7921475);
   ThetaY_mI10_mI5__1345->SetBinContent(313,0.9227766);
   ThetaY_mI10_mI5__1345->SetBinContent(314,1);
   ThetaY_mI10_mI5__1345->SetBinContent(315,1.038942);
   ThetaY_mI10_mI5__1345->SetBinContent(316,1.0426);
   ThetaY_mI10_mI5__1345->SetBinContent(317,1.005299);
   ThetaY_mI10_mI5__1345->SetBinContent(318,0.9270574);
   ThetaY_mI10_mI5__1345->SetBinContent(319,0.7837369);
   ThetaY_mI10_mI5__1345->SetBinContent(320,0.5498416);
   ThetaY_mI10_mI5__1345->SetBinContent(321,0.1514483);
   ThetaY_mI10_mI5__1345->SetBinContent(322,0.0006600287);
   ThetaY_mI10_mI5__1345->SetBinError(309,9.615712e-05);
   ThetaY_mI10_mI5__1345->SetBinError(310,0.001690603);
   ThetaY_mI10_mI5__1345->SetBinError(311,0.003229395);
   ThetaY_mI10_mI5__1345->SetBinError(312,0.003865008);
   ThetaY_mI10_mI5__1345->SetBinError(313,0.004171533);
   ThetaY_mI10_mI5__1345->SetBinError(314,0.004342575);
   ThetaY_mI10_mI5__1345->SetBinError(315,0.004426322);
   ThetaY_mI10_mI5__1345->SetBinError(316,0.004434108);
   ThetaY_mI10_mI5__1345->SetBinError(317,0.004354066);
   ThetaY_mI10_mI5__1345->SetBinError(318,0.004181198);
   ThetaY_mI10_mI5__1345->SetBinError(319,0.003844435);
   ThetaY_mI10_mI5__1345->SetBinError(320,0.003220076);
   ThetaY_mI10_mI5__1345->SetBinError(321,0.001689972);
   ThetaY_mI10_mI5__1345->SetBinError(322,0.0001115652);
   ThetaY_mI10_mI5__1345->SetEntries(472988);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1345->SetLineColor(ci);
   ThetaY_mI10_mI5__1345->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1345->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1345->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1345->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1345->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1345->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1345->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1345->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1345->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1345->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1345->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1345->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1345->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1345->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1345->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1345->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1345->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1345->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1345->Draw("AEsame");
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
   
   Double_t _fx3449[14] = {
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
   Double_t _fy3449[14] = {
   0,
   0,
   0.01564208,
   0.3450827,
   0.8924472,
   1,
   0.995823,
   0.9242928,
   0.974077,
   0.910721,
   0.8189847,
   0.5506462,
   0.2056271,
   0};
   Double_t _felx3449[14] = {
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
   Double_t _fely3449[14] = {
   0,
   0,
   0.006756892,
   0.02747545,
   0.04108889,
   0.04180812,
   0.04093084,
   0.03934818,
   0.04114777,
   0.04141593,
   0.04268919,
   0.04170907,
   0.04806365,
   0};
   Double_t _fehx3449[14] = {
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
   Double_t _fehy3449[14] = {
   6.731774,
   0.02101803,
   0.0105833,
   0.02975595,
   0.04302653,
   0.0435945,
   0.04264958,
   0.04106077,
   0.04292461,
   0.04334447,
   0.04497561,
   0.04499622,
   0.06087396,
   4.954963};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3449,_fy3449,_felx3449,_fehx3449,_fely3449,_fehy3449);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3449 = new TH1F("Graph_Graph3449","",100,-100,100);
   Graph_Graph3449->SetMinimum(0);
   Graph_Graph3449->SetMaximum(1.5);
   Graph_Graph3449->SetDirectory(0);
   Graph_Graph3449->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3449->SetLineColor(ci);
   Graph_Graph3449->GetXaxis()->SetRange(1,100);
   Graph_Graph3449->GetXaxis()->CenterTitle(true);
   Graph_Graph3449->GetXaxis()->SetLabelFont(42);
   Graph_Graph3449->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3449->GetXaxis()->SetTitleFont(42);
   Graph_Graph3449->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3449->GetYaxis()->CenterTitle(true);
   Graph_Graph3449->GetYaxis()->SetLabelFont(42);
   Graph_Graph3449->GetYaxis()->SetTitleFont(42);
   Graph_Graph3449->GetZaxis()->SetLabelFont(42);
   Graph_Graph3449->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3449->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3449);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.14686,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1346 = new TH2D("ThetaY_vs_Y_mI10_mI5__1346","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8045,26);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8071,8037);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8097,29326);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8123,42006);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8149,48933);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8175,53028);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8201,55093);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8227,55287);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8253,53309);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8279,49160);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8305,41560);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8331,29157);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8357,8031);
   ThetaY_vs_Y_mI10_mI5__1346->SetBinContent(8383,35);
   ThetaY_vs_Y_mI10_mI5__1346->SetEntries(472988);
   ThetaY_vs_Y_mI10_mI5__1346->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(1,2764.35);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(2,5528.7);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(3,8293.05);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(4,11057.4);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(5,13821.75);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(6,16586.1);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(7,19350.45);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(8,22114.8);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(9,24879.15);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(10,27643.5);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(11,30407.85);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(12,33172.2);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(13,35936.55);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(14,38700.9);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(15,41465.25);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(16,44229.6);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(17,46993.95);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(18,49758.3);
   ThetaY_vs_Y_mI10_mI5__1346->SetContourLevel(19,52522.65);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1346->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1346->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1346->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1346->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1346->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1346->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1346->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1346->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1346->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1346->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1346->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1346->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1346->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1346->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1346->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1346->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-10_-5","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-10_-5","Reco vertices","lpf");
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
