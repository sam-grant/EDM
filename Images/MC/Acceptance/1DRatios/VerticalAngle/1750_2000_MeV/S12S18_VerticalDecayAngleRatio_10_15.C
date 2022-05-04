void S12S18_VerticalDecayAngleRatio_10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:02 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-133.6618,125,2539.574);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_ThetaY_10_15__1356 = new TH1D("S12S18_ThetaY_10_15__1356","",630,-1575,1575);
   S12S18_ThetaY_10_15__1356->SetBinContent(309,1);
   S12S18_ThetaY_10_15__1356->SetBinContent(310,23);
   S12S18_ThetaY_10_15__1356->SetBinContent(311,180);
   S12S18_ThetaY_10_15__1356->SetBinContent(312,350);
   S12S18_ThetaY_10_15__1356->SetBinContent(313,421);
   S12S18_ThetaY_10_15__1356->SetBinContent(314,461);
   S12S18_ThetaY_10_15__1356->SetBinContent(315,456);
   S12S18_ThetaY_10_15__1356->SetBinContent(316,446);
   S12S18_ThetaY_10_15__1356->SetBinContent(317,443);
   S12S18_ThetaY_10_15__1356->SetBinContent(318,214);
   S12S18_ThetaY_10_15__1356->SetBinContent(319,26);
   S12S18_ThetaY_10_15__1356->SetBinError(309,1);
   S12S18_ThetaY_10_15__1356->SetBinError(310,4.795832);
   S12S18_ThetaY_10_15__1356->SetBinError(311,13.41641);
   S12S18_ThetaY_10_15__1356->SetBinError(312,18.70829);
   S12S18_ThetaY_10_15__1356->SetBinError(313,20.51828);
   S12S18_ThetaY_10_15__1356->SetBinError(314,21.47091);
   S12S18_ThetaY_10_15__1356->SetBinError(315,21.35416);
   S12S18_ThetaY_10_15__1356->SetBinError(316,21.11871);
   S12S18_ThetaY_10_15__1356->SetBinError(317,21.04757);
   S12S18_ThetaY_10_15__1356->SetBinError(318,14.62874);
   S12S18_ThetaY_10_15__1356->SetBinError(319,5.09902);
   S12S18_ThetaY_10_15__1356->SetMinimum(0);
   S12S18_ThetaY_10_15__1356->SetMaximum(2272.25);
   S12S18_ThetaY_10_15__1356->SetEntries(3021);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1356->SetLineColor(ci);
   S12S18_ThetaY_10_15__1356->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_ThetaY_10_15__1356->SetMarkerColor(ci);
   S12S18_ThetaY_10_15__1356->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S12S18_ThetaY_10_15__1356->GetXaxis()->SetRange(296,335);
   S12S18_ThetaY_10_15__1356->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1356->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1356->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1356->GetYaxis()->SetTitle("Normalised entries");
   S12S18_ThetaY_10_15__1356->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_10_15__1356->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1356->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1356->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_10_15__1356->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_10_15__1356->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_10_15__1356->Draw("AE");
   
   TH1D *ThetaY_10_15__1357 = new TH1D("ThetaY_10_15__1357","",630,-1575,1575);
   ThetaY_10_15__1357->SetBinContent(309,1);
   ThetaY_10_15__1357->SetBinContent(310,297);
   ThetaY_10_15__1357->SetBinContent(311,1097.818);
   ThetaY_10_15__1357->SetBinContent(312,1576.364);
   ThetaY_10_15__1357->SetBinContent(313,1827.591);
   ThetaY_10_15__1357->SetBinContent(314,1982.682);
   ThetaY_10_15__1357->SetBinContent(315,2064.545);
   ThetaY_10_15__1357->SetBinContent(316,2065.682);
   ThetaY_10_15__1357->SetBinContent(317,1999.591);
   ThetaY_10_15__1357->SetBinContent(318,1844.136);
   ThetaY_10_15__1357->SetBinContent(319,1545.909);
   ThetaY_10_15__1357->SetBinContent(320,1103.818);
   ThetaY_10_15__1357->SetBinContent(321,307.2273);
   ThetaY_10_15__1357->SetBinContent(322,1.090909);
   ThetaY_10_15__1357->SetBinError(309,0.2132007);
   ThetaY_10_15__1357->SetBinError(310,3.674235);
   ThetaY_10_15__1357->SetBinError(311,7.064052);
   ThetaY_10_15__1357->SetBinError(312,8.464803);
   ThetaY_10_15__1357->SetBinError(313,9.114401);
   ThetaY_10_15__1357->SetBinError(314,9.493256);
   ThetaY_10_15__1357->SetBinError(315,9.687258);
   ThetaY_10_15__1357->SetBinError(316,9.689924);
   ThetaY_10_15__1357->SetBinError(317,9.533651);
   ThetaY_10_15__1357->SetBinError(318,9.155566);
   ThetaY_10_15__1357->SetBinError(319,8.382637);
   ThetaY_10_15__1357->SetBinError(320,7.083329);
   ThetaY_10_15__1357->SetBinError(321,3.736961);
   ThetaY_10_15__1357->SetBinError(322,0.2226809);
   ThetaY_10_15__1357->SetEntries(389718);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1357->SetLineColor(ci);
   ThetaY_10_15__1357->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_10_15__1357->SetMarkerColor(ci);
   ThetaY_10_15__1357->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_10_15__1357->GetXaxis()->CenterTitle(true);
   ThetaY_10_15__1357->GetXaxis()->SetLabelFont(42);
   ThetaY_10_15__1357->GetXaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1357->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1357->GetXaxis()->SetTitleFont(42);
   ThetaY_10_15__1357->GetYaxis()->SetTitle("Tracks");
   ThetaY_10_15__1357->GetYaxis()->CenterTitle(true);
   ThetaY_10_15__1357->GetYaxis()->SetNdivisions(4000510);
   ThetaY_10_15__1357->GetYaxis()->SetLabelFont(42);
   ThetaY_10_15__1357->GetYaxis()->SetTitleSize(0.04);
   ThetaY_10_15__1357->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_10_15__1357->GetYaxis()->SetTitleFont(42);
   ThetaY_10_15__1357->GetZaxis()->SetLabelFont(42);
   ThetaY_10_15__1357->GetZaxis()->SetTitleOffset(1);
   ThetaY_10_15__1357->GetZaxis()->SetTitleFont(42);
   ThetaY_10_15__1357->Draw("AEsame");
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
   
   Double_t _fx3453[14] = {
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
   32.5};
   Double_t _fy3453[14] = {
   1,
   0.07744108,
   0.1639616,
   0.22203,
   0.2303579,
   0.2325134,
   0.2208719,
   0.2159093,
   0.2215453,
   0.1160435,
   0.01681858,
   0,
   0,
   0};
   Double_t _felx3453[14] = {
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
   Double_t _fely3453[14] = {
   0.8341351,
   0.01605639,
   0.01225479,
   0.01192188,
   0.01128097,
   0.01088223,
   0.01039114,
   0.01026969,
   0.01057469,
   0.007947153,
   0.003278253,
   0,
   0,
   0};
   Double_t _fehx3453[14] = {
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
   Double_t _fehy3453[14] = {
   2.476696,
   0.01979186,
   0.01320739,
   0.01258024,
   0.01184771,
   0.01140414,
   0.01089214,
   0.01077042,
   0.01109216,
   0.008511189,
   0.003989393,
   0.00166793,
   0.005993193,
   1.754018};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,_fx3453,_fy3453,_felx3453,_fehx3453,_fely3453,_fehy3453);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3453 = new TH1F("Graph_Graph3453","",100,-100,100);
   Graph_Graph3453->SetMinimum(0);
   Graph_Graph3453->SetMaximum(1.5);
   Graph_Graph3453->SetDirectory(0);
   Graph_Graph3453->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3453->SetLineColor(ci);
   Graph_Graph3453->GetXaxis()->SetRange(1,100);
   Graph_Graph3453->GetXaxis()->CenterTitle(true);
   Graph_Graph3453->GetXaxis()->SetLabelFont(42);
   Graph_Graph3453->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3453->GetXaxis()->SetTitleFont(42);
   Graph_Graph3453->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3453->GetYaxis()->CenterTitle(true);
   Graph_Graph3453->GetYaxis()->SetLabelFont(42);
   Graph_Graph3453->GetYaxis()->SetTitleFont(42);
   Graph_Graph3453->GetZaxis()->SetLabelFont(42);
   Graph_Graph3453->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3453->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3453);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,2272.25,510,"S");
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
   
   TH2D *ThetaY_vs_Y_10_15__1358 = new TH2D("ThetaY_vs_Y_10_15__1358","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8049,22);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8075,6534);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8101,24152);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8127,34680);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8153,40207);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8179,43619);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8205,45420);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8231,45445);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8257,43991);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8283,40571);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8309,34010);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8335,24284);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8361,6759);
   ThetaY_vs_Y_10_15__1358->SetBinContent(8387,24);
   ThetaY_vs_Y_10_15__1358->SetEntries(389718);
   ThetaY_vs_Y_10_15__1358->SetContour(20);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(0,0);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(1,2272.25);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(2,4544.5);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(3,6816.75);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(4,9089);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(5,11361.25);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(6,13633.5);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(7,15905.75);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(8,18178);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(9,20450.25);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(10,22722.5);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(11,24994.75);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(12,27267);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(13,29539.25);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(14,31811.5);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(15,34083.75);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(16,36356);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(17,38628.25);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(18,40900.5);
   ThetaY_vs_Y_10_15__1358->SetContourLevel(19,43172.75);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_10_15__1358->SetLineColor(ci);
   ThetaY_vs_Y_10_15__1358->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_10_15__1358->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_10_15__1358->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1358->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1358->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1358->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1358->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_10_15__1358->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_10_15__1358->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_10_15__1358->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1358->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1358->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_10_15__1358->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_10_15__1358->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_10_15__1358->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_10_15","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_ThetaY_10_15","Reco vertices","lpf");
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
