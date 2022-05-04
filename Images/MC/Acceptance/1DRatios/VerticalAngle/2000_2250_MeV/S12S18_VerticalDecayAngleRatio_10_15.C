void S12S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:05 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.078549,125,1.492431);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__1527 = new TH1D("S12S18_ThetaY_10_15__1527","",630,-1575,1575);
   S12S18_ThetaY_10_15__1527->SetBinContent(311,0.1186441);
   S12S18_ThetaY_10_15__1527->SetBinContent(312,0.6677966);
   S12S18_ThetaY_10_15__1527->SetBinContent(313,1);
   S12S18_ThetaY_10_15__1527->SetBinContent(314,1.088136);
   S12S18_ThetaY_10_15__1527->SetBinContent(315,1.115254);
   S12S18_ThetaY_10_15__1527->SetBinContent(316,1.094915);
   S12S18_ThetaY_10_15__1527->SetBinContent(317,1.135593);
   S12S18_ThetaY_10_15__1527->SetBinContent(318,0.3559322);
   S12S18_ThetaY_10_15__1527->SetBinContent(319,0.01016949);
   S12S18_ThetaY_10_15__1527->SetBinError(311,0.02005451);
   S12S18_ThetaY_10_15__1527->SetBinError(312,0.04757854);
   S12S18_ThetaY_10_15__1527->SetBinError(313,0.05822225);
   S12S18_ThetaY_10_15__1527->SetBinError(314,0.06073381);
   S12S18_ThetaY_10_15__1527->SetBinError(315,0.06148596);
   S12S18_ThetaY_10_15__1527->SetBinError(316,0.06092271);
   S12S18_ThetaY_10_15__1527->SetBinError(317,0.06204409);
   S12S18_ThetaY_10_15__1527->SetBinError(318,0.03473543);
   S12S18_ThetaY_10_15__1527->SetBinError(319,0.005871359);
   S12S18_ThetaY_10_15__1527->SetMinimum(0);
   S12S18_ThetaY_10_15__1527->SetMaximum(1.335333);
   S12S18_ThetaY_10_15__1527->SetEntries(1943);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1527->SetLineColor(ci);
   S12S18_ThetaY_10_15__1527->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1527->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__1527->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__1527->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__1527->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1527->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1527->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1527->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__1527->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__1527->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1527->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1527->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1527->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1527->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1527->Draw("AE");
   
   TH1D *ThetaY_10_15__1528 = new TH1D("ThetaY_10_15__1528","",630,-1575,1575);
   ThetaY_10_15__1528->SetBinContent(310,0.001862302);
   ThetaY_10_15__1528->SetBinContent(311,0.241281);
   ThetaY_10_15__1528->SetBinContent(312,0.738149);
   ThetaY_10_15__1528->SetBinContent(313,1);
   ThetaY_10_15__1528->SetBinContent(314,1.133606);
   ThetaY_10_15__1528->SetBinContent(315,1.203358);
   ThetaY_10_15__1528->SetBinContent(316,1.213939);
   ThetaY_10_15__1528->SetBinContent(317,1.150649);
   ThetaY_10_15__1528->SetBinContent(318,0.9957957);
   ThetaY_10_15__1528->SetBinContent(319,0.7358352);
   ThetaY_10_15__1528->SetBinContent(320,0.2431433);
   ThetaY_10_15__1528->SetBinContent(321,0.001918736);
   ThetaY_10_15__1528->SetBinError(310,0.0002292336);
   ThetaY_10_15__1528->SetBinError(311,0.002609244);
   ThetaY_10_15__1528->SetBinError(312,0.004563785);
   ThetaY_10_15__1528->SetBinError(313,0.00531194);
   ThetaY_10_15__1528->SetBinError(314,0.005655672);
   ThetaY_10_15__1528->SetBinError(315,0.005827074);
   ThetaY_10_15__1528->SetBinError(316,0.005852637);
   ThetaY_10_15__1528->SetBinError(317,0.005698028);
   ThetaY_10_15__1528->SetBinError(318,0.005300762);
   ThetaY_10_15__1528->SetBinError(319,0.004556626);
   ThetaY_10_15__1528->SetBinError(320,0.002619295);
   ThetaY_10_15__1528->SetBinError(321,0.0002326809);
   ThetaY_10_15__1528->SetEntries(306894);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1528->SetLineColor(ci);
   ThetaY_10_15__1528->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1528->SetMarkerColor(ci);
   ThetaY_10_15__1528->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1528->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1528->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1528->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1528->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1528->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1528->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1528->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1528->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1528->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1528->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1528->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1528->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1528->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1528->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1528->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1528->Draw("AEsame");
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
   
   Double_t _fx3510[12] = {
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
   Double_t _fy3510[12] = {
   0,
   0.4917256,
   0.9046908,
   1,
   0.9598886,
   0.9267852,
   0.9019524,
   0.9869154,
   0.357435,
   0.01382034,
   0,
   0};
   Double_t _felx3510[12] = {
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
   Double_t _fely3510[12] = {
   0,
   0.08288227,
   0.06464267,
   0.05843014,
   0.05376071,
   0.05126539,
   0.05034738,
   0.05411432,
   0.03487775,
   0.007521828,
   0,
   0};
   Double_t _fehx3510[12] = {
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
   Double_t _fehy3510[12] = {
   3.39827,
   0.09819775,
   0.06943791,
   0.06194996,
   0.05686087,
   0.05418401,
   0.05324065,
   0.0571675,
   0.03846027,
   0.01344496,
   0.02566971,
   3.296962};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3510,_fy3510,_felx3510,_fehx3510,_fely3510,_fehy3510);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3510 = new TH1F("Graph_Graph3510","",100,-100,100);
   Graph_Graph3510->SetMinimum(0);
   Graph_Graph3510->SetMaximum(1.5);
   Graph_Graph3510->SetDirectory(0);
   Graph_Graph3510->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3510->SetLineColor(ci);
   Graph_Graph3510->GetXaxis()->SetRange(1,100);
   Graph_Graph3510->GetXaxis()->CenterTitle(true);
   Graph_Graph3510->GetXaxis()->SetLabelFont(42);
   Graph_Graph3510->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3510->GetXaxis()->SetTitleFont(42);
   Graph_Graph3510->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3510->GetYaxis()->CenterTitle(true);
   Graph_Graph3510->GetYaxis()->SetLabelFont(42);
   Graph_Graph3510->GetYaxis()->SetTitleFont(42);
   Graph_Graph3510->GetZaxis()->SetLabelFont(42);
   Graph_Graph3510->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3510->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3510);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.335333,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1529 = new TH2D("ThetaY_vs_Y_10_15__1529","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8075,66);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8101,8551);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8127,26160);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8153,35440);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8179,40175);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8205,42647);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8231,43022);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8257,40779);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8283,35291);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8309,26078);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8335,8617);
   ThetaY_vs_Y_10_15__1529->SetBinContent(8361,68);
   ThetaY_vs_Y_10_15__1529->SetEntries(306894);
   ThetaY_vs_Y_10_15__1529->SetContour(20);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(1,2151.1);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(2,4302.2);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(3,6453.3);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(4,8604.4);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(5,10755.5);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(6,12906.6);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(7,15057.7);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(8,17208.8);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(9,19359.9);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(10,21511);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(11,23662.1);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(12,25813.2);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(13,27964.3);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(14,30115.4);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(15,32266.5);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(16,34417.6);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(17,36568.7);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(18,38719.8);
   ThetaY_vs_Y_10_15__1529->SetContourLevel(19,40870.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1529->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1529->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1529->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1529->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1529->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1529->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1529->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1529->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1529->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1529->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1529->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1529->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1529->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1529->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1529->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1529->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_10_15","Reco vertices","lpf");
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
