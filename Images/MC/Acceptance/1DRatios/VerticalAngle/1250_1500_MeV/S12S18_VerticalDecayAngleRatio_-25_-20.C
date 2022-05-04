void S12S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:54 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-10.97157,125,208.4598);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI25_mI20__993 = new TH1D("S12S18_ThetaY_mI25_mI20__993","",630,-1575,1575);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(312,1.333333);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(313,41);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(314,93);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(315,98);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(316,95.66667);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(317,105);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(318,93.66667);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(319,81.33333);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(320,76);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(321,75);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(322,44.66667);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(323,17);
   S12S18_ThetaY_mI25_mI20__993->SetBinContent(324,1);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(312,0.6666667);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(313,3.696846);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(314,5.567764);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(315,5.715476);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(316,5.647025);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(317,5.91608);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(318,5.587685);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(319,5.206833);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(320,5.033223);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(321,5);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(322,3.858612);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(323,2.380476);
   S12S18_ThetaY_mI25_mI20__993->SetBinError(324,0.5773503);
   S12S18_ThetaY_mI25_mI20__993->SetMinimum(0);
   S12S18_ThetaY_mI25_mI20__993->SetMaximum(186.5167);
   S12S18_ThetaY_mI25_mI20__993->SetEntries(2468);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__993->SetLineColor(ci);
   S12S18_ThetaY_mI25_mI20__993->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI25_mI20__993->SetMarkerColor(ci);
   S12S18_ThetaY_mI25_mI20__993->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI25_mI20__993->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI25_mI20__993->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__993->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__993->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__993->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI25_mI20__993->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI25_mI20__993->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__993->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__993->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI25_mI20__993->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI25_mI20__993->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI25_mI20__993->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__994 = new TH1D("ThetaY_mI25_mI20__994","",630,-1575,1575);
   ThetaY_mI25_mI20__994->SetBinContent(307,0.7651515);
   ThetaY_mI25_mI20__994->SetBinContent(308,29.51515);
   ThetaY_mI25_mI20__994->SetBinContent(309,85.2803);
   ThetaY_mI25_mI20__994->SetBinContent(310,118.4773);
   ThetaY_mI25_mI20__994->SetBinContent(311,141.6515);
   ThetaY_mI25_mI20__994->SetBinContent(312,153.3712);
   ThetaY_mI25_mI20__994->SetBinContent(313,162.4848);
   ThetaY_mI25_mI20__994->SetBinContent(314,167);
   ThetaY_mI25_mI20__994->SetBinContent(315,169.5606);
   ThetaY_mI25_mI20__994->SetBinContent(316,168.5758);
   ThetaY_mI25_mI20__994->SetBinContent(317,166.5227);
   ThetaY_mI25_mI20__994->SetBinContent(318,162.7348);
   ThetaY_mI25_mI20__994->SetBinContent(319,156.803);
   ThetaY_mI25_mI20__994->SetBinContent(320,140.803);
   ThetaY_mI25_mI20__994->SetBinContent(321,117.6742);
   ThetaY_mI25_mI20__994->SetBinContent(322,85.67424);
   ThetaY_mI25_mI20__994->SetBinContent(323,30.95455);
   ThetaY_mI25_mI20__994->SetBinContent(324,1);
   ThetaY_mI25_mI20__994->SetBinError(307,0.07613542);
   ThetaY_mI25_mI20__994->SetBinError(308,0.4728632);
   ThetaY_mI25_mI20__994->SetBinError(309,0.8037804);
   ThetaY_mI25_mI20__994->SetBinError(310,0.9473938);
   ThetaY_mI25_mI20__994->SetBinError(311,1.035914);
   ThetaY_mI25_mI20__994->SetBinError(312,1.077916);
   ThetaY_mI25_mI20__994->SetBinError(313,1.10948);
   ThetaY_mI25_mI20__994->SetBinError(314,1.12479);
   ThetaY_mI25_mI20__994->SetBinError(315,1.13338);
   ThetaY_mI25_mI20__994->SetBinError(316,1.130084);
   ThetaY_mI25_mI20__994->SetBinError(317,1.123181);
   ThetaY_mI25_mI20__994->SetBinError(318,1.110333);
   ThetaY_mI25_mI20__994->SetBinError(319,1.089909);
   ThetaY_mI25_mI20__994->SetBinError(320,1.032807);
   ThetaY_mI25_mI20__994->SetBinError(321,0.9441777);
   ThetaY_mI25_mI20__994->SetBinError(322,0.8056347);
   ThetaY_mI25_mI20__994->SetBinError(323,0.4842563);
   ThetaY_mI25_mI20__994->SetBinError(324,0.08703883);
   ThetaY_mI25_mI20__994->SetEntries(271768);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__994->SetLineColor(ci);
   ThetaY_mI25_mI20__994->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__994->SetMarkerColor(ci);
   ThetaY_mI25_mI20__994->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__994->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__994->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__994->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__994->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__994->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__994->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__994->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__994->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__994->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__994->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__994->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__994->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__994->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__994->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__994->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__994->Draw("AEsame");
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
   
   Double_t _fx3332[18] = {
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
   Double_t _fy3332[18] = {
   0,
   0,
   0,
   0,
   0,
   0.008693505,
   0.2523312,
   0.5568862,
   0.5779644,
   0.5674996,
   0.6305446,
   0.5755784,
   0.5186975,
   0.5397611,
   0.6373527,
   0.5213547,
   0.5491924,
   1};
   Double_t _felx3332[18] = {
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
   Double_t _fely3332[18] = {
   0,
   0,
   0,
   0,
   0,
   0.004160905,
   0.02278552,
   0.03352938,
   0.0339082,
   0.0336934,
   0.03576104,
   0.03453864,
   0.03337768,
   0.03593782,
   0.04276367,
   0.0452457,
   0.07711715,
   0.5487277};
   Double_t _fehx3332[18] = {
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
   Double_t _fehy3332[18] = {
   0.8093835,
   0.02079674,
   0.007196551,
   0.005179981,
   0.004332492,
   0.006875068,
   0.02494336,
   0.03561321,
   0.03596001,
   0.03575741,
   0.03785083,
   0.03667782,
   0.03559959,
   0.03841622,
   0.04573689,
   0.04935813,
   0.08881084,
   0.9946005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3332,_fy3332,_felx3332,_fehx3332,_fely3332,_fehy3332);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3332 = new TH1F("Graph_Graph3332","",100,-100,100);
   Graph_Graph3332->SetMinimum(0);
   Graph_Graph3332->SetMaximum(1.5);
   Graph_Graph3332->SetDirectory(0);
   Graph_Graph3332->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3332->SetLineColor(ci);
   Graph_Graph3332->GetXaxis()->SetRange(1,100);
   Graph_Graph3332->GetXaxis()->CenterTitle(true);
   Graph_Graph3332->GetXaxis()->SetLabelFont(42);
   Graph_Graph3332->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3332->GetXaxis()->SetTitleFont(42);
   Graph_Graph3332->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3332->GetYaxis()->CenterTitle(true);
   Graph_Graph3332->GetYaxis()->SetLabelFont(42);
   Graph_Graph3332->GetYaxis()->SetTitleFont(42);
   Graph_Graph3332->GetZaxis()->SetLabelFont(42);
   Graph_Graph3332->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3332->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3332);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,186.5167,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__995 = new TH2D("ThetaY_vs_Y_mI25_mI20__995","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(7990,101);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8016,3896);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8042,11257);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8068,15639);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8094,18698);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8120,20245);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8146,21448);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8172,22044);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8198,22382);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8224,22252);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8250,21981);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8276,21481);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8302,20698);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8328,18586);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8354,15533);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8380,11309);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8406,4086);
   ThetaY_vs_Y_mI25_mI20__995->SetBinContent(8432,132);
   ThetaY_vs_Y_mI25_mI20__995->SetEntries(271768);
   ThetaY_vs_Y_mI25_mI20__995->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(1,1119.1);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(2,2238.2);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(3,3357.3);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(4,4476.4);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(5,5595.5);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(6,6714.6);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(7,7833.7);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(8,8952.8);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(9,10071.9);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(10,11191);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(11,12310.1);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(12,13429.2);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(13,14548.3);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(14,15667.4);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(15,16786.5);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(16,17905.6);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(17,19024.7);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(18,20143.8);
   ThetaY_vs_Y_mI25_mI20__995->SetContourLevel(19,21262.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__995->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__995->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__995->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__995->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__995->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__995->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__995->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__995->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__995->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__995->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__995->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__995->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__995->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__995->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__995->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__995->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-25_-20","Reco vertices","lpf");
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
