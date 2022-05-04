void S12S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:46 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.0648957,125,1.233018);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__660 = new TH1D("S12S18_ThetaY_mI10_mI5__660","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(308,0.01005025);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(309,0.09547739);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(310,0.4522613);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(311,0.8509213);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(312,0.9095477);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(313,0.9329983);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(314,0.9246231);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(315,1);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(316,0.9731993);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(317,0.9715243);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(318,0.9011725);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(319,0.9363484);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(320,0.8190955);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(321,0.8944724);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(322,0.7688442);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(323,0.4623116);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(324,0.1490787);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(325,0.02512563);
   S12S18_ThetaY_mI10_mI5__660->SetBinContent(326,0.003350084);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(308,0.004102998);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(309,0.01264629);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(310,0.02752375);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(311,0.03775353);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(312,0.03903243);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(313,0.03953241);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(314,0.03935457);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(315,0.04092728);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(316,0.04037511);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(317,0.04034035);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(318,0.03885231);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(319,0.03960332);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(320,0.03704078);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(321,0.0387076);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(322,0.03588658);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(323,0.02782789);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(324,0.01580231);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(325,0.006487409);
   S12S18_ThetaY_mI10_mI5__660->SetBinError(326,0.002368867);
   S12S18_ThetaY_mI10_mI5__660->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__660->SetMaximum(1.103227);
   S12S18_ThetaY_mI10_mI5__660->SetEntries(7212);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__660->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__660->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__660->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__660->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__660->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__660->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__660->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__660->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__660->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__660->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__660->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__660->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__660->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__660->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__660->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__660->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__661 = new TH1D("ThetaY_mI10_mI5__661","",630,-1575,1575);
   ThetaY_mI10_mI5__661->SetBinContent(303,0.0004000267);
   ThetaY_mI10_mI5__661->SetBinContent(304,0.05271463);
   ThetaY_mI10_mI5__661->SetBinContent(305,0.2401049);
   ThetaY_mI10_mI5__661->SetBinContent(306,0.5073449);
   ThetaY_mI10_mI5__661->SetBinContent(307,0.6893348);
   ThetaY_mI10_mI5__661->SetBinContent(308,0.8148321);
   ThetaY_mI10_mI5__661->SetBinContent(309,0.889526);
   ThetaY_mI10_mI5__661->SetBinContent(310,0.9457742);
   ThetaY_mI10_mI5__661->SetBinContent(311,0.9836878);
   ThetaY_mI10_mI5__661->SetBinContent(312,0.9894437);
   ThetaY_mI10_mI5__661->SetBinContent(313,1.001578);
   ThetaY_mI10_mI5__661->SetBinContent(314,0.9971554);
   ThetaY_mI10_mI5__661->SetBinContent(315,1);
   ThetaY_mI10_mI5__661->SetBinContent(316,0.997022);
   ThetaY_mI10_mI5__661->SetBinContent(317,1.002934);
   ThetaY_mI10_mI5__661->SetBinContent(318,1.0022);
   ThetaY_mI10_mI5__661->SetBinContent(319,0.9973332);
   ThetaY_mI10_mI5__661->SetBinContent(320,0.978443);
   ThetaY_mI10_mI5__661->SetBinContent(321,0.958175);
   ThetaY_mI10_mI5__661->SetBinContent(322,0.8941041);
   ThetaY_mI10_mI5__661->SetBinContent(323,0.8147654);
   ThetaY_mI10_mI5__661->SetBinContent(324,0.6952241);
   ThetaY_mI10_mI5__661->SetBinContent(325,0.5151899);
   ThetaY_mI10_mI5__661->SetBinContent(326,0.2414161);
   ThetaY_mI10_mI5__661->SetBinContent(327,0.05209236);
   ThetaY_mI10_mI5__661->SetBinContent(328,0.0004000267);
   ThetaY_mI10_mI5__661->SetBinError(303,9.428719e-05);
   ThetaY_mI10_mI5__661->SetBinError(304,0.001082365);
   ThetaY_mI10_mI5__661->SetBinError(305,0.002309983);
   ThetaY_mI10_mI5__661->SetBinError(306,0.003357839);
   ThetaY_mI10_mI5__661->SetBinError(307,0.003914023);
   ThetaY_mI10_mI5__661->SetBinError(308,0.004255419);
   ThetaY_mI10_mI5__661->SetBinError(309,0.004446185);
   ThetaY_mI10_mI5__661->SetBinError(310,0.004584605);
   ThetaY_mI10_mI5__661->SetBinError(311,0.004675595);
   ThetaY_mI10_mI5__661->SetBinError(312,0.004689254);
   ThetaY_mI10_mI5__661->SetBinError(313,0.00471792);
   ThetaY_mI10_mI5__661->SetBinError(314,0.004707492);
   ThetaY_mI10_mI5__661->SetBinError(315,0.004714202);
   ThetaY_mI10_mI5__661->SetBinError(316,0.004707178);
   ThetaY_mI10_mI5__661->SetBinError(317,0.004721112);
   ThetaY_mI10_mI5__661->SetBinError(318,0.004719385);
   ThetaY_mI10_mI5__661->SetBinError(319,0.004707912);
   ThetaY_mI10_mI5__661->SetBinError(320,0.004663114);
   ThetaY_mI10_mI5__661->SetBinError(321,0.004614564);
   ThetaY_mI10_mI5__661->SetBinError(322,0.004457612);
   ThetaY_mI10_mI5__661->SetBinError(323,0.004255244);
   ThetaY_mI10_mI5__661->SetBinError(324,0.003930707);
   ThetaY_mI10_mI5__661->SetBinError(325,0.0033837);
   ThetaY_mI10_mI5__661->SetBinError(326,0.002316281);
   ThetaY_mI10_mI5__661->SetBinError(327,0.001075958);
   ThetaY_mI10_mI5__661->SetBinError(328,9.428719e-05);
   ThetaY_mI10_mI5__661->SetEntries(821699);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__661->SetLineColor(ci);
   ThetaY_mI10_mI5__661->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__661->SetMarkerColor(ci);
   ThetaY_mI10_mI5__661->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__661->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__661->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__661->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__661->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__661->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__661->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__661->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__661->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__661->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__661->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__661->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__661->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__661->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__661->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__661->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__661->Draw("AEsame");
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
   
   Double_t _fx3221[26] = {
   -62.5,
   -57.5,
   -52.5,
   -47.5,
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
   42.5,
   47.5,
   52.5,
   57.5,
   62.5};
   Double_t _fy3221[26] = {
   0,
   0,
   0,
   0,
   0,
   0.01233414,
   0.1073351,
   0.4781916,
   0.8650318,
   0.9192516,
   0.9315285,
   0.9272608,
   1,
   0.9761062,
   0.9686826,
   0.8991942,
   0.9388522,
   0.8371417,
   0.9335167,
   0.8599046,
   0.5674168,
   0.2144326,
   0.04876964,
   0.0138768,
   0,
   0};
   Double_t _felx3221[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3221[26] = {
   0,
   0,
   0,
   0,
   0,
   0.004892743,
   0.01418497,
   0.02917558,
   0.03858607,
   0.03967605,
   0.03970095,
   0.03969642,
   0.04118591,
   0.04074492,
   0.0404679,
   0.03898504,
   0.03994339,
   0.03805308,
   0.04063344,
   0.04035004,
   0.03426158,
   0.02271893,
   0.01245428,
   0.008963647,
   0,
   0};
   Double_t _fehx3221[26] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3221[26] = {
   8.11698,
   0.05852238,
   0.0128446,
   0.006078533,
   0.004473704,
   0.007367817,
   0.0161964,
   0.0310131,
   0.0403478,
   0.04142756,
   0.04143105,
   0.04143427,
   0.04291911,
   0.04248322,
   0.04219582,
   0.04071395,
   0.04168097,
   0.03982434,
   0.04244279,
   0.0422904,
   0.03639655,
   0.02526444,
   0.01612933,
   0.01830644,
   0.05922173,
   8.11698};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3221,_fy3221,_felx3221,_fehx3221,_fely3221,_fehy3221);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3221 = new TH1F("Graph_Graph3221","",100,-100,100);
   Graph_Graph3221->SetMinimum(0);
   Graph_Graph3221->SetMaximum(1.5);
   Graph_Graph3221->SetDirectory(0);
   Graph_Graph3221->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3221->SetLineColor(ci);
   Graph_Graph3221->GetXaxis()->SetRange(1,100);
   Graph_Graph3221->GetXaxis()->CenterTitle(true);
   Graph_Graph3221->GetXaxis()->SetLabelFont(42);
   Graph_Graph3221->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3221->GetXaxis()->SetTitleFont(42);
   Graph_Graph3221->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3221->GetYaxis()->CenterTitle(true);
   Graph_Graph3221->GetYaxis()->SetLabelFont(42);
   Graph_Graph3221->GetYaxis()->SetTitleFont(42);
   Graph_Graph3221->GetZaxis()->SetLabelFont(42);
   Graph_Graph3221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3221->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3221);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.103227,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__662 = new TH2D("ThetaY_vs_Y_mI10_mI5__662","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(7889,18);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(7915,2372);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(7941,10804);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(7967,22829);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(7993,31018);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8019,36665);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8045,40026);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8071,42557);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8097,44263);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8123,44522);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8149,45068);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8175,44869);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8201,44997);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8227,44863);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8253,45129);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8279,45096);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8305,44877);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8331,44027);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8357,43115);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8383,40232);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8409,36662);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8435,31283);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8461,23182);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8487,10863);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8513,2344);
   ThetaY_vs_Y_mI10_mI5__662->SetBinContent(8539,18);
   ThetaY_vs_Y_mI10_mI5__662->SetEntries(821699);
   ThetaY_vs_Y_mI10_mI5__662->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(1,2256.45);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(2,4512.9);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(3,6769.35);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(4,9025.8);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(5,11282.25);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(6,13538.7);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(7,15795.15);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(8,18051.6);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(9,20308.05);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(10,22564.5);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(11,24820.95);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(12,27077.4);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(13,29333.85);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(14,31590.3);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(15,33846.75);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(16,36103.2);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(17,38359.65);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(18,40616.1);
   ThetaY_vs_Y_mI10_mI5__662->SetContourLevel(19,42872.55);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__662->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__662->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__662->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__662->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__662->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__662->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__662->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__662->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__662->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__662->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__662->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__662->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__662->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__662->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__662->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__662->Draw("COL");
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
