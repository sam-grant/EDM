void S12S18_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
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
   
   TH1D *S12S18_ThetaY_mI15_mI10__1170 = new TH1D("S12S18_ThetaY_mI15_mI10__1170","",630,-1575,1575);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(311,0.01821192);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(312,0.2135762);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(313,0.7483444);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(314,0.9503311);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(315,1);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(316,0.9354305);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(317,0.9536424);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(318,0.8460265);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(319,0.7996689);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(320,0.6357616);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(321,0.2897351);
   S12S18_ThetaY_mI15_mI10__1170->SetBinContent(322,0.03311258);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(311,0.005491101);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(312,0.01880433);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(313,0.03519916);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(314,0.03966605);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(315,0.04068942);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(316,0.03935386);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(317,0.0397351);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(318,0.03742601);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(319,0.03638619);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(320,0.03244357);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(321,0.02190191);
   S12S18_ThetaY_mI15_mI10__1170->SetBinError(322,0.007404199);
   S12S18_ThetaY_mI15_mI10__1170->SetMinimum(0);
   S12S18_ThetaY_mI15_mI10__1170->SetMaximum(1.1);
   S12S18_ThetaY_mI15_mI10__1170->SetEntries(4484);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__1170->SetLineColor(ci);
   S12S18_ThetaY_mI15_mI10__1170->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI15_mI10__1170->SetMarkerColor(ci);
   S12S18_ThetaY_mI15_mI10__1170->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI15_mI10__1170->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI15_mI10__1170->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1170->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__1170->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1170->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI15_mI10__1170->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI15_mI10__1170->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1170->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1170->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI15_mI10__1170->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI15_mI10__1170->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI15_mI10__1170->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1171 = new TH1D("ThetaY_mI15_mI10__1171","",630,-1575,1575);
   ThetaY_mI15_mI10__1171->SetBinContent(308,0.0008032303);
   ThetaY_mI15_mI10__1171->SetBinContent(309,0.1364623);
   ThetaY_mI15_mI10__1171->SetBinContent(310,0.4888199);
   ThetaY_mI15_mI10__1171->SetBinContent(311,0.7124001);
   ThetaY_mI15_mI10__1171->SetBinContent(312,0.8471909);
   ThetaY_mI15_mI10__1171->SetBinContent(313,0.9280132);
   ThetaY_mI15_mI10__1171->SetBinContent(314,0.9774878);
   ThetaY_mI15_mI10__1171->SetBinContent(315,1);
   ThetaY_mI15_mI10__1171->SetBinContent(316,0.9929012);
   ThetaY_mI15_mI10__1171->SetBinContent(317,0.968826);
   ThetaY_mI15_mI10__1171->SetBinContent(318,0.9356113);
   ThetaY_mI15_mI10__1171->SetBinContent(319,0.8478638);
   ThetaY_mI15_mI10__1171->SetBinContent(320,0.7130731);
   ThetaY_mI15_mI10__1171->SetBinContent(321,0.4927275);
   ThetaY_mI15_mI10__1171->SetBinContent(322,0.1367011);
   ThetaY_mI15_mI10__1171->SetBinContent(323,0.0009117749);
   ThetaY_mI15_mI10__1171->SetBinError(308,0.0001320502);
   ThetaY_mI15_mI10__1171->SetBinError(309,0.001721177);
   ThetaY_mI15_mI10__1171->SetBinError(310,0.003257569);
   ThetaY_mI15_mI10__1171->SetBinError(311,0.003932613);
   ThetaY_mI15_mI10__1171->SetBinError(312,0.004288543);
   ThetaY_mI15_mI10__1171->SetBinError(313,0.004488449);
   ThetaY_mI15_mI10__1171->SetBinError(314,0.00460654);
   ThetaY_mI15_mI10__1171->SetBinError(315,0.004659284);
   ThetaY_mI15_mI10__1171->SetBinError(316,0.004642717);
   ThetaY_mI15_mI10__1171->SetBinError(317,0.004586085);
   ThetaY_mI15_mI10__1171->SetBinError(318,0.004506786);
   ThetaY_mI15_mI10__1171->SetBinError(319,0.004290246);
   ThetaY_mI15_mI10__1171->SetBinError(320,0.00393447);
   ThetaY_mI15_mI10__1171->SetBinError(321,0.003270563);
   ThetaY_mI15_mI10__1171->SetBinError(322,0.001722682);
   ThetaY_mI15_mI10__1171->SetBinError(323,0.0001406899);
   ThetaY_mI15_mI10__1171->SetEntries(468922);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1171->SetLineColor(ci);
   ThetaY_mI15_mI10__1171->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1171->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1171->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1171->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1171->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1171->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1171->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1171->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1171->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1171->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1171->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1171->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1171->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1171->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1171->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1171->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1171->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1171->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1171->Draw("AEsame");
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
   
   Double_t _fx3391[16] = {
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
   Double_t _fy3391[16] = {
   0,
   0,
   0,
   0.02556417,
   0.2520992,
   0.8063941,
   0.9722178,
   1,
   0.9421184,
   0.9843278,
   0.9042499,
   0.9431572,
   0.8915798,
   0.588023,
   0.2422261,
   0};
   Double_t _felx3391[16] = {
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
   Double_t _fely3391[16] = {
   0,
   0,
   0,
   0.007590426,
   0.02220363,
   0.03811506,
   0.04082509,
   0.04094356,
   0.03986706,
   0.04126506,
   0.0402245,
   0.04316421,
   0.04574282,
   0.04457779,
   0.05378823,
   0};
   Double_t _fehx3391[16] = {
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
   Double_t _fehy3391[16] = {
   3.890732,
   0.02233947,
   0.006235781,
   0.01026647,
   0.02425158,
   0.03996157,
   0.04257744,
   0.04265619,
   0.04159179,
   0.04303331,
   0.04205589,
   0.04518751,
   0.04815359,
   0.04809459,
   0.06731181,
   3.417334};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3391,_fy3391,_felx3391,_fehx3391,_fely3391,_fehy3391);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3391 = new TH1F("Graph_Graph3391","",100,-100,100);
   Graph_Graph3391->SetMinimum(0);
   Graph_Graph3391->SetMaximum(1.5);
   Graph_Graph3391->SetDirectory(0);
   Graph_Graph3391->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3391->SetLineColor(ci);
   Graph_Graph3391->GetXaxis()->SetRange(1,100);
   Graph_Graph3391->GetXaxis()->CenterTitle(true);
   Graph_Graph3391->GetXaxis()->SetLabelFont(42);
   Graph_Graph3391->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3391->GetXaxis()->SetTitleFont(42);
   Graph_Graph3391->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3391->GetYaxis()->CenterTitle(true);
   Graph_Graph3391->GetYaxis()->SetLabelFont(42);
   Graph_Graph3391->GetYaxis()->SetTitleFont(42);
   Graph_Graph3391->GetZaxis()->SetLabelFont(42);
   Graph_Graph3391->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3391->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3391);
   
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1172 = new TH2D("ThetaY_vs_Y_mI15_mI10__1172","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8018,37);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8044,6286);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8070,22517);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8096,32816);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8122,39025);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8148,42748);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8174,45027);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8200,46064);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8226,45737);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8252,44628);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8278,43098);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8304,39056);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8330,32847);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8356,22697);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8382,6297);
   ThetaY_vs_Y_mI15_mI10__1172->SetBinContent(8408,42);
   ThetaY_vs_Y_mI15_mI10__1172->SetEntries(468922);
   ThetaY_vs_Y_mI15_mI10__1172->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(1,2303.2);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(2,4606.4);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(3,6909.6);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(4,9212.8);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(5,11516);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(6,13819.2);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(7,16122.4);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(8,18425.6);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(9,20728.8);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(10,23032);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(11,25335.2);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(12,27638.4);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(13,29941.6);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(14,32244.8);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(15,34548);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(16,36851.2);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(17,39154.4);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(18,41457.6);
   ThetaY_vs_Y_mI15_mI10__1172->SetContourLevel(19,43760.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1172->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1172->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1172->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1172->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1172->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1172->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1172->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1172->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1172->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1172->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1172->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1172->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1172->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1172->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1172->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1172->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-15_-10","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_-15_-10","Reco vertices","lpf");
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
