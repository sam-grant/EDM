void S18_VerticalDecayAngleRatio_5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:57 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.06609861,125,1.255874);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_5_10__1125 = new TH1D("S18_ThetaY_5_10__1125","",630,-1575,1575);
   S18_ThetaY_5_10__1125->SetBinContent(309,0.008522727);
   S18_ThetaY_5_10__1125->SetBinContent(310,0.2102273);
   S18_ThetaY_5_10__1125->SetBinContent(311,0.5198864);
   S18_ThetaY_5_10__1125->SetBinContent(312,0.8068182);
   S18_ThetaY_5_10__1125->SetBinContent(313,0.8721591);
   S18_ThetaY_5_10__1125->SetBinContent(314,0.9630682);
   S18_ThetaY_5_10__1125->SetBinContent(315,0.9630682);
   S18_ThetaY_5_10__1125->SetBinContent(316,0.9289773);
   S18_ThetaY_5_10__1125->SetBinContent(317,1);
   S18_ThetaY_5_10__1125->SetBinContent(318,0.7670455);
   S18_ThetaY_5_10__1125->SetBinContent(319,0.4090909);
   S18_ThetaY_5_10__1125->SetBinContent(320,0.04545455);
   S18_ThetaY_5_10__1125->SetBinContent(321,0.002840909);
   S18_ThetaY_5_10__1125->SetBinError(309,0.004920599);
   S18_ThetaY_5_10__1125->SetBinError(310,0.02443842);
   S18_ThetaY_5_10__1125->SetBinError(311,0.03843111);
   S18_ThetaY_5_10__1125->SetBinError(312,0.04787585);
   S18_ThetaY_5_10__1125->SetBinError(313,0.04977675);
   S18_ThetaY_5_10__1125->SetBinError(314,0.05230668);
   S18_ThetaY_5_10__1125->SetBinError(315,0.05230668);
   S18_ThetaY_5_10__1125->SetBinError(316,0.05137256);
   S18_ThetaY_5_10__1125->SetBinError(317,0.05330018);
   S18_ThetaY_5_10__1125->SetBinError(318,0.0466809);
   S18_ThetaY_5_10__1125->SetBinError(319,0.03409091);
   S18_ThetaY_5_10__1125->SetBinError(320,0.01136364);
   S18_ThetaY_5_10__1125->SetBinError(321,0.002840909);
   S18_ThetaY_5_10__1125->SetMinimum(0);
   S18_ThetaY_5_10__1125->SetMaximum(1.123676);
   S18_ThetaY_5_10__1125->SetEntries(2639);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1125->SetLineColor(ci);
   S18_ThetaY_5_10__1125->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_5_10__1125->SetMarkerColor(ci);
   S18_ThetaY_5_10__1125->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_5_10__1125->GetXaxis()->SetRange(296,335);
   S18_ThetaY_5_10__1125->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1125->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1125->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1125->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_5_10__1125->GetYaxis()->CenterTitle(true);
   S18_ThetaY_5_10__1125->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1125->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1125->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_5_10__1125->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_5_10__1125->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_5_10__1125->Draw("AE");
   
   TH1D *ThetaY_5_10__1126 = new TH1D("ThetaY_5_10__1126","",630,-1575,1575);
   ThetaY_5_10__1126->SetBinContent(308,0.000761587);
   ThetaY_5_10__1126->SetBinContent(309,0.1376659);
   ThetaY_5_10__1126->SetBinContent(310,0.5006891);
   ThetaY_5_10__1126->SetBinContent(311,0.7235621);
   ThetaY_5_10__1126->SetBinContent(312,0.8655436);
   ThetaY_5_10__1126->SetBinContent(313,0.9388736);
   ThetaY_5_10__1126->SetBinContent(314,0.9918583);
   ThetaY_5_10__1126->SetBinContent(315,1.009048);
   ThetaY_5_10__1126->SetBinContent(316,1.021524);
   ThetaY_5_10__1126->SetBinContent(317,1);
   ThetaY_5_10__1126->SetBinContent(318,0.9449844);
   ThetaY_5_10__1126->SetBinContent(319,0.8606296);
   ThetaY_5_10__1126->SetBinContent(320,0.7303438);
   ThetaY_5_10__1126->SetBinContent(321,0.5027925);
   ThetaY_5_10__1126->SetBinContent(322,0.1345833);
   ThetaY_5_10__1126->SetBinContent(323,0.000797853);
   ThetaY_5_10__1126->SetBinError(308,0.0001175154);
   ThetaY_5_10__1126->SetBinError(309,0.001579968);
   ThetaY_5_10__1126->SetBinError(310,0.003013139);
   ThetaY_5_10__1126->SetBinError(311,0.003622205);
   ThetaY_5_10__1126->SetBinError(312,0.003961682);
   ThetaY_5_10__1126->SetBinError(313,0.00412609);
   ThetaY_5_10__1126->SetBinError(314,0.004240918);
   ThetaY_5_10__1126->SetBinError(315,0.004277511);
   ThetaY_5_10__1126->SetBinError(316,0.004303872);
   ThetaY_5_10__1126->SetBinError(317,0.004258289);
   ThetaY_5_10__1126->SetBinError(318,0.004139496);
   ThetaY_5_10__1126->SetBinError(319,0.00395042);
   ThetaY_5_10__1126->SetBinError(320,0.00363914);
   ThetaY_5_10__1126->SetBinError(321,0.003019462);
   ThetaY_5_10__1126->SetBinError(322,0.001562179);
   ThetaY_5_10__1126->SetBinError(323,0.0001202809);
   ThetaY_5_10__1126->SetEntries(571535);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1126->SetLineColor(ci);
   ThetaY_5_10__1126->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_5_10__1126->SetMarkerColor(ci);
   ThetaY_5_10__1126->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_5_10__1126->GetXaxis()->CenterTitle(true);
   ThetaY_5_10__1126->GetXaxis()->SetLabelFont(42);
   ThetaY_5_10__1126->GetXaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1126->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1126->GetXaxis()->SetTitleFont(42);
   ThetaY_5_10__1126->GetYaxis()->SetTitle("Tracks");
   ThetaY_5_10__1126->GetYaxis()->CenterTitle(true);
   ThetaY_5_10__1126->GetYaxis()->SetNdivisions(4000510);
   ThetaY_5_10__1126->GetYaxis()->SetLabelFont(42);
   ThetaY_5_10__1126->GetYaxis()->SetTitleSize(0.04);
   ThetaY_5_10__1126->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_5_10__1126->GetYaxis()->SetTitleFont(42);
   ThetaY_5_10__1126->GetZaxis()->SetLabelFont(42);
   ThetaY_5_10__1126->GetZaxis()->SetTitleOffset(1);
   ThetaY_5_10__1126->GetZaxis()->SetTitleFont(42);
   ThetaY_5_10__1126->Draw("AEsame");
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
   
   Double_t _fx3376[16] = {
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
   Double_t _fy3376[16] = {
   0,
   0.06190877,
   0.4198759,
   0.7185097,
   0.932152,
   0.928942,
   0.9709736,
   0.9544321,
   0.9094034,
   1,
   0.8117017,
   0.4753391,
   0.06223719,
   0.005650262,
   0,
   0};
   Double_t _felx3376[16] = {
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
   Double_t _fely3376[16] = {
   0,
   0.0336978,
   0.04876341,
   0.05318612,
   0.05544413,
   0.05314502,
   0.05287266,
   0.05196921,
   0.05040965,
   0.05344416,
   0.04949527,
   0.03962514,
   0.01539803,
   0.00467419,
   0,
   0};
   Double_t _fehx3376[16] = {
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
   Double_t _fehy3376[16] = {
   7.020206,
   0.0602439,
   0.05478641,
   0.05727818,
   0.05884549,
   0.05627713,
   0.05583426,
   0.05488002,
   0.05328545,
   0.05638074,
   0.05261047,
   0.04307543,
   0.01977741,
   0.0129937,
   0.03886681,
   6.694386};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3376,_fy3376,_felx3376,_fehx3376,_fely3376,_fehy3376);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3376 = new TH1F("Graph_Graph3376","",100,-100,100);
   Graph_Graph3376->SetMinimum(0);
   Graph_Graph3376->SetMaximum(1.5);
   Graph_Graph3376->SetDirectory(0);
   Graph_Graph3376->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3376->SetLineColor(ci);
   Graph_Graph3376->GetXaxis()->SetRange(1,100);
   Graph_Graph3376->GetXaxis()->CenterTitle(true);
   Graph_Graph3376->GetXaxis()->SetLabelFont(42);
   Graph_Graph3376->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3376->GetXaxis()->SetTitleFont(42);
   Graph_Graph3376->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3376->GetYaxis()->CenterTitle(true);
   Graph_Graph3376->GetYaxis()->SetLabelFont(42);
   Graph_Graph3376->GetYaxis()->SetTitleFont(42);
   Graph_Graph3376->GetZaxis()->SetLabelFont(42);
   Graph_Graph3376->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3376->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3376);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.123676,510,"S");
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
   
   TH2D *ThetaY_vs_Y_5_10__1127 = new TH2D("ThetaY_vs_Y_5_10__1127","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8022,42);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8048,7592);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8074,27612);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8100,39903);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8126,47733);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8152,51777);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8178,54699);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8204,55647);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8230,56335);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8256,55148);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8282,52114);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8308,47462);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8334,40277);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8360,27728);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8386,7422);
   ThetaY_vs_Y_5_10__1127->SetBinContent(8412,44);
   ThetaY_vs_Y_5_10__1127->SetEntries(571535);
   ThetaY_vs_Y_5_10__1127->SetContour(20);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(0,0);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(1,2816.75);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(2,5633.5);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(3,8450.25);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(4,11267);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(5,14083.75);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(6,16900.5);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(7,19717.25);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(8,22534);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(9,25350.75);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(10,28167.5);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(11,30984.25);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(12,33801);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(13,36617.75);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(14,39434.5);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(15,42251.25);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(16,45068);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(17,47884.75);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(18,50701.5);
   ThetaY_vs_Y_5_10__1127->SetContourLevel(19,53518.25);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_5_10__1127->SetLineColor(ci);
   ThetaY_vs_Y_5_10__1127->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_5_10__1127->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_5_10__1127->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1127->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1127->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1127->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1127->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_5_10__1127->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_5_10__1127->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_5_10__1127->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1127->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1127->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_5_10__1127->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_5_10__1127->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_5_10__1127->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_5_10","Reco vertices","lpf");
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
