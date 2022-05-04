void S18_VerticalDecayAngleRatio_-25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:36:04 2022) by ROOT version 6.24/06
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
   upper_pad->Range(-125,-0.3278148,125,6.228481);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S18_ThetaY_mI25_mI20__1449 = new TH1D("S18_ThetaY_mI25_mI20__1449","",630,-1575,1575);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(313,0.07407407);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(314,1.777778);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(315,3.222222);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(316,3.259259);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(317,3.555556);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(318,2.740741);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(319,2.111111);
   S18_ThetaY_mI25_mI20__1449->SetBinContent(320,1);
   S18_ThetaY_mI25_mI20__1449->SetBinError(313,0.05237828);
   S18_ThetaY_mI25_mI20__1449->SetBinError(314,0.2566001);
   S18_ThetaY_mI25_mI20__1449->SetBinError(315,0.3454585);
   S18_ThetaY_mI25_mI20__1449->SetBinError(316,0.3474382);
   S18_ThetaY_mI25_mI20__1449->SetBinError(317,0.3628874);
   S18_ThetaY_mI25_mI20__1449->SetBinError(318,0.3186046);
   S18_ThetaY_mI25_mI20__1449->SetBinError(319,0.2796235);
   S18_ThetaY_mI25_mI20__1449->SetBinError(320,0.1924501);
   S18_ThetaY_mI25_mI20__1449->SetMinimum(0);
   S18_ThetaY_mI25_mI20__1449->SetMaximum(5.572851);
   S18_ThetaY_mI25_mI20__1449->SetEntries(479);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1449->SetLineColor(ci);
   S18_ThetaY_mI25_mI20__1449->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S18_ThetaY_mI25_mI20__1449->SetMarkerColor(ci);
   S18_ThetaY_mI25_mI20__1449->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   S18_ThetaY_mI25_mI20__1449->GetXaxis()->SetRange(296,335);
   S18_ThetaY_mI25_mI20__1449->GetXaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1449->GetXaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1449->GetXaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1449->GetYaxis()->SetTitle("Normalised entries");
   S18_ThetaY_mI25_mI20__1449->GetYaxis()->CenterTitle(true);
   S18_ThetaY_mI25_mI20__1449->GetYaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1449->GetYaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1449->GetZaxis()->SetLabelFont(42);
   S18_ThetaY_mI25_mI20__1449->GetZaxis()->SetTitleOffset(1);
   S18_ThetaY_mI25_mI20__1449->GetZaxis()->SetTitleFont(42);
   S18_ThetaY_mI25_mI20__1449->Draw("AE");
   
   TH1D *ThetaY_mI25_mI20__1450 = new TH1D("ThetaY_mI25_mI20__1450","",630,-1575,1575);
   ThetaY_mI25_mI20__1450->SetBinContent(310,0.009394082);
   ThetaY_mI25_mI20__1450->SetBinContent(311,0.9992954);
   ThetaY_mI25_mI20__1450->SetBinContent(312,3.064349);
   ThetaY_mI25_mI20__1450->SetBinContent(313,4.163457);
   ThetaY_mI25_mI20__1450->SetBinContent(314,4.759512);
   ThetaY_mI25_mI20__1450->SetBinContent(315,5.066228);
   ThetaY_mI25_mI20__1450->SetBinContent(316,5.034758);
   ThetaY_mI25_mI20__1450->SetBinContent(317,4.726397);
   ThetaY_mI25_mI20__1450->SetBinContent(318,4.188116);
   ThetaY_mI25_mI20__1450->SetBinContent(319,3.106388);
   ThetaY_mI25_mI20__1450->SetBinContent(320,1);
   ThetaY_mI25_mI20__1450->SetBinContent(321,0.01056834);
   ThetaY_mI25_mI20__1450->SetBinError(310,0.001485335);
   ThetaY_mI25_mI20__1450->SetBinError(311,0.01531948);
   ThetaY_mI25_mI20__1450->SetBinError(312,0.02682664);
   ThetaY_mI25_mI20__1450->SetBinError(313,0.03126974);
   ThetaY_mI25_mI20__1450->SetBinError(314,0.03343323);
   ThetaY_mI25_mI20__1450->SetBinError(315,0.03449368);
   ThetaY_mI25_mI20__1450->SetBinError(316,0.03438638);
   ThetaY_mI25_mI20__1450->SetBinError(317,0.03331672);
   ThetaY_mI25_mI20__1450->SetBinError(318,0.0313622);
   ThetaY_mI25_mI20__1450->SetBinError(319,0.02701003);
   ThetaY_mI25_mI20__1450->SetBinError(320,0.01532488);
   ThetaY_mI25_mI20__1450->SetBinError(321,0.001575435);
   ThetaY_mI25_mI20__1450->SetEntries(153835);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1450->SetLineColor(ci);
   ThetaY_mI25_mI20__1450->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ThetaY_mI25_mI20__1450->SetMarkerColor(ci);
   ThetaY_mI25_mI20__1450->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   ThetaY_mI25_mI20__1450->GetXaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1450->GetXaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1450->GetXaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1450->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1450->GetXaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1450->GetYaxis()->SetTitle("Tracks");
   ThetaY_mI25_mI20__1450->GetYaxis()->CenterTitle(true);
   ThetaY_mI25_mI20__1450->GetYaxis()->SetNdivisions(4000510);
   ThetaY_mI25_mI20__1450->GetYaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1450->GetYaxis()->SetTitleSize(0.04);
   ThetaY_mI25_mI20__1450->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_mI25_mI20__1450->GetYaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1450->GetZaxis()->SetLabelFont(42);
   ThetaY_mI25_mI20__1450->GetZaxis()->SetTitleOffset(1);
   ThetaY_mI25_mI20__1450->GetZaxis()->SetTitleFont(42);
   ThetaY_mI25_mI20__1450->Draw("AEsame");
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
   
   Double_t _fx3484[12] = {
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
   27.5};
   Double_t _fy3484[12] = {
   0,
   0,
   0,
   0.01779148,
   0.3735211,
   0.6360199,
   0.6473517,
   0.7522761,
   0.6544089,
   0.6796032,
   1,
   0};
   Double_t _felx3484[12] = {
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
   Double_t _fely3484[12] = {
   0,
   0,
   0,
   0.01149206,
   0.05378694,
   0.06819278,
   0.06901623,
   0.07682566,
   0.07605647,
   0.08994069,
   0.1918351,
   0};
   Double_t _fehx3484[12] = {
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
   Double_t _fehy3484[12] = {
   7.428027,
   0.06824883,
   0.02225294,
   0.02346879,
   0.062155,
   0.07593137,
   0.07680154,
   0.08510696,
   0.08545955,
   0.102719,
   0.2327656,
   6.585707};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3484,_fy3484,_felx3484,_fehx3484,_fely3484,_fehy3484);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3484 = new TH1F("Graph_Graph3484","",100,-100,100);
   Graph_Graph3484->SetMinimum(0);
   Graph_Graph3484->SetMaximum(1.5);
   Graph_Graph3484->SetDirectory(0);
   Graph_Graph3484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3484->SetLineColor(ci);
   Graph_Graph3484->GetXaxis()->SetRange(1,100);
   Graph_Graph3484->GetXaxis()->CenterTitle(true);
   Graph_Graph3484->GetXaxis()->SetLabelFont(42);
   Graph_Graph3484->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3484->GetXaxis()->SetTitleFont(42);
   Graph_Graph3484->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3484->GetYaxis()->CenterTitle(true);
   Graph_Graph3484->GetYaxis()->SetLabelFont(42);
   Graph_Graph3484->GetYaxis()->SetTitleFont(42);
   Graph_Graph3484->GetZaxis()->SetLabelFont(42);
   Graph_Graph3484->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3484->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3484);
   
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,5.572851,510,"S");
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
   
   TH2D *ThetaY_vs_Y_mI25_mI20__1451 = new TH2D("ThetaY_vs_Y_mI25_mI20__1451","",24,-60,60,630,-1575,1575);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8068,40);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8094,4255);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8120,13048);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8146,17728);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8172,20266);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8198,21572);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8224,21438);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8250,20125);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8276,17833);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8302,13227);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8328,4258);
   ThetaY_vs_Y_mI25_mI20__1451->SetBinContent(8354,45);
   ThetaY_vs_Y_mI25_mI20__1451->SetEntries(153835);
   ThetaY_vs_Y_mI25_mI20__1451->SetContour(20);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(0,0);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(1,1078.6);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(2,2157.2);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(3,3235.8);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(4,4314.4);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(5,5393);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(6,6471.6);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(7,7550.2);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(8,8628.8);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(9,9707.4);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(10,10786);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(11,11864.6);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(12,12943.2);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(13,14021.8);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(14,15100.4);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(15,16179);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(16,17257.6);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(17,18336.2);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(18,19414.8);
   ThetaY_vs_Y_mI25_mI20__1451->SetContourLevel(19,20493.4);

   ci = TColor::GetColor("#000099");
   ThetaY_vs_Y_mI25_mI20__1451->SetLineColor(ci);
   ThetaY_vs_Y_mI25_mI20__1451->GetXaxis()->SetTitle("Decay y-position [mm]");
   ThetaY_vs_Y_mI25_mI20__1451->GetXaxis()->SetRange(4,21);
   ThetaY_vs_Y_mI25_mI20__1451->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1451->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1451->GetXaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1451->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1451->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   ThetaY_vs_Y_mI25_mI20__1451->GetYaxis()->SetRange(307,324);
   ThetaY_vs_Y_mI25_mI20__1451->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Y_mI25_mI20__1451->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1451->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1451->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Y_mI25_mI20__1451->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Y_mI25_mI20__1451->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Y_mI25_mI20__1451->Draw("COL");
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
   TLegendEntry *entry=leg->AddEntry("ThetaY_-25_-20","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_ThetaY_-25_-20","Reco vertices","lpf");
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
