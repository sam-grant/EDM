void S18_VerticalDecayAngleRatio_30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:42 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.3523401,125,6.694461);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_30_35__456 = new TH1D("S18_ThetaY_30_35__456","",630,-1575,1575);
   S18_ThetaY_30_35__456->SetBinContent(302,1);
   S18_ThetaY_30_35__456->SetBinContent(303,1.75);
   S18_ThetaY_30_35__456->SetBinContent(304,3);
   S18_ThetaY_30_35__456->SetBinContent(305,1.5);
   S18_ThetaY_30_35__456->SetBinContent(306,3);
   S18_ThetaY_30_35__456->SetBinContent(307,3.75);
   S18_ThetaY_30_35__456->SetBinContent(308,3.75);
   S18_ThetaY_30_35__456->SetBinContent(309,2.75);
   S18_ThetaY_30_35__456->SetBinContent(310,3.75);
   S18_ThetaY_30_35__456->SetBinContent(311,3.75);
   S18_ThetaY_30_35__456->SetBinContent(312,4.25);
   S18_ThetaY_30_35__456->SetBinContent(313,2.75);
   S18_ThetaY_30_35__456->SetBinContent(314,3);
   S18_ThetaY_30_35__456->SetBinContent(315,3.5);
   S18_ThetaY_30_35__456->SetBinContent(316,4.75);
   S18_ThetaY_30_35__456->SetBinContent(317,2.75);
   S18_ThetaY_30_35__456->SetBinError(302,0.5);
   S18_ThetaY_30_35__456->SetBinError(303,0.6614378);
   S18_ThetaY_30_35__456->SetBinError(304,0.8660254);
   S18_ThetaY_30_35__456->SetBinError(305,0.6123724);
   S18_ThetaY_30_35__456->SetBinError(306,0.8660254);
   S18_ThetaY_30_35__456->SetBinError(307,0.9682458);
   S18_ThetaY_30_35__456->SetBinError(308,0.9682458);
   S18_ThetaY_30_35__456->SetBinError(309,0.8291562);
   S18_ThetaY_30_35__456->SetBinError(310,0.9682458);
   S18_ThetaY_30_35__456->SetBinError(311,0.9682458);
   S18_ThetaY_30_35__456->SetBinError(312,1.030776);
   S18_ThetaY_30_35__456->SetBinError(313,0.8291562);
   S18_ThetaY_30_35__456->SetBinError(314,0.8660254);
   S18_ThetaY_30_35__456->SetBinError(315,0.9354143);
   S18_ThetaY_30_35__456->SetBinError(316,1.089725);
   S18_ThetaY_30_35__456->SetBinError(317,0.8291562);
   S18_ThetaY_30_35__456->SetMinimum(0);
   S18_ThetaY_30_35__456->SetMaximum(5.989781);
   S18_ThetaY_30_35__456->SetEntries(196);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__456->SetLineColor(ci);
   S18_ThetaY_30_35__456->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_30_35__456->SetMarkerColor(ci);
   S18_ThetaY_30_35__456->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_30_35__456->GetXaxis()->SetRange(296,335);
   S18_ThetaY_30_35__456->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__456->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__456->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__456->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_30_35__456->GetYaxis()->CenterTitle(true);
   S18_ThetaY_30_35__456->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__456->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__456->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_30_35__456->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_30_35__456->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_30_35__456->Draw("AE");
   
   TH1D *ThetaY_30_35__457 = new TH1D("ThetaY_30_35__457","",630,-1575,1575);
   ThetaY_30_35__457->SetBinContent(300,0.02919708);
   ThetaY_30_35__457->SetBinContent(301,0.3284672);
   ThetaY_30_35__457->SetBinContent(302,1);
   ThetaY_30_35__457->SetBinContent(303,1.974453);
   ThetaY_30_35__457->SetBinContent(304,3.199818);
   ThetaY_30_35__457->SetBinContent(305,3.992701);
   ThetaY_30_35__457->SetBinContent(306,4.385949);
   ThetaY_30_35__457->SetBinContent(307,4.792883);
   ThetaY_30_35__457->SetBinContent(308,5.15146);
   ThetaY_30_35__457->SetBinContent(309,5.208942);
   ThetaY_30_35__457->SetBinContent(310,5.445255);
   ThetaY_30_35__457->SetBinContent(311,5.226277);
   ThetaY_30_35__457->SetBinContent(312,5.235401);
   ThetaY_30_35__457->SetBinContent(313,5.162409);
   ThetaY_30_35__457->SetBinContent(314,5.275547);
   ThetaY_30_35__457->SetBinContent(315,5.260036);
   ThetaY_30_35__457->SetBinContent(316,5.12135);
   ThetaY_30_35__457->SetBinContent(317,5.260949);
   ThetaY_30_35__457->SetBinContent(318,5.306569);
   ThetaY_30_35__457->SetBinContent(319,5.37135);
   ThetaY_30_35__457->SetBinContent(320,5.415146);
   ThetaY_30_35__457->SetBinContent(321,5.362226);
   ThetaY_30_35__457->SetBinContent(322,5.119526);
   ThetaY_30_35__457->SetBinContent(323,5.17062);
   ThetaY_30_35__457->SetBinContent(324,4.80292);
   ThetaY_30_35__457->SetBinContent(325,4.458029);
   ThetaY_30_35__457->SetBinContent(326,3.851277);
   ThetaY_30_35__457->SetBinContent(327,3.12865);
   ThetaY_30_35__457->SetBinContent(328,2.04927);
   ThetaY_30_35__457->SetBinContent(329,0.9698905);
   ThetaY_30_35__457->SetBinContent(330,0.334854);
   ThetaY_30_35__457->SetBinContent(331,0.02281022);
   ThetaY_30_35__457->SetBinError(300,0.005161363);
   ThetaY_30_35__457->SetBinError(301,0.01731174);
   ThetaY_30_35__457->SetBinError(302,0.0302061);
   ThetaY_30_35__457->SetBinError(303,0.04244417);
   ThetaY_30_35__457->SetBinError(304,0.05403278);
   ThetaY_30_35__457->SetBinError(305,0.06035706);
   ThetaY_30_35__457->SetBinError(306,0.06325961);
   ThetaY_30_35__457->SetBinError(307,0.06612918);
   ThetaY_30_35__457->SetBinError(308,0.06855828);
   ThetaY_30_35__457->SetBinError(309,0.06893971);
   ThetaY_30_35__457->SetBinError(310,0.07048616);
   ThetaY_30_35__457->SetBinError(311,0.06905434);
   ThetaY_30_35__457->SetBinError(312,0.06911459);
   ThetaY_30_35__457->SetBinError(313,0.06863109);
   ThetaY_30_35__457->SetBinError(314,0.06937907);
   ThetaY_30_35__457->SetBinError(315,0.069277);
   ThetaY_30_35__457->SetBinError(316,0.06835763);
   ThetaY_30_35__457->SetBinError(317,0.06928301);
   ThetaY_30_35__457->SetBinError(318,0.06958276);
   ThetaY_30_35__457->SetBinError(319,0.07000619);
   ThetaY_30_35__457->SetBinError(320,0.07029101);
   ThetaY_30_35__457->SetBinError(321,0.06994671);
   ThetaY_30_35__457->SetBinError(322,0.06834545);
   ThetaY_30_35__457->SetBinError(323,0.06868566);
   ThetaY_30_35__457->SetBinError(324,0.06619838);
   ThetaY_30_35__457->SetBinError(325,0.06377731);
   ThetaY_30_35__457->SetBinError(326,0.05927849);
   ThetaY_30_35__457->SetBinError(327,0.05342853);
   ThetaY_30_35__457->SetBinError(328,0.04324086);
   ThetaY_30_35__457->SetBinError(329,0.02974788);
   ThetaY_30_35__457->SetBinError(330,0.01747924);
   ThetaY_30_35__457->SetBinError(331,0.004562044);
   ThetaY_30_35__457->SetEntries(135262);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__457->SetLineColor(ci);
   ThetaY_30_35__457->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_30_35__457->SetMarkerColor(ci);
   ThetaY_30_35__457->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_30_35__457->GetXaxis()->CenterTitle(true);
   ThetaY_30_35__457->GetXaxis()->SetLabelFont(42);
   ThetaY_30_35__457->GetXaxis()->SetTitleSize(0.04);
   ThetaY_30_35__457->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__457->GetXaxis()->SetTitleFont(42);
   ThetaY_30_35__457->GetYaxis()->SetTitle("Tracks");
   ThetaY_30_35__457->GetYaxis()->CenterTitle(true);
   ThetaY_30_35__457->GetYaxis()->SetNdivisions(4000510);
   ThetaY_30_35__457->GetYaxis()->SetLabelFont(42);
   ThetaY_30_35__457->GetYaxis()->SetTitleSize(0.04);
   ThetaY_30_35__457->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_30_35__457->GetYaxis()->SetTitleFont(42);
   ThetaY_30_35__457->GetZaxis()->SetLabelFont(42);
   ThetaY_30_35__457->GetZaxis()->SetTitleOffset(1);
   ThetaY_30_35__457->GetZaxis()->SetTitleFont(42);
   ThetaY_30_35__457->Draw("AEsame");
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
   
   Double_t _fx3153[32] = {
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
   Double_t _fy3153[32] = {
   0,
   0,
   1,
   0.8863216,
   0.9375535,
   0.3756856,
   0.6840025,
   0.7824101,
   0.727949,
   0.5279383,
   0.6886729,
   0.7175279,
   0.8117811,
   0.5326971,
   0.5686614,
   0.6653946,
   0.9274898,
   0.5227194,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3153[32] = {
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
   Double_t _fely3153[32] = {
   0,
   0,
   0.4792769,
   0.3273214,
   0.2672546,
   0.1491051,
   0.1948954,
   0.2000106,
   0.1860712,
   0.1568681,
   0.17602,
   0.1834042,
   0.1952047,
   0.1582833,
   0.1619994,
   0.1758873,
   0.2112319,
   0.155316,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3153[32] = {
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
   Double_t _fehy3153[32] = {
   16.22603,
   1.404811,
   0.7932726,
   0.4785709,
   0.357097,
   0.2246328,
   0.2603582,
   0.2591423,
   0.2410725,
   0.2122544,
   0.2280438,
   0.2376154,
   0.2489677,
   0.2141702,
   0.2163921,
   0.2299541,
   0.2658977,
   0.2101533,
   0.08674687,
   0.0857005,
   0.08500727,
   0.08584634,
   0.08991672,
   0.08902804,
   0.09584501,
   0.1032614,
   0.1195333,
   0.1471494,
   0.2246869,
   0.4749549,
   1.377949,
   20.93912};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3153,_fy3153,_felx3153,_fehx3153,_fely3153,_fehy3153);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3153 = new TH1F("Graph_Graph3153","",100,-100,100);
   Graph_Graph3153->SetMinimum(0);
   Graph_Graph3153->SetMaximum(1.5);
   Graph_Graph3153->SetDirectory(0);
   Graph_Graph3153->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3153->SetLineColor(ci);
   Graph_Graph3153->GetXaxis()->SetRange(1,100);
   Graph_Graph3153->GetXaxis()->CenterTitle(true);
   Graph_Graph3153->GetXaxis()->SetLabelFont(42);
   Graph_Graph3153->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3153->GetXaxis()->SetTitleFont(42);
   Graph_Graph3153->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3153->GetYaxis()->CenterTitle(true);
   Graph_Graph3153->GetYaxis()->SetLabelFont(42);
   Graph_Graph3153->GetYaxis()->SetTitleFont(42);
   Graph_Graph3153->GetZaxis()->SetLabelFont(42);
   Graph_Graph3153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3153->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3153);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.989781,510,"S");
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
   
   TH2D *ThetaY_vs_Y_30_35__458 = new TH2D("ThetaY_vs_Y_30_35__458","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_30_35__458->SetBinContent(7819,32);
   ThetaY_vs_Y_30_35__458->SetBinContent(7845,360);
   ThetaY_vs_Y_30_35__458->SetBinContent(7871,1096);
   ThetaY_vs_Y_30_35__458->SetBinContent(7897,2164);
   ThetaY_vs_Y_30_35__458->SetBinContent(7923,3507);
   ThetaY_vs_Y_30_35__458->SetBinContent(7949,4376);
   ThetaY_vs_Y_30_35__458->SetBinContent(7975,4807);
   ThetaY_vs_Y_30_35__458->SetBinContent(8001,5253);
   ThetaY_vs_Y_30_35__458->SetBinContent(8027,5646);
   ThetaY_vs_Y_30_35__458->SetBinContent(8053,5709);
   ThetaY_vs_Y_30_35__458->SetBinContent(8079,5968);
   ThetaY_vs_Y_30_35__458->SetBinContent(8105,5728);
   ThetaY_vs_Y_30_35__458->SetBinContent(8131,5738);
   ThetaY_vs_Y_30_35__458->SetBinContent(8157,5658);
   ThetaY_vs_Y_30_35__458->SetBinContent(8183,5782);
   ThetaY_vs_Y_30_35__458->SetBinContent(8209,5765);
   ThetaY_vs_Y_30_35__458->SetBinContent(8235,5613);
   ThetaY_vs_Y_30_35__458->SetBinContent(8261,5766);
   ThetaY_vs_Y_30_35__458->SetBinContent(8287,5816);
   ThetaY_vs_Y_30_35__458->SetBinContent(8313,5887);
   ThetaY_vs_Y_30_35__458->SetBinContent(8339,5935);
   ThetaY_vs_Y_30_35__458->SetBinContent(8365,5877);
   ThetaY_vs_Y_30_35__458->SetBinContent(8391,5611);
   ThetaY_vs_Y_30_35__458->SetBinContent(8417,5667);
   ThetaY_vs_Y_30_35__458->SetBinContent(8443,5264);
   ThetaY_vs_Y_30_35__458->SetBinContent(8469,4886);
   ThetaY_vs_Y_30_35__458->SetBinContent(8495,4221);
   ThetaY_vs_Y_30_35__458->SetBinContent(8521,3429);
   ThetaY_vs_Y_30_35__458->SetBinContent(8547,2246);
   ThetaY_vs_Y_30_35__458->SetBinContent(8573,1063);
   ThetaY_vs_Y_30_35__458->SetBinContent(8599,367);
   ThetaY_vs_Y_30_35__458->SetBinContent(8625,25);
   ThetaY_vs_Y_30_35__458->SetEntries(135262);
   ThetaY_vs_Y_30_35__458->SetContour(20);
   ThetaY_vs_Y_30_35__458->SetContourLevel(0,0);
   ThetaY_vs_Y_30_35__458->SetContourLevel(1,298.4);
   ThetaY_vs_Y_30_35__458->SetContourLevel(2,596.8);
   ThetaY_vs_Y_30_35__458->SetContourLevel(3,895.2);
   ThetaY_vs_Y_30_35__458->SetContourLevel(4,1193.6);
   ThetaY_vs_Y_30_35__458->SetContourLevel(5,1492);
   ThetaY_vs_Y_30_35__458->SetContourLevel(6,1790.4);
   ThetaY_vs_Y_30_35__458->SetContourLevel(7,2088.8);
   ThetaY_vs_Y_30_35__458->SetContourLevel(8,2387.2);
   ThetaY_vs_Y_30_35__458->SetContourLevel(9,2685.6);
   ThetaY_vs_Y_30_35__458->SetContourLevel(10,2984);
   ThetaY_vs_Y_30_35__458->SetContourLevel(11,3282.4);
   ThetaY_vs_Y_30_35__458->SetContourLevel(12,3580.8);
   ThetaY_vs_Y_30_35__458->SetContourLevel(13,3879.2);
   ThetaY_vs_Y_30_35__458->SetContourLevel(14,4177.6);
   ThetaY_vs_Y_30_35__458->SetContourLevel(15,4476);
   ThetaY_vs_Y_30_35__458->SetContourLevel(16,4774.4);
   ThetaY_vs_Y_30_35__458->SetContourLevel(17,5072.8);
   ThetaY_vs_Y_30_35__458->SetContourLevel(18,5371.2);
   ThetaY_vs_Y_30_35__458->SetContourLevel(19,5669.6);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_30_35__458->SetLineColor(ci);
   ThetaY_vs_Y_30_35__458->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_30_35__458->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_30_35__458->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__458->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__458->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__458->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__458->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_30_35__458->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_30_35__458->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_30_35__458->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__458->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__458->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_30_35__458->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_30_35__458->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_30_35__458->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_30_35","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_30_35","Reco vertices","lpf");
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
