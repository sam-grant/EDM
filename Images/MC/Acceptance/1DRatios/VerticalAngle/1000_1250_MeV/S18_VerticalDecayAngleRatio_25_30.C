void S18_VerticalDecayAngleRatio_25_30()
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
   upper_pad->Range(-125,-0.06712322,125,1.275341);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_25_30__795 = new TH1D("S18_ThetaY_25_30__795","",630,-1575,1575);
   S18_ThetaY_25_30__795->SetBinContent(306,0.01834862);
   S18_ThetaY_25_30__795->SetBinContent(307,0.2293578);
   S18_ThetaY_25_30__795->SetBinContent(308,0.587156);
   S18_ThetaY_25_30__795->SetBinContent(309,0.5321101);
   S18_ThetaY_25_30__795->SetBinContent(310,0.5504587);
   S18_ThetaY_25_30__795->SetBinContent(311,0.733945);
   S18_ThetaY_25_30__795->SetBinContent(312,1);
   S18_ThetaY_25_30__795->SetBinContent(313,0.8256881);
   S18_ThetaY_25_30__795->SetBinContent(314,0.8073394);
   S18_ThetaY_25_30__795->SetBinContent(315,0.7247706);
   S18_ThetaY_25_30__795->SetBinContent(316,0.8073394);
   S18_ThetaY_25_30__795->SetBinContent(317,0.6513761);
   S18_ThetaY_25_30__795->SetBinContent(318,0.0733945);
   S18_ThetaY_25_30__795->SetBinError(306,0.01297444);
   S18_ThetaY_25_30__795->SetBinError(307,0.04587156);
   S18_ThetaY_25_30__795->SetBinError(308,0.0733945);
   S18_ThetaY_25_30__795->SetBinError(309,0.06986948);
   S18_ThetaY_25_30__795->SetBinError(310,0.07106391);
   S18_ThetaY_25_30__795->SetBinError(311,0.08205754);
   S18_ThetaY_25_30__795->SetBinError(312,0.09578263);
   S18_ThetaY_25_30__795->SetBinError(313,0.08703516);
   S18_ThetaY_25_30__795->SetBinError(314,0.08606267);
   S18_ThetaY_25_30__795->SetBinError(315,0.08154307);
   S18_ThetaY_25_30__795->SetBinError(316,0.08606267);
   S18_ThetaY_25_30__795->SetBinError(317,0.07730413);
   S18_ThetaY_25_30__795->SetBinError(318,0.02594887);
   S18_ThetaY_25_30__795->SetMinimum(0);
   S18_ThetaY_25_30__795->SetMaximum(1.141095);
   S18_ThetaY_25_30__795->SetEntries(822);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__795->SetLineColor(ci);
   S18_ThetaY_25_30__795->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_25_30__795->SetMarkerColor(ci);
   S18_ThetaY_25_30__795->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_25_30__795->GetXaxis()->SetRange(296,335);
   S18_ThetaY_25_30__795->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__795->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__795->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__795->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_25_30__795->GetYaxis()->CenterTitle(true);
   S18_ThetaY_25_30__795->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__795->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__795->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_25_30__795->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_25_30__795->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_25_30__795->Draw("AE");
   
   TH1D *ThetaY_25_30__796 = new TH1D("ThetaY_25_30__796","",630,-1575,1575);
   ThetaY_25_30__796->SetBinContent(305,0.0001579654);
   ThetaY_25_30__796->SetBinContent(306,0.05331332);
   ThetaY_25_30__796->SetBinContent(307,0.3065319);
   ThetaY_25_30__796->SetBinContent(308,0.602717);
   ThetaY_25_30__796->SetBinContent(309,0.7540479);
   ThetaY_25_30__796->SetBinContent(310,0.8877656);
   ThetaY_25_30__796->SetBinContent(311,0.9489772);
   ThetaY_25_30__796->SetBinContent(312,1);
   ThetaY_25_30__796->SetBinContent(313,1.015718);
   ThetaY_25_30__796->SetBinContent(314,1.023221);
   ThetaY_25_30__796->SetBinContent(315,1.024327);
   ThetaY_25_30__796->SetBinContent(316,1.024722);
   ThetaY_25_30__796->SetBinContent(317,1.037359);
   ThetaY_25_30__796->SetBinContent(318,1.026854);
   ThetaY_25_30__796->SetBinContent(319,1.005687);
   ThetaY_25_30__796->SetBinContent(320,0.9340494);
   ThetaY_25_30__796->SetBinContent(321,0.8885554);
   ThetaY_25_30__796->SetBinContent(322,0.7759261);
   ThetaY_25_30__796->SetBinContent(323,0.598215);
   ThetaY_25_30__796->SetBinContent(324,0.3159308);
   ThetaY_25_30__796->SetBinContent(325,0.05133876);
   ThetaY_25_30__796->SetBinContent(326,7.89827e-05);
   ThetaY_25_30__796->SetBinError(305,0.0001116984);
   ThetaY_25_30__796->SetBinError(306,0.002052031);
   ThetaY_25_30__796->SetBinError(307,0.004920439);
   ThetaY_25_30__796->SetBinError(308,0.006899581);
   ThetaY_25_30__796->SetBinError(309,0.007717301);
   ThetaY_25_30__796->SetBinError(310,0.008373657);
   ThetaY_25_30__796->SetBinError(311,0.008657527);
   ThetaY_25_30__796->SetBinError(312,0.008887221);
   ThetaY_25_30__796->SetBinError(313,0.008956792);
   ThetaY_25_30__796->SetBinError(314,0.008989814);
   ThetaY_25_30__796->SetBinError(315,0.00899467);
   ThetaY_25_30__796->SetBinError(316,0.008996404);
   ThetaY_25_30__796->SetBinError(317,0.009051707);
   ThetaY_25_30__796->SetBinError(318,0.00900576);
   ThetaY_25_30__796->SetBinError(319,0.008912455);
   ThetaY_25_30__796->SetBinError(320,0.008589165);
   ThetaY_25_30__796->SetBinError(321,0.008377381);
   ThetaY_25_30__796->SetBinError(322,0.007828457);
   ThetaY_25_30__796->SetBinError(323,0.006873764);
   ThetaY_25_30__796->SetBinError(324,0.004995305);
   ThetaY_25_30__796->SetBinError(325,0.002013672);
   ThetaY_25_30__796->SetBinError(326,7.89827e-05);
   ThetaY_25_30__796->SetEntries(193403);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__796->SetLineColor(ci);
   ThetaY_25_30__796->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_25_30__796->SetMarkerColor(ci);
   ThetaY_25_30__796->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_25_30__796->GetXaxis()->CenterTitle(true);
   ThetaY_25_30__796->GetXaxis()->SetLabelFont(42);
   ThetaY_25_30__796->GetXaxis()->SetTitleSize(0.04);
   ThetaY_25_30__796->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__796->GetXaxis()->SetTitleFont(42);
   ThetaY_25_30__796->GetYaxis()->SetTitle("Tracks");
   ThetaY_25_30__796->GetYaxis()->CenterTitle(true);
   ThetaY_25_30__796->GetYaxis()->SetNdivisions(4000510);
   ThetaY_25_30__796->GetYaxis()->SetLabelFont(42);
   ThetaY_25_30__796->GetYaxis()->SetTitleSize(0.04);
   ThetaY_25_30__796->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_25_30__796->GetYaxis()->SetTitleFont(42);
   ThetaY_25_30__796->GetZaxis()->SetLabelFont(42);
   ThetaY_25_30__796->GetZaxis()->SetTitleOffset(1);
   ThetaY_25_30__796->GetZaxis()->SetTitleFont(42);
   ThetaY_25_30__796->Draw("AEsame");
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
   
   Double_t _fx3266[22] = {
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
   Double_t _fy3266[22] = {
   0,
   0.3441658,
   0.7482348,
   0.9741818,
   0.7056715,
   0.6200496,
   0.7734063,
   1,
   0.8129111,
   0.7890177,
   0.7075581,
   0.7878622,
   0.6279179,
   0.07147509,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3266[22] = {
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
   Double_t _fely3266[22] = {
   0,
   0.2225057,
   0.1490994,
   0.1219543,
   0.09266685,
   0.08003369,
   0.08657167,
   0.09604262,
   0.08582442,
   0.08423097,
   0.07967628,
   0.08410721,
   0.07454217,
   0.0247406,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3266[22] = {
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
   Double_t _fehy3266[22] = {
   175.462,
   0.4554912,
   0.1822954,
   0.1382866,
   0.1057262,
   0.09110484,
   0.09685847,
   0.10575,
   0.09540925,
   0.09374881,
   0.0892035,
   0.093611,
   0.08397033,
   0.03526361,
   0.01679581,
   0.01808408,
   0.01901006,
   0.02176972,
   0.02823761,
   0.05347372,
   0.3294596,
   615.9721};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,_fx3266,_fy3266,_felx3266,_fehx3266,_fely3266,_fehy3266);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3266 = new TH1F("Graph_Graph3266","",100,-100,100);
   Graph_Graph3266->SetMinimum(0);
   Graph_Graph3266->SetMaximum(1.5);
   Graph_Graph3266->SetDirectory(0);
   Graph_Graph3266->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3266->SetLineColor(ci);
   Graph_Graph3266->GetXaxis()->SetRange(1,100);
   Graph_Graph3266->GetXaxis()->CenterTitle(true);
   Graph_Graph3266->GetXaxis()->SetLabelFont(42);
   Graph_Graph3266->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3266->GetXaxis()->SetTitleFont(42);
   Graph_Graph3266->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3266->GetYaxis()->CenterTitle(true);
   Graph_Graph3266->GetYaxis()->SetLabelFont(42);
   Graph_Graph3266->GetYaxis()->SetTitleFont(42);
   Graph_Graph3266->GetZaxis()->SetLabelFont(42);
   Graph_Graph3266->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3266->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3266);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.141095,510,"S");
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
   
   TH2D *ThetaY_vs_Y_25_30__797 = new TH2D("ThetaY_vs_Y_25_30__797","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_25_30__797->SetBinContent(7948,2);
   ThetaY_vs_Y_25_30__797->SetBinContent(7974,675);
   ThetaY_vs_Y_25_30__797->SetBinContent(8000,3881);
   ThetaY_vs_Y_25_30__797->SetBinContent(8026,7631);
   ThetaY_vs_Y_25_30__797->SetBinContent(8052,9547);
   ThetaY_vs_Y_25_30__797->SetBinContent(8078,11240);
   ThetaY_vs_Y_25_30__797->SetBinContent(8104,12015);
   ThetaY_vs_Y_25_30__797->SetBinContent(8130,12661);
   ThetaY_vs_Y_25_30__797->SetBinContent(8156,12860);
   ThetaY_vs_Y_25_30__797->SetBinContent(8182,12955);
   ThetaY_vs_Y_25_30__797->SetBinContent(8208,12969);
   ThetaY_vs_Y_25_30__797->SetBinContent(8234,12974);
   ThetaY_vs_Y_25_30__797->SetBinContent(8260,13134);
   ThetaY_vs_Y_25_30__797->SetBinContent(8286,13001);
   ThetaY_vs_Y_25_30__797->SetBinContent(8312,12733);
   ThetaY_vs_Y_25_30__797->SetBinContent(8338,11826);
   ThetaY_vs_Y_25_30__797->SetBinContent(8364,11250);
   ThetaY_vs_Y_25_30__797->SetBinContent(8390,9824);
   ThetaY_vs_Y_25_30__797->SetBinContent(8416,7574);
   ThetaY_vs_Y_25_30__797->SetBinContent(8442,4000);
   ThetaY_vs_Y_25_30__797->SetBinContent(8468,650);
   ThetaY_vs_Y_25_30__797->SetBinContent(8494,1);
   ThetaY_vs_Y_25_30__797->SetEntries(193403);
   ThetaY_vs_Y_25_30__797->SetContour(20);
   ThetaY_vs_Y_25_30__797->SetContourLevel(0,0);
   ThetaY_vs_Y_25_30__797->SetContourLevel(1,656.7);
   ThetaY_vs_Y_25_30__797->SetContourLevel(2,1313.4);
   ThetaY_vs_Y_25_30__797->SetContourLevel(3,1970.1);
   ThetaY_vs_Y_25_30__797->SetContourLevel(4,2626.8);
   ThetaY_vs_Y_25_30__797->SetContourLevel(5,3283.5);
   ThetaY_vs_Y_25_30__797->SetContourLevel(6,3940.2);
   ThetaY_vs_Y_25_30__797->SetContourLevel(7,4596.9);
   ThetaY_vs_Y_25_30__797->SetContourLevel(8,5253.6);
   ThetaY_vs_Y_25_30__797->SetContourLevel(9,5910.3);
   ThetaY_vs_Y_25_30__797->SetContourLevel(10,6567);
   ThetaY_vs_Y_25_30__797->SetContourLevel(11,7223.7);
   ThetaY_vs_Y_25_30__797->SetContourLevel(12,7880.4);
   ThetaY_vs_Y_25_30__797->SetContourLevel(13,8537.1);
   ThetaY_vs_Y_25_30__797->SetContourLevel(14,9193.8);
   ThetaY_vs_Y_25_30__797->SetContourLevel(15,9850.5);
   ThetaY_vs_Y_25_30__797->SetContourLevel(16,10507.2);
   ThetaY_vs_Y_25_30__797->SetContourLevel(17,11163.9);
   ThetaY_vs_Y_25_30__797->SetContourLevel(18,11820.6);
   ThetaY_vs_Y_25_30__797->SetContourLevel(19,12477.3);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_25_30__797->SetLineColor(ci);
   ThetaY_vs_Y_25_30__797->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_25_30__797->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_25_30__797->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__797->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__797->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__797->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__797->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_25_30__797->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_25_30__797->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_25_30__797->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__797->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__797->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_25_30__797->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_25_30__797->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_25_30__797->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_25_30","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_25_30","Reco vertices","lpf");
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
