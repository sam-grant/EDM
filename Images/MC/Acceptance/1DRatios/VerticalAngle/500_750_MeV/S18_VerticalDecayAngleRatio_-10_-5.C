void S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:41 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06506419,125,1.23622);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI10_mI5__432 = new TH1D("S18_ThetaY_mI10_mI5__432","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__432->SetBinContent(307,0.01612903);
   S18_ThetaY_mI10_mI5__432->SetBinContent(308,0.1048387);
   S18_ThetaY_mI10_mI5__432->SetBinContent(309,0.4596774);
   S18_ThetaY_mI10_mI5__432->SetBinContent(310,0.5806452);
   S18_ThetaY_mI10_mI5__432->SetBinContent(311,0.7983871);
   S18_ThetaY_mI10_mI5__432->SetBinContent(312,0.8790323);
   S18_ThetaY_mI10_mI5__432->SetBinContent(313,0.7822581);
   S18_ThetaY_mI10_mI5__432->SetBinContent(314,0.8225806);
   S18_ThetaY_mI10_mI5__432->SetBinContent(315,0.8064516);
   S18_ThetaY_mI10_mI5__432->SetBinContent(316,0.8145161);
   S18_ThetaY_mI10_mI5__432->SetBinContent(317,0.8790323);
   S18_ThetaY_mI10_mI5__432->SetBinContent(318,0.8225806);
   S18_ThetaY_mI10_mI5__432->SetBinContent(319,1);
   S18_ThetaY_mI10_mI5__432->SetBinContent(320,0.8306452);
   S18_ThetaY_mI10_mI5__432->SetBinContent(321,0.8145161);
   S18_ThetaY_mI10_mI5__432->SetBinContent(322,0.6612903);
   S18_ThetaY_mI10_mI5__432->SetBinContent(323,0.6290323);
   S18_ThetaY_mI10_mI5__432->SetBinContent(324,0.6370968);
   S18_ThetaY_mI10_mI5__432->SetBinContent(325,0.3709677);
   S18_ThetaY_mI10_mI5__432->SetBinContent(326,0.1129032);
   S18_ThetaY_mI10_mI5__432->SetBinContent(327,0.01612903);
   S18_ThetaY_mI10_mI5__432->SetBinError(307,0.01140495);
   S18_ThetaY_mI10_mI5__432->SetBinError(308,0.02907703);
   S18_ThetaY_mI10_mI5__432->SetBinError(309,0.06088576);
   S18_ThetaY_mI10_mI5__432->SetBinError(310,0.06842969);
   S18_ThetaY_mI10_mI5__432->SetBinError(311,0.08024092);
   S18_ThetaY_mI10_mI5__432->SetBinError(312,0.08419602);
   S18_ThetaY_mI10_mI5__432->SetBinError(313,0.07942627);
   S18_ThetaY_mI10_mI5__432->SetBinError(314,0.08144762);
   S18_ThetaY_mI10_mI5__432->SetBinError(315,0.08064516);
   S18_ThetaY_mI10_mI5__432->SetBinError(316,0.08104738);
   S18_ThetaY_mI10_mI5__432->SetBinError(317,0.08419602);
   S18_ThetaY_mI10_mI5__432->SetBinError(318,0.08144762);
   S18_ThetaY_mI10_mI5__432->SetBinError(319,0.08980265);
   S18_ThetaY_mI10_mI5__432->SetBinError(320,0.0818459);
   S18_ThetaY_mI10_mI5__432->SetBinError(321,0.08104738);
   S18_ThetaY_mI10_mI5__432->SetBinError(322,0.0730273);
   S18_ThetaY_mI10_mI5__432->SetBinError(323,0.07122388);
   S18_ThetaY_mI10_mI5__432->SetBinError(324,0.07167899);
   S18_ThetaY_mI10_mI5__432->SetBinError(325,0.05469621);
   S18_ThetaY_mI10_mI5__432->SetBinError(326,0.03017466);
   S18_ThetaY_mI10_mI5__432->SetBinError(327,0.01140495);
   S18_ThetaY_mI10_mI5__432->SetMinimum(0);
   S18_ThetaY_mI10_mI5__432->SetMaximum(1.106091);
   S18_ThetaY_mI10_mI5__432->SetEntries(1592);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__432->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__432->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__432->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__432->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__432->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__432->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__432->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__432->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__432->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__432->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__432->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__432->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__432->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__432->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__432->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__432->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__433 = new TH1D("ThetaY_mI10_mI5__433","",630,-1575,1575);
   ThetaY_mI10_mI5__433->SetBinContent(300,0.005431471);
   ThetaY_mI10_mI5__433->SetBinContent(301,0.06478022);
   ThetaY_mI10_mI5__433->SetBinContent(302,0.1911348);
   ThetaY_mI10_mI5__433->SetBinContent(303,0.395517);
   ThetaY_mI10_mI5__433->SetBinContent(304,0.6018599);
   ThetaY_mI10_mI5__433->SetBinContent(305,0.7458337);
   ThetaY_mI10_mI5__433->SetBinContent(306,0.8474949);
   ThetaY_mI10_mI5__433->SetBinContent(307,0.9180775);
   ThetaY_mI10_mI5__433->SetBinContent(308,0.9659275);
   ThetaY_mI10_mI5__433->SetBinContent(309,0.9953634);
   ThetaY_mI10_mI5__433->SetBinContent(310,1.003974);
   ThetaY_mI10_mI5__433->SetBinContent(311,1.000821);
   ThetaY_mI10_mI5__433->SetBinContent(312,1.003974);
   ThetaY_mI10_mI5__433->SetBinContent(313,0.9910712);
   ThetaY_mI10_mI5__433->SetBinContent(314,0.9962377);
   ThetaY_mI10_mI5__433->SetBinContent(315,0.9834141);
   ThetaY_mI10_mI5__433->SetBinContent(316,0.9959463);
   ThetaY_mI10_mI5__433->SetBinContent(317,0.989561);
   ThetaY_mI10_mI5__433->SetBinContent(318,0.9996821);
   ThetaY_mI10_mI5__433->SetBinContent(319,1);
   ThetaY_mI10_mI5__433->SetBinContent(320,1.002173);
   ThetaY_mI10_mI5__433->SetBinContent(321,1.005537);
   ThetaY_mI10_mI5__433->SetBinContent(322,0.9948335);
   ThetaY_mI10_mI5__433->SetBinContent(323,0.9640463);
   ThetaY_mI10_mI5__433->SetBinContent(324,0.9216543);
   ThetaY_mI10_mI5__433->SetBinContent(325,0.8534563);
   ThetaY_mI10_mI5__433->SetBinContent(326,0.7461251);
   ThetaY_mI10_mI5__433->SetBinContent(327,0.6010916);
   ThetaY_mI10_mI5__433->SetBinContent(328,0.3902445);
   ThetaY_mI10_mI5__433->SetBinContent(329,0.1893066);
   ThetaY_mI10_mI5__433->SetBinContent(330,0.06364094);
   ThetaY_mI10_mI5__433->SetBinContent(331,0.006305805);
   ThetaY_mI10_mI5__433->SetBinError(300,0.0003793504);
   ThetaY_mI10_mI5__433->SetBinError(301,0.001310096);
   ThetaY_mI10_mI5__433->SetBinError(302,0.002250358);
   ThetaY_mI10_mI5__433->SetBinError(303,0.003237162);
   ThetaY_mI10_mI5__433->SetBinError(304,0.003993278);
   ThetaY_mI10_mI5__433->SetBinError(305,0.004445317);
   ThetaY_mI10_mI5__433->SetBinError(306,0.004738603);
   ThetaY_mI10_mI5__433->SetBinError(307,0.004931982);
   ThetaY_mI10_mI5__433->SetBinError(308,0.005058876);
   ThetaY_mI10_mI5__433->SetBinError(309,0.00513538);
   ThetaY_mI10_mI5__433->SetBinError(310,0.005157546);
   ThetaY_mI10_mI5__433->SetBinError(311,0.005149441);
   ThetaY_mI10_mI5__433->SetBinError(312,0.005157546);
   ThetaY_mI10_mI5__433->SetBinError(313,0.005124296);
   ThetaY_mI10_mI5__433->SetBinError(314,0.005137635);
   ThetaY_mI10_mI5__433->SetBinError(315,0.005104462);
   ThetaY_mI10_mI5__433->SetBinError(316,0.005136884);
   ThetaY_mI10_mI5__433->SetBinError(317,0.00512039);
   ThetaY_mI10_mI5__433->SetBinError(318,0.005146509);
   ThetaY_mI10_mI5__433->SetBinError(319,0.005147327);
   ThetaY_mI10_mI5__433->SetBinError(320,0.005152916);
   ThetaY_mI10_mI5__433->SetBinError(321,0.005161559);
   ThetaY_mI10_mI5__433->SetBinError(322,0.005134013);
   ThetaY_mI10_mI5__433->SetBinError(323,0.005053948);
   ThetaY_mI10_mI5__433->SetBinError(324,0.00494158);
   ThetaY_mI10_mI5__433->SetBinError(325,0.00475524);
   ThetaY_mI10_mI5__433->SetBinError(326,0.004446186);
   ThetaY_mI10_mI5__433->SetBinError(327,0.003990728);
   ThetaY_mI10_mI5__433->SetBinError(328,0.003215513);
   ThetaY_mI10_mI5__433->SetBinError(329,0.00223957);
   ThetaY_mI10_mI5__433->SetBinError(330,0.001298524);
   ThetaY_mI10_mI5__433->SetBinError(331,0.0004087446);
   ThetaY_mI10_mI5__433->SetEntries(884489);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__433->SetLineColor(ci);
   ThetaY_mI10_mI5__433->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__433->SetMarkerColor(ci);
   ThetaY_mI10_mI5__433->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__433->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__433->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__433->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__433->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__433->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__433->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__433->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__433->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__433->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__433->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__433->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__433->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__433->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__433->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__433->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__433->Draw("AEsame");
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
   
   Double_t _fx3145[32] = {
   -77.5,
   -72.5,
   -67.5,
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
   62.5,
   67.5,
   72.5,
   77.5};
   Double_t _fy3145[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01756827,
   0.1085368,
   0.4618187,
   0.5783467,
   0.7977319,
   0.8755526,
   0.7893056,
   0.8256871,
   0.8200529,
   0.8178314,
   0.8883053,
   0.8228423,
   1,
   0.8288444,
   0.8100306,
   0.6647246,
   0.6524917,
   0.6912535,
   0.4346652,
   0.1513194,
   0.0268329,
   0,
   0,
   0,
   0};
   Double_t _felx3145[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3145[32] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01134768,
   0.02971615,
   0.06103486,
   0.06806386,
   0.08014325,
   0.08385319,
   0.08010611,
   0.08173058,
   0.08197711,
   0.08135037,
   0.0850763,
   0.0814486,
   0.08982748,
   0.0816456,
   0.08057341,
   0.07333558,
   0.07379943,
   0.07769414,
   0.06389866,
   0.03996302,
   0.01733205,
   0,
   0,
   0,
   0};
   Double_t _fehx3145[32] = {
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
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3145[32] = {
   2.745815,
   0.2292758,
   0.07768781,
   0.03754039,
   0.02466944,
   0.01990717,
   0.01751913,
   0.02317286,
   0.0392295,
   0.06969013,
   0.07658944,
   0.08863192,
   0.0922984,
   0.08868228,
   0.09025307,
   0.09061466,
   0.08987713,
   0.09364492,
   0.08994165,
   0.09828564,
   0.09011576,
   0.08901858,
   0.08191186,
   0.08266103,
   0.08696149,
   0.07406347,
   0.05222677,
   0.03539433,
   0.03804762,
   0.07843815,
   0.2333818,
   2.363619};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3145,_fy3145,_felx3145,_fehx3145,_fely3145,_fehy3145);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3145 = new TH1F("Graph_Graph3145","",100,-100,100);
   Graph_Graph3145->SetMinimum(0);
   Graph_Graph3145->SetMaximum(1.5);
   Graph_Graph3145->SetDirectory(0);
   Graph_Graph3145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3145->SetLineColor(ci);
   Graph_Graph3145->GetXaxis()->SetRange(1,100);
   Graph_Graph3145->GetXaxis()->CenterTitle(true);
   Graph_Graph3145->GetXaxis()->SetLabelFont(42);
   Graph_Graph3145->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3145->GetXaxis()->SetTitleFont(42);
   Graph_Graph3145->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3145->GetYaxis()->CenterTitle(true);
   Graph_Graph3145->GetYaxis()->SetLabelFont(42);
   Graph_Graph3145->GetYaxis()->SetTitleFont(42);
   Graph_Graph3145->GetZaxis()->SetLabelFont(42);
   Graph_Graph3145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3145->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3145);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.106091,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__434 = new TH2D("ThetaY_vs_Y_mI10_mI5__434","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7811,205);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7837,2445);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7863,7214);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7889,14928);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7915,22716);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7941,28150);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7967,31987);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(7993,34651);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8019,36457);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8045,37568);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8071,37893);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8097,37774);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8123,37893);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8149,37406);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8175,37601);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8201,37117);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8227,37590);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8253,37349);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8279,37731);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8305,37743);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8331,37825);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8357,37952);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8383,37548);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8409,36386);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8435,34786);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8461,32212);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8487,28161);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8513,22687);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8539,14729);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8565,7145);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8591,2402);
   ThetaY_vs_Y_mI10_mI5__434->SetBinContent(8617,238);
   ThetaY_vs_Y_mI10_mI5__434->SetEntries(884489);
   ThetaY_vs_Y_mI10_mI5__434->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(1,1897.6);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(2,3795.2);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(3,5692.8);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(4,7590.4);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(5,9488);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(6,11385.6);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(7,13283.2);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(8,15180.8);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(9,17078.4);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(10,18976);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(11,20873.6);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(12,22771.2);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(13,24668.8);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(14,26566.4);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(15,28464);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(16,30361.6);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(17,32259.2);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(18,34156.8);
   ThetaY_vs_Y_mI10_mI5__434->SetContourLevel(19,36054.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__434->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__434->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__434->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__434->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__434->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__434->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__434->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__434->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__434->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__434->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__434->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__434->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__434->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__434->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__434->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__434->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-10_-5","Reco vertices","lpf");
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
