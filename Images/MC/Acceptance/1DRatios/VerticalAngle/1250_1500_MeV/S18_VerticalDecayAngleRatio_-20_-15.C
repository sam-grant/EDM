void S18_VerticalDecayAngleRatio_-20_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:52 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.07775016,125,1.477253);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI20_mI15__939 = new TH1D("S18_ThetaY_mI20_mI15__939","",630,-1575,1575);
   S18_ThetaY_mI20_mI15__939->SetBinContent(310,0.005102041);
   S18_ThetaY_mI20_mI15__939->SetBinContent(311,0.005102041);
   S18_ThetaY_mI20_mI15__939->SetBinContent(312,0.1581633);
   S18_ThetaY_mI20_mI15__939->SetBinContent(313,0.7857143);
   S18_ThetaY_mI20_mI15__939->SetBinContent(314,1.137755);
   S18_ThetaY_mI20_mI15__939->SetBinContent(315,0.9693878);
   S18_ThetaY_mI20_mI15__939->SetBinContent(316,1.096939);
   S18_ThetaY_mI20_mI15__939->SetBinContent(317,1.076531);
   S18_ThetaY_mI20_mI15__939->SetBinContent(318,1.122449);
   S18_ThetaY_mI20_mI15__939->SetBinContent(319,1.020408);
   S18_ThetaY_mI20_mI15__939->SetBinContent(320,1);
   S18_ThetaY_mI20_mI15__939->SetBinContent(321,0.8061224);
   S18_ThetaY_mI20_mI15__939->SetBinContent(322,0.3877551);
   S18_ThetaY_mI20_mI15__939->SetBinContent(323,0.1122449);
   S18_ThetaY_mI20_mI15__939->SetBinContent(324,0.005102041);
   S18_ThetaY_mI20_mI15__939->SetBinError(310,0.005102041);
   S18_ThetaY_mI20_mI15__939->SetBinError(311,0.005102041);
   S18_ThetaY_mI20_mI15__939->SetBinError(312,0.02840696);
   S18_ThetaY_mI20_mI15__939->SetBinError(313,0.06331466);
   S18_ThetaY_mI20_mI15__939->SetBinError(314,0.07618972);
   S18_ThetaY_mI20_mI15__939->SetBinError(315,0.07032678);
   S18_ThetaY_mI20_mI15__939->SetBinError(316,0.0748106);
   S18_ThetaY_mI20_mI15__939->SetBinError(317,0.07411142);
   S18_ThetaY_mI20_mI15__939->SetBinError(318,0.07567549);
   S18_ThetaY_mI20_mI15__939->SetBinError(319,0.07215375);
   S18_ThetaY_mI20_mI15__939->SetBinError(320,0.07142857);
   S18_ThetaY_mI20_mI15__939->SetBinError(321,0.06413166);
   S18_ThetaY_mI20_mI15__939->SetBinError(322,0.04447856);
   S18_ThetaY_mI20_mI15__939->SetBinError(323,0.02393069);
   S18_ThetaY_mI20_mI15__939->SetBinError(324,0.005102041);
   S18_ThetaY_mI20_mI15__939->SetMinimum(0);
   S18_ThetaY_mI20_mI15__939->SetMaximum(1.321753);
   S18_ThetaY_mI20_mI15__939->SetEntries(1899);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__939->SetLineColor(ci);
   S18_ThetaY_mI20_mI15__939->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI20_mI15__939->SetMarkerColor(ci);
   S18_ThetaY_mI20_mI15__939->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI20_mI15__939->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI20_mI15__939->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__939->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__939->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__939->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI20_mI15__939->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI20_mI15__939->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__939->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__939->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI20_mI15__939->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI20_mI15__939->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI20_mI15__939->Draw("AE");
   
   TH1D *ThetaY_mI20_mI15__940 = new TH1D("ThetaY_mI20_mI15__940","",630,-1575,1575);
   ThetaY_mI20_mI15__940->SetBinContent(307,0.007314865);
   ThetaY_mI20_mI15__940->SetBinContent(308,0.2156799);
   ThetaY_mI20_mI15__940->SetBinContent(309,0.6012674);
   ThetaY_mI20_mI15__940->SetBinContent(310,0.8563462);
   ThetaY_mI20_mI15__940->SetBinContent(311,0.9997103);
   ThetaY_mI20_mI15__940->SetBinContent(312,1.092957);
   ThetaY_mI20_mI15__940->SetBinContent(313,1.161036);
   ThetaY_mI20_mI15__940->SetBinContent(314,1.188774);
   ThetaY_mI20_mI15__940->SetBinContent(315,1.201593);
   ThetaY_mI20_mI15__940->SetBinContent(316,1.197755);
   ThetaY_mI20_mI15__940->SetBinContent(317,1.178418);
   ThetaY_mI20_mI15__940->SetBinContent(318,1.150969);
   ThetaY_mI20_mI15__940->SetBinContent(319,1.099185);
   ThetaY_mI20_mI15__940->SetBinContent(320,1);
   ThetaY_mI20_mI15__940->SetBinContent(321,0.8632989);
   ThetaY_mI20_mI15__940->SetBinContent(322,0.6027159);
   ThetaY_mI20_mI15__940->SetBinContent(323,0.2176716);
   ThetaY_mI20_mI15__940->SetBinContent(324,0.007495926);
   ThetaY_mI20_mI15__940->SetBinError(307,0.0005146721);
   ThetaY_mI20_mI15__940->SetBinError(308,0.002794681);
   ThetaY_mI20_mI15__940->SetBinError(309,0.004666178);
   ThetaY_mI20_mI15__940->SetBinError(310,0.005568679);
   ThetaY_mI20_mI15__940->SetBinError(311,0.006016786);
   ThetaY_mI20_mI15__940->SetBinError(312,0.006291134);
   ThetaY_mI20_mI15__940->SetBinError(313,0.006484108);
   ThetaY_mI20_mI15__940->SetBinError(314,0.006561108);
   ThetaY_mI20_mI15__940->SetBinError(315,0.006596389);
   ThetaY_mI20_mI15__940->SetBinError(316,0.006585844);
   ThetaY_mI20_mI15__940->SetBinError(317,0.006532465);
   ThetaY_mI20_mI15__940->SetBinError(318,0.006455936);
   ThetaY_mI20_mI15__940->SetBinError(319,0.006309035);
   ThetaY_mI20_mI15__940->SetBinError(320,0.006017658);
   ThetaY_mI20_mI15__940->SetBinError(321,0.005591239);
   ThetaY_mI20_mI15__940->SetBinError(322,0.004671795);
   ThetaY_mI20_mI15__940->SetBinError(323,0.002807555);
   ThetaY_mI20_mI15__940->SetBinError(324,0.0005210029);
   ThetaY_mI20_mI15__940->SetEntries(404344);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__940->SetLineColor(ci);
   ThetaY_mI20_mI15__940->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI20_mI15__940->SetMarkerColor(ci);
   ThetaY_mI20_mI15__940->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI20_mI15__940->GetXaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__940->GetXaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__940->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__940->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__940->GetXaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__940->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI20_mI15__940->GetYaxis()->CenterTitle(true);
   ThetaY_mI20_mI15__940->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI20_mI15__940->GetYaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__940->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI20_mI15__940->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI20_mI15__940->GetYaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__940->GetZaxis()->SetLabelFont(42);
   ThetaY_mI20_mI15__940->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI20_mI15__940->GetZaxis()->SetTitleFont(42);
   ThetaY_mI20_mI15__940->Draw("AEsame");
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
   
   Double_t _fx3314[18] = {
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
   Double_t _fy3314[18] = {
   0,
   0,
   0,
   0.005957919,
   0.005103519,
   0.1447114,
   0.6767357,
   0.9570826,
   0.8067519,
   0.9158291,
   0.9135392,
   0.9752211,
   0.9283314,
   1,
   0.9337698,
   0.6433464,
   0.5156618,
   0.6806418};
   Double_t _felx3314[18] = {
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
   Double_t _fely3314[18] = {
   0,
   0,
   0,
   0.004928705,
   0.004221896,
   0.02586283,
   0.05460351,
   0.06425914,
   0.05864274,
   0.06261204,
   0.06304325,
   0.0659254,
   0.06580272,
   0.07161918,
   0.07445206,
   0.07379996,
   0.1092887,
   0.5635751};
   Double_t _fehx3314[18] = {
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
   Double_t _fehy3314[18] = {
   1.289962,
   0.04355724,
   0.01562281,
   0.01370135,
   0.01173638,
   0.03095765,
   0.05919947,
   0.06872759,
   0.06307058,
   0.06704829,
   0.06755365,
   0.0705423,
   0.07064325,
   0.07694463,
   0.08064232,
   0.08279845,
   0.1353533,
   1.577664};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3314,_fy3314,_felx3314,_fehx3314,_fely3314,_fehy3314);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3314 = new TH1F("Graph_Graph3314","",100,-100,100);
   Graph_Graph3314->SetMinimum(0);
   Graph_Graph3314->SetMaximum(1.5);
   Graph_Graph3314->SetDirectory(0);
   Graph_Graph3314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3314->SetLineColor(ci);
   Graph_Graph3314->GetXaxis()->SetRange(1,100);
   Graph_Graph3314->GetXaxis()->CenterTitle(true);
   Graph_Graph3314->GetXaxis()->SetLabelFont(42);
   Graph_Graph3314->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3314->GetXaxis()->SetTitleFont(42);
   Graph_Graph3314->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3314->GetYaxis()->CenterTitle(true);
   Graph_Graph3314->GetYaxis()->SetLabelFont(42);
   Graph_Graph3314->GetYaxis()->SetTitleFont(42);
   Graph_Graph3314->GetZaxis()->SetLabelFont(42);
   Graph_Graph3314->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3314->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3314);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.321753,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI20_mI15__941 = new TH2D("ThetaY_vs_Y_mI20_mI15__941","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(7991,202);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8017,5956);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8043,16604);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8069,23648);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8095,27607);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8121,30182);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8147,32062);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8173,32828);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8199,33182);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8225,33076);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8251,32542);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8277,31784);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8303,30354);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8329,27615);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8355,23840);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8381,16644);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8407,6011);
   ThetaY_vs_Y_mI20_mI15__941->SetBinContent(8433,207);
   ThetaY_vs_Y_mI20_mI15__941->SetEntries(404344);
   ThetaY_vs_Y_mI20_mI15__941->SetContour(20);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(0,0);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(1,1659.1);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(2,3318.2);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(3,4977.3);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(4,6636.4);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(5,8295.5);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(6,9954.6);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(7,11613.7);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(8,13272.8);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(9,14931.9);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(10,16591);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(11,18250.1);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(12,19909.2);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(13,21568.3);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(14,23227.4);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(15,24886.5);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(16,26545.6);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(17,28204.7);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(18,29863.8);
   ThetaY_vs_Y_mI20_mI15__941->SetContourLevel(19,31522.9);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI20_mI15__941->SetLineColor(ci);
   ThetaY_vs_Y_mI20_mI15__941->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI20_mI15__941->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI20_mI15__941->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__941->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__941->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__941->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__941->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI20_mI15__941->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI20_mI15__941->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI20_mI15__941->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__941->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__941->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI20_mI15__941->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI20_mI15__941->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI20_mI15__941->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-20_-15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-20_-15","Reco vertices","lpf");
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
