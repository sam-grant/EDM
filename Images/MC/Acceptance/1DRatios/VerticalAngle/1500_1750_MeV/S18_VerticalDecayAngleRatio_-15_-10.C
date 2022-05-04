void S18_VerticalDecayAngleRatio_-15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:56 2022) by ROOT version 6.24/06
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
   
   TH1D *S18_ThetaY_mI15_mI10__1113 = new TH1D("S18_ThetaY_mI15_mI10__1113","",630,-1575,1575);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(311,0.02194357);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(312,0.1912226);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(313,0.677116);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(314,0.9090909);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(315,1);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(316,0.9216301);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(317,0.9216301);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(318,0.7805643);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(319,0.7210031);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(320,0.6050157);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(321,0.2539185);
   S18_ThetaY_mI15_mI10__1113->SetBinContent(322,0.02194357);
   S18_ThetaY_mI15_mI10__1113->SetBinError(311,0.008293891);
   S18_ThetaY_mI15_mI10__1113->SetBinError(312,0.02448354);
   S18_ThetaY_mI15_mI10__1113->SetBinError(313,0.04607191);
   S18_ThetaY_mI15_mI10__1113->SetBinError(314,0.05338366);
   S18_ThetaY_mI15_mI10__1113->SetBinError(315,0.05598925);
   S18_ThetaY_mI15_mI10__1113->SetBinError(316,0.05375056);
   S18_ThetaY_mI15_mI10__1113->SetBinError(317,0.05375056);
   S18_ThetaY_mI15_mI10__1113->SetBinError(318,0.04946625);
   S18_ThetaY_mI15_mI10__1113->SetBinError(319,0.04754154);
   S18_ThetaY_mI15_mI10__1113->SetBinError(320,0.04354998);
   S18_ThetaY_mI15_mI10__1113->SetBinError(321,0.02821317);
   S18_ThetaY_mI15_mI10__1113->SetBinError(322,0.008293891);
   S18_ThetaY_mI15_mI10__1113->SetMinimum(0);
   S18_ThetaY_mI15_mI10__1113->SetMaximum(1.1);
   S18_ThetaY_mI15_mI10__1113->SetEntries(2241);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1113->SetLineColor(ci);
   S18_ThetaY_mI15_mI10__1113->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI15_mI10__1113->SetMarkerColor(ci);
   S18_ThetaY_mI15_mI10__1113->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI15_mI10__1113->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI15_mI10__1113->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1113->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1113->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1113->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI15_mI10__1113->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI15_mI10__1113->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1113->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1113->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI15_mI10__1113->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI15_mI10__1113->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI15_mI10__1113->Draw("AE");
   
   TH1D *ThetaY_mI15_mI10__1114 = new TH1D("ThetaY_mI15_mI10__1114","",630,-1575,1575);
   ThetaY_mI15_mI10__1114->SetBinContent(308,0.0008032303);
   ThetaY_mI15_mI10__1114->SetBinContent(309,0.1364623);
   ThetaY_mI15_mI10__1114->SetBinContent(310,0.4888199);
   ThetaY_mI15_mI10__1114->SetBinContent(311,0.7124001);
   ThetaY_mI15_mI10__1114->SetBinContent(312,0.8471909);
   ThetaY_mI15_mI10__1114->SetBinContent(313,0.9280132);
   ThetaY_mI15_mI10__1114->SetBinContent(314,0.9774878);
   ThetaY_mI15_mI10__1114->SetBinContent(315,1);
   ThetaY_mI15_mI10__1114->SetBinContent(316,0.9929012);
   ThetaY_mI15_mI10__1114->SetBinContent(317,0.968826);
   ThetaY_mI15_mI10__1114->SetBinContent(318,0.9356113);
   ThetaY_mI15_mI10__1114->SetBinContent(319,0.8478638);
   ThetaY_mI15_mI10__1114->SetBinContent(320,0.7130731);
   ThetaY_mI15_mI10__1114->SetBinContent(321,0.4927275);
   ThetaY_mI15_mI10__1114->SetBinContent(322,0.1367011);
   ThetaY_mI15_mI10__1114->SetBinContent(323,0.0009117749);
   ThetaY_mI15_mI10__1114->SetBinError(308,0.0001320502);
   ThetaY_mI15_mI10__1114->SetBinError(309,0.001721177);
   ThetaY_mI15_mI10__1114->SetBinError(310,0.003257569);
   ThetaY_mI15_mI10__1114->SetBinError(311,0.003932613);
   ThetaY_mI15_mI10__1114->SetBinError(312,0.004288543);
   ThetaY_mI15_mI10__1114->SetBinError(313,0.004488449);
   ThetaY_mI15_mI10__1114->SetBinError(314,0.00460654);
   ThetaY_mI15_mI10__1114->SetBinError(315,0.004659284);
   ThetaY_mI15_mI10__1114->SetBinError(316,0.004642717);
   ThetaY_mI15_mI10__1114->SetBinError(317,0.004586085);
   ThetaY_mI15_mI10__1114->SetBinError(318,0.004506786);
   ThetaY_mI15_mI10__1114->SetBinError(319,0.004290246);
   ThetaY_mI15_mI10__1114->SetBinError(320,0.00393447);
   ThetaY_mI15_mI10__1114->SetBinError(321,0.003270563);
   ThetaY_mI15_mI10__1114->SetBinError(322,0.001722682);
   ThetaY_mI15_mI10__1114->SetBinError(323,0.0001406899);
   ThetaY_mI15_mI10__1114->SetEntries(468922);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1114->SetLineColor(ci);
   ThetaY_mI15_mI10__1114->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI15_mI10__1114->SetMarkerColor(ci);
   ThetaY_mI15_mI10__1114->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI15_mI10__1114->GetXaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1114->GetXaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1114->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1114->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1114->GetXaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1114->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI15_mI10__1114->GetYaxis()->CenterTitle(true);
   ThetaY_mI15_mI10__1114->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI15_mI10__1114->GetYaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1114->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI15_mI10__1114->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI15_mI10__1114->GetYaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1114->GetZaxis()->SetLabelFont(42);
   ThetaY_mI15_mI10__1114->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI15_mI10__1114->GetZaxis()->SetTitleFont(42);
   ThetaY_mI15_mI10__1114->Draw("AEsame");
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
   
   Double_t _fx3372[16] = {
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
   Double_t _fy3372[16] = {
   0,
   0,
   0,
   0.03080232,
   0.2257137,
   0.7296405,
   0.9300278,
   1,
   0.9282194,
   0.9512855,
   0.8342826,
   0.8503761,
   0.8484623,
   0.5153325,
   0.1605223,
   0};
   Double_t _felx3372[16] = {
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
   Double_t _fely3372[16] = {
   0,
   0,
   0,
   0.01136038,
   0.02884239,
   0.04973192,
   0.05475653,
   0.05615276,
   0.05427711,
   0.05563029,
   0.05298683,
   0.05619542,
   0.06119884,
   0.05724138,
   0.05922645,
   0};
   Double_t _fehx3372[16] = {
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
   Double_t _fehy3372[16] = {
   7.366778,
   0.04229793,
   0.01180693,
   0.0165932,
   0.03278722,
   0.05324415,
   0.05808065,
   0.05939932,
   0.05754894,
   0.05898399,
   0.05646525,
   0.06003915,
   0.06578269,
   0.06398508,
   0.08653309,
   6.470439};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3372,_fy3372,_felx3372,_fehx3372,_fely3372,_fehy3372);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3372 = new TH1F("Graph_Graph3372","",100,-100,100);
   Graph_Graph3372->SetMinimum(0);
   Graph_Graph3372->SetMaximum(1.5);
   Graph_Graph3372->SetDirectory(0);
   Graph_Graph3372->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3372->SetLineColor(ci);
   Graph_Graph3372->GetXaxis()->SetRange(1,100);
   Graph_Graph3372->GetXaxis()->CenterTitle(true);
   Graph_Graph3372->GetXaxis()->SetLabelFont(42);
   Graph_Graph3372->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3372->GetXaxis()->SetTitleFont(42);
   Graph_Graph3372->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3372->GetYaxis()->CenterTitle(true);
   Graph_Graph3372->GetYaxis()->SetLabelFont(42);
   Graph_Graph3372->GetYaxis()->SetTitleFont(42);
   Graph_Graph3372->GetZaxis()->SetLabelFont(42);
   Graph_Graph3372->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3372->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3372);
   
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
   
   TH2D *ThetaY_vs_Y_mI15_mI10__1115 = new TH2D("ThetaY_vs_Y_mI15_mI10__1115","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8018,37);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8044,6286);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8070,22517);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8096,32816);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8122,39025);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8148,42748);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8174,45027);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8200,46064);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8226,45737);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8252,44628);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8278,43098);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8304,39056);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8330,32847);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8356,22697);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8382,6297);
   ThetaY_vs_Y_mI15_mI10__1115->SetBinContent(8408,42);
   ThetaY_vs_Y_mI15_mI10__1115->SetEntries(468922);
   ThetaY_vs_Y_mI15_mI10__1115->SetContour(20);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(0,0);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(1,2303.2);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(2,4606.4);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(3,6909.6);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(4,9212.8);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(5,11516);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(6,13819.2);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(7,16122.4);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(8,18425.6);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(9,20728.8);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(10,23032);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(11,25335.2);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(12,27638.4);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(13,29941.6);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(14,32244.8);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(15,34548);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(16,36851.2);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(17,39154.4);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(18,41457.6);
   ThetaY_vs_Y_mI15_mI10__1115->SetContourLevel(19,43760.8);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI15_mI10__1115->SetLineColor(ci);
   ThetaY_vs_Y_mI15_mI10__1115->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI15_mI10__1115->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI15_mI10__1115->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1115->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1115->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1115->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1115->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI15_mI10__1115->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI15_mI10__1115->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI15_mI10__1115->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1115->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1115->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI15_mI10__1115->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI15_mI10__1115->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI15_mI10__1115->Draw("COL");
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
   entry=leg->AddEntry("S18_ThetaY_-15_-10","Reco vertices","lpf");
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
