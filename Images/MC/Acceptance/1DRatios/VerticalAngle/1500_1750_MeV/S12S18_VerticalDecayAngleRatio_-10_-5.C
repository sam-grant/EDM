void S12S18_VerticalDecayAngleRatio_-10_-5()
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
   upper_pad->Range(-125,-0.06579859,125,1.250173);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_mI10_mI5__1173 = new TH1D("S12S18_ThetaY_mI10_mI5__1173","",630,-1575,1575);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(310,0.00148368);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(311,0.0652819);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(312,0.5652819);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(313,0.8635015);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(314,1);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(315,1.013353);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(316,0.9465875);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(317,0.9272997);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(318,0.9510386);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(319,0.84273);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(320,0.5652819);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(321,0.1765579);
   S12S18_ThetaY_mI10_mI5__1173->SetBinContent(322,0.004451039);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(310,0.00148368);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(311,0.009841617);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(312,0.02896027);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(313,0.03579329);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(314,0.03851856);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(315,0.03877488);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(316,0.03747576);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(317,0.03709199);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(318,0.03756377);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(319,0.03536016);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(320,0.02896027);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(321,0.01618503);
   S12S18_ThetaY_mI10_mI5__1173->SetBinError(322,0.002569808);
   S12S18_ThetaY_mI10_mI5__1173->SetMinimum(0);
   S12S18_ThetaY_mI10_mI5__1173->SetMaximum(1.118576);
   S12S18_ThetaY_mI10_mI5__1173->SetEntries(5340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1173->SetLineColor(ci);
   S12S18_ThetaY_mI10_mI5__1173->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_mI10_mI5__1173->SetMarkerColor(ci);
   S12S18_ThetaY_mI10_mI5__1173->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_mI10_mI5__1173->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_mI10_mI5__1173->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1173->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1173->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1173->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_mI10_mI5__1173->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_mI10_mI5__1173->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1173->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1173->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_mI10_mI5__1173->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_mI10_mI5__1173->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_mI10_mI5__1173->Draw("AE");
   
   TH1D *ThetaY_mI10_mI5__1174 = new TH1D("ThetaY_mI10_mI5__1174","",630,-1575,1575);
   ThetaY_mI10_mI5__1174->SetBinContent(308,0.0007816476);
   ThetaY_mI10_mI5__1174->SetBinContent(309,0.1418418);
   ThetaY_mI10_mI5__1174->SetBinContent(310,0.5030902);
   ThetaY_mI10_mI5__1174->SetBinContent(311,0.7361121);
   ThetaY_mI10_mI5__1174->SetBinContent(312,0.8675743);
   ThetaY_mI10_mI5__1174->SetBinContent(313,0.9533193);
   ThetaY_mI10_mI5__1174->SetBinContent(314,1);
   ThetaY_mI10_mI5__1174->SetBinContent(315,1.016887);
   ThetaY_mI10_mI5__1174->SetBinContent(316,1.013961);
   ThetaY_mI10_mI5__1174->SetBinContent(317,0.9968189);
   ThetaY_mI10_mI5__1174->SetBinContent(318,0.9540464);
   ThetaY_mI10_mI5__1174->SetBinContent(319,0.8688286);
   ThetaY_mI10_mI5__1174->SetBinContent(320,0.7286956);
   ThetaY_mI10_mI5__1174->SetBinContent(321,0.5017996);
   ThetaY_mI10_mI5__1174->SetBinContent(322,0.1399149);
   ThetaY_mI10_mI5__1174->SetBinContent(323,0.001108849);
   ThetaY_mI10_mI5__1174->SetBinError(308,0.0001192001);
   ThetaY_mI10_mI5__1174->SetBinError(309,0.001605733);
   ThetaY_mI10_mI5__1174->SetBinError(310,0.003024087);
   ThetaY_mI10_mI5__1174->SetBinError(311,0.003657996);
   ThetaY_mI10_mI5__1174->SetBinError(312,0.003971226);
   ThetaY_mI10_mI5__1174->SetBinError(313,0.004162847);
   ThetaY_mI10_mI5__1174->SetBinError(314,0.004263549);
   ThetaY_mI10_mI5__1174->SetBinError(315,0.004299398);
   ThetaY_mI10_mI5__1174->SetBinError(316,0.004293207);
   ThetaY_mI10_mI5__1174->SetBinError(317,0.004256762);
   ThetaY_mI10_mI5__1174->SetBinError(318,0.004164434);
   ThetaY_mI10_mI5__1174->SetBinError(319,0.003974096);
   ThetaY_mI10_mI5__1174->SetBinError(320,0.003639522);
   ThetaY_mI10_mI5__1174->SetBinError(321,0.003020205);
   ThetaY_mI10_mI5__1174->SetBinError(322,0.001594789);
   ThetaY_mI10_mI5__1174->SetBinError(323,0.0001419736);
   ThetaY_mI10_mI5__1174->SetEntries(573488);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1174->SetLineColor(ci);
   ThetaY_mI10_mI5__1174->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI10_mI5__1174->SetMarkerColor(ci);
   ThetaY_mI10_mI5__1174->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI10_mI5__1174->GetXaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1174->GetXaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1174->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1174->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1174->GetXaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1174->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI10_mI5__1174->GetYaxis()->CenterTitle(true);
   ThetaY_mI10_mI5__1174->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI10_mI5__1174->GetYaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1174->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI10_mI5__1174->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI10_mI5__1174->GetYaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1174->GetZaxis()->SetLabelFont(42);
   ThetaY_mI10_mI5__1174->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI10_mI5__1174->GetZaxis()->SetTitleFont(42);
   ThetaY_mI10_mI5__1174->Draw("AEsame");
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
   
   Double_t _fx3392[16] = {
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
   Double_t _fy3392[16] = {
   0,
   0,
   0.002949132,
   0.08868472,
   0.6515659,
   0.9057841,
   1,
   0.9965246,
   0.9335546,
   0.930259,
   0.9968473,
   0.9699611,
   0.775745,
   0.3518493,
   0.03181246,
   0};
   Double_t _felx3392[16] = {
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
   Double_t _fely3392[16] = {
   0,
   0,
   0.002439675,
   0.01332579,
   0.03349867,
   0.03774253,
   0.03874386,
   0.03835331,
   0.03716049,
   0.03741147,
   0.03960212,
   0.04092732,
   0.03991304,
   0.03227739,
   0.01731593,
   0};
   Double_t _fehx3392[16] = {
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
   Double_t _fehy3392[16] = {
   3.570411,
   0.01925955,
   0.006782012,
   0.01549647,
   0.03526758,
   0.0393497,
   0.04027557,
   0.03985932,
   0.03867066,
   0.03894786,
   0.04120834,
   0.04269268,
   0.04202246,
   0.03538477,
   0.03095679,
   2.500902};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3392,_fy3392,_felx3392,_fehx3392,_fely3392,_fehy3392);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3392 = new TH1F("Graph_Graph3392","",100,-100,100);
   Graph_Graph3392->SetMinimum(0);
   Graph_Graph3392->SetMaximum(1.5);
   Graph_Graph3392->SetDirectory(0);
   Graph_Graph3392->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3392->SetLineColor(ci);
   Graph_Graph3392->GetXaxis()->SetRange(1,100);
   Graph_Graph3392->GetXaxis()->CenterTitle(true);
   Graph_Graph3392->GetXaxis()->SetLabelFont(42);
   Graph_Graph3392->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3392->GetXaxis()->SetTitleFont(42);
   Graph_Graph3392->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3392->GetYaxis()->CenterTitle(true);
   Graph_Graph3392->GetYaxis()->SetLabelFont(42);
   Graph_Graph3392->GetYaxis()->SetTitleFont(42);
   Graph_Graph3392->GetZaxis()->SetLabelFont(42);
   Graph_Graph3392->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3392->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3392);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.118576,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI10_mI5__1175 = new TH2D("ThetaY_vs_Y_mI10_mI5__1175","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8019,43);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8045,7803);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8071,27676);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8097,40495);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8123,47727);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8149,52444);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8175,55012);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8201,55941);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8227,55780);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8253,54837);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8279,52484);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8305,47796);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8331,40087);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8357,27605);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8383,7697);
   ThetaY_vs_Y_mI10_mI5__1175->SetBinContent(8409,61);
   ThetaY_vs_Y_mI10_mI5__1175->SetEntries(573488);
   ThetaY_vs_Y_mI10_mI5__1175->SetContour(20);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(0,0);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(1,2797.05);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(2,5594.1);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(3,8391.15);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(4,11188.2);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(5,13985.25);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(6,16782.3);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(7,19579.35);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(8,22376.4);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(9,25173.45);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(10,27970.5);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(11,30767.55);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(12,33564.6);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(13,36361.65);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(14,39158.7);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(15,41955.75);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(16,44752.8);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(17,47549.85);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(18,50346.9);
   ThetaY_vs_Y_mI10_mI5__1175->SetContourLevel(19,53143.95);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI10_mI5__1175->SetLineColor(ci);
   ThetaY_vs_Y_mI10_mI5__1175->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI10_mI5__1175->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI10_mI5__1175->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1175->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1175->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1175->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1175->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI10_mI5__1175->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI10_mI5__1175->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI10_mI5__1175->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1175->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1175->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI10_mI5__1175->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI10_mI5__1175->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI10_mI5__1175->Draw("COL");
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
