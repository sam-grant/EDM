void S18_VerticalDecayAngleRatio_-10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:49 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_mI10_mI5__774 = new TH1D("S18_ThetaY_mI10_mI5__774","",630,-1575,1575);
   S18_ThetaY_mI10_mI5__774->SetBinContent(309,0.002583979);
   S18_ThetaY_mI10_mI5__774->SetBinContent(310,0.1447028);
   S18_ThetaY_mI10_mI5__774->SetBinContent(311,0.5400517);
   S18_ThetaY_mI10_mI5__774->SetBinContent(312,0.9302326);
   S18_ThetaY_mI10_mI5__774->SetBinContent(313,0.881137);
   S18_ThetaY_mI10_mI5__774->SetBinContent(314,0.9276486);
   S18_ThetaY_mI10_mI5__774->SetBinContent(315,0.9121447);
   S18_ThetaY_mI10_mI5__774->SetBinContent(316,1);
   S18_ThetaY_mI10_mI5__774->SetBinContent(317,0.8630491);
   S18_ThetaY_mI10_mI5__774->SetBinContent(318,0.8552972);
   S18_ThetaY_mI10_mI5__774->SetBinContent(319,0.8346253);
   S18_ThetaY_mI10_mI5__774->SetBinContent(320,0.8449612);
   S18_ThetaY_mI10_mI5__774->SetBinContent(321,0.6744186);
   S18_ThetaY_mI10_mI5__774->SetBinContent(322,0.4056848);
   S18_ThetaY_mI10_mI5__774->SetBinContent(323,0.09560724);
   S18_ThetaY_mI10_mI5__774->SetBinContent(324,0.002583979);
   S18_ThetaY_mI10_mI5__774->SetBinError(309,0.002583979);
   S18_ThetaY_mI10_mI5__774->SetBinError(310,0.01933673);
   S18_ThetaY_mI10_mI5__774->SetBinError(311,0.03735616);
   S18_ThetaY_mI10_mI5__774->SetBinError(312,0.04902756);
   S18_ThetaY_mI10_mI5__774->SetBinError(313,0.04771624);
   S18_ThetaY_mI10_mI5__774->SetBinError(314,0.04895942);
   S18_ThetaY_mI10_mI5__774->SetBinError(315,0.04854856);
   S18_ThetaY_mI10_mI5__774->SetBinError(316,0.05083286);
   S18_ThetaY_mI10_mI5__774->SetBinError(317,0.04722395);
   S18_ThetaY_mI10_mI5__774->SetBinError(318,0.04701138);
   S18_ThetaY_mI10_mI5__774->SetBinError(319,0.0464398);
   S18_ThetaY_mI10_mI5__774->SetBinError(320,0.04672646);
   S18_ThetaY_mI10_mI5__774->SetBinError(321,0.04174546);
   S18_ThetaY_mI10_mI5__774->SetBinError(322,0.03237717);
   S18_ThetaY_mI10_mI5__774->SetBinError(323,0.01571773);
   S18_ThetaY_mI10_mI5__774->SetBinError(324,0.002583979);
   S18_ThetaY_mI10_mI5__774->SetMinimum(0);
   S18_ThetaY_mI10_mI5__774->SetMaximum(1.1);
   S18_ThetaY_mI10_mI5__774->SetEntries(3837);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__774->SetLineColor(ci);
   S18_ThetaY_mI10_mI5__774->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI10_mI5__774->SetMarkerColor(ci);
   S18_ThetaY_mI10_mI5__774->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI10_mI5__774->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI10_mI5__774->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__774->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__774->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__774->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI10_mI5__774->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI10_mI5__774->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__774->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__774->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI10_mI5__774->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI10_mI5__774->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI10_mI5__774->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__775 = new TH1D("ThetaY_mI10_mI5__775","",630,-1575,1575);
   ThetaY_mI10_mI5__775->SetBinContent(305,9.75724e-05);
   ThetaY_mI10_mI5__775->SetBinContent(306,0.04747873);
   ThetaY_mI10_mI5__775->SetBinContent(307,0.2977519);
   ThetaY_mI10_mI5__775->SetBinContent(308,0.5787019);
   ThetaY_mI10_mI5__775->SetBinContent(309,0.7340957);
   ThetaY_mI10_mI5__775->SetBinContent(310,0.8370931);
   ThetaY_mI10_mI5__775->SetBinContent(311,0.9106042);
   ThetaY_mI10_mI5__775->SetBinContent(312,0.9494965);
   ThetaY_mI10_mI5__775->SetBinContent(313,0.9658692);
   ThetaY_mI10_mI5__775->SetBinContent(314,0.97709);
   ThetaY_mI10_mI5__775->SetBinContent(315,0.9918625);
   ThetaY_mI10_mI5__775->SetBinContent(316,1);
   ThetaY_mI10_mI5__775->SetBinContent(317,0.9902232);
   ThetaY_mI10_mI5__775->SetBinContent(318,0.9760557);
   ThetaY_mI10_mI5__775->SetBinContent(319,0.952775);
   ThetaY_mI10_mI5__775->SetBinContent(320,0.9095699);
   ThetaY_mI10_mI5__775->SetBinContent(321,0.8367419);
   ThetaY_mI10_mI5__775->SetBinContent(322,0.7358325);
   ThetaY_mI10_mI5__775->SetBinContent(323,0.5663297);
   ThetaY_mI10_mI5__775->SetBinContent(324,0.2984349);
   ThetaY_mI10_mI5__775->SetBinContent(325,0.04950824);
   ThetaY_mI10_mI5__775->SetBinContent(326,3.902896e-05);
   ThetaY_mI10_mI5__775->SetBinError(305,4.36357e-05);
   ThetaY_mI10_mI5__775->SetBinError(306,0.0009625605);
   ThetaY_mI10_mI5__775->SetBinError(307,0.002410492);
   ThetaY_mI10_mI5__775->SetBinError(308,0.003360516);
   ThetaY_mI10_mI5__775->SetBinError(309,0.003784904);
   ThetaY_mI10_mI5__775->SetBinError(310,0.004041712);
   ThetaY_mI10_mI5__775->SetBinError(311,0.004215444);
   ThetaY_mI10_mI5__775->SetBinError(312,0.004304524);
   ThetaY_mI10_mI5__775->SetBinError(313,0.004341478);
   ThetaY_mI10_mI5__775->SetBinError(314,0.004366624);
   ThetaY_mI10_mI5__775->SetBinError(315,0.004399509);
   ThetaY_mI10_mI5__775->SetBinError(316,0.00441752);
   ThetaY_mI10_mI5__775->SetBinError(317,0.004395872);
   ThetaY_mI10_mI5__775->SetBinError(318,0.004364312);
   ThetaY_mI10_mI5__775->SetBinError(319,0.004311949);
   ThetaY_mI10_mI5__775->SetBinError(320,0.004213049);
   ThetaY_mI10_mI5__775->SetBinError(321,0.004040864);
   ThetaY_mI10_mI5__775->SetBinError(322,0.003789378);
   ThetaY_mI10_mI5__775->SetBinError(323,0.003324399);
   ThetaY_mI10_mI5__775->SetBinError(324,0.002413256);
   ThetaY_mI10_mI5__775->SetBinError(325,0.0009829178);
   ThetaY_mI10_mI5__775->SetBinError(326,2.759764e-05);
   ThetaY_mI10_mI5__775->SetEntries(748452);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__775->SetLineColor(ci);
   ThetaY_mI10_mI5__775->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__775->SetMarkerColor(ci);
   ThetaY_mI10_mI5__775->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__775->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__775->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__775->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__775->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__775->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__775->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__775->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__775->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__775->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__775->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__775->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__775->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__775->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__775->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__775->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__775->Draw("AEsame");
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
   
   Double_t _fx3259[22] = {
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
   52.5};
   Double_t _fy3259[22] = {
   0,
   0,
   0,
   0,
   0.003519949,
   0.1728635,
   0.5930696,
   0.9797114,
   0.9122736,
   0.9493993,
   0.9196282,
   1,
   0.8715702,
   0.876279,
   0.8759942,
   0.9289679,
   0.8060056,
   0.5513276,
   0.168819,
   0.008658434,
   0,
   0};
   Double_t _felx3259[22] = {
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
   Double_t _fely3259[22] = {
   0,
   0,
   0,
   0,
   0.002911879,
   0.02304544,
   0.04108193,
   0.05180142,
   0.04954749,
   0.0502628,
   0.04909283,
   0.05100193,
   0.0478225,
   0.04829889,
   0.04887679,
   0.05152505,
   0.05000949,
   0.04404469,
   0.02764481,
   0.007162746,
   0,
   0};
   Double_t _fehx3259[22] = {
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
   Double_t _fehy3259[22] = {
   58.94216,
   0.1002336,
   0.01597789,
   0.008220657,
   0.008094571,
   0.02634406,
   0.04403218,
   0.05461669,
   0.05231554,
   0.052998,
   0.05178725,
   0.05367296,
   0.05052234,
   0.05103836,
   0.05168414,
   0.05446649,
   0.05321424,
   0.04771345,
   0.03259112,
   0.01991245,
   0.09612317,
   200.0201};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3259,_fy3259,_felx3259,_fehx3259,_fely3259,_fehy3259);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3259 = new TH1F("Graph_Graph3259","",100,-100,100);
   Graph_Graph3259->SetMinimum(0);
   Graph_Graph3259->SetMaximum(1.5);
   Graph_Graph3259->SetDirectory(0);
   Graph_Graph3259->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3259->SetLineColor(ci);
   Graph_Graph3259->GetXaxis()->SetRange(1,100);
   Graph_Graph3259->GetXaxis()->CenterTitle(true);
   Graph_Graph3259->GetXaxis()->SetLabelFont(42);
   Graph_Graph3259->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3259->GetXaxis()->SetTitleFont(42);
   Graph_Graph3259->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3259->GetYaxis()->CenterTitle(true);
   Graph_Graph3259->GetYaxis()->SetLabelFont(42);
   Graph_Graph3259->GetYaxis()->SetTitleFont(42);
   Graph_Graph3259->GetZaxis()->SetLabelFont(42);
   Graph_Graph3259->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3259->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3259);
   
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__776 = new TH2D("ThetaY_vs_Y_mI10_mI5__776","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(7941,5);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(7967,2433);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(7993,15258);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8019,29655);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8045,37618);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8071,42896);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8097,46663);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8123,48656);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8149,49495);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8175,50070);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8201,50827);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8227,51244);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8253,50743);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8279,50017);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8305,48824);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8331,46610);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8357,42878);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8383,37707);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8409,29021);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8435,15293);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8461,2537);
   ThetaY_vs_Y_mI10_mI5__776->SetBinContent(8487,2);
   ThetaY_vs_Y_mI10_mI5__776->SetEntries(748452);
   ThetaY_vs_Y_mI10_mI5__776->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(1,2562.2);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(2,5124.4);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(3,7686.6);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(4,10248.8);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(5,12811);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(6,15373.2);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(7,17935.4);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(8,20497.6);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(9,23059.8);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(10,25622);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(11,28184.2);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(12,30746.4);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(13,33308.6);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(14,35870.8);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(15,38433);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(16,40995.2);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(17,43557.4);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(18,46119.6);
   ThetaY_vs_Y_mI10_mI5__776->SetContourLevel(19,48681.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__776->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__776->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__776->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__776->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__776->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__776->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__776->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__776->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__776->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__776->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__776->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__776->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__776->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__776->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__776->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__776->Draw("COL");
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
